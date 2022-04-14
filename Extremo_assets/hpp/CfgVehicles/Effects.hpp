/*
	## EXTREMO Survival
	## Nikko & Happyfeet
	## https://community.bistudio.com/wiki/Arma_3:_Characters_And_Gear_Encoding_Guide
	## https://community.bistudio.com/wiki/CfgVehicles_Config_Reference
*/

class Extremo_Effect_Flies: Extremo_Effect_Abstract
{
	displayName="Extremo Flies Effect";
	class EventHandlers
	{
		init="(_this select 0) call Extremo_fnc_object_flies_event_onInit";
		killed="(_this select 0) call Extremo_fnc_object_flies_event_onKilled";
	};
};