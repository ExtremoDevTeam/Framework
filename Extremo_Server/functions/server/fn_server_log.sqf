/*
	## EXTREMO
	## Nikko Renolds
*/
params[
	["_message",""],
	["_client",false]
];

private _serverlog = format['Extremo%2%1:%2%3',call Extremo_var_system_version,toString[32],_message];
diag_log _serverlog;

if _client then{
	[_message,false] remoteExec ["Extremo_fnc_client_log",-2];
};