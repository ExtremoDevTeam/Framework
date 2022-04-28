class CfgPatches 
{
    class Extremo_server_database
	{
        class authors_info
		{
            class author_0
            {
				name = "Nikko";
				uid = "76561199109931625";
				email = "Ni1kko@outlook.com";
				github = "github.com/Torndeco";
			};
		};
		requiredVersion=2.04;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
	};
};

class CfgExtDB
{
    profile = "ExtremoDatabase";   //Database profile setup in `extdb3-conf.ini`  
    sqlcustom = 0;                 //Enable prepared calls
    sqlcustomfile = "ExtremoSQL";  //File name of `custom.ini`

    //--- logging
    rptlogs = 1;             //Log to RPT file
    conlogs = 1;             //Log to Console
    extlogs = 0;             //Log to Extension

    //--- Misc
    debugMode = 1;          //Enable many server/hc debugging logs. Default: 0 (1 = Enabled / 0 = Disabled)
    headlessclient = 0;     //headlessclient is set to 1 (enabled), the server will run without fault when no Headless Client is connected. However, it will support the Headless Client if you choose to connect one.
    headlessclients[] = {
        //"76561198276956558"
    };

    //--- procedures to run after database connects
    startup_procedures[] = {
        //"deleteDeadVehicles"
    };
};

 
class CfgFunctions 
{ 
    class Extremo
    {
        class Database_Functions
        {
            file = "\Extremo_server\functions\database";
            class database_initialize {};//{preInit = 1;};
            class database_initializeHC {};
            class database_rawasync_request {};
            class database_prepared_request {};
            class database_request {};
            class database_parse {};
            class database_systemlog {}; 
            class database_server {};
        };
    };
};
