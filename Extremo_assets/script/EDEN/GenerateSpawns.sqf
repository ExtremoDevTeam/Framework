{
	if(typeOf _x == "Extremo_Unit_GhostPlayer") then {
		if(_forEachIndex == 99) then {
			[] call BIS_fnc_3DENExportOldSQM;
			["Generated Code for Extremo Spawnpoints, Saved to Clipboard.", [0, 0.30, 0.80, 0.40], "#BBCCDD", "ReadoutClick", 2] call Extremo3DEN_fnc_DisplayCustom3DENNotification;
		};
	}
} forEach (all3DENEntities select 0);