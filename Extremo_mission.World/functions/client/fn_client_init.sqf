/*
	## EXTREMO
	## Nikko Renolds
*/

params [
	["_BEGuid","",[""]]
];

private _kick = compile '[0,"ERROR",param [0,"An error occured"]] call Extremo_fnc_gui_splashScreen; uiSleep 4; "extremoError" call BIS_fnc_endMission; false';

3 fadeSound 0;
showChat false;
enableRadio false;
showSubtitles false;
enableSentences false;
setGroupIconsVisible [false, false];

//--- Ran twice... (client may be looping due to errors)
if !(isNil "Extremo_var_event_preloadFinishedEH") exitWith (_kick);
"(fn_client_init.sqf) Client setup started" call Extremo_fnc_client_log;

//--- Version check
waitUntil {!isNil "Extremo_var_system_versionOK" AND {!isNil "Extremo_var_system_versionInfo" AND {!isNil "extremo_fnc_system_versionInfo"}}};
if !Extremo_var_system_versionOK exitWith 
{
	//--- 
	(getText(missionConfigFile >> "CfgPatches" >> "Extremo_mission" >> "frameworkVersion") call extremo_fnc_system_versionInfo)params[
		["_clientVersionFull",""],
		["_clientVersionShort",""],
		["_clientVerMajor",0],
		["_clientVerMinor",0],
		["_clientVerPatch","0"],
		["_clientPreReleaseFull",""], 
		["_clientPreReleaseShort",""],
		["_clientPreReleaseBuild",0],
		["_clientMeta",""]
	];

	//--- 
	(Extremo_var_system_versionInfo call extremo_fnc_system_versionInfo)params[
		["_serverVersionFull",""],
		["_serverVersionShort",""],
		["_serverVerMajor",0],
		["_serverVerMinor",0],
		["_serverVerPatch","0"],
		["_serverPreReleaseFull",""], 
		["_serverPreReleaseShort",""],
		["_serverPreReleaseBuild",0],
		["_serverMeta",""]
	];
	
	//--- 
	for "_i" from 0 to 5 do {
		[0,"ERROR", format["current version: %1 ", _clientVersionFull]] call Extremo_fnc_gui_splashScreen;
		for "_i" from 0 to 3 do {
			uiSleep 0.5;
			[0,"ERROR", format["expected version: %1 ", _serverVersionFull]] call Extremo_fnc_gui_splashScreen;
		}; 
	};
	
	//--- 
	format["(fn_client_init.sqf) Error, expected version: %1 ", _serverVersionFull] call _kick;
};

//--- Setup variables
"(fn_client_init.sqf) Declaring mission variables" call Extremo_fnc_client_log;
waitUntil extremo_fnc_client_initVariables;

//--- Setup eventhandlers
"(fn_client_init.sqf) Registering mission eventhandlers" call Extremo_fnc_client_log;
waitUntil extremo_fnc_client_initEventhandlers;

//--- Setup Traders
waitUntil extremo_fnc_world_setupTraders;

//--- Setup messages
"(fn_client_init.sqf) Starting messages thread" call Extremo_fnc_client_log;
[] spawn extremo_fnc_client_messages;

//--- Setup toaster
[] spawn extremo_fnc_gui_toasterScreenEH;

//--- Done
"(fn_client_init.sqf) Client setup finished!" call Extremo_fnc_client_log;

true