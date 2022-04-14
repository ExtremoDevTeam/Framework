/*
	## EXTREMO
	## Nikko Renolds
*/

params [
	["_mapIsOpened",false], 
	["_mapIsForced",false]
];

private _mapIsOpening = not(_mapIsOpened);

[2,["LOADING MAP","EXITING MAP"] select _mapIsOpening,"%Loading%"] call Extremo_fnc_gui_splashScreen;