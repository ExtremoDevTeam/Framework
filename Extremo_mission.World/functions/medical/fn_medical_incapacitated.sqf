#include "..\script_defines.hpp"

/*
	## EXTREMO
	## Nikko Renolds
*/

params ["_source","_player"];

//-- Disable damage and stop them being incapped multiple times
if (_player getVariable ["extremo_var_incapacitated", false]) exitWith {};

//--
private _broadcast = format ["%1 has been seriously wounded", name _player];
Extremo_var_medical_healthState = 1;
Extremo_var_medical_executer = objNull;
Extremo_var_remainingBlood = [configFile >> "CfgRespawnTemplates" >> "Extremo", "bleedoutDuration", 60] call BIS_fnc_returnConfigEntry;
Extremo_var_incapacitateInitTime = diag_tickTime;

_player allowDamage false;
_player setVariable ["extremo_var_incapacitated", true, true];

if (_source isEqualTo "") then{
	_source = objNull;
};

//-- Convert the source so I can use it in the demise messages to the server
if (_source isEqualTo "COMBATLOG") then {
	_source = "COMBAT LOG";
};
if (_source isEqualTo "food") then {
	_source = "Starvation";	
};
if (_source isEqualTo "water") then {
	_source = "Dehydration";
};
if (_source isEqualTo "cyanide") then {
	_source = "Cyanide";
};
if (_source isEqualTo "tased") then {
	_source = "Cardiac arrhythmia";
};
if (_source isEqualTo "respawned") then {
	_source = "Suicide";
};

//-- What is the source
if (typeName _source isEqualTo "STRING") then 
{
	_broadcast = switch (_source) do {
		case "Starvation";
		case "Dehydration": {[format["%1 has been seriously wounded from %2", name _player, _source]]};
		case "Cyanide": {[format["%1 has been seriously wounded from taking a cyanide pill!", name _player]]};
		case "Cardiac arrhythmia": {[format["%1 has been seriously wounded from being over tased!", name _player]]};
		case "Suicide";
		case "COMBAT LOG"; 
		case "DOWNED";
		default {_broadcast};
	};
} else {
	if (!isNull _source AND {typeName _source isEqualTo "OBJECT"}) then {
		if(name _source isNotEqualTo name _player)then{
			_broadcast = format ["%1 has been seriously wounded by %2", name _player, name _source];
		};
	};
};

_broadcast remoteExec ["systemChat", -2, false];

//-- Vehicle
if (!isNull objectParent _player) then {
	_player action ["eject", vehicle _player];
	waitUntil {isNull objectParent _player};
	_player setUnconscious true;
} else {
	_player setUnconscious true;
};

//-- Setup blurry screen
Extremo_var_death_blurEffect = ppEffectCreate ["DynamicBlur", 401];
Extremo_var_death_blurEffect ppEffectEnable true;
Extremo_var_death_blurEffect ppEffectAdjust [2];
Extremo_var_death_blurEffect ppEffectForceInNVG true;
Extremo_var_death_blurEffect ppEffectCommit 0.7;

//-- Setup red screen
["Bleedout", 0.7, false] call BIS_fnc_setPPeffectTemplate;

//--- Fade sound
2 fadeSound 0.1;

//-- Make them bleed for 5 minutes
if (damage _player > 0) then {
	_player setBleedingRemaining 300;
};

disableSerialization;

"RscExtremo_BleedoutScreenLayer" cutRsc ["RscExtremo_BleedoutScreen","PLAIN"];
escKeyEH = (uiNamespace getVariable "RscExtremo_BleedoutScreen") displayAddEventHandler ["KeyDown", "if (((_this select 1) == 1) && (!isServer)) then {true} else {false};"];

//-- On each frame eventhandler
["extremo_var_bleedoutEVH", "onEachFrame", {		
	params [
		["_player",objNull,[objNull]]
	];

	private _display = (uiNamespace getVariable ["RscExtremo_BleedoutScreen", displayNull]);
	private _displayCtrlProgress = _display displayCtrl 1; 
	private _displayCtrlText = _display displayCtrl 2;
	private _progress = (diag_tickTime - Extremo_var_incapacitateInitTime) / Extremo_var_remainingBlood;
	private _reviver = _player getVariable ["reviving", objNull];
	
	//--- Prevent drowning
	if (underwater _player) then {
		_player setOxygenRemaining 1;
	};

	//--- Switch overlay text
	switch (true) do {
		case (!isNull _reviver): 
		{
			_displayCtrlProgress ctrlSetTextColor [0, 0.67, 0, 1];
			_displayCtrlText ctrlSetStructuredText (parseText format ["<t color='#009900' align='center'>%1</t><t font='%2' align='center'> is reviving you, hang in there!</t>", name _reviver,FONT_ALT_LIGHT]);
			_displayCtrlProgress progressSetPosition 1;
		};
		default 
		{ 
			_displayCtrlProgress ctrlSetTextColor [1, 0, 0, 1];
			_displayCtrlText ctrlSetStructuredText (parseText format["<t font='%3' align='center'>Blood Remaining </t><t color='#b20000' align='center'>%1%2</t>", round (100 - (_progress * 100)), "%",FONT_ALT_LIGHT]);			
			_displayCtrlProgress progressSetPosition (1 - _progress);
		};
	};

	//--- Deteminate state
	private _bledout =  (Extremo_var_medical_healthState isEqualTo 1) AND (_progress >= 1);
	private _executed = (Extremo_var_medical_healthState isEqualTo 2);
	private _suicide =  (Extremo_var_medical_healthState isEqualTo 3);
	private _revived =  not(_player getVariable ["extremo_var_incapacitated", false]) AND not(_progress >= 1);

	//--- Handle states
	if (_bledout OR _executed OR _suicide OR _revived) exitWith 
	{
		private _timer = 60;
		private _title = "YOU HAVE DIED";
		private _titleColor = [0.96, 0.01, 0, 1];
		private _subtitle = "%<U>ProfileName% YOU WILL RESPAWN IN %RespawnTimer%";
		private _broadcast = format ["%1 has died", name _player];
		private _blockEscapeKey = false;
		private _configRespawn = configFile >> "CfgRespawnTemplates" >> "Extremo";
		private _configTimers = _configRespawn >> "RespawnTimers";
		private _hideBody = ([_configRespawn, "hideBodyOnRespawn", 0] call BIS_fnc_returnConfigEntry) isEqualTo 1;
		private _deleteBody = ([_configRespawn, "deleteBodyOnRespawn", 0] call BIS_fnc_returnConfigEntry) isEqualTo 1;
		 
		//--- Stop any bleeding
		["extremo_var_bleedoutEVH", "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
		"RscExtremo_BleedoutScreenLayer" cutFadeOut 2;
		Extremo_var_remainingBlood = nil;
		Extremo_var_incapacitateInitTime = nil;
		
		//--- Revived state
		if (_revived) exitWith {
			_timer = [_configTimers, "Revived", 60] call BIS_fnc_returnConfigEntry;
			_title = "YOU HAVE BEEN REVIVED";
			_titleColor = [0, 1, 0, 1];
			_subtitle = "%<U>ProfileName% You may need medical supplies";
			_blockEscapeKey = true;
			[_timer,[_title,_titleColor],_subtitle,true,_blockEscapeKey] call Extremo_fnc_gui_splashScreen;
		};

		//--- Other states
		switch (Extremo_var_medical_healthState) do {
			case 1: 
			{ 	//Bleedout state
				
				_timer = [_configTimers, "Bleedout", 60] call BIS_fnc_returnConfigEntry;
				_title = "YOU HAVE BLEDOUT";
				_broadcast = format ["%1 has bledout", name _player];
				_blockEscapeKey = true;
			}; 
			case 2: 
			{ 	//Executed state

				_timer = [_configTimers, "Executed", 60] call BIS_fnc_returnConfigEntry;
				_title = "YOU HAVE BEEN EXECUTED";
				if (!isNull Extremo_var_medical_executer) then {
					_broadcast = format ["%1 has been executed by %2", name _player, Extremo_var_medical_executer];
				};
				_blockEscapeKey = true;
			}; 
			case 3: 
			{ 	//Suicide state

				_timer = [_configTimers, "Suicide", 60] call BIS_fnc_returnConfigEntry;
				_title = "YOU HAVE COMMITTED SUICDE";
				_broadcast = format ["%1 has took the easyway out", name _player];
				_blockEscapeKey = true;
			};
		};

		//--- Create splash
		[_timer,[_title,_titleColor],_subtitle,true,_blockEscapeKey,true] call Extremo_fnc_gui_splashScreen;

		//--- Hide body
		if _hideBody then{
			[_player, true] remoteExec ["hideObjectGlobal", 2];
		};

		//--- Respawn
		Extremo_var_respawnTimer = diag_tickTime + _timer;
		Extremo_var_respawnEVH = addMissionEventHandler ["EachFrame", {_thisArgs call Extremo_fnc_medical_bledoutEVH}, [_player,"Extremo_var_respawnEVH",_deleteBody]];
		
		//--- Notify everyone
		[_broadcast] remoteExecCall ["systemChat", -2, false];
	};

}, [_player]] call BIS_fnc_addStackedEventHandler;
