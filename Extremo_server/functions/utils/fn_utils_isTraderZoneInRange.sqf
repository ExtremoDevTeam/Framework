/*
	## EXTREMO Survival
	## Nikko Renolds
*/

params [
	["_position",[],[[]]],
	["_radius",0,[0]]
];

private _position = _this select 0;
private _radius = _this select 1;
private _isInRange = false;

{
	if ((_x distance2D _position) < _radius) exitWith {
		_isInRange = true;
	};
} forEach (missionNamespace getVariable ["ExtremoTraderZoneMarkerPositions",[]]);

_isInRange