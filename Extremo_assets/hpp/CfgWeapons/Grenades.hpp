/*
	## EXTREMO Survival
	## Nikko & Happyfeet
	## https://community.bistudio.com/wiki/Arma_3:_Characters_And_Gear_Encoding_Guide
	## https://community.bistudio.com/wiki/CfgWeapons_Config_Reference
*/

class Throw: GrenadeLauncher
{
	muzzles[]=
	{
		"HandGrenade_Stone",
		"HandGrenadeMuzzle",
		"MiniGrenadeMuzzle",
		"SmokeShellMuzzle",
		"SmokeShellYellowMuzzle",
		"SmokeShellGreenMuzzle",
		"SmokeShellRedMuzzle",
		"SmokeShellPurpleMuzzle",
		"SmokeShellOrangeMuzzle",
		"SmokeShellBlueMuzzle",
		"ChemlightGreenMuzzle",
		"ChemlightRedMuzzle",
		"ChemlightYellowMuzzle",
		"ChemlightBlueMuzzle",
		"IRGrenade",
		"Extremo_Item_ZipTie"
	};
	class ThrowMuzzle;
	class Extremo_Item_ZipTie: ThrowMuzzle
	{
		magazines[]=
		{
			"Extremo_Item_ZipTie"
		};
	};
};