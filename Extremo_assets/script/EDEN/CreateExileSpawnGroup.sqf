[] spawn {
	extremoSpawnPrimary = create3DENEntity ["Object", "Extremo_Unit_GhostPlayer", (screenToWorld [0.5, 0.5])];
	extremoSpawns = 1;

	while {extremoSpawns < 100} do
	{
		_unit = (group extremoSpawnPrimary) create3DENEntity ["Object", "Extremo_Unit_GhostPlayer", ((getPosATL extremoSpawnPrimary) findEmptyPosition [0, 20])];
		_unit set3DENAttribute ["ControlMP", true];
		extremoSpawns = extremoSpawns + 1;
	};
	extremoSpawnPrimary set3DENAttribute ["ControlSP", false];
	extremoSpawnPrimary set3DENAttribute ["ControlMP", true];
	if(extremoSpawns == 100) then {
		["Created a group of 100 Extremo Spawns.", [0, 0.80, 0.20, 0.40], "#BBCCDD", "ReadoutClick", 2] call Extremo3DEN_fnc_DisplayCustom3DENNotification;
	} else {
		["Something went wrong, less than 100 units created.", [0.60, 0, 0, 0.40], "#FFFFFF", 2, 2] call Extremo3DEN_fnc_DisplayCustom3DENNotification;
	};
};