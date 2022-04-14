/*
	## EXTREMO Survival
	## Nikko & Happyfeet
	## https://community.bistudio.com/wiki/Arma_3:_Characters_And_Gear_Encoding_Guide
	## https://community.bistudio.com/wiki/CfgVehicles_Config_Reference
*/

//--- Headless Client
class Extremo_HC_F: VirtualMan_F
{
	author="Nikko Renolds";
	scope=2;
	displayName="Headless Client";
	simulation="headlessclient";
	editorCategory = "Character"; 		// Class from CfgEditorCategories. Usually used for props.
	editorSubcategory = "HC"; 		    // Class from CfgEditorSubcategories. Should be used everywhere. 
	icon="iconVirtual";
};

//--- Slot
class Extremo_Unit_GhostPlayer: VirtualMan_F
{
	scope=2;
	author="Nikko Renolds";
	displayName="Extremo Player Slot";
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
	editorCategory = "Character"; 		// Class from CfgEditorCategories. Usually used for props.
	editorSubcategory = "Slot"; 		// Class from CfgEditorSubcategories. Should be used everywhere. 
};

//--- Cutscene
class Extremo_Cutscene_Prisoner01: Extremo_Cutscene_Abstract
{
	displayName="Extremo Cutcene Prisoner 01";
	uniformClass="Extremo_Uniform_BambiOverall";
	linkedItems[]=
	{
		"G_Bandanna_beast"
	};
	weapons[]={};
};
class Extremo_Cutscene_Prisoner02: Extremo_Cutscene_Abstract
{
	displayName="Extremo Cutcene Prisoner 02";
	uniformClass="Extremo_Uniform_BambiOverall";
	linkedItems[]=
	{
		"G_Sport_Blackred"
	};
	weapons[]={};
};
class Extremo_Cutscene_Pilot: Extremo_Cutscene_Abstract
{
	displayName="Extremo Cutcene Pilot";
	uniformClass="U_B_PilotCoveralls";
	linkedItems[]=
	{
		"H_CrewHelmetHeli_B"
	};
	weapons[]=
	{
		"arifle_MXC_Black_F"
	};
};
class Extremo_Cutscene_Police01: Extremo_Cutscene_Abstract
{
	displayName="Extremo Cutcene Police 01";
	uniformClass="U_C_Journalist";
	linkedItems[]=
	{
		"V_TacVest_blk_POLICE",
		"G_Diving",
		"H_Watchcap_blk"
	};
	weapons[]=
	{
		"arifle_MXC_Black_F"
	};
};
class Extremo_Cutscene_Police02: Extremo_Cutscene_Abstract
{
	displayName="Extremo Cutcene Police 01";
	uniformClass="U_Rangemaster";
	linkedItems[]=
	{
		"V_TacVest_blk_POLICE",
		"G_Shades_Blue",
		"H_Cap_police"
	};
	weapons[]=
	{
		"arifle_MXC_Black_F"
	};
};

//--- Guard
class Extremo_Guard_01: Extremo_Guard_Abstract
{
	displayName="Extremo Guard 01";
	uniformClass="U_BG_Guerrilla_6_1";
	linkedItems[]=
	{
		"V_TacVest_khk",
		"H_ShemagOpen_tan"
	};
	weapons[]=
	{
		"srifle_DMR_03_F"
	};
};
class Extremo_Guard_02: Extremo_Guard_Abstract
{
	displayName="Extremo Guard 02";
	uniformClass="U_BG_Guerilla1_1";
	linkedItems[]=
	{
		"V_PlateCarrierIA2_dgtl",
		"H_Hat_camo"
	};
	weapons[]=
	{
		"arifle_Mk20_GL_F"
	};
};
class Extremo_Guard_03: Extremo_Guard_Abstract
{
	displayName="Extremo Guard 03";
	uniformClass="U_BG_Guerilla2_3";
	linkedItems[]=
	{
		"V_TacVestIR_blk",
		"H_Bandanna_camo",
		"G_Squares_Tinted"
	};
	weapons[]=
	{
		"SMG_02_F"
	};
};


//--- Player
class Extremo_Unit_ExtremoCustoms: Extremo_Unit_Abstract
{
	scope=2;
	displayName="Extremo Customs";
	model="\A3\characters_F\common\coveralls";
	uniformClass="Extremo_Unitform_ExtremoCustoms";
	hiddenSelectionsTextures[]=
	{
		"\Extremo_Assets\model\Extremo_Uniform_ExtremoCustoms_co.paa"
	};
};
class Extremo_Unit_Player: Extremo_Unit_Abstract
{
	scope=2;
	faction="Player_Faction";
	displayName="Extremo Player";
	model="\A3\characters_F\common\coveralls";
	uniformClass="Extremo_Uniform_BambiOverall";
	hiddenSelectionsTextures[]=
	{
		"\Extremo_Assets\model\Extremo_Uniform_BambiOverall_co.paa"
	};
};
class Extremo_Unit_Wetsuit_NATO: B_diver_F
{
	scope=2;
	faction="Player_Faction";
	author="Nikko Renolds";
	displayName="Extremo Diver (NATO, Forced)";
	hiddenUnderwaterSelections[]={};
};
class Extremo_Unit_Wetsuit_AAF: I_diver_F
{
	scope=2;
	faction="Player_Faction";
	author="Nikko Renolds";
	displayName="Extremo Diver (AAF, Forced)";
	hiddenSelections[]=
	{
		"Camo1",
		"Camo2",
		"insignia",
		"hide"
	};
	hiddenSelectionsMaterials[]={};
	hiddenSelectionsTextures[]=
	{
		"\A3\Characters_F\Common\Data\diver_suit_rus_co.paa",
		"\A3\Characters_F\Common\Data\diver_equip_rus_co.paa"
	};
	hiddenUnderwaterSelections[]={};
	hiddenUnderwaterSelectionsTextures[]=
	{
		"\A3\characters_f\common\data\diver_equip_nato_co.paa",
		"\A3\characters_f\common\data\diver_equip_nato_co.paa",
		"\A3\characters_f\data\visors_ca.paa"
	};
	shownUnderwaterSelections[]={};
};
class Extremo_Unit_Wetsuit_CSAT: O_diver_F
{
	scope=2;
	faction="Player_Faction";
	author="Nikko Renolds";
	displayName="Extremo Diver (CSAT, Forced)";
	hiddenUnderwaterSelections[]={};
};
class Extremo_Unit_Woodland: Extremo_Unit_Abstract
{
	scope=2;
	faction="Player_Faction";
	displayName="Extremo Woodland";
	uniformClass="Extremo_Unitform_Woodland";
	model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
	hiddenSelections[]=
	{
		"Camo",
		"insignia"
	};
	hiddenSelectionsTextures[]=
	{
		"\a3\characters_f\blufor\data\clothing_wdl_co.paa"
	};
};

//--- Traders
class Extremo_Trader_Armory: Extremo_Trader_Abstract
{
	displayName="Extremo Armory Trader";
	uniformClass="U_Rangemaster";
	linkedItems[]=
	{
		"V_Rangemaster_belt",
		"H_Cap_headphones",
		"G_Shades_Black"
	};
	weapons[]=
	{
		"srifle_DMR_06_olive_F"
	};
};
class Extremo_Trader_Diving: Extremo_Trader_Abstract
{
	displayName="Extremo Dive Trader";
	linkedItems[]=
	{
		"V_RebreatherIA",
		"G_I_Diving"
	};
	uniformClass="U_I_Wetsuit";
	weapons[]=
	{
		"arifle_SDAR_F"
	};
};
class Extremo_Trader_SpecialOperations: Extremo_Trader_Abstract
{
	displayName="Extremo Special Operations Trader";
	backpack="B_Parachute";
	linkedItems[]=
	{
		"V_PlateCarrierGL_blk",
		"H_HelmetB_light_black",
		"G_Balaclava_lowprofile",
		"NVGoggles_OPFOR",
		"muzzle_snds_H",
		"acc_pointer_IR",
		"optic_KHS_blk",
		"bipod_03_F_blk"
	};
	uniformClass="U_B_CTRG_1";
	weapons[]=
	{
		"arifle_MX_Black_F"
	};
};
class Extremo_Trader_Equipment: Extremo_Trader_Abstract
{
	displayName="Extremo Equipment Trader";
	uniformClass="U_BG_Guerrilla_6_1";
	linkedItems[]=
	{
		"V_I_G_resistanceLeader_F",
		"H_Watchcap_khk",
		"optic_KHS_blk"
	};
	weapons[]=
	{
		"arifle_MX_GL_Black_F"
	};
};
class Extremo_Trader_Food: Extremo_Trader_Abstract
{
	displayName="Extremo Food Trader";
	uniformClass="U_C_Poloshirt_blue";
	linkedItems[]=
	{
		"H_Cap_tan"
	};
};
class Extremo_Trader_Hardware: Extremo_Trader_Abstract
{
	displayName="Extremo Hardware Trader";
	backpack="B_UAV_01_backpack_F";
	uniformClass="U_C_WorkerCoveralls";
	linkedItems[]=
	{
		"V_BandollierB_rgr",
		"H_Booniehat_khk_hs"
	};
	weapons[]={};
};
class Extremo_Trader_Vehicle: Extremo_Trader_Abstract
{
	displayName="Extremo Vehicle Trader";
	uniformClass="Extremo_Uniform_ExtremoCustoms";
	linkedItems[]=
	{
		"H_RacingHelmet_4_F"
	};
	class UserActions
	{
		class trade
		{
			displayName="<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' shadow='false' />Purchase Vehicle";
			position="ohniste";
			radius=3;
			priority=6;
			onlyForPlayer=1;
			condition="true";
			statement="this call Extremo_fnc_gui_vehicleTraderScreen";
		};
	};
};
class Extremo_Trader_Aircraft: Extremo_Trader_Abstract
{
	displayName="Extremo Aircraft Trader";
	uniformClass="U_I_pilotCoveralls";
	linkedItems[]=
	{
		"H_PilotHelmetHeli_O"
	};
	class UserActions
	{
		class trade
		{
			displayName="<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' shadow='false' />Purchase Aircraft";
			position="ohniste";
			radius=3;
			priority=6;
			onlyForPlayer=1;
			condition="true";
			statement="this call Extremo_fnc_gui_vehicleTraderScreen";
		};
	};
};
class Extremo_Trader_Boat: Extremo_Trader_Abstract
{
	displayName="Extremo Boat Trader";
	uniformClass="U_OrestesBody";
	linkedItems[]=
	{
		"H_Cap_surfer"
	};
	class UserActions
	{
		class trade
		{
			displayName="<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' shadow='false' />Purchase Boat";
			position="ohniste";
			radius=3;
			priority=6;
			onlyForPlayer=1;
			condition="true";
			statement="this call Extremo_fnc_gui_vehicleTraderScreen";
		};
	};
};
class Extremo_Trader_WasteDump: Extremo_Trader_Abstract
{
	displayName="Extremo Waste Dump Trader";
	uniformClass="U_I_G_Story_Protagonist_F";
	linkedItems[]=
	{
		"V_Rangemaster_belt",
		"H_MilCap_gry"
	};
	class UserActions
	{
		class trade
		{
			displayName="<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' shadow='false' />Recycle Goods";
			position="ohniste";
			radius=3;
			priority=6;
			onlyForPlayer=1;
			condition="true";
			statement="this call Extremo_fnc_gui_wasteDumpDialog_show";
		};
	};
};
class Extremo_Trader_Office: Extremo_Trader_Abstract
{
	displayName="Extremo Office Trader";
	uniformClass="U_I_G_resistanceLeader_F";
	linkedItems[]=
	{
		"V_Rangemaster_belt",
		"H_Hat_brown"
	};
	class UserActions
	{
		class clanCreate
		{
			displayName="Create a family";
			position="ohniste";
			radius=3;
			priority=6;
			onlyForPlayer=1;
			condition="true";
			statement="this call Extremo_fnc_gui_registerClanDialog_show";
		};
		class territory
		{
			displayName="Purchase Territory";
			position="ohniste";
			radius=3;
			priority=6;
			onlyForPlayer=1;
			condition="true";
			statement="this call Extremo_fnc_gui_purchaseTerritoryDialog_show";
		};
		class upgradeTerritory
		{
			displayName="Upgrade Territory";
			position="ohniste";
			radius=3;
			priority=5;
			onlyForPlayer=1;
			condition="true";
			statement="this call Extremo_fnc_gui_upgradeTerritoryDialog_show";
		};
		class territoryProtectionMoney
		{
			displayName="Pay Territory Protection Money";
			position="ohniste";
			radius=3;
			priority=5;
			onlyForPlayer=1;
			condition="true";
			statement="this call Extremo_fnc_gui_payTerritoryProtectionMoneyDialog_show";
		};
		class payFlagRansom
		{
			displayName="Pay Territory Flag Ransom";
			position="ohniste";
			radius=3;
			priority=5;
			onlyForPlayer=1;
			condition="true";
			statement="this call Extremo_fnc_gui_payFlagRansomDialog_show";
		};
	};
};
class Extremo_Trader_VehicleCustoms: Extremo_Trader_Abstract
{
	displayName="Extremo Vehicle Customs Trader";
	uniformClass="Extremo_Uniform_ExtremoCustoms";
	linkedItems[]={};
	class UserActions
	{
		class trade
		{
			displayName="<img image='\a3\ui_f\data\IGUI\Cfg\Actions\repair_ca.paa' size='1' shadow='false' />Purchase Paintjob";
			position="ohniste";
			radius=3;
			priority=6;
			onlyForPlayer=1;
			condition="true";
			statement="this call Extremo_fnc_gui_vehicleCustomsDialog_show";
		};
		class changePin
		{
			displayName="<img image='\Extremo_Assets\texture\ui\code_pad_ca.paa' size='1' shadow='false' /> Change Pin";
			position="ohniste";
			radius=3;
			priority=6;
			onlyForPlayer=1;
			condition="true";
			statement="this call Extremo_fnc_gui_vehicleRekeyDialog_show";
		};
	};
};
class Extremo_Trader_AircraftCustoms: Extremo_Trader_Abstract
{
	displayName="Extremo Aircraft Customs Trader";
	uniformClass="Extremo_Uniform_ExtremoCustoms";
	linkedItems[]=
	{
		"H_PilotHelmetFighter_B",
		"V_RebreatherB"
	};
	class UserActions
	{
		class trade
		{
			displayName="<img image='\a3\ui_f\data\IGUI\Cfg\Actions\repair_ca.paa' size='1' shadow='false' />Purchase Paintjob";
			position="ohniste";
			radius=3;
			priority=6;
			onlyForPlayer=1;
			condition="true";
			statement="this call Extremo_fnc_gui_vehicleCustomsDialog_show";
		};
		class pin
		{
			displayName="<img image='\Extremo_Assets\texture\ui\code_pad_ca.paa' size='1' shadow='false' /> Change Pin";
			position="ohniste";
			radius=3;
			priority=6;
			onlyForPlayer=1;
			condition="true";
			statement="this spawn Extremo_fnc_gui_vehicleRekeyDialog_show";
		};
	};
};
class Extremo_Trader_BoatCustoms: Extremo_Trader_Abstract
{
	displayName="Extremo Boat Customs Trader";
	uniformClass="Extremo_Uniform_ExtremoCustoms";
	linkedItems[]={};
	class UserActions
	{
		class trade
		{
			displayName="<img image='\a3\ui_f\data\IGUI\Cfg\Actions\repair_ca.paa' size='1' shadow='false' />Purchase Paintjob";
			position="ohniste";
			radius=3;
			priority=6;
			onlyForPlayer=1;
			condition="true";
			statement="this call Extremo_fnc_gui_vehicleCustomsDialog_show";
		};
		class pin
		{
			displayName="<img image='\Extremo_Assets\texture\ui\code_pad_ca.paa' size='1' shadow='false' /> Change Pin";
			position="ohniste";
			radius=3;
			priority=6;
			onlyForPlayer=1;
			condition="true";
			statement="this spawn Extremo_fnc_gui_vehicleRekeyDialog_show";
		};
	};
};
class Extremo_Trader_RussianRoulette: Extremo_Trader_Abstract
{
	displayName="Extremo Russian Roulette Trader";
	uniformClass="U_Marshal";
	linkedItems[]=
	{
		"V_Rangemaster_belt",
		"H_Cap_marshal",
		"G_Sport_Blackyellow"
	};
	weapons[]=
	{
		"hgun_Pistol_Signal_F"
	};
	class UserActions
	{
		class join
		{
			displayName="Play Russian Roulette";
			position="ohniste";
			radius=3;
			priority=6;
			onlyForPlayer=1;
			condition="true";
			statement="this call Extremo_fnc_system_russianRoulette_requestJoinDialog";
		};
	};
};
class Extremo_Trader_CommunityCustoms: Extremo_Trader_Abstract
{
	displayName="Extremo Community Customs Trader";
	uniformClass="Extremo_Uniform_ExtremoCustoms";
	linkedItems[]={};
};
class Extremo_Trader_CommunityCustoms2: Extremo_Trader_Abstract
{
	displayName="Extremo Community Customs Trader 2";
	uniformClass="Extremo_Uniform_ExtremoCustoms";
	linkedItems[]={};
};
class Extremo_Trader_CommunityCustoms3: Extremo_Trader_Abstract
{
	displayName="Extremo Community Customs Trader 3";
	uniformClass="Extremo_Uniform_ExtremoCustoms";
	linkedItems[]={};
};
class Extremo_Trader_CommunityCustoms4: Extremo_Trader_Abstract
{
	displayName="Extremo Community Customs Trader 4";
	uniformClass="Extremo_Uniform_ExtremoCustoms";
	linkedItems[]={};
};
class Extremo_Trader_CommunityCustoms5: Extremo_Trader_Abstract
{
	displayName="Extremo Community Customs Trader 5";
	uniformClass="Extremo_Uniform_ExtremoCustoms";
	linkedItems[]={};
};
class Extremo_Trader_CommunityCustoms6: Extremo_Trader_Abstract
{
	displayName="Extremo Community Customs Trader 6";
	uniformClass="Extremo_Uniform_ExtremoCustoms";
	linkedItems[]={};
};
class Extremo_Trader_CommunityCustoms7: Extremo_Trader_Abstract
{
	displayName="Extremo Community Customs Trader 7";
	uniformClass="Extremo_Uniform_ExtremoCustoms";
	linkedItems[]={};
};
class Extremo_Trader_CommunityCustoms8: Extremo_Trader_Abstract
{
	displayName="Extremo Community Customs Trader 8";
	uniformClass="Extremo_Uniform_ExtremoCustoms";
	linkedItems[]={};
};
class Extremo_Trader_CommunityCustoms9: Extremo_Trader_Abstract
{
	displayName="Extremo Community Customs Trader 9";
	uniformClass="Extremo_Uniform_ExtremoCustoms";
	linkedItems[]={};
};
class Extremo_Trader_CommunityCustoms10: Extremo_Trader_Abstract
{
	displayName="Extremo Community Customs Trader 10";
	uniformClass="Extremo_Uniform_ExtremoCustoms";
	linkedItems[]={};
};

//--- Zombies
class Extremo_Zombie_F: Extremo_Zombie_Abstract
{
	scope=2;
	displayName="Extremo Zombie"; 
	camouflage = 1.0; // How likely this character is spotted (smaller number = more stealthy).
	sensitivity = 6.9; // How likely this character spots enemies when controlled by AI.
};