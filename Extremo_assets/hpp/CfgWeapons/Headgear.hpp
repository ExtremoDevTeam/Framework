/*
	## EXTREMO Survival
	## Nikko & Happyfeet
	## https://community.bistudio.com/wiki/Arma_3:_Characters_And_Gear_Encoding_Guide
	## https://community.bistudio.com/wiki/CfgWeapons_Config_Reference
*/

class Extremo_Cap_Extremo: H_Cap_red
{
	scope=2;
	author="Nikko Renolds";
	displayName="Cap (Extremo)";
	picture="\A3\Characters_F_Bootcamp\Data\UI\icon_H_Cap_press_ca.paa";
	hiddenSelectionsTextures[]=
	{
		"\A3\Characters_F_EPC\Civil\Data\Headgear_capb_press_co.paa"
	};
};
class Extremo_Headgear_GasMask: GasMaskAbstract
{
	scope=2;
	author="Nikko Renolds & HappyFeet";
	displayName="Extremo Gas Mask";
	picture="\Extremo_Assets\texture\item\Extremo_Clothing_Gasmask.paa";
	model="\Extremo_Assets\model\gasmask\Extremo_Clothing_Gasmask.p3d";  
	class ItemInfo: HeadgearItem
	{
		mass=10;
		uniformModel="\Extremo_Assets\model\gasmask\Extremo_Clothing_Gasmask.p3d";
		modelSides[]={2};
		armor=10;
		passThrough=0.80000001;
	};
	class MaskEffects
	{
		breathing = 0;			// (visual) breathing effects
		cracking = 0;			// (visual) cracking effects
		flare = 0;				// (visual) lens flare effects
		dirt = 0;				// (visual) dirt effects
		dust = 0;				// (visual) dust effects
		firstPersonOnly = 1;	// (visual) first person only
		restoreView = 1;		// (visual) return camera state to original state when mask is removed and were forced into first person
	};
};
class Extremo_Headgear_GasMaskHelmet: GasMaskAbstract
{
	scope=2;
	author="Nikko Renolds & HappyFeet";
	displayName="Extremo Gas Mask Helmet";
	picture="\Extremo_Assets\texture\item\Extremo_Clothing_Gasmask.paa";
	model="\Extremo_Assets\model\gasmaskhelmet\Extremo_Clothing_Gasmaskhelmet.p3d";  
	class ItemInfo: HeadgearItem
	{
		mass=10;
		uniformModel="\Extremo_Assets\model\gasmaskhelmet\Extremo_Clothing_Gasmaskhelmet.p3d";
		modelSides[]={2};
		armor=10;
		passThrough=0.80000001;
	};
	class MaskEffects
	{
		breathing = 0;			// (visual) breathing effects
		cracking = 0;			// (visual) cracking effects
		flare = 0;				// (visual) lens flare effects
		dirt = 0;				// (visual) dirt effects
		dust = 0;				// (visual) dust effects
		firstPersonOnly = 1;	// (visual) first person only
		restoreView = 1;		// (visual) return camera state to original state when mask is removed and were forced into first person
	};
};
class Extremo_Headgear_SafetyHelmet: ItemCore
{
	scope=2;
	author="Nikko Renolds";
	displayName="Extremo Security Helmet";
	descriptionShort="Armor Level 1";
	picture="\Extremo_Assets\texture\item\Extremo_Clothing_SafetyHelmet.paa";
	model="\Extremo_Assets\model\safetyhelmet\Extremo_Clothing_SafetyHelmet.p3d";
	hiddenSelections[]={};
	hiddenSelectionsTextures[]={};
	hiddenUnderwaterSelections[]={};
	hiddenUnderwaterSelectionsTextures[]={};
	weaponPoolAvailable=1;
	class ItemInfo: HeadgearItem
	{
		mass=10;
		uniformModel="\Extremo_Assets\model\safetyhelmet\Extremo_Clothing_SafetyHelmet.p3d";
		modelSides[]={2};
		armor=10;
		passThrough=0.80000001;
	};
};