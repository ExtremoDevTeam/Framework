/*
	## EXTREMO
	## Nikko Renolds
*/
 
params [
	["_vehicleClassName","",[""]],
	["_position",[],[[]]],
	["_direction",0,[0,[]]],
	["_usePositionATL",false]
];

_position params [
	["_positionX",0],
	["_positionY",0],
	["_positionZ",0]
];

private _config = missionConfigFile >> "CfgSpawnVehicles";
private _vehicle = createVehicle [_vehicleClassName, [_positionX - 250 + (random 500),_positionY - 250 + (random 500),1000 + (random 1000)], [], 0, "CAN_COLLIDE"];

_vehicle allowDamage false;
_vehicle removeAllEventHandlers "HandleDamage";
_vehicle addEventHandler["HandleDamage", {false}];
_vehicle setVelocity [0, 0, 0];

if (typeName _direction isEqualTo "ARRAY") then {
	_vehicle setVectorDirAndUp _direction;
}else {
	_vehicle setDir _direction;
};

if (_usePositionATL) then {
	_vehicle setPosATL _position;
} else {
	_vehicle setPosASL _position;
};

_vehicle setVelocity [0, 0, 0];
_vehicle allowDamage true;
_vehicle removeAllEventHandlers "HandleDamage";
_vehicle setDamage 0;
clearBackpackCargoGlobal _vehicle;
clearItemCargoGlobal _vehicle;
clearMagazineCargoGlobal _vehicle;
clearWeaponCargoGlobal _vehicle;

if (_vehicleClassName isKindOf "I_UGV_01_F") then {
	createVehicleCrew _vehicle;
};

if (getNumber(_config >> "nightVision") isEqualTo 0) then {
	_vehicle disableNVGEquipment true;
};

if (getNumber(_config >> "thermalVision") isEqualTo 0) then {
	_vehicle disableTIEquipment true;
};

_vehicle