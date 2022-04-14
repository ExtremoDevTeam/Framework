/*
	## EXTREMO Survival
	## Nikko & Happyfeet
	## https://community.bistudio.com/wiki/Arma_3:_Characters_And_Gear_Encoding_Guide
	## https://community.bistudio.com/wiki/CfgVehicles_Config_Reference
*/

class Extremo_Loot_XmasPresent_Abstract: LootWeaponHolder
{
	model="\Extremo_Assets\model\Extremo_Item_XmasPresent.p3d";
	hiddenSelections[]=
	{
		"bow",
		"box"
	};
};
class Extremo_Loot_XmasPresent_Blue: Extremo_Loot_XmasPresent_Abstract
{
	hiddenSelectionsTextures[]=
	{
		"#(argb,2,2,1)color(0.901,0.843,0.207,1,co)",
		"\Extremo_Assets\model\Extremo_Item_XmasPresent_blue.paa"
	};
};
class Extremo_Loot_XmasPresent_Gold: Extremo_Loot_XmasPresent_Abstract
{
	hiddenSelectionsTextures[]=
	{
		"#(argb,2,2,1)color(0.172,0.180,0.196,1,co)",
		"\Extremo_Assets\model\Extremo_Item_XmasPresent_golden.paa"
	};
};
class Extremo_Loot_XmasPresent_Green: Extremo_Loot_XmasPresent_Abstract
{
	hiddenSelectionsTextures[]=
	{
		"#(argb,2,2,1)color(0.725,0.945,0.964,1,co)",
		"\Extremo_Assets\model\Extremo_Item_XmasPresent_green01.paa"
	};
};
class Extremo_Loot_XmasPresent_Mint: Extremo_Loot_XmasPresent_Abstract
{
	hiddenSelectionsTextures[]=
	{
		"#(argb,2,2,1)color(0.305,0.564,0.062,1,co)",
		"\Extremo_Assets\model\Extremo_Item_XmasPresent_green02.paa"
	};
};
class Extremo_Loot_XmasPresent_Pink: Extremo_Loot_XmasPresent_Abstract
{
	hiddenSelectionsTextures[]=
	{
		"#(argb,2,2,1)color(0.929,0.815,0.890,1,co)",
		"\Extremo_Assets\model\Extremo_Item_XmasPresent_pink.paa"
	};
};
class Extremo_Loot_XmasPresent_Purple: Extremo_Loot_XmasPresent_Abstract
{
	hiddenSelectionsTextures[]=
	{
		"#(argb,2,2,1)color(0.862,0.505,0.792,1,co)",
		"\Extremo_Assets\model\Extremo_Item_XmasPresent_purple.paa"
	};
};
class Extremo_Loot_XmasPresent_Magenta: Extremo_Loot_XmasPresent_Abstract
{
	hiddenSelectionsTextures[]=
	{
		"#(argb,2,2,1)color(0.576,0.894,0.972,1,co)",
		"\Extremo_Assets\model\Extremo_Item_XmasPresent_red01.paa"
	};
};
class Extremo_Loot_XmasPresent_Red: Extremo_Loot_XmasPresent_Abstract
{
	hiddenSelectionsTextures[]=
	{
		"#(argb,2,2,1)color(0.9,0.9,0.9,1,co)",
		"\Extremo_Assets\model\Extremo_Item_XmasPresent_red02.paa"
	};
};