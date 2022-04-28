class CfgPatches 
{
    class Extremo_server
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
			class author_1
			{
				name = "HappyFeet";
				uid = "76561198147157388";
				email = "Stephenallen1414@gmail.com";
				github = "github.com/Spodini";
			};
		};
        frameworkVersion = "1.4.106-alpha.1+framework development";
		requiredVersion = 2.08;
		requiredBuild = "149049"; 
		requiredAddons[] = {
            "Extremo_server_functions", 
            "Extremo_server_fsms"
        };
		units[] = {};
		weapons[] = {};
	};
};

class CfgFunctions 
{ 
    class Extremo 
    {
        class Server_Root_Functions
        {
            file = "\Extremo_server"; 
            class preInit {preInit=1;};
        };
    };
};
         