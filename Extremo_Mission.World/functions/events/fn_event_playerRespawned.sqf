/*
	## EXTREMO
	## Nikko Renolds
*/

params [
	["_newcharacter",objNull,[objNull]], 
	["_oldcharacter",objNull,[objNull]],
	["_respawnType",0,[0]], 
	["_respawnDelay",0,[0]]
];

["characters","update",player] remoteExec ["extremo_fnc_database_server", 2];

true