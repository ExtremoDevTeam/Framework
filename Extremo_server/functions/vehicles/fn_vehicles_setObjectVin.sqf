/*
	## EXTREMO
	## Nikko Renolds
*/

params [
	["_object",objNull,[objNull]],
	["_vin","",[""]]
];

_object setVehicleVarName _vin;
_object setVariable ["ExtremoVIN",_vin,true];

private _isSet = _object isEqualTo (_vin call extremo_fnc_vehicles_getObjectFromVin);

_isSet