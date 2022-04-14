/*
	## EXTREMO Survival
	## Nikko & Happyfeet
	## https://community.bistudio.com/wiki/Arma_3:_Characters_And_Gear_Encoding_Guide
	## https://community.bistudio.com/wiki/CfgWeapons_Config_Reference
*/

//--- Base Defines
class ItemCore;
class HeadgearItem;
class Item_Base_F;
class InventoryItem_Base_F;
class SlotInfo;
class Rifle;
class Pistol;
class TruckHorn;
class H_Cap_red;
class Vest_Camo_Base;
class VestItem;
class arifle_MX_Base_F;
class MMG_01_base_F;
class MMG_02_base_F;
class arifle_SPAR_02_base_F;
class Default;
class InventoryOpticsItem_Base_F;
class Rifle_Long_Base_F;
class ItemWatch;
class ItemRadio;
class U_O_Wetsuit;
class U_I_Wetsuit;
class U_B_Wetsuit;
class V_RebreatherB;
class V_RebreatherIA;
class V_RebreatherIR;
class arifle_AK107;
class arifle_AK107_GL;
class arifle_AK74;
class arifle_AK74_GL;
class arifle_AK47;
class arifle_AKM;
class arifle_AKS;
class arifle_AKS_Gold;
class Extremo_arifle_M16A4;
class Extremo_arifle_M16A2;
class Extremo_arifle_M4;
class srifle_DMR;
class ksvk;
class Extremo_weapons_m107;
class srifle_LeeEnfield;
class srifle_CZ550_base;
class srifle_SVD;
class srifle_SVD_des;
class srifle_VSSVintorez;
class arifle_RPK74;
class PKP;
class Pecheneg;
class Colt1911;
class Makarov;
class TaurusTracker455;
class TaurusTracker455_gold;
class Extremo_rifle_SA61;
class M1014;
class GrenadeLauncher: Default { };

//--- Abstract Defines
class GasMaskAbstract: ItemCore
{
	scope=0;
	author="Nikko Renolds & HappyFeet";
	displayName="Extremo Gas Mask";
	descriptionShort="Protects you from dangerous gasses";
	picture="";
	model="\Extremo_Assets\model\dummy.p3d";
	hiddenSelections[]={};
	hiddenSelectionsTextures[]={};
	hiddenUnderwaterSelections[]={};
	hiddenUnderwaterSelectionsTextures[]={};
	weaponPoolAvailable=1;
	class ItemInfo: HeadgearItem
	{
		mass=0;
		uniformModel="\Extremo_Assets\model\dummy.p3d";
		modelSides[]={0};
		armor=0;
		passThrough=0;
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
class UniformItemAbstract: InventoryItem_Base_F
{
	type=801;
};
class UniformAbstract: ItemCore
{
	scope=0;
	allowedSlots[]={901};
	class ItemInfo: UniformItemAbstract
	{
		uniformModel="-";
		uniformClass="Extremo_Unit_Player";
		containerClass="Supply0";
		mass=0;
	};
};
class Extremo_Melee_Abstract: Rifle
{
	scope=1;
	author="Nikko Renolds";
	displayName="Dummy";
	descriptionShort="Dummy";
	type=4;
	optics=0;
	primary=0;
	model="\Extremo_Assets\model\Dummy.p3d";
	picture="\Extremo_Assets\texture\item\Dummy.paa";
	cursor="EmptyCursor";
	cursorAim="throw";
	cursorSize=1;
	autoreload=1;
	canDrop=1;
	distanceZoomMin=2;
	distanceZoomMax=2;
	drySound[]=
	{
		"",
		0,
		1,
		20
	};
	fireLightDuration=0;
	fireLightIntensity=0;
	isFakeWeapon=0;
	minRange=0.30000001;
	minRangeProbab=0.33000001;
	midRange=0.30000001;
	midRangeProbab=0.33000001;
	maxRange=0.30000001;
	maxRangeProbab=0.34;
	modelOptics="-";
	magazines[]=
	{
		"Extremo_Magazine_Swing"
	};
	recoil="recoil_pistol_heavy";
	recoilProne="recoil_prone_pistol_heavy";
	reloadAction="GestureReloadPistolHeavy02";
	reloadMagazineSound[]=
	{
		"",
		1
	};
	reloadTime=1;
	closure1[]=
	{
		"",
		1
	};
	soundClosure[]=
	{
		"closure1",
		1
	};
	weaponInfoType="RscWeaponEmpty";
	weaponReloadtime=1;
	weaponSoundEffect="DefaultRifle";
	modes[]=
	{
		"Hack"
	};
	craterEffects="NoCrater";
	explosionEffects="NoExplosion";
	class Library
	{
		libTextDesc="Long Description";
	};
};
class Extremo_Horn_Abstract: TruckHorn
{
	scope=1;
	author="Nikko Renolds";
	displayName="Extremo Horn Base";
};