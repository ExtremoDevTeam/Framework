/*
	## EXTREMO
	## Nikko Renolds
*/

params [
	['_control',controlNull,[controlNull]],
	['_config',configNull,[configNull]],
	['_eventName','',['']]
];

if (isNull _control OR isNull _config OR _eventName isEqualTo "") exitwith {false};
 
private _controlClasses = [_config] call BIS_fnc_returnChildren;
private _class = "<No Class>";

{
	private _idc = [_x,"idc",-1] call BIS_fnc_returnConfigEntry;
	if (_idc isEqualTo (ctrlIdc _control)) exitWith {
		_class = _x;
	};
} forEach _controlClasses;

if (!isClass _class) exitWith {false};

private _expression = [_class,_eventName,''] call BIS_fnc_returnConfigEntry;
if(_expression isNotEqualTo "")then{
	private _code = compile _expression;
	[_control] spawn _code;
};

true;
