/*
	## EXTREMO
	## Nikko Renolds
*/

params [
	['_screenSwitchClass','',['']],
	['_animType','ScrollRight',['']]
];

disableSerialization;

if !(uiNamespace getVariable ['RscDisplayTablet_CanSwitchScreen',false]) exitWith {};
if !(isClass (missionconfigfile >> 'RscExtremo_Tablet' >> 'Controls' >> 'MainGroup' >> 'controls' >> _screenSwitchClass)) exitWith {
	['extremo_fnc_gui_tabletScreenSwitch: Screen class was not found! Function terminated.'] call BIS_fnc_error;
};
if (isNull(findDisplay 1200)) exitWith {
	['extremo_fnc_gui_tabletScreenSwitch: RscExtremo_Tablet was not found in active screens! Function terminated.'] call BIS_fnc_error;
};

private _screenSwitchClass = missionconfigfile >> 'RscExtremo_Tablet' >> 'Controls' >> 'MainGroup' >> 'controls' >> _screenSwitchClass;
private _screenSwitchIDC = [_screenSwitchClass,'idc',-1] call BIS_fnc_returnConfigEntry;

private _curScreen = uiNamespace getVariable ['RscDisplayTablet_CurScreen',controlNull];
private _newScreen = (findDisplay 1200) displayCtrl _screenSwitchIDC;

if (_curScreen isEqualTo _newScreen) exitWith {};
if (isNull _curScreen OR isNull _newScreen) exitWith {
	['extremo_fnc_gui_tabletScreenSwitch: Screens were not found <NULL-control>. Function terminated'] call BIS_fnc_error;
};

uiNamespace setVariable ['RscDisplayTablet_CanSwitchScreen',false];
uiNamespace setVariable ['RscDisplayTablet_CurScreen',_newScreen];

private _newScreenStartPos = [(13.3 * (safezoneW / 40)),(0.2 * (safezoneH / 25))];
private _newScreenEndPos = ctrlPosition _curScreen;
private _curScreenEndPos = [(-13.3 * (safezoneW / 40)),(0.1 * (safezoneH / 25))];

//--- 
_curScreen ctrlEnable false;
_nul = [
	_curScreen,
	(missionConfigFile >> 'RscExtremo_Tablet' >> 'Controls' >> 'MainGroup' >> 'Controls'),
	'onScreenHide'
] call extremo_fnc_gui_customEvent;
_curScreen ctrlSetPosition _curScreenEndPos;
_curScreen ctrlCommit 0.5;

//--- 
_newScreen ctrlShow true;
_newScreen ctrlEnable true; 
_newScreen ctrlSetPosition _newScreenStartPos;
_newScreen ctrlCommit 0;
_nul = [
	_newScreen,
	(missionConfigFile >> 'RscExtremo_Tablet' >> 'Controls' >> 'MainGroup' >> 'Controls'),
	'onScreenShow'
] call extremo_fnc_gui_customEvent;
_newScreenEndPos resize 2;
_newScreen ctrlSetPosition _newScreenEndPos;
_newScreen ctrlCommit 0.5;
ctrlSetFocus _newScreen;

//--- 
[_curScreen,_newScreen] spawn {
	disableSerialization;
	params [
		['_curScreen',controlNull,[controlNull]],
		['_newScreen',controlNull,[controlNull]]
	];

	waitUntil {ctrlCommitted _curScreen AND ctrlCommitted _newScreen};
	uiNamespace setVariable ['RscDisplayTablet_CanSwitchScreen',true];
};

true;