/*
	## EXTREMO
	## Nikko Renolds

	[cursorObject, player] call extremo_fnc_medical_revive;
*/

if(!canSuspend)exitWith {_this spawn extremo_fnc_medical_revive};
disableSerialization;

params [
	["_target", objNull, [objNull]],
	["_reviver", objNull, [objNull]],
	["_actionTitle", ""]
];

//--- 
if (isNull _target || isNull _reviver) exitWith {};
if !(_target getVariable ["extremo_var_incapacitated", false]) exitWith {hint "This person is not incapacitated";};
if (_target getVariable ["revive_in_progress", false]) exitWith {hint "Someone else is already reviving this person";};

//--- 
_target setVariable ["revive_in_progress", true, true];
_target setVariable ["reviver", _reviver, true];

//--- 
private _cP = 0.00;
private _title = format ["%1", _actionTitle];
Extremo_var_actionBlocked = true;
Extremo_var_interrupted = false;

//--- Create Rsc Title Overlay
"RscExtremo_ProgressScreenLayer" cutRsc ["RscExtremo_ProgressScreen","PLAIN"];
private _ui = uiNamespace getVariable "RscExtremo_ProgressScreen";
private _progress = _ui displayCtrl 3390;
private _pgText = _ui displayCtrl 3391;
private _pgTextProgress = _ui displayCtrl 3392;
private _pgProgressBackgroundColor = _ui displayCtrl 3393;

//--- Setup Rsc Title Overlay
_pgText ctrlSetStructuredText parseText format ["<t align='center'>%1...</t>", _title];
_progress progressSetPosition 0.01;
_pgProgressBackgroundColor ctrlSetBackgroundColor [0.5, 0.5, 0.5, 0.6];
_progress ctrlSetTextColor [0, 0, 0, 1];
_cP = 0.03;

//--- Update Loop
for "_i" from 0 to 1 step 0 do 
{
	//--- Update Animation
	if (animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then {
		[player,"AinvPknlMstpSnonWnonDnon_medic_1",true] remoteExecCall ["Extremo_fnc_system_animationSync", -2];
		player switchMove "AinvPknlMstpSnonWnonDnon_medic_1";
		player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
	};

	//--- Update Progress
	uiSleep 0.26;
	_cP = _cP + 0.03;
	_progress progressSetPosition _cP;
	_pgTextProgress ctrlSetStructuredText parseText format ["<t align='center'>%1</t>", str round(_cP * 100) + "%"];

	//--- Exit Loop Checks
	private _exit = false;

	//true condition checks
	{if _x exitWith {_exit = _x}}forEach [
		_cP >= 1,
		Extremo_var_interrupted,
		player distance _target > 10,
		!isNull(objectParent player)
	];
	
	//break out loop 
	if _exit exitWith { 
		if Extremo_var_interrupted then {
			"RscExtremo_ProgressScreenLayer" cutFadeout 1;
		};
	};

	//true player var checks
	{if (player getVariable [_x, false]) exitWith {_exit = _x}}forEach [
		'incapacitated',
		'tied',
		'restrained',
		'tased',
		'knockedout'
	];

	//break out loop 
	if _exit exitWith {};
};

//--- Remove overlay
"RscExtremo_ProgressScreenLayer" cutFadeout 1;

//---
player switchMove "";
_target setVariable ["revive_in_progress", false, true];
_target setVariable ["reviver", nil, true];
Extremo_var_actionBlocked = false;


//---
if (_cP >= 1) then {
	[_target, _reviver, false] call extremo_fnc_medical_revived;

	//-- Re-enable thier damage
	_target allowDamage true;

	diag_log "(revive completed)";
}else{
	diag_log "(revive incomplete)";
};