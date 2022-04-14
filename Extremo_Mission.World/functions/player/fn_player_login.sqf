/*
	## EXTREMO
	## Nikko Renolds
*/

params [ 
	["_oldcharacter",player],
	["_deleteoldcharacter",false],
	["_LastLoadout",[]],
	["_LastPosition",[]],
	["_Wallet",nil]
];

[0,"LOGIN", "%Loading%",true,true] call Extremo_fnc_gui_splashScreen;
uiSleep 1.5;

Extremo_var_medical_healthState = 0;
Extremo_var_medical_executer = objNull;
extremo_var_gui_playerSpawned = compile str(false);

//--- 
3 fadeSound 0;
showChat false;
enableRadio false;
showSubtitles false;
enableSentences false;
setGroupIconsVisible [false, false];

//--- Close Briefing 
if(!isNull findDisplay 53)then{ 
	ctrlActivate (findDisplay 53 displayCtrl 1);
	findDisplay 53 closeDisplay 1;
};

//Get current group
private _group = group player;

//No group! we need a group to create unit so this check is a failsafe.
if(_group isEqualTo grpNull)then{_group = createGroup independent};


[0,"LOGIN", "Requesting character",true,true] call Extremo_fnc_gui_splashScreen;
uiSleep 2.5;

//
private _spawnIslandMarker = [missionConfigFile >> "CfgSpawn" >> "Extremo" >> worldName, "spawnIsland", ""] call BIS_fnc_returnConfigEntry;
private _spawnIslandPos = getMarkerPos _spawnIslandMarker;
if(count _spawnIslandPos < 2)exitWith{
	[0,"ERROR","An config error occured whilst setting characters position",true,true] call Extremo_fnc_gui_splashScreen;
	uiSleep 3;
	"extremoError" call BIS_fnc_endMission;
};

//
private _newcharacter = _group createUnit ["Extremo_Unit_Player", _spawnIslandPos, [], 0, "CAN_COLLIDE"]; 
private _LastDir = random 360;

//Reveal newbody to the oldbody
player reveal [_newcharacter, 4];

//
selectPlayer _newcharacter; 
setStaminaScheme "Normal";//"Normal", "FastDrain", "Exhausted" or "Default"

//--- 
{ 
	//--- Disable parts of the AI behaviour
	_x disableAI "FSM";
	_x disableAI "MOVE";
	_x disableAI "AUTOTARGET";
	_x disableAI "TARGET";
	_x disableAI "CHECKVISIBLE";

	//--- Character Setup
	_x setVariable ["extremo_var_XM8Online", (profileNamespace getVariable ["ExtremoEnable8GNetwork", false]), true]; 
	_x setVariable ["extremo_var_incapacitated", false, true];
	_x setVariable ["BIS_noCoreConversations", true];
	_x disableConversation true;
	_x setSpeaker "NoVoice";
	_x enableFatigue false;
	_x enableStamina true;
	_x enableSimulation true;
	_x addRating 1e12; //Set our rating to a high value, this is for a ARMA engine thing.	
	_x playMove "";
	_x switchMove "";
	_x setUnconscious false;
	_x allowDamage true;
	_x setVariable ["ExtremoName", profileName, true];
	_x setVariable ["ExtremoUID", getPlayerUID _newcharacter, true];
}forEach [_newcharacter, _oldcharacter];

//--- Wallet
if(isNil "_Wallet")then{ 
	_Wallet = 0;
};
_newcharacter setVariable ["ExtremoWallet", _Wallet, true];

//--- Gear
if (count _LastLoadout > 0) then {
	_oldcharacter setUnitLoadout (configFile >> "EmptyLoadout"); 
	_newcharacter setUnitLoadout [_LastLoadout, false];
	[0,"LOGIN", "Your previous loadout has been loaded",true,true] call Extremo_fnc_gui_splashScreen;
	uiSleep 1.5;
}else{
	[0,"LOGIN", "Getting default loadout",true,true] call Extremo_fnc_gui_splashScreen;
	uiSleep 1.5;
	_newcharacter setUnitLoadout [
		/* primary weapon */	[],
		/* secondary weapon */	[],
		/* handgun weapon */    [],
		/* uniform */			["U_B_CombatUniform_mcam", [["FirstAidKit", 1]]],
		/* vest */				[],
		/* backpack */			[],
		/* headgear */			"",
		/* mask */				"G_Bandanna_tan",
		/* items */				[],
		/* items */				["ItemMap","","","ItemCompass","ItemWatch",""]
	];
};

//---
if(_deleteoldcharacter)then{
	_oldcharacter remoteExec ["deleteVehicle", 2];
}else{
	_oldcharacter setDamage 1;
	[_oldcharacter, ["Hide Body", {(_this#0) remoteExec ["deleteVehicle", 2]}]] remoteExec ["addAction", -2];
	(missionNamespace getVariable["extremo_var_cleanupQueue",[]]) pushBackUnique netID _oldcharacter;
	publicVariableServer "extremo_var_cleanupQueue";
};

//--- Setup character events
[0,"LOGIN","Registering (player) event handlers",true,true] call Extremo_fnc_gui_splashScreen; uiSleep 1.5;
"(fn_player_login.sqf) Waiting for event handlers" call Extremo_fnc_client_log;
waitUntil Extremo_fnc_player_initEventhandlers;

//---Tell all system players data is loaded
_newcharacter setVariable ["ExtremoDataLoaded",true,true];

//--- Spawn menu
[0,"SETUP", "Preparing player spawn",true,true] call Extremo_fnc_gui_splashScreen; uiSleep 3;
"(fn_player_login.sqf) Requesting `Extremo_fnc_gui_spawnScreen` to handle player spawn" call Extremo_fnc_client_log;
_newcharacter setVariable ["ExtremoSpawnData", (if(count _LastPosition == 0)then{[true]}else{[false,_LastPosition,_LastDir]}),true];
waitUntil Extremo_fnc_gui_spawnScreen;

//--- Player spawn completed
"(fn_player_login.sqf) Waiting for player spawn" call Extremo_fnc_client_log;
waitUntil {call extremo_var_gui_playerSpawned};

//---  Force showing the chat. Sometimes Arma resets this
"(fn_player_login.sqf) Force showing the chat" call Extremo_fnc_client_log;
enableSentences true; 
enableRadio true;
showChat true;
showSubtitles true; 
setGroupIconsVisible [true, true];
10 fadeSound 1;

true