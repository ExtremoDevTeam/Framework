/*
	## EXTREMO
	## Nikko Renolds
*/

private _cfgMessages = missionConfigFile >> "CfgMessages";
private _template = getText(_cfgMessages >> "activeTemplate");
private _messages = getArray(_cfgMessages >> _template >> "messages");
private _delay = getNumber(_cfgMessages >> _template >> "delay");
private _enabled = getNumber(_cfgMessages >> _template >> "enabled") isEqualTo 1;
private _randomOrder = getNumber(_cfgMessages >> _template >> "randomOrder") isEqualTo 1;

//--- System disabled
if !_enabled exitWith {};

//--- Shuffle messages
if _randomOrder then {
	_messages = _messages call BIS_fnc_arrayShuffle
};

//--- Delay timer
_delay = switch (true) do {
	//Seconds
	case (_delay < 1) : {(60 - ((0.60  - (_delay min 0.60)) * 100))};
	//Minuets
	case (_delay >= 1) : {(_delay * 60)};
	//failsafe
	default {_delay};
};

while {_enabled} do
{
	//--- Check array has messages
	_enabled = count _messages > 0;
	
	//--- Break out
	if !_enabled exitWith {};

	//--- Make sure the player has loaded in
	waitUntil {
		(player getVariable ["ExtremoDataLoaded",false]) AND {
			isNull(uiNamespace getVariable ["RscExtremo_SplashScreen",displayNull]) AND {
				radioEnabled
			}
		}
	};

	//--- Get next message from left of messages array
	private _message = [_messages] call BIS_fnc_arrayShift;

	//--- Handle any callbacks
	["_message"] call Extremo_fnc_system_replacmentCallback;

	//--- Show message
	systemChat _message;
	 
	//--- Timer till next message
	uiSleep _delay;
};

true