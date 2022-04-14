#include "..\script_defines.hpp"
/*
	## EXTREMO
	## Nikko Renolds
*/

disableSerialization;
params [
	["_object",displayNull,[displayNull,controlNull]],
	["_event","",[""]],
	["_data",[]]
];

private _displayClass = "RscExtremo_SpawnScreen";
private _display = displayNull;
private _config = missionConfigFile >> "CfgSpawn";
private _template = getText(_config >> "activeTemplate");
private _configTemplate = _config >> _template;
private _configWorld = _configTemplate >> worldName;
private _markers = getArray(_configWorld >> "zones");
private _protectedMarkers = getArray(_configWorld >> "protectedZones");
private _spawnIslandMarker = getText(_configWorld >> "spawnIsland");
private _spawnIslandPos = getMarkerPos _spawnIslandMarker;

if(typeName _object isEqualTo "CONTROL")then{
	_display = ctrlParent _object;
}else{
	_display = _object;
};

if(isNull _display)then{
	_display = uiNameSpace getVariable [_displayClass,_display];
	[_display,["KeyDown"],true] call extremo_fnc_dik_initEventHandlers;
};

private _controls = [
	["controlsBackground","Background"],	//-- _controlBackground
	["controlsBackground","Header"],		//-- _controlHeader
	["controls","Info"],					//-- _controlInfo
	["controls","Selection"],				//-- _controlSelection
	["controls","Confirm"]					//-- _controlConfirm
];
(_controls apply {_display displayCtrl getNumber(missionConfigFile >> _displayClass >> _x#0 >> _x#1 >> "idc")}) params (_controls apply {[format["_control%1",_x#1],controlNull,[controlNull]]});

switch _event do {
	case "onLoad": 		   {uiNameSpace setVariable [_displayClass,_object]; extremo_var_dik_blockESC = true; setMousePosition [0.5,0.5]};
	case "onUnLoad": 	   {uiNameSpace setVariable [_displayClass,displayNull]; extremo_var_dik_blockESC = false;};
	case "onLBSelChanged": 
	{ 
		_data params [
			["_selection",-1]
		];
		
		if(_selection isEqualTo -1)exitWith{};

		private _markerName = _object lnbData [_selection,0];
		private _markerText = markerText _markerName;
		private _markerPosition = getMarkerPos [_markerName,true];
			
		//--- 
		_markerText = if(tolower(_markerText select [0,9]) == "spawnzone")then{_markerText select [10,(count _markerText) - 10]}else{""}; 
		if(_markerText isEqualTo "")then{
			_markerText = ([player] call Extremo_fnc_system_locationInfo) param [2,"the chosen location",[""]];
		};
		
		//--- Marker missing
		if(count _markerPosition isNotEqualTo 3)exitWith{
			[0,"ERROR",format["An error occured with spawn position (%1)",_markerText]] call Extremo_fnc_gui_splashScreen;
			uiSleep 2;
			"extremoError" call BIS_fnc_endMission;
		};

		[0,"Current Spawn Zone",_markerText] call Extremo_fnc_gui_splashScreen;
	};
	case "onConfirmClick": 
	{   
		(player getVariable ["ExtremoSpawnData",[]]) params [
			["_respawn",true],
			["_position",_spawnIslandPos],
			["_direction",random 360]
		];

		private _spawnArea = "your previous location";
		private _savePosition = false;
		private _canSpawn = true;

		//--- New pos
		if _respawn then
		{ 
			_selection = lnbCurSelRow _controlSelection;
			_markerName = _controlSelection lnbData [_selection,0];
			_markerText = markerText _markerName;
			_markerPrefix = tolower(_markerText select [0,9]);
			_markerPosition = getMarkerPos _markerName;
			_locationInfo = [_markerPosition] call Extremo_fnc_system_locationInfo;

			_locationInfo params [
				["_dirName",""],
				["_nearLocationName",""],
				["_nearLocationNameOf",""],
				["_nearLocation",locationNull],
				["_positionArray",[]],
				["_dir",0],
				["_nearMapMarkers",[]],
				["_nearPlayers",[]],
				["_nearVehicles",[]]
			];

			//--- Close menu
			_display closeDisplay IDC_OK;
			
			//--- Protected spawns
			{
				if(_markerName isEqualTo (_x#0))exitWith{ 
					[0,"Protected Spawn","Password required",true,true] call Extremo_fnc_gui_splashScreen;
					_display = ([_x#1,true] call Extremo_fnc_gui_lockScreen) param [0,displayNull];
					waitUntil{isNull _display};
					
					if (extremo_var_gui_inputLockCodeCorrect)then{
						[0,"Protected Spawn","Password accepted",true,true] call Extremo_fnc_gui_splashScreen; 
					}else{
						_canSpawn = false;
						[0,"Protected Spawn","Password mismatch",true,true] call Extremo_fnc_gui_splashScreen;	
					};

					uiSleep 3;
				};
			}forEach _protectedMarkers;
			 
			//--- Use custom name
			if(_markerPrefix isEqualTo "spawnzone")then{
				_nearLocationNameOf = format["%1 of %2",_dirName,_markerText select [10,(count _markerText) - 10]];
			};

			//--- 
			_savePosition = true;
			_position = _markerPosition;
			_direction = _dir;
			_spawnArea =  _nearLocationNameOf;
		};

		//--- Bad pos
		if (count _position isNotEqualTo 3) then {
			_canSpawn = false;
		};

		//--- Select pos
		if !_canSpawn exitWith {
			waitUntil Extremo_fnc_gui_spawnScreen;
		};

		//--- Spawn pos
		[0,"SPAWNING","",true,true] call Extremo_fnc_gui_splashScreen;
		player setVariable ["ExtremoLastSpawnTime",systemTimeUTC,true];
		if (isDamageAllowed player)then{ 
			[player, true] remoteExec ["hideObjectGlobal", 2];//Hide player
			player allowDamage false; //Protect player from taking damage
		};

		//--- Position
		player setPosATL _position;
		player setDir _direction;
		 
		//--- Preloader
		waitUntil Extremo_fnc_player_preloader;
		[player, false] remoteExec ["hideObjectGlobal", 2];//Show player
		player allowDamage true;//Allow player to take damage

		//--- Splash
	 	[5,"SPAWNING", "You will spawn at ("+_spawnArea+") in %SplashTimer%"] call Extremo_fnc_gui_splashScreen;

		//--- Update pos
		if _savePosition then{
			["characters", "update"] call extremo_fnc_database_client;
		};

		//---Spawn done (tell other systems spawn completed)
		extremo_var_gui_playerSpawned = compile str(true);
		terminate extremo_var_gui_playerSpawnThread;
	};
};

true