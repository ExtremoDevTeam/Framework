/*
	## EXTREMO Survival
	## Nikko Renolds
*/

params [
	["_className","",[""]],
	["_position",[],[[]]],
	["_direction",0,[0,[]]],
	["_usePositionATL",false], 
	["_randomize",false]
];

private _config = missionConfigFile >> "CfgSpawnVehicles" >> "NonPersistent";
private _vehicle = [_className,_position,_direction,_usePositionATL] call Extremo_fnc_vehicles_createCareful;

_vehicle setVariable ["ExtremoIsPersistent", false];
_vehicle addEventHandler ["GetIn", {_this call (missionNamespace getVariable ["Extremo_fnc_vehicles_event_GetIn",{}])}];
_vehicle addMPEventHandler ["MPKilled", { if !(isServer) exitWith {}; _this call (missionNamespace getVariable ["Extremo_fnc_vehicles_event_MPKilled",{}])}];
_vehicle enableDynamicSimulation true;
_vehicle setPlateNumber "Extremo";

if _randomize then
{
	private _damageChance = getNumber(_config >> "damageChance");
	private _setFuel = getNumber(_config >> "fuel") isEqualTo 1;
	private _setAmmo = getNumber(_config >> "ammo") isEqualTo 1;

	if(_damageChance > 0)then
	{
		(getAllHitPointsDamage _vehicle) params [
			["_hitPointNames",[]],
			["_hitSelectionNames",[]],
			["_hitDamageValues",[]]
		];
		
		{
			if ((random 100) < _damageChance) then {
				_vehicle setHitPointDamage [_x, random 0.9];
			};
		} forEach _hitPointNames;
	};

	_vehicle setFuel ([0, random 1] select _setFuel);
	_vehicle setVehicleAmmo ([0, random 1] select _setAmmo);
};

format["Spawned (NonPersistent) Vehicle: `%1` | Grid: %2 | NetID: %3", _className, mapGridPosition _vehicle,netId _vehicle] call Extremo_fnc_server_log;

_vehicle