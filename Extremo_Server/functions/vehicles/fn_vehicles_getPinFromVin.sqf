/*
	## EXTREMO
	## Nikko Renolds

	["A3_7395679579_723662_50X52X49X49"] call extremo_fnc_vehicles_getPinFromVin;	// "2411"
*/

params [
	["_vin","",[""]]
];

private _lockCodeID = (_vin splitString "_") call BIS_fnc_arrayPop;
private _lockCode = toString((_lockCodeID splitString "X") apply {parseNumber _x});

_lockCode