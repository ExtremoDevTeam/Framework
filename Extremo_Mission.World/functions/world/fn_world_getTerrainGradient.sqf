/*
	## EXTREMO
	## Nikko Renolds
*/

params [
	["_object",player]
];

private _terrainHeightCurrnet = getTerrainHeightASL (getPosASL _object);
private _terrainHeightInfront = getTerrainHeightASL (AGLToASL(_object getRelPos [1,0]));
private _gradient = abs(atan(_terrainHeightCurrnet - _terrainHeightInfront));

_gradient