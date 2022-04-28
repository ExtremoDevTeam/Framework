/*
	## EXTREMO
	## Nikko Renolds
*/

params [
	["_player",objNull,[objNull]],
	["_EVHVar","",[""]],
	["_deleteBody",false,[false]]
];

if(Extremo_var_splashTimer isNotEqualTo Extremo_var_respawnTimer)then{
	Extremo_var_splashTimer = Extremo_var_respawnTimer;
};

if (Extremo_var_respawnTimer - diag_ticktime < 0) then {		
	[_player,_deleteBody] spawn extremo_fnc_medical_bledout;
	Extremo_var_respawnTimer = nil;
	removeMissionEventHandler ["EachFrame", missionNamespace getVariable [_EVHVar,-1]];
};