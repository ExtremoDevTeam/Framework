/*
	## EXTREMO
	## Nikko Renolds
*/

params [
	["_object",objNull,[objNull]]
];

private _vin = _object getVariable ["ExtremoVIN",""];

if !((_vin select [0,2]) in ["A1","A2","A3"])then{
	_vin = "<BAD-VIN>";
};

_vin