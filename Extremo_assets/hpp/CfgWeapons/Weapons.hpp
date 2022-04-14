/*
	## EXTREMO Survival
	## Nikko & Happyfeet
	## https://community.bistudio.com/wiki/Arma_3:_Characters_And_Gear_Encoding_Guide
	## https://community.bistudio.com/wiki/CfgWeapons_Config_Reference
*/

//-- Melee
class Extremo_Melee_Axe: Extremo_Melee_Abstract
{
	scope=2;
	author="Nikko Renolds";
	_generalMacro="Extremo_Melee_Axe";
	model="\Extremo_Assets\model\Extremo_Melee_Axe.p3d";
	displayName="Axe";
	descriptionShort="An old-fashioned tool used to chop wood.";
	picture="\Extremo_Assets\texture\item\Extremo_Item_Axe.paa";
	handAnim[]=
	{
		"OFP2_ManSkeleton",
		"\Extremo_Assets\animation\Extremo_Axe_Idle01.rtm"
	};
	class WeaponSlotsInfo
	{
		mass=70;
	};
	class Hack: Mode_FullAuto
	{
		burst=0;
		autoFire=1;
		flashSize=0;
		dispersion=0;
		sounds[]=
		{
			"StandardSound"
		};
		minRange=0.30000001;
		minRangeProbab=0.33000001;
		midRange=0.30000001;
		midRangeProbab=0.33000001;
		maxRange=0.30000001;
		maxRangeProbab=0.34;
		reloadTime=1;
		class StandardSound
		{
			begin1[]=
			{
				"\Extremo_Assets\sound\swoosh01.ogg",
				"db3",
				1,
				100
			};
			begin2[]=
			{
				"\Extremo_Assets\sound\swoosh02.ogg",
				"db3",
				1,
				100
			};
			closure1[]=
			{
				"",
				1
			};
			soundBegin[]=
			{
				"begin1",
				1,
				"begin2",
				1
			};
			soundClosure[]=
			{
				"closure1",
				1
			};
			weaponSoundEffect="DefaultRifle";
		};
	};
};
class Extremo_Melee_PickAxe: Extremo_Melee_Abstract
{
	scope=2;
	author="Nikko Renolds & HappyFeet";
	_generalMacro="Extremo_Melee_PickAxe";
	model="\Extremo_Assets\model\extremopickaxe\Extremo_Melee_pickaxe.p3d";
	displayName="PickAxe";
	descriptionShort="An old-fashioned tool used to mine.";
	picture="\Extremo_Assets\texture\item\extremo_item_pickaxe.paa";
	handAnim[]=
	{
		"OFP2_ManSkeleton",
		"\Extremo_Assets\animation\Extremo_Axe_Idle01.rtm"
	};
	class WeaponSlotsInfo
	{
		mass=70;
	};
	class Hack: Mode_FullAuto
	{
		burst=0;
		autoFire=1;
		flashSize=0;
		dispersion=0;
		sounds[]=
		{
			"StandardSound"
		};
		minRange=0.30000001;
		minRangeProbab=0.33000001;
		midRange=0.30000001;
		midRangeProbab=0.33000001;
		maxRange=0.30000001;
		maxRangeProbab=0.34;
		reloadTime=1;
		class StandardSound
		{
			begin1[]=
			{
				"\Extremo_Assets\sound\pickaxe.wss",
				"db3",
				1,
				100
			};
			begin2[]=
			{
				"\Extremo_Assets\sound\pickaxe.wss",
				"db3",
				1,
				100
			};
			closure1[]=
			{
				"",
				1
			};
			soundBegin[]=
			{
				"begin1",
				1,
				"begin2",
				1
			};
			soundClosure[]=
			{
				"closure1",
				1
			};
			weaponSoundEffect="DefaultRifle";
		};
	};
};
class Extremo_Melee_Shovel: Extremo_Melee_Abstract
{
	scope=2;
	author="Nikko Renolds";
	_generalMacro="Extremo_Melee_Shovel";
	model="\Extremo_Assets\model\Extremo_Melee_Shovel.p3d";
	displayName="Shovel";
	descriptionShort="Everyday I'm shovelling!";
	picture="\Extremo_Assets\texture\item\Extremo_Item_Shovel.paa";
	handAnim[]=
	{
		"OFP2_ManSkeleton",
		"\Extremo_Assets\animation\Extremo_SledgeHammer_Idle01.rtm"
	};
	magazines[]=
	{
		"Extremo_Magazine_Boing"
	};
	class WeaponSlotsInfo
	{
		mass=70;
	};
	class Hack: Mode_FullAuto
	{
		burst=0;
		autoFire=1;
		flashSize=0;
		dispersion=0;
		sounds[]=
		{
			"StandardSound"
		};
		minRange=0.30000001;
		minRangeProbab=0.33000001;
		midRange=0.30000001;
		midRangeProbab=0.33000001;
		maxRange=0.30000001;
		maxRangeProbab=0.34;
		reloadTime=1.75;
		class StandardSound
		{
			begin1[]=
			{
				"\Extremo_Assets\sound\swoosh01.ogg",
				"db3",
				1,
				100
			};
			begin2[]=
			{
				"\Extremo_Assets\sound\swoosh02.ogg",
				"db3",
				1,
				100
			};
			closure1[]=
			{
				"",
				1
			};
			soundBegin[]=
			{
				"begin1",
				1,
				"begin2",
				1
			};
			soundClosure[]=
			{
				"closure1",
				1
			};
			weaponSoundEffect="DefaultRifle";
		};
	};
};
class Extremo_Melee_SledgeHammer: Extremo_Melee_Abstract
{
	scope=2;
	author="Nikko Renolds";
	_generalMacro="Extremo_Melee_SledgeHammer";
	model="\Extremo_Assets\model\Extremo_Melee_SledgeHammer.p3d";
	displayName="Sledge Hammer";
	descriptionShort="The ultimate solution when a normal hammer is simply not enough.";
	picture="\Extremo_Assets\texture\item\Extremo_Item_SledgeHammer.paa";
	handAnim[]=
	{
		"OFP2_ManSkeleton",
		"\Extremo_Assets\animation\Extremo_SledgeHammer_Idle01.rtm"
	};
	magazines[]=
	{
		"Extremo_Magazine_Swoosh"
	};
	class WeaponSlotsInfo
	{
		mass=70;
	};
	class Hack: Mode_FullAuto
	{
		burst=0;
		autoFire=1;
		flashSize=0;
		dispersion=0;
		sounds[]=
		{
			"StandardSound"
		};
		minRange=0.30000001;
		minRangeProbab=0.33000001;
		midRange=0.30000001;
		midRangeProbab=0.33000001;
		maxRange=0.30000001;
		maxRangeProbab=0.34;
		reloadTime=1.75;
		class StandardSound
		{
			begin1[]=
			{
				"\Extremo_Assets\sound\swoosh01.ogg",
				"db3",
				1,
				100
			};
			begin2[]=
			{
				"\Extremo_Assets\sound\swoosh02.ogg",
				"db3",
				1,
				100
			};
			closure1[]=
			{
				"",
				1
			};
			soundBegin[]=
			{
				"begin1",
				1,
				"begin2",
				1
			};
			soundClosure[]=
			{
				"closure1",
				1
			};
			weaponSoundEffect="DefaultRifle";
		};
	};
};
class Extremo_Melee_Sword: Extremo_Melee_Abstract
{
	scope=2;
	author="HappyFeet";
	model="\Extremo_assets\model\extremo_melee_sword.p3d";
	displayName="Long Sword";
	descriptionShort="The ultimate in murder by melee.";
	picture="\Extremo_assets\texture\item\extremo_item_Longsword.paa";
	handAnim[]=
	{
		"OFP2_ManSkeleton",
		"\Extremo_Assets\animation\Extremo_Axe_Idle01.rtm"
	};
	magazines[]=
	{
		"Extremo_Magazine_Swoosh"
	};
	class WeaponSlotsInfo
	{
		mass=70;
	};
	class Hack: Mode_FullAuto
	{
		burst=0;
		autoFire=1;
		flashSize=0;
		dispersion=0;
		sounds[]=
		{
			"StandardSound"
		};
		minRange=0.30000001;
		minRangeProbab=0.33000001;
		midRange=0.30000001;
		midRangeProbab=0.33000001;
		maxRange=0.30000001;
		maxRangeProbab=0.34;
		reloadTime=1.75;
		class StandardSound
		{
			begin1[]=
			{
				"\Extremo_Assets\sound\swoosh01.ogg",
				"db3",
				1,
				100
			};
			begin2[]=
			{
				"\Extremo_Assets\sound\swoosh02.ogg",
				"db3",
				1,
				100
			};
			closure1[]=
			{
				"",
				1
			};
			soundBegin[]=
			{
				"begin1",
				1,
				"begin2",
				1
			};
			soundClosure[]=
			{
				"closure1",
				1
			};
			weaponSoundEffect="DefaultRifle";
		};
	};
};

//-- Rifles
class arifle_MX_SW_F: arifle_MX_Base_F
{
	class LinkedItems
	{
		class LinkedItemsUnder
		{
			item="";
			slot="";
		};
	};
};
class arifle_MX_SW_Black_F: arifle_MX_SW_F
{
	class LinkedItems
	{
		class LinkedItemsUnder
		{
			item="";
			slot="";
		};
	};
};
class MMG_01_hex_F: MMG_01_base_F
{
	class LinkedItems
	{
		class LinkedItemsUnder
		{
			item="";
			slot="";
		};
	};
};
class MMG_01_tan_F: MMG_01_hex_F
{
	class LinkedItems
	{
		class LinkedItemsUnder
		{
			item="";
			slot="";
		};
	};
};
class MMG_02_camo_F: MMG_02_base_F
{
	class LinkedItems
	{
		class LinkedItemsUnder
		{
			item="";
			slot="";
		};
	};
};
class MMG_02_black_F: MMG_02_camo_F
{
	class LinkedItems
	{
		class LinkedItemsUnder
		{
			item="";
			slot="";
		};
	};
};
class MMG_02_sand_F: MMG_02_camo_F
{
	class LinkedItems
	{
		class LinkedItemsUnder
		{
			item="";
			slot="";
		};
	};
};
class arifle_SPAR_02_blk_F: arifle_SPAR_02_base_F
{
	class LinkedItems
	{
		class LinkedItemsUnder
		{
			item="";
			slot="";
		};
	};
};
class arifle_SPAR_02_khk_F: arifle_SPAR_02_base_F
{
	class LinkedItems
	{
		class LinkedItemsUnder
		{
			item="";
			slot="";
		};
	};
};
class arifle_SPAR_02_snd_F: arifle_SPAR_02_base_F
{
	class LinkedItems
	{
		class LinkedItemsUnder
		{
			item="";
			slot="";
		};
	};
};  
class GM6_base_F: Rifle_Long_Base_F
{
	magazines[]=
	{
		"5Rnd_127x108_Mag",
		"5Rnd_127x108_APDS_Mag",
		"Extremo_Magazine_5Rnd_127x108_Bullet_Cam_Mag",
		"Extremo_Magazine_5Rnd_127x108_APDS_Bullet_Cam_Mag"
	};
};
class DMR_05_base_F: Rifle_Long_Base_F
{
	magazines[]=
	{
		"10Rnd_93x64_DMR_05_Mag",
		"Extremo_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag"
	};
};
class LRR_base_F: Rifle_Long_Base_F
{
	magazines[]=
	{
		"7Rnd_408_Mag",
		"Extremo_Magazine_7Rnd_408_Bullet_Cam_Mag"
	};
};
class DMR_02_base_F: Rifle_Long_Base_F
{
	magazines[]=
	{
		"10Rnd_338_Mag",
		"Extremo_Magazine_10Rnd_338_Bullet_Cam_Mag"
	};
};
class Extremo_Weapon_AK107: arifle_AK107
{
	scope=2;
	author="Nikko Renolds";
	displayName="AK-107 5.45 mm";
	descriptionShort="Assault Rifle<br />Caliber: 5.45x39 mm";
	magazines[]=
	{
		"Extremo_Magazine_30Rnd_545x39_AK",
		"Extremo_Magazine_30Rnd_545x39_AK_Green",
		"Extremo_Magazine_30Rnd_545x39_AK_Red",
		"Extremo_Magazine_30Rnd_545x39_AK_White",
		"Extremo_Magazine_30Rnd_545x39_AK_Yellow"
	};
}; 
class Extremo_Weapon_AK107_GL: arifle_AK107_GL
{
	scope=2;
	author="Nikko Renolds";
	displayName="AK-107 GL 5.45 mm";
	descriptionShort="Assault Rifle<br />Caliber: 5.45x39 mm";
	magazines[]=
	{
		"Extremo_Magazine_30Rnd_545x39_AK",
		"Extremo_Magazine_30Rnd_545x39_AK_Green",
		"Extremo_Magazine_30Rnd_545x39_AK_Red",
		"Extremo_Magazine_30Rnd_545x39_AK_White",
		"Extremo_Magazine_30Rnd_545x39_AK_Yellow"
	};
}; 
class Extremo_Weapon_AK74: arifle_AK74
{
	scope=2;
	author="Nikko Renolds";
	displayName="AK-74 5.45 mm";
	descriptionShort="Assault Rifle<br />Caliber: 5.45x39 mm<br />Caliber: 40 mm";
	magazines[]=
	{
		"Extremo_Magazine_30Rnd_545x39_AK",
		"Extremo_Magazine_30Rnd_545x39_AK_Green",
		"Extremo_Magazine_30Rnd_545x39_AK_Red",
		"Extremo_Magazine_30Rnd_545x39_AK_White",
		"Extremo_Magazine_30Rnd_545x39_AK_Yellow"
	};
}; 
class Extremo_Weapon_AK74_GL: arifle_AK74_GL
{
	scope=2;
	author="Nikko Renolds";
	displayName="AK-74 3GL 5.45 mm";
	descriptionShort="Assault Rifle<br />Caliber: 5.45x39 mm<br />Grenade Laucher<br />Caliber: 40 mm";
	magazines[]=
	{
		"Extremo_Magazine_30Rnd_545x39_AK",
		"Extremo_Magazine_30Rnd_545x39_AK_Green",
		"Extremo_Magazine_30Rnd_545x39_AK_Red",
		"Extremo_Magazine_30Rnd_545x39_AK_White",
		"Extremo_Magazine_30Rnd_545x39_AK_Yellow"
	};
}; 
class Extremo_Weapon_AK47: arifle_AK47
{
	scope=2;
	author="Nikko Renolds";
	displayName="AK-47 7.62 mm";
	descriptionShort="Assault Rifle<br />Caliber: 7.62x39 mm";
	magazines[]=
	{
		"Extremo_Magazine_30Rnd_762x39_AK"
	};
};
class Extremo_Weapon_AKM: arifle_AKM
{
	scope=2;
	author="Nikko Renolds";
	displayName="AKM 7.62 mm";
	descriptionShort="Assault Rifle<br />Caliber: 7.62x39 mm<br />Grenade Laucher<br />Caliber: 40 mm";
	magazines[]=
	{
		"Extremo_Magazine_30Rnd_762x39_AK"
	};
};
class Extremo_Weapon_AKS: arifle_AKS
{
	scope=2;
	author="Nikko Renolds";
	displayName="AKS 7.62 mm";
	descriptionShort="Assault Rifle<br />Caliber: 7.62x39 mm";
	magazines[]=
	{
		"Extremo_Magazine_30Rnd_762x39_AK"
	};
};
class Extremo_Weapon_AKS_Gold: arifle_AKS_Gold
{
	scope=2;
	author="Nikko Renolds";
	displayName="AKS 7.62 mm (Gold)";
	descriptionShort="Assault Rifle<br />Caliber: 7.62x39 mm";
	magazines[]=
	{
		"Extremo_Magazine_30Rnd_762x39_AK"
	};
};
class Extremo_Weapon_M16A4: Extremo_arifle_M16A4
{
	scope=2;
	author="Nikko Renolds";
	displayName="M16A4 5.56 mm";
	descriptionShort="Assault Rifle<br />Caliber: 5.56x45 mm";
	magazines[]=
	{
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag_green",
		"30Rnd_556x45_Stanag_red",
		"30Rnd_556x45_Stanag_Tracer_Red",
		"30Rnd_556x45_Stanag_Tracer_Green",
		"30Rnd_556x45_Stanag_Tracer_Yellow"
	};
};
class Extremo_Weapon_M16A2: Extremo_arifle_M16A2
{
	scope=2;
	author="Nikko Renolds";
	displayName="M16A2 5.56 mm";
	descriptionShort="Assault Rifle<br />Caliber: 5.56x45 mm";
	magazines[]=
	{
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag_green",
		"30Rnd_556x45_Stanag_red",
		"30Rnd_556x45_Stanag_Tracer_Red",
		"30Rnd_556x45_Stanag_Tracer_Green",
		"30Rnd_556x45_Stanag_Tracer_Yellow"
	};
};
class Extremo_Weapon_M4: Extremo_arifle_M4
{
	scope=2;
	author="Nikko Renolds";
	displayName="M4 5.56 mm";
	descriptionShort="Assault Rifle<br />Caliber: 5.56x45 mm";
	magazines[]=
	{
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag_green",
		"30Rnd_556x45_Stanag_red",
		"30Rnd_556x45_Stanag_Tracer_Red",
		"30Rnd_556x45_Stanag_Tracer_Green",
		"30Rnd_556x45_Stanag_Tracer_Yellow"
	};
};
class Extremo_Weapon_DMR: srifle_DMR
{
	scope=2;
	author="Nikko Renolds";
	displayName="DMR 7.62 mm";
	descriptionShort="Sniper Rifle<br />Caliber: 7.62x51 mm NATO";
	magazines[]=
	{
		"Extremo_Magazine_20Rnd_762x51_DMR",
		"Extremo_Magazine_20Rnd_762x51_DMR_Yellow",
		"Extremo_Magazine_20Rnd_762x51_DMR_Red",
		"Extremo_Magazine_20Rnd_762x51_DMR_Green"
	};
};
class Extremo_Weapon_ksvk: ksvk
{
	scope=2;
	author="Nikko Renolds";
	displayName="KSVK";
	descriptionShort="KSVK or Degtyarev sniper rifle is a 12.7mm anti-materiel sniper rifle developed in Russia for the purpose of counter sniping and penetrating thick walls, as well as light armored vehicles.<br />Caliber: 127x108";
	magazines[]=
	{
		"Extremo_Magazine_5Rnd_127x108_APDS_KSVK",
		"Extremo_Magazine_5Rnd_127x108_KSVK",
		"Extremo_Magazine_5Rnd_127x108_KSVK_Bullet_Cam_Mag",
		"Extremo_Magazine_5Rnd_127x108_APDS_KSVK_Bullet_Cam_Mag"
	};
};
class Extremo_Weapon_m107: Extremo_weapons_m107
{
	scope=2;
	author="Nikko Renolds";
	displayName="M107";
	descriptionShort="M107, is a recoil-operated, semi-automatic sniper rifle.<br />Caliber: 127x99";
	magazines[]=
	{
		"Extremo_Magazine_10Rnd_127x99_m107",
		"Extremo_Magazine_10Rnd_127x99_m107_Bullet_Cam_Mag"
	};
};
class Extremo_Weapon_LeeEnfield: srifle_LeeEnfield
{
	scope=2;
	author="Nikko Renolds";
	displayName="Lee-Enfield MkI .303";
	descriptionShort="Marksman Rifle<br />Caliber: .303 British";
	magazines[]=
	{
		"Extremo_Magazine_10Rnd_303"
	};
};
class Extremo_Weapon_CZ550: srifle_CZ550_base
{
	scope=2;
	author="Nikko Renolds";
	displayName="CZ550 .22LR";
	descriptionShort="Marksman Rifle<br />Caliber: .22LR";
	magazines[]=
	{
		"Extremo_Magazine_5Rnd_22LR"
	};
};
class Extremo_Weapon_SVD: srifle_SVD
{
	scope=2;
	author="Nikko Renolds";
	displayName="SVD 762x54";
	descriptionShort="Marksman Rifle<br />Caliber: 762x54";
	magazines[]=
	{
		"Extremo_Magazine_10Rnd_762x54"
	};
};
class Extremo_Weapon_SVDCamo: srifle_SVD_des
{
	scope=2;
	author="Nikko Renolds";
	displayName="SVD (Camo) 762x54";
	descriptionShort="Marksman Rifle<br />Caliber: 762x54";
	picture="\exile_psycho_weapons\ico\w_svd_camo_ca.paa";
	magazines[]=
	{
		"Extremo_Magazine_10Rnd_762x54"
	};
};
class Extremo_Weapon_VSSVintorez: srifle_VSSVintorez
{
	scope=2;
	author="Nikko Renolds";
	displayName="VSS Vintorez 9x39";
	descriptionShort="Marksman Rifle<br />Caliber: 9x39";
	magazines[]=
	{
		"Extremo_Magazine_10Rnd_9x39",
		"Extremo_Magazine_20Rnd_9x39"
	};
};
class Extremo_Weapon_RPK: arifle_RPK74
{
	scope=2;
	author="Nikko Renolds";
	displayName="RPK 5.45 mm";
	descriptionShort="Light Machine Gun<br />Caliber: 5.45x39 mm";
	magazines[]=
	{
		"Extremo_Magazine_45Rnd_545x39_RPK_Green",
		"Extremo_Magazine_75Rnd_545x39_RPK_Green"
	};
};
class Extremo_Weapon_PK: PKP
{
	scope=2;
	author="Nikko Renolds";
	displayName="PK 7.62 mm";
	descriptionShort="Light Machine Gun<br />Caliber: 7.62x54 mm";
	magazines[]=
	{
		"Extremo_Magazine_100Rnd_762x54_PK_Green"
	};
};
class Extremo_Weapon_PKP: Pecheneg
{
	scope=2;
	author="Nikko Renolds";
	displayName="PKP 7.62 mm";
	descriptionShort="Light Machine Gun<br />Caliber: 7.62x54 mm";
	magazines[]=
	{
		"Extremo_Magazine_100Rnd_762x54_PK_Green"
	};
};
class Extremo_Weapon_Colt1911: Colt1911
{
	scope=2;
	author="Nikko Renolds";
	displayName="Colt 1911 .45 ACP";
	descriptionShort="Handgun<br />Caliber: .45 ACP";
	magazines[]=
	{
		"Extremo_Magazine_7Rnd_45ACP"
	};
};
class Extremo_Weapon_Makarov: Makarov
{
	scope=2;
	author="Nikko Renolds";
	displayName="Makarov 9mm";
	descriptionShort="Handgun<br />Caliber: 9x18 mm";
	picture="\exile_psycho_weapons\ico\w_makarov_ca.paa";
	magazines[]=
	{
		"Extremo_Magazine_8Rnd_9x18"
	};
};
class Extremo_Weapon_Taurus: TaurusTracker455
{
	scope=2;
	author="Nikko Renolds";
	displayName="Taurus";
	descriptionShort="Revolver<br />Caliber: 45 ACP";
	magazines[]=
	{
		"Extremo_Magazine_6Rnd_45ACP"
	};
};
class Extremo_Weapon_TaurusGold: TaurusTracker455_gold
{
	scope=2;
	author="Nikko Renolds";
	displayName="Taurus (Gold)";
	descriptionShort="Revolver<br />Caliber: 45 ACP";
	magazines[]=
	{
		"Extremo_Magazine_6Rnd_45ACP"
	};
};
class Extremo_Weapon_SA61: Extremo_rifle_SA61
{
	scope=2;
	author="Nikko Renolds";
	displayName="SA61";
	descriptionShort="Semi Auto pistol<br />Caliber: 7.65x17 mm";
	magazines[]=
	{
		"Extremo_Magazine_10Rnd_765x17_SA61",
		"Extremo_Magazine_20Rnd_765x17_SA61"
	};
};
class Extremo_Weapon_M1014: M1014
{
	scope=2;
	author="Nikko Renolds";
	displayName="M1014 12 Gauge";
	descriptionShort="Shotgun<br />Caliber: 12 Gauge";
	magazines[]=
	{
		"Extremo_Magazine_8Rnd_74Slug",
		"Extremo_Magazine_8Rnd_74Pellets"
	};
};