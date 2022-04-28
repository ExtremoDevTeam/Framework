/*
	## EXTREMO
	## Nikko Renolds
*/

disableSerialization;

if !(isClass (configFile >> "CfgExtremoToasts" >> _this#0)) exitWith  {
	systemChat format ["UNKNOWN TEMPLATE: %1", _this#0];
};

if (isNull (uiNameSpace getVariable ["RscExtremoToastArea", displayNull])) then { 
	("RscExtremoToastAreaLayer" call BIS_fnc_rscLayer) cutRsc ["RscExtremoToastArea", "PLAIN", 0, true]
}; 
	
private _placeholders = param [1, ["","","","",""]]; 
private _rawText = format [getText (configFile >> "CfgExtremoToasts" >> _this#0 >> "template"), _placeholders param [0, ""], _placeholders param [1, ""], _placeholders param [2, ""], _placeholders param [3, ""]];
private _stripeColor = getArray (configFile >> "CfgExtremoToasts" >> _this#0 >> "color");

private _display = uiNameSpace getVariable ["RscExtremoToastArea", displayNull]; 
private _toastControl = _display ctrlCreate ["RscExtremoToast", -1]; 
private _toastPosition = ctrlPosition _toastControl;
private _textHeight = ctrlTextHeight _textControl;
private _textPosition = ctrlPosition _textControl;
if (_textHeight > (_toastPosition#3)) then  {
	_textPosition set [3, _textHeight / 155];   
	_toastPosition set [3,  _textHeight / 155];  
};

private _textControl = _toastControl controlsGroupCtrl 102;  
_textControl ctrlSetFont "RobotoCondensed";
_textControl ctrlSetStructuredText (parseText _rawText); 
_textControl ctrlSetPosition _textPosition; 
_textControl ctrlCommit 0;
_textControl ctrlSetScale 0.06;
_textControl ctrlSetPositionW 4.60;  
_textControl ctrlSetPositionH (_toastPosition#3); 
_textControl ctrlCommit 0;

private _backgroundControl = _toastControl controlsGroupCtrl 100;  
private _backgroundPosition = ctrlPosition _backgroundControl;
_backgroundPosition set [3, _toastPosition select 3];
_backgroundControl ctrlSetPosition _backgroundPosition;
_backgroundControl ctrlCommit 0;

private _stripeControl = _toastControl controlsGroupCtrl 101; 
private _stripePosition = ctrlPosition _stripeControl; 
_stripeControl ctrlSetBackGroundColor _stripeColor;
_stripePosition set [3, _toastPosition select 3];
_stripeControl ctrlSetPosition _stripePosition;
_stripeControl ctrlCommit 0;
_toastPosition set [0, safeZoneX + 300 * pixelW];
_toastPosition set [1, safeZoneY + (60 - 10) * pixelH - (_toastPosition select 3)];
_toastControl ctrlSetPosition _toastPosition;
_toastControl ctrlSetFade 1;
_toastControl ctrlCommit 0;

reverse ExtremoClientToasts;
ExtremoClientToasts pushBack [_toastControl, 0, diag_tickTime + 5];
reverse ExtremoClientToasts;
playsound "HintExpand";

private _position = 0;
{
	private _toastControl = _x select 0;
	private _toastPosition = ctrlPosition _toastControl;
	private _status = 0;
	private _statusChangeAt = (_x select 2) max (diag_tickTime + 2);
	if (_forEachIndex isEqualTo 0) then  {
		_position = safeZoneY + 60 * pixelH;
		_toastControl ctrlSetFade 0;
	} else  {
		if (_forEachIndex > 4) then 
		{
			_toastControl ctrlSetFade 1;
			_status = 1;
			_statusChangeAt = diag_tickTime + 2;
		};
	};
	_toastPosition set [1, _position];
	_toastControl ctrlSetPosition _toastPosition;
	_toastControl ctrlCommit 0.25;
	_position = _position + (_toastPosition select 3) + (10 * pixelH);
	ExtremoClientToasts set [_forEachIndex, [_toastControl, _status, _statusChangeAt]];
} forEach ExtremoClientToasts;