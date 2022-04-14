if !(params [
	["_unit", objNull, [objNull]],
	["_medic", objNull, [objNull]]
]) exitWith {};

if (isNull _unit) exitWith {};
if (isNull _medic) exitWith {};

[format ["You have successfully given %1 some pain killers", name _unit]] remoteExecCall ["hint", _medic];
[format ["%1 has given you some painkillers", name _medic]] remoteExecCall ["hint", _unit];
[] remoteExecCall ["extremo_fnc_medical_destroyRevivedEffects", _unit];