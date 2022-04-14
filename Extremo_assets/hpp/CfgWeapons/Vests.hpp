/*
	## EXTREMO Survival
	## Nikko & Happyfeet
	## https://community.bistudio.com/wiki/Arma_3:_Characters_And_Gear_Encoding_Guide
	## https://community.bistudio.com/wiki/CfgWeapons_Config_Reference
*/

class Extremo_Vest_Rebreather_NATO: V_RebreatherB
{
	scope=2;
	author="Nikko Renolds";
	displayName="Rebreather (NATO, Forced)";
	hiddenSelections[]=
	{
		"camo"
	};
	hiddenSelectionsTextures[]=
	{
		"\A3\characters_f\common\data\diver_equip_nato_co.paa"
	};
	hiddenUnderwaterSelections[]=
	{
		"hide"
	};
	hiddenUnderwaterSelectionsTextures[]=
	{
		"\A3\characters_f\common\data\diver_equip_nato_co.paa",
		"\A3\characters_f\common\data\diver_equip_nato_co.paa",
		"\A3\characters_f\data\visors_ca.paa"
	};
	class ItemInfo: VestItem
	{
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenUnderwaterSelections[]=
		{
			"hide"
		};
		hiddenUnderwaterSelectionsTextures[]=
		{
			"\A3\characters_f\common\data\diver_equip_nato_co.paa",
			"\A3\characters_f\common\data\diver_equip_nato_co.paa",
			"\A3\characters_f\data\visors_ca.paa"
		};
		containerClass="Supply0";
		mass=80;
		overlaySelectionsInfo[]=
		{
			"Ghillie_hide"
		};
		scope=0;
		showHolsteredPistol=0;
		type=701;
		uniformModel="\A3\Characters_F\Common\equip_rebreather";
		uniformType="Default";
		vestType="Rebreather";
	};
};
class Extremo_Vest_Rebreather_AAF: V_RebreatherIA
{
	scope=2;
	author="Nikko Renolds";
	displayName="Rebreather (AAF, Forced)";
	hiddenSelections[]=
	{
		"camo"
	};
	hiddenSelectionsTextures[]=
	{
		"\A3\characters_f\common\data\diver_equip_rus_co.paa"
	};
	hiddenUnderwaterSelections[]=
	{
		"hide"
	};
	hiddenUnderwaterSelectionsTextures[]=
	{
		"\A3\characters_f\common\data\diver_equip_rus_co.paa",
		"\A3\characters_f\common\data\diver_equip_rus_co.paa",
		"\A3\characters_f\data\visors_ca.paa"
	};
	class ItemInfo: VestItem
	{
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenUnderwaterSelections[]=
		{
			"hide"
		};
		hiddenUnderwaterSelectionsTextures[]=
		{
			"\A3\characters_f\common\data\diver_equip_nato_co.paa",
			"\A3\characters_f\common\data\diver_equip_nato_co.paa",
			"\A3\characters_f\data\visors_ca.paa"
		};
		containerClass="Supply0";
		mass=80;
		overlaySelectionsInfo[]=
		{
			"Ghillie_hide"
		};
		scope=0;
		showHolsteredPistol=0;
		type=701;
		uniformModel="\A3\Characters_F\Common\equip_rebreather";
		uniformType="Default";
		vestType="Rebreather";
	};
};
class Extremo_Vest_Rebreather_CSAT: V_RebreatherIR
{
	scope=2;
	author="Nikko Renolds";
	displayName="Rebreather (CSAT, Forced)";
	hiddenSelections[]=
	{
		"camo"
	};
	hiddenSelectionsTextures[]=
	{
		"\A3\characters_f\common\data\diver_equip_iran_co.paa"
	};
	hiddenUnderwaterSelections[]=
	{
		"hide"
	};
	hiddenUnderwaterSelectionsTextures[]=
	{
		"\A3\characters_f\common\data\diver_equip_iran_co.paa",
		"\A3\characters_f\common\data\diver_equip_iran_co.paa",
		"\A3\characters_f\data\visors_ca.paa"
	};
	class ItemInfo: VestItem
	{
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenUnderwaterSelections[]=
		{
			"hide"
		};
		hiddenUnderwaterSelectionsTextures[]=
		{
			"\A3\characters_f\common\data\diver_equip_nato_co.paa",
			"\A3\characters_f\common\data\diver_equip_nato_co.paa",
			"\A3\characters_f\data\visors_ca.paa"
		};
		containerClass="Supply0";
		mass=80;
		overlaySelectionsInfo[]=
		{
			"Ghillie_hide"
		};
		scope=0;
		showHolsteredPistol=0;
		type=701;
		uniformModel="\A3\Characters_F\Common\equip_rebreather";
		uniformType="Default";
		vestType="Rebreather";
	};
};
class Extremo_Vest_Snow: Vest_Camo_Base
{
	scope=2;
	author="Nikko Renolds";
	displayName="Extremo Snow Vest";
	descriptionShort="Armor Level IV";
	picture="\A3\Characters_F\data\ui\icon_V_plate_carrier_2_blk_CA.paa";
	model="\A3\Characters_F\BLUFOR\equip_b_vest01";
	hiddenSelections[]=
	{
		"camo"
	};
	hiddenSelectionsTextures[]=
	{
		"\Extremo_Assets\texture\item\Extremo_Clothing_SnowVest.paa"
	};
	class ItemInfo: VestItem
	{
		uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest01";
		containerClass="Supply140";
		mass=100;
		hiddenSelections[]=
		{
			"camo"
		};
		overlaySelctionsInfo[]=
		{
			"Ghillie_hide"
		};
		type=701;
		class HitpointsProtectionInfo
		{
			class Abdomen
			{
				armor=20;
				hipointName="HitAbdomen";
				passThrough=0.2;
			};
			class Body
			{
				hipointName="HitBody";
				passThrough=0.2;
			};
			class Chest
			{
				armor=20;
				hipointName="HitChest";
				passThrough=0.2;
			};
			class Diaphragm
			{
				armor=20;
				hipointName="HitDiaphragm";
				passThrough=0.2;
			};
		};
	};
};