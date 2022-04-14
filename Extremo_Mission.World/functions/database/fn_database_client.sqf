/*
	## EXTREMO Survival
	## Nikko Renolds
*/

if (!hasInterface) exitWith {};

private _table = [_this] call BIS_fnc_arrayShift;
private _action = [_this] call BIS_fnc_arrayShift;

switch _table do 
{  
	case "characters": 
	{
		switch _action do 
		{
			case "load": 
			{
				params [
					["_BEGuid","",[""]],
					["_LastLoadout",[],[[]]],
					["_LastPosition",[],[[]]],
					["_Wallet",0,[0]]
				];
				[0,"LOADED", "Your data has been loaded",true,true] call Extremo_fnc_gui_splashScreen;
				[player,true,_LastLoadout,_LastPosition,_Wallet] call Extremo_fnc_player_login;
			};
			case "update":
			{
				params [
					["_silent",true]
				];
				if !_silent then{[5,"SYNC", "Your data has been synced",false,false] call Extremo_fnc_gui_splashScreen};
				["characters","update",player] remoteExec ["extremo_fnc_database_server", 2];
			};
		};
		
	};
	case "vehicles": 
	{
		switch _action do 
		{
			case "load": 
			{

			};
			case "update": 
			{

			};
		};
	};
};

true