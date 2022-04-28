/*
	## EXTREMO Survival
	## Nikko Renolds
*/

params [
	["_className","",[""]],
	["_position",[],[[]]],
	["_direction",0,[0,[]]],
	["_usePositionATL",false,[false]], 
	["_lockCode","",[""]]
];

private _vehicle = [_className,_position,_direction,_usePositionATL] call Extremo_fnc_vehicles_createCareful;

_vehicle setVariable ["ExtremoIsLocked", 0];
_vehicle setVariable ["ExtremoIsPersistent", true];
_vehicle addEventHandler ["GetIn", {_this call (missionNamespace getVariable ["Extremo_fnc_vehicles_event_GetIn",{}])}];
_vehicle addEventHandler ["GetOut", {_this call (missionNamespace getVariable ["Extremo_fnc_vehicles_event_GetOut",{}])}];
_vehicle addMPEventHandler ["MPKilled", {if(!isServer)exitWith{};_this call (missionNamespace getVariable ["Extremo_fnc_vehicles_event_MPKilled",{}])}];
_vehicle enableDynamicSimulation true;
_vehicle setPlateNumber "Extremo";
_vehicle enableRopeAttach true;
_vehicle lock 0;

format["Spawned (Persistent) Vehicle: `%1` | Grid: %2 | NetID: %3 | LockCode: %4", _className, mapGridPosition _vehicle,netId _vehicle,_lockCode] call Extremo_fnc_server_log;

_vehicle