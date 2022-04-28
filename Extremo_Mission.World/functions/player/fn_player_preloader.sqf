/*
	## EXTREMO Survival
	## Nikko Renolds

	waitUntil Extremo_fnc_player_preloader;
*/

[0,"Preloader","%Loading%",true,true] call Extremo_fnc_gui_splashScreen;
uiSleep 1.2;

private _preloadDistance = getNumber(missionConfigFile >> "CfgPlayer" >> "Extremo" >> "preloadDistance");
private _preloadObjects = [];
private _nearestObjects = nearestTerrainObjects [
	player,
	[],
	_preloadDistance,
	false,
	true
];

{
	switch (true) do 
	{ 
		case (_x isKindOf "Shed");
		case (_x isKindOf "Wall");
		case (_x isKindOf "Fence");
		case (_x isKindOf "House");
		case (_x isKindOf "FuelStation"): {_preloadObjects pushBack _x};
	};
}forEach _nearestObjects;

{
	(getModelInfo _x) params [
		["_modelName",""], 
		["_modelPath",""], 
		["_hasSkeleton",false], 
		["_placingPoint",[]]
	];
	if(_modelName isNotEqualTo "")then{ 
		private _modelGrid = mapGridPosition _x;
		private _modelNet = netID _x;
		[0,"Preloader",format ["Grid: %1 | NetID: %2 | Model: %3",_modelGrid,_modelNet,_modelName],true,true] call Extremo_fnc_gui_splashScreen;
		waitUntil {_preloadDistance preloadObject _x AND {_x nearObjectsReady (_preloadDistance / 2)}};
	};
}forEach _preloadObjects;

[0,"Preloader","%Loading%",true,true] call Extremo_fnc_gui_splashScreen;
waitUntil {player nearObjectsReady _preloadDistance};
uiSleep 5;

true