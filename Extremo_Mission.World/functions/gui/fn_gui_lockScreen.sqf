/*
	## EXTREMO
	## Nikko Renolds

	["5318"] spawn Extremo_fnc_gui_lockScreen;
*/

disableSerialization;

params [
	["_lockCode","",[""]], 
	["_blockCancel",false]
];

private _displayClass = "RscExtremo_LockScreen";
private _display = uiNameSpace getVariable [_displayClass,displayNull];

if (isNull _display)then{
	_display = createDialog [_displayClass,true];
	//if _blockCancel then{[_display,["KeyDown"],true] call extremo_fnc_dik_initEventHandlers};
	extremo_var_gui_inputESCLock = _blockCancel;
};

[[_display],'onSetPin',_lockCode] call Extremo_fnc_gui_lockScreenEH;

[_display,_lockCode]