/*
	## EXTREMO
	## Nikko Renolds
*/

private _paramsOK = params [
	["_character",objNull,[objNull]],
	["_animation","",[""]]
];

//--- Bad input
if (isNull _character OR _animation isEqualTo "" OR not(_paramsOK)) exitWith {
	diag_log format["<extremo_fnc_system_animationSync> Error with script params! (_this = %1)",_this];
};

//--- Bad sender
if (local _character OR not(isRemoteExecuted)) exitWith {
	diag_log "<extremo_fnc_system_animationSync> Error script must be remote executed only!";
};

//--- Excute animation
_character switchMove _animation;