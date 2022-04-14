/*
	## EXTREMO Survival
	## Nikko & Happyfeet
	## https://community.bistudio.com/wiki/Arma_3:_Characters_And_Gear_Encoding_Guide
	## https://community.bistudio.com/wiki/CfgWeapons_Config_Reference
*/

class Extremo_Uniform_BambiOverall: UniformAbstract
{
	scope=2;
	displayName="Bambi Overall";
	author="Nikko Renolds";
	picture="\Extremo_Assets\texture\item\Extremo_Uniform_BambiOverall.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	hiddenSelections[]=
	{
		"camo"
	};
	hiddenSelectionsTextures[]=
	{
		"\Extremo_Assets\model\Extremo_Uniform_BambiOverall_co.paa"
	};
	class ItemInfo: UniformItemAbstract
	{
		uniformModel="\A3\characters_F\common\coveralls.p3d";
		uniformClass="Extremo_Unit_Player";
		containerClass="Supply40";
		mass=30;
	};
};
class Extremo_Uniform_ExtremoCustoms: UniformAbstract
{
	scope=2;
	displayName="Extremo Customs";
	author="Nikko Renolds";
	picture="\Extremo_Assets\texture\item\Extremo_Uniform_BambiOverall.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	hiddenSelections[]=
	{
		"camo"
	};
	hiddenSelectionsTextures[]=
	{
		"\Extremo_Assets\model\Extremo_Uniform_ExtremoCustoms_co.paa"
	};
	class ItemInfo: UniformItemAbstract
	{
		uniformModel="-";
		uniformClass="Extremo_Unit_ExtremoCustoms";
		containerClass="Supply40";
		mass=40;
	};
}; 
class Extremo_Uniform_Wetsuit_NATO: U_B_Wetsuit
{
	scope=2;
	author="Nikko Renolds";
	displayName="Wetsuit (NATO, Forced)";
	class ItemInfo: UniformItemAbstract
	{
		uniformModel="-";
		uniformClass="Extremo_Unit_Wetsuit_NATO";
		containerClass="Supply40";
		mass=40;
	};
};
class Extremo_Uniform_Wetsuit_CSAT: U_O_Wetsuit
{
	scope=2;
	author="Nikko Renolds";
	displayName="Wetsuit (CSAT, Forced)";
	class ItemInfo: UniformItemAbstract
	{
		uniformModel="-";
		uniformClass="Extremo_Unit_Wetsuit_CSAT";
		containerClass="Supply40";
		mass=40;
	};
};
class Extremo_Uniform_Wetsuit_AAF: U_I_Wetsuit
{
	scope=2;
	author="Nikko Renolds";
	displayName="Wetsuit (AAF, Forced)";
	class ItemInfo: UniformItemAbstract
	{
		uniformModel="-";
		uniformClass="Extremo_Unit_Wetsuit_AAF";
		containerClass="Supply40";
		mass=40;
	};
};
class Extremo_Uniform_Woodland: UniformAbstract
{
	scope=2;
	displayName="Extremo Woodland";
	author="Nikko Renolds";
	picture="\Extremo_Assets\texture\item\Extremo_Uniform_Woodland.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[]=
	{
		"camo"
	};
	hiddenSelectionsTextures[]=
	{
		"\Extremo_Assets\model\Extremo_Uniform_Woodland_co.paa"
	};
	class ItemInfo: UniformItemAbstract
	{
		uniformModel="-";
		uniformClass="Extremo_Unit_Woodland";
		containerClass="Supply80";
		mass=40;
	};
};