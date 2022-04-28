/*
	## EXTREMO
	## Nikko Renolds
*/

params [
	['_mode','',['']],
	['_params',[],[[]]]
];

disableSerialization;

switch (_mode) do 
{
	case 'onScreenShow' : 
	{
		uiNamespace setVariable ['RscDisplayTablet_LockState',true];  
	
		_params params [
			['_screenLockCtrl',controlNull,[controlNull]]
		];

		private _display = ctrlParent _screenLockCtrl; 
		private _lockTimeCtrl = _display displayCtrl 113;
		private _lockDateCtrl = _display displayCtrl 114;
		private _barCtrl = _display displayCtrl 115;
		private _lockInfoCtrl = _display displayCtrl 117;
		private _info = "";

		_screenLockCtrl setVariable ['ScreenActive', true]; 
		_screenLockCtrl setVariable ['KeyUnlock',false];

		{_info = _info + _x + "<br/><br/>"}forEach[
			"<t>Extremo is in <t color='#d79622'>Alpha</t> Build</t>",
			"<t>New Tablet? Who Dis?</t>"
		];

		//--- Set info box
		_lockInfoCtrl ctrlSetStructuredText parseText _info;

		//--- progress of unlock (why not lol)
		private _barPos = ctrlPosition _barCtrl;
		_barPos set [2,0];
		_barCtrl ctrlSetPosition _barPos;
		_barCtrl ctrlCommit 0;

		//--- Handle user pressing a key
		private _handle = _screenLockCtrl ctrlAddEventHandler ['KeyDown',{
			_this spawn {
				disableSerialization;
				_this params [
					['_control',controlNull,[controlNull]],
					['_key',-1,[0]]
				];

				if ((_key == 0x39) && !(_control getVariable ['KeyUnlock',false])) then {
					_control setVariable ['KeyUnlock',true];

					private _display = ctrlParent _control;
					private _barCtrl = _display displayCtrl 115;
					private _barPos = ctrlPosition _barCtrl;
			
					_barPos set [2,0];
					_barCtrl ctrlSetPosition _barPos;
					_barCtrl ctrlCommit 0;

					_barPos set [2,(5 * (safezoneW / 40))];
					_barCtrl ctrlSetPosition _barPos;
					_barCtrl ctrlCommit 0.5;

					waitUntil {
						(ctrlCommitted _barCtrl) || !(_control getVariable ['KeyUnlock',false])
					};

					if ((ctrlCommitted _barCtrl) && (_control getVariable ['KeyUnlock',false])) then {
						(_display displayCtrl 117) ctrlSetStructuredText (parseText "<t>Screen <t color='#d79622'>[UNLOCKED]</t>");
						uiNamespace setVariable ['RscDisplayTablet_CanSwitchScreen',true];
						_nul = ['ScreenGroupApps'] call extremo_fnc_gui_tabletScreenSwitch;
					};
				};
			};
		}];

		//--- Handle user letting go of key 
		private _handle1 = _screenLockCtrl ctrlAddEventHandler ['KeyUp',{
			disableSerialization;
			params [
				['_control',controlNull,[controlNull]],
				['_key',-1,[0]]
			];

			if ((_key == 0x39) && (_control getVariable ['KeyUnlock',false])) then {
				//hint 'UNLOCK Incomplete';
				_control setVariable ['KeyUnlock',false]; 
				private _display = ctrlParent _control;
				private _barCtrl = _display displayCtrl 115;
				private _barPos = ctrlPosition _barCtrl;
				_barPos set [2,0];
				_barCtrl ctrlSetPosition _barPos;
				_barCtrl ctrlCommit 0;
			};
		}];

		//--- Set date
		_lockDateCtrl ctrlSetText ([systemTimeUTC select [0, 5]] call extremo_fnc_system_dateString); 
		
		//--- Set\update time
		while {_screenLockCtrl getVariable ['ScreenActive',false]} do {
			_lockTimeCtrl ctrlSetText (true call extremo_fnc_system_getRealTime);
			sleep 0.1;
		};
	};
	case 'onScreenHide' : 
	{ 
		_params params [
			['_screenLockCtrl',controlNull,[controlNull]]
		];
		_screenLockCtrl setVariable ['ScreenActive', false];
		_screenLockCtrl ctrlRemoveAllEventHandlers 'KeyDown';
		_screenLockCtrl ctrlRemoveAllEventHandlers 'KeyUp'; 
		uiNamespace setVariable ['RscDisplayTablet_LockState',false];
	};
};