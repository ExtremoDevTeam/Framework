params [
	["_unit", objNull, [objNull]],
	["_selection", "", [""]],
	["_damage", 0, [0]],
	["_source", objNull, [objNull]],
	["_projectile", "", [""]],
	["_hitPartIndex", -1, [0]],
	["_instigator", objNull, [objNull]],
	["_hitPoint", "", [""]]
];

if (_damage < 1) exitWith {false};
if (!alive _unit) exitWith {false};
if (_unit getVariable ["extremo_var_incapacitated", false]) exitWith {false};

private _ret = true;
private _veh = vehicle _source;

if (_projectile isEqualTo "" && !isNull _veh && !(_source isEqualTo _unit) && !isNull objectParent _source) then {
	_ret = false;
};
if (diag_tickTIme - ((_unit getVariable ["VDM", 0])) < 1 && _projectile isEqualTo "") then {
	_ret = false;
};
if !(_selection in ["","body","head"]) then {
	_ret = false;
};

_ret