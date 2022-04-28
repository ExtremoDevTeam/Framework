#include "..\script_defines.hpp"

/*
	## EXTREMO
	## Nikko Renolds

	waitUntil Extremo_fnc_gui_spawnScreen;
*/

if (isNull extremo_var_gui_playerSpawnThread)then{
	extremo_var_gui_playerSpawnThread = [] spawn {
		[player, true] remoteExec ["hideObjectGlobal", 2];//Hide player 
		while{true}do{
			if(getOxygenRemaining player < 1)then{ 
				player setOxygenRemaining 1;//stop drowning
			};
			if (isDamageAllowed player)then{ 
				player allowDamage false; //Protect player from taking damage
			};
			uiSleep 1.2;
		};
		true
	};
};

(player getVariable ["ExtremoSpawnData",[]]) params [
	["_respawn",true],
	["_position",[]],
	["_direction",0]
];

if _respawn then 
{
	disableSerialization;

	private _config = missionConfigFile >> "CfgSpawn";
	private _template = getText(_config >> "activeTemplate");
	private _configTemplate = _config >> _template;
	private _configWorld = _configTemplate >> worldName;
	private _markers = getArray(_configWorld >> "zones");

	extremo_var_gui_playerSpawned = compile str(false);

	if (isNull player) exitWith {false};
	if (count _markers <= 0) exitWith {
		[0,"ERROR","An error occured ('CfgSpawn' >> '"+_template+"' >> '"+worldName+"' >> 'zones') is empty...",true,true] call Extremo_fnc_gui_splashScreen;
		uiSleep 1.5;
		"extremoError" call BIS_fnc_endMission;
		false
	};

	[0,"SETUP", "Loading spawn options",true,true] call Extremo_fnc_gui_splashScreen;
	uiSleep 1.5;
	private _displayClass = "RscExtremo_SpawnScreen";
	private _display = uiNamespace getVariable [_displayClass,displayNull];
	private _controls = [
		["controlsBackground","Background"],
		["controlsBackground","Header"],
		["controls","Info"],
		["controls","Selection"],
		["controls","Confirm"]
	];

	if (isNull _display)then{
		_display = createDialog [_displayClass, true]; 
	};

	//--- Load controls
	(
		_controls apply {_display displayCtrl getNumber(missionConfigFile >> _displayClass >> _x#0 >> _x#1 >> "idc")}
	) params [
		["_controlBackground",controlNull,[controlNull]],
		["_controlHeader",controlNull,[controlNull]],
		["_controlInfo",controlNull,[controlNull]],
		["_controlSelection",controlNull,[controlNull]],
		["_controlConfirm",controlNull,[controlNull]]
	];
		
	//--- Purge listbox
	lbClear _controlSelection;

	//--- Setup menu
	{ 
		_x params [
			["_marker",	  "",[""]],
			["_picture",  "\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa",[""]],
			["_color",	  [0.22,0.22,0.22,1]]
		];

		if(_marker in allMapMarkers)then{
			private _markerText = markerText _marker; 
			private _locationInfo = [_marker] call Extremo_fnc_system_locationInfo;
			
			//Get spawn name from marker text
			_markerText = if(tolower(_markerText select [0,9]) == "spawnzone")then{_markerText select [10,(count _markerText) - 10]}else{""}; 
			
			//Get spawn name from position
			if(_markerText isEqualTo "")then{
				_markerText = _locationInfo param [2,"the chosen location",[""]];
			};

			//Set element in listbox
			_controlSelection lnbAddRow		[_markerText,_marker,""];
			_controlSelection lnbSetPicture	[[_forEachIndex,0],_picture];
			_controlSelection lnbSetData  	[[_forEachIndex,0],_marker];
			_controlSelection lnbSetColor 	[[_forEachIndex,0],_color];
		};
	}forEach _markers;

	//--- Select first option (allows user to just press enter without selecting an option)
	_controlSelection lnbSetCurSelRow 0;
}else{
	[controlNull,'onConfirmClick'] spawn extremo_fnc_gui_spawnScreenEH;
};


true