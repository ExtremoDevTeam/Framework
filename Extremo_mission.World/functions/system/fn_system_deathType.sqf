/*
	## EXTREMO Survival
	## Nikko Renolds
*/

params ["_victim", "_killer", "_killingPlayer", "_instigator"];

private _type = 0;

try 
{
	if (_victim getVariable ["IsPlayingRussianRoulette", false]) then 
	{
		throw 2; 
	};
	if (_victim isEqualTo _killer) then
	{
		throw 1; 
	};
	if ((vehicle _victim) isEqualTo _killer) then
	{
		throw 3; 
	};
	if (isNull _instigator) then
	{
		throw 0; 
	};
	if (isNull _killer) then
	{
		throw 0;
	};
	if (isNull _killingPlayer) then 
	{
		throw 4; 
	};
	if ((group _victim) isEqualTo (group _killingPlayer)) then 
	{
		throw 5;
	};
	private _victimClanId = _victim getVariable ["ExtremoClanID", -2];
	private _killerClanId = _killer getVariable ["ExtremoClanID", -3];
	if (!(_victimClanId isEqualTo -1) && (_victimClanId isEqualTo _killerClanId)) then
	{
		throw 5;
	};		
	if (_victim getVariable ["ExtremoIsBambi", false]) then 
	{
		throw 6;
	};
	throw 7;
}
catch 
{
	_type = _exception;
};
_type