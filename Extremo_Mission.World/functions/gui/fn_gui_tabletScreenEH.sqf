/*
	## EXTREMO
	## Nikko Renolds
*/

params [
	['_mode','',['']],
	['_params',[],[[]]]
];

switch (_mode) do 
{
	case 'onLoad': 
	{ 
		disableSerialization;
		private _display = _params param [0,displayNull,[displayNull]];
		private _lockState = uiNamespace getVariable ['RscDisplayTablet_LockState',true];
		private _muteState = uiNamespace getVariable ['RscDidsplayTablet_MuteState',false];
		private _curScreen = _display displayCtrl 107;
		private _curScreenIDC = ctrlIDC _curScreen;

		uiNamespace setVariable ['RscExtremo_Tablet',_display];
		uiNamespace setVariable ['RscDisplayTablet_CurScreen',_curScreen];

		//--- Hide all screensGroups until app is clicked
		{
			if (_x != _curScreenIDC) then {
				(_display displayCtrl _x) ctrlEnable false;
				(_display displayCtrl _x) ctrlShow false;
			}
		} forEach ([missionconfigfile >> 'RscExtremo_Tablet' >> 'Controls' >> 'MainGroup','screenIdc',[]] call BIS_fnc_returnConfigEntry);
		
		//--- Focus lock screen
		ctrlSetFocus _curScreen;
		setMousePosition [0.506,0.7];

		//--- Load event	
		[
			_curScreen,
			(missionconfigfile >> 'RscExtremo_Tablet' >> 'Controls' >> 'MainGroup' >> 'Controls'),
			'onScreenShow'
		] call extremo_fnc_gui_customEvent;

		//--- Header time
		_display spawn {
			params [
				["_display",displayNull]
			];
			disableSerialization;
			while {!isNull _display} do {
				(_display displayCtrl 102) ctrlSetText (false call extremo_fnc_system_getRealTime);
				sleep 1;
			};
		};
	};
	case 'onUnLoad':
	{
		uiNamespace setVariable ['RscExtremo_Tablet',displayNull];
	};
	case 'HomeButton':
	{
		private _homeButtonCtrl = _params param [0,controlNull,[controlNull]];
		if !(uiNamespace getVariable ['RscDisplayTablet_LockState',true]) then {
			_nul = ['ScreenGroupApps'] call extremo_fnc_gui_tabletScreenSwitch;
		};
	};
	case 'LockButton':
	{
		private _lockButtonCtrl = _params param [0,controlNull,[controlNull]];
		_nul = ['ScreenGroupLock'] call extremo_fnc_gui_tabletScreenSwitch;
	};
	case 'MuteButton':
	{
		private _muteButtonCtrl = _params param [0,controlNull,[controlNull]];
		if (uiNamespace getVariable ['RscDidsplayTablet_MuteState',true]) then {
			hint 'Tablet Notifications Unmuted';
			uiNamespace setVariable ['RscDidsplayTablet_MuteState',false];
		} else {
			hint 'Tablet Notifications Muted';
			uiNamespace setVariable ['RscDidsplayTablet_MuteState',true];
		};
	};
};