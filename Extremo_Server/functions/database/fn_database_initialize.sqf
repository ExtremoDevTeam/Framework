/*
	## EXTREMO
	## Nikko Renolds
*/

#define DLL "extDB3"
#define DLLVERSION 1.031

if(!isServer)exitwith{false};

private _config = (configFile >> "CfgExtDB");
private _reconnected = false;

private _fnc_handleException = {
	params [
		["_errorCode",0,[0]]
	];
	
	switch _errorCode do 
	{
		//--- Reconnected in error state
		case 2:
		{
			format ["%1 V%2 System: Reconnected",DLL,extdb_var_database_version] call Extremo_fnc_database_systemlog;
			[missionNamespace,["extdb_var_database_error",false]] remoteExec ["setVariable", -2, "extdb_var_database_errorJIP"];
		};
		//--- Reconnected
		case 1: 
		{
			format ["%1 V%2 Warning: System already setup and running! Mission may been looping...",DLL,extdb_var_database_version] call Extremo_fnc_database_systemlog;
		};
		//--- Undefined error occured
		default 
		{
			[missionNamespace,["extdb_var_database_error",true]] remoteExec ["setVariable", -2, "extdb_var_database_errorJIP"];
		};
	};
};

with serverNamespace do 
{ 
	//--- Reload variables from uiNamespace into serverNamespace or set default into serverNamespace
	if(isNil "extdb_var_database_key")then
	{
		//--- Check DLL if connection is still locked
		_reconnected = (DLL callExtension "9:LOCK_STATUS" isEqualTo "[1]");

		//--- Reload values into the serversNamespace from uiNamespace
		{
			_x set [1, uiNamespace getVariable [_x#0, _x#1]];
			currentNamespace setVariable _x;
		}forEach [
			["extdb_var_database_error",_reconnected],
			["extdb_var_database_key",{round(random 99999)}],
			["extdb_var_database_version",parseNumber(DLL callExtension "9:VERSION")],
			["extdb_var_database_prepared",nil],
			["extdb_var_database_prepared_async",false],
			["extdb_var_database_prepared_asynclock",false],
			["extdb_var_database_headless_client",2],
			["extdb_var_database_headless_clients",[]],
			["extdb_var_database_headless_clientconnected",-1],
			["extdb_var_database_headless_clientdisconnected",-1]
		];
	};

	//--- Handle missing DLL
	if(extdb_var_database_version isEqualTo "") exitWith {
		productVersion params [
			["_name","",[]],			//product name
			["_nameShort","",[]],		//product short name
			["_version",-1,[]],			//product version number
			["_build",-1,[]],			//product build number 
			["_branch","",[]],			//product branch 
			["_modded",false,[]],		//product running with mods (true) or vanilla (false) 
			["_platform","",[]],		//product platform (Windows, Linux or OSX)
			["_architecture","",[]]		//product architecture (x64 or x86)
		];

		private _dllFile = format[["%1.dll","%1_x64.dll"] select (_architecture isEqualTo "x64"),DLL];

		if(_platform isEqualTo "Linux")then{
			_dllFile = format[["%1.so","%1_x64.so"] select (_architecture isEqualTo "x64"),DLL];
		};

		if(_platform in ["Windows","Linux"])then{	
			format ["%1 V%2 Error: System Dll extension (@ExtremoServer/%3) is missing...",DLL,extdb_var_database_version,_dllFile] call Extremo_fnc_database_systemlog;
		}else{
			format ["%1 V%2 Error: System Dll extension is not compatible with (%3)...",DLL,extdb_var_database_version,_platform] call Extremo_fnc_database_systemlog;	
		};

		nul = [0] spawn _fnc_handleException;
	};
	
	//--- Handle reconnect. happens when mission ends or restarts
	if _reconnected exitWith {
		if(extdb_var_database_error) exitWith {
			nul = [1] spawn _fnc_handleException;
		};

		nul = [2] spawn _fnc_handleException; 
	};
	
};

try {
	//--- Config 
	if(!isClass _config) throw "Config not found";
	private _profile = getText(_config >> "profile");
	private _sqlcustom = getNumber(_config >> "sqlcustom") isEqualTo 1;
	private _sqlcustomfile = getText(_config >> "sqlcustomfile");
	private _procedures =  getArray(_config >> "startup_procedures");
	private _headless =  getNumber(_config >> "headlessclient") isEqualTo 1;

	with serverNamespace do 
	{ 
		Extremo_fnc_database_systemlog = missionNamespace getVariable "Extremo_fnc_database_systemlog";
		
		private _databasekey = call extdb_var_database_key;
		
		//--- Version
		if(extdb_var_database_version < DLLVERSION) throw format ["%1 V%2 Error: version outdated (V%2) should be (V%3) or newer",DLL,extdb_var_database_version,DLLVERSION];
		format ["%1 V%2 System: Loaded",DLL,extdb_var_database_version] call Extremo_fnc_database_systemlog;

		//--- Profile
		private _profileRes = DLL callExtension format ["9:ADD_DATABASE:%1",_profile];
		if(_profileRes isNotEqualTo "[1]") throw format ["%1 V%2 Error: Unable to load profile (%3) from %1-conf.ini",DLL,extdb_var_database_version,_profile];
		format ["%1 V%2 System: profile (%3) loaded",DLL,extdb_var_database_version,_profile] call Extremo_fnc_database_systemlog;

		//--- Protocol
		private _protocolRes = (if(_sqlcustom)then{
			DLL callExtension format["9:ADD_DATABASE_PROTOCOL:%1:SQL_CUSTOM_V2:%2:%3",_profile,_databasekey,_sqlcustomfile];
		}else{
			DLL callExtension format ["9:ADD_DATABASE_PROTOCOL:%1:SQL:%2:TEXT2",_profile,_databasekey];
		});
		if(_protocolRes isNotEqualTo "[1]") throw format ["%1 V%2 Error: Unable to add protocol (%3) to profile (%4)",DLL,extdb_var_database_version,["Raw","Custom"]select _sqlcustom,_profile];
		format ["%1 V%2 System: SQL%3 Protocol Loaded",DLL,extdb_var_database_version,["Raw","Custom"]select _sqlcustom] call Extremo_fnc_database_systemlog;

		//--- Lock profile
		private _lockRes = DLL callExtension "9:LOCK";
		private _lockedRes = DLL callExtension "9:LOCK_STATUS";
		if(_lockRes isNotEqualTo "[1]" OR _lockedRes isNotEqualTo "[1]") throw format ["%1 V%2 Error: Unable to lock profile (%3)",_profile];
		format ["%1 V%2 System: Profile (%3) locked",DLL,extdb_var_database_version,_profile] call Extremo_fnc_database_systemlog;
		
		//--- Connection OKAY
		extdb_var_database_prepared = compileFinal str(_sqlcustom);
		extdb_var_database_key = compileFinal str(_databasekey);
		[missionNamespace,["extdb_var_database_error",false]] remoteExec ["setVariable", -2, "extdb_var_database_errorJIP"];
		format ["%1 V%2 System: Connected using profile: (%3)",DLL,extdb_var_database_version,_profile] call Extremo_fnc_database_systemlog;
		
		//--- Cache variables incase mission ends or restarts
		{uiNamespace setVariable [_x,currentNamespace getVariable [_x,nil]]}forEach [
			"extdb_var_database_error",
			"extdb_var_database_key",
			"extdb_var_database_version",
			"extdb_var_database_prepared",
			"extdb_var_database_prepared_async",
			"extdb_var_database_prepared_asynclock",
			"extdb_var_database_headless_client",
			"extdb_var_database_headless_clients",
			"extdb_var_database_headless_clientconnected",
			"extdb_var_database_headless_clientdisconnected"
		];
	};

	//--- Setup server to support headless clients
	if (_headless) then {
		[DLL] call Extremo_fnc_database_initializeHC;
	};

	//--- Run stored procedures for SQL side cleanup
	{
		["CALL", _x]call Extremo_fnc_database_request;
		format ["%1 V%2 System: Executing procedure (%1)",DLL,extdb_var_database_version, _x] call Extremo_fnc_database_systemlog;
	} forEach _procedures;
} catch { 
	_exception call Extremo_fnc_database_systemlog;
	nul = [0] spawn _fnc_handleException;
};

//--- ExtDB Helpers
Extremo_fnc_database_getUpTime = compileFinal "
	if(hasInterface OR {extdb_var_database_version isEqualTo ''}) exitWith {
		private _exitmsg = 'Error [Extremo_fnc_database_getUpTime] requires extDB3!';
		diag_log _exitmsg; systemChat _exitmsg;
	};

	private _uptime = parseNumber('extDB3' callExtension '9:UPTIME:MINUTES');
	
	if(param[0,true] AND _uptime > 0)then{
		private _hrs = floor((_uptime * 60 ) / 60 / 60);
		private _mins = (((_uptime * 60 ) / 60 / 60) - _hrs);
		if(_mins == 0)then{_mins = 0.0001;};
		_mins = round(_mins * 60);
		_uptime = [_hrs,_mins] joinString ':';
	};

	_uptime
";

true