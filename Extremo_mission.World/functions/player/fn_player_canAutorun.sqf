/*
	## EXTREMO
	## Nikko Renolds
*/

//--- Config values
private _canAutoRun = true;

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

//--- Checks
try {
	if (_isLoading isNotEqualTo false) throw false;//loading screen
	if (_isDriving isNotEqualTo false) throw false;//in vehicle 
	if (_isLegsBroken isNotEqualTo false) throw false;//broke legs
	if (_isStarving isNotEqualTo false) throw false;//starving
	if (_isDehydrated isNotEqualTo false) throw false;//dehydrated
	if (_isForcedWalked isNotEqualTo false) throw false;//force walked by another script?
	if (_isDead isNotEqualTo false) throw false;//dead
	if (_isStanding isNotEqualTo true AND _isSwiming isNotEqualTo true) throw false;//not standing
	if ((player call Extremo_fnc_world_getTerrainGradient) < 0) throw false;//bad Gradient
	if !(player getVariable ["extremo_var_player_autorunToggled",false]) throw false;//toggle off
	if !((getPlayerUID player) in getArray(missionConfigFile >> "enableDebugConsole"))then{//non developer checks
		if (!isNull(findDisplay 49)) throw false;//escape open
	};
} catch {
	_canAutoRun = _exception;
};
 

_canAutoRun