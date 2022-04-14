/*
	## EXTREMO
	## Nikko Renolds
*/


if !(call extremo_fnc_player_canJump) exitWith {};
player setVariable ["extremo_var_playerLastJump",time];

private _lastPosition = getPosATL player;  
private _lastDirection = getDir player;

(velocity player) params [
	["_velocityX",0],
	["_velocityY",0],
	["_velocityZ",0]
];
 
private _velocityX_new = .4;
private _velocityZ_new = 3.82;
private _velocityY_new = _velocityX_new;

player setVelocity[
	_velocityX+(sin _lastDirection*_velocityX_new),
	_velocityY+(cos _lastDirection*_velocityY_new),
	_velocityZ+_velocityZ_New
];

[player, "AovrPercMrunSrasWrflDf"] remoteExec ["switchMove", 0];

_lastPosition spawn {
    waitUntil {
		(getPos player) params [
			["_positionX",0],
			["_positionY",0],
			["_positionZ",0]
		];
        if (_positionZ > 4) then {
            player setposATL _this;
            player setVelocity [0, 0, 0];
        };
        (animationState player) != "AovrPercMrunSrasWrflDf";
    };
};

true