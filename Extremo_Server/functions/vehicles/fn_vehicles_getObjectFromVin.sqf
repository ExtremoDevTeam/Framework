/*
	## EXTREMO
	## Nikko Renolds
*/

params [
	["_vin","",[""]]
];

private _object = objNull;

{
	if((_x call extremo_fnc_vehicles_getObjectVin) isEqualTo _vin)exitWith{
		_object = _x;
	};
}forEach vehicles;

_object