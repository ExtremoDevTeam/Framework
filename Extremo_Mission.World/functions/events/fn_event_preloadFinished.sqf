/*
	## EXTREMO
	## Nikko Renolds
*/
params [
	["_BEGuid","",[""]]
];

removeMissionEventHandler ["PreloadFinished", Extremo_var_event_preloadFinishedEH]; //--- Preload event occurs after briefing screen on mission start. (DO NOT REMOVE THIS LINE)
Extremo_var_event_preloadFinishedEH = -1;

[0,"LOADING","%Loading%"] call Extremo_fnc_gui_splashScreen; 
[_BEGuid] spawn extremo_fnc_player_init;