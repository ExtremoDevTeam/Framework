/*
    File: fn_database_rawasync_request.sqf
    Author: Ni1kko
    Description: Commits an asynchronous call to ExtDB3
    Parameters:
        0: STRING (Query to be ran)
        1: INTEGER (1 = ASYNC + not return for update/insert, 2 = ASYNC + return for query's)
        3: BOOL (True to return a single array, false to return multiple entries)
*/

params [ 
    ["_queryStmt","",[""]],
    ["_mode",0,[0]],
    ["_single",false]
];

private _res = ["DB:Task-failure", false];

with serverNamespace do
{
	if(extremo_var_rcon_RestartMode > 0 OR extdb_var_database_error)exitWith{_res = []};

    //--- Send querry to DLL (returns: sessionID for given key)
    private _keyResponse = ("extDB3" callExtension format ["%1:%2:%3",_mode,call extdb_var_database_key,_queryStmt]);

    //--- No Database Return... Task Completed
	if(_mode isEqualTo 1)exitWith{_res};

    //--- Parse response
	if not((parseSimpleArray _keyResponse) params [
		["_responseCode",0,[0]],
		["_sessionID","0",[""]]
	])exitWith{
		"DLL KeyResponse parsing error" call Extremo_fnc_database_systemlog;
	}; 

	//--- Get query result
	private _extensionBusy = true;
	while{_extensionBusy} do
	{  
		//--- Get query message
		private _queryResult = "extDB3" callExtension ("4:" + _sessionID); 
		format ["_queryResult = %1",_queryResult] call Extremo_fnc_database_systemlog;

		//--- Parse response
		(parseSimpleArray _queryResult) params [
			["_responseCode",0,[0]],
			["_responseData",[]]
		];
		
		//--- Handle different responses from DLL
		_extensionBusy = switch _responseCode do 
		{
            //--- DLL returned a complete message
			case 1: 
			{ 
				//--- Return query
				_res = _responseData;

				//--- Task Completed
				false
			};
			//--- DLL returned busy message
			case 3: 
			{
				//--- Delay before next request
				if canSuspend then { uiSleep 0.25 };

				//--- Task Busy
				true
			};
			//--- DLL returned a Multi-Part Message (result to large for single string response due to the output buffer of DLL has a hard limit (10kb) so we need to split it up)
			case 5:
			{
				private _multiPartIncoming = true;
				private _multiPartMessage = "";

				//--- Get full message from DLL
				while{_multiPartIncoming} do
				{
					private _pipeMessage = "extDB3" callExtension ("5:" + _sessionID);
					
					//--- Alter state depending on DLL response
					_multiPartIncoming = _pipeMessage isNotEqualTo "";

					//--- Are we receiving any parts of the message?
					if _multiPartIncoming then {
						_multiPartMessage = _multiPartMessage + _pipeMessage;
					};
				};
				
				//--- Construct, Parse & Return the multiPart message
				_res = if(_multiPartMessage isNotEqualTo "")then{parseSimpleArray _multiPartMessage}else{["DB:Read:Pipe-message-lost",false]};

				//--- Task Completed
				false
			};
			default 
			{
				//--- Task Completed
				false
			};
		};
	};

	//--- Check query is parsed into array
	if(typeName _res isNotEqualTo "ARRAY")exitWith{
		["DLL Response error: response isEqualTo (%1) Expected (STRING)",typeName _res] call Extremo_fnc_database_systemlog;
		_res = ["DB:Read:Task-failure",false];
	};

	//--- Return single result?
	if (count _res > 0 AND _single) then {
		_res = [_res] call (missionNamespace getVariable "BIS_fnc_arrayShift");
	};
};

_res