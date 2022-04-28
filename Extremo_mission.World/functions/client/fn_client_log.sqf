/*
	## EXTREMO
	## Nikko Renolds
*/
params[
	["_message",""],
	["_server",false]
];

private _clientlog = ("%FrameworkVersion%:" + (toString[32]) + _message);
["_clientlog"] call Extremo_fnc_system_replacmentCallback;
diag_log _clientlog;

if _server then{  
	private _serverlog = ("[%SteamName%|%SteamID%]" + (toString[32]) + _message);
	["_serverlog"] call Extremo_fnc_system_replacmentCallback;
	_serverlog remoteExec ["Extremo_fnc_server_log",2];
};