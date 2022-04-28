/*
	## EXTREMO
	## Nikko Renolds
*/

params [
	["_corpse",objNull,[objNull]], 
	["_killer",objNull,[objNull]],
	["_respawnType",0,[0]], 
	["_respawnDelay",0,[0]]
];

/*switch (missionNamespace getVariable ["Extremo_var_medical_healthState",0]) do {
	case 0: 
	{   
		//Start incapacitated system
		["respawned",player] spawn extremo_fnc_medical_incapacitated;
		{player setVariable [_x, _corpse getVariable _x]} forEach allVariables _corpse;

	};
	case 1: 
	{ 
		//Allows user to force respawn whilst incapacitated
		Extremo_var_medical_healthState = 3;
	};
};*/

true