/*
	## EXTREMO
	## Nikko Renolds
*/

hint str _this; //debug
params [
	["_mode","",[""]],
	["_params",[],[[]]]
];

disableSerialization;
if (_mode isEqualTo "")exitWith {["extremo_fnc_gui_tabletScreenGroupSync: <MODE> was passed <EMPTY>. Function Terminated!"] call BIS_fnc_error;};

switch (_mode) do 
{
	case "onScreenShow": 
	{
		_params params [
			["_control",controlNull,[controlNull]]
		];
	};
	case "onScreenHide": 
	{
		_params params [
			["_control",controlNull,[controlNull]]
		];
	};
	case "onSyncNow": 
	{ 
		_params params [
			["_buttonCtrl",controlNull,[controlNull]]
		];
	};
};