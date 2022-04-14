/*
	## EXTREMO Survival
	## Nikko Renolds
*/

//--- Get version info
(getText(configFile >> "CfgPatches" >> "Extremo_Server" >> "frameworkVersion") call extremo_fnc_system_versionInfo)params[
	["_versionFull",""],
	["_versionShort",""],
	["_verMajor",0],
	["_verMinor",0],
	["_verPatch","0"],
	["_preReleaseFull",""], 
	["_preReleaseShort",""],
	["_preReleaseBuild",0],
	["_meta",""]
];

//--- Init Beguid hashmap
ExtremoBeGuidHashmap = createHashMap;

//--- Add Connection Event Handlers
Extremo_ClientConnected =    addMissionEventHandler ["PlayerConnected",      Extremo_fnc_event_playerConnected,    []];
Extremo_ClientDisconnected = addMissionEventHandler ["PlayerDisconnected",   Extremo_fnc_event_playerDisconnected, []];

//---
Extremo_var_system_version = compileFinal str format["%1.%2%3",_versionShort,_verPatch,[" ("+_preReleaseShort+")",""]select(_preReleaseShort isEqualTo "")," "];
Extremo_var_system_versionInfo = _versionFull select [1, count _versionFull];

//--- temp
Extremo_fnc_netidFromOwner = compileFinal ("((allPlayers apply {if((param [0,""]) isEqualTo owner _x)then{netID _x}else{''}}) - ['']) param [0,""]");
Extremo_fnc_system_kick = compileFinal ('
	params [["_ownerID",-999,[0]],["_message","",[""]]];
	private _netID = _ownerID call Extremo_fnc_netidFromOwner;
	private _player = _netID call BIS_fnc_objectFromNetId;
	if(isNull _player || _ownerID <= 4)exitWith{false};
	format [["Kicking Survivor (%1)","Kicking Survivor (%1) | Reason (%2)"] select (_message isNotEqualTo ""),getPlayerUID _player,_message] call Extremo_fnc_server_log;
	[_message,{[0,"ERROR",_this,true,true] call Extremo_fnc_gui_splashScreen;uiSleep 3;"extremoError" call BIS_fnc_endMission;}] remoteExec ["spawn", _ownerID];
	true
');
