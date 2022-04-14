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
if (_mode isEqualTo "") exitWith {
	["extremo_fnc_gui_tabletScreenGroupCrafting: <MODE> was passed empty. Function Terminated!"] call BIS_fnc_error;
};

switch (_mode) do {
	case "onScreenShow" : 
	{
		_params params [
			["_screenLockCtrl",controlNull,[controlNull]]
		];
	}; 
	case "onScreenHide" : 
	{
		_params params [
			["_screenLockCtrl",controlNull,[controlNull]]
		];
	}; 
	case "changeCategory" : 
	{
		_params params [
			["_categoryCtrl",controlNull,[controlNull]],
			["_selection",-1,[0]]
		];
	}; 
	case "changeItem" : 
	{
		_params params [
			["_itemCtrl",controlNull,[controlNull]],
			["_selection",-1,[0]]
		]; 
	};
};