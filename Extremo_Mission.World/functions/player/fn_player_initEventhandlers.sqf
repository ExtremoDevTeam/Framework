/*
	## EXTREMO
	## Nikko Renolds
*/

private _evhIDs = [];

//--- 
{
	private _fnc_registerEvent = compile ("_this addEventHandler ['"+_x+"',{_this call (missionNamespace getVariable ['extremo_fnc_event_"+toLower _x+"',{}])}]");
	_evhIDs pushBack [_x,player call _fnc_registerEvent];
} forEach [
	"Fired",
	"FiredNear",
	"Explosion",
	"Hit",
	"Put",
	"Take",
	"InventoryClosed", 
	"InventoryOpened", 
	"handleDamage"
];

//--- return
(count _evhIDs >= 0)