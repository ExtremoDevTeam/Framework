class CfgPatches 
{
    class Extremo_server_functions
	{
        class authors_info
		{
			class author_0
			{
				name = "Nikko";
				uid = "76561199109931625";
				email = "Ni1kko@outlook.com";
				github = "github.com/Ni1kko";
			};
		};
		requiredVersion=2.04;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
	};
};
 
class CfgFunctions 
{ 
    class Extremo
    {
        //--- Extremo Event Functions 
        class Event_Functions
        {
            file = "\Extremo_server\functions\events"; 
            class event_playerConnected {};
            class event_playerDisconnected {};
            class event_handleDisconnect {};
            class event_mpKilled {};
        };

        //--- Extremo Loot Functions
        class Loot_Functions
        {
            file = "\Extremo_server\functions\loot";
            class loot_initialize {};
            class loot_addItem {};
            class loot_spawn {};
        };

        //--- Extremo Server Functions 
        class Server_Functions
        {
            file = "\Extremo_server\functions\server"; 
            class server_init {};
            class server_log {};
        };

        //--- Extremo System Functions 
        class System_Functions
        {
            file = "\Extremo_server\functions\system"; 
            class system_versionInfo {};
            class system_getObjectFromBEGuid {};
        };

        //--- Extremo Utils Functions
        class Utils_Functions
        {
            file = "\Extremo_server\functions\utils";
            class utils_getCargoType {}; 
            class utils_isTerritoryInRange {}; 
        };

        //--- Extremo Vehicles Functions
        class Vehicles_Functions
        {
            file = "\Extremo_server\functions\vehicles"; 
            class vehicles_initialize {};
            class vehicles_createCareful {};
            class vehicles_createNonPersistentVehicle {};
            class vehicles_createPersistentVehicle {};
            class vehicles_generateVIN {};
            class vehicles_getPinFromVin {};
            class vehicles_getObjectVin {};
            class vehicles_getObjectFromVin {};
            class vehicles_setObjectVin {};
            class vehicles_updateVinPin {};
            class vehicles_purchase {}; 
        };
    };
};
