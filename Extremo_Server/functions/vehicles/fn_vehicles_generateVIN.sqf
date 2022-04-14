/*
	## EXTREMO
	## Nikko Renolds
*/

private _getNewVin = {
	params [
		["_class","",["",objNull]],
		["_lockcode","",[""]],
		["_steamID","",[""]]
	];

	if(typeName _class isEqualTo "OBJECT")then{
		_class = typeOf _class;
	};

	private _vinClass = toArray ((((_class splitString "_") select [1,count _class]) joinString "") select [1,5]) joinString "";
	private _vinLockcode = toArray _lockcode joinString "X";

	private _vinUid = _steamID select [13,4];

	for "_i" from 1 to 7 do {
		_vinUid = (selectrandom ("9876543210" splitString "")) + _vinUid;
	};

	format ["A3_%1%2_%3",_vinClass,_vinUid,_vinLockcode];
};

private _isUniqueVin = {
	params ["_vin"];
	private _vehiclesDB = ["READ","vehicles",[["ID"],[["VIN", ["DB","STRING", _vin] call Extremo_fnc_database_parse]]]]call Extremo_fnc_database_request;
	if (typeName _vehiclesDB isNotEqualTo "ARRAY") exitWith {false};
	count _vehiclesDB isEqualTo 0
};

private _vin = "";
private _gen = true;

while{_gen}do{
	_vin = _this call _getNewVin;
	if([_vin] call _isUniqueVin)exitWith{
		_gen = false;
	};
};

_vin