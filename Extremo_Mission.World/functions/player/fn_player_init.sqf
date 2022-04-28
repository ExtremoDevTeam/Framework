/*
	## EXTREMO
	## Nikko Renolds
*/

params [
	["_BEGuid","",[""]]
];

if(isFinal "extremo_var_player_beguid")exitWith{
	[0,"ERROR","An error occured (fn_player_init.sqf) ran twice"] call Extremo_fnc_gui_splashScreen; uiSleep 5;
	"extremoError" call BIS_fnc_endMission;
	false
};

//--- Register mission ended event (removed after init)
Extremo_var_RscDisplayMission_UnloadEVH = (uiNamespace getVariable "RscDisplayMission") displayAddEventHandler ["Unload",
{
	[0,"ERROR","An error occured"] call Extremo_fnc_gui_splashScreen; 
}];

extremo_var_player_beguid = compileFinal str(_BEGuid);  //--- Conatins players battleEye Guid
waitUntil{!isNull player};	//--- Make sure player object is loaded before any requests
missionNamespace setVariable [format["extremo_var_player_%1_steamName",getPlayerUID player],profileNameSteam,true];

//--- Register key handlers
waitUntil {!isNull(uiNamespace getVariable ["RscDisplayMission",displayNull])};	 //--- Make sure display is loaded before any requests
[0,"SETUP","Registering key handlers"] call Extremo_fnc_gui_splashScreen; uiSleep round(random [1,2,5]);
if([uiNamespace getVariable "RscDisplayMission",["KeyDown","KeyUp"]] call extremo_fnc_dik_initEventHandlers)then{
	[0,"LOADING","%Loading%"] call Extremo_fnc_gui_splashScreen; uiSleep round(random [1,2,5]);
}else{
	[0,"ERROR","An error occured whilst registering key handlers"] call Extremo_fnc_gui_splashScreen; uiSleep 2;
	"extremoError" call BIS_fnc_endMission;
};

//--- Make sure database is ready
if(isNil "extdb_var_database_error")then{
	[0,"SETUP","Waiting for database to ready up"] call Extremo_fnc_gui_splashScreen;
	waitUntil {!isNil "extdb_var_database_error"};
	if(extdb_var_database_error)then{
		[0,"ERROR","An server-side error occured whilst loading database"] call Extremo_fnc_gui_splashScreen; uiSleep 5;
		"extremoError" call BIS_fnc_endMission;
	}else{
		[0,"SETUP","Database online"] call Extremo_fnc_gui_splashScreen; uiSleep 2;
	};
};

//--- Request server to handle player login 
[0,"SETUP","Requesting your data"] call Extremo_fnc_gui_splashScreen; uiSleep round(random [1,2,5]);
["characters", "load", player] remoteExec ["extremo_fnc_database_server", 2];
waitUntil {player getVariable ["ExtremoDataLoaded",false]};

//--- Remove (mission ended event)
(uiNamespace getVariable "RscDisplayMission") displayRemoveEventHandler ["Unload",Extremo_var_RscDisplayMission_UnloadEVH];

//--- Data sync
[] spawn {
	private _newRandomTime = compile "round(random[5 * 60, 10 * 60, 15 * 60])";
	private _nextSyncAt = call _newRandomTime;
	while {!extdb_var_database_error} do {
		uiSleep _nextSyncAt;
		if(player getVariable ["ExtremoDataLoaded",false])then{
			if(["characters", "update", false] call extremo_fnc_database_client)then{
				_nextSyncAt = call _newRandomTime;
				[5,"SYNC", format ["Next sync in (%1)mins",round(_nextSyncAt / 60)],false,false] call Extremo_fnc_gui_splashScreen;
			};
		};
	};
};

true