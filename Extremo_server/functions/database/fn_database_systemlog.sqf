/*
	## EXTREMO
	## Nikko Renolds
*/

params [
	["_logmessage",""],
	["_logparams",[]]
];
 
if(!isServer)exitwith{false};
if(count _logmessage < 2)exitwith{false};

private _config = configFile >> "CfgExtDB";

_logmessage = format["[DATABASE SYSTEM]: %1",_logmessage];

//--- Console
if((getNumber(_config >> "conlogs") isEqualTo 1) AND (serverNamespace getVariable ["extremo_var_rcon_passwordOK",false]))then{
	format ["#debug %1", _logmessage] call (missionNamespace getVariable ["Extremo_fnc_rcon_sendCommand",{}]);
}else{
	//--- RPT
	if(getNumber(_config >> "rptlogs") isEqualTo 1)then{
		diag_log _logmessage;
	};
};

//--- Extension
if(getNumber(_config >> "extlogs") isEqualTo 1)then{
    //"" callExtension format["",_logmessage]
};

true