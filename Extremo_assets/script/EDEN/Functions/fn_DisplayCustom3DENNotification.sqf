#include "\a3\3DEN\UI\resincl.inc"

/*
	* Original Author: Bohemia Interactive (3den.pbo/Functions/fn_3DENNotification.sqf)
	* I(Dealman) merely edited it for it to be customizable

Syntax:
	[<TextMessage>, <BackgroundColor>, <TextColor>, <Sound>, <DisplayTime>] call BIS_fnc_3DENShowMessage;

	* TextMessage: STRING - Message to be displayed
	* Color: ARRAY - Background colour, example; [0.71, 0, 0, 1] would be opaque red background
	* TextColor: STRING - Hex colour code for the text, defaults to #FFFFFF (White)
	* Sound: INT or STRING
		* Sound: INT - 0 or 1 (0 = "3DEN_notificationDefault" | 1 = "3DEN_notificationWarning")
		* Sound: STRING - If you want to play another sound other than the 2 default ones, use a string
	* DisplayTime: SCALAR - Time for the message to be displayed
*/

params [
		["_notificationText", "N/A", [""]],
		["_notificationBGColor", [0.35, 0.35, 0.35, 1.0], [[]], 4],
		["_notificationFGColor", "#FFFFFF", [""]],
		["_isWarning", 0, [0, ""]],
		["_displayTime", 2, [0]]
	];
	
[_notificationText, _notificationBGColor, _notificationFGColor, _isWarning, _displayTime] spawn {
	_notificationText = _this select 0;
	_notificationBGColor = _this select 1;
	_notificationFGColor = _this select 2;
	_isWarning = _this select 3;
	_displayTime = _this select 4;
	disableserialization;
	_display = findDisplay IDD_DISPLAY3DEN;
	_ctrlNotification = _display displayCtrl IDC_DISPLAY3DEN_NOTIFICATION;
	_ctrlNotificationTextHeight = ctrlTextHeight _ctrlNotification;
	_ctrlNotification ctrlSetStructuredText parseText (format["<t color='%1'>%2</t>", _notificationFGColor, _notificationText]);
	_ctrlNotification ctrlSetBackgroundColor _notificationBGColor;
	_ctrlNotificationPos = ctrlPosition _ctrlNotification;
	_ctrlNotificationPos set [3, ctrlTextHeight _ctrlNotification];
	_ctrlNotification ctrlSetPosition _ctrlNotificationPos;
	_ctrlNotification ctrlCommit 0.1;
	if(typeName _isWarning == "STRING") then {
		playSound [_isWarning, true];
	}
	else
	{
		if(_isWarning == 0) then {
			playSound ["3DEN_notificationDefault", true];
		}
		else
		{
			playSound ["3DEN_notificationWarning", true];
		};
	};
	uisleep _displayTime;
	_ctrlNotificationPos set [3,0];
	_ctrlNotification ctrlSetPosition _ctrlNotificationPos;
	_ctrlNotification ctrlCommit 0.1;
};