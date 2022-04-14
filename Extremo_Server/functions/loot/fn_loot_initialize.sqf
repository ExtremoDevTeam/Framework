/*
	## EXTREMO Survival
	## Nikko Renolds
*/

{
	private _lastlootspawn = _x getVariable ["ExtremoLastLootSpawnTime", time]; 
	if (_lastlootspawn <= time) then { 
		if (_x call Extremo_fnc_loot_spawn) then { 
			_x setVariable["ExtremoLastLootSpawnTime", time + 120];
			["SuccessTitleAndText",["Server Notification!","Loot Spawned"]] remoteExecCall ["Extremo_fnc_gui_toasterScreen", owner _x];
		};
	};
} forEach allPlayers;