/*
	## EXTREMO
	## Nikko Renolds
*/
 
params [
	["_mode",""],
	["_table",""], 
	["_params",[]],
	["_single",false]
];


private _resException = "";
private _res = [];

with serverNamespace do
{
	if(extremo_var_rcon_RestartMode > 0 OR extdb_var_database_error)exitWith{};

	private _qstring = "";

	//--- Build Query
	switch _mode do 
	{
		case "CREATE": 
		{ 
			private _columns = [];
			private _values = [];
			{
				_columns pushBack (_x#0);
				_values pushBack (_x#1);
			} forEach _params; 
			_qstring = ("1:" + str(call extdb_var_database_key) + ":INSERT INTO " + _table + " (" + (_columns joinString ",") + ")VALUES(" + (_values joinString ",") + ")");
			_resException = "DB:Create:Task-success";
			//"1:464:INSERT INTO players (name,aliases,playerid,cash,safe)VALUES(Nikko2,""[``test``]"",76561198276956558,0,10000)"
		};
		case "READ": 
		{
			private _columns = (_params#0) joinString ",";
			private _clauses = [];{_clauses pushBack (_x joinString "=")} forEach (_params#1);
			_qstring = ("2:" + str(call extdb_var_database_key) + ":SELECT " + _columns + " FROM " + _table);
			if(count _clauses > 0)then{_qstring = _qstring + (" WHERE " + (_clauses joinString " AND "));};
			//"2:464:SELECT name,cash,safe FROM players WHERE playerid=76561199109931625"
		};
		case "UPDATE": 
		{ 
			private _columns = [];{_columns pushBack (_x joinString "=")} forEach (_params#0);
			private _clauses = [];{_clauses pushBack (_x joinString "=")} forEach (_params#1);
			_qstring = ("1:" + str(call extdb_var_database_key) + ":UPDATE " + _table + " SET " + (_columns joinString ","));
			if(count _clauses > 0)then{_qstring = _qstring + (" WHERE " + (_clauses joinString " AND "));};
			_resException = "DB:Update:Task-success";
			//"1:65207:UPDATE characters SET Wallet=99999 WHERE S64ID=76561199109931625"
		};
		case "DELETE": 
		{  
			private _clauses = [];{_clauses pushBack (_x joinString "=")} forEach (_params#0);
			_qstring = ("1:" + str(call extdb_var_database_key) + ":DELETE FROM " + _table);
			if(count _clauses > 0)then{_qstring = _qstring + (" WHERE " + (_clauses joinString " AND "));};
			_resException = "DB:Delete:Task-success";
			//"1:464:DELETE FROM vehicles WHERE id=1"
		};
		case "CALL": 
		{  
			_qstring = ("1:" + str(call extdb_var_database_key) + ":CALL " + _table);
			_resException = "DB:Call:Task-success";
			//"1:464:CALL deleteOldGangs"
		};
		default
		{
			_qstring = ("2:" + str(call extdb_var_database_key) + ":" + _mode);
		};
	};
 
    //--- Send querry to DLL (returns: sessionID for given key)
    private _keyResponse = ("extDB3" callExtension _qstring);
	
	//--- No Database Return... Task Completed
	if(_mode in ["UPDATE","CREATE","DELETE","CALL"])exitWith{
		_resException = format ["%1:Task-success",_resException];
		_resException call Extremo_fnc_database_systemlog;
	};

	//--- Parse response
	if not((parseSimpleArray _keyResponse) params [
		["_responseCode",0,[0]],
		["_sessionID","0",[""]]
	])exitWith{
		"DLL KeyResponse parsing error" call Extremo_fnc_database_systemlog;
	}; 
	
	//format ["_keyResponse = %1",_keyResponse] call Extremo_fnc_database_systemlog;

	//--- Get query result
	private _extensionBusy = true;
	while{_extensionBusy} do
	{  
		//--- Get query message
		private _queryResult = "extDB3" callExtension ("4:" + _sessionID);

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
			//--- DLL returned a non handled response 
			default 
			{
				_resException = "DB:Read:Unhandled-response";

				//--- Task Completed
				false
			};
		};
	};

	//--- Check query is parsed into array
	if(typeName _res isNotEqualTo "ARRAY")exitWith{
		_resException = "DB:Read:Error-parsing-response";
		_resException call Extremo_fnc_database_systemlog;
	};

	//--- Return single result?
	if (count _res > 0 AND _single) then {
		_res = [_res] call (missionNamespace getVariable "BIS_fnc_arrayShift");
	};
};

[_res,_resException] select (_resException isNotEqualTo "");

/* 
	["CREATE", "players", 
		[//What
			["serverID", 		["DB","INT", (call extremo_var_serverID)] call Extremo_fnc_database_parse],
			["BEGuid", 			["DB","STRING", "092dd37cc6d0e2781ea42ee334debd28"] call Extremo_fnc_database_parse],
			["pid", 			["DB","STRING", "76561198276956558"] call Extremo_fnc_database_parse],
			["name", 			["DB","STRING", "nikko test"] call Extremo_fnc_database_parse],
			["cash", 			["DB","A2NET", 0] call Extremo_fnc_database_parse],
			["aliases", 		["DB","ARRAY", ["nikko test"]] call Extremo_fnc_database_parse],
			["cop_licenses", 	["DB","ARRAY", []] call Extremo_fnc_database_parse],
			["med_licenses", 	["DB","ARRAY", []] call Extremo_fnc_database_parse],
			["civ_licenses", 	["DB","ARRAY", []] call Extremo_fnc_database_parse],
			["civ_gear", 		["DB","ARRAY", []] call Extremo_fnc_database_parse],
			["cop_gear", 		["DB","ARRAY", []] call Extremo_fnc_database_parse],
			["med_gear", 		["DB","ARRAY", []] call Extremo_fnc_database_parse]
		]
	]call Extremo_fnc_database_request;

	["READ", "players", [
		[//What
			"serverID", "BEGuid", "pid", "name", "cash"
		],
		[//Where
			["BEGuid",str("092dd37cc6d0e2781ea42ee334debd28")]
		]
	],true]call Extremo_fnc_database_request;

	["UPDATE", "players", [
		[//What
			["cash",["DB","A2NET", 500] call Extremo_fnc_database_parse]
		],
		[//Where
			["BEGuid",str("092dd37cc6d0e2781ea42ee334debd28")]
		]
	]]call Extremo_fnc_database_request;
	
	["DELETE", "players", [
		[//Where
			["BEGuid",str("092dd37cc6d0e2781ea42ee334debd28")]
		]
	],true]call Extremo_fnc_database_request;

	["CALL", "deleteOldGangs"]call Extremo_fnc_database_request;

*/