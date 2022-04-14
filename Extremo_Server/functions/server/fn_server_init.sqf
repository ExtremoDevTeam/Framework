/*
	## EXTREMO
	## Nikko Renolds

	try extremo_fnc_server_init catch {_exception call Extremo_fnc_server_log};
*/

//--- Get version info
([
	[configFile,"Extremo_Server"],
	[missionConfigFile,"Extremo_Mission"]
] apply {
	getText((_x#0) >> "CfgPatches" >> (_x#1) >> "frameworkVersion")
}) params [
	["_serverVersionInfo","",[""]],
	["_clientVersionInfo","",[""]]
];

//--- Check server and mission version's match
Extremo_var_system_versionOK = (_clientVersionInfo != "" AND _serverVersionInfo != "" AND _clientVersionInfo == _serverVersionInfo);

//--- Broadcast version
{publicVariable _x}forEach [
	"Extremo_var_system_version",
	"Extremo_var_system_versionOK",
	"Extremo_var_system_versionInfo",
	"Extremo_fnc_system_versionInfo"
];

//--- Don't start server if different version
if !Extremo_var_system_versionOK exitWith {
	"Server failed to load..." call Extremo_fnc_server_log;
};

//--- 
"Server loading..." call Extremo_fnc_server_log;
with serverNamespace do {
	extremo_var_rcon_restartmode = 0;
	extremo_var_rcon_passwordOK = false;
};

//--- 
if !(getRemoteSensorsDisabled) then{
	disableRemoteSensors true;
};

//--- Establish connection from ArmA3 to SQL server using extDB3 extension
if !(call Extremo_fnc_database_initialize) throw "Server is unable to load due to database related errors!";

//--- Add Event Handlers
Extremo_HandleDisconnect = addMissionEventHandler ["HandleDisconnect", Extremo_fnc_event_handleDisconnect,  []];


//--- Initialize vehicles that are stored within SQL database and random config vehicles
[] spawn extremo_fnc_vehicles_initialize;

//--- Initialize random config loot
[] spawn extremo_fnc_loot_initialize;

//--- 
[] spawn {
	while {true} do {
		{
			uiSleep 60;
			if (_x isKindOf "Air" || _x isKindOf "Car" || _x isKindOf "Ship") then {
				private _vehicleReports = _x getVariable ["ExtremoIncidents",[]];
				if(count _vehicleReports > 0)then{
					{
						_x params [
							["_vehicleNET","",[""]], 
							["_vehiclePlate","",[""]],
							["_vehicleType","",[""]], 
							["_driverName","",[""]],
							["_driverUID","",[""]],
							["_driverNET","",[""]],
							["_vehicleCrew",[],[[]]],
							["_playerName","",[""]],
							["_playerUID","",[""]],
							["_playerNET","",[""]],
							["_playerLocation",[],[[]]],
							["_time","",[""]],
							["_date","",[""]]
						];

						[format ["(%1|%2) Has ran over (%3|%4) with (%6) at %7 on the %8 <posATL = %5>", 
							_driverName, 
							_driverUID,
							_playerName, 
							_playerUID, 
							_playerLocation,
							_vehicleType, 
							_time, 
							_date
						]] call Extremo_fnc_server_log;
					}forEach _vehicleReports;
					_x setVariable ["ExtremoIncidents", [], true];
				};
			};
		}forEach vehicles;
	};
};

"Server running!" call Extremo_fnc_server_log;
