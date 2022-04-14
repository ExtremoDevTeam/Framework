/*
	## EXTREMO
	## Nikko Renolds
*/

//--- Config values
private _canJump = true;

//--- Helpers
private _isSwiming = ((underwater player) || ((getPosASL player)#2) < 0.1);
private _isDriving = ((vehicle player) isNotEqualTo player);
private _isLoading = (call BIS_fnc_isLoading);
private _isLegsBroken = ((player getHit "legs") >= 0.5);
private _isStarving = ((player getVariable ["extremo_var_playerHunger", 100]) < 5);
private _isDehydrated = ((player getVariable ["extremo_var_playerThirst", 100]) < 5);
private _isForcedWalked = (isForcedWalk player);
private _isDead = (player getVariable ["extremo_var_incapacitated", false]);
private _isStanding = ((stance player) isEqualTo "STAND");
private _isOnGround = (isTouchingGround player);

//--- Checks
try {
	if _isLoading throw false;//loading screen
	if _isDriving throw false;//in vehicle 
	if _isLegsBroken throw false;//broke legs
	if _isStarving throw false;//starving
	if _isDehydrated throw false;//dehydrated
	if _isForcedWalked throw false;//force walked by another script?
	if _isDead throw false;//dead
	if _isSwiming throw false;//swiming
	if !_isStanding throw false;//not standing
	if !_isOnGround throw false;//not on ground
	if ((player call Extremo_fnc_world_getTerrainGradient) < 0) throw false;//bad gradient
	if(time - (player getVariable ["extremo_var_playerLastJump",0]) < 2.5) throw false;//too soon
	if(animationState player isEqualTo "AovrPercMrunSrasWrflDf") throw false;//still in jump animation
	if(speed player < 2) throw false;//not enough momentum
	if(((velocity player)#2) > 2.5) throw false;//still in jump velocity 
} catch {
	_canJump = _exception;
};
 

_canJump