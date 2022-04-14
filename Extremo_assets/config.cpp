/*
	## EXTREMO Survival
	## Nikko & HappyFeet
*/

#define _ARMA_

//--- Patch
class CfgPatches
{
    class Extremo_Assets
	{
		class authors_info
		{
			class author_0
			{
				name = "Nikko";
				uid = "76561199109931625";
				email = "Ni1kko@outlook.com";
				github = "github.com/Ni1kko";
			};		
			class author_1
			{
				name = "HappyFeet";
				uid = "76561198147157388";
				email = "Stephenallen1414@gmail.com";
				github = "github.com/Spodini";
			};
		};
		version = "1.0.72";
		requiredVersion=2.04;
		requiredAddons[]= {
			"a3_characters_f",
			"a3_characters_f_beta",
			"a3_characters_f_epa",
			"a3_characters_f_epb",
			"a3_characters_f_epc",
			"a3_characters_f_gamma",
			"a3_missions_f_oldman",
			"a3_characters_f_orange",
			"a3_characters_f_exp",
			"a3_characters_f_enoch",
			"a3_plants_f_bush",
			"a3_plants_f",
			"a3_data_f",
			"a3_weapons_f",
			"a3_weapons_f_beta",
			"a3_weapons_f_bootcamp",
			"a3_weapons_f_epa",
			"a3_weapons_f_epb",
			"a3_weapons_f_epc",
			"a3_weapons_f_gamma",
			"a3_rocks_f",
			"a3_anims_f",
			"a3_weapons_f_mark",
			"a3_weapons_f_exp",
			"a3_map_altis",
			"a3_map_stratis",
			"a3_map_enoch",
			"a3_map_malden",
			"a3_map_tanoabuka",
			"a3_map_altis_scenes",
			"a3_map_vr_scenes",
			"a3_map_stratis_scenes",
			"a3_ui_f",
			"a3_ui_f_aow",
			"a3_ui_f_bootcamp",
			"a3_ui_f_curator",
			"a3_ui_f_data",
			"a3_ui_f_enoch",
			"a3_ui_f_exp",
			"a3_ui_f_exp_a",
			"a3_ui_f_heli",
			"a3_ui_f_jets",
			"a3_ui_f_kart",
			"a3_ui_f_mark",
			"a3_ui_f_mp_mark",
			"a3_ui_f_oldman",
			"a3_ui_f_orange",
			"a3_ui_f_patrol",
			"a3_ui_f_tank",
			"a3_ui_f_tacops"/*,"a3_ui_f_contact"*/,
			"a3_3den",
			"a3_soft_f",
			"a3_cargoposes_f",
			"a3_functions_f",
			"a3_data_f_particleeffects"
		};
		units[] = {};
		weapons[]= {
			"arifle_MX_SW_F",
			"arifle_MX_SW_Black_F",
			"arifle_SPAR_02_blk_F",
			"arifle_SPAR_02_khk_F",
			"arifle_SPAR_02_snd_F",
			"MMG_01_hex_F",
			"MMG_01_tan_F",
			"MMG_02_camo_F",
			"MMG_02_black_F",
			"MMG_02_sand_F",
			"Throw"
		};
		magazines[]={};
		ammo[]={};
	};
};

//--- Addons
class CfgAddons
{
	class PreloadBanks { };
	class PreloadAddons
	{
		class Extremo_Expansion_Assets
		{
			list[]={ "A3_Map_Enoch", "A3_Map_Malden", "A3_Characters_F", "A3_Missions_F_Oldman", "A3_Characters_F_Orange", "A3_Characters_F_Exp", "A3_Characters_F_Enoch", "Extremo_Assets" };
		};
	};
};

//--- Abstracts
class Extremo_AbstractCraftingRecipe
{
	name = "";
	pictureItem = ""; 
	returnedItems[] = {};
	components[] = {};
	tools[] = {}; 
	requiredInteractionModelGroup = ""; 
	requiresOcean = 0; 
	requiresFire = 0; 
};
class ExtremoAbstractAction
{
	title = "";
	condition = "true";
	action = "";
	priority = 1.5;
	showWindow = false;
};

//--- Mod
class CfgMods
{
	class Mod_Base;
	class Extremo : Mod_Base
	{
		name="Extremo Survival Mod";
		author="Nikko";
		action="http://www.extremo.co.uk";
		dir="@ExtremoClient";
		logo="Extremo_Assets\texture\mod\logo.paa";
		logoOver="Extremo_Assets\texture\mod\logo.paa";
		logoSmall="Extremo_Assets\texture\mod\icon.paa";
		picture="Extremo_Assets\texture\mod\logo.paa";
		hidePicture=0;
		hideName=0;
		dlcColor[]={0.94,0.28999999,0.98000002,1};
		overview="Hardcore Survival Server";
		itemPrevNotifText="";
		class LoadingScreen
		{
			pictures[]={
				"Extremo_Assets\texture\loading\loading_axe_co.paa",
				"Extremo_Assets\texture\loading\loading_bigmomma_co.paa",
				"Extremo_Assets\texture\loading\loading_cement_co.paa",
				"Extremo_Assets\texture\loading\loading_cheathas_co.paa",
				"Extremo_Assets\texture\loading\loading_cockonut_co.paa",
				"Extremo_Assets\texture\loading\loading_codelock_co.paa",
				"Extremo_Assets\texture\loading\loading_concrete_mixer_co.paa",
				"Extremo_Assets\texture\loading\loading_dsnuts_co.paa",
				"Extremo_Assets\texture\loading\loading_emre_co.paa",
				"Extremo_Assets\texture\loading\loading_flag_co.paa",
				"Extremo_Assets\texture\loading\loading_foolbox_co.paa",
				"Extremo_Assets\texture\loading\loading_knife_co.paa",
				"Extremo_Assets\texture\loading\loading_laptop_co.paa",
				"Extremo_Assets\texture\loading\loading_metal_screws_co.paa",
				"Extremo_Assets\texture\loading\loading_moobar_co.paa",
				"Extremo_Assets\texture\loading\loading_pop_tabs_co.paa",
				"Extremo_Assets\texture\loading\loading_raisins_co.paa",
				"Extremo_Assets\texture\loading\loading_shovel_co.paa",
				"Extremo_Assets\texture\loading\loading_sledge_hammer_co.paa",
				"Extremo_Assets\texture\loading\loading_vishpirin_co.paa"
			};
			templateDefault = "<t>Your text here? Make a suggestion: </t><t color='#c72651'>www.extremo.co.uk/discord</t>";
			templates[]= { 
				{
					"9879821876, I'm sure you haven't read this number..",
					"maxicraft68"
				},
				{
					"[Insert funny loading screen joke here]",
					"polivilas"
				},
				{
					"A good bush for an ambush...",
					"Reaper7Strike"
				},
				{
					"Arma has stopped responding...",
					"Brett Nordin"
				},
				{
					"Attempting integer division by zero...",
					"eraser1"
				},
				{
					"Blowing up your vehicles...",
					"SomeRandomScorpion"
				},
				{
					"Constructing additional pylons...",
					"KrypTarch"
				},
				{
					"Deploying spike strips to bridges...",
					"dizzler"
				},
				{
					"Do you think it's going to load?",
					"[T.G] Razor"
				},
				{
					"Error Type Number, Not a Number, Expected Number, Number",
					"Grim"
				},
				{
					"Extremo_zombies.sqf failed to load",
					"Pustekuchen"
				},
				{
					"Hardening bushes...",
					"Gaina"
				},
				{
					"Hiding your backpack...",
					"Markkos"
				},
				{
					"Initializing 1000m-pistol-whipping AI...",
					"Major Mittens"
				},
				{
					"Initiating lag...",
					"Crazy Mike"
				},
				{
					"Injecting Backdoor Trojan...",
					"bambam"
				},
				{
					"Installing snapbuild...",
					"Mezo"
				},
				{
					"Kicked by BattlEye: Script Restriction #1337",
					"Mr Hanky"
				},
				{
					"Kurwa!",
					"Flosstradamus"
				},
				{
					"Learning how to Arma...",
					"ka0s"
				},
				{
					"Loading Bambi Slayers...",
					"GolovaRaoul"
				},
				{
					"Loading loading screen suggestions...",
					"ThatGuyYouKnow"
				},
				{
					"Loading next loading screen...",
					"Vodor"
				},
				{
					"Making another memory error",
					"SynysterDemon"
				},
				{
					"Mining Bitcoins to pay the server...",
					"XuluniX"
				},
				{
					"Point of No Return",
					"Commander Malc"
				},
				{
					"Prepare to rage quit...",
					"Spackler"
				},
				{
					"Releasing bugs back into their habitat...",
					"MadMoo"
				},
				{
					"Removing your workshop subscriptions...",
					"File_Delete"
				},
				{
					"Resetting your poptabs...",
					"Colonelfury"
				},
				{
					"Restarting for no reason...",
					"DarkWatcher"
				},
				{
					"Soon(TM)",
					"WolfkillArcadia"
				},
				{
					"Spawning inevitable death...",
					"KIMBOF1"
				},
				{
					"Spawning into crying corner...",
					"Magz"
				},
				{
					"WARNING: THIS GAME IS EARLY ACCESS ALPHA.",
					"BrainlessDude"
				},
				{
					"Wiping your virtual garage",
					"DB"
				},
				{
					"You have that read wrong",
					"Axl"
				},
				{
					"""What server does Frankie play on?""",
					"Shoritz"
				},
				{
					"Adding abusive admins",
					"Chris"
				},
				{
					"Attempting to utilize the GPU... Failed... Reverting to CPU...",
					"Tobias Solem"
				},
				{
					"Bad module error",
					"ComatoseBadger"
				},
				{
					"Booby trapping push bikes...",
					"HonestDave"
				},
				{
					"Can't answer the phone right now! I'm playing Arma!",
					"OG ThaGame"
				},
				{
					"Deploying Raiding Bandits...",
					"Zentarix"
				},
				{
					"Do you kno dawae?",
					"MonkeyNutz"
				},
				{
					"Don't ALT+TAB!",
					"Michaesine"
				},
				{
					"Emptying your locker...",
					"[KZ] Samfisher"
				},
				{
					"Error: Bambi Creation Timeout",
					"AdamKadmon"
				},
				{
					"Error: This game is no longer available",
					"Cooper"
				},
				{
					"Feeding horse for power...",
					"primedead"
				},
				{
					"Have you tried switching it off and on again?",
					"ExtremodVibe"
				},
				{
					"Headless client midlife crisis: Wants head back",
					"Antdooky"
				},
				{
					"Hey, WolfkillArcadia. Let me have a loading screen quote!",
					"Defent"
				},
				{
					"Hiding IEDs on the road...",
					"Aramet"
				},
				{
					"I got knife, let's steal... *dies at car*",
					"Reaper7Strike"
				},
				{
					"I have no problems on other servers",
					"James1st"
				},
				{
					"I should've read a tutorial...",
					"BushWuukie"
				},
				{
					"XM9 when?",
					"Ni1kko"
				}, 
				{
					"Loading Rage Quit Engine",
					"smokedog77"
				}, 
				{
					"Log in successful, informing raiders...",
					"Feary"
				},  
				{
					"Manufacturing wooden ammunition",
					"pticu"
				},
				{
					"No Keyboard Detected! Press F1 To Continue",
					"Captain_Bigzy"
				},
				{
					"Praying to the Loot God",
					"Twent"
				},
				{
					"Rooty Tooty, Point and Shooty!",
					"Demonic"
				},
				{
					"Server restart in 1 minute!",
					"Jarskie"
				},
				{
					"This is a Life server, right?",
					"FairyTale"
				},
				{
					"This is chaos",
					"AwezmTV"
				},
				{
					"This is not what I signed up for ",
					"UnknownWarrior"
				},
				{
					"This message intentionally left blank.",
					"Geekm0nkey"
				},
				{
					"This server is powered by a lemon and two electrodes.",
					"OMARCOMIN"
				},
				{
					"Trying to find the one safe spot",
					"pipin96"
				},
				{
					"Verify Integrity of Game Files...",
					"Helldog"
				},
				{
					"Your XM8 shut down unexpectedly. Please restart your PC.",
					"Przemek"
				},
				{
					"Throwing hand grenade at a rabbit...",
					"ass4assintim"
				},
				{
					"Milking the sheep",
					"Trap_God"
				},
				{
					"Just a fat little squirrel trying to get a nut",
					"chainsaw"
				},
				{
					"... Do not ping me with en random ... !!!",
					"Dwarden"
				},
				{
					"Stealing your Семечки",
					"Bambuz"
				},
				{
					"Randomizing PIN codes...",
					"Coldrice"
				},
				{
					"Installing OP Frying Pan",
					"Morty"
				},
				{
					"You need a little revive?",
					"Falinov"
				},
				{
					"Preparing to find THE way",
					"The Dude (chernaruski)"
				},
				{
					"Paying for WinRAR",
					"IPaidForWinRAR"
				}
			}; 
		}; 
	};

};

//--- Functions
class CfgFunctions 
{
	class A3
	{
		tag="BIS";
		project="arma3";
		class Ambient
		{
			file="Extremo_Assets\script\trashBin";
			class animalBehaviour{};
		};
		class Misc
		{
			delete progressLoadingScreen;
		};
		class BecauseArma
		{
			file="Extremo_Assets\script\trashBin";
			class progressLoadingScreen {};
		};
		class MP
		{
			file="Extremo_Assets\script\trashBin";
			class execFSM{};
			class execVM{};
			class execRemote{};
			class addScore{};
			class setRespawnDelay{};
			class onPlayerConnected{};
			class initPlayable{};
			class missionTimeLeft{};
			class MP{};
			class MPexec{};
			class initMultiplayer{};
			class call{};
			class spawn{};
			class deleteVehicleCrew{};
			class admin{};
		};
		class Scripts
		{
			file="Extremo_Assets\script";
			class rscHorizontalCompass{};
		};
	};
    class Extremo_Assets
    {
        class Client_Functions {
            file = "\Extremo_Assets"; 
            class preInit {preInit=1;};  
        };
    };
	class Extremo3DEN
	{		class custom3DENNotification
		{
			file="\Extremo_assets\script\EDEN\Functions";
			class DisplayCustom3DENNotification {};
		};
	};
};

//--- Worlds
class CfgWorlds
{
	/*	
		## https://pmc.editing.wiki/doku.php?id=arma3:terrain:config.cpp
		## https://community.bistudio.com/wiki/Arma_3:_CfgWorlds_Config_Reference
	 	## https://community.bistudio.com/wiki/Arma_3:_Loading_Screens
	*/
	class CAWorld;
	class Altis: CAWorld
	{
		author = "Bohemia Interactive";
		description = "Altis Survival Map";
		pictureMap = "Extremo_Assets\texture\mod\logo.paa";
		pictureShot = "Extremo_Assets\texture\mod\logo.paa";
		previewVideo="Extremo_Assets\video\menu.ogv";
		loadingTexts[] = {"Hardcore Survival Server"};
		cutscenes[]= {"Altis_intro1"};
		worldName="\A3\map_Altis\Altis.wrp";
		newRoadsShape="\A3\Map_Altis\data\roads\roads.shp";
		startTime="12:00";
		startDate="1/1/2021";
		class AmbientA3
		{
			class Radius440_500
			{
				spawnInterval=99999;
				class Species
				{
					delete Kestrel_random_F;
					delete Rabbit_F;
					class Seagull
					{
						maxCircleCount="((sea * (1 - night)) + (2 * houses * sea)) * (1 - night)";
						maxWorldCount=20;
						cost=3;
						spawnCount=1;
						groupSpawnRadius=10;
						maxAlt=450;
						minAlt=-10;
					};
				};
			};
			class Radius40_60
			{
				spawnInterval=99999;
				class Species
				{
					delete CatShark_F;
					delete Mackerel_F;
					delete Mullet_F;
					delete Ornate_random_F;
					delete Salema_F;
					delete Snake_random_F;
					delete Tuna_F;
					delete Turtle_F;
				};
			};
			class Radius30_40
			{
				spawnInterval=99999;
				class Species
				{
					delete DragonFly;
					delete ButterFly_random;
					delete Cicada;
				};
			};
			class Radius15_20
			{
				areaSpawnRadius=15;
				areaMaxRadius=20;
				spawnCircleRadius=2;
				spawnInterval=2.8499999;
				class Species
				{
					class FxWindGrass1
					{
						maxCircleCount="2 * (1 - (WaterDepth interpolate [1,30,0,1])) * (windy interpolate [0.1,0.25,0,1])";
						maxWorldCount=3;
						cost=1;
						spawnCount=3;
						groupSpawnRadius=2.5;
						maxAlt=30;
						minAlt=-5;
					};
					class FxWindGrass2
					{
						maxCircleCount="2 * (1 - (WaterDepth interpolate [1,30,0,1])) * (windy interpolate [0.1,0.25,0,1])";
						maxWorldCount=3;
						cost=1;
						spawnCount=3;
						groupSpawnRadius=2.5;
						maxAlt=30;
						minAlt=-5;
					};
					class FxWindLeaf1
					{
						maxCircleCount="2 * (trees + 0.5) * (windy interpolate [0.1,0.25,0,1])";
						maxWorldCount=3;
						cost=1;
						spawnCount=3;
						groupSpawnRadius=2.5;
						maxAlt=30;
						minAlt=-5;
					};
					class FxWindLeaf2
					{
						maxCircleCount="2 * (trees + 0.5) * (windy interpolate [0.1,0.25,0,1])";
						maxWorldCount=3;
						cost=1;
						spawnCount=3;
						groupSpawnRadius=2.5;
						maxAlt=30;
						minAlt=-5;
					};
					class FxWindLeaf3
					{
						maxCircleCount="2 * (trees + 0.5) * (windy interpolate [0.1,0.25,0,1])";
						maxWorldCount=3;
						cost=1;
						spawnCount=3;
						groupSpawnRadius=2.5;
						maxAlt=30;
						minAlt=-5;
					};
					class FxWindPollen1
					{
						maxCircleCount="(3 * (1 - (WaterDepth interpolate [1,30,0,1]))) * (windy interpolate [0.05,0.15,0,1])";
						maxWorldCount=6;
						cost=1;
						spawnCount=1;
						groupSpawnRadius=1;
						maxAlt=30;
						minAlt=-5;
					};
					delete FxWindPaper1;
					delete FxWindPlastic1;
				};
			};
			class Radius6_10
			{
				spawnInterval=99999;
				class Species
				{
					delete HoneyBee;
					delete HouseFly;
					delete Mosquito;
				};
			};
		};
		class Names
		{
			class CityC_Kavala
			{
				name="";
				position[]={3620.3899,13092.82};
				type="CityCenter";
				demography="CIV";
				radiusA=200;
				radiusB=200;
				angle=0;
			};
			class Aggelochori
			{
				name="$STR_A3_Aggelochori0";
				position[]={3687.78,13776.09};
				type="NameVillage";
				demography="CIV";
				radiusA=400;
				radiusB=100;
				angle=0;
			};
			class Neri
			{
				name="$STR_A3_Neri0";
				position[]={4116.1099,11736.1};
				type="NameVillage";
				demography="CIV";
				radiusA=400;
				radiusB=170;
				angle=0;
			};
			class Panochori
			{
				name="$STR_A3_Panochori0";
				position[]={5033.3101,11245.22};
				type="NameVillage";
				demography="CIV";
				radiusA=500;
				radiusB=150;
				angle=0;
			};
			class Zaros
			{
				name="$STR_A3_Zaros0";
				position[]={9091.8096,11961.87};
				type="NameCity";
				demography="CIV";
				radiusA=500;
				radiusB=200;
				angle=0;
			};
			class Therisa
			{
				name="$STR_A3_Therisa0";
				position[]={10618.88,12237.26};
				type="NameVillage";
				demography="CIV";
				radiusA=400;
				radiusB=200;
				angle=0;
			};
			class Katalaki
			{
				name="$STR_A3_Katalaki0";
				position[]={11701.06,13672.14};
				type="NameVillage";
				demography="CIV";
				radiusA=450;
				radiusB=200;
				angle=0;
			};
			class Neochori
			{
				name="$STR_A3_Neochori0";
				position[]={12501.97,14337.03};
				type="NameCity";
				demography="CIV";
				radiusA=500;
				radiusB=250;
				angle=0;
			};
			class Stavros
			{
				name="$STR_A3_Stavros0";
				position[]={12950.06,15041.63};
				type="NameVillage";
				demography="CIV";
				radiusA=400;
				radiusB=250;
				angle=0;
			};
			class Lakka
			{
				name="$STR_A3_Lakka0";
				position[]={12281.97,15732.27};
				type="NameCity";
				demography="CIV";
				radiusA=500;
				radiusB=200;
				angle=0;
			};
			class Alikampos
			{
				name="$STR_A3_Alikampos0";
				position[]={11112.63,14573.65};
				type="NameVillage";
				demography="CIV";
				radiusA=450;
				radiusB=250;
				angle=0;
			};
			class AgiosDionysios
			{
				name="$STR_A3_AgiosDionysios0";
				position[]={9187.9502,15947.84};
				type="NameCity";
				demography="CIV";
				radiusA=500;
				radiusB=150;
				angle=0;
			};
			class Kore
			{
				name="$STR_A3_Kore0";
				position[]={7062.4199,16472.119};
				type="NameCity";
				demography="CIV";
				radiusA=371.91;
				radiusB=447.25;
				angle=0;
			};
			class Negades
			{
				name="$STR_A3_Negades0";
				position[]={4885.98,16171.33};
				type="NameVillage";
				demography="CIV";
				radiusA=400;
				radiusB=200;
				angle=0;
			};
			class AgiosKonstantinos
			{
				name="$STR_A3_AgiosKonstantinos0";
				position[]={3948.77,17277.85};
				type="NameVillage";
				demography="CIV";
				radiusA=500;
				radiusB=150;
				angle=0;
			};
			class Topolia
			{
				name="$STR_A3_Topolia0";
				position[]={7375.8101,15429.51};
				type="NameVillage";
				demography="CIV";
				radiusA=400;
				radiusB=100;
				angle=0;
			};
			class Gravia
			{
				name="$STR_A3_Gravia0";
				position[]={14479.81,17614.301};
				type="NameCity";
				demography="CIV";
				radiusA=734.48999;
				radiusB=250;
				angle=0;
			};
			class Athira
			{
				name="$STR_A3_Athira0";
				position[]={13993,18709.381};
				type="NameCityCapital";
				demography="CIV";
				radiusA=500;
				radiusB=306.88;
				angle=0;
			};
			class Frini
			{
				name="$STR_A3_Frini0";
				position[]={14612.45,20786.711};
				type="NameCity";
				demography="CIV";
				radiusA=270.57999;
				radiusB=325.38;
				angle=0;
			};
			class Ifestiona
			{
				name="$STR_A3_Ifestiona0";
				position[]={12786.98,19679.311};
				type="NameVillage";
				demography="CIV";
				radiusA=500;
				radiusB=176.64;
				angle=0;
			};
			class Syrta
			{
				name="$STR_A3_Syrta0";
				position[]={8625.1299,18301.561};
				type="NameCity";
				demography="CIV";
				radiusA=500;
				radiusB=250;
				angle=0;
			};
			class Galati
			{
				name="$STR_A3_Galati0";
				position[]={10270.28,19036.01};
				type="NameVillage";
				demography="CIV";
				radiusA=629.96002;
				radiusB=250;
				angle=0;
			};
			class Koroni
			{
				name="$STR_A3_Koroni0";
				position[]={11786.73,18372.391};
				type="NameVillage";
				demography="CIV";
				radiusA=500;
				radiusB=329.01001;
				angle=0;
			};
			class Abdera
			{
				name="$STR_A3_Abdera0";
				position[]={9425.4199,20284.029};
				type="NameVillage";
				demography="CIV";
				radiusA=453.26999;
				radiusB=250;
				angle=0;
			};
			class Telos
			{
				name="$STR_A3_Telos0";
				position[]={16207.02,17296.711};
				type="NameCity";
				demography="CIV";
				radiusA=500;
				radiusB=250;
				angle=0;
			};
			class Anthrakia
			{
				name="$STR_A3_Anthrakia0";
				position[]={16584.26,16103.96};
				type="NameVillage";
				demography="CIV";
				radiusA=500;
				radiusB=250;
				angle=0;
			};
			class Kalithea
			{
				name="$STR_A3_Kalithea0";
				position[]={17826.51,18129.369};
				type="NameVillage";
				demography="CIV";
				radiusA=300;
				radiusB=120;
				angle=0;
			};
			class AgiosPetros
			{
				name="$STR_A3_AgiosPetros0";
				position[]={19339.42,17641.619};
				type="NameVillage";
				demography="CIV";
				radiusA=300;
				radiusB=100;
				angle=0;
			};
			class Paros
			{
				name="$STR_A3_Paros0";
				position[]={20885.391,16958.76};
				type="NameCity";
				demography="CIV";
				radiusA=450;
				radiusB=180;
				angle=0;
			};
			class Kalochori
			{
				name="$STR_A3_Kalochori0";
				position[]={21351.58,16361.88};
				type="NameCity";
				demography="CIV";
				radiusA=400;
				radiusB=150;
				angle=0;
			};
			class Sofia
			{
				name="$STR_A3_Sofia0";
				position[]={25680.529,21365.08};
				type="NameCity";
				demography="CIV";
				radiusA=500;
				radiusB=250;
				angle=0;
			};
			class Molos
			{
				name="$STR_A3_Molos0";
				position[]={26943.859,23170.68};
				type="NameCity";
				demography="CIV";
				radiusA=350;
				radiusB=200;
				angle=0;
			};
			class Ioannina
			{
				name="$STR_A3_Ioannina0";
				position[]={23199.68,19986.6};
				type="NameVillage";
				demography="CIV";
				radiusA=350;
				radiusB=120;
				angle=0;
			};
			class Delfinaki
			{
				name="$STR_A3_Delfinaki0";
				position[]={23908.6,20144.73};
				type="NameVillage";
				demography="CIV";
				radiusA=350;
				radiusB=140;
				angle=0;
			};
			class Nifi
			{
				name="$STR_A3_Nifi0";
				position[]={19473.33,15453.65};
				type="NameVillage";
				demography="CIV";
				radiusA=400;
				radiusB=200;
				angle=0;
			};
			class Charkia
			{
				name="$STR_A3_Charkia0";
				position[]={18049.08,15264.07};
				type="NameCity";
				demography="CIV";
				radiusA=400;
				radiusB=200;
				angle=0;
			};
			class Dorida
			{
				name="$STR_A3_Dorida0";
				position[]={19336.869,13252.28};
				type="NameCity";
				demography="CIV";
				radiusA=500;
				radiusB=200;
				angle=0;
			};
			class Chalkeia
			{
				name="$STR_A3_Chalkeia0";
				position[]={20194.641,11660.69};
				type="NameCity";
				demography="CIV";
				radiusA=500;
				radiusB=200;
				angle=0;
			};
			class Panagia
			{
				name="$STR_A3_Panagia0";
				position[]={20490.18,8907.1201};
				type="NameVillage";
				demography="CIV";
				radiusA=300;
				radiusB=110;
				angle=0;
			};
			class Feres
			{
				name="$STR_A3_Feres0";
				position[]={21640.721,7583.9302};
				type="NameVillage";
				demography="CIV";
				radiusA=300;
				radiusB=150;
				angle=0;
			};
			class Selakano
			{
				name="$STR_A3_Selakano0";
				position[]={20769.779,6736.46};
				type="NameVillage";
				demography="CIV";
				radiusA=350;
				radiusB=120;
				angle=0;
			};
			class Pyrgos
			{
				name="$STR_A3_Pyrgos0";
				position[]={16780.609,12604.47};
				type="NameCityCapital";
				demography="CIV";
				radiusA=500;
				radiusB=200;
				angle=0;
			};
			class CityC_Neri
			{
				name="";
				position[]={4183.1299,11743.95};
				type="CityCenter";
				demography="CIV";
				radiusA=100;
				radiusB=100;
				angle=0;
			};
			class CityC_AgiosDionysios
			{
				name="";
				position[]={9287.6602,15858.07};
				type="CityCenter";
				demography="CIV";
				radiusA=235.06;
				radiusB=264.04999;
				angle=0;
			};
			class CityC_Katalakes
			{
				name="";
				position[]={9459.6201,20281.93};
				type="CityCenter";
				demography="CIV";
				radiusA=213.45;
				radiusB=239.78;
				angle=0;
			};
			class Kavala
			{
				name="Extremo Capital";
				position[]={3458.95,12966.37};
				type="NameCityCapital";
				demography="CIV";
				radiusA=500;
				radiusB=200;
				angle=0;
			};
			class Poliakko
			{
				name="$STR_A3_Poliakko0";
				position[]={10966.47,13435.28};
				type="NameCity";
				demography="CIV";
				radiusA=500;
				radiusB=250;
				angle=0;
			};
			class Bomos
			{
				name="$STR_A3_Bomos0";
				position[]={2307.3101,22165.18};
				type="NameLocal";
				radiusA=600;
				radiusB=250;
				angle=0;
			};
			class Oreokastro
			{
				name="$STR_A3_Oreokastro0";
				position[]={4560.4502,21460.641};
				type="NameVillage";
				radiusA=800;
				radiusB=300;
				angle=0;
			};
			class castle
			{
				name="$STR_A3_castle0";
				position[]={4802.9902,21855.49};
				type="NameLocal";
				radiusA=500;
				radiusB=300;
				angle=0;
			};
			class Thronos
			{
				name="$STR_A3_Thronos0";
				position[]={4919.3198,21951.74};
				type="Hill";
				radiusA=346.59;
				radiusB=263.04001;
				angle=0;
			};
			class Faros
			{
				name="$STR_A3_Faros0";
				position[]={6565.2998,22639.109};
				type="NameLocal";
				radiusA=433.23999;
				radiusB=328.79999;
				angle=0;
			};
			class dump
			{
				name="$STR_A3_dump0";
				position[]={5887.1299,20236.48};
				type="NameLocal";
				radiusA=277.26999;
				radiusB=210.42999;
				angle=0;
			};
			class Synneforos
			{
				name="$STR_A3_Synneforos0";
				position[]={6513.79,21604.699};
				type="Hill";
				radiusA=600;
				radiusB=250;
				angle=0;
			};
			class Aristi
			{
				name="$STR_A3_Aristi0";
				position[]={7914.0498,21305.189};
				type="NameLocal";
				radiusA=277.26999;
				radiusB=210.42999;
				angle=0;
			};
			class Fotia
			{
				name="$STR_A3_Fotia0";
				position[]={2993.48,18517.359};
				type="NameLocal";
				radiusA=260.95999;
				radiusB=198.05;
				angle=0;
			};
			class hill01
			{
				name="";
				position[]={4162.73,19455.529};
				type="Hill";
				radiusA=350;
				radiusB=350;
				angle=0;
			};
			class Hill02
			{
				name="$STR_A3_Hill020";
				position[]={4808.1802,17694.35};
				type="Hill";
				radiusA=500;
				radiusB=300;
				angle=0;
			};
			class Gori
			{
				name="$STR_A3_Gori0";
				position[]={5455.7202,17553.66};
				type="NameLocal";
				radiusA=500;
				radiusB=250;
				angle=0;
			};
			class AgiosMinas
			{
				name="$STR_A3_AgiosMinas0";
				position[]={7846.96,18005.439};
				type="Hill";
				radiusA=600;
				radiusB=300;
				angle=0;
			};
			class Pyrsos
			{
				name="$STR_A3_Pyrsos0";
				position[]={9127.0996,19271.65};
				type="Hill";
				radiusA=500;
				radiusB=250;
				angle=0;
			};
			class hill03
			{
				name="";
				position[]={10748.89,20401};
				type="Hill";
				radiusA=250;
				radiusB=250;
				angle=0;
			};
			class KryaNera
			{
				name="$STR_A3_KryaNera0";
				position[]={9681.5801,22294.49};
				type="NameLocal";
				radiusA=500;
				radiusB=250;
				angle=0;
			};
			class hill04
			{
				name="";
				position[]={14574.43,21994.801};
				type="Hill";
				radiusA=250;
				radiusB=250;
				angle=0;
			};
			class CapAgrios
			{
				name="$STR_A3_CapAgrios0";
				position[]={14688.23,23496.23};
				type="NameLocal";
				radiusA=500;
				radiusB=250;
				angle=0;
			};
			class Nychi
			{
				name="$STR_A3_Nychi0";
				position[]={16837.42,21889.99};
				type="NameLocal";
				radiusA=500;
				radiusB=250;
				angle=0;
			};
			class factory01
			{
				name="$STR_A3_factory040";
				position[]={14294.59,18928.49};
				type="NameLocal";
				radiusA=250;
				radiusB=200;
				angle=0;
			};
			class AgiaTriada
			{
				name="$STR_A3_AgiaTriada0";
				position[]={16668.5,20487.029};
				type="NameVillage";
				radiusA=400;
				radiusB=200;
				angle=0;
			};
			class Orino
			{
				name="$STR_A3_Orino0";
				position[]={10410.36,17243.119};
				type="NameVillage";
				radiusA=450;
				radiusB=200;
				angle=0;
			};
			class military01
			{
				name="$STR_A3_military010";
				position[]={12771.58,16694.289};
				type="NameLocal";
				radiusA=400;
				radiusB=200;
				angle=0;
			};
			class factory02
			{
				name="$STR_A3_factory040";
				position[]={12577.36,16352.75};
				type="NameLocal";
				radiusA=400;
				radiusB=200;
				angle=0;
			};
			class airbase01
			{
				name="$STR_A3_airbase010";
				position[]={14037.58,16143.33};
				type="NameLocal";
				radiusA=400;
				radiusB=200;
				angle=0;
			};
			class terminal01
			{
				name="$STR_A3_terminal010";
				position[]={14522.41,16833.949};
				type="NameLocal";
				radiusA=500;
				radiusB=250;
				angle=0;
			};
			class military02
			{
				name="$STR_A3_military010";
				position[]={15137.16,17297.801};
				type="NameLocal";
				radiusA=400;
				radiusB=200;
				angle=0;
			};
			class military03
			{
				name="$STR_A3_military010";
				position[]={16030.42,17004.84};
				type="NameLocal";
				radiusA=400;
				radiusB=200;
				angle=0;
			};
			class PowerPlant01
			{
				name="$STR_A3_PowerPlant020";
				position[]={15420.83,16223.64};
				type="NameLocal";
				radiusA=500;
				radiusB=250;
				angle=0;
			};
			class Amfissa
			{
				name="$STR_A3_Amfissa0";
				position[]={8088.8101,17257.66};
				type="NameLocal";
				radiusA=200;
				radiusB=150;
				angle=0;
			};
			class Amoni
			{
				name="$STR_A3_Amoni0";
				position[]={7859.98,16673.561};
				type="Hill";
				radiusA=300;
				radiusB=200;
				angle=0;
			};
			class factory03
			{
				name="$STR_A3_factory040";
				position[]={6109.4902,16246.18};
				type="NameLocal";
				radiusA=400;
				radiusB=200;
				angle=0;
			};
			class Stadium
			{
				name="$STR_A3_Stadium0";
				position[]={5429.6899,14996.68};
				type="NameLocal";
				radiusA=400;
				radiusB=200;
				angle=0;
			};
			class factory04
			{
				name="$STR_A3_factory040";
				position[]={5307.1201,14500.11};
				type="NameLocal";
				radiusA=400;
				radiusB=200;
				angle=0;
			};
			class hill05
			{
				name="$STR_A3_hill050";
				position[]={9187.7402,11502.53};
				type="Hill";
				radiusA=300;
				radiusB=150;
				angle=0;
			};
			class XirolimniDam
			{
				name="$STR_A3_XirolimniDam0";
				position[]={9115.2197,13959.85};
				type="NameLocal";
				radiusA=500;
				radiusB=250;
				angle=0;
			};
			class AgiaStemma
			{
				name="$STR_A3_AgiaStemma0";
				position[]={7883.5801,14626.41};
				type="Hill";
				radiusA=509.67999;
				radiusB=386.82001;
				angle=0;
			};
			class AACairfield
			{
				name="$STR_A3_AACairfield0";
				position[]={11461.19,11661.67};
				type="NameLocal";
				radiusA=350;
				radiusB=150;
				angle=0;
			};
			class Drimea
			{
				name="$STR_A3_Drimea0";
				position[]={10781.89,10881.59};
				type="NameLocal";
				radiusA=450;
				radiusB=200;
				angle=0;
			};
			class Kastro
			{
				name="$STR_A3_Kastro0";
				position[]={3041.3999,13162.75};
				type="NameLocal";
				radiusA=300;
				radiusB=150;
				angle=0;
			};
			class KavalaPier
			{
				name="$STR_A3_KavalaPier0";
				position[]={3014.8301,12587.34};
				type="NameLocal";
				radiusA=300;
				radiusB=150;
				angle=0;
			};
			class PowerPlant02
			{
				name="$STR_A3_PowerPlant020";
				position[]={4163.6001,15047.23};
				type="NameLocal";
				radiusA=300;
				radiusB=100;
				angle=0;
			};
			class Magos
			{
				name="$STR_A3_Magos0";
				position[]={4564.7202,15393.25};
				type="Hill";
				radiusA=300;
				radiusB=100;
				angle=0;
			};
			class quarry01
			{
				name="$STR_A3_quarry020";
				position[]={4379.1499,12594.37};
				type="NameLocal";
				radiusA=300;
				radiusB=100;
				angle=0;
			};
			class SavriIsland
			{
				name="$STR_A3_SavriIsland0";
				position[]={2370.95,11507.01};
				type="NameLocal";
				radiusA=300;
				radiusB=150;
				angle=0;
			};
			class CapDrakontas
			{
				name="$STR_A3_CapDrakontas0";
				position[]={2657.3201,11461.45};
				type="NameLocal";
				radiusA=400;
				radiusB=150;
				angle=0;
			};
			class FournosIsland
			{
				name="$STR_A3_FournosIsland0";
				position[]={2313.6699,9289.3096};
				type="NameLocal";
				radiusA=400;
				radiusB=150;
				angle=0;
			};
			class Athanos
			{
				name="$STR_A3_Athanos0";
				position[]={3571.22,10243.74};
				type="NameLocal";
				radiusA=300;
				radiusB=100;
				angle=0;
			};
			class Edoris
			{
				name="$STR_A3_Edoris0";
				position[]={6002.75,10511.37};
				type="NameLocal";
				radiusA=400;
				radiusB=150;
				angle=0;
			};
			class hill06
			{
				name="";
				position[]={4188.9902,10754.86};
				type="Hill";
				radiusA=200;
				radiusB=200;
				angle=0;
			};
			class hill07
			{
				name="";
				position[]={5320.3101,10316.03};
				type="Hill";
				radiusA=200;
				radiusB=200;
				angle=0;
			};
			class Tafos
			{
				name="$STR_A3_Tafos0";
				position[]={5588.8599,11749.69};
				type="Hill";
				radiusA=300;
				radiusB=100;
				angle=0;
			};
			class hill08
			{
				name="";
				position[]={6405.6899,12365.63};
				type="Hill";
				radiusA=200;
				radiusB=200;
				angle=0;
			};
			class AgiosPanagiotis
			{
				name="$STR_A3_AgiosPanagiotis0";
				position[]={6272.75,12173.9};
				type="NameLocal";
				radiusA=450;
				radiusB=150;
				angle=0;
			};
			class dump02
			{
				name="$STR_A3_dump0";
				position[]={5900.4702,12454.43};
				type="NameLocal";
				radiusA=200;
				radiusB=150;
				angle=0;
			};
			class Kavirida
			{
				name="$STR_A3_Kavirida0";
				position[]={7324.2402,12125.41};
				type="NameLocal";
				radiusA=300;
				radiusB=150;
				angle=0;
			};
			class Edessa
			{
				name="$STR_A3_Edessa0";
				position[]={7194.23,11043.95};
				type="NameLocal";
				radiusA=300;
				radiusB=130;
				angle=0;
			};
			class hill09
			{
				name="";
				position[]={7048.1001,14070.4};
				type="Hill";
				radiusA=200;
				radiusB=200;
				angle=0;
			};
			class AtsalisIsland
			{
				name="$STR_A3_AtsalisIsland0";
				position[]={8304.8301,25081.221};
				type="NameLocal";
				radiusA=400;
				radiusB=200;
				angle=0;
			};
			class Vikos
			{
				name="$STR_A3_Vikos0";
				position[]={11556.89,9417.0596};
				type="NameLocal";
				radiusA=250;
				radiusB=100;
				angle=0;
			};
			class Agela
			{
				name="$STR_A3_Agela0";
				position[]={9186.3398,8388.4404};
				type="Hill";
				radiusA=400;
				radiusB=150;
				angle=0;
			};
			class hill10
			{
				name="";
				position[]={10729.75,7615.71};
				type="Hill";
				radiusA=200;
				radiusB=200;
				angle=0;
			};
			class Skopos
			{
				name="$STR_A3_Skopos0";
				position[]={11668.95,7579.9102};
				type="Hill";
				radiusA=300;
				radiusB=150;
				angle=0;
			};
			class CapMakrinos
			{
				name="$STR_A3_CapMakrinos0";
				position[]={14225.87,6237.9902};
				type="NameLocal";
				radiusA=500;
				radiusB=200;
				angle=0;
			};
			class PyrgiIsland
			{
				name="$STR_A3_PyrgiIsland0";
				position[]={14489.94,5871.7002};
				type="NameLocal";
				radiusA=300;
				radiusB=150;
				angle=0;
			};
			class Eginio
			{
				name="$STR_A3_Eginio0";
				position[]={11549.17,7088.3901};
				type="NameLocal";
				radiusA=300;
				radiusB=200;
				angle=0;
			};
			class Sfaka
			{
				name="$STR_A3_Sfaka0";
				position[]={9213.9502,8079.0298};
				type="NameLocal";
				radiusA=300;
				radiusB=150;
				angle=0;
			};
			class AgiosKosmas
			{
				name="$STR_A3_AgiosKosmas0";
				position[]={8555.3203,7335.5098};
				type="NameLocal";
				radiusA=260.95999;
				radiusB=100;
				angle=0;
			};
			class MonisiIsland
			{
				name="$STR_A3_MonisiIsland0";
				position[]={7813.3599,7641.1899};
				type="NameLocal";
				radiusA=300;
				radiusB=100;
				angle=0;
			};
			class MakrynisiIsland
			{
				name="$STR_A3_MakrynisiIsland0";
				position[]={13471.94,12018.51};
				type="NameLocal";
				radiusA=400;
				radiusB=250;
				angle=0;
			};
			class SagonisiIsland
			{
				name="$STR_A3_SagonisiIsland0";
				position[]={14281.17,13469.27};
				type="NameLocal";
				radiusA=300;
				radiusB=100;
				angle=0;
			};
			class ChelonisiIsland
			{
				name="$STR_A3_ChelonisiIsland0";
				position[]={16636.539,13582.2};
				type="NameLocal";
				radiusA=400;
				radiusB=100;
				angle=0;
			};
			class Faronaki
			{
				name="$STR_A3_Faronaki0";
				position[]={14934.42,11079.48};
				type="NameLocal";
				radiusA=400;
				radiusB=150;
				angle=0;
			};
			class Ekali
			{
				name="$STR_A3_Ekali0";
				position[]={17059.711,9992.3203};
				type="NameVillage";
				radiusA=400;
				radiusB=150;
				angle=0;
			};
			class hill11
			{
				name="";
				position[]={16535.98,10787.18};
				type="Hill";
				radiusA=200;
				radiusB=200;
				angle=0;
			};
			class Didymos
			{
				name="$STR_A3_Didymos0";
				position[]={17768.881,9914.4102};
				type="Hill";
				radiusA=200;
				radiusB=100;
				angle=0;
			};
			class hill12
			{
				name="";
				position[]={18832.08,10222.03};
				type="Hill";
				radiusA=200;
				radiusB=200;
				angle=0;
			};
			class Aktinarki
			{
				name="$STR_A3_Aktinarki0";
				position[]={21449.939,10873.76};
				type="NameLocal";
				radiusA=400;
				radiusB=150;
				angle=0;
			};
			class Trachia
			{
				name="$STR_A3_Trachia0";
				position[]={22128.141,8453.9805};
				type="NameLocal";
				radiusA=200;
				radiusB=80;
				angle=0;
			};
			class AgiaPelagia
			{
				name="$STR_A3_AgiaPelagia0";
				position[]={22707.59,6930.5698};
				type="NameLocal";
				radiusA=350;
				radiusB=120;
				angle=0;
			};
			class Mazi
			{
				name="$STR_A3_Mazi0";
				position[]={21772.43,6014.5298};
				type="NameLocal";
				radiusA=150;
				radiusB=100;
				angle=0;
			};
			class Livadi
			{
				name="$STR_A3_Livadi0";
				position[]={18410.51,8098.2998};
				type="NameLocal";
				radiusA=150;
				radiusB=60;
				angle=0;
			};
			class CapKategidis
			{
				name="$STR_A3_CapKategidis0";
				position[]={22792,13638.38};
				type="NameLocal";
				radiusA=500;
				radiusB=150;
				angle=0;
			};
			class SufrClub
			{
				name="$STR_A3_SufrClub0";
				position[]={21339.369,10434.01};
				type="NameLocal";
				radiusA=500;
				radiusB=200;
				angle=0;
			};
			class Limni
			{
				name="$STR_A3_Limni0";
				position[]={20920.789,14775.38};
				type="NameLocal";
				radiusA=500;
				radiusB=200;
				angle=0;
			};
			class Ochrolimni
			{
				name="$STR_A3_Ochrolimni0";
				position[]={23650.08,16227.26};
				type="NameLocal";
				radiusA=400;
				radiusB=150;
				angle=0;
			};
			class CapThelos
			{
				name="$STR_A3_CapThelos0";
				position[]={24067.6,15560.25};
				type="NameLocal";
				radiusA=500;
				radiusB=250;
				angle=0;
			};
			class Zeloran
			{
				name="$STR_A3_Zeloran0";
				position[]={17043.461,19592.15};
				type="NameLocal";
				radiusA=150;
				radiusB=60;
				angle=0;
			};
			class quarry02
			{
				name="$STR_A3_quarry020";
				position[]={17060.539,11339.1};
				type="NameLocal";
				radiusA=260.95999;
				radiusB=198.05;
				angle=0;
			};
			class storage01
			{
				name="$STR_A3_storage010";
				position[]={18260.609,15551.22};
				type="NameLocal";
				radiusA=300;
				radiusB=100;
				angle=0;
			};
			class quarry03
			{
				name="$STR_A3_quarry020";
				position[]={19566.391,15617.26};
				type="NameLocal";
				radiusA=300;
				radiusB=120;
				angle=0;
			};
			class Rodopoli
			{
				name="$STR_A3_Rodopoli0";
				position[]={18753.41,16597.119};
				type="NameCity";
				radiusA=500;
				radiusB=300;
				angle=0;
			};
			class CapZefyris
			{
				name="$STR_A3_CapZefyris0";
				position[]={18049.34,19186.59};
				type="NameLocal";
				radiusA=450;
				radiusB=150;
				angle=0;
			};
			class AgiosGeorgios
			{
				name="$STR_A3_AgiosGeorgios0";
				position[]={20296.27,18635.09};
				type="NameLocal";
				radiusA=300;
				radiusB=100;
				angle=0;
			};
			class Almyra
			{
				name="$STR_A3_Almyra0";
				position[]={23495.561,18392.6};
				type="NameLocal";
				radiusA=400;
				radiusB=250;
				angle=0;
			};
			class Iraklia
			{
				name="$STR_A3_Iraklia0";
				position[]={21628.32,21274.939};
				type="NameLocal";
				radiusA=400;
				radiusB=200;
				angle=0;
			};
			class military04
			{
				name="$STR_A3_military010";
				position[]={23533.16,21107.99};
				type="NameLocal";
				radiusA=300;
				radiusB=120;
				angle=0;
			};
			class Nidasos
			{
				name="$STR_A3_Nidasos0";
				position[]={23662.9,21796.08};
				type="NameLocal";
				radiusA=300;
				radiusB=100;
				angle=0;
			};
			class military05
			{
				name="$STR_A3_military010";
				position[]={25350.641,21790.859};
				type="NameLocal";
				radiusA=400;
				radiusB=100;
				angle=0;
			};
			class Skiptro
			{
				name="$STR_A3_Skiptro0";
				position[]={24833.859,21802.1};
				type="Hill";
				radiusA=250;
				radiusB=100;
				angle=0;
			};
			class PowerPlant03
			{
				name="$STR_A3_PowerPlant020";
				position[]={25462.631,20357.66};
				type="NameLocal";
				radiusA=500;
				radiusB=200;
				angle=0;
			};
			class Gatolia
			{
				name="$STR_A3_Gatolia0";
				position[]={26723.01,21230.33};
				type="NameLocal";
				radiusA=220;
				radiusB=100;
				angle=0;
			};
			class Polemistia
			{
				name="$STR_A3_Polemistia0";
				position[]={27998.57,23775.75};
				type="NameLocal";
				radiusA=400;
				radiusB=200;
				angle=0;
			};
			class MolosAirfield
			{
				name="$STR_A3_MolosAirfield0";
				position[]={26939.82,24743.811};
				type="NameLocal";
				radiusA=400;
				radiusB=100;
				angle=0;
			};
			class Limnichori
			{
				name="$STR_A3_Limnichori0";
				position[]={25703.65,23561.58};
				type="NameLocal";
				radiusA=400;
				radiusB=100;
				angle=0;
			};
			class CapStrigla
			{
				name="$STR_A3_CapStrigla0";
				position[]={28059.23,25626.369};
				type="NameLocal";
				radiusA=500;
				radiusB=150;
				angle=0;
			};
			class Sideras
			{
				name="$STR_A3_Sideras0";
				position[]={23274.539,24198.301};
				type="NameLocal";
				radiusA=400;
				radiusB=150;
				angle=0;
			};
			class AgiosAndreas
			{
				name="$STR_A3_AgiosAndreas0";
				position[]={23682.881,24239.26};
				type="Hill";
				radiusA=400;
				radiusB=100;
				angle=0;
			};
			class NeriBay
			{
				name="$STR_A3_NeriBay0";
				position[]={3166,11234.17};
				type="NameMarine";
				radiusA=400;
				radiusB=200;
				angle=0;
			};
			class KavalaBay
			{
				name="$STR_A3_KavalaBay0";
				position[]={3004.5801,13675.91};
				type="NameMarine";
				radiusA=400;
				radiusB=150;
				angle=0;
			};
			class NegadesBay
			{
				name="$STR_A3_NegadesBay0";
				position[]={3458.04,16859.631};
				type="NameMarine";
				radiusA=400;
				radiusB=150;
				angle=0;
			};
			class PanochoriBay
			{
				name="$STR_A3_PanochoriBay0";
				position[]={4005.29,9908.5898};
				type="NameMarine";
				radiusA=500;
				radiusB=150;
				angle=0;
			};
			class IremiBay
			{
				name="$STR_A3_IremiBay0";
				position[]={5117.6299,9761.5};
				type="NameMarine";
				radiusA=400;
				radiusB=150;
				angle=0;
			};
			class EdessaBay
			{
				name="$STR_A3_EdessaBay0";
				position[]={6862.3301,10614.14};
				type="NameMarine";
				radiusA=500;
				radiusB=150;
				angle=0;
			};
			class ZarosBay
			{
				name="$STR_A3_ZarosBay0";
				position[]={9210.6602,10250.45};
				type="NameMarine";
				radiusA=500;
				radiusB=150;
				angle=0;
			};
			class NaftiaBay
			{
				name="$STR_A3_NaftiaBay0";
				position[]={12157.59,6376.2402};
				type="NameMarine";
				radiusA=500;
				radiusB=150;
				angle=0;
			};
			class MelaneraBay
			{
				name="$STR_A3_MelaneraBay0";
				position[]={11226.19,10574.7};
				type="NameMarine";
				radiusA=500;
				radiusB=150;
				angle=0;
			};
			class KatalakiBay
			{
				name="$STR_A3_KatalakiBay0";
				position[]={12269.85,13659.34};
				type="NameMarine";
				radiusA=500;
				radiusB=150;
				angle=0;
			};
			class PyrgosGulf
			{
				name="$STR_A3_PyrgosGulf0";
				position[]={15139.24,14229.94};
				type="NameMarine";
				radiusA=600;
				radiusB=200;
				angle=0;
			};
			class MaziBay
			{
				name="$STR_A3_MaziBay0";
				position[]={22181.439,6154.23};
				type="NameMarine";
				radiusA=500;
				radiusB=150;
				angle=0;
			};
			class ChalkeiaBay
			{
				name="$STR_A3_ChalkeiaBay0";
				position[]={21859.609,12594.88};
				type="NameMarine";
				radiusA=500;
				radiusB=150;
				angle=0;
			};
			class ThelosBay
			{
				name="$STR_A3_ThelosBay0";
				position[]={22979.689,14938.95};
				type="NameMarine";
				radiusA=500;
				radiusB=150;
				angle=0;
			};
			class MolosBay
			{
				name="$STR_A3_MolosBay0";
				position[]={27826.85,24244.449};
				type="NameMarine";
				radiusA=500;
				radiusB=150;
				angle=0;
			};
			class GalanaNeraBay
			{
				name="$STR_A3_GalanaNeraBay0";
				position[]={24924.08,24206.551};
				type="NameMarine";
				radiusA=690;
				radiusB=150;
				angle=0;
			};
			class PefkasBay
			{
				name="$STR_A3_PefkasBay0";
				position[]={21204.699,20464.641};
				type="NameMarine";
				radiusA=500;
				radiusB=150;
				angle=0;
			};
			class KalitheaBay
			{
				name="$STR_A3_KalitheaBay0";
				position[]={18160.961,18676.631};
				type="NameMarine";
				radiusA=500;
				radiusB=150;
				angle=0;
			};
			class TonosBay
			{
				name="$STR_A3_TonosBay0";
				position[]={11988.3,22985.67};
				type="NameMarine";
				radiusA=260.95999;
				radiusB=198.05;
				angle=0;
			};
			class AmmolofiBay
			{
				name="$STR_A3_AmmolofiBay0";
				position[]={9525.4404,22649.01};
				type="NameMarine";
				radiusA=500;
				radiusB=150;
				angle=0;
			};
			class Mine01
			{
				name="$STR_A3_Mine010";
				position[]={18435.119,14301.76};
				type="NameLocal";
				radiusA=200;
				radiusB=100;
				angle=0;
			};
		};
	};
	class Stratis: CAWorld
	{
		author = "Bohemia Interactive";
		description = "Stratis Survival Map";
		pictureMap = "Extremo_Assets\texture\mod\logo.paa";
		pictureShot = "Extremo_Assets\texture\mod\logo.paa";
		previewVideo="Extremo_Assets\video\menu.ogv";
		loadingTexts[] = {"Hardcore Survival Server"};
	};
	class Enoch: CAWorld
	{//Livonia
		author = "Bohemia Interactive";
		description = "Livonia Survival Map";
		pictureMap = "Extremo_Assets\texture\mod\logo.paa";
		pictureShot = "Extremo_Assets\texture\mod\logo.paa";
		//previewVideo="Extremo_Assets\video\menu.ogv";
		loadingTexts[] = {"Hardcore Survival Server"};
		cutscenes[]= {"Enoch_intro1"};
	};
	class Livonia: Enoch
	{//Livonia
		description = "Livonia Survival Map (Opened)";
		access = 3;//allow non dlc owners (not fully sure but altis is 3 and Enoch was 0)
		appId = 639600;//allow non dlc owners (malden appId, checks if appid is owned!)
		worldId = 909;//allow non dlc owners (not fully sure made a random Id)
	};
	class Malden: CAWorld
	{
		author = "Bohemia Interactive";
		description = "Malden Survival Map";
		pictureMap = "Extremo_Assets\texture\mod\logo.paa";
		pictureShot = "Extremo_Assets\texture\mod\logo.paa";
		previewVideo="Extremo_Assets\video\menu.ogv";
		loadingTexts[] = {"Hardcore Survival Server"};
	};
	class Tanoa: CAWorld
	{
		author = "Bohemia Interactive";
		description = "Tanoa Survival Map";
		pictureMap = "Extremo_Assets\texture\mod\logo.paa";
		pictureShot = "Extremo_Assets\texture\mod\logo.paa";
		previewVideo="Extremo_Assets\video\menu.ogv";
		loadingTexts[] = {"Hardcore Survival Server"};
		cutscenes[]= {"Tanoa_intro1"};
		worldName="A3\Map_Tanoabuka\Tanoa.wrp";
		newRoadsShape="A3\Map_Tanoabuka\data\roads\roads.shp";
		startTime="12:00";
		startDate="1/1/2021"
	};
	class VR: CAWorld
	{
		author = "Bohemia Interactive";
		description = "VR Survival Map";
		pictureMap = "Extremo_Assets\texture\mod\logo.paa";
		pictureShot = "Extremo_Assets\texture\mod\logo.paa";
		previewVideo="Extremo_Assets\video\menu.ogv";
		loadingTexts[] = {"Hardcore Survival Server"};
		cutscenes[]= {"ExtremoIntro"};
	}; 
	
	initWorld="Livonia";
	demoWorld="VR";
	groupNameFormat="Inmate %ExtremoAlphabet-%ExtremoNumbers";
	class ExtremoAlphabet
	{
		class A
		{
			name="A";
		};
		class B
		{
			name="B";
		};
		class C
		{
			name="C";
		};
		class D
		{
			name="D";
		};
		class E
		{
			name="E";
		};
		class F
		{
			name="F";
		};
		class G
		{
			name="G";
		};
		class H
		{
			name="H";
		};
		class I
		{
			name="I";
		};
		class J
		{
			name="J";
		};
		class K
		{
			name="K";
		};
		class L
		{
			name="L";
		};
		class M
		{
			name="M";
		};
		class N
		{
			name="N";
		};
		class O
		{
			name="O";
		};
		class P
		{
			name="P";
		};
		class Q
		{
			name="Q";
		};
		class R
		{
			name="R";
		};
		class S
		{
			name="S";
		};
		class T
		{
			name="T";
		};
		class U
		{
			name="U";
		};
		class V
		{
			name="V";
		};
		class W
		{
			name="W";
		};
		class X
		{
			name="X";
		};
		class Y
		{
			name="Y";
		};
		class Z
		{
			name="Z";
		};
	};
	class ExtremoNumbers
	{
		class Number1
		{
			name="1";
		};
		class Number2
		{
			name="2";
		};
		class Number3
		{
			name="3";
		};
		class Number4
		{
			name="4";
		};
		class Number5
		{
			name="5";
		};
		class Number6
		{
			name="6";
		};
		class Number7
		{
			name="7";
		};
		class Number8
		{
			name="8";
		};
		class Number9
		{
			name="9";
		};
	};
};

class CfgWorldList
{
	class Livonia {};
};

//--- Missions
class CfgMissions
{
	class Cutscenes
	{
		class ExtremoIntro
		{
			directory="Extremo_Assets\mission\ExtremoIntro.VR";
		};
	};
}; 

//---  Mission Difficultys
class CfgDifficultyPresets
{
	class Veteran;
	defaultPreset="ExtremoRegular";
	class ExtremoRegular: Veteran
	{
		BleedingRate=0.00050000002;
		displayName="Regular Extremo";
		class Options
		{
			reducedDamage=0;
			groupIndicators=0;
			friendlyTags=0;
			enemyTags=0;
			detectedMines=0;
			commands=0;
			waypoints=0;
			weaponInfo=0;
			stanceIndicator=0;
			staminaBar=0;
			weaponCrosshair=1;
			visionAid=0;
			thirdPersonView=1;
			cameraShake=1;
			scoreTable=0;
			deathMessages=0;
			vonID=0;
			squadRadar=0;
			mapContent=0;
			autoReport=0;
			multipleSaves=0;
		};
	};
	class ExtremoDevHappyfeet: ExtremoRegular
	{ 
		displayName="Happyfeet | Development Server"; 
	};
	class ExtremoDevNikko: ExtremoRegular
	{ 
		displayName="Nikko | Development Server";  
	};
	class ExtremoHardcore: Veteran
	{
		BleedingRate=0.0049999999;
		displayName="Hardcore Extremo";
		class Options
		{
			reducedDamage=0;
			groupIndicators=0;
			friendlyTags=0;
			enemyTags=0;
			detectedMines=0;
			commands=0;
			waypoints=0;
			weaponInfo=0;
			stanceIndicator=0;
			staminaBar=0;
			weaponCrosshair=0;
			visionAid=0;
			thirdPersonView=0;
			cameraShake=1;
			scoreTable=0;
			deathMessages=0;
			vonID=0;
			squadRadar=0;
			mapContent=0;
			autoReport=0;
			multipleSaves=0;
		};
	};
};

//--- Mission Respawn Templates

class CfgRespawnTemplates
{
	class Extremo
	{
		isCall=1;
		onPlayerKilled="Extremo_fnc_event_playerKilled";
		onPlayerRespawn="Extremo_fnc_event_playerRespawned";
		respawnDelay=30;
		respawnOnStart=0;
		respawnButton=1;
        bleedoutDuration = 100;	// 0 - 1000
        hideBodyOnRespawn = false;
        deleteBodyOnRespawn = false;
        class RespawnTimers 
        {
            Executed = 15;
            Bleedout = 10;
            Suicide  = 20;
            Revived  = 3;
        };
	};
};

//--- Eden editor
class ctrlMenuStrip;
class Display3DEN
{
	class Controls
	{
		class MenuStrip: ctrlMenuStrip
		{
			class Items
			{
				class Tools
				{
					items[]+=
					{
						"Extremo_ToolFolder"
					};
				};
				class Extremo_ToolFolder
				{
					text="Extremo Tools";
					picture="\Extremo_assets\texture\mod\icon.paa";
					items[]=
					{
						"Extremo_ObjectFolder",
						"Extremo_MarkerFolder",
						"Extremo_SpawnFolder",
						"Extremo_LootFolder"
					};
				};
				class Extremo_ObjectFolder
				{
					text="Objects";
					items[]=
					{
						"Extremo_GenerateObjectCode"
					};
				};
				class Extremo_GenerateObjectCode
				{
					text="Generate Code for Objects";
					action="[] execVM '\Extremo_assets\script\EDEN\GenerateObjects.sqf';";
				};
				class Extremo_MarkerFolder
				{
					text="Markers";
					items[]=
					{
						"Extremo_GenerateMarkerCode"
					};
				};
				class Extremo_GenerateMarkerCode
				{
					text="Generate Code for Markers";
					action="[] execVM '\Extremo_assets\script\EDEN\GenerateMarkers.sqf';";
				};
				class Extremo_SpawnFolder
				{
					text="Spawnpoints";
					items[]=
					{
						"Extremo_CreateSpawnGroup",
						"Extremo_GenerateSpawnCode"
					};
				};
				class Extremo_CreateSpawnGroup
				{
					text="Create Spawn Group";
					action="[] execVM '\Extremo_assets\script\EDEN\CreateExtremoSpawnGroup.sqf';";
				};
				class Extremo_GenerateSpawnCode
				{
					text="Generate Code for Spawnpoints";
					action="[] execVM '\Extremo_assets\script\EDEN\GenerateSpawns.sqf';";
				};
				class Extremo_LootFolder
				{
					text="Loot";
					items[]=
					{
						"Extremo_SelectTarget",
						"Extremo_ToggleLootPreview",
						"Extremo_GenerateLootCode",
						"Extremo_ClearLoot"
					};
				};
				class Extremo_SelectTarget
				{
					text="Select Target Object";
					action="[0] execVM '\Extremo_assets\script\EDEN\LootManager.sqf';";
				};
				class Extremo_ToggleLootPreview
				{
					text="Toggle Loot Preview";
					action="[1] execVM '\Extremo_assets\script\EDEN\LootManager.sqf';";
				};
				class Extremo_GenerateLootCode
				{
					text="Generate Code for Loot";
					action="[2] execVM '\Extremo_assets\script\EDEN\LootManager.sqf';";
				};
				class Extremo_ClearLoot
				{
					text="Clear Loot Spheres";
					action="[3] execVM '\Extremo_assets\script\EDEN\LootManager.sqf';";
				};
			};
		};
	};
};

//--- Sounds
class CfgSounds
{
	class SndExtremoTwinkleTwisterCharge01
	{
		name="";
		sound[]=
		{
			"Extremo_Assets\sound\twinkle_twister_charge_01",
			1,
			1
		};
		titles[]={};
	};
	class SndExtremoTwinkleTwisterCharge02
	{
		name="";
		sound[]=
		{
			"Extremo_Assets\sound\twinkle_twister_charge_02",
			1,
			1
		};
		titles[]={};
	};
	class SndExtremoTwinkleTwisterCharge03
	{
		name="";
		sound[]=
		{
			"Extremo_Assets\sound\twinkle_twister_charge_03",
			1,
			1
		};
		titles[]={};
	};
	class SndExtremoTwinkleTwisterChargeDone01
	{
		name="";
		sound[]=
		{
			"Extremo_Assets\sound\twinkle_twister_charge_done_01",
			1,
			1
		};
		titles[]={};
	};
	class SndExtremoTwinkleTwisterChargeDone02
	{
		name="";
		sound[]=
		{
			"Extremo_Assets\sound\twinkle_twister_charge_done_02",
			1,
			1
		};
		titles[]={};
	};
	class SndExtremoTwinkleTwisterChargeDone03
	{
		name="";
		sound[]=
		{
			"Extremo_Assets\sound\twinkle_twister_charge_done_03",
			1,
			1
		};
		titles[]={};
	};
	class SndExtremoTwinkleTwisterSuccess
	{
		name="";
		sound[]=
		{
			"Extremo_Assets\sound\twinkle_twister_success",
			1,
			1
		};
		titles[]={};
	};
	class SndExtremoTwinkleTwisterFail
	{
		name="";
		sound[]=
		{
			"Extremo_Assets\sound\twinkle_twister_fail",
			1,
			1
		};
		titles[]={};
	};
	class SndXM8PowerOn
	{
		name="";
		sound[]=
		{
			"Extremo_Assets\sound\xm8_power_on",
			1,
			1
		};
		titles[]={};
	};
	class SndXM8PowerOff
	{
		name="";
		sound[]=
		{
			"Extremo_Assets\sound\xm8_power_off",
			1,
			1
		};
		titles[]={};
	};
	class SndExtremoHeartbeatFast
	{
		name="";
		sound[]=
		{
			"Extremo_Assets\sound\heartbeat_fast.ogg",
			1,
			1
		};
		titles[]={};
	};
	class SndExtremoHeartbeatSlow
	{
		name="";
		sound[]=
		{
			"Extremo_Assets\sound\heartbeat_slow.ogg",
			1,
			1
		};
		titles[]={};
	};
	class SndExtremoHeartbeatSlowSingle
	{
		name="";
		sound[]=
		{
			"Extremo_Assets\sound\heartbeat_slow_single.ogg",
			1,
			1
		};
		titles[]={};
	};
	class SndExtremoHeartbeatStopping
	{
		name="";
		sound[]=
		{
			"Extremo_Assets\sound\heartbeat_stopping.ogg",
			1,
			1
		};
		titles[]={};
	};
	class SndExtremoHeartbeatEating01
	{
		name="";
		sound[]=
		{
			"Extremo_Assets\sound\eating01.ogg",
			1,
			1
		};
		titles[]={};
	};
	class SndExtremoHeartbeatEating02
	{
		name="";
		sound[]=
		{
			"Extremo_Assets\sound\eating02.ogg",
			1,
			1
		};
		titles[]={};
	};
	class SndExtremoHeartbeatDrinking01
	{
		name="";
		sound[]=
		{
			"Extremo_Assets\sound\drinking01.ogg",
			1,
			1
		};
		titles[]={};
	};
	class BaDumTss
	{
		name="";
		sound[]=
		{
			"Extremo_Assets\sound\ba_dum_tss",
			10,
			1
		};
		titles[]={};
	};
	class ExtremoIntro01
	{
		name="";
		sound[]=
		{
			"\a3\dubbing_f_bootcamp\BOOT_m02\15_Introduction\boot_m02_15_introduction_ADA_0.ogg",
			1,
			1
		};
		titles[]={};
	};
	class ExtremoIntro02
	{
		name="";
		sound[]=
		{
			"\a3\dubbing_f_bootcamp\BOOT_m02\15_Introduction\boot_m02_15_introduction_ADA_1.ogg",
			1,
			1
		};
		titles[]={};
	};
	class ExtremoIntro03
	{
		name="";
		sound[]=
		{
			"a3\dubbing_f_bootcamp\BOOT_m02\d05_AAF_Anger\boot_m02_d05_aaf_anger_ADA_0.ogg",
			1,
			1
		};
		titles[]={};
	};
	class ExtremoIntro04
	{
		name="";
		sound[]=
		{
			"a3\dubbing_f_bootcamp\BOOT_m02\d05_AAF_Anger\boot_m02_d05_aaf_anger_ADA_1.ogg",
			1,
			1
		};
		titles[]={};
	};
	class ExtremoIntro05
	{
		name="";
		sound[]=
		{
			"a3\dubbing_f_bootcamp\BOOT_m02\d05_AAF_Anger\boot_m02_15_introduction_ADA_2.ogg",
			1,
			1
		};
		titles[]={};
	};
	class ExtremoIntro06
	{
		name="";
		sound[]=
		{
			"\a3\dubbing_f_bootcamp\BOOT_m03\20_Lesson\boot_m03_20_lesson_ADA_0.ogg",
			1,
			1
		};
		titles[]={};
	};
	class ExtremoIntro07
	{
		name="";
		sound[]=
		{
			"a3\dubbing_f_bootcamp\BOOT_m03\75_Orders\boot_m03_75_orders_ADA_0.ogg",
			1,
			1
		};
		titles[]={};
	};
	class ExtremoIntro08
	{
		name="";
		sound[]=
		{
			"\a3\dubbing_f_bootcamp\BOOT_m03\80_Get_In\boot_m03_80_get_in_ADA_0.ogg",
			1,
			1
		};
		titles[]={};
	};
	class ExtremoIntro09
	{
		name="";
		sound[]=
		{
			"\a3\dubbing_f_bootcamp\BOOT_m04\65_Regroup\boot_m04_65_regroup_ADA_0.ogg",
			1,
			1
		};
		titles[]={};
	};
	class ExtremoIntro10
	{
		name="";
		sound[]=
		{
			"\a3\sounds_f\characters\movements\bodyfallsbodyfall_concrete_3.wss",
			1,
			1
		};
		titles[]={};
	};
	class Extremo_Sound_GeigerCounter_Low01
	{
		name="Geiger Counter";
		sound[]=
		{
			"\Extremo_Assets\sound\Extremo_GeigerCounter_Low01.wss",
			0.5,
			1
		};
		titles[]={};
	};
	class Extremo_Sound_GeigerCounter_Low02
	{
		name="Geiger Counter";
		sound[]=
		{
			"\Extremo_Assets\sound\Extremo_GeigerCounter_Low02.wss",
			0.5,
			1
		};
		titles[]={};
	};
	class Extremo_Sound_GeigerCounter_Low03
	{
		name="Geiger Counter";
		sound[]=
		{
			"\Extremo_Assets\sound\Extremo_GeigerCounter_Low03.wss",
			0.5,
			1
		};
		titles[]={};
	};
	class Extremo_Sound_GeigerCounter_Medium01
	{
		name="Geiger Counter";
		sound[]=
		{
			"\Extremo_Assets\sound\Extremo_GeigerCounter_Medium01.wss",
			0.5,
			1
		};
		titles[]={};
	};
	class Extremo_Sound_GeigerCounter_Medium02
	{
		name="Geiger Counter";
		sound[]=
		{
			"\Extremo_Assets\sound\Extremo_GeigerCounter_Medium02.wss",
			0.5,
			1
		};
		titles[]={};
	};
	class Extremo_Sound_GeigerCounter_Medium03
	{
		name="Geiger Counter";
		sound[]=
		{
			"\Extremo_Assets\sound\Extremo_GeigerCounter_Medium03.wss",
			0.5,
			1
		};
		titles[]={};
	};
	class Extremo_Sound_GeigerCounter_High01
	{
		name="Geiger Counter";
		sound[]=
		{
			"\Extremo_Assets\sound\Extremo_GeigerCounter_High01.wss",
			0.5,
			1
		};
		titles[]={};
	};
	class Extremo_Sound_GeigerCounter_High02
	{
		name="Geiger Counter";
		sound[]=
		{
			"\Extremo_Assets\sound\Extremo_GeigerCounter_High02.wss",
			0.5,
			1
		};
		titles[]={};
	};
	class Extremo_Sound_GeigerCounter_High03
	{
		name="Geiger Counter";
		sound[]=
		{
			"\Extremo_Assets\sound\Extremo_GeigerCounter_High03.wss",
			0.5,
			1
		};
		titles[]={};
	};
	class Extremo_Sound_GasMaskBreathing01
	{
		name="Gas Mask Breathing";
		sound[]=
		{
			"\a3\sounds_f\characters\human-sfx\diver-breath-1.wss",
			0.25,
			1
		};
		titles[]={};
	};
	class Extremo_Sound_GasMaskBreathing02
	{
		name="Gas Mask Breathing";
		sound[]=
		{
			"\a3\sounds_f\characters\human-sfx\diver-breath-3.wss",
			0.25,
			1
		};
		titles[]={};
	};
};

//--- Actions
class CfgActions
{
	class None;
	class OpenBag: None
	{
		show=0;
	};
	class FireInflame: None
	{
		show=0;
	};
	class FirePutDown: None
	{
		show=0;
	};
	class Heal: None
	{
		show=0;
	};
	class HealSoldier: None
	{
		show=0;
	};
	class FirstAid: None
	{
		show=0;
	};
	class ListRightVehicleDisplay: None
	{
		show=0;
	};
	class ListLeftVehicleDisplay: None
	{
		show=0;
	};
	class ListPrevRightVehicleDisplay: None
	{
		show=0;
	};
	class ListPrevLeftVehicleDisplay: None
	{
		show=0;
	};
	class CloseRightVehicleDisplay: None
	{
		show=0;
	};
	class CloseLeftVehicleDisplay: None
	{
		show=0;
	};
	class NextModeRightVehicleDisplay: None
	{
		show=0;
	};
	class NextModeLeftVehicleDisplay: None
	{
		show=0;
	};
	class UseContainerMagazine: None
	{
		show=0;
	};
	class TakeBag: None
	{
		show=0;
	};
	class TakeItem: None
	{
		show=0;
	};
	class TakeWeapon: None
	{
		show=0;
	};
	class TakeMagazine: None
	{
		show=0;
	};
	class TakeItemFromBody: None
	{
		show=0;
	};
	class TakeWeaponFromBody: None
	{
		show=0;
	};
	class TakeBackpackFromBody: None
	{
		show=0;
	};
	class TakeMine: None
	{
		show=0;
	};
};

#include "hpp\ammo.hpp"
#include "hpp\animations.hpp"
#include "hpp\construction.hpp"
#include "hpp\selections.hpp"

class CfgFactionClasses
{
	class Player_Faction
    {
        displayname = "Survialist"; //Shows in menu
        icon = "Extremo_Assets\texture\mod\icon.paa"; //Logo in menu
        priority = 10; 
        side = 2;
    };
	class Trader_Faction
    {
        displayname = "Trader"; //Shows in menu
        icon = "Extremo_Assets\texture\mod\icon.paa"; //Logo in menu
        priority = 9; 
        side = 2;
    };
    class Zombie_Faction
    {
        displayname = "The Walking Dead"; //Shows in menu
        icon = "Extremo_Assets\texture\mod\icon.paa"; //Logo in menu
        priority = 8; 
        side = 0;
    };
};

//--- Loot System
class CfgExtremoLoot 
{
	//--- Chance in % to spawn loot in a building 
	spawnChancePerBuilding = 60;

	//--- Chance in % to spawn loot per loot spot per building. (100% = Super high loot) | (50%  = Normal loot spawn rates) | (20%  = You get the point)
	spawnChancePerPosition = 75;

	//--- Max ammount of loot spots zones per building. (1 - 3 = Normal loot spawn rates) | (3 - 6 = More loot spots) | (9+ = Even more loot spots)
	maximumNumberOfLootSpotsPerBuilding = 6;

	//--- Max ammount of items in a loot spots zones per building.
	maximumNumberOfItemsPerLootSpot = 6;

	//--- Radius in meter to spawn loot AROUND each player. Do NOT touch this value if you dont know what you do. The higher the number, the higher the drop rates, the easier your server will lag. (50m  = Minimum) | (200m = Maximum)
	spawnRadius = 100;

	//--- Defines the radius around trader cities where the system should not spawn loot. Set this to 0 if you want to have loot spawning in trader citites, ugh.
	minimumDistanceToTraderZones = 250;
	
	//--- Defines the radius around territories where no loot spawns.This does not regard the actual size of a territory. So do not set this to a lower value than the maximum radius of a territory, which is 150m by default.
	minimumDistanceToTerritories = 150;

	class Tables
	{
		class CivillianLowerClass
		{
			count = 117;
			half = 7310.1552180397;
			halfIndex = 58;
			sum = 10000;
			items[] = 
			{
				{552.486187845304, "Extremo_Item_Can_Empty"}, // 5.52%
				{1104.97237569061, "Extremo_Item_ToiletPaper"}, // 5.52%
				{1657.45856353591, "Extremo_Item_PlasticBottleEmpty"}, // 5.52% 
				{1988.95027624309, "ItemWatch"}, // 1.66%
				{2154.69613259669, "Extremo_Item_PlasticBottleDirtyWater"}, // 1.66%
				{2294.17625215107, "Extremo_Item_InstantCoffee"}, // 1.39%
				{2432.2977991124, "FlareRed_F"}, // 1.38%
				{2570.41934607373, "FlareGreen_F"}, // 1.38%
				{2708.54089303505, "Chemlight_yellow"}, // 1.38%
				{2846.66243999638, "Chemlight_red"}, // 1.38%
				{2984.7839869577, "Chemlight_green"}, // 1.38%
				{3122.90553391903, "Chemlight_blue"}, // 1.38%
				{3261.02708088036, "V_Rangemaster_belt"}, // 1.38%
				{3399.14862784168, "FlareWhite_F"}, // 1.38%
				{3537.27017480301, "FlareYellow_F"}, // 1.38%
				{3651.39027262024, "Extremo_Item_Raisins"}, // 1.14%
				{3765.51037043746, "Extremo_Item_Moobar"}, // 1.14%
				{3876.00760800652, "Binocular"}, // 1.10%
				{3986.50484557559, "Extremo_Item_MountainDupe"}, // 1.10%
				{4097.00208314465, "ItemGPS"}, // 1.10%
				{4198.44217009329, "Extremo_Item_SeedAstics"}, // 1.01%
				{4296.90505505582, "U_C_Poor_1"}, // 0.98%
				{4395.36794001835, "U_C_Poor_2"}, // 0.98%
				{4493.83082498088, "U_C_Poor_shorts_1"}, // 0.98%
				{4592.29370994341, "U_Rangemaster"}, // 0.98%
				{4690.75659490594, "U_C_HunterBody_grn"}, // 0.98%
				{4789.21947986847, "U_C_Scientist"}, // 0.98%
				{4887.682364831, "U_C_Journalist"}, // 0.98%
				{4981.6050167647, "Extremo_Item_EnergyDrink"}, // 0.94%
				{5074.42269632271, "hgun_P07_F"}, // 0.93%
				{5163.18277240278, "Extremo_Item_Noodles"}, // 0.89%
				{5251.94284848284, "Extremo_Item_CatFood"}, // 0.89%
				{5340.70292456291, "Extremo_Item_Cheathas"}, // 0.89%
				{5429.46300064297, "Extremo_Item_ChristmasTinner"}, // 0.89%
				{5518.22307672304, "Extremo_Item_SausageGravy"}, // 0.89%
				{5606.9831528031, "Extremo_Item_Dogfood"}, // 0.89%
				{5695.74322888317, "Extremo_Item_Surstromming"}, // 0.89%
				{5784.50330496323, "Extremo_Item_BeefParts"}, // 0.89%
				{5873.2633810433, "Extremo_Item_BBQSandwich"}, // 0.89%
				{5961.66117109855, "hgun_Rook40_F"}, // 0.88%
				{6050.0589611538, "hgun_ACPC2_F"}, // 0.88%
				{6132.93188933059, "30Rnd_45ACP_Mag_SMG_01"}, // 0.83%
				{6215.80481750739, "30Rnd_45ACP_Mag_SMG_01_Tracer_Green"}, // 0.83%
				{6293.15288380573, "Extremo_Item_Beer"}, // 0.77%
				{6369.73512766548, "U_C_Poloshirt_blue"}, // 0.77%
				{6446.31737152522, "U_C_Poloshirt_burgundy"}, // 0.77%
				{6522.89961538497, "U_C_Poloshirt_stripped"}, // 0.77%
				{6599.48185924471, "U_C_Poloshirt_tricolour"}, // 0.77%
				{6676.06410310446, "U_C_Poloshirt_salmon"}, // 0.77%
				{6752.14416831594, "Extremo_Item_GloriousKnakworst"}, // 0.76%
				{6827.2822898629, "SMG_01_F"}, // 0.75%
				{6900.21046665848, "hgun_PDW2000_F"}, // 0.73%
				{6973.13864345406, "SMG_02_F"}, // 0.73%
				{7042.19941693472, "V_Press_F"}, // 0.69%
				{7111.26019041539, "V_TacVest_blk_POLICE"}, // 0.69%
				{7177.55853295682, "H_Hat_grey"}, // 0.66%
				{7243.85687549826, "H_Hat_tan"}, // 0.66%
				{7310.1552180397, "H_Hat_checker"}, // 0.66%
				{7376.45356058113, "H_StrawHat_dark"}, // 0.66%
				{7442.75190312257, "H_Cap_press"}, // 0.66%
				{7509.05024566401, "H_Cap_red"}, // 0.66%
				{7575.34858820544, "Extremo_Item_PlasticBottleFreshWater"}, // 0.66%
				{7641.64693074688, "H_StrawHat"}, // 0.66%
				{7707.94527328832, "H_Hat_brown"}, // 0.66%
				{7774.24361582976, "H_Hat_blue"}, // 0.66%
				{7840.54195837119, "H_Cap_tan"}, // 0.66%
				{7903.9420127141, "Extremo_Item_CanOpener"}, // 0.63%
				{7967.342067057, "Extremo_Item_Matches"}, // 0.63%
				{8028.11554771998, "B_OutdoorPack_blk"}, // 0.61%
				{8087.78405600728, "muzzle_snds_L"}, // 0.60%
				{8147.45256429457, "muzzle_snds_acp"}, // 0.60%
				{8204.91112783048, "hgun_Pistol_heavy_02_F"}, // 0.57%
				{8262.36969136639, "hgun_Pistol_heavy_01_F"}, // 0.57%
				{8319.8282549023, "hgun_Pistol_Signal_F"}, // 0.57%
				{8375.07687368683, "H_Cap_blu"}, // 0.55%
				{8430.32549247136, "H_Cap_blk"}, // 0.55%
				{8485.57411125589, "H_Beret_blk_POLICE"}, // 0.55%
				{8540.82273004042, "H_Bandanna_surfer"}, // 0.55%
				{8596.07134882495, "H_Cap_headphones"}, // 0.55%
				{8651.31996760948, "H_Cap_oli"}, // 0.55%
				{8706.56858639401, "H_Cap_grn"}, // 0.55%
				{8761.81720517854, "H_Cap_blk_Raven"}, // 0.55%
				{8817.06582396307, "11Rnd_45ACP_Mag"}, // 0.55%
				{8872.3144427476, "30Rnd_9x21_Mag"}, // 0.55%
				{8927.56306153213, "9Rnd_45ACP_Mag"}, // 0.55%
				{8982.81168031666, "Extremo_Item_ZipTie"}, // 0.55%
				{9037.50781291334, "B_OutdoorPack_blu"}, // 0.55%
				{9092.20394551003, "B_OutdoorPack_tan"}, // 0.55%
				{9140.82273004042, "B_HuntingBackpack"}, // 0.49%
				{9185.02162506804, "6Rnd_45ACP_Cylinder"}, // 0.44%
				{9227.56306153213, "B_AssaultPack_mcamo"}, // 0.43%
				{9270.10449799622, "B_AssaultPack_cbr"}, // 0.43%
				{9312.64593446031, "B_AssaultPack_dgtl"}, // 0.43%
				{9355.1873709244, "B_AssaultPack_sgg"}, // 0.43%
				{9397.72880738849, "B_AssaultPack_blk"}, // 0.43%
				{9440.27024385258, "B_AssaultPack_khk"}, // 0.43%
				{9482.81168031666, "B_AssaultPack_rgr"}, // 0.43%
				{9521.48571346584, "Extremo_Item_PowerDrink"}, // 0.39%
				{9559.52574607158, "Extremo_Item_EMRE"}, // 0.38%
				{9597.56577867732, "Extremo_Item_CookingPot"}, // 0.38%
				{9630.71494994804, "optic_ACO_grn_smg"}, // 0.33%
				{9663.86412121876, "optic_Aco"}, // 0.33%
				{9697.01329248947, "optic_ACO_grn"}, // 0.33%
				{9730.16246376019, "optic_Aco_smg"}, // 0.33%
				{9763.31163503091, "optic_Holosight_smg"}, // 0.33%
				{9793.6983753624, "B_Kitbag_cbr"}, // 0.30%
				{9824.08511569389, "B_Kitbag_sgg"}, // 0.30%
				{9854.47185602539, "B_Kitbag_mcamo"}, // 0.30%
				{9882.09616541765, "16Rnd_9x21_Mag"}, // 0.28%
				{9905.30058530715, "optic_Yorris"}, // 0.23%
				{9928.50500519666, "optic_MRD"}, // 0.23%
				{9947.84202177124, "6Rnd_GreenSignal_F"}, // 0.19%
				{9967.17903834583, "6Rnd_RedSignal_F"}, // 0.19%
				{9978.11935889722, "U_NikosAgedBody"}, // 0.11%
				{9989.05967944861, "U_NikosBody"}, // 0.11%
				{10000, "U_OrestesBody"} // 0.11%
			};
		};

		class CivillianUpperClass
		{
			count = 153;
			half = 8030.99428493325;
			halfIndex = 76;
			sum = 10000;
			items[] = 
			{
				{526.315789473684, "Extremo_Item_Can_Empty"}, // 5.26%
				{1052.63157894737, "Extremo_Item_ToiletPaper"}, // 5.26%
				{1578.94736842105, "Extremo_Item_PlasticBottleEmpty"}, // 5.26% 
				{1894.73684210526, "Extremo_Item_PlasticBottleDirtyWater"}, // 1.58%
				{2052.63157894737, "ItemWatch"}, // 1.58%
				{2185.50474547023, "Extremo_Item_InstantCoffee"}, // 1.33%
				{2317.08369283865, "Chemlight_red"}, // 1.32%
				{2448.66264020708, "Chemlight_green"}, // 1.32%
				{2580.2415875755, "Chemlight_blue"}, // 1.32%
				{2711.82053494392, "FlareGreen_F"}, // 1.32%
				{2843.39948231234, "Chemlight_yellow"}, // 1.32%
				{2974.97842968076, "FlareYellow_F"}, // 1.32%
				{3106.55737704918, "FlareRed_F"}, // 1.32%
				{3238.1363244176, "FlareWhite_F"}, // 1.32%
				{3369.71527178602, "V_Rangemaster_belt"}, // 1.32%
				{3478.42968075928, "Extremo_Item_Raisins"}, // 1.09%
				{3587.14408973253, "Extremo_Item_Moobar"}, // 1.09%
				{3692.40724762727, "ItemGPS"}, // 1.05%
				{3797.670405522, "Binocular"}, // 1.05%
				{3902.93356341674, "Extremo_Item_MountainDupe"}, // 1.05%
				{3999.56859361519, "Extremo_Item_SeedAstics"}, // 0.97%
				{4093.36744718476, "U_Rangemaster"}, // 0.94%
				{4187.16630075432, "U_C_Scientist"}, // 0.94%
				{4280.96515432389, "U_C_Journalist"}, // 0.94%
				{4374.76400789346, "U_C_HunterBody_grn"}, // 0.94%
				{4468.56286146303, "U_C_Poor_shorts_1"}, // 0.94%
				{4562.36171503259, "U_C_Poor_2"}, // 0.94%
				{4656.16056860216, "U_C_Poor_1"}, // 0.94%
				{4745.63425281269, "Extremo_Item_EnergyDrink"}, // 0.89%
				{4834.05530544427, "hgun_P07_F"}, // 0.88%
				{4918.61095686791, "Extremo_Item_CatFood"}, // 0.85%
				{5003.16660829155, "Extremo_Item_BBQSandwich"}, // 0.85%
				{5087.72225971519, "Extremo_Item_ChristmasTinner"}, // 0.85%
				{5172.27791113883, "Extremo_Item_SausageGravy"}, // 0.85%
				{5256.83356256247, "Extremo_Item_Surstromming"}, // 0.85%
				{5341.38921398612, "Extremo_Item_Dogfood"}, // 0.85%
				{5425.94486540976, "Extremo_Item_Noodles"}, // 0.85%
				{5510.5005168334, "Extremo_Item_Cheathas"}, // 0.85%
				{5595.05616825704, "Extremo_Item_BeefParts"}, // 0.85%
				{5679.26669457283, "hgun_Rook40_F"}, // 0.84%
				{5763.47722088862, "hgun_ACPC2_F"}, // 0.84%
				{5842.42458930967, "30Rnd_45ACP_Mag_SMG_01"}, // 0.79%
				{5921.37195773072, "30Rnd_45ACP_Mag_SMG_01_Tracer_Green"}, // 0.79%
				{5995.05616825704, "Extremo_Item_Beer"}, // 0.74%
				{6068.01083214448, "U_C_Poloshirt_stripped"}, // 0.73%
				{6140.96549603192, "U_C_Poloshirt_blue"}, // 0.73%
				{6213.92015991936, "U_C_Poloshirt_tricolour"}, // 0.73%
				{6286.87482380681, "U_C_Poloshirt_salmon"}, // 0.73%
				{6359.82948769425, "U_C_Poloshirt_burgundy"}, // 0.73%
				{6432.30576034308, "Extremo_Item_GloriousKnakworst"}, // 0.72%
				{6503.8847077115, "SMG_01_F"}, // 0.72%
				{6573.35839192203, "SMG_02_F"}, // 0.69%
				{6642.83207613256, "hgun_PDW2000_F"}, // 0.69%
				{6708.62154981677, "V_Press_F"}, // 0.66%
				{6774.41102350098, "V_TacVest_blk_POLICE"}, // 0.66%
				{6837.56891823782, "H_Cap_press"}, // 0.63%
				{6900.72681297466, "H_Cap_tan"}, // 0.63%
				{6963.88470771151, "H_Hat_grey"}, // 0.63%
				{7027.04260244835, "Extremo_Item_PlasticBottleFreshWater"}, // 0.63%
				{7090.20049718519, "H_StrawHat_dark"}, // 0.63%
				{7153.35839192203, "H_StrawHat"}, // 0.63%
				{7216.51628665888, "H_Hat_tan"}, // 0.63%
				{7279.67418139572, "H_Hat_blue"}, // 0.63%
				{7342.83207613256, "H_Hat_brown"}, // 0.63%
				{7405.9899708694, "H_Hat_checker"}, // 0.63%
				{7469.14786560625, "H_Cap_red"}, // 0.63%
				{7529.54475948028, "Extremo_Item_CanOpener"}, // 0.60%
				{7589.9416533543, "Extremo_Item_Matches"}, // 0.60%
				{7647.83639019641, "B_OutdoorPack_blk"}, // 0.58%
				{7704.67849545957, "muzzle_snds_L"}, // 0.57%
				{7761.52060072272, "muzzle_snds_acp"}, // 0.57%
				{7816.25744282799, "hgun_Pistol_Signal_F"}, // 0.55%
				{7870.99428493325, "hgun_Pistol_heavy_02_F"}, // 0.55%
				{7925.73112703851, "hgun_Pistol_heavy_01_F"}, // 0.55%
				{7978.36270598588, "H_Beret_blk_POLICE"}, // 0.53%
				{8030.99428493325, "H_Cap_blk"}, // 0.53%
				{8083.62586388062, "H_Cap_blk_Raven"}, // 0.53%
				{8136.25744282799, "H_Cap_blu"}, // 0.53%
				{8188.88902177536, "H_Cap_grn"}, // 0.53%
				{8241.52060072272, "H_Cap_headphones"}, // 0.53%
				{8294.15217967009, "H_Bandanna_surfer"}, // 0.53%
				{8346.78375861746, "H_Cap_oli"}, // 0.53%
				{8399.41533756483, "Extremo_Item_ZipTie"}, // 0.53%
				{8452.0469165122, "9Rnd_45ACP_Mag"}, // 0.53%
				{8504.67849545957, "11Rnd_45ACP_Mag"}, // 0.53%
				{8557.31007440693, "30Rnd_9x21_Mag"}, // 0.53%
				{8609.41533756483, "B_OutdoorPack_blu"}, // 0.52%
				{8661.52060072272, "B_OutdoorPack_tan"}, // 0.52%
				{8707.83639019641, "B_HuntingBackpack"}, // 0.46%
				{8749.9416533543, "6Rnd_45ACP_Cylinder"}, // 0.42%
				{8790.46796914378, "B_AssaultPack_blk"}, // 0.41%
				{8830.99428493325, "B_AssaultPack_sgg"}, // 0.41%
				{8871.52060072272, "B_AssaultPack_rgr"}, // 0.41%
				{8912.0469165122, "B_AssaultPack_khk"}, // 0.41%
				{8952.57323230167, "B_AssaultPack_cbr"}, // 0.41%
				{8993.09954809114, "B_AssaultPack_dgtl"}, // 0.41%
				{9033.62586388062, "B_AssaultPack_mcamo"}, // 0.41%
				{9070.46796914378, "Extremo_Item_PowerDrink"}, // 0.37%
				{9106.70610546819, "Extremo_Item_EMRE"}, // 0.36%
				{9142.94424179261, "Extremo_Item_CookingPot"}, // 0.36%
				{9174.52318916103, "optic_ACO_grn"}, // 0.32%
				{9206.10213652945, "optic_Aco"}, // 0.32%
				{9237.68108389787, "optic_Aco_smg"}, // 0.32%
				{9269.2600312663, "optic_ACO_grn_smg"}, // 0.32%
				{9300.83897863472, "optic_Holosight_smg"}, // 0.32%
				{9329.78634705577, "B_Kitbag_sgg"}, // 0.29%
				{9358.73371547682, "B_Kitbag_mcamo"}, // 0.29%
				{9387.68108389788, "B_Kitbag_cbr"}, // 0.29%
				{9413.99687337156, "16Rnd_9x21_Mag"}, // 0.26%
				{9438.927621294, "30Rnd_65x39_caseless_green"}, // 0.25%
				{9463.85836921644, "30Rnd_556x45_Stanag"}, // 0.25%
				{9486.18691786078, "acc_flashlight"}, // 0.22%
				{9508.29218101867, "optic_MRD"}, // 0.22%
				{9530.39744417657, "optic_Yorris"}, // 0.22%
				{9548.81849680814, "6Rnd_RedSignal_F"}, // 0.18%
				{9567.23954943972, "6Rnd_GreenSignal_F"}, // 0.18%
				{9585.52209791618, "20Rnd_556x45_UW_mag"}, // 0.18%
				{9601.47106123356, "optic_Holosight"}, // 0.16%
				{9617.42002455095, "muzzle_snds_M"}, // 0.16%
				{9633.36898786833, "muzzle_snds_H"}, // 0.16%
				{9649.31795118571, "optic_DMS"}, // 0.16%
				{9665.2669145031, "optic_Hamr"}, // 0.16%
				{9681.21587782048, "optic_MRCO"}, // 0.16%
				{9697.16484113786, "acc_pointer_IR"}, // 0.16%
				{9713.11380445525, "optic_Arco"}, // 0.16%
				{9728.90327813946, "arifle_Katiba_F"}, // 0.16%
				{9743.86172689292, "30Rnd_556x45_Stanag_Tracer_Red"}, // 0.15%
				{9758.82017564638, "30Rnd_556x45_Stanag_Tracer_Green"}, // 0.15%
				{9773.77862439985, "30Rnd_65x39_caseless_mag_Tracer"}, // 0.15%
				{9788.73707315331, "30Rnd_65x39_caseless_mag"}, // 0.15%
				{9803.69552190677, "30Rnd_65x39_caseless_green_mag_Tracer"}, // 0.15%
				{9818.65397066023, "30Rnd_556x45_Stanag_Tracer_Yellow"}, // 0.15%
				{9831.2855496076, "arifle_MXC_F"}, // 0.13%
				{9843.91712855497, "arifle_MX_F"}, // 0.13%
				{9856.54870750234, "arifle_Katiba_GL_F"}, // 0.13%
				{9869.18028644971, "arifle_TRG21_F"}, // 0.13%
				{9881.81186539708, "arifle_TRG20_F"}, // 0.13%
				{9892.86449697602, "arifle_Mk20_F"}, // 0.11%
				{9903.91712855497, "arifle_Mk20C_F"}, // 0.11%
				{9914.33922339603, "U_NikosBody"}, // 0.10%
				{9924.7613182371, "U_OrestesBody"}, // 0.10%
				{9935.18341307816, "U_NikosAgedBody"}, // 0.10%
				{9944.65709728869, "arifle_SDAR_F"}, // 0.09%
				{9954.13078149921, "arifle_MXM_F"}, // 0.09%
				{9962.10526315791, "optic_NVS"}, // 0.08%
				{9968.42105263159, "arifle_Mk20_GL_F"}, // 0.06%
				{9974.73684210528, "arifle_MX_GL_F"}, // 0.06%
				{9981.05263157896, "arifle_TRG21_GL_F"}, // 0.06%
				{9985.78947368422, "arifle_MXM_Black_F"}, // 0.05%
				{9990.52631578949, "arifle_MXC_Black_F"}, // 0.05%
				{9995.26315789475, "arifle_MX_GL_Black_F"}, // 0.05%
				{10000, "arifle_MX_Black_F"} // 0.05%
			};
		};

		class Shop
		{
			count = 140;
			half = 8965.58823529411;
			halfIndex = 70;
			sum = 9999.99999999999;
			items[] = 
			{
				{833.333333333333, "Extremo_Item_Can_Empty"}, // 8.33%
				{1666.66666666667, "Extremo_Item_ToiletPaper"}, // 8.33%
				{2500, "Extremo_Item_PlasticBottleEmpty"}, // 8.33%
				{2875, "Extremo_Item_PlasticBottleDirtyWater"}, // 3.75%
				{3125, "Extremo_Item_ZipTie"}, // 2.50%
				{3375, "Extremo_Item_MountainDupe"}, // 2.50%
				{3587.5, "Extremo_Item_EnergyDrink"}, // 2.13% 
				{3937.5, "ItemWatch"}, // 1.75%
				{4112.5, "hgun_P07_F"}, // 1.75%
				{4287.5, "Extremo_Item_Beer"}, // 1.75%
				{4454.16666666667, "hgun_Rook40_F"}, // 1.67%
				{4620.83333333333, "hgun_ACPC2_F"}, // 1.67%
				{4770.83333333333, "Extremo_Item_PlasticBottleFreshWater"}, // 1.50%
				{4917.89215686275, "Extremo_Item_Vishpirin"}, // 1.47%
				{5059.55882352941, "SMG_01_F"}, // 1.42%
				{5197.05882352941, "hgun_PDW2000_F"}, // 1.38%
				{5334.55882352941, "SMG_02_F"}, // 1.38%
				{5451.22549019608, "ItemGPS"}, // 1.17%
				{5567.89215686275, "Binocular"}, // 1.17%
				{5680.59707489553, "Extremo_Item_InstantCoffee"}, // 1.13%
				{5788.93040822887, "hgun_Pistol_Signal_F"}, // 1.08%
				{5897.2637415622, "hgun_Pistol_heavy_02_F"}, // 1.08%
				{6005.59707489553, "hgun_Pistol_heavy_01_F"}, // 1.08%
				{6109.7637415622, "Chemlight_blue"}, // 1.04%
				{6213.93040822887, "Chemlight_green"}, // 1.04%
				{6318.09707489553, "Chemlight_red"}, // 1.04%
				{6422.2637415622, "FlareGreen_F"}, // 1.04%
				{6526.43040822887, "FlareRed_F"}, // 1.04%
				{6630.59707489553, "FlareWhite_F"}, // 1.04%
				{6734.7637415622, "FlareYellow_F"}, // 1.04%
				{6838.93040822887, "Chemlight_yellow"}, // 1.04%
				{6931.14352298297, "Extremo_Item_Moobar"}, // 0.92%
				{7023.35663773707, "Extremo_Item_Raisins"}, // 0.92%
				{7110.85663773707, "Extremo_Item_PowerDrink"}, // 0.88%
				{7192.82385085182, "Extremo_Item_SeedAstics"}, // 0.82%
				{7266.35326261653, "Extremo_Item_Bandage"}, // 0.74%
				{7338.07457409194, "Extremo_Item_BeefParts"}, // 0.72%
				{7409.79588556735, "Extremo_Item_Cheathas"}, // 0.72%
				{7481.51719704275, "Extremo_Item_Surstromming"}, // 0.72%
				{7553.23850851816, "Extremo_Item_Noodles"}, // 0.72%
				{7624.95981999357, "Extremo_Item_Dogfood"}, // 0.72%
				{7696.68113146898, "Extremo_Item_CatFood"}, // 0.72%
				{7768.40244294439, "Extremo_Item_BBQSandwich"}, // 0.72%
				{7840.1237544198, "Extremo_Item_ChristmasTinner"}, // 0.72%
				{7911.84506589521, "Extremo_Item_SausageGravy"}, // 0.72%
				{7973.32047573128, "Extremo_Item_GloriousKnakworst"}, // 0.61%
				{8028.32047573128, "Extremo_Melee_Axe"}, // 0.55%
				{8028.32047573128, "Extremo_Melee_Pickaxe"}, // 0.55%
				{8079.549983928, "Extremo_Item_Matches"}, // 0.51%
				{8130.77949212472, "Extremo_Item_CanOpener"}, // 0.51%
				{8180.77949212472, "SmokeShellOrange"}, // 0.50%
				{8230.77949212472, "SmokeShellBlue"}, // 0.50%
				{8277.44615879138, "SmokeShellYellow"}, // 0.47%
				{8324.11282545805, "SmokeShellRed"}, // 0.47%
				{8370.77949212472, "SmokeShell"}, // 0.47%
				{8417.44615879138, "SmokeShellPurple"}, // 0.47%
				{8464.11282545805, "SmokeShellGreen"}, // 0.47%
				{8505.77949212472, "30Rnd_45ACP_Mag_SMG_01"}, // 0.42%
				{8547.44615879138, "30Rnd_45ACP_Mag_SMG_01_Tracer_Green"}, // 0.42%
				{8589.11282545805, "V_Rangemaster_belt"}, // 0.42%
				{8630.77949212471, "B_OutdoorPack_blk"}, // 0.42%
				{8668.27949212471, "B_OutdoorPack_blu"}, // 0.38%
				{8705.77949212471, "B_OutdoorPack_tan"}, // 0.38%
				{8739.11282545805, "B_HuntingBackpack"}, // 0.33%
				{8772.44615879138, "30Rnd_9x21_Mag"}, // 0.33%
				{8805.77949212472, "11Rnd_45ACP_Mag"}, // 0.33%
				{8839.11282545805, "9Rnd_45ACP_Mag"}, // 0.33%
				{8871.61282545805, "Extremo_Item_Handsaw"}, // 0.33%
				{8904.11282545805, "Extremo_Item_Pliers"}, // 0.33%
				{8934.85053037608, "Extremo_Item_EMRE"}, // 0.31%
				{8965.58823529411, "Extremo_Item_CookingPot"}, // 0.31%
				{8995.58823529411, "muzzle_snds_L"}, // 0.30%
				{9025.58823529411, "muzzle_snds_acp"}, // 0.30%
				{9055, "Extremo_Item_InstaDoc"}, // 0.29%
				{9084.16666666666, "B_AssaultPack_dgtl"}, // 0.29%
				{9113.33333333333, "B_AssaultPack_rgr"}, // 0.29%
				{9142.49999999999, "B_AssaultPack_sgg"}, // 0.29%
				{9171.66666666666, "B_AssaultPack_khk"}, // 0.29%
				{9200.83333333333, "B_AssaultPack_blk"}, // 0.29%
				{9229.99999999999, "B_AssaultPack_mcamo"}, // 0.29%
				{9259.16666666666, "B_AssaultPack_cbr"}, // 0.29%
				{9286.66666666666, "Extremo_Item_JunkMetal"}, // 0.28%
				{9313.33333333332, "6Rnd_45ACP_Cylinder"}, // 0.27%
				{9335.83333333332, "Extremo_Item_LightBulb"}, // 0.23%
				{9356.66666666666, "B_Kitbag_cbr"}, // 0.21%
				{9377.49999999999, "V_TacVest_blk_POLICE"}, // 0.21%
				{9398.33333333333, "V_Press_F"}, // 0.21%
				{9419.16666666666, "B_Kitbag_mcamo"}, // 0.21%
				{9439.99999999999, "B_Kitbag_sgg"}, // 0.21%
				{9459.99999999999, "Extremo_Item_ExtensionCord"}, // 0.20%
				{9476.66666666666, "optic_ACO_grn_smg"}, // 0.17%
				{9493.33333333333, "optic_Aco_smg"}, // 0.17%
				{9509.99999999999, "optic_ACO_grn"}, // 0.17%
				{9526.66666666666, "16Rnd_9x21_Mag"}, // 0.17%
				{9543.33333333332, "optic_Aco"}, // 0.17%
				{9559.99999999999, "optic_Holosight_smg"}, // 0.17%
				{9574.99999999999, "H_StrawHat_dark"}, // 0.15%
				{9589.99999999999, "H_StrawHat"}, // 0.15%
				{9604.99999999999, "H_Cap_red"}, // 0.15%
				{9619.99999999999, "H_Hat_grey"}, // 0.15%
				{9634.99999999999, "H_Hat_checker"}, // 0.15%
				{9649.99999999999, "H_Hat_brown"}, // 0.15%
				{9664.99999999999, "H_Hat_blue"}, // 0.15%
				{9679.99999999999, "H_Cap_tan"}, // 0.15%
				{9694.99999999999, "H_Cap_press"}, // 0.15%
				{9709.99999999999, "H_Hat_tan"}, // 0.15%
				{9722.49999999999, "Extremo_Item_Grinder"}, // 0.13%
				{9734.99999999999, "H_Bandanna_surfer"}, // 0.13%
				{9747.49999999999, "H_Beret_blk_POLICE"}, // 0.13%
				{9759.99999999999, "H_Cap_blk_Raven"}, // 0.13%
				{9772.49999999999, "H_Cap_grn"}, // 0.13%
				{9784.99999999999, "H_Cap_headphones"}, // 0.13%
				{9797.49999999999, "H_Cap_oli"}, // 0.13%
				{9809.99999999999, "H_Cap_blk"}, // 0.13%
				{9822.49999999999, "H_Cap_blu"}, // 0.13%
				{9834.16666666666, "6Rnd_GreenSignal_F"}, // 0.12%
				{9845.83333333332, "optic_MRD"}, // 0.12%
				{9857.49999999999, "optic_Yorris"}, // 0.12%
				{9869.16666666666, "6Rnd_RedSignal_F"}, // 0.12%
				{9879.16666666666, "Extremo_Item_MetalBoard"}, // 0.10%
				{9889.16666666666, "Extremo_Item_Rope"}, // 0.10%
				{9899.16666666666, "Extremo_Item_CamoTentKit"}, // 0.10%
				{9906.66666666666, "Extremo_Item_PortableGeneratorKit"}, // 0.08%
				{9914.16666666666, "Extremo_Item_FloodLightKit"}, // 0.08%
				{9921.59240924091, "U_C_Journalist"}, // 0.07%
				{9929.01815181517, "U_Rangemaster"}, // 0.07%
				{9936.44389438943, "U_C_Scientist"}, // 0.07%
				{9943.86963696369, "U_C_HunterBody_grn"}, // 0.07%
				{9951.29537953795, "U_C_Poor_shorts_1"}, // 0.07%
				{9958.7211221122, "U_C_Poor_1"}, // 0.07%
				{9966.14686468646, "U_C_Poor_2"}, // 0.07%
				{9971.92244224422, "U_C_Poloshirt_blue"}, // 0.06%
				{9977.69801980197, "U_C_Poloshirt_burgundy"}, // 0.06%
				{9983.47359735973, "U_C_Poloshirt_stripped"}, // 0.06%
				{9989.24917491748, "U_C_Poloshirt_tricolour"}, // 0.06%
				{9995.02475247524, "U_C_Poloshirt_salmon"}, // 0.06%
				{9997.52475247524, "Extremo_Item_ThermalScannerPro"}, // 0.03%
				{9998.34983498349, "U_NikosAgedBody"}, // 0.01%
				{9999.17491749174, "U_NikosBody"}, // 0.01%
				{9999.99999999999, "U_OrestesBody"} // 0.01%
			};
		};

		class Industrial
		{
			count = 24;
			half = 8030.4347826087;
			halfIndex = 12;
			sum = 10000;
			items[] = 
			{
				{1086.95652173913, "Extremo_Item_FuelCanisterEmpty"}, // 10.87%
				{1956.52173913043, "Extremo_Item_Can_Empty"}, // 8.70%
				{2826.08695652174, "Extremo_Item_ToiletPaper"}, // 8.70%
				{3695.65217391304, "Extremo_Item_PlasticBottleEmpty"}, // 8.70%
				{4565.21739130435, "Extremo_Item_FuelCanisterFull"}, // 8.70%
				{5330.4347826087, "Extremo_Melee_Axe"}, // 7.65%
				{5330.4347826087, "Extremo_Melee_Pickaxe"}, // 7.65%
				{5782.60869565217, "Extremo_Item_Pliers"}, // 4.52%
				{6234.78260869565, "Extremo_Item_Handsaw"}, // 4.52%
				{6669.5652173913, "Extremo_Item_ZipTie"}, // 4.35%
				{7052.17391304348, "Extremo_Item_JunkMetal"}, // 3.83%
				{7378.26086956522, "FlareYellow_F"}, // 3.26%
				{7704.34782608696, "FlareGreen_F"}, // 3.26%
				{8030.4347826087, "FlareRed_F"}, // 3.26%
				{8356.52173913043, "FlareWhite_F"}, // 3.26%
				{8669.5652173913, "Extremo_Item_LightBulb"}, // 3.13%
				{8947.82608695652, "Extremo_Item_ExtensionCord"}, // 2.78%
				{9165.21739130435, "Extremo_Item_DuctTape"}, // 2.17%
				{9339.13043478261, "Extremo_Item_Grinder"}, // 1.74%
				{9478.26086956522, "Extremo_Item_Rope"}, // 1.39%
				{9617.39130434782, "Extremo_Item_MetalBoard"}, // 1.39%
				{9756.52173913043, "Extremo_Item_CamoTentKit"}, // 1.39%
				{9860.86956521739, "Extremo_Item_PortableGeneratorKit"}, // 1.04%
				{9965.21739130434, "Extremo_Item_FloodLightKit"}, // 1.04%
				{10000, "Extremo_Item_ThermalScannerPro"} // 0.35%
			};
		};
		
		class Factories
		{
			count = 18;
			half = 8600;
			halfIndex = 9;
			sum = 10000;
			items[] = 
			{
				{1333.33333333333, "Extremo_Item_Can_Empty"}, // 13.33%
				{2666.66666666667, "Extremo_Item_ToiletPaper"}, // 13.33%
				{4000, "Extremo_Item_PlasticBottleEmpty"}, // 13.33%
				{5100, "Extremo_Melee_Axe"}, // 11.00%
				{5100, "Extremo_Melee_Pickaxe"}, // 11.00%
				{5900, "Extremo_Item_BaseCameraKit"}, // 8.00%
				{6550, "Extremo_Item_Pliers"}, // 6.50%
				{7200, "Extremo_Item_Handsaw"}, // 6.50%
				{7750, "Extremo_Item_JunkMetal"}, // 5.50%
				{8200, "Extremo_Item_LightBulb"}, // 4.50%
				{8600, "Extremo_Item_ExtensionCord"}, // 4.00%
				{8850, "Extremo_Item_Grinder"}, // 2.50%
				{9050, "Extremo_Item_MetalBoard"}, // 2.00%
				{9250, "Extremo_Item_CamoTentKit"}, // 2.00%
				{9450, "Extremo_Item_Rope"}, // 2.00%
				{9650, "Extremo_Item_Laptop"}, // 2.00%
				{9800, "Extremo_Item_PortableGeneratorKit"}, // 1.50%
				{9950, "Extremo_Item_FloodLightKit"}, // 1.50%
				{10000, "Extremo_Item_ThermalScannerPro"} // 0.50%
			};
		};

		class VehicleService
		{
			count = 24;
			half = 8586.95652173913;
			halfIndex = 12;
			sum = 10000;
			items[] = 
			{
				{1739.13043478261, "Extremo_Item_FuelCanisterEmpty"}, // 17.39%
				{3130.4347826087, "Extremo_Item_FuelCanisterFull"}, // 13.91%
				{4000, "Extremo_Item_Can_Empty"}, // 8.70%
				{4869.5652173913, "Extremo_Item_ToiletPaper"}, // 8.70%
				{5739.13043478261, "Extremo_Item_PlasticBottleEmpty"}, // 8.70%
				{6217.39130434783, "Extremo_Melee_Axe"}, // 4.78%
				{6217.39130434783, "Extremo_Melee_Pickaxe"}, // 4.78%
				{6652.17391304348, "Extremo_Item_ZipTie"}, // 4.35%
				{7000, "Extremo_Item_DuctTape"}, // 3.48%
				{7326.08695652174, "FlareWhite_F"}, // 3.26%
				{7652.17391304348, "FlareRed_F"}, // 3.26%
				{7978.26086956522, "FlareGreen_F"}, // 3.26%
				{8304.34782608696, "FlareYellow_F"}, // 3.26%
				{8586.95652173913, "Extremo_Item_Handsaw"}, // 2.83%
				{8869.5652173913, "Extremo_Item_Pliers"}, // 2.83%
				{9108.69565217391, "Extremo_Item_JunkMetal"}, // 2.39%
				{9304.34782608696, "Extremo_Item_LightBulb"}, // 1.96%
				{9478.26086956522, "Extremo_Item_ExtensionCord"}, // 1.74%
				{9586.95652173913, "Extremo_Item_Grinder"}, // 1.09%
				{9673.91304347826, "Extremo_Item_MetalBoard"}, // 0.87%
				{9760.86956521739, "Extremo_Item_Rope"}, // 0.87%
				{9847.82608695652, "Extremo_Item_CamoTentKit"}, // 0.87%
				{9913.04347826087, "Extremo_Item_FloodLightKit"}, // 0.65%
				{9978.26086956522, "Extremo_Item_PortableGeneratorKit"}, // 0.65%
				{10000, "Extremo_Item_ThermalScannerPro"} // 0.22%
			};
		};
		
		class Military
		{
			count = 337;
			half = 9071.22307938943;
			halfIndex = 168;
			sum = 9999.99999999997;
			items[] = 
			{
				{1650.16501650165, "Extremo_Item_Can_Empty"}, // 16.50%
				{3300.3300330033, "Extremo_Item_ToiletPaper"}, // 16.50%
				{4950.49504950495, "Extremo_Item_PlasticBottleEmpty"}, // 16.50%
				{5050, "1Rnd_HE_Grenade_shell"}, // 1.00%
				{5149.0099009901, "ItemCompass"}, // 0.99%
				{5248.0198019802, "Extremo_Item_ZipTie"}, // 0.99%
				{5322.27722772277, "HandGrenade"}, // 0.74%
				{5396.53465346535, "MiniGrenade"}, // 0.74% 
				{5515.34653465346, "ItemWatch"}, // 0.59%
				{5573.58765288293, "Extremo_Item_Vishpirin"}, // 0.58%
				{5624.08270238789, "150Rnd_93x64_Mag"}, // 0.50%
				{5673.58765288293, "APERSTripMine_Wire_Mag"}, // 0.50%
				{5723.09260337798, "arifle_MX_SW_Black_F"}, // 0.50%
				{5772.59755387303, "APERSBoundingMine_Range_Mag"}, // 0.50%
				{5822.10250436808, "LMG_Mk200_F"}, // 0.50%
				{5871.60745486313, "arifle_MX_SW_F"}, // 0.50%
				{5921.11240535818, "NVGoggles"}, // 0.50%
				{5970.61735585323, "Rangefinder"}, // 0.50%
				{6020.12230634828, "LMG_Zafir_F"}, // 0.50%
				{6069.62725684333, "APERSMine_Range_Mag"}, // 0.50%
				{6118.63715783343, "3Rnd_HE_Grenade_shell"}, // 0.49%
				{6160.22131624927, "srifle_DMR_01_F"}, // 0.42%
				{6201.80547466511, "srifle_EBR_F"}, // 0.42%
				{6241.40943506115, "U_IG_Guerilla2_3"}, // 0.40%
				{6281.01339545719, "U_IG_Guerilla2_2"}, // 0.40%
				{6320.61735585323, "U_IG_Guerilla2_1"}, // 0.40%
				{6360.22131624927, "U_IG_Guerilla1_1"}, // 0.40%
				{6399.82527664531, "ItemGPS"}, // 0.40%
				{6439.42923704135, "Binocular"}, // 0.40%
				{6476.55794991264, "U_IG_Guerilla3_2"}, // 0.37%
				{6513.68666278393, "U_IG_Guerilla3_1"}, // 0.37%
				{6546.35993011066, "srifle_GM6_F"}, // 0.33%
				{6579.03319743739, "srifle_LRR_F"}, // 0.33%
				{6608.73616773442, "IEDUrbanSmall_Remote_Mag"}, // 0.30%
				{6638.43913803145, "DemoCharge_Remote_Mag"}, // 0.30%
				{6668.14210832848, "IEDLandSmall_Remote_Mag"}, // 0.30%
				{6697.26266744321, "Extremo_Item_Bandage"}, // 0.29%
				{6725.48048922539, "B_Carryall_cbr"}, // 0.28%
				{6753.27274213489, "10Rnd_338_Mag"}, // 0.28%
				{6781.06499504439, "10Rnd_93x64_DMR_05_Mag"}, // 0.28%
				{6808.78776732162, "10Rnd_762x51_Mag"}, // 0.28%
				{6836.51053959885, "20Rnd_762x51_Mag"}, // 0.28%
				{6864.23331187608, "B_FieldPack_oucamo"}, // 0.28%
				{6891.95608415331, "B_FieldPack_cbr"}, // 0.28%
				{6919.67885643053, "B_FieldPack_blk"}, // 0.28%
				{6947.40162870776, "B_FieldPack_ocamo"}, // 0.28%
				{6974.67986673565, "optic_DMS"}, // 0.27%
				{7001.41254000297, "B_Carryall_khk"}, // 0.27%
				{7028.1452132703, "B_Carryall_oli"}, // 0.27%
				{7054.41314618604, "optic_LRPS"}, // 0.26%
				{7080.68107910178, "optic_SOS"}, // 0.26%
				{7105.92860385426, "UGL_FlareRed_F"}, // 0.25%
				{7131.17612860673, "UGL_FlareYellow_F"}, // 0.25%
				{7156.42365335921, "UGL_FlareWhite_F"}, // 0.25%
				{7181.67117811168, "UGL_FlareGreen_F"}, // 0.25%
				{7206.42365335921, "arifle_Katiba_F"}, // 0.25%
				{7230.74187465502, "10Rnd_127x54_Mag"}, // 0.24%
				{7254.19158804741, "30Rnd_556x45_Stanag"}, // 0.23%
				{7277.6413014398, "30Rnd_65x39_caseless_green"}, // 0.23%
				{7299.91852916257, "B_Carryall_oucamo"}, // 0.22%
				{7322.19575688535, "SmokeShellOrange"}, // 0.22%
				{7344.47298460812, "B_Carryall_ocamo"}, // 0.22%
				{7366.75021233089, "SmokeShellBlue"}, // 0.22%
				{7389.02744005366, "B_Carryall_mcamo"}, // 0.22%
				{7410.80961827149, "B_Bergen_mcamo"}, // 0.22%
				{7432.59179648931, "B_Bergen_sgg"}, // 0.22%
				{7454.37397470713, "B_Bergen_blk"}, // 0.22%
				{7476.15615292495, "B_Bergen_rgr"}, // 0.22%
				{7497.15825313497, "acc_flashlight"}, // 0.21%
				{7517.95033234289, "SmokeShellPurple"}, // 0.21%
				{7538.74241155081, "V_PlateCarrierSpec_rgr"}, // 0.21%
				{7559.53449075874, "SmokeShell"}, // 0.21%
				{7580.32656996666, "SmokeShellRed"}, // 0.21%
				{7601.11864917458, "SmokeShellGreen"}, // 0.21%
				{7621.9107283825, "SmokeShellYellow"}, // 0.21%
				{7641.71270858052, "arifle_TRG20_F"}, // 0.20%
				{7661.51468877854, "arifle_Katiba_GL_F"}, // 0.20%
				{7681.31666897656, "arifle_TRG21_F"}, // 0.20%
				{7701.11864917458, "arifle_MX_F"}, // 0.20%
				{7720.9206293726, "arifle_MXC_F"}, // 0.20%
				{7740.22756006567, "V_PlateCarrierSpec_mtp"}, // 0.19%
				{7759.53449075874, "V_PlateCarrierSpec_blk"}, // 0.19%
				{7778.73028788947, "muzzle_snds_B"}, // 0.19%
				{7797.83746176475, "20Rnd_762x51_Mag"}, // 0.19%
				{7815.65924394297, "V_PlateCarrierGL_rgr"}, // 0.18%
				{7833.48102612119, "V_PlateCarrierIAGL_dgtl"}, // 0.18%
				{7851.30280829941, "V_PlateCarrierIAGL_oli"}, // 0.18%
				{7869.12459047763, "V_PlateCarrierGL_blk"}, // 0.18%
				{7886.94637265584, "V_PlateCarrierGL_mtp"}, // 0.18%
				{7904.27310532911, "U_B_CTRG_3"}, // 0.17%
				{7921.59983800238, "arifle_Mk20_F"}, // 0.17%
				{7938.92657067565, "arifle_Mk20C_F"}, // 0.17%
				{7956.25330334891, "U_B_CTRG_2"}, // 0.17%
				{7973.58003602218, "U_B_CombatUniform_mcam_tshirt"}, // 0.17%
				{7990.90676869545, "U_B_CombatUniform_mcam_vest"}, // 0.17%
				{8008.23350136872, "U_B_CTRG_1"}, // 0.17%
				{8025.56023404198, "U_B_CombatUniform_mcam_worn"}, // 0.17%
				{8042.75669052974, "20Rnd_556x45_UW_mag"}, // 0.17%
				{8059.58837369806, "7Rnd_408_Mag"}, // 0.17%
				{8076.42005686637, "V_RebreatherIA"}, // 0.17%
				{8093.25174003469, "U_I_GhillieSuit"}, // 0.17%
				{8110.08342320301, "5Rnd_127x108_Mag"}, // 0.17%
				{8126.58507336802, "muzzle_snds_B"}, // 0.17%
				{8143.08672353304, "muzzle_snds_93mmg_tan"}, // 0.17%
				{8159.58837369806, "muzzle_snds_93mmg"}, // 0.17%
				{8176.09002386307, "muzzle_snds_338_sand"}, // 0.17%
				{8192.59167402809, "muzzle_snds_338_green"}, // 0.17%
				{8209.09332419311, "muzzle_snds_338_black"}, // 0.17%
				{8225.42995785647, "V_RebreatherIR"}, // 0.16%
				{8241.76659151984, "V_RebreatherB"}, // 0.16%
				{8258.1032251832, "U_B_GhillieSuit"}, // 0.16%
				{8274.43985884657, "U_O_GhillieSuit"}, // 0.16%
				{8290.49551846659, "srifle_DMR_05_tan_F"}, // 0.16%
				{8306.5511780866, "srifle_DMR_05_blk_F"}, // 0.16%
				{8322.60683770662, "srifle_DMR_05_hex_F"}, // 0.16%
				{8337.76141438878, "1Rnd_SmokeYellow_Grenade_shell"}, // 0.15%
				{8352.91599107094, "1Rnd_SmokeOrange_Grenade_shell"}, // 0.15%
				{8368.0705677531, "1Rnd_SmokeGreen_Grenade_shell"}, // 0.15%
				{8383.22514443525, "1Rnd_SmokeBlue_Grenade_shell"}, // 0.15%
				{8398.37972111741, "1Rnd_Smoke_Grenade_shell"}, // 0.15%
				{8413.53429779957, "1Rnd_SmokeRed_Grenade_shell"}, // 0.15%
				{8428.68887448173, "1Rnd_SmokePurple_Grenade_shell"}, // 0.15%
				{8443.69037463174, "muzzle_snds_M"}, // 0.15%
				{8458.69187478176, "muzzle_snds_H"}, // 0.15%
				{8473.69337493177, "optic_Arco"}, // 0.15%
				{8488.69487508178, "optic_DMS"}, // 0.15%
				{8503.6963752318, "optic_Hamr"}, // 0.15%
				{8518.69787538181, "optic_MRCO"}, // 0.15%
				{8533.69937553183, "acc_pointer_IR"}, // 0.15%
				{8548.70087568184, "optic_Holosight"}, // 0.15%
				{8563.55236083036, "V_PlateCarrier1_rgr"}, // 0.15%
				{8578.40384597887, "V_PlateCarrier2_rgr"}, // 0.15%
				{8593.25533112738, "arifle_SDAR_F"}, // 0.15%
				{8608.1068162759, "V_PlateCarrier3_rgr"}, // 0.15%
				{8622.95830142441, "arifle_MXM_F"}, // 0.15%
				{8637.80978657293, "V_PlateCarrier1_blk"}, // 0.15%
				{8652.66127172144, "V_PlateCarrierGL_rgr"}, // 0.15%
				{8667.51275686996, "V_PlateCarrierIA1_dgtl"}, // 0.15%
				{8682.36424201847, "V_PlateCarrierIA2_dgtl"}, // 0.15%
				{8697.21572716698, "V_PlateCarrierIAGL_dgtl"}, // 0.15%
				{8712.0672123155, "V_PlateCarrierSpec_rgr"}, // 0.15%
				{8726.21148388551, "optic_KHS_old"}, // 0.14%
				{8740.35575545553, "optic_KHS_hex"}, // 0.14%
				{8754.50002702554, "optic_KHS_tan"}, // 0.14%
				{8768.64429859555, "optic_AMS_snd"}, // 0.14%
				{8782.78857016557, "optic_AMS_khk"}, // 0.14%
				{8796.93284173558, "optic_AMS"}, // 0.14%
				{8811.0771133056, "optic_KHS_blk"}, // 0.14%
				{8825.14694134103, "30Rnd_65x39_caseless_green_mag_Tracer"}, // 0.14%
				{8839.21676937647, "30Rnd_65x39_caseless_mag"}, // 0.14%
				{8853.2865974119, "30Rnd_65x39_caseless_mag_Tracer"}, // 0.14%
				{8867.35642544734, "30Rnd_556x45_Stanag_Tracer_Yellow"}, // 0.14%
				{8881.42625348277, "30Rnd_556x45_Stanag_Tracer_Red"}, // 0.14%
				{8895.49608151821, "30Rnd_556x45_Stanag_Tracer_Green"}, // 0.14%
				{8909.54478368572, "srifle_DMR_04_F"}, // 0.14%
				{8923.59348585324, "srifle_DMR_04_Tan_F"}, // 0.14%
				{8936.15444344153, "bipod_02_F_blk"}, // 0.13%
				{8948.71540102983, "bipod_01_F_snd"}, // 0.13%
				{8961.27635861812, "bipod_01_F_blk"}, // 0.13%
				{8973.83731620642, "bipod_03_F_blk"}, // 0.13%
				{8986.39827379472, "bipod_02_F_tan"}, // 0.13%
				{8998.95923138301, "bipod_03_F_oli"}, // 0.13%
				{9011.33546900677, "U_B_CombatUniform_mcam"}, // 0.12%
				{9023.37721372179, "srifle_DMR_02_camo_F"}, // 0.12%
				{9035.4189584368, "srifle_DMR_02_sniper_F"}, // 0.12%
				{9047.46070315181, "srifle_DMR_02_F"}, // 0.12%
				{9059.34189127062, "100Rnd_65x39_caseless_mag"}, // 0.12%
				{9071.22307938943, "3Rnd_UGL_FlareGreen_F"}, // 0.12%
				{9083.10426750825, "150Rnd_762x54_Box"}, // 0.12%
				{9094.98545562706, "3Rnd_UGL_FlareRed_F"}, // 0.12%
				{9106.86664374587, "3Rnd_UGL_FlareWhite_F"}, // 0.12%
				{9118.74783186468, "3Rnd_UGL_FlareYellow_F"}, // 0.12%
				{9130.56990959484, "bipod_02_F_hex"}, // 0.12%
				{9142.39198732501, "bipod_01_F_mtp"}, // 0.12%
				{9154.0402109709, "Extremo_Item_InstaDoc"}, // 0.12%
				{9164.43625057486, "V_HarnessO_gry"}, // 0.10%
				{9174.83229017882, "V_BandollierB_khk"}, // 0.10%
				{9185.22832978278, "V_BandollierB_cbr"}, // 0.10%
				{9195.62436938674, "V_HarnessOSpec_gry"}, // 0.10%
				{9206.0204089907, "V_HarnessOSpec_brn"}, // 0.10%
				{9216.41644859466, "V_HarnessOGL_gry"}, // 0.10%
				{9226.81248819862, "V_BandollierB_rgr"}, // 0.10%
				{9237.20852780258, "V_HarnessOGL_brn"}, // 0.10%
				{9247.60456740654, "V_HarnessO_brn"}, // 0.10%
				{9258.0006070105, "V_BandollierB_blk"}, // 0.10%
				{9268.39664661446, "V_BandollierB_oli"}, // 0.10%
				{9278.29763671347, "5Rnd_127x108_APDS_Mag"}, // 0.10%
				{9288.19862681248, "arifle_TRG21_GL_F"}, // 0.10%
				{9298.09961691149, "150Rnd_762x54_Box_Tracer"}, // 0.10%
				{9308.0006070105, "100Rnd_65x39_caseless_mag_Tracer"}, // 0.10%
				{9317.90159710951, "arifle_MX_GL_F"}, // 0.10%
				{9327.80258720852, "arifle_Mk20_GL_F"}, // 0.10%
				{9337.70357730753, "SatchelCharge_Remote_Mag"}, // 0.10%
				{9347.60456740654, "U_B_PilotCoveralls"}, // 0.10%
				{9357.50555750555, "U_B_HeliPilotCoveralls"}, // 0.10%
				{9367.40654760456, "U_I_CombatUniform_shortsleeve"}, // 0.10%
				{9377.30753770357, "U_I_CombatUniform_tshirt"}, // 0.10%
				{9387.20852780258, "U_I_CombatUniform"}, // 0.10%
				{9397.10951790158, "U_I_pilotCoveralls"}, // 0.10%
				{9407.01050800059, "U_I_HeliPilotCoveralls"}, // 0.10%
				{9416.9114980996, "U_O_PilotCoveralls"}, // 0.10%
				{9426.81248819861, "U_IG_leader"}, // 0.10%
				{9434.31323827362, "optic_NVS"}, // 0.08%
				{9441.73898084788, "V_PlateCarrierL_CTRG"}, // 0.07%
				{9449.16472342214, "arifle_MX_Black_F"}, // 0.07%
				{9456.59046599639, "arifle_MXC_Black_F"}, // 0.07%
				{9464.01620857065, "V_Chestrig_khk"}, // 0.07%
				{9471.44195114491, "V_Chestrig_blk"}, // 0.07%
				{9478.86769371917, "V_Chestrig_oli"}, // 0.07%
				{9486.29343629343, "arifle_MXM_Black_F"}, // 0.07%
				{9493.71917886768, "arifle_MX_GL_Black_F"}, // 0.07%
				{9501.14492144194, "V_Chestrig_rgr"}, // 0.07%
				{9508.5706640162, "V_PlateCarrierH_CTRG"}, // 0.07%
				{9515.99640659046, "U_B_SpecopsUniform_sgg"}, // 0.07%
				{9522.05823726332, "3Rnd_SmokePurple_Grenade_shell"}, // 0.06%
				{9528.12006793618, "3Rnd_Smoke_Grenade_shell"}, // 0.06%
				{9534.18189860905, "3Rnd_SmokeBlue_Grenade_shell"}, // 0.06%
				{9540.24372928191, "3Rnd_SmokeGreen_Grenade_shell"}, // 0.06%
				{9546.30555995477, "3Rnd_SmokeOrange_Grenade_shell"}, // 0.06%
				{9552.36739062764, "3Rnd_SmokeYellow_Grenade_shell"}, // 0.06%
				{9558.4292213005, "3Rnd_SmokeRed_Grenade_shell"}, // 0.06%
				{9564.450093658, "srifle_DMR_06_camo_F"}, // 0.06%
				{9570.47096601551, "srifle_DMR_06_olive_F"}, // 0.06%
				{9576.49183837301, "srifle_DMR_03_woodland_F"}, // 0.06%
				{9582.51271073052, "srifle_DMR_03_tan_F"}, // 0.06%
				{9588.53358308802, "srifle_DMR_03_khaki_F"}, // 0.06%
				{9594.55445544553, "srifle_DMR_03_F"}, // 0.06%
				{9600.49504950494, "H_Booniehat_khk"}, // 0.06%
				{9606.43564356434, "H_Booniehat_khk_hs"}, // 0.06%
				{9612.37623762375, "H_MilCap_dgtl"}, // 0.06%
				{9618.31683168315, "H_MilCap_rucamo"}, // 0.06%
				{9624.25742574256, "H_MilCap_blue"}, // 0.06%
				{9630.19801980197, "H_MilCap_oucamo"}, // 0.06%
				{9636.13861386137, "H_MilCap_mcamo"}, // 0.06%
				{9642.07920792078, "H_Booniehat_indp"}, // 0.06%
				{9648.01980198018, "H_Booniehat_mcamo"}, // 0.06%
				{9653.96039603959, "H_Booniehat_tan"}, // 0.06%
				{9659.900990099, "H_Booniehat_dirty"}, // 0.06%
				{9665.8415841584, "H_Booniehat_dgtl"}, // 0.06%
				{9671.78217821781, "H_Booniehat_grn"}, // 0.06%
				{9677.72277227722, "H_MilCap_ocamo"}, // 0.06%
				{9683.66336633662, "U_I_FullGhillie_sard"}, // 0.06%
				{9689.10891089108, "U_I_FullGhillie_lsh"}, // 0.05%
				{9694.55445544553, "U_I_FullGhillie_ard"}, // 0.05%
				{9699.99999999999, "U_O_FullGhillie_sard"}, // 0.05%
				{9705.44554455444, "U_O_FullGhillie_lsh"}, // 0.05%
				{9710.8910891089, "U_O_FullGhillie_ard"}, // 0.05%
				{9716.33663366335, "U_B_FullGhillie_sard"}, // 0.05%
				{9721.78217821781, "U_B_FullGhillie_lsh"}, // 0.05%
				{9727.22772277226, "U_B_FullGhillie_ard"}, // 0.05%
				{9732.17821782177, "U_I_Wetsuit"}, // 0.05%
				{9737.12871287127, "U_I_G_resistanceLeader_F"}, // 0.05%
				{9742.07920792078, "U_O_OfficerUniform_ocamo"}, // 0.05%
				{9747.02970297028, "U_I_OfficerUniform"}, // 0.05%
				{9751.98019801979, "U_B_Wetsuit"}, // 0.05%
				{9756.93069306929, "U_O_Wetsuit"}, // 0.05%
				{9761.8811881188, "130Rnd_338_Mag"}, // 0.05%
				{9766.8316831683, "U_O_CombatUniform_ocamo"}, // 0.05%
				{9771.78217821781, "U_O_CombatUniform_oucamo"}, // 0.05%
				{9776.73267326731, "U_O_SpecopsUniform_ocamo"}, // 0.05%
				{9781.68316831682, "U_O_SpecopsUniform_blk"}, // 0.05%
				{9786.13861386137, "H_Bandanna_khk"}, // 0.04%
				{9790.59405940592, "H_Bandanna_khk_hs"}, // 0.04%
				{9795.04950495048, "H_Bandanna_cbr"}, // 0.04%
				{9799.50495049503, "H_Bandanna_sgg"}, // 0.04%
				{9803.96039603959, "H_Bandanna_gry"}, // 0.04%
				{9808.41584158414, "H_Bandanna_camo"}, // 0.04%
				{9812.8712871287, "H_Bandanna_mcamo"}, // 0.04%
				{9817.32673267325, "V_I_G_resistanceLeader_F"}, // 0.04%
				{9821.7821782178, "H_BandMask_blk"}, // 0.04%
				{9826.23762376236, "H_Cap_khaki_specops_UK"}, // 0.04%
				{9830.69306930691, "H_HelmetSpecB"}, // 0.04%
				{9835.14851485147, "H_HelmetB_light"}, // 0.04%
				{9839.60396039602, "H_HelmetB_paint"}, // 0.04%
				{9844.05940594057, "H_HelmetB"}, // 0.04%
				{9848.51485148513, "H_HelmetSpecB_paint1"}, // 0.04%
				{9852.97029702968, "H_HelmetSpecB_paint2"}, // 0.04%
				{9857.42574257424, "H_HelmetSpecB_blk"}, // 0.04%
				{9861.88118811879, "H_Hat_camo"}, // 0.04%
				{9866.33663366334, "H_Cap_brn_SPECOPS"}, // 0.04%
				{9870.7920792079, "H_Cap_tan_specops_US"}, // 0.04%
				{9875.24752475245, "H_HelmetIA"}, // 0.04%
				{9879.70297029701, "H_Watchcap_blk"}, // 0.04%
				{9884.15841584156, "H_Watchcap_khk"}, // 0.04%
				{9888.61386138611, "H_HelmetB_plain_blk"}, // 0.04%
				{9891.58415841582, "H_HelmetIA_net"}, // 0.03%
				{9894.55445544552, "H_HelmetB_grass"}, // 0.03%
				{9897.52475247522, "H_HelmetB_black"}, // 0.03%
				{9900.49504950492, "H_HelmetB_desert"}, // 0.03%
				{9903.46534653463, "H_HelmetB_sand"}, // 0.03%
				{9906.43564356433, "H_HelmetB_light_grass"}, // 0.03%
				{9909.40594059403, "H_HelmetB_light_snakeskin"}, // 0.03%
				{9912.37623762373, "H_HelmetB_light_desert"}, // 0.03%
				{9915.34653465343, "H_BandMask_demon"}, // 0.03%
				{9918.31683168314, "H_BandMask_reaper"}, // 0.03%
				{9921.28712871284, "H_BandMask_khk"}, // 0.03%
				{9924.25742574254, "H_HelmetB_snakeskin"}, // 0.03%
				{9927.22772277224, "H_HelmetIA_camo"}, // 0.03%
				{9930.19801980194, "H_HelmetB_light_sand"}, // 0.03%
				{9933.16831683165, "H_ShemagOpen_khk"}, // 0.03%
				{9936.13861386135, "H_Shemag_olive_hs"}, // 0.03%
				{9939.10891089105, "H_Shemag_olive"}, // 0.03%
				{9942.07920792075, "H_Shemag_tan"}, // 0.03%
				{9945.04950495046, "H_Shemag_khk"}, // 0.03%
				{9948.01980198016, "H_TurbanO_blk"}, // 0.03%
				{9950.99009900986, "H_Watchcap_sgg"}, // 0.03%
				{9953.96039603956, "H_Watchcap_camo"}, // 0.03%
				{9956.93069306926, "H_HelmetB_light_black"}, // 0.03%
				{9959.90099009897, "H_ShemagOpen_tan"}, // 0.03%
				{9961.38613861382, "H_HelmetB_camo"}, // 0.01%
				{9962.87128712867, "H_PilotHelmetHeli_I"}, // 0.01%
				{9964.35643564352, "H_PilotHelmetHeli_O"}, // 0.01%
				{9965.84158415837, "H_PilotHelmetHeli_B"}, // 0.01%
				{9967.32673267323, "H_HelmetCrew_O"}, // 0.01%
				{9968.81188118808, "H_PilotHelmetFighter_O"}, // 0.01%
				{9970.29702970293, "H_PilotHelmetFighter_B"}, // 0.01%
				{9971.78217821778, "H_HelmetCrew_I"}, // 0.01%
				{9973.26732673263, "H_CrewHelmetHeli_B"}, // 0.01%
				{9974.75247524749, "H_HelmetCrew_B"}, // 0.01%
				{9976.23762376234, "H_PilotHelmetFighter_I"}, // 0.01%
				{9977.72277227719, "H_CrewHelmetHeli_O"}, // 0.01%
				{9979.20792079204, "H_HelmetO_oucamo"}, // 0.01%
				{9980.69306930689, "H_Beret_brn_SF"}, // 0.01%
				{9982.17821782175, "H_Beret_grn_SF"}, // 0.01%
				{9983.6633663366, "H_Beret_grn"}, // 0.01%
				{9985.14851485145, "H_HelmetLeaderO_oucamo"}, // 0.01%
				{9986.6336633663, "H_HelmetSpecO_ocamo"}, // 0.01%
				{9988.11881188115, "H_HelmetSpecO_blk"}, // 0.01%
				{9989.60396039601, "H_HelmetO_ocamo"}, // 0.01%
				{9991.08910891086, "H_HelmetLeaderO_ocamo"}, // 0.01%
				{9992.57425742571, "H_Beret_Colonel"}, // 0.01%
				{9994.05940594056, "H_Beret_red"}, // 0.01%
				{9995.54455445541, "H_Beret_blk"}, // 0.01%
				{9997.02970297027, "H_Beret_02"}, // 0.01%
				{9998.51485148512, "H_CrewHelmetHeli_I"}, // 0.01%
				{9999.99999999997, "H_Beret_ocamo"} // 0.01%
			};
		};

		class Medical
		{
			count = 6;
			half = 8176.47058823529;
			halfIndex = 3;
			sum = 10000;
			items[] = 
			{
				{4117.64705882353, "Extremo_Item_Vishpirin"}, // 41.18%
				{6176.47058823529, "Extremo_Item_Bandage"}, // 20.59%
				{7176.47058823529, "Extremo_Item_Can_Empty"}, // 10.00%
				{8176.47058823529, "Extremo_Item_ToiletPaper"}, // 10.00%
				{9176.47058823529, "Extremo_Item_PlasticBottleEmpty"}, // 10.00%
				{10000, "Extremo_Item_InstaDoc"} // 8.24%
			};
		};

		class Tourist
		{
			count = 128;
			half = 8618.62799856785;
			halfIndex = 64;
			sum = 10000;
			items[] = 
			{
				{560, "srifle_DMR_01_F"}, // 5.60%
				{1120, "srifle_EBR_F"}, // 5.60%
				{1560, "srifle_LRR_F"}, // 4.40%
				{2000, "srifle_GM6_F"}, // 4.40%
				{2400, "Extremo_Item_ZipTie"}, // 4.00%
				{2635.29411764706, "Extremo_Item_Vishpirin"}, // 2.35%
				{2851.51033386328, "srifle_DMR_05_blk_F"}, // 2.16%
				{3067.72655007949, "srifle_DMR_05_hex_F"}, // 2.16%
				{3283.94276629571, "srifle_DMR_05_tan_F"}, // 2.16%
				{3483.94276629571, "MiniGrenade"}, // 2.00%
				{3683.94276629571, "HandGrenade"}, // 2.00%
				{3873.94276629571, "B_Carryall_cbr"}, // 1.90%
				{4063.1319554849, "srifle_DMR_04_Tan_F"}, // 1.89%
				{4252.32114467409, "srifle_DMR_04_F"}, // 1.89%
				{4432.32114467409, "B_Carryall_khk"}, // 1.80%
				{4612.32114467409, "B_Carryall_oli"}, // 1.80%
				{4782.32114467409, "U_I_GhillieSuit"}, // 1.70%
				{4947.32114467409, "U_O_GhillieSuit"}, // 1.65%
				{5112.32114467409, "U_B_GhillieSuit"}, // 1.65%
				{5274.48330683625, "srifle_DMR_02_camo_F"}, // 1.62%
				{5436.64546899841, "srifle_DMR_02_F"}, // 1.62%
				{5598.80763116057, "srifle_DMR_02_sniper_F"}, // 1.62%
				{5748.80763116057, "B_Carryall_ocamo"}, // 1.50%
				{5898.80763116057, "B_Carryall_oucamo"}, // 1.50%
				{6048.80763116057, "B_Carryall_mcamo"}, // 1.50%
				{6168.80763116057, "ItemWatch"}, // 1.20% 
				{6406.4546899841, "Extremo_Item_Bandage"}, // 1.18%
				{6487.53577106518, "srifle_DMR_03_F"}, // 0.81%
				{6568.61685214627, "srifle_DMR_06_olive_F"}, // 0.81%
				{6649.69793322735, "srifle_DMR_03_tan_F"}, // 0.81%
				{6730.77901430843, "srifle_DMR_03_woodland_F"}, // 0.81%
				{6811.86009538951, "srifle_DMR_06_camo_F"}, // 0.81%
				{6892.94117647059, "srifle_DMR_03_khaki_F"}, // 0.81%
				{6972.94117647059, "Binocular"}, // 0.80%
				{7052.94117647059, "APERSTripMine_Wire_Mag"}, // 0.80%
				{7132.94117647059, "ItemGPS"}, // 0.80%
				{7212.94117647059, "APERSMine_Range_Mag"}, // 0.80%
				{7292.94117647059, "APERSBoundingMine_Range_Mag"}, // 0.80%
				{7352.94117647059, "U_I_FullGhillie_sard"}, // 0.60%
				{7409.08152734778, "10Rnd_338_Mag"}, // 0.56%
				{7465.22187822497, "10Rnd_93x64_DMR_05_Mag"}, // 0.56%
				{7521.22187822497, "20Rnd_762x51_Mag"}, // 0.56%
				{7577.22187822497, "10Rnd_762x51_Mag"}, // 0.56%
				{7632.3239190413, "optic_DMS"}, // 0.55%
				{7687.3239190413, "U_I_FullGhillie_lsh"}, // 0.55%
				{7742.3239190413, "U_I_FullGhillie_ard"}, // 0.55%
				{7797.3239190413, "U_O_FullGhillie_lsh"}, // 0.55%
				{7852.3239190413, "U_O_FullGhillie_ard"}, // 0.55%
				{7907.3239190413, "U_B_FullGhillie_sard"}, // 0.55%
				{7962.3239190413, "U_B_FullGhillie_lsh"}, // 0.55%
				{8017.3239190413, "U_B_FullGhillie_ard"}, // 0.55%
				{8072.3239190413, "U_O_FullGhillie_sard"}, // 0.55%
				{8125.3851435311, "optic_SOS"}, // 0.53%
				{8178.44636802089, "optic_LRPS"}, // 0.53%
				{8227.56917503844, "10Rnd_127x54_Mag"}, // 0.49%
				{8275.56917503844, "IEDLandSmall_Remote_Mag"}, // 0.48%
				{8323.56917503844, "IEDUrbanSmall_Remote_Mag"}, // 0.48%
				{8371.56917503844, "DemoCharge_Remote_Mag"}, // 0.48%
				{8418.62799856785, "Extremo_Item_InstaDoc"}, // 0.47%
				{8458.62799856785, "H_MilCap_oucamo"}, // 0.40%
				{8498.62799856785, "H_MilCap_ocamo"}, // 0.40%
				{8538.62799856785, "H_MilCap_mcamo"}, // 0.40%
				{8578.62799856785, "H_MilCap_blue"}, // 0.40%
				{8618.62799856785, "H_MilCap_rucamo"}, // 0.40%
				{8658.62799856785, "H_MilCap_dgtl"}, // 0.40%
				{8697.40350877193, "muzzle_snds_B"}, // 0.39%
				{8736, "20Rnd_762x51_Mag"}, // 0.39%
				{8770, "7Rnd_408_Mag"}, // 0.34%
				{8804, "5Rnd_127x108_Mag"}, // 0.34%
				{8837.33333333333, "muzzle_snds_93mmg_tan"}, // 0.33%
				{8870.66666666667, "muzzle_snds_338_green"}, // 0.33%
				{8904, "muzzle_snds_B"}, // 0.33%
				{8937.33333333334, "muzzle_snds_338_sand"}, // 0.33%
				{8970.66666666667, "muzzle_snds_93mmg"}, // 0.33%
				{9004, "muzzle_snds_338_black"}, // 0.33%
				{9034, "H_HelmetSpecB_blk"}, // 0.30%
				{9064, "H_HelmetSpecB_paint2"}, // 0.30%
				{9094, "H_HelmetSpecB_paint1"}, // 0.30%
				{9124, "H_HelmetSpecB"}, // 0.30%
				{9154, "H_HelmetIA"}, // 0.30%
				{9184, "H_HelmetB"}, // 0.30%
				{9214, "H_HelmetB_paint"}, // 0.30%
				{9244, "H_HelmetB_light"}, // 0.30%
				{9274, "H_HelmetB_plain_blk"}, // 0.30%
				{9302.57142857143, "optic_KHS_blk"}, // 0.29%
				{9331.14285714286, "optic_AMS_khk"}, // 0.29%
				{9359.71428571429, "optic_AMS"}, // 0.29%
				{9388.28571428572, "optic_KHS_tan"}, // 0.29%
				{9416.85714285715, "optic_KHS_hex"}, // 0.29%
				{9445.42857142858, "optic_KHS_old"}, // 0.29%
				{9474.00000000001, "optic_AMS_snd"}, // 0.29%
				{9494.00000000001, "H_HelmetB_light_sand"}, // 0.20%
				{9514.00000000001, "H_HelmetB_grass"}, // 0.20%
				{9534.00000000001, "H_HelmetB_snakeskin"}, // 0.20%
				{9554.00000000001, "H_HelmetB_desert"}, // 0.20%
				{9574.00000000001, "H_HelmetB_black"}, // 0.20%
				{9594.00000000001, "H_HelmetB_sand"}, // 0.20%
				{9614.00000000001, "H_HelmetB_light_grass"}, // 0.20%
				{9634.00000000001, "H_HelmetB_light_snakeskin"}, // 0.20%
				{9654.00000000001, "H_HelmetB_light_desert"}, // 0.20%
				{9674.00000000001, "H_HelmetB_light_black"}, // 0.20%
				{9694.00000000001, "5Rnd_127x108_APDS_Mag"}, // 0.20%
				{9714.00000000001, "H_BandMask_khk"}, // 0.20%
				{9734.00000000001, "H_BandMask_reaper"}, // 0.20%
				{9754.00000000001, "H_BandMask_demon"}, // 0.20%
				{9774.00000000001, "H_HelmetIA_net"}, // 0.20%
				{9794.00000000001, "H_HelmetIA_camo"}, // 0.20%
				{9810.00000000001, "SatchelCharge_Remote_Mag"}, // 0.16%
				{9820.00000000001, "H_HelmetCrew_B"}, // 0.10%
				{9830.00000000001, "H_HelmetLeaderO_ocamo"}, // 0.10%
				{9840.00000000001, "H_HelmetSpecO_ocamo"}, // 0.10%
				{9850.00000000001, "H_HelmetLeaderO_oucamo"}, // 0.10%
				{9860.00000000001, "H_HelmetO_oucamo"}, // 0.10%
				{9870.00000000001, "H_CrewHelmetHeli_I"}, // 0.10%
				{9880.00000000001, "H_CrewHelmetHeli_O"}, // 0.10%
				{9890.00000000001, "H_CrewHelmetHeli_B"}, // 0.10%
				{9900.00000000001, "H_HelmetSpecO_blk"}, // 0.10%
				{9910.00000000001, "H_HelmetB_camo"}, // 0.10%
				{9920.00000000001, "H_PilotHelmetHeli_O"}, // 0.10%
				{9930.00000000001, "H_PilotHelmetHeli_B"}, // 0.10%
				{9940.00000000001, "H_PilotHelmetFighter_I"}, // 0.10%
				{9950.00000000001, "H_PilotHelmetFighter_O"}, // 0.10%
				{9960.00000000001, "H_PilotHelmetFighter_B"}, // 0.10%
				{9970.00000000001, "H_HelmetCrew_I"}, // 0.10%
				{9980.00000000001, "H_HelmetCrew_O"}, // 0.10%
				{9990.00000000001, "H_PilotHelmetHeli_I"}, // 0.10%
				{10000, "H_HelmetO_ocamo"} // 0.10%
			};
		}; 
	};
	class Buildings
	{
		//--- Base loot classes (should be used as a base dervie class for all building)
		class Poor {table = "CivillianLowerClass";};
		class Wealthy {table = "CivillianUpperClass";};
		class Shop {table = "Shop";};
		class Industrial {table = "Industrial";};
		class Factories {table = "Factories";};
		class VehicleService {table = "VehicleService";};
		class Military {table = "Military";};		
		class Medical {table = "Medical";};
		class Tourist {table = "Tourist";};

		//--- Enoch assets
		class Land_Workshop_01_F : Industrial {positions[] = {{0,0,-1.15955}};};
		class Land_Workshop_02_F : Industrial {positions[] = {{0,0,-1.15955}};};
		class Land_Workshop_03_F : Industrial {positions[] = {{0,0,-1.15955}};};
		class Land_Workshop_04_F : Industrial {positions[] = {{0,0,-1.15955}};};
		class Land_House_1B01_F : Poor {positions[] = {{0,0,-1.15955}};}; 
		class Land_House_1W02_F : Poor {positions[] = {{0,0,-1.15955}};}; 
		class Land_House_1W03_F : Poor {positions[] = {{0,0,-1.15955}};}; 
		class Land_House_1W04_F : Poor {positions[] = {{0,0,-1.15955}};};
		class Land_House_1W05_F : Poor {positions[] = {{0,0,-1.15955}};};
		class Land_House_1W06_F : Poor {positions[] = {{0,0,-1.15955}};};
		class Land_House_1W07_F : Poor {positions[] = {{0,0,-1.15955}};};
		class Land_House_1W08_F : Poor {positions[] = {{0,0,-1.15955}};};
		class Land_House_1W09_F : Poor {positions[] = {{0,0,-1.15955}};};
		class Land_House_1W10_F : Poor {positions[] = {{0,0,-1.15955}};};
		class Land_House_1W11_F : Wealthy {positions[] = {{0,0,-1.15955}};};
		class Land_House_2W01_F : Wealthy {positions[] = {{0,0,-1.15955}};};
		class Land_House_2W03_F : Wealthy {positions[] = {{0,0,-1.15955}};};
		class Land_House_2B03_F : Wealthy {positions[] = {{0,0,-1.15955}};};
		class Land_House_2B04_F : Wealthy {positions[] = {{0,0,-1.15955}};};
		class Land_GarageRow_01_small_F : Factories {positions[] = {{0,0,-1.15955}};};
		class Land_HealthCenter_01_F : Medical {positions[] = {{0,0,-1.15955}};};
		class Land_Shed_14_F : Poor {positions[] = {{0,0,-1.15955}};}; 
		class Land_FuelStation_01_workshop_F : VehicleService {positions[] = {{4.03857, -3.77539, -2.28235}, {-2.08545, 0.887207, -2.28234}, {0.974609, 4.27832, -2.28235}};};
		class Land_FuelStation_02_workshop_F : Land_FuelStation_01_workshop_F {};

		//--- Unsorted
		class Camp { table = "Military"; positions[] = {{0.833252,-1.52246,-1.15955},{0.38501,0.963867,-1.15955}};}; 
		class CampEast { table = "Military"; positions[] = {{-1.05713,-1.80762,-1.31049},{0.627441,1.83398,-1.31049}};}; 
		class CampEast_EP1 { table = "Military"; positions[] = {{-0.670898,0.95459,-1.31049},{1.68506,-2.43384,-1.31049},{-1.76318,-1.62646,-1.31049}};}; 
		class Land_A_BuildingWIP{ table = "Industrial"; positions[] = {{-3.14844, -5.58789, -5.65518}, {-1.85938, -5.81152, -5.63141}, {4.09717, -5.40234, -6.53845}, {-2.20605, -9.73926, -6.53842}, {15.7676, -9.83789, -6.53851}, {13.5439, -2.83203, -6.53848}, {17.6421, -1.3916, -6.54041}, {13.8086, 2.7334, -6.53848}, {7.00244, 8.17773, -6.53845}, {11.314, 2.68555, -6.53848}, {4.07764, -3.68945, -5.44043}, {-7.43945, 0.371094, -5.65155}, {-14.062, 0.277344, -5.62378}, {-14.2495, 1.77344, -5.70969}, {-14.812, 5.09375, -6.53839}, {-15.583, -2.84961, -6.53839}, {-3.61963, 1.87109, -6.53842}, {0.979004, 6.09277, -6.53845}, {-0.723633, 1.63965, -6.53842}, {-10.311, -8.09375, -6.53839}, {-10.563, -9.71875, -6.53839}, {-15.5586, -8.02344, -6.53839}, {-15.856, -6.28516, -6.53839}, {-15.687, -9.82422, -6.53839}, {-13.0762, -5.97363, -5.7627}, {-23.3647, 2.91895, -5.44043}, {-24.146, 11.1084, -6.53833}, {-19.6914, 1.83008, -6.53836}, {-20.6816, 0.0703125, -6.53836}, {-24.0474, -0.428711, -6.53833}, {-20.4473, -3.46387, -6.53836}, {-24.0986, -9.08594, -6.53833}, {-24.4155, -6.00391, -6.53833}, {-20.5938, -6.2373, -6.53836}, {-15.4238, -14.1152, -6.53854}, {-16.5015, -16.1924, -6.53745}, {-15.7754, -12.0322, -2.53946}, {-12.0918, -15.3262, -2.54871}, {-2.55957, -11.5225, -2.54626}, {14.9517, -12.8408, -2.54712}, {-20.2593, -9.42871, -2.53836}, {-20.3716, -6.05664, -1.50925}, {-20.3267, -4.92676, -2.24194}, {-24.0122, 6.24805, -2.24194}, {-22.0762, 4.8877, -2.53836}, {-23.3174, 1.74219, -2.53836}, {-20.1558, -3.00293, -2.53836}, {-23.5562, 8.0957, -2.53836}, {-23.2588, 11.2002, -2.53836}, {-20.4937, 11.4336, -2.53836}, {-14.7183, 11.8477, -2.53836}, {-7.63477, 11.7461, -2.53836}, {-12.3115, 11.5293, -2.53836}, {-6.10547, 11.8447, -1.50925}, {-6.36719, 12.1943, -1.50925}, {3.75732, 7.59277, -1.67697}, {0.422852, 7.47168, -1.70831}, {6.26514, 7.7627, -2.24194}, {9.79248, 7.80566, -1.70178}, {15.2832, 11.4229, -2.53836}, {15.0947, 2.58887, -2.53836}, {15.7603, -7.47852, -2.24194}, {-8.40771, -9.50781, -1.71759}, {-5.11719, -9.9209, -1.67697}, {-12.1167, -9.67676, -2.53836}, {20.4683, 2.01953, -0.522827}, {17.0225, -0.373047, 1.36566}, {15.6196, -2.2207, 2.39447}, {15.4482, -1.30371, 3.43604}, {4.53467, -0.344727, 2.1727}, {4.93066, -9.22461, 2.49985}, {3.80762, -9.92578, 1.46878}, {-5.08057, -10.0117, 2.33212}, {-11.5029, -2.50488, 2.49985}, {-10.1919, -2.4043, 2.23288}, {-11.1997, -1.53711, 1.46982}, {-13.3809, 6.15527, 1.46548}, {-23.0327, 7.13281, 1.46921}, {-23.5771, 11.1602, 1.46667}, {-6.48535, 12.2539, 2.49985}, {-5.90674, 11.6865, 2.49985}, {7.15771, 10.6523, 1.71719}, {8.11377, 10.3662, 2.2601}, {8.2959, 9.55273, 1.45319}, {3.88965, 7.45508, 2.31458}, {0.878418, 7.35352, 1.4581}, {-0.586426, 1.18262, 1.46307}, {-3.2998, -4.45996, 1.46823}, {-14.3936, -13.1406, 1.47403}, {-14.7944, -16.7051, -0.521057}, {-13.9106, -11.4658, 5.46036}, {-20.3994, -11.5693, 5.46036}, {-23.5679, -9.23633, 5.29898}, {-20.9424, -2.02734, 5.26999}, {-15.8379, 3.77148, 5.23944}, {-23.791, 11.7197, 5.23376}, {-10.79, 5.51563, 6.36908}, {-11.2134, 4.70117, 6.36908}, {-11.2139, 3.77051, 6.36908}, {-8.74023, -2.16406, 6.36908}, {-1.16406, -2.23145, 5.22269}, {0.992188, -0.121094, 5.21082}, {1.82422, 9.36816, 5.17905}, {-6.10986, 8.35742, 5.20145}, {-0.334961, -8.71875, 5.24103}, {8.00879, -8.95996, 5.68362}, {9.82324, -9.67578, 5.90091}, {10.0347, -8.60547, 5.63202}, {14.4648, -8.46582, 1.4556} };};
		class Land_A_Castle_Bergfrit{ table = "Military"; positions[] = {{-1.99854, -3.15137, -2.7305}, {0.378418, 2.43262, -2.7305}, {2.5542, -0.771484, -2.73053}, {2.54443, 1.58301, 1.82468}, {2.04199, 4.13281, 1.82468}, {2.12354, -3.75879, 3.84039}, {-2.38281, -3.56152, 6.30399}, {-2.36182, 4.15039, 8.76547}, {1.78271, 3.70703, 8.76547}, {0.699707, 0.275391, 8.76547}, {-0.0722656, -1.68262, 8.76547}, {-2.7373, -4.28027, 13.4688}, {-3.38818, 4.76465, 16.8546}, {2.22363, 4.5791, 16.8546}, {-0.0439453, 1.53027, 16.8546}, {2.23877, -1.58496, 16.8546}, {-3.07275, -4.15234, 16.8546}, {0.901855, -4.50586, 16.8546} };};
		class Land_A_Castle_Donjon{ table = "Military"; positions[] = {{-8.71484, -7.39844, -9.34744}, {7.91943, -8.25684, -9.34741}, {8.18701, 5.83105, -9.34756}, {-5.8916, 8.05859, -9.34744} };};
		class Land_A_Castle_Gate { table = "CivillianLowerClass"; positions[] = {{0.244141,-4.48486,-3.14362},{-1.25293,2.98779,-3.07028},{4.50684,-3.31152,-2.94885},{4.55176,3.29834,-2.94858},{7.94824,1.4082,-2.91003}};};
		class Land_A_Castle_Stairs_A { table = "CivillianLowerClass"; positions[] = {{0.697998,-1.79395,0.726929},{8.3938,0.890625,0.875122},{8.17261,1.48926,7.02588}};};
		class Land_A_Castle_Wall2_30{ table = "Military"; positions[] = {{-7.13525, -0.263672, -6.09454} };};
		class Land_A_CraneCon { table = "Industrial"; positions[] = {{-8.87793, 0.000976563, -16.8039}, {-10.1675, -0.0444336, 5.80902}, {-8.71045, 1.604, 5.75985}, {-7.36084, -1.45361, 5.79838}};};
		class Land_A_FuelStation_Build{ table = "Shop"; positions[] = {{-1.84619, 0.189453, -0.599792}, {1.30908, -0.819336, -1.57574}, {-1.52246, 0.72168, -0.765015}, {-1.53516, 1.01172, -1.57574}, {-1.26416, -1.00195, -1.57574}, {0.151855, 1.09082, -1.57574}, {-3.47852, -2.31055, -1.62723} };};
		class Land_A_FuelStation_Shed{ table = "VehicleService"; positions[] = {{7.00537, 1.36328, -2.85703}, {0.142578, -3.34863, -2.85703}, {-0.078125, -1.41699, -2.85703}, {-6.92969, 1.64551, -2.85703}, {-6.60938, -1.80371, -2.85703}, {5.01318, 3.17871, -3.16986}, {-3.96973, -0.0634766, -3.16989}, {0.268555, 5.95801, -3.16989} };};
		class Land_A_GeneralStore_01 {table = "Shop"; positions[] = {{11.8149,1.27979,-1.20155},{5.10449,1.61377,-1.20155},{1.70215,3.4292,-1.20155},{-0.771973,2.04102,-1.20155},{-3.59473,-6.04688,-1.20155},{-2.38428,-5.82202,-1.20155},{10.5171,-6.46729,-1.20155},{12.8472,-4.97754,-1.20155},{8.63623,-3.65381,-1.20155},{-3.22852,-10.0454,-1.21081},{11.0537,-0.321289,-0.661549},{11.0303,2.8833,0.0484514},{10.6646,1.86377,-0.651548},{6.66162,-2.69971,-0.611548},{6.02979,-2.6416,-0.611548},{2.16553,-2.68262,-0.611548},{-1.36963,-2.75684,-0.611548},{-0.919434,-0.283936,-0.301549},{0.583008,-0.308594,-1.01155},{0.804199,3.0752,-0.311549},{4.90234,3.04053,0.0484514},{-5.73779,0.694824,-0.20155},{0.796875,0.0898438,-0.301549},{2.73145,2.66406,-0.301549},{0.523926,2.81567,-1.01155},{-4.8208,2.87158,-0.701549},{-3.87061,-5.0415,-0.731549},{-4.73096,-5.00537,0.408451},{-2.1792,-5.02222,-0.351549},{-3.39795,-6.95508,-0.731549},{-3.58203,-7.24365,-0.731549},{-3.49756,-7.12695,0.408451},{-9.95215,-6.05859,0.348451},{13.4136,-5.93457,0.408451},{13.4463,-4.45898,0.028451},{13.4424,-6.20215,-0.351549},{2.93018,-8.67773,-0.351549},{1.53516,-6.79199,-0.351549},{7.16211,-5.12427,-0.351549},{6.79346,-5.11816,-0.73155},{2.87158,-6.91943,-0.73155},{0.0541992,-5.03271,-0.73155},{-1.979,-8.6875,-0.73155},{-5.84424,-5.04883,-0.73155},{-6.99268,-5.06836,-1.11155},{5.23535,-6.8335,-1.11155},{0.290039,-8.68701,-1.11155},{-0.649414,-8.68115,0.40845},{-0.983398,-9.56299,-1.21082}};}; 
		class Land_A_GeneralStore_01_dam { table = "Shop"; positions[] = {{-13.3132, 3.21163, -1.23798}, {-9.16451, 2.51532, -1.22799}, {-1.13962, 0.837041, -1.22799}, {-7.88974, 4.53994, -1.22799}, {9.31811, 4.66296, -1.22799}, {4.04346, -3.07997, -1.22799}, {-9.04793, -2.97005, -1.22799}, {4.17007, -6.53652, -1.22799}, {12.7788, -7.32168, -1.22799}, {6.21704, -9.90356, -1.23726}, {3.23797, -8.68623, -1.22799}, {-1.67622, -6.94917, -1.22799}, {-5.55458, -10.1043, -1.23725}, {-9.31926, -5.93684, -1.22799}, {-11.9383, 6.28013, -1.23798}, {-1.71843, 6.64993, -1.23798}, {-6.14697, 11.1813, -1.23798}, {7.98732, 6.62666, -1.23798}, {-11.7943, -10.0899, -1.23725}, {-1.43714, 3.0325, -0.305046}, {-0.327382, 3.13065, -0.655312}, {-1.0225, 3.05731, 0.0500793}, {1.86535, 2.51006, 0.0500793}, {1.21782, 2.90856, -0.305046}, {1.64165, 2.6746, -0.655312}, {0.779274, 3.13058, -1.01403}, {4.05817, 3.14221, -0.305046}, {3.2809, 3.12756, 0.0500793}, {3.57365, 3.07624, -0.655312}, {6.20027, 3.10308, -1.01403}, {5.04238, 3.07599, -0.655312}, {5.77182, 3.10004, -0.305046}, {6.35802, 3.08948, 0.0500793}, {10.6899, 3.02518, 0.0500717}, {10.6705, 2.1763, -0.305054}, {10.7108, 2.84949, -0.655319}, {8.18988, 1.3996, -1.205}, {10.5742, 0.790707, -0.655312}, {10.6333, 0.174017, -1.01403}, {10.7525, -0.131318, 0.0500717}, {12.4376, 2.65073, -1.205}, {12.2171, 0.803564, -1.205}, {11.1328, -0.227731, -0.655319}, {11.0659, 0.979052, 0.0500717}, {11.1145, 1.79792, -0.655319}, {5.71382, -0.0662276, -0.829422}, {5.2627, 2.60708, -0.655312}, {2.91739, 2.70152, 0.0500793}, {3.60611, 2.64757, -0.305046}, {2.88875, 2.60598, -1.01403}, {1.75951, 2.16879, -0.305046}, {0.761851, 2.6026, -0.655312}, {-1.50634, 2.61512, -1.01403}, {-0.452823, 2.77097, -0.305046}, {-0.976926, 2.57271, 0.0500793}, {-0.769009, 0.125573, -0.305046}, {-1.45525, 0.155318, -0.655312}, {-0.61697, 0.159371, -1.01403}, {1.56764, 0.157804, -0.655312}, {0.529226, 0.11094, -1.01403}, {0.991901, 0.172732, -0.305046}, {0.369918, 0.0926221, 0.0500793}, {3.82577, 0.170089, 0.0500793}, {3.37044, 0.189306, -0.305046}, {2.94896, 0.137621, -0.655312}, {3.87988, 0.164391, -1.01403}, {-4.71527, 0.790222, -0.20253}, {-4.7215, 2.85335, -0.20253}, {-5.08368, 2.5849, -0.539207}, {-1.18811, -2.71405, -0.516342}, {0.503073, -2.74276, -0.516342}, {4.75581, -2.5547, -0.516342}, {4.07009, -2.56915, -0.516342}, {2.27301, -2.63226, -0.516342}, {6.9426, -2.67918, -0.516342}, {12.696, -1.77594, -1.205}, {-1.70928, -0.262043, 0.0500793}, {-1.1817, -0.265038, -0.305046}, {-1.59531, -0.337629, -0.655312}, {-0.318181, -0.330201, -1.01403}, {0.275641, -0.325039, -0.655312}, {1.19134, -0.327637, -0.305046}, {2.84851, -0.330622, -0.305046}, {3.90446, -0.31851, -0.655312}, {6.64037, -3.89522, -1.205}, {7.10785, -5.17638, -0.729218}, {6.75487, -5.08525, -0.34922}, {6.94535, -5.13744, 0.415779}, {5.2173, -6.93115, -1.10422}, {5.19606, -6.65927, -0.34922}, {5.24303, -6.98375, 0.415779}, {2.82118, -6.80652, 0.415779}, {2.86729, -6.75014, -0.34922}, {2.83758, -6.84638, -1.10422}, {1.60095, -6.58395, -0.34922}, {1.40267, -6.94696, -1.10422}, {1.474, -6.87338, 0.415779}, {0.0407344, -6.994, -0.729218}, {0.0242132, -6.64204, 0.030777}, {1.06262, -5.14998, -0.34922}, {0.013731, -5.05422, -0.729218}, {1.84723, -5.09927, -0.34922}, {1.65986, -5.05524, -1.10422}, {0.0932775, -5.05866, 0.415779}, {-0.74178, -5.10426, -0.729218}, {-0.401419, -5.07576, 0.030777}, {-1.95489, -5.07175, -0.729218}, {-1.48696, -5.08007, 0.030777}, {-1.33055, -5.1049, -1.10422}, {-2.29532, -5.15356, 0.415779}, {-3.93739, -5.01003, -0.729218}, {-3.65301, -5.07878, 0.415779}, {-4.65414, -5.05064, 0.030777}, {-5.14069, -5.1047, -0.34922}, {-5.95986, -5.1113, -0.729218}, {-6.78999, -5.05638, -1.10422}, {-6.97633, -5.09124, -0.34922}, {-5.12923, -5.06933, -1.10422}, {-6.70999, -5.04241, 0.415779}, {-5.42178, -6.53319, 0.030777}, {-5.40101, -6.87035, -0.729218}, {-1.66498, -6.74721, 0.030777}, {-3.49282, -7.16946, -0.34922}, {-3.32536, -7.01261, -1.10422}, {-3.52017, -7.08102, 0.415779}, {-2.63581, -8.63216, 0.415779}, {-2.8983, -8.65507, -0.34922}, {-1.88279, -8.64799, -0.729218}, {-1.1411, -8.59853, -1.10422}, {-1.38407, -8.70545, -0.34922}, {-0.272978, -8.66535, 0.030777}, {-0.60414, -8.68214, 0.415779}, {0.413357, -8.63573, -0.34922}, {0.183436, -8.62459, -1.10422}, {1.31434, -8.61044, -1.10422}, {1.01774, -8.69183, -0.34922}, {2.12006, -8.66396, -0.34922}, {1.79799, -8.61518, -0.729218}, {2.7806, -8.59785, -0.729218}, {2.61752, -8.63846, 0.030777}, {3.41135, -8.60047, 0.415779}, {3.65061, -8.64556, -0.34922}, {2.86356, -5.05122, 0.415779}, {1.75309, -5.03841, 0.415779}, {0.875418, -5.17596, -1.1049}, {2.42261, -5.03051, -0.729218}, {13.3542, -5.21465, 0.415779}, {13.3745, -4.4375, 0.030777}, {13.3458, -4.61958, -0.34922}, {8.74427, -8.02142, -1.20501}};};
		class Land_A_GeneralStore_01a {table = "Shop"; positions[] = {{13.2969,4.94678,-1.20155},{2.97559,7.32373,-1.20155},{-8.35352,-0.0244141,-1.20155},{7.78223,4.45801,-1.20155},{6.59863,-0.292969,-1.20155},{-6.92285,-1.6709,-1.20155},{11.9189,-2.81885,-1.20155},{-1.85547,-2.16162,-1.20155},{12.4678,4.51172,-1.20155},{12.2119,6.25098,-0.301548},{12.1895,3.68262,0.0484505},{11.8174,6.31689,-0.65155},{-8.67676,-2.41064,-1.13155},{-4.2002,-3.14355,-0.351551},{-0.165039,-1.3457,-0.351551},{14.6006,-1.38281,-0.351551},{3.03809,-5.03418,-0.351551},{0.512695,3.40527,-0.31155},{4.77637,6.76172,-0.301548},{7.27539,0.938477,-0.621552},{3.96777,1.00488,-0.621552},{0.389648,0.95459,-0.621552},{5.04004,3.44287,-0.65155},{1.85254,6.4248,-0.65155},{-3.65723,6.61133,-0.20155},{-4.39746,4.46191,-0.691551},{6.9248,6.38574,-1.01155},{2.77637,3.38477,-1.01155},{-0.217773,6.68066,-1.01155},{4.49707,-4.98828,0.408451},{-2.33203,-1.35205,0.408451},{2.0127,-1.36572,0.408451},{6.39746,-3.04395,0.408451},{14.6045,-0.722168,0.408451},{-2.43164,-3.73682,0.02845},{-4.77539,-1.35986,0.02845},{-0.436523,-3.04297,0.02845},{14.6104,-2.17139,0.02845},{12.6592,0.830078,0.34845},{4.00684,-3.15039,-0.351551},{2.7334,-3.0415,-0.731548},{-2.67676,-1.36133,-0.731548},{-1.00488,-5.00537,-0.731548},{8.34863,-1.43018,-0.731548},{1.8291,3.77197,-0.661549}};}; 
		class land_a_hospital { table = "Medical"; positions[] = {{17.665,-4.67188,-7.2566},{-20.7139,-1.48047,-7.2566},{-15.6924,8.60889,-7.2566},{-15.6064,1.95557,-6.8266},{-16.2139,2.27051,-7.2566},{-8.68652,4.19189,-3.7576},{14.2441,-3.98535,-3.7576},{21.5693,5.16455,1.19051},{18.3779,2.40869,6.2524},{-15.3359,-1.25439,3.40458},{-20.3252,0.410156,-3.82761},{9.97754,-0.814453,-7.2566},{-19.6143,1.83887,-7.1666},{-19.6055,1.6084,-6.7866},{-19.583,4.91748,-6.7866},{-19.5576,4.7417,-6.0266},{-22.1982,9.59033,-7.2566},{-12.3379,9.53857,-6.8266},{-3.23438,6.01758,-6.8266},{-13.626,3.04248,-6.0466},{2.86426,-1.68604,-6.6466},{-5.58594,1.38232,-3.7576},{-4.05762,-2.48584,-3.7576},{-11.8428,5.15576,-2.5976},{-5.57129,-3.17236,-2.5976},{-5.65332,5.01416,-2.5976},{-12.5439,-2.33838,-3.6876},{-12.5801,-1.32617,-3.3076},{-12.5928,-1.56299,-2.9276},{-12.6162,-2.24805,-2.1676},{-12.5654,2.4126,-2.5476},{14.8721,3.96875,3.66054},{16.9033,-1.33838,4.01669},{21.3174,4.88916,6.2524},{-4.00488,7.89893,-3.82761}};};
		class Land_A_Hospital_dam { table = "Medical"; positions[] = { };};
		class Land_A_Mosque_big_addon_EP1 { table = "Tourist"; positions[] = {{-5.10791,-1.75098,-6.4124},{6.30908,-3.39795,-6.38554},{6.87109,2.81934,-6.38554},{2.14111,-4.38086,-6.35463},{4.86475,4.65576,-6.38554},{-4.72021,-10.5127,-1.15605}};}; 
		class Land_A_Mosque_big_hq_EP1 { table = "Tourist"; positions[] = {{4.06592,-6.90674,-9.31999},{5.25195,4.07666,-9.31999},{5.70264,7.5376,-4.04752},{-4.78857,-7.00684,-4.04753},{3.93262,9.41846,0.567287},{0.882324,-0.134766,-9.31999}};}; 
		class Land_A_Mosque_big_wall_EP1 { table = "Tourist"; positions[] = {{2.81543,3.9458,-2.02844},{-4.94531,3.60645,5.18165}};}; 
		class Land_A_Mosque_small_1_EP1 { table = "Tourist"; positions[] = {{2.45117,3.39063,-2.04604},{0.183105,0.826172,-2.04605},{6.66406,4.11719,-1.9437},{0.49707,-1.33301,-1.69603}};}; 
		class Land_A_Mosque_small_2_EP1 { table = "Tourist"; positions[] = {{1.33496,-0.726074,-2.48535},{-0.794922,-1.74414,-2.48538}};};
		class Land_A_MunicipalOffice { table = "Tourist"; positions[] = {{0.0347652, -11.033, -18.9296}, {-12.3995, -6.72488, -18.8133}, {12.095, 11.5999, -19.5408}, {11.9074, 11.5986, -3.09184}, {-12.1743, -6.73535, -3.08383}, {-4.27273, -9.00323, -17.6446}, {4.02372, -8.49653, -17.6533}, {-7.14731, -6.52566, -3.12036}, {6.81072, -6.44935, -3.15271}, {4.8063, -7.40412, -0.195465}, {-5.45926, -0.0841029, -0.19548}, {5.11294, -0.131053, 0.220596}, {-9.8258, 10.9518, -3.76302}, {9.87172, 11.3735, -3.59163}, {-9.89398, -6.13983, -3.81548}, {9.85817, 1.50357, -3.61351}, {9.85666, -6.09487, -3.61453}, {-0.175239, -6.458, -18.4554}, {-9.82524, 1.29699, -3.81548}, {-0.313876, 1.64431, -0.657654}, {1.04003, 10.0456, -18.4956}, {-1.34363, 10.9804, -18.7639}, {2.51298, -6.06364, -18.4904}, {4.23781, -7.74818, -18.4904}, {-4.33726, -7.67916, -18.4904}, {-3.97374, -5.6676, -18.4904}};};
		class Land_A_Office01 { table = "CivillianUpperClass"; positions[] = {{-7.84912,6.3855,-4.528},{3.84424,3.27051,-4.528},{-0.0383301,3.51733,-4.528},{5.37695,5.63379,-4.528},{15.5393,-1.90015,-4.528},{13.8057,-2.3811,-4.528},{10.114,3.44849,-4.528},{10.3008,6.32495,-4.528},{1.71021,1.66675,-4.528},{1.58032,5.87671,-2.028},{-0.599854,7.08984,-2.028},{3.87769,6.84229,-2.028},{-7.6709,6.72485,-2.038},{-4.729,4.19556,-2.028},{-7.93091,3.2041,-2.038},{10.2354,-1.9187,-2.018},{6.9812,-4.30933,-2.038},{15.4075,6.03198,-2.038},{13.9285,3.40649,-2.038},{0.163086,3.43286,0.472002},{7.13892,3.64844,0.471998},{1.71973,-1.40967,6.72491},{-0.443359,0.61499,-2.028},{-5.22144,-3.69971,-2.028},{3.50342,5.28027,-3.668},{5.68286,4.95898,-4.048},{0.895508,4.98511,-3.288},{2.42017,4.98291,-2.908},{15.8838,-2.62256,-2.908},{4.74072,6.75391,-0.938002},{7.69507,-0.465332,-1.618},{10.7341,-1.90918,-1.158},{6.34229,-2.73242,-0.398003},{-4.86572,7.16187,-0.988003},{-4.27173,4.2207,-0.778002},{-4.56543,5.48193,-1.348},{-8.21387,2.04932,-2.028},{12.6631,2.83398,-1.918},{12.8892,2.82178,-0.778002},{11.5281,7.08887,-1.338},{11.3428,5.02344,-1.158},{11.636,6.34937,-1.338},{-3.802,4.13525,1.71201},{0.720947,3.55957,0.952003},{-3.78076,4.44727,0.952003},{10.7363,3.28833,-3.668},{6.46191,5.13013,-2.908},{7.03906,6.25537,-4.098},{6.68823,5.81177,-3.818},{10.7056,4.13135,-3.288},{2.86792,-0.489014,6.72491}};  }; 
		class Land_A_Office01_EP1 { table = "CivillianUpperClass"; positions[] = {{-14.8096, 5.58398, -1.94606}, {-9.9458, -3.55615, -1.94606}, {-0.203613, -5.9502, -4.43386}, {-13.6958, 0.418945, -4.43575}, {11.3042, 0.20752, -4.43575}, {8.78564, 0.122559, -1.94606}, {1.3042, 0.456543, -1.94606}, {-4.94531, 4.04346, -4.43634}, {-7.71094, 5.03906, -4.42385}, {-6.36768, 0.372559, -4.42385}, {2.04102, 1.06641, -4.42385}, {-1.82129, -3.34961, -4.42385}, {4.52148, -1.91455, -4.42385}, {4.22217, 2.17822, -4.42385}, {1.8208, 2.27881, -4.42385}, {-0.175781, 5.59375, -4.42385}, {-0.588379, 2.41553, -4.42385}, {4.9668, 5.86914, -4.42385}, {2.23438, 4.99902, -4.42385}, {14.0386, -3.5625, -4.42385}, {15.8008, -2.18555, -4.42385}, {12.9346, -1.37744, -4.42385}, {12.415, -5.17578, -4.42385}, {15.6064, -5.16455, -4.42385}, {2.7749, -4.37646, -1.92385}, {-2.17139, -0.491699, -1.92385}, {-8.39404, 1.10498, -1.92385}, {-6.19775, -0.591797, -1.92385}, {-12.3223, -0.466797, -1.92385}, {-0.499023, 4.38281, -1.92385}, {0.591797, 2.1582, -1.92385}, {3.83154, 2.11523, -1.92385}, {5.68994, 5.49414, -1.92385}, {4.39697, 5.97363, -1.92385}, {2.19922, 4.09082, -1.92385}, {7.99756, -1.40967, -1.92385}, {10.2271, -1.65088, -1.92385}, {10.5708, -5.52734, -1.92385}, {6.93408, -5.44434, -1.92385}, {9.1792, -3.80566, -1.92385}, {13.1279, 2.18994, -1.92385}, {15.9473, 2.24805, -1.92385}, {13.9414, 1.96973, -1.92385}, {15.9473, 4.72803, -1.92385}, {11.9033, 5.99805, -1.92385}, {12.1113, 4.5166, -1.92385}, {14.8696, 6.0459, -1.92385}, {14.6475, 0.237793, -1.92385}, {-5.10596, -3.45947, -1.92385}, {-14.5137, -4.53809, -1.92385}, {-15.2437, 0.541504, -1.92385}, {-3.06885, 2.34424, 0.576158}, {0.447754, 3.20117, 0.576158}, {1.53369, 0.0805664, 0.576158}, {13.7959, -3.8623, 0.576148}, {7.87402, -3.50684, 0.576148}, {8.68799, 2.62305, 0.576158}, {14.5649, 4.7417, 0.576158}, {-1.81641, 5.51514, 0.576158}, {-12.2578, 5.27734, 0.576158}, {-11.8301, 0.54834, 0.576158}, {-5.10156, 4.01758, 0.576158}, {-6.57129, 0.300293, 0.576158}};};
		class Land_A_Office02 : Medical { positions[] = {{5.18066, -4.73828, -8.16971}, {4.71875, -6.9502, -8.16971}, {-0.684082, -6.63672, -8.16971}, {0.969727, -4.79199, -8.16971}, {-2.16553, -4.94922, -8.16971}, {-1.6167, -8.62695, -8.16971}, {4.24658, -8.46191, -8.16971}, {6.85059, -5.94629, -8.16971}, {-23.6113, 2.84961, -8.14496}, {-21.3701, 0.183594, 5.33957}, {-16.7915, 6.58984, 5.33957}, {-9.13721, 2.84961, 5.33957}, {-1.12061, 6.50391, 5.33957}, {7.49609, 4.35352, 5.33957}, {14.4438, 7.34277, 5.33957}, {20.1865, 3.21289, 5.33957}, {19.7627, -2.50586, 5.33957}, {11.1973, -1.59473, 5.33957}, {3.24707, 0.482422, 5.33957}, {1.29785, 2.41309, 6.58099}, {3.11816, 2.31445, 6.58099}, {8.62744, 1.87109, 6.25775}, {-4.78467, -2.81738, 5.33957}, {-12.1602, -0.84082, 5.33957}, {-19.8037, -2.12012, 5.33957}, {-18.9834, 3.85254, 8.67267}, {-17.6201, 0.985352, 8.67267} };};
		class Land_A_Pub_01 { table = "CivillianLowerClass"; positions[] = {{1.17188,5.7522,-5.75623},{6.46191,-1.73706,-5.01623},{6.46777,1.47949,-5.75623},{0.975098,-5.80859,-5.75621},{-5.79736,-2.57813,-1.79123},{-7.35303,-3.7627,-1.79123},{4.56885,0.998291,-1.79123},{3.45947,0.236328,-1.79123},{1.91504,6.302,-1.79123},{0.114258,2.17432,-1.79123},{6.52832,6.10889,-1.79123},{0.555176,0.169189,-1.79123},{-4.37793,-2.64038,-5.75623},{-7.1709,-1.76855,-5.75623},{-0.602051,2.69214,-5.48623},{2.0708,1.98486,-5.19622},{1.37744,7.89722,-5.01622},{3.28076,-1.51782,-4.75623},{2.79395,-1.90845,-4.75622},{1.19043,-1.97632,-4.7562},{4.03418,-5.81592,-5.30621},{1.46143,-6.27979,-5.01621},{-4.8252,-2.66309,-1.78122},{1.16504,1.125,-1.19122},{2.73486,0.744873,-0.701225},{5.04053,-2.60938,-1.78122},{5.00293,2.03491,-1.78122},{2.89844,5.78613,-1.37122},{1.44482,6.51831,-1.31123},{1.77734,7.88013,-1.79123},{5.81934,5.90967,-1.41122},{-3.41016,1.26123,-1.78123},{-7.37891,-1.24756,-5.28622}};};
		class Land_a_stationhouse { table = "Military"; positions[] = {{16.8276, -6.06689, -9.49702}, {18.0313, 0.949219, -9.49702}, {13.0039, -1.52734, -9.49702}, {8.01172, -6.16797, -9.49702}, {2.89258, -5.23535, -9.49702}, {4.76123, 2.36621, -9.49702}, {-2.43115, -8.68945, -4.67533}, {-2.51758, -8.96582, 4.38496}, {-4.17871, -6.95361, 4.38496}, {-1.10156, -7.00537, 4.38496}, {-2.51758, -8.96582, 8.46565}, {-4.01807, -6.94482, 8.74076}, {-2.91162, -4.99414, 8.46565}, {-1.1626, -6.97949, 8.65348}, {-16.0313, 7.47119, -0.534347}, {-10.1348, 8.479, -0.534346}, {-13.1353, -0.644531, -0.534346}, {-16.8257, -7.87744, -0.534346}, {-17.0259, -0.71582, -0.534346}, {-7.30469, -7.68359, -0.534346}, {-1.18945, 8.54395, -0.534346}, {-2.52002, -3.25, -0.534346}, {5.93213, -2.45703, -0.534346}, {5.5166, 2.95996, -0.534346}, {-2.52881, -8.41016, 8.46565}, {-1.19775, -5.2207, 8.46566}, {-3.9165, -7.73242, -9.50939}, {-1.31152, -8.26318, -9.50934}, {-1.31104, -5.96143, -9.50935}, {7.98877, 2.33594, -9.50931}, {13.667, 2.62305, -9.50933}, {17.0571, 3.31006, -9.50933}, {19.1802, -7.53564, -9.50935}, {19.1958, -6.67578, -9.50934}, {19.0898, -5.91699, -9.50931}, {1.29639, 0.0390625, -9.50933}, {1.34521, 2.67578, -9.50932}, {-4.1377, -6.44336, -4.65034}, {-2.62891, -5.78223, -4.65034}, {-1.00928, -6.7251, -4.65034}, {-2.49072, -5.58008, -0.0452251}, {-1.02441, -7.03174, -0.0452251}, {-3.91943, -7.43848, -0.0452251}, {-2.39111, -8.52295, -0.0452251}, {-0.621094, -8.32666, -0.0452251}, {-1.65234, -5.4292, 4.40995}, {-2.55664, -7.26514, 4.40995}};};
		class Land_A_Statue_EP1 { table = "Military"; positions[] = {{-3.323, -2.47486, -3.0537}, {-3.96203, -0.14854, -3.68558}, {2.69689, -3.31896, -3.68781}, {4.20184, 2.43697, -3.68581}};};
		class Land_A_statue01 { table = "Military"; positions[] = {{-3.9281, 3.23573, -3.69238}, {-3.30659, 0.0746951, -3.0612}, {-4.78373, -2.78838, -3.91473}, {1.39729, -3.01576, -3.69559}, {4.27468, 1.56813, -3.69426}, {3.71142, -2.93795, -3.69591}};};
		class Land_A_statue02{ table = "Military"; positions[] = {{4.6875, -1.99219, -1.64734}, {-1.84863, -2.69336, -1.01364}, {-4.91846, 1.02148, -1.64496}, {-0.44873, 3.22754, -1.64468}, {-2.77588, 2.58203, -1.01236}, {4.89502, 3.14746, -1.64539} };};
		class Land_A_TVTower_Base { table = "Military"; positions[] = {{1.13198, -0.34121, -22.391}, {3.86478, -0.358003, -22.26}, {-2.06025, 1.74958, -21.3815}, {-2.36284, 2.01219, -2.24202}, {3.8144, -5.63197, -2.24112}, {3.81397, -5.63232, -2.03239}, {3.48768, 4.96501, -2.24118}, {-6.78396, 4.96502, -2.24118}, {-7.11055, -5.6332, -2.24118}, {-1.373, -7.31932, -2.24355}, {-8.91128, -0.170816, -2.24118}, {5.615, -0.170797, -2.24118}, {-1.71866, -3.85153, -2.24475}, {-1.64814, 7.09235, -2.24118}, {-0.874683, 1.31204, -2.31297}, {-1.9662, -1.93565, -2.31297}};};
		class Land_A_Villa_EP1 { table = "CivillianUpperClass"; positions[] = {{14.839, -7.78454, -5.09365}, {3.2875, 3.66887, -5.09362}, {-5.32624, 14.7269, -5.09365}, {-12.1717, 14.1027, -5.09363}, {9.10045, -2.09661, -1.51084}, {-4.99974, -4.3933, -1.51083}, {4.58371, 6.9794, -1.5106}, {-2.26707, 15.2517, -1.51083}, {-8.68495, 15.0448, -1.51083}, {-15.0063, 14.7216, -1.51083}, {-0.222553, -0.0868157, 1.95679}, {-17.6212, 7.94864, 1.94524}, {-7.53635, 7.94863, 1.94523}, {7.94176, -5.2459, 1.96603}, {7.94164, -17.7298, 1.96616}};};
		class Land_Addon_04_V1_ruins_F { table = "Industrial"; positions[] = {{2.75732, -0.65918, 1.02022}, {2.41504, 1.64258, 1.23257}, {-1.79688, -0.181641, 0.999686}, {-3.42773, -0.144043, 0.999452}, {-3.20703, 4.03564, 1.04629}, {-1.68848, 3.604, 1.09337}, {-0.82373, 2.04053, 0.776043}};};
		class Land_Afbarabizna { table = "Tourist"; positions[] = {{0.800293, -3.07666, -4.22968}, {1.36768, 2.32568, -2.04994}, {5.31543, -3.07031, -4.22968}, {6.75146, -0.595703, -4.20339}, {3.61084, -0.221191, -4.22968}, {3.67188, 4.98926, -4.22968}, {6.58154, 4.66846, -4.22968}, {1.13525, 5.89697, -4.22968}, {-3.77686, 6.05713, -4.22968}, {-4.6792, 2.1665, -4.22968}, {-4.55811, -2.87793, -4.22968}, {-1.24512, -4.05713, -4.22968}, {-4.65576, 2.40771, -0.194571}, {-4.9375, 4.98047, -0.194604}, {-1.39209, 6.07422, -0.194701}, {1.10107, 5.97607, -0.194701}, {3.60303, 5.96484, -0.194701}, {2.89941, 1.30225, -0.194701}, {6.875, 4.70361, -0.194701}, {6.93018, 2.22607, -0.194701}, {6.96045, -0.35498, -0.1947}, {6.96875, -2.89453, -0.194699}, {3.90625, -2.69043, -0.194701}, {0.929199, -2.97607, -0.194701}, {-1.27148, -4.29053, -0.194701}, {-3.78369, -4.29932, -0.1947}, {-4.68066, -2.5542, -0.194561}, {-1.81152, -0.129395, -0.194468}};};
		class Land_Airport_Tower_F { table = "Military"; positions[] = {{2.05518, 2.22998, -10.4663}, {-1.34863, 2.30469, -10.4679}, {-0.622559, 6.95898, -8.96788}, {0.334473, 2.31836, -7.46772}, {-1.43848, 2.35156, -7.46772}, {0.327148, 2.31055, -1.4674}, {-1.44629, 2.34375, -1.4674}, {-0.638184, 6.94336, 1.5282}, {0.175293, 3.18945, 1.5282}, {-0.575195, 2.80908, -1.20874}, {-3.4043, -3.00732, -1.46766}, {-0.564453, -6.25, -1.4674}, {2.21191, -3.04346, -1.46759}, {-0.646973, -0.0229492, 5.6659}, {-2.47119, -2.79297, 5.6659}, {-0.569336, -5.13525, 5.89724}, {1.23535, -2.78271, 5.6659}, {-1.64307, 4.58545, 1.5282}, {-0.590332, 7.95068, 1.77269}, {0.42334, 2.16553, 1.64414}, {-1.06787, 5.80469, -10.4663}, {-0.652344, 6.73242, -5.96491}, {0.639648, 2.4834, -4.46247}, {-1.49805, 1.99219, -4.46247}, {-0.672363, 6.78418, -2.96427}, {2.61865, -2.10303, 3.0338}, {1.92383, -5.4873, 3.0338}, {-0.043457, -6.28516, 3.0338}, {-1.42529, -6.31641, 3.0338}, {-3.14307, -5.59326, 3.0338}, {-2.43213, -1.20361, 2.2352}, {-1.04492, -4.36035, 2.2351}, {1.08398, -0.714844, 2.2352}};};
		class Land_Army_hut_int { table = "Military"; positions[] = {{0.73877, 1.80615, -1.38043}, {0.732422, -0.265625, -1.35674}, {0.771973, -2.23682, -1.357}, {0.766113, 3.60156, -1.39999}, {2.13232, -5.45605, -1.357}, {-0.388184, -5.85791, -1.357}, {0.0917969, -4.70313, -0.627013}, {1.89844, -1.12549, -0.138814}, {2.82227, -1.03711, -0.1377}, {2.76465, -1.1626, -0.92887}, {1.68457, -1.08594, -0.92887}, {-0.658691, -3.07617, -0.137633}, {-1.71387, -3.04248, -0.138907}, {-1.80664, -3.09033, -0.92887}, {-0.602051, -3.04102, -0.92887}, {-1.68359, -1.05078, -0.138871}, {-0.77002, -1.14014, -0.137768}, {-1.68115, -1.07324, -0.92887}, {-0.689453, -0.98291, -0.92887}, {2.78076, 0.945801, -0.137749}, {1.79102, 0.91748, -0.138944}, {2.72412, 0.975586, -0.92887}, {1.76123, 0.915527, -0.92887}, {2.75586, 2.88916, -0.137779}, {1.71533, 2.83838, -0.139035}, {2.75684, 2.83984, -0.92887}, {1.65869, 2.7793, -0.92887}, {-1.82129, 2.7832, -0.139037}, {-0.639648, 2.8584, -0.137611}, {-1.72852, 2.95947, -0.92887}, {-0.769043, 2.86133, -0.92887}, {-0.697266, 0.936523, -0.13768}, {-1.88818, 0.85791, -0.139117}, {-1.77197, 0.930664, -0.92887}, {-0.687012, 1.05859, -0.92887}};};
		class Land_army_hut_storrage { table = "VehicleService"; positions[] = {{0.077024, -3.78535, -1.96286}, {-0.27818, -0.434441, -1.96285}, {1.96844, 4.36508, -1.96286}, {-1.15885, 4.62858, -1.96285}};};
		class land_army_hut2_int { table = "Military"; positions[] = {{-0.421387,-0.0517578,-0.948329},{1.80103,0.945313,-0.948329},{2.24585,-2.6875,-0.948329},{-1.24561,-1.53955,-0.948329}};};
		class Land_Army_hut3_long_int { table = "Military"; positions[] = {{-0.228027, 1.104, -0.273397}, {-1.55762, 0.852539, -0.273397}, {-0.530273, -3.36426, -0.533825}, {-2.22412, -4.48242, -1.22685}, {-0.562012, -1.98291, -1.26261}, {-1.66943, 4.16064, -1.26261}, {1.38477, -2.07324, -0.273397}, {-2.85498, 0.650879, -1.22685}, {0.853516, -4.80957, -1.22685}, {-2.84131, 2.61475, -0.828419}, {-1.81104, 2.65527, -0.828419}, {-2.95996, 2.54785, -0.0372553}, {-1.78125, 2.6333, -0.0386782}, {0.378906, 5.2124, -0.038609}, {1.62305, 5.22607, -0.0371075}, {1.44971, 5.19824, -0.828419}, {0.41748, 5.25537, -0.828419}, {-2.90527, 5.26709, -0.0384636}, {-2.01709, 5.25342, -0.0373917}, {-3.07764, 5.18896, -0.828419}, {-1.86914, 5.28613, -0.828419}, {1.22363, 3.70654, -1.22685}};};
		class Land_Barn_Metal{ table = "Industrial"; positions[] = {{9.94482, -24.1348, -5.44107}, {0.415039, -20.6895, -5.44107}, {6.13574, -11.6406, -5.44107}, {-7.32813, -23.665, -5.4411}, {-7.2124, -13.8799, -5.44107}, {-1.48096, -4.19922, -5.44107}, {-7.53271, 11.665, -5.44107}, {-2.75391, 19.9424, -5.44107}, {7.8125, 20.7227, -5.44113}, {9.08154, 10.71, -5.44107}, {6.17432, 4.85645, -5.44107}, {10.7212, 0.904297, 5.58008}, {10.8838, 20.3154, 5.58008}, {6.78271, 22.3076, 5.58008}, {-6.14404, 23.002, 5.58008}, {-9.56201, 15.874, 5.58008}, {-9.2793, 4.59863, 5.58008}, {-9.72314, -7.65723, 5.58008}, {-9.66504, -24.4238, 5.58008}, {-4.82227, -25.1611, 5.58008}, {4.68359, -25.2461, 5.58008}, {10.8125, -17.4941, 5.58008}, {10.6313, -26.7891, 5.51349}, {5.93213, -3.2207, 5.58008}, {-4.66602, -2.98633, 5.58008} };};
		class Land_Barn_W_01 { table = "Industrial"; positions[] = {{0.319336, 22.0996, -3.16416}, {1.87939, 18.3315, -2.66323}, {-5.38672, 9.02148, -2.66161}, {-6.12598, -9.67822, -2.65835}, {5.98584, 9.46582, -2.66168}, {5.81006, -9.92627, -2.65831}, {-1.06689, -18.0542, -2.6569}, {-6.21777, -14.6694, -2.65749}, {6.47217, 14.5044, -2.66257}, {8.19775, 14.7026, -3.03541}, {-8.12109, -14.8257, -2.99953}, {3.00684, 4.28906, -2.65579}, {-2.79492, 0.774414, -2.65518}, {2.69678, -1.83691, -2.65472}, {0.101563, -7.79834, -2.65368}, {3.08984, -13.8525, -2.65263}, {-1.9707, -12.4604, -2.65287}, {-4.34766, -4.88086, -2.65419}, {0.231934, 6.58936, -2.65619}, {-3.56299, 14.0039, -2.65748}, {1.06836, 12.4033, -2.6572}, {-5.21387, 18.3252, -2.65823}};};
		class Land_Barn_W_02 { table = "Industrial"; positions[] = {{-2.32676, -8.8002, -2.69949}, {1.14762, -8.26461, -2.55434}, {-2.89598, -3.97424, -2.3294}, {0.498258, 0.622072, -2.33128}, {-5.05614, 4.96759, -2.33305}, {4.00359, 5.69124, -2.33334}, {4.19712, -2.84694, -2.32986}, {1.96041, -5.83939, -2.32864}, {-2.19121, 8.75639, -2.60463}};};
		class Land_Barrack2 { table = "Medical"; positions[] = {{-1.96484,4.15576,-0.689606},{1.15381,0.3125,-0.691864}};};
		class Land_BeachBooth_01_F { table = "Shop"; positions[] = {{0.015625, 0.0117188, -1.09721}};};
		class Land_Benzina_schnell { table = "VehicleService"; positions[] = {{-2.9873, 5.68604, -2.30849}, {4.77344, -5.69775, -2.39602}, {4.62891, -2.56641, -2.37829}, {-4.4541, -2.51953, -2.35042}, {-4.32471, -5.54199, -2.33451}, {0.103027, -1.76709, -2.31467}, {0.27002, -6.38574, -2.31467}};};
		class LAND_Big_Panelak {table = "CivillianLowerClass"; positions[] = {{3.30566,-9.23413,-14.7521},{3.10059,-7.05005,-14.7521},{5.36914,0.495361,-14.7521},{-0.236328,-3.16772,-14.7521},{3.05078,-0.838379,-14.7521}};}; 
		class Land_bo_A_GeneralStore_01 {  table = "Shop"; positions[] =  {{11.8149,1.27979,-1.20155},{5.10449,1.61377,-1.20155},{1.70215,3.4292,-1.20155},{-0.771973,2.04102,-1.20155},{-3.59473,-6.04688,-1.20155},{-2.38428,-5.82202,-1.20155},{10.5171,-6.46729,-1.20155},{12.8472,-4.97754,-1.20155},{8.63623,-3.65381,-1.20155},{-3.22852,-10.0454,-1.21081}};};  
		class Land_bo_A_Office01 {  table = "Military"; positions[] =  {{-7.84912,6.3855,-4.528},{3.84424,3.27051,-4.528},{-0.0383301,3.51733,-4.528},{5.37695,5.63379,-4.528},{15.5393,-1.90015,-4.528},{13.8057,-2.3811,-4.528},{10.114,3.44849,-4.528},{10.3008,6.32495,-4.528},{1.71021,1.66675,-4.528},{1.58032,5.87671,-2.028},{-0.599854,7.08984,-2.028},{3.87769,6.84229,-2.028},{-7.6709,6.72485,-2.038},{-4.729,4.19556,-2.028},{-7.93091,3.2041,-2.038},{10.2354,-1.9187,-2.018},{6.9812,-4.30933,-2.038},{15.4075,6.03198,-2.038},{13.9285,3.40649,-2.038},{0.163086,3.43286,0.472002},{7.13892,3.64844,0.471998},{1.71973,-1.40967,6.72491},{-0.443359,0.61499,-2.028},{-5.22144,-3.69971,-2.028}};};
		class Land_bo_Barn_W_01 {  table = "CivillianUpperClass"; positions[] =  {{-4.45776,14.2153,-2.71607},{4.34277,-6.15088,-2.57279}};};  
		class Land_bo_Barn_W_02 {  table = "CivillianLowerClass"; positions[] =  {{3.16504,5.56543,-2.31409},{3.35938,-0.152344,-2.31305},{2.53613,-5.89453,-2.30957},{-2.94629,-5.01367,-2.31006},{-2.84375,0.212891,-2.31183},{-5.63281,4.8291,-2.31363}};};
		class Land_bo_Deutshe_mini {  table = "CivillianLowerClass"; positions[] =  {{-4.34277,-2.54297,-2.74846},{-0.624023,-0.357422,-2.74846},{0.853516,1.04395,-2.74846},{-2.75781,2.44336,-2.74846}};};
		class Land_bo_Dum_mesto2 {  table = "CivillianUpperClass"; positions[] =  {{2.46582,7.10742,-4.34475},{2.87305,4.03906,-4.34475},{-3.56738,4.05078,-4.34475},{-2.49902,0.46875,-4.34475},{1.77734,-7.41797,-4.34475},{-3.24512,-7.69922,-4.34475},{-3.16113,-1.58984,-4.34475},{3.19531,1.64258,-0.945168},{-3.19141,7.76563,-0.944004},{-0.253906,4.78516,-0.944004},{-3.35645,-5.74414,-0.944004},{-1.70508,-7.22656,-0.944004},{1.21973,-1.07617,-0.944004}};};
		class Land_bo_Dum_rasovna {   table = "CivillianLowerClass"; positions[] =  {{-1.271,3.38281,-2.69958},{3.14893,3.86255,-2.69958},{3.30957,-4.17871,-2.69958},{-0.936523,-1.97412,0.242605},{1.05518,3.77271,0.242605}};};  
		class Land_bo_Farm_Cowshed_a {  table = "CivillianLowerClass"; positions[] =  {{-1.06836,-5.92163,-3.08763},{1.69043,-4.91089,-3.08763},{5.8833,-6.15381,-3.08763},{8.83984,-5.60278,-3.08763},{9.74023,-2.48657,-3.08763},{2.88428,-2.34546,-3.08763},{7.88037,2.94214,-3.08763}};};
		class Land_bo_Farm_Cowshed_b {  table = "CivillianLowerClass"; positions[] =  {{-3.26782,2.71875,-3.0311},{5.41699,-2.57813,-3.04111}};};
		class Land_bo_Farm_Cowshed_c {  table = "CivillianLowerClass"; positions[] =  {{0.625,-2.61133,-3.06583}};};
		class Land_bo_Hlidac_budka {  table = "CivillianLowerClass"; positions[] =  {{2.4209,2.16064,-0.783617}};};
		class Land_bo_HouseB_Tenement {  table = "CivillianUpperClass"; positions[] =  {{2.39063,4.80322,-19.8245},{-10.2041,-0.48877,-20.3445},{4.65625,-2.125,-20.3445},{7.27734,11.5957,-20.8045},{-4.50854,5.10645,-19.8245},{5.11865,12.0298,-20.8045},{13.5625,12.1631,-20.8045}};};
		class Land_bo_HouseBlock_A1_1 {  table = "CivillianUpperClass"; positions[] =  {{-3.52881,0.158936,-4.74365},{-3.56152,-2.33484,-4.73106}};};
		class Land_bo_HouseV_1I1 {  table = "CivillianLowerClass"; positions[] =  {{0.728516,-2.01514,-2.86235}};};  
		class Land_bo_HouseV_1I4 {  table = "CivillianLowerClass"; positions[] =  {{0.222168,3.90839,-2.73031},{-1.82983,-1.81403,-2.76768}};};  
		class Land_bo_HouseV_1L2 {  table = "CivillianLowerClass"; positions[] =  {{-2.58887,-4.8584,-0.789368},{-2.58887,-4.8584,-0.789368},{-2.37646,0.373047,-0.799377}};};
		class Land_bo_HouseV2_01A {  table = "CivillianUpperClass"; positions[] =  {{-3.53906,-3.29736,-5.55779},{-0.759766,-3.95068,-5.56563}};};
		class Land_bo_HouseV2_02_Interier {  table = "CivillianUpperClass"; positions[] =  {{6.97412,1.26904,-5.53068},{4.21631,6.56396,-5.53068},{-5.94922,-1.28955,-5.53068},{-3.31494,6.44287,-5.53068}};};
		class Land_bo_HouseV2_04_Interier {  table = "CivillianUpperClass"; positions[] =  {{-5.08826,3.13818,-5.73971},{7.37061,6.52881,-5.73873},{1.75281,3.70752,-5.73953},{-3.75183,7.1626,-5.73842},{0.292725,1.27441,-2.93809}};};
		class Land_bo_Panelak {  table = "CivillianUpperClass"; positions[] =  {{2.00415,-1.33325,12.3769},{0.0378418,-1.23608,-10.8254}};};
		class Land_bo_Panelak2 {  table = "CivillianUpperClass"; positions[] =  {{0.53833,2.0498,-1.29137},{4.87939,1.90234,5.46665},{4.71045,-3.02197,5.46665},{6.01514,-5.86133,5.46665},{3.8833,-4.72314,5.46665}};};
		class Land_bo_Sara_domek_sedy {  table = "CivillianLowerClass"; positions[] =  {{-1.76367,-1.11328,-2.14196},{-5.0127,3.01953,-2.14196},{5.41211,2.625,-2.14196},{4.86035,-0.738281,-2.14196}};};
		class Land_bo_Shed_Ind02 {  table = "Industrial"; positions[] =  {{3.39893,9.21875,-4.67596},{1.29541,0.227539,-4.67596},{-0.458984,11.6934,-1.28638},{-4.00879,-8.42773,-1.29721}};};
		class Land_bo_Shed_wooden {  table = "Industrial"; positions[] =  {{1.26807,-0.361328,-1.29153},{-0.342773,1.0293,-1.29153}};};
		class Land_bo_stodola_old_open {  table = "CivillianUpperClass"; positions[] =  {{2.5437,-10.6599,2.96444},{-0.4021,-10.6228,2.96444},{-2.56641,-10.8538,-0.995487},{4.6665,3.45386,-5.08055},{-2.24414,10.396,-5.08055},{3.08691,9.24976,-5.08055},{-1.12744,10.5359,-0.993513},{-1.27563,10.6184,2.96444},{2.99268,10.7668,2.96444},{4.35425,-10.5923,-5.08055},{-2.47363,-5.49194,-5.08055}};};
		class Land_bo_stodola_open {  table = "CivillianUpperClass"; positions[] =  {{-3.77881,6.2478,-4.11348},{1.59106,6.31494,-4.10928},{-3.94727,-1.95605,-4.15359},{-0.440918,-3.91187,-4.1938}};};
		class Land_BoatSmall_1 { table = "Shop"; positions[] = {{-0.40918, 0.38623, 0.0354061}};};
		class land_bouda_garaz { table = "VehicleService"; positions[] = {{-0.324219, -3.09326, -1.3465}};};
		class Land_Bouda_plech { table = "Shop"; positions[] = {{-1.37646, 0.242676, -1.03047}};};
		class Land_Budova3 { table = "Military"; positions[] = {{-2.09961, 3.57617, -1.87854}, {-2.06641, 2.05762, -1.87856}, {-2.01953, -0.0302734, -1.87859}};};
		class Land_Budova4_in { table = "Military"; positions[] = {{6.01172, -0.429688, -1.91367}, {6.31055, -2.64355, -1.91367}, {6.14063, 2.43164, -1.91367}, {3.55273, 2.62598, -1.91367}, {2.13086, 2.5459, -1.91367}, {2.21484, -1.55273, -1.91367}, {1.10352, -2.70801, -1.91367}, {-1.38672, 2.55469, -1.91367}, {-1.49805, -2.73438, -1.91367}, {-4.50391, 2.69824, -1.91367}, {-7.25, 2.3291, -1.91357}, {-5.41016, -0.110352, -1.91367}, {-4.12891, -2.27637, -1.91367}, {-6.40234, -2.25879, -1.91367}, {3.98438, -0.208984, -1.91445}, {-1.59375, -2.62012, -0.927017}, {-2.17773, -0.224609, -1.91445}, {-7.15234, -0.0664063, -1.91445}};};
		class land_camo_box { table = "Military"; positions[] = {{1.42236, 2.63623, -1.83044}, {-1.99951, -2.50049, -1.83042}};};
		class Land_cargo_house_slum_F { table = "VehicleService"; positions[] = {{-5.76081, -2.73231, -0.527443}, {0.0422215, -2.45127, -0.527451}, {-1.04416, -0.618231, -0.39669}, {-3.34442, 0.254673, -0.39669}, {0.351353, 0.561743, -0.39669}, {-0.21401, 2.14246, -0.527443}, {2.35442, -0.651615, -0.527443}};};
		class Land_Cargo_House_V1_F { table = "Military"; positions[] = {{1.39877, 3.45444, 0.03685}, {-1.55095, 2.948, 0.03685}, {0.21741, 1.55182, -0.0991898}, {-2.24284, 0.435066, -0.122185}, {0.698313, -0.759129, -0.105148}};};
		class Land_Cargo_House_V2_F { table = "Military"; positions[] = {{-1.29981, 3.15448, 0.03685}, {1.20578, 2.98486, 0.03685}, {-2.24284, 0.435066, -0.122185}, {1.22587, 1.28027, -0.0991898}, {1.00765, -0.769355, -0.105148}};};
		class Land_Cargo_House_V3_F { table = "Military"; positions[] = {{-2.0918, 1.58984, -0.0957484}, {1.11914, 3.17969, 0.0402873}}; }; 
		class Land_Cargo_HQ_V1_F { table = "Military"; positions[] = {{-4.84326, 0.914551, -3.17818}, {4.79102, 5.24512, -3.17831}, {7.98438, -1.70654, -3.17831}, {-1.31104, -5.79736, -3.17831}, {7.70557, -1.7002, -0.582209}, {3.33105, 5.62451, -0.835959}, {-3.29053, 3.00684, -0.773884}, {-3.39746, -4.5957, -0.773883}, {-1.42383, -5.4375, -0.773866}, {7.99512, 3.29785, -3.17831}, {-0.149902, 1.43408, -3.29873}, {4.24707, -3.64111, -3.29873}, {3.99707, 1.229, -3.28473}, {-1.8877, -2.61084, -3.28473}, {5.9707, -3.4624, -0.68473}, {2.72461, -4.29199, -0.68473}, {4.59814, 0.558594, -0.759883}, {0.113281, 1.17236, -0.759883}};};
		class Land_Cargo_HQ_V2_F { table = "Military"; positions[] = {{4.18369, 0.857798, -0.75988}, {-0.194145, -0.389896, -0.75988}, {-4.84402, 0.917035, -3.17818}, {4.79109, 5.24494, -3.17831}, {7.9187, -1.66295, -3.17838}, {-1.31096, -5.79715, -3.17831}, {7.7065, -1.70109, -0.612045}, {3.33116, 5.62517, -0.835846}, {-3.29046, 3.00701, -0.77388}, {-3.3977, -4.59546, -0.77388}, {-1.42377, -5.43727, -0.773865}, {7.9757, 3.30615, -3.17837}, {-0.149823, 1.43427, -3.29872}, {-3.24289, -5.65738, -3.17831}, {4.24688, -3.64118, -3.29872}, {2.96838, -4.1065, -0.684731}, {4.88837, -0.140131, -3.28473}, {-0.86159, -1.48363, -3.28473}};};
		class Land_Cargo_HQ_V3_F { table = "Military"; positions[] = {{6.00591, 5.04804, -0.857445}, {3.03951, 1.96389, -0.75988}, {-0.793113, -0.840625, -0.75988}, {-4.84397, 0.917018, -3.17819}, {4.79109, 5.24494, -3.17831}, {7.91817, -1.6628, -3.17834}, {-1.31096, -5.79715, -3.17831}, {7.7065, -1.70109, -0.612053}, {3.33116, 5.62517, -0.835846}, {-3.29046, 3.007, -0.77388}, {-3.3977, -4.59546, -0.77388}, {-1.42377, -5.43727, -0.773865}, {7.9757, 3.30615, -3.17837}, {-0.149823, 1.43427, -3.29872}, {-3.24289, -5.65738, -3.17831}, {3.1332, -4.30868, -0.684731}, {6.05372, -3.34648, -0.684731}, {3.73467, -2.7302, -3.28473}, {4.6004, 1.24808, -3.28473}, {-0.709645, -2.35663, -3.28473}, {-5.11302, -2.35578, -3.29069}};};
		class Land_Cargo_Patrol_V1_F { table = "Military"; positions[] = {{1.93799, 0.766602, -2.9371}, {-2.29541, 0.82373, -0.789955}};};
		class Land_Cargo_Patrol_V2_F { table = "Military"; positions[] = {{1.23291, -1.62136, -0.566956}, {-1.93158, -1.97007, -0.766953}, {-2.25429, 0.661747, -0.766953}, {1.10353, 0.403482, -0.766953}, {1.56928, 0.448582, -2.9321}, {0.89834, -0.89645, -4.305}};};
		class Land_Cargo_Tower_V1_F { table = "Military"; positions[] = {{-3.54785, -3.01758, 2.47987},{-3.15625, -0.837891, 5.00472},{-2.0498, -3.29883, -0.120125},{4.55957, 4.39258, -0.120125},{-4.42383, 2.45117, -0.120125},{-2.87598, 2.20898, -4.2958},{-2.88281, 4.14258, 5.00472},{0.235352, -1.19727, 5.07987},{3.58105, 4.11719, 2.47988},{1.27441, 3.17773, -8.24333},{2.50488, 0.0625, 5.00472}}; }; 
		class Land_Cargo_Tower_V1_No1_F { table = "Military"; positions[] = {{-2.4668, -4.10156, 5.00471}, {-2.7168, 1.0625, -0.120123}, {-2.83984, -2.95313, 2.47987}, {-3.06641, -2.66992, -0.120123}, {-3.12109, 2.42773, -4.2958}, {-3.16211, 4.51563, 5.00471}, {1.26367, 2.49609, -8.24333}, {2.25195, 4.30664, -0.120123}, {3.34766, 3.33203, 2.47987}, {3.66797, 1.8457, 5.00471}}; }; 
		class Land_Cargo_Tower_V1_No2_F { table = "Military"; positions[] = {{-2.71289, 3.0957, -0.120123}, {-2.83203, 5.06445, 5.00472}, {-3.48633, 2.28906, -4.2958}, {-3.64844, -2.87891, 2.47988}, {-3.77344, -3.32617, 5.00472}, {-3.80664, -1.75977, -0.120123}, {0.0625, -0.287109, 5.07988}, {1.58984, -2.11523, -0.120123}, {2.13672, 2.20703, -8.24332}, {3.57422, 4.22461, 2.47988}, {3.75, 1.31055, 5.00472}, {4.98633, 3.90625, -0.120123}}; }; 
		class Land_Cargo_Tower_V1_No3_F { table = "Military"; positions[] = {{-0.214844, -0.460938, 5.07988}, {-2.33203, -2.96094, -0.120119}, {-2.89648, -4.0625, 5.00472}, {-3.08008, -2.8125, 2.47988}, {-3.28711, 2.60352, -4.2958}, {-3.61328, 4.44141, 5.00472}, {-4.01758, 1.86133, -0.120119}, {1.54688, 2.61133, -8.24332}, {3.52734, 3.8418, 2.47988}, {3.5332, -0.386719, 5.00472}, {4.88477, 4.18945, -0.120119}}; }; 
		class Land_Cargo_Tower_V1_No4_F { table = "Military"; positions[] = {{-2.68555, -3.07031, -0.120119}, {-2.93359, -4.27148, 5.00472}, {-3.22461, 4.84375, 5.00472}, {-3.6543, 1.57227, -4.2958}, {-3.70508, -3.0332, 2.47988}, {-4.26367, 0.980469, -0.120119}, {2.1543, 2.08789, -8.24332}, {3.46289, 2.25781, 2.47988}, {3.62305, 2.16797, 5.00472}, {5.10156, 4.20898, -0.120119}}; }; 
		class Land_Cargo_Tower_V1_No5_F { table = "Military"; positions[] = {{-2.25781, -2.77344, -0.120119}, {-2.375, -4.45508, 5.00472}, {-2.41602, 5.18164, 5.00472}, {-2.94922, 2.4082, -4.2958}, {-3.89648, -2.7832, 2.47988}, {-4.03906, 1.43945, -0.120119}, {0.0410156, -0.8125, 5.07988}, {1.62305, 2.55664, -8.24332}, {2.97461, -0.335938, 5.00472}, {3.90039, 3.68555, 2.47988}, {4.80859, 3.57422, -0.120117}}; }; 
		class Land_Cargo_Tower_V1_No6_F { table = "Military"; positions[] = {{-1.6875, -2.5918, -0.120119}, {-3.16992, -3.74219, 5.00472}, {-3.41797, 1.87305, -0.120119}, {-3.49805, 2.06836, -4.2958}, {-3.81055, 4.59766, 5.00472}, {-3.92969, -2.12109, 2.47988}, {1.92578, 2.27344, -8.24332}, {3.50195, 2.76563, 2.47988}, {3.64258, 0.0078125, 5.00472}, {5.19141, 4.45117, -0.120119}}; }; 
		class Land_Cargo_Tower_V1_No7_F { table = "Military"; positions[] = {{-2.59766, -3.14063, -0.120119}, {-2.7832, 1.94531, -4.2958}, {-2.83203, 1.58594, -0.120119}, {-3.20508, 4.62891, 5.00472}, {-3.29883, -2.90234, 5.00472}, {-3.87891, -3.11914, 2.47988}, {0.228516, -1.05273, 5.07988}, {1.65234, 2.58594, -8.24332}, {3.40039, 3.05859, 2.47988}, {4.18164, 0.246094, 5.00472}, {4.42578, 3.99805, -0.120119}}; }; 
		class Land_Cargo_Tower_V2_F { table = "Military"; positions[] = {{4.29492, 3.70508, -0.120117}, {-2.5293, -3.10742, 2.47988}, {-2.6543, 2.01172, -4.2958}, {-2.66797, -3.4707, 5.00472}, {-2.67773, 4.97461, 5.00472}, {-3.06836, 1.80273, -0.120117}, {-3.25586, -3.56445, -0.120117}, {0.611328, 0.0214844, 5.07988}, {2.46094, 1.92383, -8.24332}, {2.61328, -0.296875, 2.47988}, {3.07422, 4.14063, 2.47988}, {3.50195, 1.22656, 5.00472}}; }; 
		class Land_Cargo_Tower_V3_F { table = "Military"; positions[] = {{-1.59375, -2.7168, -0.120119}, {-2.40039, 2.39648, -4.2958}, {-3.24023, -3.17773, 5.00472}, {-3.51367, 4.57617, 5.00472}, {-3.70703, -3.60547, 2.47988}, {-4.54883, 2.47266, -0.120119}, {0.142578, -0.179688, 5.07988}, {2.2793, 2.25391, -8.24332}, {3.87109, 3.3418, 2.47988}, {4.22656, 0.390625, 5.00472}, {5.05469, 4.16406, -0.120119}}; }; 
		class Land_Carousel_01_F { table = "Medical"; positions[] = {{0.632324, -0.00341797, -0.101912}, {-0.862305, -0.180664, -0.101912}};};
		class Land_CarService_F { table = "VehicleService"; positions[] = {{-4.747, 7.02811, -1.2675}, {-1.2277, 7.17112, -1.2675}, {4.24793, -1.34506, -1.28257}, {0.737665, 0.924992, -1.2825}, {0.734525, 3.33335, -1.28249}, {3.42563, 10.3232, -1.52874}, {-4.74372, 0.346337, -1.20376}, {-2.87656, -1.7706, -1.2825}, {-1.09482, -1.32294, -1.28249}, {-2.57088, 4.87092, -1.4325}, {3.94963, 7.29659, -1.2675}, {1.39697, 7.74008, -1.2675}, {3.66289, 3.52082, -1.2675}, {2.50647, 0.4983, -1.2675}};};
		class Land_Castle_01_tower_F { table = "Military"; positions[] = {{1.34059, 1.71738, -9.5814}, {-2.10539, -1.72269, -9.58143}, {-2.45869, -2.10133, -1.13455}, {1.05854, 1.31884, 7.91861}, {1.38755, -1.06067, 7.91861}, {-1.55283, 0.317267, 7.91861}, {-1.85593, -1.83821, 7.91861}};};
		class Land_Chapel_Small_V1_F { table = "Shop"; positions[] = {{1.77148, -0.994629, -0.497018}, {3.15186, 0.564453, -0.894299}, {3.12988, -0.95752, -0.894301}, {0.583984, -0.443848, -0.4828}, {0.683105, -1.38818, -0.505819}, {-0.495605, -1.4873, -0.506408}, {1.67725, 1.18262, -0.8793}};};
		class Land_Chapel_Small_V2_F { table = "CivillianLowerClass"; positions[] = {{0.556641, -0.966797, -0.867857}, {3.54297, 0.486328, -0.867857}}; }; 
		class Land_Chapel_V1_F { table = "Tourist"; positions[] = {{-3.26072, -2.93087, -2.83492}, {7.92101, -0.0423338, -2.63493}, {5.6001, 3.02249, -2.83492}, {5.96939, -2.89763, -2.57626}, {-6.16944, -0.969335, -2.89993}, {-6.71074, 0.502357, -2.89993}, {0.246418, -2.19661, -2.89993}, {1.38287, 2.16057, -2.89993}, {-0.465016, 1.79742, -2.41317}, {0.953855, 2.82956, -2.40676}, {-0.352791, -1.4875, -2.40054}, {0.807888, -2.53245, -2.42329}, {2.2858, -1.66982, -2.42066}, {3.5487, -2.76392, -2.44601}, {6.71585, 0.0429509, -1.73897}, {10.8051, 0.63286, -2.62992}, {0.672239, -0.174563, -2.89993}, {-4.01852, 0.0118508, -2.89993}};};
		class Land_Chapel_V2_F { table = "Shop"; positions[] = {{-3.26074, -2.93066, -2.83492}, {7.92578, -0.0429688, -2.63493}, {5.6001, 3.02246, -2.83493}, {5.95068, -3.20752, -2.70069}, {-1.60889, -1.854, -2.40646}, {0.822754, -2.03955, -2.41555}, {3.61621, -2.2417, -2.89992}, {3.51807, 1.87451, -2.43811}, {0.959473, 2.16211, -2.41768}, {-1.55225, 2.24414, -2.40142}, {-0.123047, 2.49316, -2.89992}, {2.63232, 2.21533, -2.89992}, {2.51172, -2.24609, -2.89992}, {0.224121, -2.18506, -2.89992}, {-3.52783, 0.109863, -2.89992}, {6.60889, -0.0742188, -1.73133}, {9.54883, 1.36084, -2.62992}, {10.2495, -1.07275, -2.62992}};};
		class Land_Church_01 { table = "Shop"; positions[] = {{4.07423, -4.41824, -6.4693}, {7.28811, 4.59111, -6.6024}, {-0.449282, 5.37366, -6.46927}, {-6.84759, 0.26764, -6.4693}, {-7.09954, -0.540965, -6.46931}, {-6.89432, 0.784528, -4.22688}, {-7.08461, -0.960231, -4.22688}};};
		class Land_Church_01_V1_F { table = "CivillianLowerClass"; positions[] = {{-4.36719, -5.81055, -5.46942}, {-4.46875, -2.23633, -5.74363}, {-4.54492, 1.57422, -5.74363}, {-4.8125, 5.58789, -5.49442}, {3.00781, -5.92969, -6.44017}, {4.19141, 5.77148, -6.44865}}; }; 
		class Land_Church_02{ table = "Tourist"; positions[] = {{-4.54102, 7.63574, -11.6679}, {-11.3262, 0.464844, -11.6679}, {-11.7744, 2.34863, -11.6679}, {-3.64404, -4.94727, -11.6679}, {-0.877441, -7.34473, -11.668} };};
		class Land_Church_02a{ table = "Tourist"; positions[] = {{9.66748, -7.34668, -11.5627}, {-4.80859, 7.79492, -11.5627}, {-11.4722, 2.52051, -11.5628}, {-11.5132, 0.637695, -11.5627}, {-10.812, -5.47559, -11.5627}, {-0.647461, -7.35254, -11.5628}, {-4.60986, -5.39746, -11.5627} };};
		class Land_Church_03 { table = "Tourist"; positions[] = {{-0.665527,-3.02832,-14.3021},{2.90771,3.07422,-14.3021},{9.75342,0.0117188,-13.7588},{4.74609,8.1582,-14.3021},{-2.41943,1.72168,-14.3049},{-0.791992,2.21191,-13.7321},{2.93945,-1.59766,-13.7349},{6.21191,3.48535,-13.7321},{6.56787,-3.55176,-14.3021},{-0.741211,-8.75684,-14.3021},{-0.126465,5.94434,-14.3021},{-1.14893,-3.6416,-14.3021},{-2.71484,-1.56055,-13.7349}};  }; 
		class Land_Church_03_dam { table = "Tourist"; positions[] = {{-8.66685, 4.06635, -14.7366}, {-8.52862, 3.79852, -14.6609}, {-8.20222, -4.14363, -14.6609}, {-4.72902, -0.226964, -14.6609}, {3.57487, -5.05421, -14.6609}, {3.64815, 0.0290536, -14.6609}, {2.66447, 4.38639, -14.6609}, {-3.49852, 5.67138, -14.6609}, {5.15822, 7.37745, -14.6609}, {6.83099, 4.27201, -14.6609}, {7.11337, -4.43641, -14.6609}, {5.5681, -7.76391, -14.6609}, {-1.62146, -8.65378, -14.6609}, {-0.20578, 1.16453, -1.7917}, {0.218203, -0.164792, -1.54724}, {-0.10551, 0.920127, -1.79176}, {-0.323186, 0.146627, -1.96413}, {-0.93069, 0.699166, -1.76445}, {-3.41394, -3.24163, -13.9909}, {-3.19021, -1.63266, -13.9909}, {-1.51775, -2.57985, -13.9909}, {0.777869, -1.65286, -13.9909}, {2.72628, -3.24239, -13.9909}, {2.50946, -2.31272, -13.9909}, {5.04638, -2.74257, -14.7366}, {4.45489, -1.58073, -13.9909}, {6.1581, -3.25259, -13.9909}, {6.17027, -1.73112, -13.9909}, {5.79879, 1.20935, -13.9909}, {5.70111, 2.72511, -13.9909}, {2.17125, 1.83498, -13.9909}, {2.13581, 3.09932, -13.9909}, {4.15787, 2.54079, -13.9909}, {0.531159, 2.50793, -13.9909}, {-1.19885, 1.59421, -13.9909}, {-2.95171, 3.75737, -13.9909}, {-3.00264, 2.75199, -13.9909}, {-3.32171, 8.35354, -14.7366}, {8.64317, -0.0420524, -13.0966}};};
		class Land_Church_05R{ table = "Industrial"; positions[] = {{6.5957, 8.37012, -7.98993}, {2.55078, 1.96484, -7.98996}, {15.4019, 4.43945, -7.98996}, {14.4336, 0.443359, -7.98993}, {8.3252, -2.11035, -7.98993}, {8.16162, -6.66797, -7.98999}, {3.60645, -7.40527, -7.98996}, {-5.85889, -2.90625, -7.98996}, {-10.3428, 2.9043, -7.98993} };};
		class Land_cihlovej_dum_in {table = "CivillianLowerClass"; positions[] = {{-0.0117188,0.0441895,-1.81473},{-1.76758,2.24805,-1.8147},{-2.88965,-1.64795,-1.8147},{1.84277,-2.07983,-1.81471},{1.58691,-1.3374,-5.27588},{1.22852,2.57324,-5.27588}};}; 
		class land_cihlovej_dum_mini {table = "CivillianLowerClass"; positions[] = {{-2.4646,-0.78418,-2.86942},{-1.75586,2.88525,-2.86942},{2.76587,2.08154,-2.86942},{1.96265,-1.98877,-2.86942},{0.0109863,0.876465,-2.86942},{0.116455,3.05762,-2.86942}};}; 
		class Land_cmp_Shed_F { table = "Industrial"; positions[] = {{-5.33995, 3.23512, -3.59779}, {-5.01254, -0.99383, -3.59779}, {-5.53837, 1.12017, -3.59778}};};
		class Land_cmp_Tower_F { table = "Industrial"; positions[] = {{-1.40723, 0.406738, 9.73847}, {-0.188477, -1.5708, 9.73847}, {0.959473, 0.527344, 9.73847}};};
		class Land_Crane_F { table = "Industrial"; positions[] = {{-5.83887, 1.76025, -17.8698}, {-8.87793, 0.000976563, -16.8039}, {-10.1675, -0.0444336, 5.80902}, {-8.71045, 1.604, 5.75985}, {-7.36084, -1.45361, 5.79838}};};
		class Land_d_House_Big_02_V1_F { table = "CivillianLowerClass"; positions[] = {{1.79736, -5.68509, -2.60469}, {-1.71927, -3.26105, -2.69376}, {-2.31457, -5.35442, 0.264381}, {1.52503, 6.30076, 0.403595}, {1.51635, 4.44735, -3.06641}, {2.28922, 2.87438, 0.463593}, {-1.5612, 4.52837, 0.463593}, {-2.42866, 2.14833, 0.463593}, {-0.682036, 1.51866, -3.06641}, {-1.26297, -1.33847, -2.95141}, {-5.90075, -2.51769, -2.95141}, {-5.35355, 3.90527, -2.95141}, {-4.87635, 0.829033, -2.95141}, {2.1272, 0.640877, -2.95141}, {-1.77359, -3.20276, 0.464691}, {-5.07217, -1.82394, 0.464691}, {-4.12951, -3.23604, 0.464691}, {-4.97969, 3.42134, 0.464691}, {0.332743, 1.27976, 0.464691}};};
		class Land_d_Shop_01_V1_F { table = "Tourist"; positions[] = {{5.73633, 2.69775, -2.60855}, {0.00634766, 3.01709, -2.90728}, {1.25586, 4.28027, -2.90728}, {1.51758, -2.25635, -2.90728}, {3.51318, 2.44043, -2.90728}, {5.64307, -0.480469, -1.68833}, {3.86719, 0.240234, 0.963694}, {1.37598, -5.26465, 0.9346}, {0.00683594, -3.81885, 0.964576}, {4.93164, -5.13916, 0.934603}};};
		class Land_d_Shop_02_V1_F { table = "Tourist"; positions[] = {{-1.18555, -0.423828, -2.79262}};};
		class Land_d_Stone_HouseBig_V1_F { table = "CivillianLowerClass"; positions[] = {{-1.09525, 1.59366, -0.604515}, {-0.929027, 0.805196, -0.604515}, {-2.03234, 0.22293, -1.66751}, {-2.28455, 2.94634, -1.552}, {2.47709, 2.68915, 1.19249}, {0.666474, -2.85252, 1.19249}, {-2.49182, 1.08894, 1.19249}, {2.20866, -0.405064, -1.66751}, {-2.25772, -2.2954, 1.10748}, {0.0287449, -0.544624, 1.10748}};};
		class Land_d_Stone_HouseSmall_V1_F { table = "Tourist"; positions[] = {{8.03165, 2.43222, -0.595131}, {5.14427, -1.73889, -0.609566}, {-6.01984, 0.718661, -0.464821}, {-1.00892, -1.92978, -0.636574}, {-1.5326, 2.52771, -0.358162}, {9.9532, -0.782708, -0.610741}, {4.16769, 1.49877, -0.609535}, {-1.59647, 0.489568, -0.608452}};};
		class Land_d_Stone_Shed_V1_F { table = "CivillianLowerClass"; positions[] = {{-0.56152, -1.40849, 0.152122}, {-0.629259, 2.06821, 0.403465}, {3.53686, -0.502411, 0.0732422}};};
		class Land_d_Windmill01_F { table = "CivillianLowerClass"; positions[] = {{-0.935547, 0.259766, -2.2985}, {-1.65039, 0.365234, 0.947132}}; }; 
		class Land_deutshe { table = "Tourist"; positions[] = {{1.74674, 4.31604, -4.28427}, {1.05695, -4.79387, -4.28426}, {-5.11836, -3.62634, -3.03423}, {-5.15769, 3.6574, -3.0507}};};
		class Land_Deutshe_mini { table = "CivillianUpperClass"; positions[] = {{4.07373, -2.1499, -2.7749}, {1.48096, -1.62793, -2.77489}, {-1.54443, -2.89404, -2.7749}, {-3.44238, -2.91797, -2.7749}, {-4.1875, -0.0883789, -2.77489}, {-1.46973, 2.81543, -2.7749}, {-3.81396, 2.81836, -2.7749}, {1.50781, 0.287109, -2.7749}, {4.10449, 0.0761719, -2.7749}, {3.74658, 2.51611, -2.7749}, {-3.49902, -1.99072, -1.98739}, {-0.497559, 0.731934, -1.80596}, {-3.57031, 1.95361, -2.25214}, {-4.21924, 2.7334, -2.25214}, {-3.41162, -1.87695, -2.81196}, {0.719238, 2.7583, -2.05188}, {2.27197, 2.48633, -2.81199}};};
		class Land_Device_assembled_F { table = "VehicleService"; positions[] = {{-2.05302, -0.0921249, -0.721642}, {-0.280718, 3.10374, -0.721642}, {0.373226, -2.54201, -0.721649}, {2.19699, 0.845306, -0.721649}, {1.4011, -0.959237, -0.721642}, {0.27224, -0.0475338, 0.438919}};};
		class Land_Dome_Big_F { table = "Military"; positions[] = {{-10.5684, -18.7813, -10.1825}, {-14.7503, -7.47795, -10.1825}, {-0.974714, -4.16361, -10.1825}, {-15.9334, 2.5641, -10.1825}, {-10.5961, 13.7335, -10.1825}, {0.585948, 13.1119, -10.1825}, {7.90968, 5.53134, -10.3847}, {3.6465, -10.0187, -10.1825}, {15.0152, -4.90519, -10.8478}, {21.9965, 0.274965, -10.8992}};};
		class Land_Dome_Small_F { table = "Military"; positions[] = {{-3.86312, -3.80029, -6.93446}, {5.62671, 5.9391, -6.93446}, {-5.39558, 5.52175, -6.93446}, {-9.46609, -3.25177, -6.93446}, {6.84644, -11.87, -7.02193}, {0.837581, -11.9087, -6.93447}, {0.399104, 12.5536, -6.93447}};};
		class Land_domek_rosa { table = "Shop"; positions[] = {{-0.391714, -1.46069, -0.750999}, {3.50506, -1.29381, -2.9398}};};
		class Land_dp_bigTank_F { table = "Industrial"; positions[] = {{6.43994, -0.0717773, 3.5715}, {3.70117, 4.9209, 3.57151}, {-2.19482, 5.68457, 3.5715}, {-6.3501, -0.591797, 3.5715}, {-3.70117, -5.90234, 3.5715}, {3.21533, -6.2251, 3.5715}, {0.15625, -0.440918, 3.5715}};};
		class Land_dp_bigTank_ruins_F { table = "Industrial"; positions[] = {{1.36015, -0.4813, -1.66881}, {-0.709355, 3.21164, -1.49545}, {-0.0963136, -4.03182, -1.22651}};};
		class Land_dp_mainFactory_F { table = "Industrial"; positions[] = {{-1.51583, 13.1159, -9.93201}, {-8.40252, 13.0006, -9.921}, {-21.7498, 4.76528, -8.64175}, {-21.7486, -14.5363, -8.65192}, {-19.6322, -8.31714, -4.39046}, {8.13956, -1.12113, -0.28447}, {7.53285, 5.81448, -0.28447}, {10.767, 8.68047, -0.28447}, {10.4136, -0.968076, -0.28447}, {10.6077, -9.43577, -0.28447}, {18.7314, -7.78941, -4.04045}, {15.853, -11.2589, -4.04045}, {14.9407, -16.4524, -4.04045}, {19.6123, -17.1242, -4.04045}, {12.6896, -2.44898, -4.22446}, {12.6227, -4.43858, -4.22446}, {12.9713, 1.12387, -4.22446}, {12.6715, 4.78178, -4.22446}, {14.9228, 3.82196, -4.49391}, {17.0675, 3.22079, -4.08406}, {14.9066, -2.15762, -5.53445}, {19.691, -1.30789, -5.53446}, {19.4568, 2.77237, -5.53445}, {21.1597, 3.78804, -7.41721}, {18.8652, 5.35737, -7.61626}, {21.3632, -0.537484, -7.40046}, {20.4075, -3.7534, -7.40045}};};
		class Land_dp_smallFactory_F { table = "Factories"; positions[] = {{-1.97266, 3.14844, 2.62608}, {-6.49609, -4.92773, 2.82442}, {5.32422, -3.69531, 2.95848}, {9.49805, -4.71094, 1.21193}, {9.95898, 1.41211, 1.21193}}; };  
		class Land_dp_smallTank_F { table = "Industrial"; positions[] = {{-0.775879, 1.88574, 5.30653}, {-2.1792, -1.28516, 5.30653}, {1.26318, -1.39258, 5.30653}, {-0.339355, -0.125977, 5.30653}};};
		class Land_dulni_bs { table = "Tourist"; positions[] = {{-0.443175, 1.62295, -1.7785}, {-0.219159, -1.35147, -1.77849}, {1.00048, -2.78268, -1.7785}, {0.925806, 2.89237, -1.77849}, {2.50635, 1.7474, -1.7785}, {3.0918, -0.763217, -1.75349}};};
		class Land_Dum_istan3_hromada2 { table = "CivillianUpperClass"; positions[] = {{-3.8501, -3.91992, -4.45981}, {2.92334, -6.05518, -4.45981}, {1.18359, 2.83252, -4.4598}, {4.43359, 1.55127, -4.45979}, {-1.65674, 4.7832, -1.28661}, {-7.67139, 4.729, -1.28661}, {-7.979, -0.322754, -1.28661}, {-4.05957, 2.2417, -1.28661}, {0.269043, -1.86279, -1.28661}, {3.45605, 2.51318, 2.08657}, {6.84375, -0.23877, 2.08657}, {6.52002, -6.46631, 2.08657}, {1.85742, -6.65088, 2.08657}, {-2.35938, 1.30273, 2.08657}, {-1.41357, 5.5293, 2.08657}, {4.36768, 5.01807, 2.08657}, {5.8501, 2.00537, 2.08657}};};
		class Land_Dum_istan3_pumpa { table = "CivillianUpperClass"; positions[] = {{-0.831543, -4.2915, -1.89291}, {2.20117, -4.38281, -1.89291}, {-2.01318, 2.90186, -1.89291}, {2.86572, 2.62891, 1.44841}, {0.370605, -1.96191, 1.44841}, {4.13184, -3.74121, 1.88945}, {-3.72705, -3.55225, 1.58983}, {-4.3125, 2.82617, 1.77699}, {3.1543, -0.228516, 1.38467}, {0.777344, 0.836914, 1.38467}, {-1.1001, 0.412598, 1.38467}};};
		class Land_dum_m2 { table = "Shop"; positions[] = {{4.52627, -1.02488, -2.51849}};};
		class Land_dum_mesto { table = "CivillianUpperClass"; positions[] = {{-4.85765, -6.50141, -4.78236}, {5.68422, 1.80353, -4.78234}, {0.214274, 8.03897, -4.78236}, {-10.0799, 4.30059, -4.78236}};};
		class Land_Dum_mesto_in { table = "CivillianLowerClass"; positions[] = {{-1.96729, -1.13623, -3.99488}, {-3.73535, -1.07861, -3.99488}, {-3.84326, -3.48828, -3.99489}, {-5.74268, -0.566895, -3.99489}, {-1.88037, 3.34033, -3.99488}, {-4.67236, 3.35693, -3.99488}, {0.824219, -0.763672, -3.99576}, {0.563477, -3.56445, -3.9643}, {1.80811, -3.5498, -3.99577}, {-3.91895, -2.89404, -3.37979}, {-6.27881, -2.94434, -2.37177}, {-6.26611, 0.280273, -2.37177}, {-5.20947, 1.49316, -2.37177}, {-4.05273, 1.46875, -2.37177}, {5.06348, -3.35742, -3.4331}, {5.77197, -2.36523, -3.4331}, {3.85938, -3.08789, -4.0371}, {4.07471, 1.00244, -4.0371}, {5.90186, 2.69238, -4.0371}, {3.94873, 4.38867, -4.03709}, {2.73779, -3.87354, -2.81659}, {2.69141, -3.20996, -2.81659}, {2.70215, -2.62891, -2.81659}, {6.07861, -3.53271, 0.296043}, {5.99121, 4.44824, 0.296043}, {0.702637, -3.23047, -0.994999}, {4.94971, 2.14648, -0.994999}, {2.38379, -0.208984, -0.994999}, {-5.09277, -2.40771, -0.301575}, {-6.07813, 0.117188, 0.294847}, {-6.08057, 0.782715, 0.294847}, {-4.90332, 4.02441, -0.994999}, {-1.57275, 0.546387, -1.0971}, {-1.09033, 4.58154, -0.994999}, {-2.5083, -2.57031, -0.994999}, {-5.62061, -4.94189, -0.851059}, {-2.92285, -4.9541, -0.851059}};};
		class Land_dum_mesto2 { table = "CivillianLowerClass"; positions[] = {{3.063, 1.5448, -4.37707}, {2.61268, -1.24108, -4.37119}, {2.93436, -4.33037, -4.37119}, {0.368658, -7.55667, -4.37119}, {-2.98342, -5.56502, -4.37119}, {-3.23417, -2.62078, -4.37119}, {0.617392, 2.85306, -4.37119}, {-2.69224, 2.33007, -4.37118}, {-2.66401, 4.93329, -4.37119}, {-0.319181, 7.59531, -4.37119}, {3.12413, 5.23967, -4.37119}, {-3.04615, 0.77132, -0.972099}, {-2.95031, 2.713, -0.971611}, {2.72589, 2.63948, -0.972061}, {2.43331, 5.22955, -0.970444}, {0.229485, 7.4515, -0.970444}, {-3.03748, 4.15435, -0.970444}, {2.61268, -1.24106, -0.970444}, {2.93436, -4.33037, -0.970444}, {-2.98341, -5.56502, -0.970444}, {-3.23417, -2.62078, -0.970444}};};
		class Land_Dum_olez_istan1 { table = "Shop"; positions[] = {{1.34619, -5.13379, -1.85044}, {1.34863, -4.37793, -1.85044}, {1.82324, -1.19092, -1.85044}, {4.27734, 0.208984, -1.85044}, {3.59473, 2.54443, -1.85044}, {-4.43506, 5.31738, -1.85044}, {-4.02441, 1.3667, -1.85044}, {-4.92188, -2.66895, -1.85044}, {-0.863281, 1.16309, -1.87042}, {7.27051, -3.05518, -1.85044}, {7.08105, 0.976074, 1.96172}, {6.57861, 2.41113, 1.34853}, {2.61182, 0.283691, 1.34853}, {-4.07813, -0.238281, 1.34854}, {-3.59521, -4.92188, 1.34854}, {-7.55908, 2.09277, -1.16482}, {-7.48975, -4.01855, -0.860201}, {-2.19727, -4.54834, -1.07937}, {7.16602, 2.36084, -1.29963}, {5.40674, 3.62305, 2.57426}, {2.70117, 3.69531, 2.57426}, {6.03125, -2.11865, 1.87468}, {5.03369, -1.37109, 1.87468}, {2.29443, -2.52246, 1.33596}, {4.18115, 2.30908, 1.33596}};};
		class Land_Dum_olez_istan2 { table = "CivillianLowerClass"; positions[] = {{1.40381, -3.50293, -0.2461}, {-3.05811, 5.68994, -0.2461}, {-6.06494, 3.10303, 0.01266}, {0.14502, -5.25098, 0.464965}, {-4.85547, -3.90771, 0.68597}, {-1.79053, 5.59326, 0.848444}, {-0.220215, 5.27539, 0.221226}, {0.0952148, 4.21338, 0.221226}, {0.599609, 0.945801, -0.246091}, {-3.36328, 1.55176, -0.24609}, {-6.63379, -0.304199, 0.932723}, {-6.61133, 4.29297, 0.932723}};};
		class Land_Dum_olez_istan2_maly { table = "CivillianLowerClass"; positions[] = {{-2.75244, -3.8252, -1.87886}, {-2.75, -3.06934, -1.87886}, {-2.27539, 0.117188, -1.87886}, {0.179199, 1.51758, -1.87886}, {1.77734, 4.53076, -1.87886}, {-0.498535, 3.9126, -1.87886}, {-1.23877, 1.1543, -1.87886}, {-3.32031, -0.755859, -1.87886}, {-0.0810547, -1.79199, -1.87886}, {-1.16016, 4.62842, -1.89883}, {3.18018, -1.74805, -1.87886}, {2.98242, 2.28418, 1.93322}, {2.48047, 3.71924, 1.32012}, {-1.48682, 1.5918, 1.32011}, {-3.38623, 2.07275, 1.32011}, {-2.80566, 4.92627, 1.32011}, {-2.90332, -2.10156, 1.32011}, {3.09619, 3.58691, -1.31003}, {3.3252, 4.65186, -1.31427}, {1.29492, 4.93604, 2.54585}, {-1.38721, 4.98682, 2.54585}, {1.91943, -0.790527, 1.84627}, {0.838379, 0.00390625, 1.84627}};};
		class Land_Dum_olez_istan2_maly2 { table = "Tourist"; positions[] = {{-2.83936, 4.41699, -2.50002}, {-2.5874, -4.36768, -2.50001}};};
		class Land_dum_olezlina { table = "Military"; positions[] = {{-1.51849, 3.76157, -3.80689}, {1.24107, 2.70035, -3.86125}, {4.33037, 3.02204, -3.86124}, {7.47538, 0.461738, -3.86124}, {5.56502, -2.89573, -3.86124}, {2.62079, -3.14649, -3.86124}, {-2.80223, 0.703594, -3.86121}, {-2.33007, -2.60448, -3.86124}, {-4.93329, -2.57633, -3.86124}, {-7.59531, -0.231498, -3.86124}, {-5.27894, 3.53115, -3.86124}, {-0.771322, -2.95848, -0.462158}, {-2.71261, -2.86267, -0.461601}, {-2.63909, 2.8146, -0.461578}, {-5.22954, 2.52098, -0.460503}, {-7.4515, 0.31716, -0.460503}, {-4.3126, -2.95515, -0.460503}, {1.24107, 2.70035, -0.460503}, {4.33037, 3.02204, -0.460503}, {7.48441, 0.4605, -0.460503}, {5.56502, -2.89574, -0.460503}, {2.62079, -3.14649, -0.460503}};};
		class Land_Dum_rasovna { table = "CivillianLowerClass"; positions[] = {{-2.50928, -0.196289, -2.66935}, {-1.14453, 1.20264, -2.69602}, {1.39551, 4.10596, -2.69602}, {3.36914, 1.48584, -2.69602}, {-2.78662, -3.76318, -2.71156}, {1.22217, -1.86719, -2.69602}, {2.11426, -4.59961, -2.69602}};};
		class Land_dum02 { table = "Shop"; positions[] = {{-4.06235, 2.34405, -4.01919}, {-4.69933, 1.15402, -4.0192}};};
		class Land_Factory_Main_F { table = "Industrial"; positions[] = {{4.1952, 16.7089, -6.40749}, {1.93805, 17.6062, -6.43362}, {-2.68955, 4.52844, -6.35812}, {-9.62719, 11.114, -6.32811}, {-8.62719, 14.154, -6.32811}, {6.30291, 16.6744, -3.01168}, {6.31521, 16.6761, 0.984253}, {6.31139, 16.6739, 4.89914}, {-5.5351, 8.29651, -6.32355}, {-3.87955, 6.18844, -6.35811}, {-2.53326, 16.5621, -6.40614}, {-4.82845, 17.5287, -6.42144}, {-4.69451, 16.3929, -6.40458}, {-11.3642, 11.0114, -6.3945}, {-2.2601, 8.25226, -6.35311}, {-5.29848, 4.72088, -6.35311}};};
		class Land_Farm_Cowshed_a { table = "Industrial"; positions[] = {{9.42162, -2.29297, -3.07909}, {3.70091, 3.88209, -3.07908}, {2.92255, -5.12362, -3.11407}, {5.99902, -6.74007, -3.11407}, {9.94687, -5.59257, -3.11407}, {-1.28405, -6.7458, -3.11407}, {-1.30579, 0.0951163, -3.11407}, {4.80427, -1.07591, -3.11407}, {3.55491, 0.829801, -3.11407}, {9.70298, 3.38134, -3.11408}, {-10.4591, 0.264183, -3.12534}, {6.24379, 6.72575, -3.11407}, {-5.4085, -2.2367, -3.07908}, {-8.02011, 3.36439, -3.07908}};};
		class Land_Farm_Cowshed_b { table = "Industrial"; positions[] = {{-9.08561, 3.08112, -3.09254}, {-9.81153, -2.07189, -3.09254}, {-5.63606, -2.43915, -3.09254}, {-5.37671, 2.05191, -3.09254}, {-2.46253, 2.69898, -3.09254}, {-0.565484, -0.0781062, -3.09254}, {2.87661, -2.70874, -3.09254}, {2.8718, 3.0094, -3.09254}, {6.83539, 2.42697, -3.09254}, {8.408, -1.3987, -3.09254}};};
		class Land_Farm_Cowshed_c { table = "Industrial"; positions[] = {{-7.3252, -0.379395, -3.21727}, {-1.40625, -2.93994, -3.11728}, {2.82324, -2.9248, -3.11728}, {2.05664, 2.61035, -3.11728}, {-2.05322, 2.66113, -3.11728}, {0.415039, -0.286621, -3.11728}};};
		class Land_Farm_Cowshed_c_dam { table = "Industrial"; positions[] = {{-0.262025, -3.04095, -3.09502}, {2.43436, -2.90228, -3.09502}, {0.994285, 1.24245, -3.12164}, {-2.50981, 2.33184, -3.12163}};};
		class Land_Farm_WTower{ table = "Military"; positions[] = {{-1.3623, -2.2832, -16.1527}, {-3.92822, 3.36133, -16.1527}, {2.28125, 4.23242, -16.1527}, {6.00195, -0.333008, -16.1527}, {1.87988, -3.875, -16.1527}, {-2.70801, -6.55762, -16.1527}, {-6.92725, -0.958008, -16.1528}, {3.16211, 8.20313, -16.1527}, {3.56885, -9.09375, -16.1527} };};
		class Land_fortified_nest_big_EP1 { table = "Military"; positions[] = {{0.663086,1.06738,-0.740341},{0.513184,-1.3623,-0.740341},{-0.991211,1.11621,-0.740341},{-2.87109,-3.94238,-0.740341}};}; 
		class Land_Fuelstation { table = "VehicleService"; positions[] = {{4.03857, -3.77539, -2.28235}, {-2.08545, 0.887207, -2.28234}, {0.974609, 4.27832, -2.28235}};};
		class Land_Fuelstation_army { table = "VehicleService"; positions[] = {{2.20801, -0.440918, -2.28649}, {1.41895, 4.44531, -2.28653}, {-3.29297, 1.01025, -2.28654}, {0.0566406, -2.38428, -2.28652}};};
		class Land_FuelStation_Build_F { table = "Shop"; positions[] = {{1.79297, 0.447754, -1.36255}, {-1.84912, -0.681641, -1.3624}, {-0.820313, 0.497559, -0.361315}, {-1.94482, 0.313477, -0.361315}, {0.124512, 0.317871, -1.33726}, {-2.01904, 1.17188, -0.732993}, {-1.34229, 1.04297, -1.33726}};};
		class Land_FuelStation_Build_PMC { table = "VehicleService"; positions[] = {{-1.29761,-0.527832,-1.336},{-1.51141,1.30359,-1.33611},{2.23376,0.0710449,-1.33611}};}; 
		class Land_FuelStation_Shed_F { table = "VehicleService"; positions[] = {{-6.93268, -3.31792, -2.71871}, {-6.86284, 1.61084, -2.71871}, {-6.93003, 3.34248, -2.71871}, {-0.125897, 3.31803, -2.71871}, {-0.00745261, -2.31034, -2.71871}, {-0.0478012, -3.28375, -2.71871}, {6.94994, -3.56158, -2.71871}, {6.71792, 3.52081, -2.71871}, {6.83172, 2.20388, -2.71871}};};
		class Land_garaz { table = "VehicleService"; positions[] = {{6.57282, 0.481158, -1.2396}, {5.46636, 2.30312, -1.22306}, {5.0013, -2.4969, -1.22305}, {6.31583, -3.77113, -0.191544}, {-0.112279, -0.015126, -1.22305}, {-5.53941, -2.90805, -1.22306}, {-6.91614, 2.66368, -1.22306}};};
		class Land_Garaz_bez_tanku { table = "Industrial"; positions[] = {{0.0942383, -6.26465, -2.59568}, {-8.29785, -6.63428, -0.547643}, {8.37939, -6.62988, -0.54983}, {8.38916, -2.20068, 3.39013}, {7.10303, 0.682617, 3.39007}, {-7.26318, 4.40967, 3.39007}, {6.91992, 4.55273, 3.39007}, {-7.19287, 0.61377, 3.39007}, {-8.10352, 6.41064, 3.39007}, {-8.37598, -6.7168, -2.59567}, {8.58936, -6.70703, -2.59567}};};
		class Land_garaz_mala { table = "VehicleService"; positions[] = {{-1.82923, -2.57912, -1.13185}, {1.40341, -2.85288, -1.13186}, {1.6908, 2.69406, -1.13187}, {0.297513, 1.19001, -1.13184}, {-1.73175, 2.17767, -1.13187}};};
		class Land_GH_Gazebo_F { table = "Tourist"; positions[] = {{-4.50391, -1.80859, -1.76616}, {-6.35645, -1.83252, -1.76501}, {-6.45215, 3.13232, -1.76616}, {-4.47559, 3.14795, -1.76616}, {-0.116211, 0.0966797, -1.76616}, {-1.10986, 0.876465, -1.76612}, {-0.0151367, 1.54053, -1.76616}, {0.935547, 0.815918, -1.76609}, {3.7085, -1.48047, -1.76616}, {3.43799, 2.98584, -1.76616}, {6.51318, -1.44189, -1.76616}};};
		class Land_GH_House_1_F { table = "CivillianUpperClass"; positions[] = {{1.13623, 0.0737305, -2.10117}, {2.18457, -9.26807, -2.12617}, {-2.18555, -9.26807, -2.12617}, {2.18457, -9.26807, 1.37383}, {-2.18555, -9.26807, 1.37383}, {3.89063, 0.170898, -2.12617}, {-3.82764, 0.171875, -2.12617}, {3.88672, 0.240234, 1.37382}, {-3.99756, 0.090332, 1.37382}, {2.65918, -0.775391, -2.10117}, {3.7373, -2.50879, -2.10117}, {3.73145, -6.47363, -2.10117}, {1.10547, -6.50488, -2.10117}, {1.06787, -2.50977, -2.10117}, {2.48242, -4.57031, -2.10117}, {-3.59668, -3.32666, -2.10117}, {-3.51953, -6.36426, -2.10117}, {-1.0249, -6.41748, -2.10117}, {-0.967773, -2.72754, -2.10117}, {-2.3457, -4.9248, -2.10117}, {-1.07666, -1.521, 0.148827}, {-2.66016, 0.669434, -2.10117}, {0.0610352, 2.61719, -2.10117}};};
		class Land_GH_House_2_F { table = "CivillianLowerClass"; positions[] = {{2.17676, -9.06494, -0.301174}, {-2.19336, -9.06494, -0.301173}, {3.88379, 0.373535, -0.301183}, {-3.83545, 0.375, -0.301172}, {2.66797, 1.14111, -0.336174}, {0.855957, 0.0244141, -0.336174}, {3.40039, -2.52148, -0.336174}, {3.54443, -6.57227, -0.336174}, {0.939941, -5.94629, -0.336174}, {1.07617, -2.67041, -0.336174}, {-2.67725, 0.958984, -0.336174}, {-0.876953, -6.50488, -0.336174}, {-3.72607, -6.16162, -0.336174}, {-2.19971, -4.12598, -0.336174}, {-3.55908, -2.64404, -0.336174}, {-1.06299, -1.85596, -0.336174}, {-1.02637, 1.25488, -0.336174}};};
		class Land_GH_MainBuilding_entry_F { table = "Shop"; positions[] = {{0.0737305, -15.083, -0.152101}, {-4.22168, -18.2041, -0.152101}, {3.67871, -18.0068, -0.152101}, {0.509277, -18.9941, -0.152101}};};
		class Land_GH_MainBuilding_left_F { table = "Tourist"; positions[] = {{4.18213, 17.4526, -1.68432}, {10.6416, 18.9888, -1.68432}, {-3.13721, 15.417, -1.68432}, {-8.91553, 13.8643, -1.68432}, {14.4922, -13.3413, -1.91566}, {18.2383, -12.4443, 1.20259}, {15.5342, -0.175781, -1.06907}, {-8.96436, 8.27441, -1.06905}, {4.85889, 12.0947, -1.06908}, {11.6353, 13.7163, -1.06896}, {11.1035, -6.01172, 3.37644}, {12.6377, 9.48145, 3.84039}, {6.4126, 7.51123, 3.42891}, {2.49219, -8.15381, 3.37644}, {-1.42334, 6.2124, 4.16463}, {-5.92334, 5.11328, 4.16464}, {-2.9082, -19.1812, 3.83704}, {-10.8076, -8.92041, -1.91566}, {16.6934, -4.82178, 3.37644}, {13.3647, 6.08691, -1.05389}, {11.3291, 8.56543, -1.05389}, {14.0742, 3.06836, -1.05389}, {12.7559, -4.16504, -1.05389}, {11.0757, -1.04102, -1.05389}, {0.885742, -3.83545, -1.05388}, {1.02344, -0.669434, -1.05388}, {0.28125, 6.27246, -1.05388}, {-1.65723, 3.7627, -1.05388}, {0.797363, 2.78369, -1.05388}, {-1.75049, -1.44678, -1.05388}, {-1.75928, 9.47168, -1.05388}, {16.5967, -6.66846, -1.05379}, {7.18555, 7.05371, -1.05389}, {6.18896, 3.50732, -1.05389}, {4.04004, 6.37695, -1.05389}, {9.36377, 1.60107, -1.05389}, {7.16016, 1.48633, -1.05389}, {5.00635, 0.676758, -1.05389}, {-2.01221, -8.62744, -1.05387}, {-3.61914, -12.041, -1.05387}, {0.833496, -12.6499, -1.05388}, {-0.668945, -16.8535, -1.05387}, {5.51318, -15.4482, -1.05388}, {3.92578, -11.043, 0.04284}, {1.18994, -9.94678, 0.0429201}, {1.96387, -11.3545, 0.04284}, {2.79834, -9.87256, -1.05388}, {0.217285, -8.40039, -1.05388}, {3.04199, -5.81592, -1.05388}, {5.86084, -7.15332, -1.05388}, {10.7539, -14.959, -1.05389}};};
		class Land_GH_MainBuilding_middle_F { table = "Tourist"; positions[] = {{3.62354, 19.23, -0.0911093}, {4.32324, -11.1313, 0.521419}, {4.23535, -14.5264, 0.521421}, {2.29688, 1.52539, 0.521414}, {7.5166, 11.3154, 0.521409}, {3.31152, 10.5977, -0.32245}, {-3.24414, 11.1016, -0.32245}, {3.76758, -2.73828, 4.97233}, {5.78467, -6.23047, 4.97233}, {4.50098, -11.0581, 4.97234}, {-0.0107422, -13.1509, 5.18114}, {-0.0102539, -1.35889, 4.97234}, {-4.5293, -3.4624, 4.97233}, {-5.80469, -8.28125, 4.97233}, {-3.78857, -11.772, 4.97234}, {3.0874, 11.2681, 2.76811}, {-3.05518, 11.356, 2.76811}, {4.36963, -16.541, 4.97234}, {-0.0102539, -13.1494, 4.97239}, {-0.0102539, -1.35986, 5.18127}, {-2.12598, 3.604, 4.97233}, {2.92432, 2.71582, 4.97233}, {-2.31689, 1.52539, 0.521415}, {-6.55273, 6.25342, 0.521412}, {-3.06543, 19.23, -0.0911081}, {-9.52539, -15.6362, 0.521422}, {0.0419922, -8.92822, 1.1883}};};
		class Land_GH_MainBuilding_right_F { table = "Tourist"; positions[] = {{11.6323, -18.0488, 3.83704}, {3.09229, -19.1812, 3.83704}, {10.9917, -8.92041, -1.91566}, {-3.42139, 17.4531, -1.68432}, {-9.43213, 18.9912, -1.68432}, {3.89893, 15.417, -1.68432}, {9.67871, 13.8628, -1.68432}, {-14.8921, -13.0605, -1.68432}, {-15.0518, -7.07178, -1.0565}, {-14.3081, -13.3423, 1.20259}, {9.14844, 8.27441, -1.06908}, {4.59814, 9.71582, -1.06908}, {-0.556641, 10.1294, -1.03291}, {-4.67529, 12.0947, -1.06908}, {-0.132324, -18.2842, -1.0689}, {-10.9194, -6.26172, 3.37644}, {-12.4668, 9.42578, 3.85325}, {-6.26709, 7.5083, 3.42891}, {-2.30811, -7.90381, 3.37644}, {1.60693, 6.21289, 4.16464}, {-16.7109, -4.39014, 3.37644}, {2.05811, 0.107422, -1.05388}, {-0.549805, 6.49365, -1.05389}, {2.1958, 3.6875, -1.05388}, {-0.604004, 2.72119, -1.05388}, {-0.504883, -0.401855, -1.05388}, {5.60889, 3.88672, -1.05388}, {7.24316, 0.395508, -1.05388}, {8.14551, 3.05615, -1.05388}, {6.08984, -2.45068, -1.05388}, {-13.665, -0.660645, -1.05389}, {-7.36035, -2.46533, -1.05389}, {0.69873, -4.33789, -1.05388}, {3.01025, -8.45068, -1.05387}, {-4.26172, -14.4229, -1.05388}, {2.58984, -13.8989, -1.05387}, {-1.00977, -10.0918, 0.0429201}, {-1.74756, -11.2725, 0.0429201}, {-3.37891, -10.9971, 0.04284}, {-9.52979, -13.9927, -1.05389}, {-9.68457, -10.8848, -1.05389}, {-2.60596, -9.95654, -1.05388}, {0.424805, -7.37012, -1.05388}, {-3.73291, -7.70898, -1.05388}, {-5.74365, -5.39795, -1.05388}, {-6.83447, 1.25879, -1.05389}, {-3.33496, 6.95117, -1.05389}, {-7.40137, 6.79736, -1.05389}, {-5.28369, 3.70166, -1.05389}, {-9.27783, 2.74805, -1.05389}, {-13.4971, 3.14209, -1.05389}, {-10.3931, 9.12256, -1.0539}, {-13.1572, 8.52979, -1.0539}, {-13.542, 5.12109, -1.05389}, {-11.167, 6.13477, -1.05389}, {-10.4136, 12.7236, -1.0539}};};
		class Land_GH_Stairs_F { table = "Tourist"; positions[] = {{0.0010255, -2.72131, 2.55698}};};
		class Land_GuardShed { table = "Military"; positions[] = {{0.888184, -0.602051, -0.603837}, {0.0297852, -0.970215, -0.60384}, {-0.860352, -0.86377, -0.60384}};};
		class Land_Hangar_2{ table = "VehicleService"; positions[] = {{4.41602, -11.5488, -2.70184}, {13.7231, -7.37598, -2.56808}, {7.03174, 0.158203, -2.56808}, {10.6089, 7.32227, -2.56808}, {1.90771, 8.25586, -2.56808}, {-3.59521, 0.0888672, -2.56808}, {-2.68652, -6.90332, -2.56808}, {-10.5674, -7.15137, -2.56808}, {-13.4326, -0.368164, -2.56808}, {-12.9087, 8.01758, -2.56808}, {-6.44287, 8.05273, -2.56808}, {0.729004, 4.18457, -2.56808}, {11.6191, 2.9541, -2.56808}, {3.28174, -6.58203, -2.56808}, {-6.95898, -2.74316, -2.56808}, {-0.533203, 10.7441, -2.56808}, {10.0005, 10.9248, -2.56808}, {14.4771, 9.09082, -2.56808}, {14.0713, -1.62207, -2.56808}, {4.55859, -2.59277, -2.56808}, {-12.9209, 3.89355, -2.56808} };};
		class Land_Hangar_F { table = "Military"; positions[] = {{-11.6641, 20.9063, -5.38129}, {-12.1133, 9.19336, -5.38129}, {-12.1543, -3.90625, -5.38129}, {-12.1816, -16.8906, -5.38129}, {1.75, 20.9688, -5.38129}, {11.3711, -19.2734, -5.38129}, {12.0469, -5.7168, -5.38129}, {12.7305, 6.83203, -5.38129}, {13.7285, 18.1602, -5.38129}}; }; 
		class Land_Hlidac_budka { table = "Military"; positions[] = {{-2.41766, 1.9433, -0.812447}, {-0.2234, 0.0402113, -0.812447}, {-1.41313, 0.753395, -0.810051}, {-2.33077, 0.438901, -0.810051}, {-2.31207, 2.12725, -0.753304}, {-0.300179, 2.28028, -0.810051}, {2.21524, 0.791552, -0.810051}, {1.63944, 2.21874, -0.812447}, {2.73217, 2.08455, -0.812447}};};
		class Land_Hospital { table = "Military"; positions[] = {{2.521, -4.8374, -1.44333}, {-0.96582, 0.700684, -1.44334}, {-5.83936, 5.00146, -1.44332}, {2.24707, 6.20215, -1.44335}};};
		class Land_Hospital_main_F { table = "Medical"; positions[] = {{-2.07764, 17.1772, -8.05684}, {-4.15527, 15.8711, -8.04201}, {-4.15527, 7.51123, -8.04201}, {-4.06934, 0.341309, -8.04201}, {-2.89795, -14.4712, -8.04201}, {6.7749, 4.61084, -8.04087}, {13.0596, -6.12891, -8.04005}, {13.3486, -0.709473, 7.32734}, {-5.2876, -6.90283, 7.53592}, {-2.63379, -19.8945, 7.32734}, {-5.28711, -6.90283, 7.32737}, {2.59424, 14.5205, 7.32734}};};
		class Land_Hospital_side1_F { table = "Medical"; positions[] = {{-2.78467, 9.24121, -1.95247}, {-2.98926, 9.2627, 11.0537}, {4.15137, 9.27881, 11.0561}, {3.90869, 9.23047, -3.77245}, {-2.53369, -1.48389, 7.43984}, {7.94385, -7.83789, 7.43984}};};
		class Land_Hospital_side2_F { table = "Medical"; positions[] = {{6.96717, -8.04274, -8.14577}, {1.41092, -4.80159, -8.14577}, {-1.56019, -8.75595, -8.14577}, {-4.22083, 2.18968, -8.13094}, {12.3002, 0.893905, -8.13094}, {2.54831, 1.37786, 11.219}, {-1.47799, -9.50727, 11.219}, {10.826, -3.37552, 10.6051}, {-1.47883, -9.5072, 11.4275}, {-7.28169, -9.95752, 7.23839}, {14.1039, -7.15528, -8.14577}, {2.30356, 1.02651, -8.14577}, {-9.68135, -6.93216, -8.14577}};};
		class LAND_hospoda  {table = "CivillianLowerClass"; positions[] = {{3.46094,-1.42871,-1.80302},{2.40137,-1.22656,-1.80307},{7.81836,-1.63281,-1.80282},{2.04004,-6.71777,-1.80289},{-5.56641,0.793945,-1.80295},{-4.18164,8.64063,-1.80286},{1.16602,5.0791,-1.80348},{1.21582,3.73242,-1.8034},{0.248047,5.55176,-1.80324},{-1.84766,3.92969,-1.80313},{-1.85254,0.222656,-1.80321}};}; 
		class Land_House_C_1_EP1 { table = "CivillianLowerClass"; positions[] = {{-3.62476,-1.83301,-0.967744},{3.19263,-2.92676,-0.937744},{7.94824,-1.15381,-0.957744},{-7.64917,-2.33325,-0.257745},{-2.65161,-2.34473,-0.717744},{2.07666,-3.62549,-0.0177441},{7.56982,-2.3689,-0.257744},{2.6355,-1.62378,-0.947745}};}; 
		class Land_House_C_1_v2_EP1 { table = "Shop"; positions[] = {{5.8999, -1.54199, -1.3819}, {7.9292, 1.61084, -1.3819}, {-5.2998, -2.25781, -1.3819}, {-4.80371, 2.10986, -1.3819}, {-8.30859, -0.848145, -0.924453}, {-8.16064, -2.125, -0.540064}, {-2.72168, -0.750977, -0.938236}, {-2.83398, 4.05615, -1.45337}, {7.4917, -0.581055, -0.620711}, {2.95361, -2.38916, -0.938236}, {2.57373, 0.108887, -1.40007}, {4.84033, 2.37793, -1.40007}};};
		class Land_House_C_10_EP1 { table = "CivillianLowerClass"; positions[] = {{-0.476807,-6.18408,-4.2081},{-2.19189,-2.32666,-4.19943},{0.970459,5.15942,-4.19894},{2.09814,8.11133,-4.19852},{0.209961,8.65503,-4.19772},{-1.55542,-2.83594,-0.0197258},{0.849854,-5.49219,-0.869633},{-1.56226,8.49561,-0.878298},{-4.927,0.8396,-0.574228},{-2.1604,8.40674,2.47196},{2.02271,5.81372,5.22763},{-2.17822,1.53076,-0.878794},{-3.52124,-9.30933,-4.20103},{0.401611,-0.616211,-4.19847},{-1.30835,9.25757,-4.11613},{-0.946045,9.29761,-3.10613},{0.183594,9.23438,-2.74583},{1.15552,4.8877,-3.25071},{0.820313,4.84009,-3.58973},{-0.0129395,9.26294,-3.78608},{0.918701,-1.18433,-0.879436},{-2.12231,-2.69775,-0.399366},{-3.64014,4.15503,-0.268515},{-3.17114,0.63916,-0.878897},{2.64014,4.59009,2.47196},{0.853516,5.55664,5.22757},{2.84448,5.5791,2.47196},{3.43945,-9.37354,-0.879139},{1.83667,7.45825,-0.878618},{3.32861,-2.79565,-4.20015}};}; 
		class Land_House_C_11_EP1 { table = "CivillianLowerClass"; positions[] = {{-4.875,-3.75586,-2.45703},{-1.22852,-3.17529,-2.08453},{6.55859,0.731934,-2.08453},{4.74072,3.21436,-2.08453},{4.39551,0.458984,-2.08453},{0.449219,-3.03857,0.972969},{4.8291,3.44629,0.972969}};}; 
		class Land_House_C_12_EP1 { table = "CivillianLowerClass"; positions[] = {{-1.66211, -6.18457, -3.49717}, {6.61133, -3.4248, -3.49721}, {-1.0415, -2.51123, -3.49721}, {2.979, 1.33496, -3.40384}, {-3.2002, -8.52148, -3.49721}, {2.67383, -8.55566, -3.49721}, {-3.72119, -7.18652, 0.116839}, {2.7959, -7.38379, 0.106818}, {5.79248, -3.57813, 0.123798}, {6.79053, 1.9624, 0.108314}, {-2.90234, 1.56543, 0.107461}, {-3.63818, -2.81934, 0.109945}, {-1.17236, -2.70508, 0.117717}, {-3.65234, -8.66406, 3.48155}, {2.7876, -8.69775, 3.47776}, {2.35938, -6.15283, -3.49721}, {-0.620605, -7.80225, 0.0127897}, {1.82861, -0.15625, 0.0127897}, {7.22998, 0.541504, -2.84499}, {7.19873, -1.48535, -3.4972}, {7.39502, -3.86035, -3.02664}, {1.96533, -1.44385, -3.49721}, {3.125, -3.8916, -3.4972}, {-3.4165, -3.06201, -3.49719}, {-2.62695, 0.698242, -3.49719}};};
		class Land_House_C_2_EP1 { table = "CivillianLowerClass"; positions[] = {{-3.63477,2.83398,-2.27891},{5.94116,1.08691,-2.30269},{0.387207,1.1936,-1.47782},{5.49438,-1.47388,1.56868},{-2.24487,-1.44019,0.547503},{-2.01343,3.41553,0.547503},{5.06909,1.21997,0.746294},{5.75464,-4.69043,0.794252},{0.1604,1.06812,-2.00456},{-0.469482,1.10962,-2.2006},{1.1167,0.707031,-1.78269},{-1.62158,-1.72437,1.1175},{-1.63965,-1.27368,1.4575},{5.88379,-3.06787,1.17425},{-2.31738,3.16724,1.3775},{-1.8562,3.80322,1.3775},{-0.393799,3.50586,-1.61131},{6.06934,0.0444336,-2.07269},{-1.95215,-1.91943,-2.33913},{2.17334,-1.75024,0.74663}};}; 
		class Land_House_C_3_EP1 { table = "CivillianLowerClass"; positions[] = {{6.61987,-1.8667,-3.91483},{5.80493,1.21094,-3.91483},{-7.11523,2.78418,-3.86868},{-6.45874,-0.478271,-3.86868},{-6.37598,-2.27344,-3.86868},{-4.84521,-2.55664,0.576136},{-1.21606,-1.24634,1.96108}};}; 
		class Land_House_C_4_EP1 { table = "CivillianUpperClass"; positions[] = {{-3.15137, 0.960938, 0.428294}, {-4.35889, 4.38428, -3.50999}, {-3.88281, -1.98828, -3.50999}, {-4.27197, -2.41504, -3.50999}, {-0.959961, -1.64648, -3.50999}, {1.60986, -2.4624, -3.50999}, {4.37598, 4.04004, 2.81247}, {5.43262, 4.28271, -0.265365}, {-1.16455, -1.29346, -0.37674}, {3.80127, -6.02686, -0.305049}, {-1.13916, -6.03857, -0.305048}, {1.03613, -4.93799, -0.305049}, {-5.56494, -3.81299, -0.377515}, {-1.77051, 4.60254, 2.1517}, {-5.60791, 2.58008, 5.20516}, {-3.17285, -5.6958, 2.9574}, {-1.16553, -1.29492, -0.167937}, {5.87939, -1.73291, 0.357847}, {5.87061, -2.42871, 0.678546}, {5.86768, -2.05713, 1.05437}, {5.90332, -2.25391, 0.357847}, {5.91943, -1.7832, -0.00103378}, {5.83057, -2.58643, -0.00103378}, {0.39209, 2.26758, -0.390683}, {-5.28027, -0.0263672, -0.39104}, {-4.26855, 2.9248, -0.390033}, {-4.4126, 2.39307, 2.77001}, {2.7168, -2.66748, 2.7629}, {-1.52686, -0.978027, 2.759}};};
		class Land_House_C_5_EP1 { table = "CivillianUpperClass"; positions[] = {{-2.37402, -5.19287, 1.81636}, {-1.45703, -0.330566, 1.81636}, {-4.01123, 3.87939, 1.81636}, {-2.98828, -1.42871, -0.828645}, {-3.0752, -4.69824, -0.828645}, {1.4209, 3.2627, -0.828645}, {4.02686, 5.03809, 1.82254}, {4.05176, 0.952148, 1.8163}, {-0.544922, -2.88672, -0.408834}, {-0.506348, -3.54541, -0.0499535}, {-0.513672, -3.29199, -0.408834}, {-0.487305, -2.71875, 0.270746}, {-0.475586, -3.15381, 0.270746}, {-0.530273, -3.54102, 0.646572}, {-0.716309, -4.95801, -0.948645}, {-4.39893, -0.155762, -0.370671}, {-1.24023, 3.7998, -0.948645}, {-4.0957, 3.86719, -0.314454}, {0.745117, 4.90332, -0.00334597}, {2.66748, 0.825195, -0.408834}, {1.87158, 0.80127, -0.0499535}, {2.29248, 0.84668, 0.270746}, {2.12354, 0.806152, -0.408834}, {2.6792, 0.812988, 0.646572}, {3.96973, 2.07617, -0.938645}, {-0.953125, 2.48779, 1.82135}};};
		class Land_House_C_5_V1_EP1 { table = "CivillianLowerClass"; positions[] = {{1.01025,4.85181,-1.4815},{3.42773,1.4248,-1.4915},{-1.62939,-4.69336,-1.4815},{-1.56982,3.66333,-1.4915},{2.28418,1.03076,2.2605},{-0.941895,-3.75952,1.16351},{0.615479,4.92847,-0.671498},{2.23071,0.780518,-0.411497},{2.61011,0.823975,-1.0915},{-4.35205,-0.0966797,-1.0515},{-0.5271,-2.93677,-1.4215},{-4.2854,3.09082,-1.4715},{-4.42822,-5.13232,-1.4815},{-0.468018,-3.18481,-0.0414963},{2.96582,1.17114,2.2605},{1.85205,4.83716,1.7605}};}; 
		class Land_House_C_5_V2_EP1 { table = "CivillianLowerClass"; positions[] = {{1.02588, 4.91748, -0.568064}, {-3.14648, -3.7124, -1.39336}, {-2.34668, 3.26074, -1.39336}, {-1.45703, -0.330566, 1.25164}, {-4.06787, 3.66504, 1.25163}, {-1.17139, -4.36963, 1.25164}, {1.4209, 3.2627, -1.39336}, {4.02686, 5.03809, 1.25782}, {4.04834, 0.954102, 1.2516}, {2.68701, 0.844238, -0.973552}, {1.93359, 0.849609, -0.614672}, {2.33496, 0.867188, -0.293972}, {2.68311, 0.855957, 0.0818539}, {1.98535, 0.827637, -0.973552}, {-1.03027, 4.06641, -0.93539}, {-4.13379, 3.78955, -0.879172}, {-4.3877, -0.0429688, -0.93539}, {-0.50293, -2.67627, 0.0818539}, {-0.475098, -3.32568, 0.0818539}, {-0.510742, -2.7915, -0.293972}, {-0.518555, -3.64258, -0.293972}, {-0.425781, -3.22656, -0.614672}, {-0.502441, -2.59229, -0.614672}, {-0.550781, -3.54199, -0.614672}, {-0.478516, -2.87598, -0.973552}, {-0.518555, -3.41748, -0.973552}};};
		class Land_House_C_5_V3_EP1 { table = "CivillianLowerClass"; positions[] = {{-1.47949, -2.09375, 1.15206}, {-0.915527, 1.00732, 1.15206}, {-4.15674, 3.479, 1.15206}, {2.42188, 1.08496, 2.25811}, {2.01514, 4.72705, 1.71888}, {3.66504, 4.90723, 1.64557}, {-4.1543, -5.02832, 1.43643}, {-4.2085, -4.29736, 1.44999}, {0.846191, 4.89941, -0.672637}, {0.788086, 4.99219, -1.60794}, {1.91016, 0.866699, -1.07813}, {2.78516, 0.799316, -0.719244}, {2.25195, 0.846191, -0.398545}, {1.96338, 0.79834, -0.0227189}, {2.729, 0.821289, -1.07813}, {2.30176, 0.790039, -0.719244}, {-1.18555, 4.04883, -1.03996}, {-4.42529, -0.180664, -1.03996}, {-4.09229, 3.79834, -0.983745}, {-0.462891, -2.771, -0.0227189}, {-0.508789, -3.47168, -0.398545}, {-0.526367, -2.6167, -0.719244}, {-0.460938, -3.36377, -0.719244}, {-0.53418, -2.69824, -1.07813}, {-0.456543, -3.39258, -1.07813}, {-1.61084, 0.255371, -1.28603}, {-3.14014, -4.30029, -1.61794}, {-2.86816, 1.20361, -1.61794}};};
		class Land_House_C_9_EP1 { table = "CivillianLowerClass"; positions[] = {{-3.47339,2.13086,-3.74726},{-3.17773,4.19849,-3.74837},{-0.839844,5.7041,-3.74944},{4.67529,1.19897,-3.74832},{4.20508,-1.85229,-3.74805},{1.01074,-0.609619,-0.152166},{0.213379,1.56616,-0.152166},{1.66138,4.33472,-0.152166},{4.38208,-5.14136,-0.152166}};}; 
		class Land_House_K_1_EP1 { table = "CivillianLowerClass"; positions[] = {{-0.685547,4.02161,1.56626},{3.71387,5.48114,1.56626},{3.23438,2.35388,1.56626},{-3.30566,4.65558,1.54929},{-3.77539,2.02087,1.60863}};};
		class Land_House_K_3_EP1 { table = "CivillianUpperClass"; positions[] = {{-5.14697, -4.72168, -0.906751}, {-2.42969, -0.243652, -0.816752}, {-0.67627, -2.78809, -0.816753}, {1.68311, 0.194824, -0.816753}, {1.74365, 5.13037, -0.564108}, {-2.46143, 5.87695, -0.564108}, {-6.50879, 4.39258, -0.966749}, {1.11426, 1.06494, 2.96325}, {-4.24316, 3.27637, 1.98875}, {-2.25342, 0.253418, 3.52125}, {-5.59033, 2.88525, -0.056838}, {-5.10449, 2.82422, 0.263861}, {-5.25439, 2.875, -0.415719}, {-5.90186, 2.85498, 0.639687}, {-5.6582, 2.79541, -0.90775}, {-4.55811, -1.70068, -0.90775}, {2.13477, -3.09326, 0.0263829}, {-1.10303, -3.34912, -0.314297}, {-0.961914, 1.62109, -0.0614443}, {-0.360352, 1.61768, 0.259255}, {-0.703125, 1.61328, -0.420325}, {0.533691, 4.77197, 2.74575}, {-0.807617, 2.83887, 2.74575}, {-1.71094, 1.56104, 3.39788}, {-1.18945, -2.04053, 3.09635}, {-5.09766, 1.01416, 2.03619}, {-5.15771, -2.63281, 1.92152}};};
		class Land_House_K_5_EP1 { table = "CivillianLowerClass"; positions[] = {{-3.30371, 0.140137, 1.78113}, {-0.289063, -1.74805, 1.35903}, {-4.73779, 3.45264, 1.49228}, {3.9585, -0.0654297, 2.30561}, {-6.35938, -2.45361, 0.559874}, {1.50977, 0.118652, 1.92043}, {-1.5083, 4.22559, 2.3051}, {-4.19043, 1.18066, 2.44702}, {-4.5293, 1.19287, 2.10747}, {-4.04199, 1.17432, 1.79162}, {-5.35547, 2.43115, 1.00252}, {4.45703, 3.4248, 2.28084}, {2.43359, 1.09717, 1.98535}, {-0.0952148, 2.06641, 1.51624}};};
		class Land_House_K_6_EP1 { table = "CivillianLowerClass"; positions[] = {{-6.96729, 5.95166, -1.60543}, {-4.125, -3.39648, -1.60263}, {-0.295898, 1.8999, -1.63443}, {1.21924, 5.50146, -1.63434}, {6.69922, 5.36914, -1.70718}, {2.2583, 3.86182, -1.63435}, {-0.406738, 2.14502, 1.44499}, {-0.413574, 0.0224609, 1.44499}, {-4.60303, 1.67383, 1.45927}, {-4.60449, 0.0297852, 1.46056}, {1.07764, 5.1665, 1.44499}, {-2.58301, -3.36572, 4.3819}, {-2.02246, 1.52051, -1.14724}, {3.09473, 2.30518, -1.17489}, {3.16553, 2.6958, -0.495308}, {3.12256, 1.98242, -0.119483}, {3.13525, 1.86182, -1.17489}, {2.78564, 2.57861, -1.60932}, {-0.401855, 3.02393, -0.77243}, {4.25586, -2.08398, -1.60936}, {-0.335449, -2.7959, -1.60947}, {4.15576, 5.10938, 1.46999}, {2.88623, 3.12158, 2.10386}, {3.24512, -2.3501, 1.46937}, {-4.12354, -1.77832, 1.48801}, {-2.33643, 0.90332, 1.49666}, {-4.91406, 4.13916, 1.95799}, {2.01709, 1.19922, 4.45264}, {0.308594, -1.7915, 4.45264}, {3.24805, -2.78662, 4.45264}, {0.00390625, 4.54248, 4.45264}, {4.31689, 4.5127, 4.4331}, {-0.728027, -0.0766602, 5.42167}, {-0.649902, 0.350586, 5.08212}, {-0.63916, -0.081543, 4.76627}, {-0.62793, 0.181152, 4.45264}, {-4.62646, 1.64844, 4.84777}, {-2.00488, 3.50439, 4.23366}, {-3.8584, -1.31738, 4.17101}, {-1.79932, 0.67627, 4.89767}};};
		class Land_House_K_7_EP1 { table = "CivillianUpperClass"; positions[] = {{-0.761719, 0.30957, 0.122589}, {-0.0102539, 0.315918, 0.48147}, {-0.420898, 0.256348, 0.80217}, {-0.782715, 0.377441, 1.178}, {-0.0947266, 0.282227, 0.122589}, {-2.69434, 1.68262, -0.25163}, {-0.602539, 4.28613, -0.25163}, {-4.56055, 4.07227, -0.25163}, {-7.50293, 1.99951, -0.25163}, {-4.5083, 0.419434, 3.25752}, {-2.37158, 1.88574, 3.25752}, {-0.399414, 4.0498, 3.25752}, {-0.244141, 1.31104, 3.25752}, {-4.72217, 4.05176, 3.70552}, {-5.2417, 3.37793, 4.21789}, {-5.21143, 3.26465, 3.87834}, {-5.0835, 3.39893, 3.56249}, {1.3125, -0.12793, 3.17243}, {1.48193, 3.68018, 3.17243}, {-2.14648, -1.38135, 3.17243}, {-4.78271, -1.2373, 3.63118}, {-6.39355, 1.87891, 6.43005}, {-2.01367, -0.456055, 6.43005}, {0.336426, 2.80566, 6.43005}};};
		class Land_House_K_8_EP1 { table = "CivillianUpperClass"; positions[] = {{1.45654, 2.94873, -2.61917}, {-1.12109, 3.91455, -2.61989}, {-0.847656, -1.52344, -2.57857}, {-3.33936, -0.00390625, -2.14783}, {-1.48145, -0.221191, 0.224882}, {3.68652, -3.29639, 0.338902}, {-3.00781, -3.77783, 0.86015}, {3.7168, 3.2002, 0.284635}, {1.65869, 5.3252, 0.344557}, {-1.61816, 5.2627, 0.341716}, {-4.53955, 2.13428, 0.622854}, {-0.00195313, -0.379883, 6.24372}, {3.28125, -1.71533, 3.56925}, {3.28564, 4.11768, 5.84676}, {-3.06592, 1.69531, -2.20273}, {-2.70703, 3.73779, -1.81757}, {3.25977, -0.118164, -1.81873}, {2.94971, -0.210449, -2.15827}, {2.98975, -0.179688, -2.47412}, {2.72217, -3.33936, -2.69243}, {0.12207, 3.95752, 0.220601}, {0.714355, 1.21338, 0.219934}, {-0.637695, 2.91748, 3.33999}, {-2.41455, -0.300781, 3.33852}, {1.42041, 2.74561, 3.82}, {2.69336, 3.13721, 3.33886}, {1.30469, -0.635742, 3.33933}};};
		class Land_House_L_1_EP1 { table = "CivillianLowerClass"; positions[] = {{1.63135,-1.2251,-0.619034},{-0.165039,-1.74463,-0.6114815},{-1.18311,-0.15918,-0.596542}};};
		class Land_House_L_3_EP1 { table = "CivillianLowerClass"; positions[] = {{-5.59863,-0.384766,-0.173644},{-5.23425,2.49609,-0.22691},{0.75769,2.95508,-0.222477},{-0.387817,0.0234375,-0.222477},{2.11365,2.99512,-0.222477}};};
		class Land_House_L_4_EP1 { table = "CivillianLowerClass"; positions[] = {{-3.34961,-0.487122,-1.33058},{-6.60547,0.131348,-1.29852},{-0.385742,-0.0551758,-1.34066},{-0.209961,3.14941,-1.253},{3.47559,0.370972,-1.05766},{5.41992,3.25671,-1.01435}};};
		class Land_House_L_6_EP1 { table = "CivillianLowerClass"; positions[] = {{5.51416,-0.64624,-1.509},{1.1626,1.93677,-1.5399},{4.20996,1.62158,1.28101},{3.15381,-2.12427,1.28099},{-3.74268,-2.23193,-1.53738}};};
		class Land_House_L_7_EP1 { table = "CivillianLowerClass"; positions[] = {{3.52979,-0.34375,0.102112},{-0.245117,3.10742,-0.261154},{-5.43408,3.36426,-0.646149},{-4.90137,1.19189,-0.651993},{0.214844,-3.70947,-1.00735}};};
		class Land_House_L_8_EP1 { table = "CivillianLowerClass"; positions[] = {{0.662598,5.04395,-1.01205},{0.73291,2.59424,-1.01574},{4.73828,3.56836,-0.773781},{3.76758,3.67578,1.73622},{-2.51514,-2.19971,-1.55013},{-2.51514,-2.19971,-1.55013}};}; 
		class Land_House_L_9_EP1 { table = "CivillianLowerClass"; positions[] = {{2.55127, -0.229004, -0.643693}, {1.46875, 1.62939, -0.647921}, {-2.2749, 1.76221, -0.537257}, {-1.30078, 0.0268555, -0.628793}};};
		class Land_HouseB_Tenement { table = "CivillianUpperClass"; positions[] = {{2.39063,4.80322,-19.8245},{-10.2041,-0.48877,-20.3445},{4.65625,-2.125,-20.3445},{7.27734,11.5957,-20.8045},{-4.50854,5.10645,-19.8245},{5.11865,12.0298,-20.8045},{13.5625,12.1631,-20.8045},{-1.7771,4.57861,-19.8245},{-0.338623,4.80322,-19.8245},{-11.0986,-0.365234,-20.3445},{2.38574,5.15869,-20.2245},{14.2202,4.91895,-20.3945},{6.7251,11.6895,-20.3445},{3.2915,-1.90088,-20.3445},{12.9602,10.0479,-20.8045};{13.3726,0.939453,-20.8045}};}; 
		class Land_HouseBlock_A1 { table = "CivillianUpperClass"; positions[] = {{-3.49512, -4.08008, -8.86441}, {-4.52539, -1.00244, -8.86441}, {-3.36816, 3.27881, -8.86441}, {-0.242676, 4.7627, -8.72595}, {5.1875, -4.93896, -8.69277}, {-6.39795, -5.36816, -9.02231}};};
		class Land_HouseBlock_A1_1 { table = "Tourist"; positions[] = {{-0.390137, 4.70947, -4.64234}, {-4.11621, 4.04053, -4.64234}, {-3.38721, 0.971191, -4.64234}, {-4.62207, -3.01416, -4.64234}, {5.12158, -4.90723, -4.67221}};};
		class Land_HouseBlock_A1_2{ table = "CivillianLowerClass"; positions[] = {{3.99902, -6.69434, -7.09903}, {-4.24414, 5.5459, -7.09903} };};
		class Land_HouseBlock_A2 { table = "Tourist"; positions[] = {{-6.49219, -4.68066, -8.52281}, {6.2168, -5.16748, -8.69891}, {-2.26318, 5.41406, -8.6989}};};
		class Land_HouseBlock_A2_1 { table = "CivillianLowerClass"; positions[] = {{-5.08351, -7.86688, -7.4043}, {5.52077, -7.79312, -7.4043}, {3.39156, 4.5332, -7.4043}, {-4.79674, 5.83874, -7.40429}};};
		class Land_HouseBlock_A3{ table = "Tourist"; positions[] = {{0.809082, -3.68262, -5.44064}, {-0.618652, -0.414063, -5.44064}, {0.671875, 3.78223, -5.44064}, {3.85107, 5.48633, -5.44064}, {3.15527, -7.21484, -5.44064} };};
		class Land_HouseBlock_B1 { table = "Shop"; positions[] = {{-4.25439, -5.24951, -7.18279}, {3.29541, -5.1333, -7.18278}, {-4454.41, -7610.79, -10.2712}, {-4454.41, -7610.79, -10.2712}, {-4454.41, -7610.79, -10.2712}};};
		class Land_HouseBlock_B2 { table = "CivillianLowerClass"; positions[] = {{-0.0126953, -5.01758, -7.38576}, {-0.748047, 4.86816, -7.25575}};};
		class Land_HouseBlock_B3{ table = "CivillianUpperClass"; positions[] = {{-3.33594, -4.60938, -7.07993}, {2.20068, 5.25, -6.95102}, {0.970215, 5.30273, -6.95102}, {5.37305, -5.19043, -7.25769} };};
		class Land_HouseBlock_B4 { table = "CivillianUpperClass"; positions[] = {{-0.9886, 4.88012, -7.25513}, {-0.0264502, -4.87847, -7.20835}};};
		class Land_HouseBlock_B5{ table = "Tourist"; positions[] = {{-0.421875, -5.92969, -7.25623}, {-7.21631, 6.28613, -7.58228}, {6.57031, 0.537109, -7.58224} };};
		class Land_HouseBlock_B6 { table = "Shop"; positions[] = {{-4.62109, 4.02637, -7.2203}, {-3.12402, 0.0957031, -7.2203}, {-4.74365, -4.52002, -7.22032}, {3.64648, -4.94873, -7.22029}};};
		class Land_HouseBlock_C1 { table = "Tourist"; positions[] = {{-2.15001, 5.86381, -9.60179}, {-4.09376, 5.51225, -9.60181}, {-3.14066, -8.49837, -9.60179}, {5.53615, -7.87419, -9.60181}};};
		class Land_HouseBlock_C2 { table = "Shop"; positions[] = {{4.92226, -5.60875, -7.52679}, {6.5427, -5.83066, -7.58289}};};
		class Land_HouseBlock_C3 { table = "Medical"; positions[] = {{-3.56867, 5.61774, -8.1968}, {-3.69117, -5.59726, -8.19679}, {7.29475, -6.09984, -8.33061}, {12.3774, 0.717358, -8.82487}};};
		class Land_HouseBlock_C4{ table = "CivillianUpperClass"; positions[] = {{-0.57666, -5.50195, -5.74133}, {-5.29688, 6.99707, -5.74133}, {-1.20654, 5.94141, -5.74136}, {5.94824, 0.318359, -5.74133} };};
		class Land_HouseBlock_C5{ table = "CivillianUpperClass"; positions[] = {{2.15381, -5.38672, -5.55646}, {6.05957, -4.60645, -5.55646}, {1.76904, 5.73242, -5.55646} };};
		class Land_HouseBlock_D2 { table = "CivillianUpperClass"; positions[] = {{-10.564, 6.94889, -9.89979}, {5.81896, 1.86735, -9.8998}};};
		class Land_HouseV_1I1_dam { table = "Shop"; positions[] = {{-0.873368, -2.51065, -2.3993}, {0.563039, -2.57552, -2.39931}};};
		class Land_HouseV_1I1{ table = "Tourist"; positions[] = {{-0.655273, -2.04297, -2.8573}, {0.678223, -2.33496, -2.8573}, {-3.23633, -1.9873, -2.96014}, {3.16016, -2.8252, -2.96014} };};
		class Land_HouseV_1I2 { table = "Tourist"; positions[] = {{-3.20508, 2.44922, -2.23146}, {0.995605, -4.16504, -2.15748}};};
		class Land_HouseV_1I3 { table = "Shop"; positions[] = {{2.07321, -0.993043, -2.29532}, {2.36866, 0.896059, -2.46442}};};
		class Land_HouseV_1I4 { table = "CivillianLowerClass"; positions[] = {{0.222168,3.90839,-2.73031},{-1.82983,-1.81403,-2.76768},{-1.91772,-5.13812,-2.14811},{-4.34497,-1.12036,-1.88536},{-2.12329,-2.59363,-2.05582},{-1.34595,-2.80969,-2.04825}};};
		class Land_HouseV_1L1{ table = "CivillianUpperClass"; positions[] = {{1.78662, 5.38672, -1.09164}, {1.06738, 6.00684, -1.09164}, {-4.12695, 6.06055, -3.02942}, {2.0708, -4.86133, -3.0293}, {-4.69092, -3.02148, -3.02939} };};
		class Land_HouseV_1L2{ table = "CivillianUpperClass"; positions[] = {{0.365723, 4.23145, -3.01556}, {-2.76221, 6.37109, -3.01556}, {-5.08154, 3.35547, -3.01553}, {-0.148438, -5.80957, -1.11783}, {-2.72363, -5.83008, -2.64917}, {2.9751, -6.11914, -3.01556} };};
		class Land_HouseV_1T{ table = "Tourist"; positions[] = {{-4.90088, 6.44824, -3.06537}, {-7.10986, -2.16113, -3.22665}, {3.35791, -1.67578, -3.06537}, {5.86328, -3.11426, -3.22665}, {2.33643, -4.4541, -3.22659} };};
		class Land_HouseV_2I{ table = "CivillianUpperClass"; positions[] = {{-6.64404, -2.11816, -2.95447}, {-2.5498, -9.50684, -2.95447}, {-6.02588, 2.6709, -2.95447} };};
		class Land_HouseV_2L{ table = "CivillianUpperClass"; positions[] = {{-4.02686, -3.71094, -4.05673}, {5.15186, 0.0566406, -4.12302}, {4.1875, 2.3584, -3.99744}, {4.28564, 1.2793, -3.99744} };};
		class Land_houseV_2T1{ table = "CivillianUpperClass"; positions[] = {{5.33057, -3.23438, -3.23032}, {2.38379, -4.52051, -3.23032}, {5.51025, 3.91016, -3.23032}, {-4.69238, 4.96289, -3.23035} };};
		class Land_houseV_2T2{ table = "CivillianLowerClass"; positions[] = {{-3.16699, -4.15137, -4.83649}, {-4.5459, 0.290039, -4.07288}, {-5.67188, 1.90332, -4.55487}, {-3.66406, 1.51367, -4.07288}, {-5.03418, 4.58691, -4.83649}, {6.26221, 5.10742, -4.55609}, {6.99805, -4.06543, -4.83649} };};
		class Land_HouseV_3I1{ table = "CivillianUpperClass"; positions[] = {{5.15625, -1.76563, -2.0498}, {-5.4541, -2.49805, -2.04623}, {7.28613, 4.57813, -2.80362}, {2.41309, -2.70801, -2.80362} };};
		class Land_HouseV_3I2{ table = "Tourist"; positions[] = {{4.17236, 2.44824, -2.18082}, {5.32617, -2.26758, -2.52814}, {2.05859, -6.27344, -2.52817} };};
		class Land_HouseV_3I3{ table = "CivillianUpperClass"; positions[] = {{4.3252, 2.27734, -1.57721}, {1.13721, 2.7627, -1.7789} };};
		class Land_HouseV_3I4 { table = "CivillianLowerClass"; positions[] = {{-4.55662, 4.54701, -2.91238}, {5.84127, -4.82112, -3.3251}, {5.52043, 2.73982, -2.60298}};};
		class Land_HouseV2_01A_dam { table = "Shop"; positions[] = {{-1.29366, -3.46596, -5.61922}, {-2.78929, -4.25762, -5.61922}, {-11.0074, 1.87024, -6.02924}};};
		class Land_HouseV2_01A{ table = "CivillianUpperClass"; positions[] = {{-0.748047, -3.4541, -5.54184}, {-2.87891, -3.57227, -5.62329}, {-6.06592, -4.3125, -6.04913}, {1.10254, -4.05371, -6.04904} };};
		class Land_HouseV2_01B{ table = "CivillianLowerClass"; positions[] = {{-4.23242, -2.51172, -5.18509}, {-2.61475, -3.43652, -5.59604}, {9.77393, 3.54004, -6.10773} };};
		class Land_HouseV2_02_Interier { table = "CivillianLowerClass"; positions[] = {{6.97412,1.26904,-5.53068},{4.21631,6.56396,-5.53068},{-5.94922,-1.28955,-5.53068},{-3.31494,6.44287,-5.53068},{.44629,1.7251,-4.61068},{6.63672,1.2583,-4.61068},{8.7749,-2.23779,-4.74068},{2.81006,6.30908,-5.57068},{-4.97754,-2.1543,-5.57068},{-2.42676,5.58887,-5.57068}};};
		class Land_HouseV2_02_Interier_dam { table = "CivillianLowerClass"; positions[] = {{0.894912, 0.476319, -5.79559}, {7.18267, 4.31674, -5.79559}, {0.0249482, -1.68883, -5.78085}, {0.0449496, 4.25118, -5.78085}, {-8.57893, 0.145316, -5.78085}, {-8.65209, 5.44489, -5.78085}, {-7.17521, 6.68027, -5.78084}, {8.58333, 0.0198757, -5.78085}, {8.6377, 2.88673, -5.78085}, {6.51287, 1.58301, -4.84303}, {8.81781, -2.03694, -4.95557}, {2.24047, 1.86114, -5.79559}, {-3.36929, 5.8395, -5.79559}, {-7.02038, 2.24184, -5.79559}, {-3.05202, 1.05157, -5.79559}};};
		class Land_HouseV2_03{ table = "CivillianUpperClass"; positions[] = {{10.0479, -9.18652, -5.47189}, {1.37012, -8.71289, -5.55469}, {-4.20752, -7.13379, -6.01495}, {-14.0234, -8.64844, -5.55469}, {-17.9146, -0.0605469, -5.87161}, {-18.4155, 2.30566, -5.92566}, {0.705566, 8.17285, -5.88635}, {9.83545, 11.8145, -6.01498}, {18.1553, 1.03516, -5.46368} };};
		class Land_HouseV2_03B_dam { table = "Shop"; positions[] = {{-8.05184, 3.13314, -5.55825}, {0.0109744, -8.96144, -5.48253}, {8.00774, 1.21473, -5.47432}};};
		class Land_HouseV2_03B{ table = "CivillianUpperClass"; positions[] = {{-0.399902, -9.05762, -5.50803}, {0.639648, -9.91797, -5.93018}, {8.80371, -9.97266, -6.05109}, {7.93066, 1.10547, -5.49982}, {-0.438477, 12.0127, -6.05106}, {-8.04541, 3.70898, -5.50803}, {-8.52002, 1.8418, -5.67029}, {-8.0293, -0.566406, -4.46933}, {-8.0293, -4.59473, -4.53424}, {-4.69189, -8.94238, -4.6618}, {4.2832, -8.97363, -4.59927}, {7.86572, 7.08496, -4.54236} };};
		class Land_HouseV2_04 { table = "CivillianLowerClass"; positions[] = {{5.18816, -2.85054, -5.74256}, {6.46626, -4.69134, -5.74815}, {-7.57329, -6.07281, -5.88795}};};
		class Land_HouseV2_04_interier{ table = "CivillianUpperClass"; positions[] = {{-7.60498, -6.9248, -5.63416}, {6.87354, -6.31445, -5.75}, {5.09082, -4.60547, -5.74374}, {7.31348, -1.46191, -5.7421}, {7.74219, 2.3252, -5.73605}, {4.79541, 2.56055, -5.0791}, {0.338867, 1.23828, -2.94873}, {7.48193, 6.65332, -5.72784}, {5.17773, 5.97266, -5.72495}, {2.36084, 2.75391, -5.05716}, {0.307129, 6.92969, -5.28723}, {0.767578, 2.70508, -5.28723}, {3.28467, 6.71582, -5.72021}, {-4.00146, 3.27344, -5.19485}, {-5.58691, 2.44531, -4.91205}, {-5.71777, 2.66992, -4.91205}, {-4.03662, 7.12891, -4.99554}, {-3.34717, 6.73633, -4.99554}, {-2.8125, 6.77539, -5.28723}, {-5.17822, 6.7666, -5.70496}, {-1.54395, 5.83301, -5.71313}, {-1.30811, 3.04004, -5.71857}, {7.31689, 8.4209, -6.17114} };};
		class Land_HouseV2_05 { table = "Tourist"; positions[] = {{-4.04748, 0.0616128, -2.70089}, {-4.81546, -0.383778, -2.95149}};};
		class Land_Hruzdum { table = "CivillianLowerClass"; positions[] = {{0.480957, -1.47852, -4.87341}, {1.57861, 3.16211, -4.76}, {-2.31836, 3.42969, -1.18909}, {2.10498, 3.42969, -1.16488}, {2.46582, -1.21533, -1.00601}, {0.166016, 3.93896, 4.67393}, {0.0429688, -1.19287, 4.713}, {1.03125, -1.12793, 4.61074}, {-2.04297, 3.05566, -4.87341}, {-0.374512, 1.40283, -1.16408}, {-1.95898, -1.30078, -1.16408}, {-2.12256, -1.41016, 1.62671}, {1.99658, 3.02246, 1.62671}, {-2.76465, 3.05664, 1.62671}, {-0.183594, 1.04785, 1.62671}};};
		class Land_Hut_old02 { table = "Industrial"; positions[] = {{-5.46436, 0.186035, -2.06117}, {-6.96338, -7.99658, -3.03452}, {-5.61719, -1.90674, -3.03452}, {-8.32568, 0.972168, -3.03452}, {-5.396, 3.49658, -3.03452}, {-7.49365, 8.12256, -3.03452}, {-3.8833, 8.75586, -3.03452}, {1.83447, 8.42285, -3.03452}, {1.87793, 4.25098, -3.03454}, {-3.96826, 2.91699, -3.03452}, {-2.5249, 0.866211, -3.03452}, {-3.7168, -2.05225, -3.03452}, {-3.80664, -4.56592, -3.03452}, {1.87305, -8.45654, -3.03452}, {1.81396, -1.64941, -3.03452}, {4.64063, -7.3623, -3.03452}, {6.25879, -3.15332, -3.03452}, {4.08203, 4.06299, -3.03452}, {4.27637, 8.68652, -3.03452}, {-3.56494, -0.382813, -2.06117}};};
		class Land_Hut01 { table = "Military"; positions[] = {{1.26221, 2.54785, -0.453082}, {-0.604004, 1.229, -0.453081}, {0.569336, -1.44971, -0.453081}, {3.21094, 2.86572, -0.453082}, {3.28662, -2.32568, -0.453082}, {-0.050293, -2.79248, -0.453081}};};
		class land_hut02 { table = "CivillianLowerClass"; positions[] = {{-0.498901,2.974,-0.445764},{-1.07245,-0.756958,-0.445764}};}; 
		class Land_Hut03 { table = "Shop"; positions[] = {{0.0078125, 0.0356445, -1.35843}};};
		class Land_Hut04 { table = "Shop"; positions[] = {{-0.800781, 2.23096, -0.438963}, {0.916016, 0.979492, -0.438963}, {-0.689941, -1.47021, -0.438963}, {3.35986, 2.05469, -1.32596}, {2.13477, -1.28711, -1.32602}, {-1.47021, -3.40137, -1.32597}, {-3.96045, 1.59766, -1.32594}};};
		class Land_hut06 { table = "CivillianLowerClass"; positions[] = {{0.328125,2.26953,-1.57786},{-0.552368,-0.0620117,-1.53837}};};
		class Land_i_Addon_02_V1_F { table = "Tourist"; positions[] = {{1.38033, 2.51111, 0.064476}, {2.69806, 1.71677, 0.0858231}, {-1.3393, 3.51032, 0.0858231}, {-1.32208, 0.150503, 0.0858231}};};
		class Land_i_Addon_03_V1_F { table = "Shop"; positions[] = {{2.08596, 1.04534, -0.0515366}, {3.48598, 3.04153, -0.0515366}, {3.16287, -0.638664, -0.0515366}, {-2.17424, 3.09361, -0.0515366}, {-2.68977, -0.0725484, -0.0515366}};};
		class Land_i_Addon_03mid_V1_F { table = "Shop"; positions[] = {{-3.74102, -0.281351, -0.0338287}, {0.340816, 0.13214, -0.0338287}, {3.87883, 0.769559, -0.0338364}};};
		class Land_i_Addon_04_V1_F { table = "Shop"; positions[] = {{-3.8291, -0.469727, 0.0782499}, {3.08545, 2.59131, 0.0782499}, {0.563477, -0.104492, 0.0782499}, {-0.309082, 2.92871, 0.0782499}};};
		class Land_i_Barracks_V1_dam_F { table = "Military"; positions[] = {{-7.29101, -2.0812, -1.92426}, {-9.52151, 0.997551, -1.92427}, {-2.10667, 4.6239, -1.92426}, {13.5154, 4.55142, 1.40872}, {1.81842, 4.37919, 1.40871}, {-6.50213, 3.14091, -1.92426}, {-7.80954, 5.22904, -1.92426}, {0.861619, 4.68997, -1.92426}, {4.44421, 4.69297, -1.92426}, {11.2453, 4.65058, -1.92427}, {0.393582, -2.46181, -1.92426}, {4.12124, -2.51235, -1.92427}, {10.875, -2.50365, -1.92427}, {7.8494, -2.54729, -1.92426}, {-1.65452, -0.864799, -0.39888}, {-14.0408, -2.46885, -1.92427}, {-11.0771, -2.43337, -1.92427}, {9.56174, 0.977367, 1.40871}, {-7.54655, -0.093995, 1.40871}, {-14.1484, 4.69464, 1.40871}, {-11.1489, 4.63206, 1.40871}, {-2.10667, 4.62377, 1.40872}, {-7.20979, 2.90189, 1.40871}, {4.44421, 4.69298, 1.40871}, {10.6602, 4.68075, 1.40873}, {0.393581, -2.46179, 1.40871}, {4.12124, -2.51236, 1.40871}, {10.8763, -2.5029, 1.40871}, {7.84945, -2.5473, 1.40871}, {-14.0407, -2.46886, 1.40871}, {-11.0771, -2.43337, 1.40871}, {-5.02882, -4.4656, 1.40871}, {-7.83063, -4.41654, 1.40872}, {-14.9239, 6.72804, 1.40871}, {-0.827371, 6.91237, 1.40871}, {10.6576, 6.62955, 1.40871}, {6.25058, 6.7111, 1.40871}, {-10.4025, -1.90175, 5.31585}, {-10.2948, 5.39113, 5.12896}, {-13.2944, 5.32507, 5.13605}, {-13.366, -1.78245, 5.33144}, {-5.86588, -1.96177, 5.30801}, {-2.11354, 4.00392, 5.27793}, {3.34367, -2.05047, 5.29642}, {4.1676, 4.08186, 5.26955}, {10.8268, -2.30996, 5.26249}, {10.6391, 4.31628, 5.24439}, {-11.9084, 4.36556, -1.92426}, {-14.1485, 4.69462, -1.92426}};};
		class Land_i_Barracks_V1_F { table = "Military"; positions[] = {{-0.464844, 3.49219, 0.605521}, {-0.476563, 3.95703, 3.9395}, {-10.4844, -3.32422, 3.9395}, {-11.1055, -2.92188, 0.605521}, {-12.3066, 0.222656, 0.605521}, {-2.29688, -4.23828, 0.605283}, {-3.89648, -4.80078, 3.93923}, {-8.66992, 3.86328, 0.605521}, {-9.03516, 3.31055, 3.9395}, {10.3301, 2.77734, 0.605521}, {10.4023, 3.18945, 3.9395}, {13.0352, -3.23438, 3.9395}, {13.1738, -3.31055, 0.605521}, {3.57227, -3.49414, 0.605522}, {3.61133, -2.98047, 3.9395}, {6.38281, 3.41992, 0.60552}, {6.4082, 2.87695, 3.9395}}; }; 
		class Land_i_Barracks_V2_F { table = "Military"; positions[] = {{-0.505859, 3.2168, 0.605521}, {-0.601563, 3.07617, 3.9395}, {-11.0234, -2.65625, 0.60552}, {-11.1328, -3.58398, 3.9395}, {-12.377, 0.271484, 3.9395}, {-2.39453, -3.92773, 0.605342}, {-5.09766, -4.89844, 3.93943}, {-8.69922, 3.24414, 3.9395}, {-9.12695, 3.73047, 0.60552}, {10.3711, 3.51367, 0.605521}, {10.6484, 2.85156, 3.9395}, {13.0684, -3.30469, 0.605521}, {13.1934, -3.42383, 3.9395}, {3.28711, -3.98633, 0.605521}, {3.4707, -3.55469, 3.9395}, {6.22852, 3.50391, 3.9395}, {6.39258, 3.05664, 0.605521}}; }; 
		class Land_i_Garage_V1_dam_F { table = "VehicleService"; positions[] = {{3.20083, -2.09053, -0.159973}, {0.462611, 0.255438, -0.159973}, {-3.26612, 1.03951, -0.159973}};};
		class Land_i_Garage_V1_F { table = "VehicleService"; positions[] = {{4.02295, -1.91064, -0.12392}, {-3.79492, -0.89209, -0.123919}, {0.452637, 1.01416, -0.123921}, {-3.25293, 1.3999, -0.118921}, {4.05127, 1.97998, -0.118921}, {-0.646973, -2.03125, -0.118921}};};
		class Land_i_Garage_V2_F { table = "VehicleService"; positions[] = {{-3.08691, 1.43701, -0.118921}, {-0.0571289, -1.36328, -0.118921}, {4.02295, -1.91064, -0.123922}, {-3.79492, -0.89209, -0.123921}, {0.452637, 1.01416, -0.123921}, {3.38672, 1.71631, -0.118921}};};
		class Land_i_House_Big_01_V1_F { table = "CivillianUpperClass"; positions[] = {{0.716309, 5.84082, -2.59137}, {1.36865, -4.26807, 0.828626}, {-0.744629, -0.455078, -2.59138}, {0.371094, 2.06592, 0.803882}, {3.58789, 6.04492, 0.828627}, {-2.70459, 0.70459, 0.828626}, {-3.6084, 5.51416, 0.828625}, {0.152344, -6.00439, 0.828626}, {-3.42627, -3.48828, 0.828626}, {-3.50977, -0.73584, -2.76147}, {-3.33154, -4.49854, -2.76147}, {3.78711, -5.50293, -2.76147}, {-0.897949, -4.5083, -2.76147}, {0.40625, 0.0405273, 0.815695}, {3.27783, -1.92578, 0.815695}, {3.2417, -6.08252, 0.815695}, {-3.44434, -6.18262, 0.815695}, {1.4917, 4.00684, 0.815695}, {-0.661133, 6.64453, 0.815695}};};
		class Land_i_House_Big_01_V2_dam_F { table = "CivillianUpperClass"; positions[] = {{7.08089, 7.52096, -3.11697}, {7.3688, 5.89256, -3.11797}, {-3.1096, 0.341503, -2.7553}, {-2.1627, -2.56118, -2.7553}, {3.79278, -2.01992, -2.7553}, {1.54406, 6.68898, -2.58521}, {2.19668, -3.41981, 0.834793}, {0.083182, 0.393065, -2.58521}, {1.19648, 2.91558, 0.810188}, {4.41585, 6.89325, 0.834793}, {-1.87692, 1.55304, 0.834793}, {-2.78054, 6.36258, 0.834793}, {0.980181, -5.15594, 0.834793}, {-2.59846, -2.63999, 0.834793}, {2.45114, 1.09204, -2.7553}, {2.2776, -5.35445, -2.7553}, {-2.29968, 3.01857, -2.7553}, {-2.47403, 4.80471, -2.7553}, {-1.56662, 7.44157, -2.7553}, {4.24351, 4.83352, -2.7553}, {4.87771, 2.51362, -0.98217}, {2.03444, 1.07753, 0.821861}, {4.53279, -1.17308, 0.821861}, {1.54921, -1.01904, 0.821861}, {4.33509, -5.54479, 0.821861}, {-0.236615, 7.39802, 0.821861}, {1.68452, 5.09654, 0.821861}, {4.26944, 5.17967, 0.821861}, {2.09793, 7.4914, 0.821861}};};
		class Land_i_House_Big_01_V2_F { table = "CivillianUpperClass"; positions[] = {{-0.203613, -5.54639, -2.76147}, {3.31543, -5.92285, -2.76147}, {0.716309, 5.84082, -2.59137}, {1.36865, -4.26807, 0.828626}, {-0.744629, -0.455078, -2.59137}, {0.371094, 2.06592, 0.803771}, {3.58789, 6.04492, 0.828624}, {-2.70459, 0.70459, 0.828626}, {-3.6084, 5.51416, 0.828626}, {0.152344, -6.00439, 0.828626}, {-3.42627, -3.48828, 0.828626}, {2.22119, -0.00830078, -2.76147}, {-3.32666, 2.06006, -2.76147}, {-3.37549, 6.40625, -2.76147}, {-0.467773, 3.76709, -2.76147}, {2.98828, 4.16699, -2.76147}, {1.69873, 0.286621, 0.815696}, {0.301758, -2.08203, 0.815695}, {3.11816, -1.91016, 0.815695}, {3.11523, -6.2124, 0.815695}, {-2.34131, 3.76416, 0.815695}, {0.829102, 3.68848, 0.815695}, {-1.15381, 6.72314, 0.815695}, {3.26514, 3.93701, 0.815695}, {1.16309, 6.26025, 0.815695}};};
		class Land_i_House_Big_01_V3_dam_F { table = "Tourist"; positions[] = {{-3.01646, 0.468573, -2.7553}, {-2.04764, -2.52949, -2.7553}, {2.75658, -2.1669, -2.7553}, {1.54406, 6.68898, -2.58521}, {2.19668, -3.41981, 0.834793}, {0.0831774, 0.393063, -2.58521}, {1.19719, 2.91427, 0.810043}, {4.41585, 6.89325, 0.834793}, {-1.87692, 1.55304, 0.834793}, {-2.78054, 6.36258, 0.834793}, {0.980181, -5.15594, 0.834793}, {-2.59846, -2.63999, 0.834793}, {4.46599, -5.14217, -2.7553}, {1.23042, -5.64213, -2.7553}, {-2.45386, 2.96178, -2.7553}, {4.4724, 4.88332, -2.7553}, {-2.39757, 7.1797, -2.7553}, {-2.67097, 4.73717, -2.7553}, {4.58716, 2.98106, -0.98217}, {1.99578, 0.7973, 0.821861}, {3.73955, -1.07862, 0.821861}, {3.77336, -5.38347, 0.821861}, {0.321021, 7.43666, 0.821861}, {1.74545, 6.09767, 0.821861}, {4.90288, 4.61591, 0.821861}, {0.563729, -1.23414, 0.821861}, {-2.91843, -5.22972, -2.7553}};};
		class Land_i_House_Big_01_V3_F { table = "CivillianUpperClass"; positions[] = {{0.716207, 5.84075, -2.59138}, {1.36882, -4.26805, 0.828629}, {-0.744674, -0.455174, -2.59137}, {0.370012, 2.06591, 0.804054}, {3.58799, 6.04501, 0.828629}, {-2.70478, 0.704808, 0.828629}, {-3.60839, 5.51434, 0.828629}, {0.152321, -6.00419, 0.828629}, {-3.42631, -3.48823, 0.828629}, {-3.66159, -3.6214, -2.76147}, {-2.99964, -0.632936, -2.76147}, {3.70476, -6.03308, -2.76147}, {1.68115, -2.71786, -2.76147}, {1.92322, 0.787368, -2.76147}, {-3.16887, 1.93148, -2.76147}, {3.05953, 4.49525, -2.76147}, {-2.89841, 4.14867, -2.76147}, {1.54111, -0.0315699, 0.815697}, {2.83959, -1.88957, 0.815697}, {-0.0266155, -2.02011, 0.815697}, {3.48621, -6.40858, 0.815697}, {-1.73772, 6.25407, 0.815697}, {1.40135, 4.24631, 0.815697}};};
		class Land_i_House_Big_02_V1_dam_F { table = "CivillianUpperClass"; positions[] = {{4.78349, -5.02168, -2.29835}, {-3.03542, -5.80557, -2.67835}, {3.2029, -6.27268, -2.29835}, {2.46044, -1.5018, -2.65835}, {-2.8481, -1.29711, -2.65835}, {0.512938, -3.45969, -2.65835}, {0.709769, -3.48523, 0.757751}, {-2.87444, -1.29404, 0.757751}, {-2.9437, 3.95963, 0.757751}, {0.953215, 4.02995, 0.757751}, {3.19843, 0.710615, 0.757751}, {3.86023, 3.93857, 0.757751}, {-2.687, 0.792904, 0.757751}, {1.68035, -5.3772, 0.731651}, {-0.197021, -4.9694, 0.731651}};};
		class Land_i_House_Big_02_V2_dam_F { table = "CivillianUpperClass"; positions[] = {{-0.733071, -5.049, -2.67835}, {4.30419, -5.69842, -2.28676}, {0.746185, -3.34324, -2.49929}, {0.196476, -5.25939, 0.783241}, {4.04703, 6.30076, 0.723244}, {4.03836, 4.44735, -2.62409}, {4.82345, 2.87649, 0.783241}, {0.960809, 4.52837, 0.783241}, {0.0933454, 2.14833, 0.783241}, {1.83997, 1.51866, -2.62409}, {-2.85213, -1.58974, -2.65835}, {1.82061, -1.67873, -2.65835}, {-2.55662, 4.29693, -2.65835}, {-2.49835, 0.771697, -2.65835}, {4.7152, -1.49305, -0.908348}, {0.980022, -3.26681, 0.757751}, {-1.88914, -1.27124, 0.757751}, {-3.11985, -3.57531, 0.757751}, {-3.12983, 4.21229, 0.757751}, {-2.88549, 0.509873, 0.757751}, {3.06485, 0.501866, 0.757751}, {-0.296623, 6.20309, 0.731651}};};
		class Land_i_House_Big_02_V2_F { table = "CivillianUpperClass"; positions[] = {{-2.08789, -2.46484, 0.784063}, {-2.54688, 2.53906, -2.62327}, {-3.01758, 3.12109, 0.784063}, {1.11328, -1.46289, -2.62327}, {2.68945, 2.03711, 0.784063}, {3.02734, 2.27344, -2.62327}, {3.26367, -5.55273, -2.28594}}; }; 
		class Land_i_House_Big_02_V3_dam_F { table = "CivillianUpperClass"; positions[] = {{0.131096, 5.94733, -2.67401}, {-2.2428, 0.563216, -2.65835}, {-1.3142, 3.51461, -2.65835}, {4.30419, -5.69842, -2.28676}, {0.746185, -3.34324, -2.49929}, {0.196479, -5.2594, 0.783241}, {4.04703, 6.30076, 0.723244}, {4.03836, 4.44735, -2.62409}, {4.82345, 2.87649, 0.783241}, {0.960809, 4.52837, 0.783241}, {0.0933454, 2.14833, 0.783241}, {1.83997, 1.51866, -2.62409}, {4.50148, 1.41633, -2.65835}, {-3.05371, -3.17846, -2.65835}, {1.59334, -1.11554, -2.65835}, {4.06845, -1.54818, -0.908348}, {0.895699, -3.22076, 0.757751}, {-2.70109, -1.35778, 0.757751}, {3.80559, 0.818519, 0.757751}, {-2.89876, 0.646223, 0.757751}, {-2.43572, 4.07668, 0.757751}, {0.465933, 6.32632, 0.731651}};};
		class Land_i_House_Big_02_V3_F { table = "CivillianUpperClass"; positions[] = {{-2.50391, -2.10742, -2.62327}, {-3.00781, 3.68164, 0.784063}, {-3.0957, 2.57227, -2.62327}, {-3.31055, -2.88867, 0.784063}, {1.26953, -1.73438, -2.62327}, {2.40234, 2.26953, -2.62327}, {2.89844, 2.11719, 0.784064}, {3.26758, -5.52734, -2.28594}}; }; 
		class Land_i_House_Small_01_V1_dam_F { table = "CivillianLowerClass"; positions[] = {{4.16976, 3.36652, 0.136093}, {-2.37942, -3.51442, 0.101631}, {0.817163, -3.39428, 0.102943}, {-2.75769, -0.873827, 0.101265}, {-0.285944, 0.369343, 0.108398}, {4.5724, -3.1125, 0.108398}, {-2.67946, 2.32452, 0.108398}, {0.275469, 3.8048, 0.108398}, {-3.00983, 5.38247, 0.113426}};};
		class Land_i_House_Small_01_V1_F { table = "CivillianUpperClass"; positions[] = {{-1.2207, 3.05078, -1.0419}, {-2.74414, -0.560547, -1.04199}, {3.06641, -1.90234, -1.0404}, {3.35547, 2.94336, -1.04187}}; }; 
		class Land_i_House_Small_01_V2_dam_F { table = "CivillianLowerClass"; positions[] = {{-0.00932622, 3.33358, 0.108398}, {4.17773, 3.36617, 0.127823}, {-2.37942, -3.51442, 0.101631}, {0.817163, -3.39428, 0.102943}, {-2.75769, -0.873827, 0.101265}, {-3.0609, 2.21648, 0.108398}, {4.64521, -2.71889, 0.108398}, {2.88767, -1.39693, 0.108398}, {0.485473, -0.0212538, 0.108398}};};
		class Land_i_House_Small_01_V2_F { table = "CivillianLowerClass"; positions[] = {{3.59326, 3.58447, -1.0685}, {-2.98047, -3.27881, -1.0683}, {0.21582, -3.15869, -1.067}, {-3.35889, -0.638184, -1.06868}, {3.28418, -2.36182, -1.06154}, {-0.354004, -0.407227, -1.06154}, {-3.59131, 2.34814, -1.06154}, {-0.456055, 3.95361, -1.06154}};};
		class Land_i_House_Small_01_V3_dam_F { table = "Tourist"; positions[] = {{1.17429, 3.91001, 0.108398}, {-2.3649, 2.17727, 0.108398}, {4.20229, 3.3805, 0.101517}, {-2.37942, -3.51442, 0.101631}, {0.817163, -3.39428, 0.102943}, {-2.75769, -0.873827, 0.101265}, {4.33644, -2.38423, 0.108398}, {0.0890576, -1.01196, 0.108398}};};
		class Land_i_House_Small_01_V3_F { table = "CivillianUpperClass"; positions[] = {{-0.738281, 3.17578, -1.04194}, {-2.46094, -2.16992, -1.04174}, {-2.68359, -1.76563, -1.04187}, {-2.76563, 3.31641, -1.04232}, {3.07422, -1.27539, -1.04059}, {3.08398, 3.04883, -1.0419}, {3.41406, 3.10547, -1.04192}, {3.61719, -0.394531, -1.04086}}; }; 
		class Land_i_House_Small_02_V1_F { table = "CivillianUpperClass"; positions[] = {{-1.08008, -2.11133, -0.709651}, {-1.18945, 0.785156, -0.705689}, {2.64258, -2.09766, -0.704848}, {5.95313, 0.556641, -0.700583}}; }; 
		class Land_i_House_Small_02_V2_F { table = "CivillianUpperClass"; positions[] = {{-1.29688, 1.06641, -0.704727}, {-1.56836, -1.83789, -0.710279}, {2.85352, -1.52148, -0.704572}, {2.88086, 1.76367, -0.702332}, {5.21289, 0.935547, -0.701534}}; }; 
		class Land_i_House_Small_02_V3_F { table = "CivillianUpperClass"; positions[] = {{-2.84373, 1.14473, -0.730888}, {-1.33867, 2.34965, -0.726776}, {4.57997, 1.97851, -0.728027}, {4.62023, -2.3846, -0.728737}, {1.89111, -2.45479, -0.732254}, {-0.49205, -1.88371, -0.735191}, {-2.38693, -1.06029, -0.735191}, {6.41769, -0.811283, -0.735191}};};
		class Land_i_House_Small_03_V1_dam_F { table = "Military"; positions[] = {{-3.7118, -0.640886, -0.403534}, {-2.47339, 4.50613, -0.403534}, {0.832777, 4.55844, -0.403534}, {4.92828, 0.305237, -0.403534}, {3.13309, -2.24916, -0.418541}, {-3.7118, -0.640886, -0.403534}, {-2.47339, 4.50613, -0.403534}, {0.832777, 4.55844, -0.403534}, {4.92828, 0.305237, -0.403534}, {3.8982, -4.94538, -0.403534}, {2.93418, 3.46162, -0.418541}, {-1.76763, 1.51256, -0.418541}, {1.24272, 2.26641, -0.418541}};};
		class Land_i_House_Small_03_V1_F { table = "CivillianLowerClass"; positions[] = {{-3.88379, -1.27979, -0.39807}, {-2.64551, 3.86719, -0.39807}, {0.660645, 3.91943, -0.39807}, {4.75635, -0.333496, -0.39807}, {3.72607, -5.58447, -0.39807}, {0.31543, -0.160645, -0.41307}, {-4.73633, 1.34229, -0.41307}, {0.578613, 1.55078, -0.41307}, {2.4541, 3.49902, -0.41307}, {2.73486, -2.38867, -0.41307}};};
		class Land_i_Shed_Ind_F { table = "Industrial"; positions[] = {{-7.70996, 0.23877, -1.43621}, {-7.8125, 4.19043, -1.43621}, {1.01465, 2.73975, -1.43621}, {-3.50879, -0.181152, -1.43621}, {-6.17773, 6.41553, -1.43621}, {5.35254, 4.77344, -1.43621}, {4.82227, -0.0332031, -1.43621}, {10.4585, 1.28809, -1.43621}, {14.2334, 2.59521, -1.43621}, {14.5913, -0.998047, -1.43621}, {12.4414, 7.67725, -1.44212}, {0.0625, 6.4043, -1.44212}};};
		class Land_i_Shop_01_V1_F { table = "Shop"; positions[] = {{-0.863281, 6.10938, -2.76158}, {-1.2168, 0.232422, -2.76158}, {-1.2832, -0.884766, 1.10984}, {-2.28516, 6.1875, 1.10975}}; }; 
		class Land_i_Shop_01_V2_dam_F { table = "CivillianUpperClass"; positions[] = {{2.6583, 3.44449, -2.45648}, {-3.08071, 3.73926, -2.78802}, {-1.83109, 5.00247, -2.78802}, {-1.56921, -1.53442, -2.78802}, {0.425948, 3.16215, -2.78802}, {2.4989, 0.176996, -1.58112}, {0.796768, 0.977108, 1.08291}, {-1.71131, -4.54672, 1.05386}, {-3.07994, -3.09692, 1.08384}, {1.85235, -4.41601, 1.05386}, {2.3255, 4.4962, 1.089}, {-2.74791, 4.95156, 1.08707}, {-2.8807, 0.356834, 1.08825}, {-3.22047, 2.81245, 1.08825}, {-0.665371, 2.12231, 1.08824}, {0.292311, -2.40128, 1.08825}};};
		class Land_i_Shop_01_V2_F { table = "CivillianLowerClass"; positions[] = {{2.95752, 4.24512, -2.38234}, {-1.72363, 6.15381, -2.78802}, {-2.70166, 4.07471, -2.78802}, {0.172852, 0.390137, -2.78802}, {0.922852, 3.854, -2.78802}, {3.07764, -1.04541, -2.77786}, {-0.366211, 5.21094, 1.08287}, {-1.05225, 1.22461, 1.08287}, {-3.28369, -3.66602, 1.05386}, {0.623535, -3.71338, 1.05386}, {-2.69092, -1.3584, -2.78362}, {2.68457, 5.82959, 1.089}, {-2.72852, 5.66016, 1.08825}, {-2.6958, 3.7417, 1.08825}, {-2.9707, -1.18701, 1.08826}, {1.11279, -1.34131, 1.08826}, {0.782715, 2.91602, 1.08825}};};
		class Land_i_Shop_01_V3_dam_F { table = "CivillianLowerClass"; positions[] = {{2.6583, 3.44449, -2.45648}, {-3.08071, 3.73926, -2.78802}, {-1.83109, 5.00247, -2.78802}, {-1.56921, -1.53442, -2.78802}, {0.425948, 3.16215, -2.78802}, {2.50508, 0.187989, -1.58096}, {0.796775, 0.97724, 1.08291}, {-1.7113, -4.54672, 1.05386}, {-3.07994, -3.09692, 1.08384}, {1.85235, -4.41601, 1.05386}, {1.18981, 5.01251, 1.08823}, {-1.74424, 0.14312, 1.08825}, {-3.27933, 3.08372, 1.08805}, {0.214425, -1.92831, 1.08825}};};
		class Land_i_Shop_01_V3_F { table = "CivillianLowerClass"; positions[] = {{3.146, 4.45459, -2.4893}, {-2.58398, 4.77344, -2.78802}, {-1.33447, 6.03662, -2.78802}, {-1.07227, -0.5, -2.78802}, {0.922852, 4.19629, -2.78802}, {3.01611, -0.205078, -2.55667}, {1.27686, 1.99805, 1.08247}, {-1.21436, -3.51025, 1.05386}, {-2.58301, -2.0625, 1.08379}, {2.34131, -3.38574, 1.05386}, {2.85303, 5.71631, 1.089}, {-2.34473, 6.07129, 1.08825}, {0.208984, -0.89209, 1.08826}, {-1.43457, 1.27783, 1.08826}, {-2.7583, 3.84033, 1.08825}};};
		class Land_i_Shop_02_V1_dam_F { table = "CivillianLowerClass"; positions[] = {{-1.01246, -0.430138, -2.60522}, {-0.466212, -3.52947, 1.28846}, {4.88289, -3.43636, 1.58559}, {-1.88453, 4.09533, -2.60522}, {-0.820407, 2.18426, 1.28278}, {-4.39689, -2.71323, 1.28846}, {4.90514, 3.94994, 1.60642}, {2.88227, -2.58817, 1.28725}, {3.17489, 2.93843, 1.28593}, {-6.61108, 1.64112, 1.96509}};};
		class Land_i_Shop_02_V1_F { table = "CivillianUpperClass"; positions[] = {{-1.38719, -0.655664, -2.69499}, {-0.840944, -3.755, 1.21215}, {4.50815, -3.66188, 1.50913}, {-2.25895, 3.86901, -2.69499}, {-1.19513, 1.95749, 1.21215}, {-4.77162, -2.93877, 1.21215}, {4.5304, 3.7244, 1.52996}, {2.50718, -2.81453, 1.21215}, {2.79797, 2.71569, 1.21215}, {-6.30555, 0.996946, 1.75879}, {-2.68335, -2.58334, -2.66904}, {-4.79319, 0.73711, -2.66904}, {-3.61221, 3.19957, -2.66904}, {1.64607, 0.0173063, -2.66904}, {1.57904, -3.03088, -2.66904}, {-3.37465, 0.793531, 1.18055}, {-0.306497, -0.713549, 1.18055}, {-4.45582, 3.19623, 1.18055}};};
		class Land_i_Shop_02_V2_dam_F { table = "Shop"; positions[] = {{-1.01246, -0.430138, -2.60522}, {-0.466212, -3.52947, 1.28846}, {4.88289, -3.43636, 1.58559}, {-1.88453, 4.09535, -2.60522}, {-0.820407, 2.18426, 1.28278}, {-4.39689, -2.71323, 1.28846}, {4.90514, 3.94994, 1.60642}, {2.88224, -2.58821, 1.28728}, {3.17509, 2.93919, 1.28619}, {-5.87787, 1.17456, 1.74207}};};
		class Land_i_Shop_02_V2_F { table = "Shop"; positions[] = {{-0.171875, -1.43359, -2.66855}, {-2.57422, -4.19336, 1.23859}, {-4.51758, 2.74023, -2.66855}, {1.61523, 0.28125, 1.23859}}; }; 
		class Land_i_Shop_02_V3_dam_F { table = "CivillianUpperClass"; positions[] = {{-1.01246, -0.430138, -2.60522}, {-0.466212, -3.52947, 1.28846}, {4.94158, -3.45971, 1.56771}, {-1.88418, 4.0948, -2.60522}, {-0.820407, 2.18426, 1.28278}, {-4.39689, -2.71323, 1.28846}, {4.90514, 3.94994, 1.60642}, {2.88224, -2.58821, 1.28728}, {3.17489, 2.93843, 1.28593}, {-6.61108, 1.64112, 1.96509}};};
		class Land_i_Shop_02_V3_F { table = "Shop"; positions[] = {{-1.01953, 0.71875, -2.66924}, {-2.86719, -3.83594, 1.23859}, {-4.25195, 3.58789, -2.66855}, {1.56641, 0.509766, 1.23859}}; }; 
		class Land_i_Stone_HouseBig_V1_dam_F { table = "CivillianUpperClass"; positions[] = {{-0.663594, 1.00102, -0.604515}, {-1.91401, 0.235362, -1.68246}, {-2.17034, 2.95882, -1.56044}, {2.59688, 2.70159, 1.19249}, {0.786265, -2.84008, 1.19249}, {-2.37203, 1.10138, 1.19249}, {2.32693, -0.392636, -1.67138}, {-0.116415, -3.03962, -1.77251}, {-1.81959, -1.52826, 1.15249}, {4.60191, 1.24936, 1.14748}};};
		class Land_i_Stone_HouseBig_V1_F { table = "CivillianLowerClass"; positions[] = {{-0.777344, 2.19922, 1.21893}, {-1.33789, 0.355469, -1.65434}, {1.58594, -0.576172, 1.21893}, {3.7793, 1.48828, -1.64097}}; }; 
		class Land_i_Stone_HouseBig_V2_dam_F { table = "CivillianLowerClass"; positions[] = {{-1.91357, 0.235352, -1.68245}, {-2.17041, 2.95752, -1.56067}, {2.59668, 2.70166, 1.19249}, {0.786133, -2.83984, 1.19249}, {-2.37207, 1.10156, 1.19249}, {2.32764, -0.392578, -1.67138}, {-0.868164, 1.11084, -0.604514}, {-0.414063, -2.74561, -1.77251}, {-2.21875, -2.09424, 1.12749}, {1.42236, 0.00585938, 1.15249}, {4.66406, 1.20654, 1.14749}, {4.51074, -0.919434, 1.14749}};};
		class Land_i_Stone_HouseBig_V2_F { table = "CivillianLowerClass"; positions[] = {{-0.207031, 2.62305, 1.21893}, {-1.26953, 0.136719, -1.65416}, {2.55078, -0.556641, 1.21893}, {4.26367, 1.48828, -1.63971}}; }; 
		class Land_i_Stone_HouseBig_V3_dam_F { table = "CivillianLowerClass"; positions[] = {{-0.914866, 1.13112, -0.604515}, {-1.91401, 0.235362, -1.68246}, {-2.17034, 2.95882, -1.56044}, {2.59688, 2.70158, 1.19249}, {0.786265, -2.84008, 1.19249}, {-2.37203, 1.10138, 1.19249}, {2.32693, -0.392636, -1.67138}, {-2.0959, -1.66217, 1.12749}};};
		class Land_i_Stone_HouseBig_V3_F { table = "CivillianLowerClass"; positions[] = {{-0.448242, 2.2959, -1.67845}, {-0.699219, 5.01953, -1.56552}, {4.06201, 4.76221, 1.19249}, {2.25146, -0.779297, 1.19249}, {-0.906738, 3.16211, 1.19249}, {3.79248, 1.66797, -1.66738}, {1.69141, -0.974609, -1.77251}, {0.639648, 3.17432, -0.604514}, {-1.06396, -0.322266, 1.10749}, {2.56689, 2.62695, 1.10749}, {5.94727, 3.42334, 1.14749}, {5.94775, 1.43262, 1.14749}};};
		class Land_i_Stone_HouseSmall_V1_dam_F { table = "CivillianLowerClass"; positions[] = {{5.89994, 2.13632, -0.595108}, {3.00846, -2.034, -0.609566}, {-8.22044, 0.396729, -0.623894}, {-3.33301, -2.17689, -0.637833}, {-3.72571, 2.36842, -0.598961}, {-1.23944, 1.57443, -0.608887}, {-3.63937, -0.105408, -0.608482}, {-1.07902, -1.73491, -0.609032}, {8.6384, -1.68735, -0.610916}, {5.47488, 0.185204, -0.610237}};};
		class Land_i_Stone_HouseSmall_V1_F { table = "CivillianLowerClass"; positions[] = {{-3.47656, 2.25195, -0.627007}, {-6.96094, 3.02539, -0.619827}, {3.27148, 2.02734, -0.611488}, {6.61914, 2.50977, -0.596566}}; }; 
		class Land_i_Stone_HouseSmall_V2_dam_F { table = "Military"; positions[] = {{5.89994, 2.13632, -0.595108}, {3.00846, -2.034, -0.609566}, {-8.22044, 0.396729, -0.623894}, {-3.33301, -2.17689, -0.637833}, {-3.72571, 2.36842, -0.598961}};};
		class Land_i_Stone_HouseSmall_V2_F { table = "CivillianLowerClass"; positions[] = {{-2.41992, 1.76758, -0.632064}, {-7.00391, 1.83594, -0.633547}, {3.77148, 2.05664, -0.609262}, {7.33008, 2.02539, -0.593399}}; }; 
		class Land_i_Stone_HouseSmall_V3_dam_F { table = "Tourist"; positions[] = {{5.89994, 2.13632, -0.595108}, {3.00846, -2.034, -0.609566}, {-8.22044, 0.396729, -0.623894}, {-3.33301, -2.17689, -0.637833}, {-3.72571, 2.36842, -0.598961}, {3.03743, 1.57866, -0.609718}, {6.08964, -0.509367, -0.610374}, {8.73453, 1.41217, -0.610825}, {-2.79222, -0.471111, -0.608658}, {-0.146792, 1.9164, -0.609085}};};
		class Land_i_Stone_HouseSmall_V3_F { table = "CivillianLowerClass"; positions[] = {{-2.68945, 2.05664, -0.628867}, {-7.74023, 3.45313, -0.615288}, {3.60938, 1.61328, -0.609982}, {6.83984, 3.07227, -0.595582}}; }; 
		class Land_i_Stone_Shed_V1_dam_F { table = "Tourist"; positions[] = {{3.0691, 0.137631, 0.0359497}, {0.14275, 1.29907, 0.281754}, {0.578967, -0.684321, 0.140053}, {-0.56152, -1.40849, 0.152122}};};
		class Land_i_Stone_Shed_V1_F { table = "CivillianLowerClass"; positions[] = {{-0.636512, 2.89671, -0.139648}, {-3.15463, 0.303622, -0.139648}, {2.37407, 3.43283, -0.139648}, {0.30189, -0.0637581, -0.139648}};};
		class Land_i_Stone_Shed_V2_dam_F { table = "Tourist"; positions[] = {{3.65891, 2.19003, -0.102753}, {0.442713, -1.67892, 0.0203171}};};
		class Land_i_Stone_Shed_V2_F { table = "CivillianLowerClass"; positions[] = {{1.04119, 3.38311, -0.139648}, {2.49361, 1.69455, -0.126945}, {-1.94071, 3.5405, -0.126938}, {-1.80464, 0.180691, -0.126938}, {0.76984, -1.68825, -0.361961}};};
		class Land_i_Stone_Shed_V3_F { table = "CivillianLowerClass"; positions[] = {{-2.3125, 2.05469, -0.100502}, {1.79297, 1.93359, -0.100502}}; }; 
		class Land_i_Windmill01_F { table = "CivillianLowerClass"; positions[] = {{-0.585938, 0.908203, -3.53162}}; }; 
		class LAND_ibr_bank { table = "CivillianUpperClass"; positions[] = {{1.44702,-0.9551,-1.60158},{-7.40649,-4.9482,-1.60158},{-7.50879,3.1616,-1.60158},{-13.1931,3.0244,-1.60158},{-10.6316,-1.4922,-1.60158},{-10.3481,-5.6631,-1.60158},{-14.0247,-6.4653,-1.60158},{-10.1897,-2.6592,-1.60158}};}; 
		class Land_ibr_FuelStation_Build { table = "VehicleService"; positions[] = {{-1.34521,1.40698,-1.33611},{2.27051,-0.949951,-1.33611},{-2.23193,-1.146,-1.33589},{-0.185059,0.775146,-1.33609}};}; 
		class land_ibr_hangar { table ="Industrial"; positions[] = {{-5.75635,9.95386,-3.57318},{-8.06152,-11.4065,-3.58192},{8.68555,-5.30371,-3.57942}};}; 
		class Land_ibr_terminal { table = "CivillianUpperClass"; positions[] = {{11.1885,-13.0669,-4.04974},{4.42383,-9.64746,-4.04974},{-2.42822,-6.94775,-4.04974},{-3.00537,-1.25439,-4.04974},{0.473145,8.72314,-4.04974},{14.8608,12.5249,-4.04974},{3.33838,-14.5229,0.581566},{-3.88428,-17.5376,0.581566},{-17.3682,0.572266,-4.05001},{-13.7939,0.576172,-0.231342},{-2.83545,10.9009,-0.949741},{-2.27686,-16.4238,3.68157}};}; 
		class land_ibr_zoodoor { table = "Military"; positions[] = {{1.79688, -0.65918, -3.56569}, {-0.424805, 2.48828, -3.56565}};};
		class Land_ibrhotel { table = "CivillianLowerClass"; positions[] = {{-8.44922,9.08105,-7.74672},{-0.813965,9.1748,-7.74672},{3.17383,11.873,-7.74672},{2.74072,2.91016,-7.74672},{3.80225,-2.44434,-7.85944},{-1.28711,-0.235352,-4.25943},{17.8379,-8.18896,-4.25943},{15.4878,-11.4014,-4.25943},{11.8403,-17.5391,-4.25943},{4.74902,-11.9019,-4.25943},{-9.04395,-17.6064,-4.25943},{-11.9761,-15.2539,-4.25943},{-15.9063,-12.082,-4.25943},{-12.2837,-4.31934,-4.25943},{-16.7495,9,-4.25943},{-15.7764,11.6875,-4.25944},{-11.9551,16.458,-4.25944},{-4.83203,12.1294,-4.25943},{-5.21436,6.14258,-4.25943},{3.57373,5.38721,-4.25943},{8.66553,17.2417,-4.25943},{12.2725,16.1885,-4.25943},{11.8359,4.06348,-4.25943},{8.99023,1.72949,-4.25943},{-1.28711,-0.235352,-0.759062},{17.8379,-8.18896,-0.759062},{15.4878,-11.4014,-0.759062},{11.8403,-17.5391,-0.759062},{4.74902,-11.9019,-0.759062},{-9.04395,-17.6064,-0.759062},{-11.9761,-15.2539,-0.759062},{-15.9063,-12.082,-0.759062},{-12.2837,-4.31934,-0.759062},{-16.7495,9,-0.759062},{-15.7764,11.6875,-4.25944},{-11.9551,16.458,-4.25944},{-4.83203,12.1294,-0.759062},{-5.21436,6.14258,-0.759062},{3.57373,5.38721,-0.759062},{8.66553,17.2417,-0.759062},{12.2725,16.1885,-0.759062},{11.8359,4.06348,-0.759062},{8.99023,1.72949,-0.759062},{-1.28711,-0.235352,2.74082},{17.8379,-8.18896,2.74082},{15.4878,-11.4014,2.74082},{11.8403,-17.5391,2.74082},{4.74902,-11.9019,2.74082},{-9.04395,-17.6064,2.74082},{-11.9761,-15.2539,2.74082},{-15.9063,-12.082,2.74082},{-12.2837,-4.31934,2.74082},{-16.7495,9,2.74082},{-15.7764,11.6875,-4.25944},{-11.9551,16.458,-4.25944},{-4.83203,12.1294,2.74082},{-5.21436,6.14258,2.74082},{3.57373,5.38721,2.74082},{8.66553,17.2417,2.74082},{12.2725,16.1885,2.74082},{11.8359,4.06348,2.74082},{-1.54492,0.158691,6.24485},{3.11914,5.81445,6.24485}};}; 
		class Land_Ind_Coltan_Main_EP1 { table ="Industrial"; positions[] = {{4.57178,-9.46716,2.36833},{-3.41223,16.6705,-6.38571},{-2.18005,4.8584,-6.33167},{-1.8158,7.86523,-6.33167},{6.59717,16.1372,0.928326},{7.28076,16.1573,4.84833}};}; 
		class Land_Ind_Expedice_1 { table = "Industrial"; positions[] = {{-2.6059, -6.56759, -3.48817}, {2.77779, 16.6432, -12.9662}, {-1.32413, 16.6432, -12.9662}, {0.906649, 9.47911, -12.9662}, {1.15159, 4.21557, -12.9662}, {4.01795, 19.273, -3.51317}, {-2.9173, 19.106, -3.51315}, {3.08724, 17.1661, -3.28181}, {-0.217299, 16.2011, 9.68372}, {-0.114271, 0.840322, 9.68373}, {0.915278, -0.582502, -3.51318}, {3.88819, -1.6449, -3.51317}, {-13.343, -20.1974, -3.51317}, {3.73078, -20.6108, -3.51317}, {9.42454, -18.0808, -5.78371}, {7.67502, -12.0576, -5.78371}, {3.89953, 2.79588, -5.71034}, {-2.24918, 19.2007, -5.71034}, {4.00259, 18.5567, -5.71034}, {-11.0524, -16.7366, -3.48817}, {-4.44906, -18.8115, -3.48817}, {1.09457, -12.8865, -3.48817}, {-1.20615, 10.199, 9.6825}, {0.549161, 4.3341, 9.68248}};};
		class Land_ind_expedice_3 { table = "Industrial"; positions[] = {{-3.1301, -9.55966, -1.07928}, {-3.09308, -16.4654, 2.22119}, {-6.55234, -17.3918, -4.8703}, {-3.17879, -9.41392, -1.10428}, {-3.08796, -17.6507, 2.19618}, {0.19593, -7.83352, 2.73425}, {2.39612, -7.92804, 2.62151}, {0.196793, 4.33454, 2.6998}, {2.57863, 4.42735, 2.3642}, {0.0651937, 18.8735, 2.10094}, {2.42262, 18.8553, 2.62177}, {-3.2847, 10.125, -1.19736}, {-5.43874, 17.4559, -4.8703}, {-7.27031, -6.52484, -4.8703}, {-3.20908, -17.6219, -4.46413}, {-7.08186, 17.7241, -4.8703}};};
		class Land_Ind_FuelStation_Build_EP1 { table = "VehicleService"; positions[] = {{-1.34521,1.40698,-1.33611},{2.27051,-0.949951,-1.33611},{-2.23193,-1.146,-1.33589},{-0.185059,0.775146,-1.33609}};};
		class Land_Ind_Garage01 { table = "VehicleService"; positions[] = {{-0.570163, -1.61451, -1.34396}, {1.93567, -0.55056, -1.26236}, {0.903556, 1.31686, -1.25844}, {-1.18951, 3.20071, -1.34397}, {2.91227, 2.54844, -1.12245}, {2.8157, 3.2549, -1.12245}, {1.49223, 3.57401, -1.14536}, {1.77079, 3.56798, -0.390366}, {1.33687, 3.61864, -0.0103683}};};
		class Land_Ind_Garage01_EP1 { table ="Industrial"; positions[] = {{1.65088,2.49048,-1.23114},{2.89014,2.49634,-1.12063},{2.84814,3.43677,-1.12102},{1.39063,3.59766,-0.391855},{1.57227,3.61353,0.368147},{1.7251,3.61353,-1.15185}};}; 
		class Land_Ind_MalyKomin { table = "Industrial"; positions[] = {{0.977051, 1.45801, -17.2313}, {1.08203, 1.75684, -7.72575}, {-0.318359, 0.6875, -7.72573}, {-0.789551, -0.793457, -7.72576}, {0.992188, -1.60547, -7.72576}, {2.31592, -0.0151367, -7.1412}};};
		class Land_Ind_Mlyn_01{ table = "Industrial"; positions[] = {{7.09424, 7.50977, 14.9454}, {-3.8291, 1.71484, 14.9454}, {-8.36621, 8.01563, 14.9454}, {-8.78223, -8.28906, 14.9454}, {0.115234, -7.45508, 14.9454}, {6.40869, -1.94336, 14.9454}, {-9.00635, 3.05664, -14.9099}, {-6.83301, 8.63965, -5.85223}, {-8.90186, 3.23535, -2.84933}, {-6.92041, 8.5, 0.201904}, {-3.30908, 8.6748, 0.201904}, {-9.06836, 3.04785, 3.14133}, {-6.98975, 8.46191, 6.25504}, {-3.30664, 8.53418, 6.25504}, {-8.98682, 8.5625, -5.85223}, {-9, 2.83594, 9.19446}, {-6.60107, 2.77539, 9.19446} };};
		class Land_Ind_Mlyn_03 { table = "Industrial"; positions[] = {{7.72494, 1.54666, -4.19864}, {-4.85096, 7.79432, -4.19864}, {-8.53932, -1.84295, -4.19864}, {-3.18885, -7.77977, -4.19862}, {-3.26505, -2.20915, -4.19864}, {8.19822, -7.94852, -4.19865}, {5.1147, -5.04361, 8.99826}, {-5.63682, -4.98852, 8.99828}};};
		class Land_Ind_Oil_Pump_EP1 { table ="Industrial"; positions[] = {{1.49048,-1.99609,-2.08473}};}; 
		class Land_Ind_Oil_Tower_EP1 { table ="Industrial"; positions[] = {{3.55743,-5.92773,-12.9755},{4.63086,1.24902,-12.9932},{-0.240356,-1.08252,-12.9875},{6.87689,-6.34961,-8.00889},{2.31177,0.231689,-8.00478}};}; 
		class Land_Ind_Pec_01{ table = "Industrial"; positions[] = {{-4.90186, 12.6875, -22.5782}, {-6.47607, -14.1914, -17.6016}, {6.7002, -14.2002, -17.5467}, {-3.79102, -1.63477, -17.6016}, {5.42188, -1.09082, -17.6016}, {9.84229, -7.72559, -17.531}, {9.50977, -9.37988, -4.00089}, {-7.40576, -13.3838, -3.98999}, {-2.27637, -1.14453, 1.00241}, {0.0834961, -7.85938, 1.00241}, {6.21191, -1.23047, 6.0614}, {6.2041, -8.16113, 14.5456}, {6.00488, -1.3916, 14.5175}, {-6.62744, 9.9043, -22.6032}, {4.13721, -4.20117, -22.5782}, {-0.104004, -12.4063, -22.5782}, {-3.44971, -14.7217, -22.5782}, {4.26709, 9.91699, -22.5782} };};
		class Land_Ind_Pec_02{ table = "Industrial"; positions[] = {{-0.494629, 25.0469, -6.66043}, {4.01465, 22.7803, -6.66037}, {9.86865, 12.0186, -6.66037}, {1.77148, -25.29, -6.66037}, {-10.4658, -3.21094, -6.66037} };};
		class land_ind_pec_03 { table ="Industrial"; positions[] = {{6.07275,11.8623,2.59973},{7.82275,-2.04883,-1.9376},{13.1899,16.0693,-5.15128},{14.0396,8.12549,-5.15128},{13.8237,12.5366,-4.69128},{4.63086,16.6553,-2.04201},{3.07275,-5.11963,-5.15128},{4.79541,-2.07031,-1.9387},{3.67627,14.5518,2.60131},{-2.08447,-13.6855,1.11455},{3.21484,8.37207,-5.15128},{4.78662,18.0498,-5.15128},{-3.98193,-24.5332,-5.15128},{12.9028,-1.58447,3.05404},{-0.259766,22.2715,4.05607},{1.96094,25.4209,4.05607},{2.1709,11.5796,2.75019},{1.17725,11.8911,3.87051},{6.62451,13.2251,4.24952},{3.21777,-11.7026,-1.85671},{8.35938,-3.10693,-1.93559},{14.1851,-5.31348,-1.08754},{13.0874,16.7339,-4.27128},{7.37207,16.6235,-4.99128},{11.6133,16.7075,-5.04128},{12.248,13.2998,-3.56128},{-15.2876,-18.2754,-5.06128},{3.3833,14.4814,3.36135},{10.6797,7.66943,-4.43128},{-4.56982,14.9658,-4.94128},{4.23242,-26.7783,-1.97225},{2.2749,21.8086,4.05607}};}; 
		class Land_Ind_Pec_03a { table = "Military"; positions[] = {{-16.0801, -14.1543, -5.35606}, {-16.3164, -12.0815, -5.35608}, {8.48145, -22.4106, 5.76684}, {11.6113, -9.63916, 5.76684}, {-1.4834, -21.2417, 5.76684}, {2.72656, -10.6113, 5.76684}, {-3.5625, -5.11182, 5.76684}, {10.5337, 0.57666, 5.76684}, {2.67773, 4.95215, 5.76684}, {-3.85303, 13.0991, 5.76684}, {11.2646, 13.9316, 5.76684}, {4.15918, 25.9873, 4.02961}, {3.04248, 20.1011, 4.02961}, {-2.2168, 23.8447, 4.02961}, {-9.43115, -17.9033, 0.968636}, {-12.8955, -15.6475, 0.968636}, {-10.1533, -10.6826, 0.968636}};};
		class Land_Ind_Pec_03b{ table = "Military"; positions[] = {{0.280273, 28.9766, -5.35361}, {-7.77393, -8.88477, 0.968628}, {-12.6421, -16.1982, 0.968628}, {-8.24023, -18.0605, 0.968628}, {-2.43652, -22.1309, 5.76685}, {8.5415, -21.6641, 5.76685}, {3.08447, -9.37402, 5.76685}, {9.229, 2.07617, 5.76685}, {11.8262, 15.1055, 5.76685}, {-1.03564, 3.0625, 5.76685}, {-4.52881, 15.4014, 5.76685}, {4.70898, 21.0156, 4.0296}, {-1.21289, 24.7852, 4.0296} };};
		class Land_Ind_PowerStation_EP1 { table ="Industrial"; positions[] = {{4.04248,-3.4917,-1.26547},{3.8645,3.5249,-1.28112}};}; 
		class Land_Ind_Quarry { table = "Industrial"; positions[] = { };}; class Land_leseni4x { table = "Industrial"; positions[] = {{-3.35978, 0.214078, -1.60518}, {1.98845, 0.248554, 0.695427}, {1.46002, 0.593901, 0.58654}, {0.476351, 0.359879, 2.79241}, {-1.50815, 0.413247, 2.79241}, {-2.58682, -0.41792, 5.01495}, {-0.921159, 0.0411007, 5.01496}, {1.39192, -0.0298452, 5.01495}};};
		class Land_Ind_SawMill { table = "Industrial"; positions[] = {{-3.85134, -5.68782, -5.8354}, {-7.32257, -6.1258, -5.83541}, {0.0217261, -12.5911, -5.8354}, {5.30469, -11.5762, -5.83539}, {10.658, 5.59411, -6.33089}, {5.90801, 16.9634, -5.83537}, {2.09083, 17.1674, -5.8354}, {-4.28658, 9.74361, -5.83539}, {-12.5606, 7.74519, -5.83541}};};
		class Land_Ind_SawMillPen { table = "VehicleService"; positions[] = {{1.37298, -5.59016, -3.06333}, {-1.67682, 6.08135, -3.06335}};};
		class Land_ind_silomale { table = "Industrial"; positions[] = {{4.258, -12.4732, 12.9326}, {7.56861, -6.76202, 12.9326}, {6.28061, 1.78936, 12.9326}, {9.31685, 9.29366, 12.9326}, {-8.22286, -8.20809, 12.9326}, {-4.89749, -13.075, 12.9326}, {-8.78922, -0.827189, 12.9326}, {-7.06283, 9.73296, 12.9326}};};
		class Land_Ind_SiloVelke_01 { table = "Industrial"; positions[] = {{3.66362, -7.38595, -5.4789}, {3.712, 9.32767, -5.47891}, {3.45666, -7.40499, 12.1469}, {3.72181, 9.32984, 12.3727}, {0.208575, -7.30306, 21.9729}, {-12.5085, -7.86852, 21.9729}, {-12.4419, 9.46318, 21.9729}, {0.29821, 9.54508, 21.9729}, {-14.5195, -1.2935, -24.5778}, {-14.266, 2.27366, -24.5778}, {9.2343, -5.80894, -24.912}, {2.10191, 7.87521, -24.5778}};};
		class Land_Ind_SiloVelke_02 { table = "Industrial"; positions[] = {{-10.9076, 4.74294, 17.7242}, {-4.50408, 3.16391, 17.7242}, {-0.252193, 7.04205, 17.7242}, {6.25345, -4.34306, 17.7242}, {12.6886, 4.69217, 17.7242}, {-8.45585, 0.373044, 19.2471}, {-13.454, -6.11981, 17.7242}, {15.8102, -8.19189, 17.7242}, {6.79371, -0.0577952, 19.2471}, {-1.00269, -4.09894, 17.7242}};};
		class Land_Ind_TankBig { table = "Industrial"; positions[] = {{3.59814, 1.521, 5.31478}, {-2.56885, 3.64404, 5.31478}, {-5.31543, -2.34521, 5.31479}, {1.66553, -4.48975, 5.31479}, {-0.557617, -2.48047, 5.31479}};};
		class Land_Ind_Vysypka { table = "Industrial"; positions[] = {{-4.64844, -26.8618, -5.50827}, {-6.72852, -11.9331, -5.03563}, {-6.55127, 2.64014, -5.03595}, {-5.82715, 20.2607, -5.04239}, {1.8374, 25.3921, -5.42108}, {5.96338, 17.7681, -5.03733}, {5.76074, 8.96289, -5.03732}, {9.82715, 2.59863, -5.03732}, {6, -4.73145, -5.03732}, {9.53076, -11.7817, -5.03731}, {6.58545, -19.2427, -5.03731}, {-8.72314, -19.6206, -5.01795}, {0.488281, -15.7456, -5.01983}, {-8.47803, -5.62451, -5.02084}, {-0.0209961, -1.04834, -5.02278}, {0.448242, 5.29346, -5.02413}, {-8.51172, 9.67188, -5.02396}, {0.610352, 13.8696, -5.0259}, {-6.87451, 26.9355, -5.03656}, {1.28125, 29.3379, -5.0285}, {9.10693, 9.53223, -5.84882}, {9.93848, -5.18506, -5.84882}, {9.58398, -18.3506, -5.84882}};};
		class Land_Ind_Workshop01_01{ table = "Industrial"; positions[] = {{-1.47852, -0.0175781, -0.714417}, {-0.92041, 1.26758, -0.837128}, {-1.20557, 2.0498, -0.228088}, {-1.479, 1.19238, 0.375549}, {2.07861, -2.64648, -0.442322}, {1.83984, -3.35449, -0.714417}, {2.05566, -0.707031, -1.4379}, {1.14404, -2.6582, -1.43793}, {-0.790527, 0.299805, -1.43784} };};
		class Land_Ind_Workshop01_02{ table = "Industrial"; positions[] = {{-1.5376, -0.777344, -1.47028}, {1.53223, -0.579102, -1.47034}, {-0.133301, 1.05469, -1.47034}, {1.63086, 1.69434, -1.47031} };};
		class Land_Ind_Workshop01_03 { table = "VehicleService"; positions[] = {{-3.53379, 5.0032, -1.48245}, {2.67644, 2.94781, -1.48245}, {2.74194, 0.234355, -1.48245}, {-2.23014, -7.01692, -1.48247}};};
		class Land_Ind_Workshop01_04 { table = "Industrial"; positions[] = {{-1.13672, 2.4209, -1.55697}, {-1.19141, 4.03711, -1.55738}, {-0.293945, -5.85303, -1.55318}, {-0.331543, 2.07813, -0.303968}, {-0.323242, 1.79688, -0.683968}, {-0.321289, 2.04443, -1.06397}, {-0.311523, 1.87549, -1.43897}, {1.20703, 4.63379, -1.6699}, {-1.41309, -3.93018, -1.6699}, {1.58545, -3.28125, -1.66988}, {-1.26855, -3.07031, -1.43897}, {-1.66016, -3.03564, -1.06397}, {-1.39697, -3.02441, -0.683969}, {-1.57031, -3.05566, -0.303968}, {-1.29688, -3.03027, 0.0810318}};};
		class Land_Ind_Workshop01_L { table = "Industrial"; positions[] = {{0.447754, -1.45703, -0.857283}, {0.848633, -1.45605, -0.477283}, {0.847656, -1.46143, -0.857283}, {0.640137, -1.47998, -1.23228}, {0.549805, -1.45752, -0.0972834}, {0.799805, -1.48291, 0.287716}, {1.05859, -3.65869, -1.46322}, {3.68994, -4.94385, -1.46322}, {4.25684, -2.37744, -1.46321}, {-2.16797, 2.29688, -1.4632}, {-3.05615, 4.70117, -1.46322}, {0.243652, 5.00537, -0.477283}, {0.0224609, 5.06641, -0.0972834}, {0.303711, 5.00391, 0.287716}, {-0.0786133, 5.06543, -0.477283}, {0.012207, 5.07373, -0.857283}, {0.206055, 5.0293, -1.23228}};};
		class Land_IndPipe2_bigL_L_EP1 { table ="Industrial"; positions[] = {{1.09961,1.11572,2.0323}};}; 
		class Land_KBud{ table = "Tourist"; positions[] = {{0.11084, -0.540039, -0.127808}, {0.868164, -0.586914, -1.2316} };};
		class Land_Kiosk_blueking_F { table = "Shop"; positions[] = {{2.5957, 2.23779, -1.77357}, {2.70605, -2.56006, -1.77357}, {-2.74854, -2.62451, -1.77357}, {-2.64746, 1.80566, -1.77357}, {1.96436, -1.10205, -0.972324}, {1.94531, -1.8916, -0.595324}, {1.88818, -1.54785, -1.30332}, {1.51904, -1.92285, -0.972324}, {1.08154, -1.93213, -1.30332}, {1.21777, -1.91211, -0.972324}, {0.769531, -1.93604, -0.595324}, {0.467773, -1.85059, -0.972324}, {0.411621, -1.95801, -1.30332}, {-0.160156, -1.86523, -0.972324}, {-0.426758, -1.96387, -1.30332}, {-0.283203, -1.91455, -0.595324}, {-1.03711, -1.92188, -0.595324}, {-1.13428, -1.91943, -0.972324}, {-1.12061, -1.87891, -1.30332}, {-1.87305, -1.46387, -1.30332}, {-1.94922, -0.935547, -0.972324}, {-1.93066, -1.88965, -0.595324}, {-1.96143, -1.31689, -0.595324}, {-1.10547, 1.41211, -1.77357}, {1.35498, 1.29785, -1.77357}, {1.44434, 0.22998, -1.77357}, {-0.0356445, -1.77686, -1.77357}, {1.23145, -1.82959, -1.77357}, {-1.48584, -1.61865, -1.77357}, {-1.0293, -0.639648, -1.77357}};};
		class Land_Kiosk_gyros_F { table = "Shop"; positions[] = {{-1.20898, -1.07813, -1.97606}, {1.26758, -0.128906, -1.97606}}; }; 
		class Land_Kiosk_papers_F { table = "Shop"; positions[] = {{-2.50635, 2.83398, -1.98375}, {2.66895, 2.90576, -1.98375}, {2.8667, -2.70508, -1.98375}, {-2.75342, -2.81738, -1.98375}, {-1.89258, -1.22119, -1.5135}, {-1.86133, -1.42432, -1.1825}, {-1.94434, -0.925781, -0.8055}, {-1.03613, -1.95801, -1.1825}, {-1.34912, -1.86279, -1.5135}, {-1.76758, -1.90088, -0.8055}, {-0.225098, -1.93262, -1.1825}, {0.303711, -1.84521, -1.1825}, {0.0683594, -1.83008, -1.5135}, {-0.425293, -1.85889, -0.8055}, {0.942383, -1.88916, -0.8055}, {1.83398, -0.966797, -0.8055}, {1.93555, -1.7876, -0.8055}, {1.95898, -1.51807, -1.1825}, {1.87988, -1.10693, -1.5135}, {1.47266, -1.7876, -1.5135}, {1.10889, -1.8584, -1.5135}, {1.35889, -1.90234, -1.1825}, {1.44238, -1.91309, -0.8055}, {1.3833, -1.84277, -1.98375}, {-0.0649414, -1.97168, -1.98375}, {-1.97461, -1.16406, -1.98375}, {-1.33887, 1.57227, -1.98375}, {0.152344, -0.474609, -1.98375}, {1.59326, 1.54053, -1.98375}, {1.82275, -0.418457, -1.98375}};};
		class Land_Kiosk_redburger_F { table = "Shop"; positions[] = {{1.93262, -1.18701, -2.40795}, {1.9917, -1.72998, -2.07695}, {1.49268, -1.8584, -2.40795}, {1.05176, -1.87793, -2.07695}, {-0.0107422, -1.19873, -2.8782}, {1.06494, -0.23584, -2.8782}, {1.33447, 0.711914, -2.8782}, {-0.69043, 0.245605, -2.8782}, {-1.51758, 1.36523, -2.8782}, {-1.83496, -1.30859, -2.07695}, {-1.87109, -1.07129, -2.40795}, {-1.3457, -1.92773, -2.07695}, {-0.978516, -1.87207, -2.40795}, {-1.64697, -1.9209, -2.40795}, {-1.85059, -1.85645, -1.69995}, {-0.561523, -1.90088, -1.69995}, {-0.00341797, -1.87207, -2.07695}, {0.399414, -1.86523, -2.40795}, {-0.395508, -1.88086, -2.40795}, {0.717773, -1.88623, -1.69995}, {2.68164, 2.63232, -2.8782}, {-2.63525, 2.72412, -2.8782}, {-2.65625, -2.73535, -2.8782}, {2.67041, -2.78027, -2.8782}};};
		class LAND_Kiosk2 {table = "CivillianLowerClass"; positions[] = {{-20.7441,45.2878,3.05876},{-3.80933,-33.6328,3.02246},{-3.57007,-22.666,3.02246},{4.76587,-24.3711,-0.618923},{-1.10449,43.1938,-0.58263},{8.77441,23.7346,-0.845428},{-9.86914,41.6533,3.05876},{7.84668,20.991,4.76736},{6.91211,27.9067,10.1178}};}; 
		class Land_Komin { table = "Industrial"; positions[] = {{0.000488281, -1.20557, -15.8128}, {0.0126953, -0.753418, 12.4297}, {1.37646, 1.08545, 12.6094}, {0.0205078, 2.97656, 12.4297}, {-1.47949, 1.18945, 12.6395}};};
		class LAND_konecna { table = "CivillianUpperClass"; positions[] = {{14.8423,-0.987793,-1.59364},{16.873,-2.86865,-1.59364},{13.3672,-9.11377,-1.59364},{5.09497,-9.98682,-1.59364},{-24.8281,-1.17871,-1.59364},{-14.0747,-7.3042,-1.59364},{-19.0789,0.98291,-1.59364},{4.67944,0.805176,-1.59364},{-11.4639,-10.1475,-1.59364}};};
		class Land_Kostel_trosky { table = "Industrial"; positions[] = {{4.10791, -7.10986, -5.32276}, {4.3374, -1.19727, -5.32276}, {4.21924, 3.61572, -5.32276}, {0.0493164, 4.00293, -5.32276}, {-4.46826, 4.22998, -5.32274}, {-3.96777, -3.91797, -5.32276}, {-4.17383, -12.1025, -5.32276}};};
		class Land_Kostel3 { table = "Tourist"; positions[] = {{0.0908203, -17.9849, -15.7858}};};
		class Land_Kostelik { table = "Medical"; positions[] = {{-0.120605, -4.73779, -5.1339}};};
		class Land_Kulna { table = "Tourist"; positions[] = {{0.0371094, 0.854004, -1.14488}, {-0.574219, 1.60938, -1.14487}, {0.636719, -0.617676, -1.14489}};};
		class Land_Lampa_ind { table = "Medical"; positions[] = {{0.497559, -0.290039, -4.67832}};};
		class Land_Lampa_ind_zebr : Medical { positions[] = {{0.101074, -0.203125, -4.67615} };};
		class Land_Lampa_sidl { table = "Medical"; positions[] = {{1.52295, 0.422852, -5.39421}};};
		class Land_LampHalogen_F { table = "Medical"; positions[] = {{-0.726074, -0.919434, -5.98217}};};
		class Land_LampShabby_F { table = "Medical"; positions[] = {{-0.181641, 0.0419922, -3.77204}};};
		class Land_LampStreet_F { table = "Medical"; positions[] = {{-0.644043, -1.92188, -6.12383}, {0.217285, -2.32275, -6.12377}};};
		class Land_leseni2x { table = "Industrial"; positions[] = {{-2.02201, -0.39816, 0.520081}, {0.981439, -0.678715, 0.504639}, {0.785732, -0.698333, 2.50884}, {-2.70945, 0.217832, 2.50884}};};
		class Land_LifeguardTower_01_F { table = "Tourist"; positions[] = {{-0.498047, -0.222656, 1.13312}}; }; 
		class Land_LightHouse_F { table = "Tourist"; positions[] = {{-5.74805, 11.0859, -3.75002}, {0.789063, -2.94336, -11.0953}, {1.07813, -2.83008, 5.39755}}; }; 
		class Land_Lighthouse_small_F { table = "Industrial"; positions[] = {{-1.19873, 1.32813, -3.38064}, {-0.875977, -1.6416, -3.42191}, {4.43652, -1.68359, -3.42191}, {1.64111, 1.52637, -3.42191}, {4.5542, 1.48486, -3.42191}};};
		class Land_Majak2 { table = "Military"; positions[] = {{0.153809, -0.931152, -8.09946}, {-0.0908203, 0.698242, -8.09946}, {-0.012207, -0.380371, 1.69604}, {0.000976563, -1.89648, 1.69604}};};
		class land_mbg_apartments_big_04 { table = "CivillianUpperClass"; positions[] = {{10.1953,-2.47656,-3.19898},{3.14453,-0.197266,-3.19898},{0.949219,5.58789,5.94502},{-0.888672,2.47461,2.69382},{3.99414,-0.273438,2.89702},{10.7344,-0.351563,2.89702},{-10.4961,-5.46484,2.89702},{-3.25391,0.669922,2.89702},{10.6816,-2.26367,-0.15098},{-3.48828,0.31543,-0.15098},{-2.97461,-2.35547,-0.15098},{4.52734,1.46289,-3.19898},{2.90234,5.90918,2.89702},{5.46875,-0.703125,2.89702},{-4.46875,-0.686523,2.89702},{5.17383,-1.80566,-0.15098},{-7.44531,5.68359,-0.15098}};  }; 
		class land_mbg_garage_single_b { table ="Industrial"; positions[] = {{2.54492,3.97607,-1.03899},{4.13672,-0.0625,-1.03899},{4.50586,2.56982,-1.03899}};}; 
		class land_mbg_ger_estate_2 { table = "CivillianUpperClass"; positions[] = {{-0.847656,-5.23291,-2.13187},{-0.615234,3.95996,-1.55187},{8.30859,0.642578,-2.02187},{7.60547,6.6792,-2.13187},{6.38867,-5.31396,-2.13187},{-4.74023,3.71582,-2.13187},{-6.3125,-6.48145,-1.43187},{-4.81445,-2.0293,-1.43187},{-3.47852,4.58789,-2.13187},{0.107422,3.45947,-1.55187},{4.23438,-1.42188,-1.83187},{4.97461,1.09229,-1.30187},{6.53711,-2.07227,-1.29187},{6.35547,-4.70117,-1.65187},{-7.55273,3.99268,-1.65187}};  }; 
		class land_mbg_ger_rhus_1 {table = "CivillianLowerClass"; positions[] = {{-1.85156,3.59961,-0.0356913},{3.04688,1.85254,-0.465693},{3.36328,0.257813,-0.465693},{-2.74023,-3.26465,-0.465693},{1.23828,-4.19531,-2.38569},{1.56055,2.37012,-2.86569},{-10.4941,3.8916,-0.454963},{-9.91797,-4.14453,-0.454963},{-5.84375,0.373047,-0.174962},{-4.50977,0.0859375,-3.35496},{-1.4707,4.39844,-0.0356913},{1.56055,0.314453,-0.185692},{2.53516,0.682617,-3.25569},{3.62695,0.696289,-2.50569},{-3.34375,3.22852,-2.43569},{-3.32031,2.38086,-1.95569},{-4.81055,1.39453,-0.454963},{-6.64844,-4.29102,-0.454963},{-4.32617,-1.61035,-2.51496},{-6.30664,-4.11328,-2.37496}};}; 
		class land_mbg_killhouse_4 {table = "CivillianLowerClass"; positions[] = {{7.22266,-4.10205,-3.84318},{-2.04883,0.195313,-3.84318},{-6.33398,2.08691,-3.84318},{3.6582,0.32666,-3.84318},{7.24805,6.55469,-3.84318},{6.74023,2.40967,-0.543176},{-1.83203,2.08301,-0.543176},{6.85742,0.0131836,-0.543176},{-1.89258,-0.352051,-0.543176},{2.41992,-4.59082,-3.84318},{-1.61133,-4.5249,-3.84318},{2.61719,3.53076,-3.84318},{7.63867,6.79102,-0.543176},{2.54883,6.95605,-0.543176},{-1.70898,6.92188,-0.543176},{2.70313,-1.13672,-0.543176},{-6.58008,-4.49268,-0.543176}};}; 
		class Land_MBG_Police_Station { table = "CivillianUpperClass"; positions[] = {{9.81543,-4.36365,-1.59829},{1.01172,-6.02344,-1.59829},{-5.03369,-5.98376,-1.59829},{-8.5415,-0.348511,-1.59829},{-8.88574,-2.93823,-1.59829},{-5.55518,4.80493,-1.59829},{-1.77246,5.49365,-1.59829},{2.32129,6.33032,-1.59829},{3.54492,6.27332,1.68834},{9.88916,4.68176,1.68833},{10.0566,-1.07727,1.68833},{6.6499,1.78296,1.68833},{-5.30029,-2.68726,1.68833},{1.25977,-1.76636,1.68833},{-6.56689,1.51843,1.68834},{-5.33887,3.92529,1.68834},{-2.3125,6.18774,1.68834}};}; 
		class Land_MBG_Shanty_BIG { table = "CivillianLowerClass"; positions[] = {{-29.8752,-15.8057,2.99997},{23.4097,11.5024,24.9672},{-29.345,-16.7568,3.04013},{23.2319,11.6201,27.9672},{-33.3779,-11.3564,5.81198}};}; 
		class Land_Medevac_house_V1_F { table = "Medical"; positions[] = {{-1.25, 1.01367, -0.105749}, {1.38281, 2.82227, 0.0302868}}; }; 
		class Land_Medevac_HQ_V1_F { table = "Medical"; positions[] = {{-0.896484, 2.24219, -3.26622}, {-1.45898, -3.75391, -3.26622}, {-1.54297, 1.05469, -0.741375}, {5.17578, 2.66992, -3.26622}, {5.6875, 1.63477, -0.741374}}; }; 
		class Land_Metal_Shed_F { table = "Industrial"; positions[] = {{1.97119, -1.44873, -1.34444}, {-1.6958, -1.8042, -1.34444}, {-2.46777, -0.195801, -1.34444}, {-4.10107, -3.38379, -1.34444}, {3.2627, 0.0585938, -1.34444}, {3.45947, -3.2124, -1.34444}, {0.00537109, -3.34814, -1.34444}};};
		class Land_Mil_Barracks { table = "Military"; positions[] = {{-0.891113,-3.48926,-1.51633},{-1.09204,2.88672,-1.51633},{-3.55591,3.42871,-1.51633},{-6.31299,3.7041,-1.51633},{-7.68262,-3.54102,-1.93634},{-5.11475,-2.09961,-1.93634},{0.24707,3.57324,-1.93634},{6.72217,-2.47949,-1.93634},{5.41602,3.99316,-1.93634},{-6.34912,3.90137,-0.726349},{-3.58691,2.8252,-0.726349},{-1.04224,3.39941,-0.726349},{-3.75195,-3.25977,-0.726349},{-0.864746,-3.88672,-0.726349},{-3.52563,-2.44824,-1.93634},{-6.06396,2.57422,-1.93634},{-0.935059,-4.05078,-1.93634},{-1.39502,3.89941,-1.93634},{-6.45703,2.03125,-1.79633},{-3.5127,1.98242,-1.79633},{-1.14746,1.9873,-1.79633},{-0.911621,-1.87598,-1.79633},{-3.81567,-1.90234,-1.79633},{-6.5249,-1.86426,-1.79633},{3.78979,-4.17773,-1.13635},{5.32861,-4.19043,-1.13635},{5.20923,-1.99805,-1.65634},{6.54175,-1.99707,-1.65634},{3.82324,-1.96582,-1.65634},{6.89209,2.93457,-1.84634},{6.98877,1.95215,-1.84634},{6.98291,2.23145,-1.46634},{7.00391,2.73438,-1.46634},{6.96729,3.01953,-1.08633},{6.94824,2.04785,-0.706329},{4.36768,3.13086,-0.396332},{3.86768,3.49316,-0.396332},{3.84521,3.49609,-1.86633},{4.33984,3.1748,-1.86633}};}; 
		class Land_Mil_Barracks_EP1 { table = "Military"; positions[] = {{8.83222, 1.01479, -2.37607}, {8.35654, -0.961651, -2.32691}};};
		class Land_Mil_Barracks_i { table = "Military"; positions[] = {{8.94162, 2.00066, -1.44713}, {5.35271, 2.65805, -1.12466}, {5.28782, -2.30492, -1.04355}, {1.98707, 2.31921, -1.12467}, {1.26201, -2.45471, -1.12467}, {-0.637332, -2.36038, -1.12467}, {-3.83013, -2.31769, -1.12467}, {-7.72826, 2.51832, -1.12467}, {-8.29105, -2.338, -1.12467}, {-2.94779, 1.19929, -1.11452}, {-6.16259, 1.46036, -1.11452}, {4.01578, -0.582256, -0.088028}, {5.68619, 0.0141632, -1.11452}, {2.93244, -0.785739, 0.0890961}, {2.86973, -1.98324, 0.090538}, {2.87291, -1.27939, -0.700653}, {2.39083, -0.0277582, -1.11452}, {-0.351227, -0.935772, 0.0891418}, {-0.561332, -1.80407, 0.0901947}, {-0.382844, -1.18701, -0.700653}, {-2.17553, -2.4695, -1.11452}, {-0.607151, 0.147281, -1.11452}, {-3.41824, -2.04974, 0.0904846}, {-3.66868, -0.996235, 0.0892181}, {-3.54685, -0.833665, -0.700653}, {-5.31768, -2.08474, -1.11452}, {-5.21663, 0.0529815, -1.11452}, {-6.68029, -0.928049, 0.0892181}, {-6.87113, -1.90473, 0.0904007}, {-6.92715, -1.94811, -0.700653}, {-6.8216, -0.942703, -0.700653}, {-7.95809, -0.39128, -1.11452}, {-9.03417, 1.54892, -1.11452}, {-2.86143, 2.74688, -1.11452}};};
		class Land_Mil_Barracks_i_EP1 {table = "Military"; positions[] = {{3.89072, -0.723517, -0.088028}, {8.71772, 2.0012, -1.42542}, {5.14716, 2.65802, -1.12467}, {5.08231, -2.30503, -1.04353}, {1.78152, 2.31922, -1.12467}, {1.05647, -2.4547, -1.12467}, {-0.842874, -2.36038, -1.12467}, {-4.03568, -2.31768, -1.12467}, {-7.93381, 2.51832, -1.12467}, {-8.49659, -2.338, -1.12467}, {2.66087, -0.732642, 0.0890274}, {2.69394, -1.91028, -0.700653}, {2.41823, -1.01308, -1.11452}, {0.828739, 0.157142, -1.11452}, {0.136163, 1.40684, -1.11452}, {-2.80774, 1.11393, -1.11452}, {-0.678176, -0.828268, -0.700653}, {-0.663095, -1.85152, 0.0902481}, {-2.46172, -2.15558, -1.11452}, {-1.74789, -0.327501, -1.11452}, {-3.69773, -1.51734, 0.0898438}, {-3.74599, -0.777968, -0.700653}, {-3.69593, -1.86019, -0.700653}, {-5.08461, -2.36966, -1.11452}, {-5.62668, 0.29858, -1.11452}, {-9.29942, 1.46823, -1.11452}, {-6.60425, 1.67181, -1.11452}, {-6.99659, -0.907381, 0.0891953}, {-6.89725, -1.91655, 0.090416}, {-6.84296, -0.859649, -0.700653}, {-7.06854, -1.8531, -0.700653}, {-7.33754, -1.2315, -1.11452}, {-7.17672, 0.119969, -1.11452}, {-8.37654, -1.26852, -1.11452}, {-9.2495, -2.28981, -1.11452}, {-9.36652, -0.279412, -1.11452}, {-8.8018, 0.491349, -1.11452}, {-3.15122, 2.91709, -1.11452}};};
		class Land_Mil_Barracks_i_EP1Special { table = "Military"; positions[] = {{5.15625,-2.30371,-1.09824},{1.05664,-2.45508,-1.09824},{-0.841797,-2.36133,-1.09824},{-4.03516,-2.31836,-1.09824},{-8.49609,-2.33838,-1.09824}};}; 
		class Land_Mil_Barracks_L { table = "Military"; positions[] = {{-4.09583, -8.61751, -2.2013}, {-0.235683, -5.65311, -2.20129}, {5.59582, -5.71174, -2.2013}};};
		class Land_Mil_Barracks_L_EP1 { table = "Military"; positions[] = {{-2.99655, -7.89408, -2.2013}, {-5.84867, -7.31806, -2.20131}, {-4.42788, -8.36953, -2.20129}};};
		class Land_Mil_ControlTower_EP1f { table = "Military"; positions[] = {{5.53369,3.64355,-5.46368},{7.67236,3.68115,-1.0687},{7.53271,-1.70068,-1.0687},{4.55225,1.64111,2.92148},{10.1292,3.6958,-9.62869},{0.491943,6.1543,-9.62869},{7.54956,1.74512,-0.378696},{5.40234,-1.71289,-0.378696}};}; 
		class Land_Mil_ControlTower{ table = "Military"; positions[] = {{9.78223, 4.1084, -9.69012}, {8.18604, 4.04004, -9.69012}, {0.399414, 3.52539, -9.69012}, {8.39453, 5.91504, -9.69012}, {9.76953, 4.83789, -7.43515}, {5.7959, 3.77539, -5.50012}, {0.0742188, 6.05078, -5.50012}, {6.16553, 4.01563, -1.00131}, {5.79395, 3.99316, -0.246338}, {6.3042, 3.94824, 0.133667}, {6.43652, -1.69727, -1.07983}, {7.57422, 0.853516, -1.07983}, {2.66602, -1.9082, 0.807281}, {1.99854, -0.975586, -1.07983}, {1.8667, 2.08984, -1.07983}, {3.97607, -1.62598, -1.07983}, {4.88574, 1.27539, -1.07983} };};
		class land_mil_guardhouse { table = "Military"; positions[] = {{4.65381,-3.61914,-1.46277},{2.99756,3.54102,-0.712769},{-0.798828,-3.51758,-1.46277},{3.73047,-3.95996,-1.32278},{-0.283203,-3.15723,-1.32278},{-0.996582,3.81445,-1.14279},{-1.33008,2.26563,-0.762787},{0.289063,3.66211,-0.0827942},{-1.17383,-0.112305,-1.48279}};}; 
		class Land_Mil_Guardhouse_EP1 { table = "Military"; positions[] = {{-3.05859,1.76514,-1.59003},{-3.16895,3.45361,-1.59003},{-3.19922,-0.323242,-1.59003}};}; 
		class Land_Mil_hangar_EP1 { table ="Industrial"; positions[] = {{-9.83203,-12.4097,-5.38129},{10.5488,-12.1318,-5.38129},{13.002,0.0214844,-5.38129},{-13.3887,0.25,-5.38129},{13.3203,20.5176,-5.38129},{-13.1865,19.9839,-5.38129},{0.0195313,21.5078,-5.38129},{0.49707,11.5469,-5.38129},{-0.836914,-0.634277,-5.38129},{0.177734,-11.6821,-5.38129}};}; 
		class land_mil_house { table = "Military"; positions[] = {{-14.3345,1.24414,-4.94623},{-7.87842,1.45117,-4.15622},{-7.77686,-5.34277,-0.88623},{-4.43506,-5.33594,-0.88623},{-10.4692,4.4082,-4.94623},{-10.3696,1.2627,-4.46622},{-6.47998,4.92871,-4.98621},{-13.3208,-0.803711,-4.98621},{-13.791,-6.27832,-0.88623},{-13.2046,-5.36426,-0.196228},{-9.45166,-6.02832,-0.88623},{-0.253418,-4.12402,-0.88623},{-4.75635,-0.0224609,-0.88623},{-6.02002,-0.0410156,-0.426239},{-2.28857,0.575195,-0.876221}};}; 
		class Land_Mil_House_dam_EP1 { table = "Military"; positions[] = {{-0.725025, 7.3108, -5.42604}, {7.12898, 7.35012, -5.09093}, {0.147824, 0.519712, 2.76778}, {0.442448, 0.32843, 2.09822}, {-0.417229, 0.642189, 2.95052}, {-0.590092, 0.559999, 2.49756}, {1.15845, 0.418267, 1.90117}, {-0.639728, 0.562956, 2.78586}, {-0.886808, 0.172113, 2.68468}, {-0.801821, 0.284361, 2.13414}, {0.401486, 0.307832, 2.34557}, {-0.276008, 0.359395, -0.388145}, {-0.156346, 0.225872, 2.45976}, {0.225923, 0.295929, 2.24089}, {0.427345, 0.65611, 2.03322}, {0.131653, 0.110658, 2.6843}, {-0.685559, 0.268387, 2.4944}, {-0.00849736, -0.0648269, 2.68512}, {-0.0742174, 0.435304, 2.63049}, {0.11563, 0.482138, 2.52951}, {0.816656, 0.536848, 2.79387}, {0.148413, 0.314451, 2.35324}, {-0.383419, 0.421799, 2.05487}, {0.0345669, 7.0579, -5.06799}, {6.91514, 6.97153, -5.02805}, {13.4825, 5.30735, -6.33194}, {15.2491, 3.22911, -6.35256}};};
		class Land_Mil_House_EP1 { table = "Military"; positions[] = {{11.7949,4.3147,-5.81439},{-1.54785,5.46997,-5.00406},{-2.61816,5.46362,-5.0097}};}; 
		class Land_Mil_Repair_center_EP1 { table ="Industrial"; positions[] = {{-2.42432,-0.73584,-1.52847},{-2.43018,2.83984,-1.52847}};}; 
		class Land_MilOffices_V1_F { table = "Military"; positions[] = {{16.0914, 5.45314, -2.89319}, {-0.87254, 9.02785, -2.8932}, {-14.5675, -4.59273, -2.8932}, {-16.0413, 5.07588, -2.8932}, {-4.19702, -3.7986, -2.8932}, {-3.24983, 9.19487, -2.8932}, {6.29707, 10.8778, -2.8932}, {-12.1814, -5.22882, -2.8932}, {-7.50688, -2.98218, -2.8932}, {1.82973, -4.32167, -2.8712}, {0.155399, -0.283628, 0.435135}, {-0.215544, -2.59735, -2.8712}, {-3.77087, -2.09209, -2.8712}, {-9.81113, 4.54858, -2.8712}, {-1.44072, 0.65412, -2.8712}, {3.65991, 4.60237, -2.8712}, {4.36229, 10.0205, -2.8712}, {2.12554, 7.85661, -2.8712}, {13.6055, 2.87766, -2.8712}, {12.5398, -2.95117, -2.8712}, {15.8887, -4.98706, -2.8712}, {9.19964, 1.27781, -2.8712}, {-4.58665, 8.43233, -2.8712}, {-9.41288, 9.80231, -2.8712}, {-15.3232, 9.09864, -2.8712}, {-15.1693, 0.9869, -2.8712}, {-16.1058, -1.43211, -2.8712}};};
		class Land_Misc_Cargo1Ao_EP1 { table = "Industrial"; positions[] = {{-0.684345, -1.28735, -1.09848}, {0.205033, 1.71509, -1.09848}, {0.498183, -1.33623, -1.09848}};};
		class Land_Misc_Cargo1Ao{ table = "VehicleService"; positions[] = {{0.686035, -2.26953, -1.09848}, {0.67627, 2.07324, -1.09848}, {-0.496094, 0.27832, -1.09848} };};
		class Land_Misc_Cargo1B { table = "Industrial"; positions[] = {{-2.05323, -2.07163, -1.26788}, {-0.0512552, -3.90111, -1.26788}, {2.09383, 1.34409, -1.26789}, {-0.851493, 4.33421, -1.26789}};};
		class Land_Misc_Cargo1Bo { table ="Industrial"; positions[] = {{-0.322021,1.68555,-1.09222},{0.548584,-1.96289,-1.09222},{0.223389,-0.580078,-1.09222}};}; 
		class Land_Misc_Cargo1Bo_EP1 { table = "VehicleService"; positions[] = {{0.660669, -1.3117, -1.09848}, {-0.395615, -2.05534, -1.11868}, {-0.267326, 0.524699, -1.11868}, {0.38322, -1.65217, -1.11868}, {0.380948, 2.09113, -1.11868}};};
		class Land_Misc_Cargo1C_EP1 { table = "Industrial"; positions[] = {{0.0682935, 4.09127, -1.26788}, {1.59918, -2.74233, -1.26788}, {-0.307235, -3.61176, -1.26789}};};
		class Land_Misc_Cargo1D { table = "Industrial"; positions[] = {{1.85938, 3.57129, -1.26791}, {1.84229, -2.87207, -1.26789}, {-0.72998, -3.3833, -1.26787}};};
		class Land_Misc_deerstand { table = "Military"; positions[] = {{-0.839355, 0.656738, -2.14562}, {-0.745605, -0.562988, 1.05895}, {0.674316, -0.607422, 1.05895}, {0.03125, -1.17871, 1.05895}, {0.326172, 0.190918, 1.05895}};};
		class Land_Misc_PowerStation { table = "VehicleService"; positions[] = {{3.8642, -3.80125, -1.25103}, {4.59212, -0.0438093, -1.27679}, {3.72998, 3.64595, -1.27003}, {4.48289, 7.18185, -1.29566}};};
		class Land_Misc_Scaffolding{ table = "Industrial"; positions[] = {{-0.235352, 3.46094, 0.441772}, {-0.373535, -0.924805, 0.441772}, {0.32373, 6.58594, 0.441772}, {0.217773, -0.722656, -2.69315}, {-0.146484, -1.12207, 3.41406}, {-0.242676, 7.08691, 3.41406}, {0.915039, 4.20605, 3.41406} };};
		class Land_Misc_WaterStation{ table = "Tourist"; positions[] = {{-0.0263672, 2.36621, -1.59082} };};
		class Land_Nasypka { table = "Industrial"; positions[] = {{1.06543, 0.0078125, -6.4332}, {0.162109, 0.0136719, 6.54181}, {-1.25977, 1.41211, 6.54181}, {-1.28516, -1.46143, 6.5418}, {-1.80859, -1.46094, 6.93925}, {-1.56494, 0.572754, -5.92821}};};
		class Land_Nav_Boathouse { table = "Tourist"; positions[] = {{1.58594, 9.50439, 3.70432}, {-5.27393, 9.50732, 3.7058}, {5.32471, -1.97217, 3.70308}, {1.57031, 7.4624, 3.70231}, {-5.16406, 0.720703, 3.7051}, {-5.77344, 6.96484, 3.70992}, {7.66602, 3.99365, 3.70044}, {7.36963, 8.46729, 3.70006}, {-7.71973, 5.28223, 3.70566}, {-7.72021, 0.739746, 3.70461}, {7.66602, -2.47119, 3.70288}};};
		class Land_NAV_Lighthouse{ table = "Tourist"; positions[] = {{-0.366699, 0.342773, -6.98819}, {-0.0991211, -1.49414, 2.39767}, {-0.79248, 0.450195, 2.39767}, {-1.08936, 1.44141, 2.39767}, {1.86621, 0.395508, 2.39767} };};
		class Land_NAV_Lighthouse2{ table = "Tourist"; positions[] = {{-0.213867, 0.183594, -6.98819}, {-0.430664, 0.835938, 2.39767}, {0.923828, -0.0410156, 2.39767}, {-1.79102, -0.793945, 2.39767}, {1.04541, -1.37695, 2.39767}, {0.257813, 1.88184, 2.39767} };};
		class Land_NavigLight { table = "Medical"; positions[] = {{-0.364746, -0.353027, -4.88075}};};
		class Land_Obstacle_Climb_F { table = "Medical"; positions[] = {{0.785645, 0.097168, -0.93153}, {-1.25488, -0.0834961, -0.931503}};};
		class Land_Offices_01_V1_F { table = "Tourist"; positions[] = {{12.0142, -6.9126, -7.08543}, {7.93457, -6.87598, -7.08543}, {5.62939, -7.12109, -7.08543}, {2.97754, -6.72217, -7.08543}, {0.708984, -6.93115, -7.08543}, {-1.23828, -6.6084, -7.08543}, {5.64453, 7.57373, -7.08543}, {0.603027, 7.60938, -7.08543}, {-4.42334, 7.68311, -7.08543}, {-9.40039, 7.53906, -7.08543}, {-0.370605, -6.98926, -3.18543}, {1.80957, -6.98926, -3.18543}, {4.08936, -6.67529, -3.18543}, {6.64063, -6.9873, -3.1855}, {-0.370605, -6.73926, 4.63542}, {1.80957, -6.73975, 4.63617}, {4.08936, -6.67578, 4.63696}, {6.64063, -6.9873, 4.63769}, {-0.370605, -6.73926, 9.81958}, {1.80957, -6.73926, 9.81958}, {4.08936, -6.67529, 9.81957}, {5.80371, -7.08105, 9.81958}, {10.2646, -7.0918, 4.63888}, {12.0503, -7.01514, 5.17615}, {12.0078, -3.63623, 4.63933}, {11.9888, -1.75488, 4.87654}, {12.04, -0.257813, 4.79156}, {-5.81543, 7.30957, 9.81957}, {-10.0732, 7.54492, 9.81957}, {-15.7788, 7.32959, 9.81957}, {-16.2661, 3.2998, 9.81955}, {-16.229, -5.09033, 9.81959}, {-16.0552, -10.6489, 9.81955}, {-12.8555, -10.9956, 9.81955}, {-9.45996, -10.708, 9.81956}, {-2.80566, -10.9521, 9.8196}, {-2.51465, -7.05566, 9.81957}, {4.58008, -5.65234, 10.0509}, {12.0596, -7.1709, 10.0903}, {12.0586, -0.945801, 10.1474}, {12.2139, -3.75293, 9.90395}, {12.1108, 3.06006, 9.81957}, {12.2813, 7.57178, 9.81957}, {7.26807, -1.00879, 9.81957}};};
		class Land_OrlHot { table = "Shop"; positions[] = {{7.78439, 0.597723, -4.01974}, {-0.0238178, 4.96987, -3.83535}, {-4.49989, -3.9836, -3.72162}};};
		class Land_Panelak { table = "CivillianUpperClass"; positions[] = {{0.15918, 2.63037, -1.37582}, {-0.698242, -1.96289, 0.0449834}, {-3.16211, -6.11621, 0.0449839}, {-6.62402, -6.19287, 0.0449848}, {-6.85449, 0.320313, 0.0449839}, {-3.06299, 3.9917, 0.0449839}, {-6.39209, 4.00098, 0.0449839}, {0.59375, 4.14941, 1.30223}, {0.0537109, -2.85303, 2.74501}, {3.02637, -6.14404, 2.74501}, {6.79883, -6.2168, 2.74501}, {6.31543, 0.411621, 3.00367}, {6.54541, 4.00342, 2.74501}, {3.21533, 3.99414, 2.745}, {0.0498047, -3.25586, 5.59942}, {-6.74219, -6.13086, 5.59943}, {-6.8877, 4.1084, 5.66408}, {6.83301, 3.95508, 5.65025}, {6.95361, -6.28467, 5.68397}};};
		class Land_Panelak2 { table = "CivillianUpperClass"; positions[] = {{-0.690796, -1.99902, -2.65502}, {0.572953, 4.11491, -1.3978}, {0.572968, 4.11489, 1.30219}, {0.572699, 4.11537, 4.02599}, {3.28955, -6.15106, 5.41021}, {6.80292, -6.23001, 5.42988}, {6.25647, 3.83642, 5.41021}, {3.4465, 3.82075, 5.41021}, {0.00208732, -2.79069, 5.41021}, {-0.0146722, -3.28854, 8.29942}, {-6.1444, -6.65476, 8.29942}, {-6.82869, 4.12308, 8.32954}, {7.01461, 4.19525, 8.39014}, {6.13668, -6.58827, 8.2994}};};
		class Land_Panelak3 { table = "CivillianUpperClass"; positions[] = {{-0.000976563, -0.433594, -10.5553}, {-0.0166016, -0.891602, -8.65524}, {-0.160645, -0.0839844, -8.65524}, {-0.847168, -0.0917969, 13.2145}, {-7.06348, 3.90381, 12.4527}, {7.021, 3.84326, 12.4441}, {7.0293, -6.80615, 12.4448}, {-7.17676, -6.93701, 12.4606}, {1.0376, 3.96826, -10.825}, {0.887207, 1.2876, -10.825}, {-0.794922, 2.00244, -10.825}, {-1.02197, 3.82178, -10.825}, {1.00537, -4.36182, 12.3702}, {4.83057, -0.79834, 12.3702}, {-4.69238, 0.358398, 12.3702}, {0.623047, 3.08496, 12.3702}};};
		class Land_Posed { table = "Military"; positions[] = {{0.120117, -0.940918, -3.14984}, {-0.0537109, 0.944336, 0.847949}};};
		class LAND_Posta {table = "CivillianLowerClass"; positions[] = {{-17.4678,-9.28809,1.00044},{-16.5732,-1.32227,1.00044},{-3.60254,-5.11377,1.00044},{9.72168,-6.61035,1.00044},{17.333,-8.2085,1.00044},{13.3633,7.1958,1.00044},{1.56445,8.49707,1.00044}};}; 
		class Land_PowLines_ConcL { table = "Medical"; positions[] = {{1.75537, 0.286133, -5.09441}};};
		class Land_PowLines_WoodL { table = "Military"; positions[] = {{0.267578, 0.180664, -3.49799}};};
		class Land_Psi_bouda { table = "Medical"; positions[] = {{0.427734, -0.0585938, -0.360122}};};
		class Land_R_HouseV2_01A { table = "CivillianLowerClass"; positions[] = {{-2.91894, -3.54143, -4.80377}, {-1.34361, -3.12627, -4.80377}, {9.51435, -2.30213, -4.0461}, {2.42639, 5.74185, -3.88342}, {-9.3161, 5.71704, -4.04609}};};
		class Land_R_HouseV2_02 { table = "Tourist"; positions[] = {{-0.743914, 0.975969, -4.42609}, {0.560659, -1.76641, -4.42609}, {0.0165978, -1.68883, -4.41135}, {0.0365979, 4.25117, -4.41135}, {-8.5873, 0.145321, -4.41135}, {-8.67627, 6.09691, -3.72806}, {-7.21514, 6.71377, -4.41135}, {8.7035, -0.00103565, -4.2626}, {8.59135, 2.88097, -4.28049}, {7.63129, 6.23785, -4.25462}};};
		class land_r_housev2_04 { table = "CivillianLowerClass"; positions[] = {{0.364502,3.06128,-4.08876},{-4.49097,3.29565,-4.0887},{7.0625,-1.54053,-4.09079},{5.88696,2.77051,-4.08894},{-4.32666,6.00415,-4.0887},{7.37158,4.41968,-4.08918},{6.17065,2.39063,-4.09028}};};
		class Land_Radar_F { table = "Military"; positions[] = {{-10.1797, -9.80859, -6.00412}, {-9.61719, 10.4219, -6.00412}, {11.6211, 1.06641, -6.00412}, {2.81445, 12.2578, -7.78305}}; }; 
		class Land_Radar_Small_F { table = "Military"; positions[] = {{-4.27158, 3.04666, -6.28217}, {-5.10198, 1.37582, -6.28219}};};
		class Land_Rail_House_01 { table ="Industrial"; positions[] = {{-2.35864,3.04199,-1.28266},{3.13745,3.62549,-1.28266}};}; 
		class Land_rail_station_big{ table = "CivillianUpperClass"; positions[] = {{2.47656, 0.793945, -4.04599}, {7.3374, -5.61035, -5.0708}, {8.49023, -0.517578, -5.0708}, {0.0200195, -5.60742, -5.0708}, {-8.93408, -5.3291, -5.0708}, {-3.67285, -5.05566, -5.07083}, {-2.68555, -2.44824, -5.07083}, {-0.766113, -2.42871, -5.0708}, {-1.91016, 1.07715, -5.0708}, {1.53369, 1.88379, -5.0708}, {-4.9209, 4.17188, -5.0708}, {7.92578, 3.53418, -5.04584}, {-1.63281, 6.91309, -4.98178}, {-11.395, 0.431641, -5.13232}, {-3.72656, -8.86816, -5.13235}, {14.3916, -5.64746, -5.13239} };};
		class Land_rails_bridge_40 { table = "VehicleService"; positions[] = {{2.36515, -14.9511, 3.98988}, {2.65853, -7.56002, 3.98988}, {-2.33086, -14.8612, 3.98988}, {-2.71409, -7.64988, 3.98988}, {0.108313, 1.17895, 3.98988}};};
		class Land_Repair_center{ table = "Industrial"; positions[] = {{1.83447, -3.90332, -2.52039}, {-0.420898, -5.37695, -2.52036}, {-2.68018, 1.06641, -1.55386}, {-2.66455, 3.80469, -1.55386}, {-1.04688, 5.55176, -2.52045} };};
		class Land_Research_house_V1_F { table = "Military"; positions[] = {{-2.24268, 0.435059, -0.132188}, {-1.50684, 3.08838, 0.0268478}, {1.6167, 3.29834, 0.0268478}, {-0.221191, 1.87207, -0.109188}, {1.96387, 0.754883, -0.109188}};};
		class Land_Research_house_V1_ruins_F { table = "VehicleService"; positions[] = {{-1.71491, 0.226908, -0.0179291}, {1.49729, 0.257331, -0.0179291}};};
		class Land_Research_HQ_F { table = "Military"; positions[] = {{-4.83301, 0.913086, -3.1722}, {4.79102, 5.24512, -3.17224}, {7.9707, -1.70703, -3.17224}, {-1.31104, -5.79736, -3.17224}, {8.38477, -1.86182, -0.81682}, {2.73242, 5.29736, -0.817474}, {-3.50684, 1.98828, -0.767816}, {-3.354, -3.4043, -0.767816}, {-1.4209, -5.91309, -0.804736}, {-0.191406, 1.50195, -3.27866}, {-2.23828, -1.94922, -3.27866}, {-3.4082, 3.72998, -3.27866}, {3.88965, -4.45752, -3.27866}, {2.3916, 0.706055, -3.27866}, {7.97021, 3.20117, -3.15824}, {5.44727, -0.0244141, -3.27866}, {3.04932, -4.31982, -0.678662}, {-0.885742, -1.88525, -0.753815}, {0.987305, 1.67627, -0.753815}, {4.91357, -1.42725, -0.753815}, {4.91992, 2.8501, -0.753815}};};
		class Land_Research_HQ_ruins_F { table = "Military"; positions[] = {{-1.11347, -5.56781, -1.16682}, {5.2814, -3.87357, -1.02631}, {5.00038, 0.466075, -1.13026}, {-0.969002, 4.07997, -1.28667}, {1.07097, 3.85998, -1.27918}, {-5.01289, 4.44973, -1.29831}, {-5.05402, 3.36527, -1.2431}, {5.48273, -2.7496, 1.33521}, {-1.91655, -5.07479, 1.18055}, {-0.0465868, 0.0302596, -1.2333}};};
		class Land_ReservoirTank_Airport_F { table = "Tourist"; positions[] = {{2.48567, -0.592761, -12.791}, {3.06663, 0.355573, -12.791}};};
		class Land_ReservoirTower_F { table = "Military"; positions[] = {{-1.50432, -2.14551, -1.83601}, {1.50189, -2.01115, -1.84381}, {3.90911, 0.0145673, -1.81963}, {-1.1286, 2.24868, -1.8376}, {1.37105, 3.16507, -1.82845}, {-3.8512, 0.861119, -1.82498}};};
		class Land_ruin_01{ table = "Tourist"; positions[] = {{-4.65332, 1.9541, -1.57095}, {-0.498047, 1.67578, -1.28055}, {3.52295, 0.963867, -1.21445}, {6.2627, -0.688477, -1.63867}, {3.57666, -1.73242, -1.43866}, {-3.58887, -1.94824, -1.63101}, {-5.19824, -1.89453, -1.71967}, {0.454102, -3.00293, -1.37805} };};
		class Land_Runway_PAPI_2{ table = "Shop"; positions[] = {{-0.436035, 0.869141, -0.310974}, {0.503906, -1.10254, -0.311035} };};
		class Land_Runway_PAPI{ table = "Industrial"; positions[] = {{-0.573242, 0.429688, -0.311005}, {0.019043, 0.0136719, 0.224335} };};
		class Land_ryb_domek { table = "CivillianUpperClass"; positions[] = {{-1.08085, 2.2716, -2.05503}, {1.15762, 2.22591, -2.05502}, {2.08854, -0.205897, -1.52051}, {1.60276, -1.22475, -2.05503}, {2.61933, -2.32157, -2.05503}, {-0.516371, -2.43867, -2.05504}, {-1.88743, -2.24213, -1.07226}, {-2.50258, -0.437788, -2.05503}};};
		class Land_Ryb_domek_sedy { table = "CivillianLowerClass"; positions[] = {{-0.0292969, 1.90283, -2.04144}, {-0.0419922, -0.630859, -2.04144}, {1.70947, -2.26172, -2.04144}, {-2.39551, -0.87793, -2.04144}, {2.46631, -0.969238, -1.5205}, {1.67285, -0.244629, -1.5205}, {-1.87402, -2.25146, -1.07226}};};
		class Land_sara_domek_hospoda { table = "Tourist"; positions[] = {{-0.386908, -3.88687, -2.75509}, {4.12135, -4.14755, -2.75331}, {-7.04828, -4.04156, -2.7577}};};
		class Land_sara_Domek_sedy { table = "CivillianLowerClass"; positions[] = {{1.7949, 1.07418, -2.1684}, {5.00996, 0.0110659, -2.1684}, {4.96268, 3.17921, -2.1684}, {0.588078, 3.59416, -2.1684}, {-0.917583, 3.25242, -2.1684}, {-4.69408, 3.24897, -2.1684}, {-5.24836, 0.0711942, -2.1684}, {-1.40309, -0.467917, -2.1684}, {-3.05804, 3.28371, -2.1684}, {2.49904, 3.08597, -2.1684}, {5.31109, -0.640142, -1.21881}, {-3.91329, -0.430933, -1.619}, {-2.45541, 0.545078, -2.1142}, {-2.98015, 0.348926, -1.619}};};
		class Land_sara_domek_sedy_bez { table = "Tourist"; positions[] = {{1.5306, -3.11397, -2.10284}, {-1.59195, 4.16168, -2.2617}};};
		class Land_Sara_domek_zluty { table = "CivillianLowerClass"; positions[] = {{-6.10596, -2.58594, -2.51563}, {-6.0835, -0.376465, -2.51568}, {3.08936, -0.210449, -2.46018}, {6.54199, -0.444824, -2.46013}, {3.24512, 2.79346, -2.46016}, {6.89307, 2.96875, -2.46016}, {0.0405273, -0.205566, -2.46029}, {-3.09424, -0.269043, -2.46004}, {-2.95801, -3.94336, -2.46022}, {-3.31689, 1.13623, -2.45998}, {-6.9375, 3.03223, -2.45987}, {-6.82031, -3.96338, -2.46018}, {-2.84326, 3.36279, -2.51566}, {-0.126953, 2.87109, -2.5157}, {5.47412, 1.5791, -2.51575}, {4.29443, 3.98877, -2.51567}};};
		class Land_sara_hasic_zbroj { table = "VehicleService"; positions[] = {{-2.2403, -1.71956, -2.67585}, {-1.99383, 1.81098, -2.67585}, {1.55222, 1.67975, -2.67585}, {3.61595, -0.751694, -2.67585}, {6.02652, 1.84364, -2.67585}, {6.36677, -1.51132, -2.67585}, {-0.579874, -0.137893, -2.67585}};};
		class Land_sara_stodola { table = "Industrial"; positions[] = {{3.67679, 0.821001, -1.2901}, {4.75581, 0.691756, -1.2901}, {3.04877, 2.26072, -1.2901}, {4.19822, -1.28453, -2.23035}, {4.48825, 4.20758, -2.24838}, {-3.80695, 4.10853, -2.24805}, {-1.78535, -0.236656, -2.23379}, {-4.4467, -1.02346, -2.23121}, {0.0614951, 3.12598, -2.24483}};};
		class Land_sara_stodola2 { table = "Industrial"; positions[] = {{2.00774, -3.36656, -2.19521}, {4.8116, -2.01957, -2.19521}, {5.53234, -0.149416, -2.19521}, {5.29948, 3.06356, -2.19521}, {1.43748, 3.42142, -2.19521}, {-1.52286, 2.68046, -2.19521}, {-1.28345, -1.77654, -2.19521}, {2.25295, 0.196624, -2.19521}};};
		class Land_sara_stodola3 { table = "Industrial"; positions[] = {{-2.95806, -4.2737, -2.63696}, {1.56215, -5.09513, -2.63694}};};
		class Land_sara_zluty_statek_in { table = "CivillianUpperClass"; positions[] = {{-9.20613, 3.95483, -2.94528}, {3.66181, -1.63953, -2.9345}, {6.27974, -2.45859, -2.9434}, {2.05065, -2.35541, -2.93771}, {3.21858, 3.75948, -2.91006}, {-1.58672, 3.77394, -2.90388}, {-1.49629, -0.016014, -2.90956}, {-1.60348, 5.9701, -2.90065}, {-4.13566, 3.71516, -2.89983}, {-4.06778, 1.16092, -2.90366}, {3.64397, 5.92236, -2.90221}, {8.04841, 3.55759, -2.91431}, {8.32792, 3.2549, -2.90988}, {8.75566, 0.0272926, -2.92835}, {-6.40789, 0.981677, -2.94528}, {-6.59354, 4.95173, -2.94528}, {9.36953, 3.1503, -1.89661}, {8.97598, 2.68067, -1.8966}, {6.26467, 5.82607, -2.94529}, {6.45187, 1.14377, -2.94528}, {-3.8437, -0.102566, -2.58727}};};
		class Land_Shed_Big_F { table = "Industrial"; positions[] = {{4.35109, -5.17046, -3.37723}, {-3.78231, 1.18574, -3.37724}, {3.06622, 9.06547, -3.37723}};};
		class Land_Shed_Ind02 { table = "Industrial"; positions[] = {{-1.47168, 0.941895, -4.63743}, {1.5625, -3.51221, -4.63743}, {2.46533, -11.0405, -4.85999}, {0.776855, -7.72168, -4.65243}, {4.28418, -3.46143, -4.65243}, {-0.227539, -9.19092, -1.44117}, {4.69141, -9.0791, -1.30053}, {4.81104, -6.20752, -1.30186}, {4.78223, -2.26563, -1.3036}, {4.77881, 2.7915, -1.306}, {4.79346, 6.38818, -1.30775}, {4.74561, 9.59033, -1.30936}, {-0.713867, 9.68652, -1.30612}, {-3.94922, 9.82471, -1.30618}, {-0.578125, 11.3433, -1.30237}, {-0.910156, 12.3818, -1.3037}, {-3.98047, 6.54102, -1.30989}, {-3.98047, 2.75439, -1.31091}, {-3.99854, -2.55371, -1.31236}, {-3.9458, -8.30127, -1.31405}, {-2.45557, 11.5679, -4.86698}, {4.16699, 6.49707, -4.65243}, {-1.67334, 8.26611, -4.65243}, {-3.91553, -8.68408, -4.30133}, {-3.92529, -5.62988, -4.29815}, {-3.79492, -2.00879, -4.33006}, {-3.91553, 2.21729, -4.30255}, {-3.89209, 6.56543, -4.30991}, {-3.91357, 9.95068, -4.30266}, {-0.506348, 3.8877, -4.63743}};};
		class Land_Shed_M01 { table = "Tourist"; positions[] = {{0.254395, -1.89258, -1.22577}};};
		class Land_Shed_M02 { table = "VehicleService"; positions[] = {{-0.570801, -0.37207, -1.53337}, {1.44824, -1.89014, -1.53338}};};
		class Land_Shed_M03 { table = "Shop"; positions[] = {{1.86281, 0.841101, -1.03297}, {2.08904, -1.54091, -1.03298}};};
		class Land_Shed_Small_F { table = "VehicleService"; positions[] = {{-2.67725, -9.50244, -2.13132}, {-2.95801, -0.694336, -2.13135}, {-3.12012, 9.59912, -2.13135}};};
		class Land_Shed_W01 { table ="Industrial"; positions[] = {{-1.46289,-0.12207,-1.41129}};}; 
		class Land_Shed_W02 { table = "CivillianLowerClass"; positions[] = {{-2.50342, 0.158203, -0.00290489}, {0.898926, 1.85596, -0.00292063}};};
		class Land_Shed_W03 { table = "CivillianLowerClass"; positions[] = {{0.390137, -2.37842, -0.861417}, {0.495605, 2.53174, -0.861442}};};
		class Land_Shed_W03_EP1 { table = "VehicleService"; positions[] = {{-0.643896, -1.72973, -0.861382}, {1.61107, -2.37043, -0.861374}};};
		class Land_Shed_W4 { table = "Industrial"; positions[] = {{1.33917, -5.4337, -1.45156}, {-1.60713, -5.00425, -1.45155}};};
		class Land_Shed_wooden { table = "Industrial"; positions[] = {{1.97497, 0.894117, -1.39417}, {0.684969, -0.781492, -1.39417}, {-0.794762, 1.19731, -1.39417}, {-0.712837, -1.14144, -1.1793}};};
		class LAND_shopping_sab1 { table = "Shop"; positions[] = {{-30.0442,28.7891,-6.25663},{-18.561,23.7578,-6.25663},{1.32031,24.5879,-6.25663},{-7.86792,15.1182,-6.25663},{-22.3628,16.8828,-6.25663},{-26.7896,-24.9424,-6.25663},{-22.4546,-17.333,-6.25663},{-30.6628,-11.0195,-6.25663},{-2.51978,-23.1719,-6.25663},{0.889893,-14.1914,-6.25663},{23.3015,-15.1357,-6.25663},{42.353,-13.5322,-6.25663},{37.3396,-22.9014,-6.34278},{14.5388,-26.2158,-6.25663},{9.93091,-18.2871,-6.25663},{7.23315,24.9834,-6.25663},{8.8877,16.46,-6.25663},{16.9697,11.9541,-6.25663},{27.3679,21.3857,-6.25663},{-28.7632,27.7227,-2.38664},{33.5342,16.8047,-6.25663},{-31.0317,12.626,-2.38664},{-22.1975,16.3066,-2.38664},{-17.7339,21.0166,-2.38664},{-8.78564,27.5811,-2.38664},{-7.71826,15.2012,-2.38664},{1.65771,16.3496,-2.38664},{-36.4099,8.60352,-2.38664},{-43.6084,8.64258,-2.38664},{-41.8218,-2.6748,-2.38664},{-35.7854,-5.95313,-2.38664},{-16.2727,-13.2295,-2.38664},{-23.0032,-13.2764,-2.38664},{-25.6714,-25.6045,-2.38664},{-10.1611,-26.001,-2.38664},{2.98145,-26.7119,-2.38664},{2.59131,-13.5352,-2.38664},{10.7913,-16.2617,-2.38664},{17.1582,-27.3232,-2.38664},{26.3887,-25.0986,-2.38664},{30.8889,-22.1074,-2.38664},{42.4817,-21.6602,-2.47279},{41.8726,-13.7373,-2.38664},{32.7183,-12.5967,-2.38664},{34.2241,-5.04199,-2.38664},{40.2024,-7.14941,-2.38664},{39.8079,-0.0917969,-2.38664},{43.5059,6.59766,-2.38664},{33.3914,3.02148,-2.38664},{29.0322,11.1025,-2.38664},{33.1868,17.4531,-2.38664},{22.3228,26.3857,-2.38664},{7.32861,23.8564,-2.38664}};};
		class LAND_shopping_sab5 { table = "Shop"; positions[] = {{-21.1367,-1.94238,-2.18279},{-22.1387,5.40918,-2.18285},{-5.17383,-1.17773,-2.1828},{2,-12.3975,-2.18271},{-4.03906,-11.5391,-2.18272},{-9.62109,-11.6016,-2.18272},{-15.1699,-11.5225,-2.18272},{-18.5156,-12.9307,-2.18271},{-20.3633,-10.1182,-2.18273},{-17.1367,-6.3623,-2.18276},{-12.0098,-3.98535,-2.18277},{-14.1758,4.46973,-2.18284},{-15.7285,-1.02539,-2.1828},{3.40625,4.30664,-2.18284},{6.83789,-3.75391,-1.36222},{-1.27344,10.9521,-1.36222},{-22.4199,9.1084,-1.36222},{1.22461,8.13672,-2.18285},{-3.18164,8.71484,-2.18285},{-7.77344,7.51563,-2.18285}};}; 
		class LAND_skola {table = "CivillianLowerClass"; positions[] = {{15.8508,20.459,-2.00361},{29.0132,22.3887,-2.00361},{30.6335,16.1104,-2.00361},{30.7412,5.33691,-2.00361},{18.7554,5.07324,-2.00361},{2.84912,14.2744,-2.00361},{-1.27197,12.2324,-2.00361},{-5.66699,16.6445,-2.00361},{-2.93408,22.0967,-2.00361},{5.48535,21.7969,-2.00361},{-9.52954,-8.64063,-2.00361},{-18.5305,-9.60449,-2.00361},{-23.9783,-0.905273,-2.00361},{-8.50586,13.9482,-2.00361},{5.84448,0.175781,-2.00361},{2.56885,-14.167,-2.00361},{-3.15063,-14.084,-2.00361},{-3.76294,-21.2754,-2.00361},{5.4397,-24.5635,-2.00361},{18.5049,-11.9141,-2.00361},{10.7795,-18.4443,-2.00361},{18.3979,-21.9854,1.22083},{20.1707,-14.1572,1.22083},{30.334,5.12402,1.22083},{22.9521,12.1387,1.22083},{1.45825,18.208,1.22083},{-5.56128,20.1572,1.22083},{-6.19165,15.4678,1.22083},{-1.05029,9.69141,1.22083},{6.17896,5.19434,1.22083},{5.00513,2.78711,1.22083},{5.81836,-5.65625,1.22083},{-0.54541,-15.1104,1.22083},{1.8418,-19.8584,1.22083},{-2.10864,-21.9961,1.22083},{-5.78857,-24.9277,1.22083},{16.3679,-15.4463,1.22083},{28.0537,-17.1328,1.22083},{22.1833,11.416,-2.00361}};}; 
		class Land_Slum_House01_F { table = "Shop"; positions[] = {{-0.996582, -0.180176, -1.07991}, {-0.609863, 1.53174, -1.07991}, {1.01025, 0.419922, -1.07991}};};
		class Land_Slum_House02_F { table = "CivillianLowerClass"; positions[] = {{2.12402, 2.39063, -0.82454}, {2.48779, -0.365723, -0.82454}, {0.28125, 0.771973, -0.82454}};};
		class Land_Slum_House03_F { table = "Industrial"; positions[] = {{0.265137, 2.37744, -1.07521}, {1.97314, 0.328125, -1.07521}, {-1.81787, 0.488281, -1.07521}, {3.13281, 2.10986, -1.07522}, {-0.400879, 0.767578, -1.07521}};};
		class Land_spp_Tower_F { table = "Military"; positions[] = {{0.0124304, 0.544507, -14.9885}, {-0.00233443, -3.53679, -14.9885}, {0.324868, 0.537536, 10.1608}, {-4.75249, -0.919835, 23.7988}, {-4.46462, -2.97847, 24.0749}, {-1.49777, 0.446607, 23.7988}, {4.89262, -1.60827, 23.7989}, {4.32128, -3.05468, 24.0424}, {-3.61417, -1.47649, -24.2927}, {-2.50933, 0.0352445, -24.2927}, {-2.43631, -3.17612, -14.9948}, {-2.04167, 0.15702, -14.9948}, {1.42834, -1.64815, -14.9948}, {-3.07931, -1.70796, 10.1604}, {1.09531, -1.1871, 10.1604}, {3.77824, -1.08779, 10.1604}, {0.569063, -1.00835, 23.7983}};};
		class Land_spp_Transformer_F { table = "VehicleService"; positions[] = {{-0.392908, -4.02376, -0.7435}, {-1.70528, 1.52901, -0.7435}, {-1.63003, -1.26628, -0.743507}};};
		class Land_Ss_hangar { table = "Military"; positions[] = {{-7.86377, 15.7236, -5.95471}, {-9.83301, -15.4053, -5.89898}, {10.5488, -15.1279, -5.89898}, {13.002, -3.95801, -5.89898}, {-13.3892, -3.72949, -5.89898}, {13.3203, 15.7324, -5.89898}, {-13.187, 15.1992, -5.89898}, {0.0195313, 20.2119, -5.89898}, {0.49707, 7.03027, -5.89898}, {-0.837891, -4.61426, -5.89898}, {0.177246, -14.6772, -5.89898}, {-7.29443, 3.40479, -5.9547}, {-6.7749, -7.8877, -5.9547}, {6.13428, -9.7124, -5.95467}, {6.00244, -2.77246, -5.9547}, {6.65723, 12.1162, -5.95469}, {11.9478, -23.0908, -5.9547}, {-11.7456, -22.561, -5.95472}};};
		class Land_Stodola_old_open { table = "Industrial"; positions[] = {{6.35596, -0.0566406, -5.13444}, {-4.62012, -0.273438, -5.13519}, {-2.55225, -0.128906, -5.10699}, {4.10693, -0.0566406, -5.10699}, {-2.68408, 3.03564, -5.07998}, {4.19727, 4.98145, -1.01995}, {-0.00488281, 5.43213, -1.01995}, {-1.47412, 5.46729, -1.01995}, {-1.9834, 9.47168, -1.01995}, {1.13379, 11.1436, -1.01995}, {4.58594, 10.8452, -1.01995}, {-0.557617, 9.75732, 5.83502}, {1.12744, 11.1011, 3.19676}, {4.18066, -3.08154, -4.98735}, {-1.95361, -3.54443, -1.04059}, {-2.54639, -5.2915, -1.03755}, {1.52686, -5.3877, -1.04037}, {1.75098, -9.27783, 3.0154}, {-3.14453, -9.54736, -1.02459}, {-1.58496, -11.0801, -1.02295}, {3.96533, -10.9189, -1.02375}, {2.50586, -7.83252, -4.11628}, {-1.42773, -4.94092, -5.12888}, {-2.37988, -10.3047, -5.12885}, {2.64307, -9.0625, -4.11628}, {4.45898, -10.8579, -5.12885}, {0.850586, -3.4209, -4.11614}, {2.35986, -3.90088, -5.12888}, {1.4707, 3.29346, -5.12891}, {4.02539, 7.43994, -5.12891}, {4.83008, 4.25732, -5.12895}, {-1.80225, 7.09229, -4.11628}, {-2.59424, 10.0122, -5.12889}, {-2.71729, 7.72803, -5.12887}, {4.80078, 9.38037, -5.12886}, {1.86377, 10.8223, -5.12888}, {3.40967, 8.9165, -5.12887}, {-1.23193, 10.5713, 2.963}, {2.73291, 10.5991, 2.963}, {3.71777, -5.72266, -0.0239916}, {4.55566, -6.52637, -0.0239916}, {4.67822, -5.19385, -0.0239916}, {-1.01221, -10.3921, 2.963}, {0.856445, -10.6841, 2.963}, {2.76221, -10.5181, 2.963}};};
		class Land_Stodola_open { table = "Industrial"; positions[] = {{-1.69824, -2.52783, -4.10017}, {-2.69824, 1.16846, -4.10017}, {1.76855, -2.5166, -4.14227}, {1.66357, 1.46143, -4.07101}, {1.76416, 5.80664, -4.13208}, {-4.00977, 6.02344, -4.12947}, {1.76563, -5.99854, -4.13108}, {-0.407227, 3.94971, -4.10017}};};
		class Land_Stoplight01 { table = "Medical"; positions[] = {{-0.333984, 0.0341797, 1.00136e-005}};};
		class Land_Strazni_vez { table = "Military"; positions[] = {{1.53223, -1.28418, -0.652089}, {1.48291, 1.37109, 1.25363}, {-1.44873, 0.905273, 1.66343}, {-0.820313, 1.30957, 1.38663}, {-1.61279, 0.102539, 1.38656}, {-0.546387, -1.52002, 1.38656}, {0.575195, 0.472168, 1.38811}};};
		class LAND_Tav_panelak {table = "CivillianLowerClass"; positions[] = {{5.24121,-6.39453,2.77144},{6.71191,-5.43262,2.77144},{4.65625,-1.83838,2.77144},{6.69531,0.225586,2.77144},{6.54395,3.06519,2.77144},{3.40234,3.32324,2.77144},{2.61523,0.798096,2.77144},{2.7041,-4.98389,2.77144},{3.66016,-6.17651,2.77144},{-0.982422,-1.86328,2.77144},{-0.904297,4.13086,1.32864},{0.942383,-2.10474,0.0714226},{-2.56836,-1.68628,0.0714226},{-2.69531,3.42407,0.0714226},{-6.24902,3.01392,0.0714226},{-6.07227,0.556396,0.0714226},{-5.75488,-2.03857,0.0714226},{-6.66406,-4.34497,0.0714226},{-5.49219,-6.70581,0.0714226},{-2.41602,-4.19434,0.0714226},{-3.70801,-6.17212,0.0714226}};}; 
		class LAND_Tav_Panelak2 {table = "CivillianLowerClass"; positions[] = {{2.7627,-5.62524,5.43665},{2.63867,-0.156494,5.43665},{3.4873,2.76855,5.43665},{6.06152,3.64966,5.43665},{6.70996,0.734619,5.43665},{4.71875,-1.69263,5.43665},{-0.347656,-2.23315,5.43665},{0.814453,-1.73901,2.71097},{-0.545898,-2.29468,2.71097},{-0.415039,4.25122,1.32864},{0.75,-2.01318,0.0714264},{0.644531,-1.86401,-2.62859}};}; 
		class LAND_Tav_Panelak3 {table = "CivillianLowerClass"; positions[] = {{0.0878906,0.793457,-10.8154},{-0.810547,3.44824,-10.8154}};}; 
		class Land_TBox_F { table = "VehicleService"; positions[] = {{-1.06494, -1.37207, -1.70685}};};
		class Land_Telek1 { table = "Industrial"; positions[] = {{-1.43311, 1.56348, -7.48509}, {-1.43652, -1.62061, -7.48509}, {0.296387, -0.0791016, -7.48509}};};
		class Land_TentHangar_V1_F { table = "Military"; positions[] = {{5.8485, -5.69369, -4.08997}, {2.00532, -0.081728, -4.08997}, {-1.86069, -7.25782, -4.08997}, {-5.20414, -2.3871, -4.08996}, {-5.37564, 3.97035, -4.08997}, {0.396674, 7.40093, -4.08996}, {6.92779, 4.61108, -4.18584}};};
		class Land_Tovarna1 { table = "Industrial"; positions[] = {{-1.58008, -8.16553, -5.78086}, {-7.3208, -7.71973, -5.78086}, {-8.38721, -3.58691, -5.78086}, {-6.13232, 0.00292969, -5.78086}, {2.88525, 0.282227, -5.78086}, {3.36865, -7.23535, -5.78086}, {-10.0503, 1.52637, -5.78086}, {-9.42871, 5.5083, -5.78086}, {-3.55566, 5.71826, -5.78086}, {1.7373, 5.45264, -5.78086}, {-9.21777, -3.45557, -2.83723}, {-9.28418, -7.93555, -0.346546}, {-11.395, 1.28223, -0.346545}, {-0.158691, -7.87158, -0.346546}, {-2.10059, 5.12158, -0.346546}, {5.29443, 2.46143, -0.346545}, {-9.44385, -0.41748, 2.15934}, {-4.41064, -1.57959, 2.27309}, {-4.02832, 3.33789, 2.15353}, {-9.55273, -7.86816, 2.15353}, {2.35938, -7.13672, 2.15354}, {3.08447, -2.16895, 2.30305}, {-1.05957, -1.76221, 4.81585}, {1.06396, -2.81104, 4.80337}, {3.14941, -8.1084, 5.41551}, {-11.272, -7.90137, 5.16765}, {2.75391, 2.14014, 5.06198}};};
		class Land_Tovarna2 { table = "Industrial"; positions[] = {{-4.99364, 4.80247, -5.58576}, {-11.5757, 7.40232, -5.58576}, {-6.53746, 0.91345, -5.3409}, {-9.60908, -5.51223, -5.59192}, {-0.0759945, 7.38018, -5.58576}, {5.5221, -7.35322, -4.64526}, {8.8795, 0.783406, -4.64236}, {4.31193, 5.40513, -4.43765}, {4.31295, 5.40528, -4.64619}, {2.17573, -8.96995, 3.39792}, {-13.0371, -9.0233, 3.39787}, {-13.0406, 0.32589, 3.39786}, {-6.73093, -4.05276, 6.6445}, {-10.8653, -7.85571, 6.65506}, {-11.5938, 8.6207, 6.65506}, {-0.144367, -7.68637, 6.65506}, {1.9305, 8.289, 6.65506}, {-0.00387061, 4.08889, 6.65506}, {-2.9328, 0.338876, 3.50047}, {-4.12367, 2.68749, 3.23636}, {-7.1601, 1.72537, 1.7225}, {-6.68499, 3.13983, 1.629}, {-12.0652, 1.72286, -2.25779}, {-4.07922, 3.01616, -3.92311}, {-4.46022, 1.72742, -0.388321}, {-6.68478, 3.13868, 1.83759}, {-4.01532, 8.86599, 1.59529}, {-3.99942, 9.06695, -2.258}, {-10.6416, 8.01229, -2.25779}, {-9.57227, 6.72311, 1.64017}, {2.20573, -0.818918, 0.642426}, {2.15642, 8.77939, 0.398041}, {-13.0463, 0.386892, 0.398056}, {-0.541277, -8.96535, 0.397858}, {-13.0371, -9.02344, 0.397827}, {-0.810846, 0.898218, -5.62083}, {-11.9892, 1.92976, -5.61076}, {-12.384, -6.36755, -5.61076}, {-6.14555, 0.00724745, -5.61076}, {-2.35966, 3.86032, -5.61076}, {-8.35353, 6.02264, -5.61076}, {-11.3239, 4.59372, -2.28953}, {-6.11001, 7.18898, -2.30893}, {-4.32176, 5.20085, -2.30893}, {-12.6857, 7.2763, 1.60611}, {-12.3795, 2.47971, 1.60382}, {-10.4794, 3.99887, 1.58961}, {-4.36629, 5.17917, 1.5703}, {-6.87851, 7.91918, 1.5703}, {-4.56417, -1.8658, 6.41133}, {-6.29115, -0.432781, 6.27849}};};
		class Land_u_Addon_01_V1_F { table = "CivillianLowerClass"; positions[] = {{1.69727, 3.04102, 0.0627024}, {4.28125, 1.1543, 0.0627022}}; }; 
		class Land_u_Addon_02_V1_F { table = "CivillianLowerClass"; positions[] = {{0.109863, 1.58691, 0.0524373}, {2.90283, 3.31836, 0.0524373}, {2.69482, 1.73047, 0.143331}, {-1.36816, 3.51025, 0.0716987}, {-1.35107, 0.150391, 0.0716987}, {-2.19287, 1.94385, 0.0524373}};};
		class Land_u_Barracks_V2_F { table = "Military"; positions[] = {{9.75244, -1.66211, 1.43508}, {9.70215, -1.77148, -1.89791}, {-5.31592, -2.94531, -1.89791}, {-16.0903, 1.21094, -1.8979}, {6.95557, 4.13867, -1.89791}, {-14.6865, -2.08008, -1.89791}, {-3.89746, 3.95898, -1.89791}, {0.0639648, -2.16406, 1.43507}, {2.74951, 4.44336, 1.43507}, {2.84521, 4.22461, -1.89791}, {-12.3584, 4.30469, 1.43508}, {-12.1733, 4.46875, -1.89791}, {-16.123, 1.125, 1.43507}, {0.137695, -1.90625, -1.89791}, {-14.585, -1.94336, 1.43508}, {-5.88818, -3.99609, 1.43507}, {-3.96143, 4.37109, 1.43508}, {6.89014, 4.32227, 1.43507}}; }; 
		class Land_u_House_Big_01_V1_F { table = "CivillianLowerClass"; positions[] = {{-1.89648, 6.0332, 0.855065}, {-2.35742, 5.4082, -2.56494}, {-2.89648, -3.33203, 0.855065}, {-3.0957, -0.896484, -2.65494}, {1.25, -1.31445, -2.56494}, {2.0293, -0.521484, 0.855065}, {2.36523, 5.47461, -2.56493}, {2.95117, 5.49609, 0.855065}, {2.99023, -5.02734, 0.855065}, {3.58789, -4.98828, -2.56494}}; }; 
		class Land_u_House_Big_02_V1_F { table = "CivillianLowerClass"; positions[] = {{-2.43164, 2.83008, 0.965823}, {-2.70703, -2.07422, 0.965824}, {-2.88281, 1.88086, -2.54418}, {0.871094, -1.66016, -2.54418}, {2.41602, 3.00977, 0.965824}, {3.66992, -5.79883, -2.10418}, {3.9082, 3.56055, -2.54418}}; }; 
		class Land_u_House_Small_01_V1_F { table = "CivillianLowerClass"; positions[] = {{-1.18359, 3.63281, -0.904629}, {-1.7793, -2.59961, -0.903945}, {3.25195, 3.44531, -0.904572}}; }; 
		class Land_u_House_Small_02_V1_F { table = "CivillianLowerClass"; positions[] = {{-0.916016, -2.17969, -0.71971}, {-1.49609, 0.962891, -0.714579}, {3.83203, 1.15234, -0.713537}, {5.80469, -1.7207, -0.710968}}; }; 
		class Land_u_Shed_Ind_F { table = "Industrial"; positions[] = {{-7.65479, 0.241211, -1.43506}, {-7.75732, 4.19287, -1.43506}, {1.06934, 2.74219, -1.43506}, {-3.4541, -0.178711, -1.43506}, {-6.12256, 6.41748, -1.43506}, {5.40771, 4.77588, -1.43506}, {4.87744, -0.03125, -1.43506}, {10.5137, 1.29004, -1.43506}, {14.2886, 2.59717, -1.43506}, {14.6465, -0.995605, -1.43506}};};
		class Land_u_Shop_01_V1_dam_F { table = "CivillianLowerClass"; positions[] = {{2.6583, 3.44451, -2.57573}, {-3.08071, 3.73926, -2.90727}, {-1.83109, 5.00247, -2.90727}, {-1.56921, -1.53442, -2.90727}, {0.425948, 3.16215, -2.90728}, {2.50618, 0.233043, -1.68973}, {0.796767, 0.977123, 0.963654}, {-1.71131, -4.54672, 0.934601}, {-3.07994, -3.09692, 0.964577}, {1.85235, -4.41601, 0.934601}, {-3.72791, 0.483372, -2.90289}, {2.68386, 5.12916, 0.969742}, {-3.36534, 5.00771, 0.966942}, {-0.799175, -1.07196, 0.968994}, {-2.93866, 2.51426, 0.968994}};};
		class Land_u_Shop_01_V1_F { table = "CivillianLowerClass"; positions[] = {{0.359375, 1.51807, -2.90288}, {3.15674, 4.479, -2.5758}, {-2.58252, 4.77344, -2.90728}, {-1.33252, 6.03662, -2.90728}, {-1.0708, -0.5, -2.90727}, {0.924316, 4.19629, -2.90728}, {3.04102, -0.237793, -2.67593}, {1.27832, 1.99805, 0.963211}, {-1.21289, -3.51025, 0.934602}, {-2.58154, -2.0625, 0.964525}, {2.34326, -3.38672, 0.934601}, {2.72852, 6.4292, 0.969741}, {-2.17725, 6.0376, 0.968991}, {-0.705566, 0.368164, 0.968997}, {-2.77002, 3.62598, 0.968994}};};
		class Land_u_Shop_02_V1_F { table = "Shop"; positions[] = {{-3.46484, -1.625, 1.23859}, {-3.9082, 3.0957, -2.66855}, {0.751953, -3.26563, -2.66855}, {1.71484, 0.486328, 1.23859}}; }; 
		class Land_Unfinished_Building_01_F { table = "Industrial"; positions[] = {{2.35352, -1.74805, -2.32354}, {2.92676, 2.02393, -2.32354}, {-3.27734, -1.33301, -2.32354}, {-3.37598, 4.11963, -2.32354}, {-2.86426, 5.50342, 1.09662}, {-1.97852, -2.71875, 1.22307}, {0.160156, 0.344727, 1.17147}, {3.86377, -4.68213, 1.17147}, {0.0922852, 3.93652, 4.46878}, {-4.2627, 4.5752, 4.46878}, {3.86523, 0.966797, 1.17147}};};
		class Land_Unfinished_Building_02_F { table = "Industrial"; positions[] = {{5.47298, 3.91, -2.64027}, {2.84337, 1.45847, -2.64027}, {-0.527355, 3.17459, -2.64027}, {-0.135832, -1.28949, -2.64027}, {-2.30194, -5.29667, -2.75528}, {-4.68707, -1.1016, -2.64027}, {-6.6491, 3.09574, -2.64027}, {-4.78092, 2.67914, -2.64027}, {-2.27667, -0.672003, 0.889191}, {-0.248064, 4.02733, 0.893547}, {0.237044, -4.31413, 0.841232}, {-2.47584, -4.52584, 0.782394}, {-6.51759, -2.72988, 0.893089}, {-7.31088, 4.441, 0.895493}, {-4.82412, 2.55714, 0.894241}, {-4.41451, -1.40311, 0.890862}, {4.66936, -2.34225, 0.888054}, {2.58532, 3.40165, 0.894897}, {7.66537, 1.73647, 0.789696}, {7.74353, -2.04428, 0.789284}, {4.2922, 0.568838, 0.892067}};};
		class Land_UWreck_Heli_Attack_02_F { table = "Military"; positions[] = {{-1.17383, 8.0918, -2.79785}, {2.92285, -9.17188, -2.77692}, {3.7041, 0.40918, -2.84418}, {-0.260742, -9.69434, -2.67627}, {2.69434, 7.49609, -2.72632}, {1.69922, 10.1006, -2.71313}, {6.04102, 1.19434, -2.90607}, {4.15332, -3.63574, -2.86328}, {0.224609, 4.14941, -2.80768}, {-1.55957, 1.5957, -2.79156}, {-3.49121, 5.05664, -2.82739}, {2.37891, -5.42676, -2.78564}, {-4.07129, -2.78711, -2.71198}, {-1.16895, -6.24023, -2.71613}, {6.19141, -1.70313, -2.93707}, {2.27148, 3.82129, -2.76392}, {-0.84082, -0.824219, -2.7915}, {-4.71973, 1.80469, -2.78058}, {2.14648, -1.65723, -2.79163}}; };
		class Land_vez { table = "Military"; positions[] = {{-0.0585938,1.51367,1.36331}};}; 
		class Land_Vez_Silo{ table = "Industrial"; positions[] = {{-2.146, -2.03027, -20.9858}, {0.999023, -1.48926, -20.9858}, {-2.13818, 2.75, -20.9858} };};
		class LAND_vokzal_big { table = "CivillianLowerClass"; positions[] = {{7.28613,-0.216797,-7.96283},{6.84961,2.56152,-7.96283},{6.9834,-4.98047,-7.96283},{-7.07227,1.28223,-7.96283}};}; 
		class Land_wagon_box{ table = "CivillianLowerClass"; positions[] = {{-0.109375, 1.81445, -0.778046}, {0.503418, 0.226563, -0.778076}, {0.242676, -1.95508, -0.778107}, {1.29541, -5.2627, -1.86343}, {0.339844, -2.57617, -1.86343}, {0.440918, 4.12988, -1.86343} };};
		class Land_Watertower1 { table = "Tourist"; positions[] = {{4.2697, -3.76508, 5.2254}, {1.96925, -5.99474, 5.2254}, {-1.68777, -6.89989, 5.2254}, {-5.92639, -4.97024, 5.2254}, {-7.93575, 0.203899, 5.2254}, {-5.87884, 4.66427, 5.2254}, {-2.05236, 6.80492, 5.2254}, {2.19256, 5.799, 5.2254}, {5.40171, 2.04533, 5.2254}, {1.93675, -0.55221, -9.28473}, {-2.40009, -3.02532, -9.28473}, {-3.32029, 3.48146, -9.28473}};};
		class Land_WIP_F { table = "Industrial"; positions[] = {{-10.0645, -4.58398, 8.3499}, {-12.5254, 10.1191, 8.348}, {-13.3496, 9.04883, 12.3173}, {-14.3477, -2.64844, 0.392311}, {-15.1621, 9.90039, 0.407514}, {-15.9004, -9.26367, 12.3304}, {-16.0352, -2.52734, 4.32572}, {-16.0996, 4.24023, 0.444829}, {-16.4004, 8.88672, 4.32572}, {-16.7813, -8.80078, 0.347982}, {-17.0195, -8.72852, 4.32572}, {-3.60156, -14.6484, 4.32041}, {-4.18359, -1.03516, 0.386505}, {-6.93359, -0.988281, 12.1457}, {-7.66016, 9.24414, 0.417827}, {-7.77344, -10.4785, 0.359629}, {-8.33008, -14.7305, 12.3244}, {-8.73242, 9.51953, 4.32572}, {-8.88867, -13.3887, 0.355543}, {11.9922, -7.99219, 12.2546}, {12.9023, 9.91797, 0.448912}, {18.0801, -9.25781, 4.32428}, {19.5586, -7.8457, 8.33803}, {2.11719, 9.48438, 0.337147}, {20.6309, -9.31445, 0.329187}, {22.334, -2.5332, 4.32572}, {24.0859, -0.179688, 8.29181}, {3.30859, 6.66602, 8.36808}, {3.99219, -8.87891, 8.34295}, {4.74414, -8.89063, 4.32432}, {6.0332, -8.34961, 0.384681}, {7.08984, 10.4727, 4.32572}, {8.53906, 8.4082, 0.415831}, {9.10742, -1.40625, 0.431863}, {9.64844, 6.28906, 12.3112}}; }; 
		class Land_Wreck_Heli_Attack_01_F { table = "Military"; positions[] = {{4.70996, 0.0126953, -1.30374}, {6.44922, -0.716797, -1.34763}, {-4.12793, -1.82129, -1.21921}, {4.33301, -3.32129, -1.29483}, {-4.82617, -5.78906, -1.15488}, {5.58203, -6.82031, -1.32773}, {-1.6748, 2.70801, -1.03955}, {-4.12598, 8.37305, -1.3215}, {-3.43359, 1.23633, -1.25858}, {-3.50098, -9.40137, -1.09824}, {1.76855, 9.11621, -1.22073}, {-0.423828, -12.4766, -1.08585}, {3.20215, 1.78516, -1.25568}, {2.43164, -10.0293, -1.19006}, {4.36133, 4.94922, -1.25189}, {-0.0927734, 5.94727, -1.21329}}; };
		class Land_Wreck_HMMWV_F { table = "Military"; positions[] = {{4.0293, -0.556641, -0.833923}, {2.08008, -2.91992, -0.816956}, {0.713867, -5.54102, -0.7911}, {4.27344, 2.7334, -0.831413}, {-5.53906, -0.682617, -0.757545}, {-4.62891, 3.81836, -0.818192}, {1.91211, 0.854492, -0.826019}, {-2.31934, -4.2959, -0.756771}, {5.00488, -5.05762, -0.853081}, {-2.9082, -1.99023, -0.773548}, {-3.7666, 1.06934, -0.796432}, {-1.55176, 3.86621, -0.827766}, {1.43848, 4.16211, -0.828751}, {0.566406, 6.57813, -0.832043}, {-5.15918, -4.12695, -0.707153}}; };
		class LAND_Zachytka {table = "CivillianLowerClass"; positions[] = {{3.79492,-4.12891,-2.02697},{-4.92285,-6.8584,-2.02697},{-3.6543,-6.7002,-2.02697},{-2.60449,-6.87891,-2.02697},{-1.82422,0.0361328,-2.02697},{-6.2832,-4.51074,-2.02697},{-3.60547,5.1875,-2.02697},{4.42188,11.2158,-2.02697}};}; 
		class MASH {table = "Medical"; positions[] = {{1.18213,-1.65039,-1.17793},{0.24707,0.799316,-1.17803}};};
		class USMC_WarfareBFieldhHospital { table = "Medical"; positions[] = {{-3.52246,-5.03931,1.14726},{2.36621,-4.52295,1.14786},{1.39063,-0.423096,1.14746},{1.14258,5.00952,1.1478},{3.7124,1.89795,1.14788}};};
	};
};

class CfgExtremoToasts
{
	class InfoEmpty
	{
		template="%1";
		color[]={0.24699999,0.83099997,0.98799998,1};
	};
	class InfoTitleOnly
	{
		template="<t size='22' font='PuristaMedium'>%1</t>";
		color[]={0.24699999,0.83099997,0.98799998,1};
	};
	class InfoTitleAndText
	{
		template="<t size='22' font='PuristaMedium'>%1</t><br/><t color='#ff979ba1' size='19' font='PuristaLight'>%2</t>";
		color[]={0.24699999,0.83099997,0.98799998,1};
	};
	class SuccessEmpty
	{
		template="%1";
		color[]={0.62699997,0.87400001,0.23100001,1};
	};
	class SuccessTitleOnly
	{
		template="<t size='22' font='PuristaMedium'>%1</t>";
		color[]={0.62699997,0.87400001,0.23100001,1};
	};
	class SuccessTitleAndText
	{
		template="<t size='22' font='PuristaMedium'>%1</t><br/><t color='#ff979ba1' size='19' font='PuristaLight'>%2</t>";
		color[]={0.62699997,0.87400001,0.23100001,1};
	};
	class ErrorEmpty
	{
		template="%1";
		color[]={0.77999997,0.149,0.31799999,1};
	};
	class ErrorTitleOnly
	{
		template="<t size='22' font='PuristaMedium'>%1</t>";
		color[]={0.77999997,0.149,0.31799999,1};
	};
	class ErrorTitleAndText
	{
		template="<t size='22' font='PuristaMedium'>%1</t><br/><t color='#ff979ba1' size='19' font='PuristaLight'>%2</t>";
		color[]={0.77999997,0.149,0.31799999,1};
	};
	class WarningEmpty
	{
		template="%1";
		color[]={0.87099999,0.796,0.227,1};
	};
	class WarningTitleOnly
	{
		template="<t size='22' font='PuristaMedium'>%1</t>";
		color[]={0.87099999,0.796,0.227,1};
	};
	class WarningTitleAndText
	{
		template="<t size='22' font='PuristaMedium'>%1</t><br/><t color='#ff979ba1' size='19' font='PuristaLight'>%2</t>";
		color[]={0.87099999,0.796,0.227,1};
	};
};
class CfgFlagsNative
{
	class BI
	{
		name="Bohemia Interactive";
		texture="Extremo_Assets\texture\flag\flag_mate_bis_co.paa";
		uids[]={"76561197977933359","76561197968664825","76561198003485468","76561198050098256","76561198007169107","76561197971697870","76561198085333695","76561197991855773"};
	};
	class Vish
	{
		name="Vish";
		texture="Extremo_Assets\texture\flag\flag_mate_vish_co.paa";
		uids[]={"76561198075905447"};
	};
	class Hollow
	{
		name="Hollow";
		texture="Extremo_Assets\texture\flag\flag_mate_hollow_co.paa";
		uids[]={"76561198182951970"};
	};
	class Legion
	{
		name="Legion";
		texture="Extremo_Assets\texture\flag\flag_mate_legion_ca.paa";
		uids[]={"76561198010969041","76561198124983829","76561198094881952","76561198111208683","76561198015966307","76561198078247060","76561198034836765","76561197998832240","76561197970701357","76561198123330495"};
	};
	class DogesOfMassDestruction
	{
		name="21 DMD";
		texture="Extremo_Assets\texture\flag\flag_mate_21dmd_co.paa";
		uids[]={"76561198021615590"};
	};
	class Spawny
	{
		name="sp4wny";
		texture="Extremo_Assets\texture\flag\flag_mate_spawny_co.paa";
		uids[]={"76561197960452768"};
	};
	class Tomms
	{
		name="Tomms";
		texture="Extremo_Assets\texture\flag\flag_mate_secretone_co.paa";
		uids[]={"76561198003041335"};
	};
	class StitchMoonz
	{
		name="StitchMoonz";
		texture="Extremo_Assets\texture\flag\flag_mate_stitchmoonz_co.paa";
		uids[]={"76561198112458056"};
	};
	class CommanderMalc
	{
		name="CommanderMalc";
		texture="Extremo_Assets\texture\flag\flag_mate_commandermalc_co.paa";
		uids[]={"76561197998522808"};
	};
	class Blue
	{
		name="Blue";
		texture="\A3\Data_F\Flags\flag_blue_co.paa";
		uids[]={};
	};
	class Green
	{
		name="Green";
		texture="\A3\Data_F\Flags\flag_green_co.paa";
		uids[]={};
	};
	class Red
	{
		name="Red";
		texture="\A3\Data_F\Flags\flag_red_co.paa";
		uids[]={};
	};
	class White
	{
		name="White";
		texture="\A3\Data_F\Flags\flag_white_co.paa";
		uids[]={};
	};
	class CountryUK
	{
		name="United Kingdom";
		texture="\A3\Data_F\Flags\flag_uk_co.paa";
		uids[]={};
	};
	class CountryDE
	{
		name="Germany";
		texture="Extremo_Assets\texture\flag\flag_country_de_co.paa";
		uids[]={};
	};
	class CountryAT
	{
		name="Austria";
		texture="Extremo_Assets\texture\flag\flag_country_at_co.paa";
		uids[]={};
	};
	class CountrySCT
	{
		name="Scotland";
		texture="Extremo_Assets\texture\flag\flag_country_sct_co.paa";
		uids[]={};
	};
	class CountryEE
	{
		name="Estonia";
		texture="Extremo_Assets\texture\flag\flag_country_ee_co.paa";
		uids[]={};
	};
	class CountryCZ
	{
		name="Czech Republic";
		texture="Extremo_Assets\texture\flag\flag_country_cz_co.paa";
		uids[]={};
	};
	class CountryNL
	{
		name="The Netherlands";
		texture="Extremo_Assets\texture\flag\flag_country_nl_co.paa";
		uids[]={};
	};
	class CountryHR
	{
		name="Croatia";
		texture="Extremo_Assets\texture\flag\flag_country_hr_co.paa";
		uids[]={};
	};
	class CountryCN
	{
		name="Canada";
		texture="Extremo_Assets\texture\flag\flag_country_cn_co.paa";
		uids[]={};
	};
	class CountryRU
	{
		name="Russia";
		texture="Extremo_Assets\texture\flag\flag_country_ru_co.paa";
		uids[]={};
	};
	class CountryIR
	{
		name="Ireland";
		texture="Extremo_Assets\texture\flag\flag_country_ir_co.paa";
		uids[]={};
	};
	class CountryBY
	{
		name="Belarus";
		texture="Extremo_Assets\texture\flag\flag_country_by_co.paa";
		uids[]={};
	};
	class CountryFI
	{
		name="Finland";
		texture="Extremo_Assets\texture\flag\flag_country_fi_co.paa";
		uids[]={};
	};
	class CountryFR
	{
		name="France";
		texture="Extremo_Assets\texture\flag\flag_country_fr_co.paa";
		uids[]={};
	};
	class CountryAU
	{
		name="Australia";
		texture="Extremo_Assets\texture\flag\flag_country_au_co.paa";
		uids[]={};
	};
	class CountryBE
	{
		name="Belgium";
		texture="Extremo_Assets\texture\flag\flag_country_be_co.paa";
		uids[]={};
	};
	class CountrySE
	{
		name="Sweden";
		texture="Extremo_Assets\texture\flag\flag_country_se_co.paa";
		uids[]={};
	};
	class CountryPL
	{
		name="Poland";
		texture="Extremo_Assets\texture\flag\flag_country_pl_co.paa";
		uids[]={};
	};
	class CountryPL2
	{
		name="Poland 2";
		texture="Extremo_Assets\texture\flag\flag_country_pl2_co.paa";
		uids[]={};
	};
	class CountryPT
	{
		name="Portugal";
		texture="Extremo_Assets\texture\flag\flag_country_pt_co.paa";
		uids[]={};
	};
	class Zand3rs
	{
		name="Zand3rs";
		texture="Extremo_Assets\texture\flag\flag_mate_zanders_streched_co.paa";
		uids[]={};
	};
	class Brunswik
	{
		name="Brunswik";
		texture="Extremo_Assets\texture\flag\flag_misc_brunswik_co.paa";
		uids[]={};
	};
	class Dorset
	{
		name="Dorset";
		texture="Extremo_Assets\texture\flag\flag_misc_dorset_co.paa";
		uids[]={};
	};
	class Svarog
	{
		name="Children of Svarog";
		texture="Extremo_Assets\texture\flag\flag_misc_svarog_co.paa";
		uids[]={};
	};
	class Extremo
	{
		name="Extremo";
		texture="Extremo_Assets\texture\flag\flag_misc_Extremo_co.paa";
		uids[]={};
	};
	class UTcity
	{
		name="UTcity";
		texture="Extremo_Assets\texture\flag\flag_misc_utcity_co.paa";
		uids[]={};
	};
	class Dickbutt
	{
		name="Dickbut";
		texture="Extremo_Assets\texture\flag\flag_misc_dickbutt_co.paa";
		uids[]={};
	};
	class Rainbow
	{
		name="Rainbow";
		texture="Extremo_Assets\texture\flag\flag_misc_rainbow_co.paa";
		uids[]={};
	};
	class BattlEye
	{
		name="BattlEye";
		texture="Extremo_Assets\texture\flag\flag_misc_battleye_co.paa";
		uids[]={};
	};
	class BSS
	{
		name="Bluescreen Simulator";
		texture="Extremo_Assets\texture\flag\flag_misc_bss_co.paa";
		uids[]={};
	};
	class Skippy
	{
		name="Skippy";
		texture="Extremo_Assets\texture\flag\flag_misc_skippy_co.paa";
		uids[]={};
	};
	class KiwiFern
	{
		name="Silver Fern";
		texture="Extremo_Assets\texture\flag\flag_misc_kiwifern_co.paa";
		uids[]={};
	};
	class Trololol
	{
		name="Trololol";
		texture="Extremo_Assets\texture\flag\flag_misc_trololol_co.paa";
		uids[]={};
	};
	class DreamCat
	{
		name="Dream Cat";
		texture="Extremo_Assets\texture\flag\flag_misc_dream_cat_co.paa";
		uids[]={};
	};
	class Pirate
	{
		name="Pirate";
		texture="Extremo_Assets\texture\flag\flag_misc_pirate_co.paa";
		uids[]={};
	};
	class Pedobear
	{
		name="Pedobear";
		texture="Extremo_Assets\texture\flag\flag_misc_pedobear_co.paa";
		uids[]={};
	};
	class Petoria
	{
		name="Petoria";
		texture="Extremo_Assets\texture\flag\flag_misc_petoria_co.paa";
		uids[]={};
	};
	class Smashing
	{
		name="Smashing";
		texture="Extremo_Assets\texture\flag\flag_misc_smashing_co.paa";
		uids[]={};
	};
	class LemonParty
	{
		name="Lemon Party";
		texture="Extremo_Assets\texture\flag\flag_misc_lemonparty_co.paa";
		uids[]={};
	};
	class RMA
	{
		name="Respect my autoritah!";
		texture="Extremo_Assets\texture\flag\flag_misc_rma_co.paa";
		uids[]={};
	};
	class CP
	{
		name="ClarkyCallad";
		texture="Extremo_Assets\texture\flag\flag_cp_co.paa";
		uids[]={};
	};
	class Trouble2_NA
	{
		name="Trouble2";
		texture="Extremo_Assets\texture\flag\flag_trouble2_co.paa";
		uids[]={};
	};
	class ExtremoCity
	{
		name="Extremo City";
		texture="Extremo_Assets\texture\flag\flag_Extremo_city_co.paa";
		uids[]={};
	};
	class Eraser1
	{
		name="eraser1";
		texture="Extremo_Assets\texture\flag\flag_misc_eraser1_co.paa";
		uids[]={};
	};
	class Trespassers
	{
		name="Trespassers will be eaten";
		texture="Extremo_Assets\texture\flag\flag_misc_willbeeaten_co.paa";
		uids[]={};
	};
	class PrivateProperty
	{
		name="Private Property";
		texture="Extremo_Assets\texture\flag\flag_misc_privateproperty_co.paa";
		uids[]={};
	};
	class NuCoolR
	{
		name="Nu Cool R";
		texture="Extremo_Assets\texture\flag\flag_misc_nuclear_co.paa";
		uids[]={};
	};
	class LazerKiwi
	{
		name="Lazer Kiwi";
		texture="Extremo_Assets\texture\flag\flag_misc_lazerkiwi_co.paa";
		uids[]={};
	};
	class Beardageddon
	{
		name="Beardageddon";
		texture="Extremo_Assets\texture\flag\flag_misc_beardageddon_co.paa";
		uids[]={};
	};
	class CountryDK
	{
		name="Denmark";
		texture="Extremo_Assets\texture\flag\flag_country_dk_co.paa";
		uids[]={};
	};
	class CountryIT
	{
		name="Italy";
		texture="Extremo_Assets\texture\flag\flag_country_it_co.paa";
		uids[]={};
	};
	class Alkohol
	{
		name="Alkohol";
		texture="Extremo_Assets\texture\flag\flag_misc_alkohol_co.paa";
		uids[]={};
	};
	class Kickass
	{
		name="Fort Kickass";
		texture="Extremo_Assets\texture\flag\flag_misc_kickass_co.paa";
		uids[]={};
	};
	class Knuckles
	{
		name="Da Wae?";
		texture="Extremo_Assets\texture\flag\flag_misc_knuckles_co.paa";
		uids[]={};
	};
	class Snake
	{
		name="Don't Tread on Me";
		texture="Extremo_Assets\texture\flag\flag_misc_snake_co.paa";
		uids[]={};
	};
	class WeebCity
	{
		name="Weeb City";
		texture="Extremo_Assets\texture\flag\flag_misc_weeb_co.paa";
		uids[]={};
	};
};
class CfgGlasses
{
	class G_I_Diving;
	class G_O_Diving;
	class G_B_Diving;
	class Extremo_Glasses_Diving_AAF: G_I_Diving
	{
		scope=2;
		author="Nikko Renolds";
		displayName="Diving Goggles (AAF, Forced)";
		mode=0;
	};
	class Extremo_Glasses_Diving_CSAT: G_O_Diving
	{
		scope=2;
		author="Nikko Renolds";
		displayName="Diving Goggles (CSAT, Forced)";
		mode=0;
	};
	class Extremo_Glasses_Diving_NATO: G_B_Diving
	{
		scope=2;
		author="Nikko Renolds";
		displayName="Diving Goggles (NATO, Forced)";
		mode=0;
	};
};
class CfgInventoryGlobalVariable
{
	maxSoldierLoad=1700;
};
class CfgLocationTypes
{
	class Name;
	class ExtremoTerritory: Name
	{
		color[]={0.91000003,0,0,1};
		drawStyle="name";
		font="PuristaMedium";
		name="Extremo Territory";
		textSize=0.050000001;
		size=15;
	};
};
class CfgMarkerClasses
{
	class ExtremoEvents
	{
		displayName="Extremo Events";
	};
	class ExtremoNonConstructionZone
	{
		displayName="Extremo Non-Construction Zone";
	};
	class ExtremoSpawnZone
	{
		displayName="Extremo Spawn Zone";
	};
	class ExtremoSpawnZoneIcon
	{
		displayName="Extremo Spawn Zone Icon";
	};
	class ExtremoTraderZone
	{
		displayName="Extremo Trader Zone";
	};
	class ExtremoTraderZoneIcon
	{
		displayName="Extremo Trader Zone Icon";
	};
	class ExtremoContaminatedZone
	{
		displayName="Extremo Contaminated Zone";
	};
	class ExtremoContaminatedZoneIcon
	{
		displayName="Extremo Contaminated Zone Icon";
	};
	class ExtremoConcreteMixerZone
	{
		displayName="Extremo Concrete Mixer Zone";
	};
	class ExtremoConcreteMixerZoneIcon
	{
		displayName="Extremo Concrete Mixer Zone Icon";
	};
	class ExtremoPlayer
	{
		displayName="Extremo Player";
	};
	class ExtremoLandVehicleSpawn
	{
		displayName="Extremo Land Vehicle Spawn";
	};
	class ExtremoAirVehicleSpawn
	{
		displayName="Extremo Air Vehicle Spawn";
	};
	class ExtremoSeaVehicleSpawn
	{
		displayName="Extremo Sea Vehicle Spawn";
	};
	class ExtremoRussianRouletteIcon
	{
		displayName="Extremo Russian Roulette Icon";
	};
	class ExtremoSpecOpsTraderIcon
	{
		displayName="Extremo Spec Ops Trader Icon";
	};
	class ExtremoAircraftTraderIcon
	{
		displayName="Extremo Aircraft Trader Icon";
	};
	class ExtremoBoatTraderIcon
	{
		displayName="Extremo Boat Trader Icon";
	};
	class ExtremoDiversTraderIcon
	{
		displayName="Extremo Divers Trader Icon";
	};
	class ExtremoHackingIcon
	{
		displayName="Extremo Hacking Icon";
	};
	class ExtremoVehicleIcon
	{
		displayName="Extremo Vehicle Icon";
	};
};
class CfgMarkers
{
	class ExtremoMissionHardcoreIcon
	{
		scope=2;
		name="Extremo Mission Icon (Hardcore)";
		icon="Extremo_Assets\texture\marker\mission_hardcore_ca.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		markerClass="ExtremoEvents";
		showEditorMarkerColor=0;
	};
	class ExtremoMissionModerateIcon
	{
		scope=2;
		name="Extremo Mission Icon (Moderate)";
		icon="Extremo_Assets\texture\marker\mission_moderate_ca.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		markerClass="ExtremoEvents";
		showEditorMarkerColor=0;
	};
	class ExtremoMissionDifficultIcon
	{
		scope=2;
		name="Extremo Mission Icon (Difficult)";
		icon="Extremo_Assets\texture\marker\mission_difficult_ca.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		markerClass="ExtremoEvents";
		showEditorMarkerColor=0;
	};
	class ExtremoMissionEasyIcon
	{
		scope=2;
		name="Extremo Mission Icon (Easy)";
		icon="Extremo_Assets\texture\marker\mission_easy_ca.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		markerClass="ExtremoEvents";
		showEditorMarkerColor=0;
	};
	class ExtremoMissionCapturePointIcon
	{
		scope=2;
		name="Extremo Capture Point Icon";
		icon="Extremo_Assets\texture\marker\capture_point_ca.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		markerClass="ExtremoEvents";
		showEditorMarkerColor=0;
	};
	class ExtremoMissionStrongholdIcon
	{
		scope=2;
		name="Extremo Stronghold Icon";
		icon="Extremo_Assets\texture\marker\stronghold_ca.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		markerClass="ExtremoEvents";
		showEditorMarkerColor=0;
	};
	class ExtremoNonConstructionZone
	{
		scope=2;
		name="Extremo Non-Construction Zone";
		icon="Extremo_Assets\texture\marker\spawn_zone_ca.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		markerClass="ExtremoNonConstructionZone";
		showEditorMarkerColor=0;
	};
	class ExtremoSpawnZone
	{
		scope=2;
		name="Extremo Spawn Zone";
		icon="Extremo_Assets\texture\marker\spawn_zone_ca.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		markerClass="ExtremoSpawnZone";
		showEditorMarkerColor=0;
	};
	class ExtremoSpawnZoneIcon
	{
		scope=2;
		name="Extremo Spawn Zone Icon";
		icon="Extremo_Assets\texture\marker\spawn_zone_ca.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		markerClass="ExtremoSpawnZoneIcon";
		showEditorMarkerColor=0;
	};
	class ExtremoTraderZone
	{
		scope=2;
		name="Extremo Trader Zone";
		icon="Extremo_Assets\texture\marker\trader_zone_ca.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		markerClass="ExtremoTraderZone";
		showEditorMarkerColor=0;
	};
	class ExtremoTraderZoneIcon
	{
		scope=2;
		name="Extremo Trader Zone Icon";
		icon="Extremo_Assets\texture\marker\trader_zone_ca.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		markerClass="ExtremoTraderZoneIcon";
		showEditorMarkerColor=0;
	};
	class ExtremoPlayer
	{
		scope=2;
		name="Extremo Player";
		icon="\A3\ui_f\data\map\VehicleIcons\iconman_ca.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		markerClass="ExtremoPlayer";
		showEditorMarkerColor=0;
	};
	class ExtremoSafe
	{
		scope=2;
		name="Extremo Safe";
		icon="Extremo_Assets\texture\marker\unlocked_safe_ca.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		markerClass="ExtremoSafe";
		showEditorMarkerColor=0;
	};
	class ExtremoHeart
	{
		scope=2;
		name="Extremo Heart";
		icon="Extremo_Assets\texture\marker\supply_drop_ca.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		markerClass="ExtremoHeart";
		showEditorMarkerColor=0;
	};
	class ExtremoContaminatedZone
	{
		scope=2;
		name="Extremo Heart";
		icon="Extremo_Assets\texture\marker\contaminated_zone_ca.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		markerClass="ExtremoContaminatedZone";
		showEditorMarkerColor=0;
	};
	class ExtremoContaminatedZoneIcon
	{
		scope=2;
		name="Extremo Heart";
		icon="Extremo_Assets\texture\marker\contaminated_zone_ca.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		markerClass="ExtremoContaminatedZoneIcon";
		showEditorMarkerColor=0;
	};
	class ExtremoConcreteMixerZone
	{
		scope=2;
		name="Extremo Concrete Mixer Zone";
		icon="Extremo_Assets\texture\marker\spawn_zone_ca.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		markerClass="ExtremoConcreteMixerZone";
		showEditorMarkerColor=0;
	};
	class ExtremoConcreteMixerZoneIcon
	{
		scope=2;
		name="Extremo Concrete Mixer Zone Icon";
		icon="Extremo_Assets\texture\marker\concrete_mixer_ca.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		markerClass="ExtremoConcreteMixerZoneIcon";
		showEditorMarkerColor=0;
	};
	class ExtremoDiversTraderIcon
	{
		scope=2;
		name="Extremo Divers Trader Icon";
		icon="Extremo_Assets\texture\marker\divers_trader_ca.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		markerClass="ExtremoDiversTraderIcon";
		showEditorMarkerColor=0;
	};
	class ExtremoBoatTraderIcon
	{
		scope=2;
		name="Extremo Boat Trader Icon";
		icon="Extremo_Assets\texture\marker\boat_trader_ca.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		markerClass="ExtremoBoatTraderIcon";
		showEditorMarkerColor=0;
	};
	class ExtremoAircraftTraderIcon
	{
		scope=2;
		name="Extremo Aircraft Trader Icon";
		icon="Extremo_Assets\texture\marker\aircraft_trader_ca.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		markerClass="ExtremoAircraftTraderIcon";
		showEditorMarkerColor=0;
	};
	class ExtremoSpecOpsTraderIcon
	{
		scope=2;
		name="Extremo Spec Ops Trader Icon";
		icon="Extremo_Assets\texture\marker\spec_ops_trader_ca.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		markerClass="ExtremoSpecOpsTraderIcon";
		showEditorMarkerColor=0;
	};
	class ExtremoRussianRouletteIcon
	{
		scope=2;
		name="Extremo Russian Roulette Icon";
		icon="Extremo_Assets\texture\marker\russian_roulette_ca.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		markerClass="ExtremoRussianRouletteIcon";
		showEditorMarkerColor=0;
	};
	class ExtremoHackingIcon
	{
		scope=2;
		name="Extremo Hacking Icon";
		icon="Extremo_Assets\texture\marker\hacking_ca.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		markerClass="ExtremoHackingIcon";
		showEditorMarkerColor=0;
	};
	class ExtremoVehicleIcon
	{
		scope=2;
		name="Extremo Vehicle Icon";
		icon="Extremo_Assets\texture\marker\vehicle_ca.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		markerClass="ExtremoVehicleIcon";
		showEditorMarkerColor=0;
	};
};

class CfgPoptabStorage
{
	class Extremo_Container_Safe_Small { max = 25000; };	
};

class CfgSimulation
{
	/*
		Use Arma built in Dynamic Simulation. 
		If you have any issues with players unable to get into cars, control vehicles, fly planes, etc. try turning this off
		Options:
			0: Use Extremo's built in simulation system (Same system in 1.0.3 and below)
			1: Use Dynamic Simulation
	*/
	enableDynamicSimulation = 1;
	
	/*
		Simulation distance settings
		For more information:
			https://community.bistudio.com/wiki/setDynamicSimulationDistance
			https://community.bistudio.com/wiki/setDynamicSimulationDistanceCoef
	*/
	
	// The distance, in meters, will infantry units be simulated. Default: 500m
	groupSimulationDistance = 500;
	
	// The distance, in meters, will vehicles with crew be simulated. Default: 350m
	vehicleSimulationDistance = 250;
	
	// The distance, in meters, will all vehicles without crew be simulated. Default: 250m
	emptyVehicleSimulationDistance = 250;
	
	// The distance, in meters, will static objects be simulated. This includes anything from a small tin can to a building. Default: 50m
	propSimulationDistance = 50;
	
	// Multiplies the entity activation distance by set value if the entity is moving. Default: 2
	isMovingSimulationCoef = 2;
};

class CfgSFX
{
	class Extremo_Sfx_Flies
	{
		name="Extremo Flies";
		sounds[]=
		{
			"flies01"
		};
		flies01[]=
		{
			"\Extremo_Assets\sound\flies.ogg",
			3,
			1,
			60,
			1,
			0,
			0,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			1,
			3,
			5
		};
	};
	class Extremo_Sfx_PortableGenerator
	{
		name="Extremo Extremo_Sfx_PortableGenerator";
		sounds[]=
		{
			"noise01"
		};
		noise01[]=
		{
			"\a3\sounds_f\ambient\objects\aircontition_5.wss",
			1,
			1,
			50,
			1,
			0,
			0,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			1,
			3,
			5
		};
	};
	class Extremo_Sfx_Grinding
	{
		name="Extremo Extremo_Sfx_Grinding";
		sounds[]=
		{
			"grind01"
		};
		grind01[]=
		{
			"\Extremo_Assets\sound\Extremo_Grinding01.wss",
			1.5,
			1,
			50,
			1,
			0,
			0,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			1,
			3,
			5
		};
	};
};
class CfgTwinkleTwister
{
	chances[]=
	{
		
		{
			30,
			""
		},
		
		{
			40,
			"FreeRound"
		},
		
		{
			70,
			"GloriousKnakworst"
		},
		
		{
			80,
			"InstaDoc"
		},
		
		{
			95,
			"CookingPot"
		},
		
		{
			100,
			"Rangefinder"
		}
	};
	class Prizes
	{
		class FreeRound
		{
			name="100 Pop Tabs";
			symbol="Banana";
			color="#e4e645";
			type=0;
			prize=100;
		};
		class GloriousKnakworst
		{
			name="Glorious Knakworst";
			symbol="Strawberry";
			color="#c90d0d";
			type=1;
			prize="Extremo_Item_GloriousKnakworst";
		};
		class InstaDoc
		{
			name="InstaDoc";
			symbol="Cucumber";
			color="#9eed3f";
			type=1;
			prize="Extremo_Item_InstaDoc";
		};
		class CookingPot
		{
			name="Cooking Pot";
			symbol="Pineapple";
			color="#e4e645";
			type=1;
			prize="Extremo_Item_CookingPot";
		};
		class Rangefinder
		{
			name="Rangefinder";
			symbol="Grape";
			color="#304bef";
			type=1;
			prize="Rangefinder";
		};
	};
};
class CfgUnitInsignia
{
	class ExtremoBrunswik
	{
		author="Nikko Renolds";
		displayName="Brunswik";
		texture="\Extremo_Assets\texture\insignia\brunswik_ca.paa";
		textureVehicle="";
		scopeArsenal=2;
	};
	class Extremo
	{
		author="Nikko Renolds";
		displayName="Extremo";
		texture="\Extremo_Assets\texture\insignia\Extremo_co.paa";
		textureVehicle="";
		scopeArsenal=2;
	};
};
class CfgClanMakerIcons
{
	Icons[]=
	{
		
		{
			"Text only",
			"\A3\ui_f\data\map\markers\system\dummy_ca.paa"
		},
		
		{
			"Empty",
			"\A3\ui_f\data\map\markers\system\empty_ca.paa"
		},
		
		{
			"Objective",
			"\A3\ui_f\data\map\markers\military\objective_CA.paa"
		},
		
		{
			"Marker",
			"\A3\ui_f\data\map\markers\military\marker_CA.paa"
		},
		
		{
			"Flag",
			"\A3\ui_f\data\map\markers\military\flag_CA.paa"
		},
		
		{
			"Arrow",
			"\A3\ui_f\data\map\markers\military\arrow_CA.paa"
		},
		
		{
			"Arrow (filled)",
			"\A3\ui_f\data\map\markers\military\arrow2_CA.paa"
		},
		
		{
			"Ambush",
			"\A3\ui_f\data\map\markers\military\ambush_CA.paa"
		},
		
		{
			"Destroy",
			"\A3\ui_f\data\map\markers\military\destroy_CA.paa"
		},
		
		{
			"Start",
			"\A3\ui_f\data\map\markers\military\start_CA.paa"
		},
		
		{
			"End",
			"\A3\ui_f\data\map\markers\military\end_CA.paa"
		},
		
		{
			"Pick Up",
			"\A3\ui_f\data\map\markers\military\pickup_CA.paa"
		},
		
		{
			"Join",
			"\A3\ui_f\data\map\markers\military\join_CA.paa"
		},
		
		{
			"Warning",
			"\A3\ui_f\data\map\markers\military\warning_CA.paa"
		},
		
		{
			"Unknown",
			"\A3\ui_f\data\map\markers\military\unknown_CA.paa"
		},
		
		{
			"Circle",
			"\A3\ui_f\data\map\markers\military\circle_CA.paa"
		},
		
		{
			"Dot",
			"\A3\ui_f\data\map\markers\military\dot_CA.paa"
		},
		
		{
			"Square",
			"\A3\ui_f\data\map\markers\military\box_CA.paa"
		},
		
		{
			"Triangle",
			"\A3\ui_f\data\map\markers\military\triangle_CA.paa"
		},
		
		{
			"Select",
			"\A3\ui_f\data\igui\cfg\islandmap\iconplayer_ca.paa"
		},
		
		{
			"Waypoint",
			"\A3\ui_f\data\map\groupicons\waypoint.paa"
		},
		
		{
			"Selector - Selectable",
			"\A3\ui_f\data\map\groupicons\selector_selectable_ca.paa"
		},
		
		{
			"Selector - Selected Enemy",
			"\A3\ui_f\data\map\groupicons\selector_selectedEnemy_ca.paa"
		},
		
		{
			"Selector - Selected Friendly",
			"\A3\ui_f\data\map\groupicons\selector_selectedFriendly_ca.paa"
		},
		
		{
			"Selector - Selected Mission",
			"\A3\ui_f\data\map\groupicons\selector_selectedMission_ca.paa"
		},
		
		{
			"KIA",
			"\a3\Ui_F_Curator\Data\CfgMarkers\kia_ca.paa"
		},
		
		{
			"Minefield",
			"\a3\Ui_F_Curator\Data\CfgMarkers\minefield_ca.paa"
		},
		
		{
			"Minefield (AP)",
			"\a3\Ui_F_Curator\Data\CfgMarkers\minefieldAP_ca.paa"
		},
		
		{
			"NATO",
			"\A3\ui_f\data\map\markers\flags\nato_ca.paa"
		},
		
		{
			"CSAT",
			"\A3\ui_f\data\map\markers\flags\CSAT_ca.paa"
		},
		
		{
			"Altis Armed Forces",
			"\A3\ui_f\data\map\markers\flags\AAF_ca.paa"
		},
		
		{
			"Altis",
			"\A3\ui_f\data\map\markers\flags\Altis_ca.paa"
		},
		
		{
			"Altis (Colonial)",
			"\A3\ui_f\data\map\markers\flags\AltisColonial_ca.paa"
		},
		
		{
			"FIA",
			"\A3\ui_f\data\map\markers\flags\FIA_ca.paa"
		},
		
		{
			"European Union",
			"\A3\ui_f\data\map\markers\flags\EU_ca.paa"
		},
		
		{
			"United Nations",
			"\A3\ui_f\data\map\markers\flags\UN_ca.paa"
		},
		
		{
			"Belgium",
			"\A3\ui_f\data\map\markers\flags\Belgium_ca.paa"
		},
		
		{
			"Canada",
			"\A3\ui_f\data\map\markers\flags\Canada_ca.paa"
		},
		
		{
			"Croatia",
			"\A3\ui_f\data\map\markers\flags\Croatia_ca.paa"
		},
		
		{
			"Czech Republic",
			"\A3\ui_f\data\map\markers\flags\CzechRepublic_ca.paa"
		},
		
		{
			"Denmark",
			"\A3\ui_f\data\map\markers\flags\Denmark_ca.paa"
		},
		
		{
			"France",
			"\A3\ui_f\data\map\markers\flags\France_ca.paa"
		},
		
		{
			"Georgia",
			"\A3\ui_f\data\map\markers\flags\Georgia_ca.paa"
		},
		
		{
			"Germany",
			"\A3\ui_f\data\map\markers\flags\Germany_ca.paa"
		},
		
		{
			"Greece",
			"\A3\ui_f\data\map\markers\flags\Greece_ca.paa"
		},
		
		{
			"Hungary",
			"\A3\ui_f\data\map\markers\flags\Hungary_ca.paa"
		},
		
		{
			"Iceland",
			"\A3\ui_f\data\map\markers\flags\Iceland_ca.paa"
		},
		
		{
			"Italy",
			"\A3\ui_f\data\map\markers\flags\Italy_ca.paa"
		},
		
		{
			"Luxembourg",
			"\A3\ui_f\data\map\markers\flags\Luxembourg_ca.paa"
		},
		
		{
			"Netherlands",
			"\A3\ui_f\data\map\markers\flags\Netherlands_ca.paa"
		},
		
		{
			"Norway",
			"\A3\ui_f\data\map\markers\flags\Norway_ca.paa"
		},
		
		{
			"Poland",
			"\A3\ui_f\data\map\markers\flags\Poland_ca.paa"
		},
		
		{
			"Portugal",
			"\A3\ui_f\data\map\markers\flags\Portugal_ca.paa"
		},
		
		{
			"Slovakia",
			"\A3\ui_f\data\map\markers\flags\Slovakia_ca.paa"
		},
		
		{
			"Slovenia",
			"\A3\ui_f\data\map\markers\flags\Slovenia_ca.paa"
		},
		
		{
			"Spain",
			"\A3\ui_f\data\map\markers\flags\Spain_ca.paa"
		},
		
		{
			"UK",
			"\A3\ui_f\data\map\markers\flags\UK_ca.paa"
		},
		
		{
			"USA",
			"\A3\ui_f\data\map\markers\flags\USA_ca.paa"
		}
	};
};
class CfgCloudlets
{
	class Default;
	class Extremo_Snow_Close: Default
	{
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=0;
		onSurface=0;
		keepOnSurface=0;
		surfaceOffset=0;
		bounceOnSurface=-1;
		bounceOnSurfaceVar=0;
		postEffects="";
		particleEffects="";
		blockAIVisibility=0;
		emissiveColor[]=
		{
			{2,2,2,0}
		};
		particleType="Billboard";
		particleShape="\Extremo_Assets\model\Extremo_Snow";
		particleFSFrameCount=1;
		particleFSIndex=0;
		particleFSLoop=0;
		particleFSNtieth=3;
		circleRadius=5;
		circleVelocity[]={0,0,0};
		angle=0;
		angleVar=360;
		animationSpeedCoef=1;
		animationSpeed[]={1};
		animationName="";
		color[]=
		{
			{2,2,2,0},
			{2,2,2,2},
			{2,2,2,2},
			{2,2,2,2},
			{2,2,2,2},
			{2,2,2,2},
			{2,2,2,2},
			{2,2,2,0}
		};
		colorCoef[]={1,1,1,1};
		colorVar[]={0,0,0,0};
		interval=0.0099999998;
		lifeTime=6;
		lifeTimeVar=1;
		timerPeriod=30;
		onTimerScript="";
		beforeDestroyScript="";
		moveVelocity[]={0,0,-0.30000001};
		moveVelocityVar[]={0,0,0.1};
		moveVelocityVarConst[]={0,0,0};
		position[]={0,0,0};
		positionVar[]={5,5,0};
		positionVarConst[]={0,0,0};
		rotationVelocity=2;
		rotationVelocityVar=2;
		size[]={1};
		sizeCoef=1;
		sizeVar=0.5;
		weight=1;
		volume=0.75;
		rubbing=0.050000001;
		randomDirectionIntensity=0;
		randomDirectionIntensityVar=0;
		randomDirectionPeriod=0;
		randomDirectionPeriodVar=0;
	};
	class Extremo_Snow_Near: Extremo_Snow_Close
	{
		particleFSIndex=0;
		positionVar[]={6,6,0};
		lifeTime=7;
	};
	class Extremo_Snow_Far: Extremo_Snow_Close
	{
		particleFSIndex=2;
		positionVar[]={7,7,0};
		lifeTime=8;
	};
}; 
class CfgExtremoHUD
{
	class ShortItemNames
	{
		SmokeShell[] 						= {"WHITE", 	"SMOKE"};
		1Rnd_Smoke_Grenade_shell[] 			= {"WHITE", 	"SMOKE"};
		3Rnd_Smoke_Grenade_shell[] 			= {"WHITE", 	"SMOKE"};

		SmokeShellBlue[] 					= {"BLUE", 		"SMOKE"};
		1Rnd_SmokeBlue_Grenade_shell[] 		= {"BLUE", 		"SMOKE"};
		3Rnd_SmokeBlue_Grenade_shell[] 		= {"BLUE", 		"SMOKE"};

		SmokeShellGreen[] 					= {"GREEN", 	"SMOKE"};
		1Rnd_SmokeGreen_Grenade_shell[] 	= {"GREEN", 	"SMOKE"};
		3Rnd_SmokeGreen_Grenade_shell[] 	= {"GREEN", 	"SMOKE"};

		SmokeShellOrange[] 					= {"ORANGE", 	"SMOKE"};
		1Rnd_SmokeOrange_Grenade_shell[]	= {"ORANGE", 	"SMOKE"};
		3Rnd_SmokeOrange_Grenade_shell[] 	= {"ORANGE", 	"SMOKE"};

		SmokeShellPurple[] 					= {"PURPLE", 	"SMOKE"};
		1Rnd_SmokePurple_Grenade_shell[] 	= {"PURPLE", 	"SMOKE"};
		3Rnd_SmokePurple_Grenade_shell[] 	= {"PURPLE", 	"SMOKE"};

		SmokeShellRed[] 					= {"RED", 		"SMOKE"};
		1Rnd_SmokeRed_Grenade_shell[] 		= {"RED", 		"SMOKE"};
		3Rnd_SmokeRed_Grenade_shell[] 		= {"RED", 		"SMOKE"};
				
		SmokeShellYellow[] 					= {"YELLOW", 	"SMOKE"};
		1Rnd_SmokeYellow_Grenade_shell[] 	= {"YELLOW", 	"SMOKE"};
		3Rnd_SmokeYellow_Grenade_shell[] 	= {"YELLOW", 	"SMOKE"};
				
		UGL_FlareCIR_F[] 					= {"IR", 		"FLARE"};
		3Rnd_UGL_FlareCIR_F[] 				= {"IR", 		"FLARE"};

		UGL_FlareGreen_F[] 					= {"GREEN", 	"FLARE"};
		3Rnd_UGL_FlareGreen_F[] 			= {"GREEN", 	"FLARE"};

		UGL_FlareRed_F[] 					= {"RED", 		"FLARE"};
		3Rnd_UGL_FlareRed_F[] 				= {"RED", 		"FLARE"};

		UGL_FlareWhite_F[] 					= {"WHITE", 	"FLARE"};
		3Rnd_UGL_FlareWhite_F[] 			= {"WHITE", 	"FLARE"};

		UGL_FlareYellow_F[] 				= {"YELLOW", 	"FLARE"};
		3Rnd_UGL_FlareYellow_F[] 			= {"YELLOW", 	"FLARE"};

		Chemlight_blue[] 					= {"BLUE", 		"LIGHT"};
		Chemlight_green[] 					= {"GREEN", 	"LIGHT"};
		Chemlight_red[] 					= {"RED", 		"LIGHT"};
		Chemlight_yellow[] 					= {"YELLOW", 	"LIGHT"};

		1Rnd_HE_Grenade_shell[] 			= {"40MM"};
		3Rnd_HE_Grenade_shell[] 			= {"40MM"};

		O_IR_Grenade[] 						= {"IR"};
		I_IR_Grenade[] 						= {"IR"};
		B_IR_Grenade[] 						= {"IR"};

		HandGrenade[] 						= {"RGO"};
		MiniGrenade[] 						= {"RGN"};

		Extremo_Item_ZipTie[]					= {"ZIP", "TIE"};
	};
};
class CfgExtremoParty 
{
	showESP = 1;
	allow3DMarkers = 1;
};
class CfgPlayer 
{
	hungerDecay = 90;
	thirstDecay = 60;

	healthDecay = 5.0;

	thirstRegen = 90;
	hungerRegen = 90;

	recoveryPerMinute = 2;

	customAimCoefficient = 0.5;

	enableFatigue = 0;
	enableStamina = 0;

	autorun = 1;
	autoswim = 1;//needs auto run enabled
};
class CfgClans
{
	registrationFee = 20000;
	clanNameAlphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 -!";
};
class SpawnVehicleItems
{
    class WorldVehicles
	{
        vehicleItemsAllowed = 1;
        maximumItemsPerVehicle = 5;

        allowedItems[] = {
            "Extremo_Item_ToiletPaper",
            "Extremo_Item_PlasticBottleEmpty",
            "Extremo_Item_Can_Empty",
            "Extremo_Item_Rope",
			"Extremo_Item_DuctTape",
			"Extremo_Item_ExtensionCord",
			"Extremo_Item_FuelCanisterEmpty",
			"Extremo_Item_JunkMetal",
			"Extremo_Item_WoodPlank",
			"Extremo_Item_MetalPole",
			"class Extremo_Item_LightBulb",
			"Extremo_Melee_Axe",
			"Extremo_Melee_Pickaxe",
			"Extremo_Melee_Sword",			
			"Extremo_Item_metalboard"
        };
    };
};
class CfgCraftingRecipes
{
	class CookBBQSandwich: Extremo_AbstractCraftingRecipe
	{
		name = "Cook BBQ Sandwich";
		pictureItem = "Extremo_Item_BBQSandwich_Cooked";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Extremo_Item_BBQSandwich_Cooked"}
		};
		tools[] =
		{
			"Extremo_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Extremo_Item_BBQSandwich"}
		};
	};
	class CookCatFood: Extremo_AbstractCraftingRecipe
	{
		name = "Cook Cat Food";
		pictureItem = "Extremo_Item_CatFood_Cooked";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Extremo_Item_CatFood_Cooked"}
		};
		tools[] =
		{
			"Extremo_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Extremo_Item_CatFood"}
		};
	};
	class CookChristmasTinner: Extremo_AbstractCraftingRecipe
	{
		name = "Cook Christmas Tinner";
		pictureItem = "Extremo_Item_ChristmasTinner_Cooked";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Extremo_Item_ChristmasTinner_Cooked"}
		};
		tools[] =
		{
			"Extremo_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Extremo_Item_ChristmasTinner"}
		};
	};
	class CookCoffee: Extremo_AbstractCraftingRecipe
	{
		name = "Brew Coffee";
		pictureItem = "Extremo_Item_PlasticBottleCoffee";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Extremo_Item_PlasticBottleCoffee"}
		};
		tools[] =
		{
			"Extremo_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Extremo_Item_PlasticBottleFreshWater"},
			{1, "Extremo_Item_InstantCoffee"}
		};
	};
	class CookDogFood: Extremo_AbstractCraftingRecipe
	{
		name = "Cook Dog Food";
		pictureItem = "Extremo_Item_DogFood_Cooked";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Extremo_Item_DogFood_Cooked"}
		};
		tools[] =
		{
			"Extremo_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Extremo_Item_DogFood"}
		};
	};
	class CookGloriousKnakworst: Extremo_AbstractCraftingRecipe
	{
		name = "Cook Glorious Knakworst";
		pictureItem = "Extremo_Item_GloriousKnakworst_Cooked";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Extremo_Item_GloriousKnakworst_Cooked"}
		};
		tools[] =
		{
			"Extremo_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Extremo_Item_GloriousKnakworst"}
		};
	};
	class CookPlasticBottleDirtyWater: Extremo_AbstractCraftingRecipe
	{
		name = "Cook Dirty Water";
		pictureItem = "Extremo_Item_PlasticBottleFreshWater";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Extremo_Item_PlasticBottleFreshWater"}
		};
		tools[] =
		{
			"Extremo_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Extremo_Item_PlasticBottleDirtyWater"}
		};
	};
	class CookPlasticBottleSaltWater: Extremo_AbstractCraftingRecipe
	{
		name = "Cook Salt Water";
		pictureItem = "Extremo_Item_PlasticBottleFreshWater";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Extremo_Item_PlasticBottleFreshWater"}
		};
		tools[] =
		{
			"Extremo_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Extremo_Item_PlasticBottleSaltWater"}
		};
	};
	class CookSausageGravy: Extremo_AbstractCraftingRecipe
	{
		name = "Cook Sausage Gravy";
		pictureItem = "Extremo_Item_SausageGravy_Cooked";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Extremo_Item_SausageGravy_Cooked"}
		};
		tools[] =
		{
			"Extremo_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Extremo_Item_SausageGravy"}
		};
	};
	class CookSurstromming: Extremo_AbstractCraftingRecipe
	{
		name = "Cook Surströmming";
		pictureItem = "Extremo_Item_Surstromming_Cooked";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Extremo_Item_Surstromming_Cooked"}
		};
		tools[] =
		{
			"Extremo_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Extremo_Item_Surstromming"}
		};
	};
	class CraftBushKitGreen: Extremo_AbstractCraftingRecipe
	{
		name = "Craft a Bush Kit (Green)";
		pictureItem = "Extremo_Item_BushKit_Green";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "Extremo_Item_BushKit_Green"}
		};
		components[] = 
		{
			{10, "Extremo_Item_Leaves"},
			{5, "Extremo_Item_WoodSticks"},
			{1, "Extremo_Item_Rope"}
		};
	};
	class CraftFirePlace: Extremo_AbstractCraftingRecipe
	{
		name = "Craft Fire Place";
		pictureItem = "Extremo_Item_CampFireKit";
		returnedItems[] = 
		{
			{1, "Extremo_Item_CampFireKit"}
		};
		components[] = 
		{
			{2, "Extremo_Item_WoodLog"}
		};
	};
	class CraftFloodLight: Extremo_AbstractCraftingRecipe
	{
		name = "Craft Flood Light";
		pictureItem = "Extremo_Item_FloodLightKit";
		requiresFire = 1;
		returnedItems[] = 
		{
			{1, "Extremo_Item_FloodLightKit"}
		};
		components[] = 
		{
			{1, "Extremo_Item_MetalPole"},
			{1, "Extremo_Item_LightBulb"},
			{1, "Extremo_Item_ExtensionCord"}
		};
	};
	class CraftFortificationUpgrade: Extremo_AbstractCraftingRecipe
	{
		name = "Craft Fortification Upgrade";
		pictureItem = "Extremo_Item_MetalBoard"; //<< CHANGE IT
		requiresFire = 1;
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "Extremo_Item_FortificationUpgrade"}
		};
		components[] = 
		{
			{2, "Extremo_Item_MetalPole"},
			{4, "Extremo_Item_MetalBoard"}
		};
		tools[] = {"Extremo_Item_Grinder"};
	};
	class CraftMetalBoard: Extremo_AbstractCraftingRecipe
	{
		name = "Craft Metal Board";
		pictureItem = "Extremo_Item_MetalBoard";
		requiresFire = 1;
		returnedItems[] = 
		{
			{1, "Extremo_Item_MetalBoard"}
		};
		components[] = 
		{
			{2, "Extremo_Item_JunkMetal"}
		};
		tools[] = {"Extremo_Item_Grinder"};
	};
	class CraftMetalPole: Extremo_AbstractCraftingRecipe
	{
		name = "Craft Metal Pole";
		pictureItem = "Extremo_Item_MetalPole";
		requiresFire = 1;
		returnedItems[] = 
		{
			{1, "Extremo_Item_MetalPole"}
		};
		components[] = 
		{
			{4, "Extremo_Item_JunkMetal"}
		};
		tools[] = {"Extremo_Item_Grinder"};
	};
	class CraftPortableGenerator: Extremo_AbstractCraftingRecipe
	{
		name = "Craft Portable Generator";
		pictureItem = "Extremo_Item_PortableGeneratorKit";
		requiresFire = 1;
		returnedItems[] = 
		{
			{1, "Extremo_Item_PortableGeneratorKit"}
		};
		components[] = 
		{
			{4, "Extremo_Item_MetalBoard"},
			{1, "Extremo_Item_FuelCanisterFull"},
			{1, "Extremo_Item_ExtensionCord"}
		};
	};
	class CraftStorageCrate: Extremo_AbstractCraftingRecipe
	{
		name = "Craft Storage Crate";
		pictureItem = "Extremo_Item_StorageCrateKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "Extremo_Item_StorageCrateKit"}
		};
		components[] = 
		{
			{5, "Extremo_Item_WoodPlank"}
		};
	};
	class CraftWoodDoorWay: Extremo_AbstractCraftingRecipe
	{
		name = "Craft Wood Doorway";
		pictureItem = "Extremo_Item_WoodDoorwayKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "Extremo_Item_WoodDoorwayKit"}
		};
		components[] = 
		{
			{6, "Extremo_Item_WoodPlank"}
		};
	};
	class CraftWoodFloor: Extremo_AbstractCraftingRecipe
	{
		name = "Craft Wood Floor";
		pictureItem = "Extremo_Item_WoodFloorKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "Extremo_Item_WoodFloorKit"}
		};
		components[] = 
		{
			{4, "Extremo_Item_WoodPlank"}
		};
	};
	class CraftWoodFloorPort: Extremo_AbstractCraftingRecipe
	{
		name = "Craft Wood Floor Port";
		pictureItem = "Extremo_Item_WoodFloorPortKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "Extremo_Item_WoodFloorPortKit"}
		};
		components[] = 
		{
			{6, "Extremo_Item_WoodPlank"}
		};
	};
	class CraftWoodGate: Extremo_AbstractCraftingRecipe
	{
		name = "Craft Wood Gate";
		pictureItem = "Extremo_Item_WoodGateKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "Extremo_Item_WoodGateKit"}
		};
		components[] = 
		{
			{8, "Extremo_Item_WoodPlank"}
		};
	};
	class CraftWoodPlank: Extremo_AbstractCraftingRecipe
	{
		name = "Craft Wood Plank";
		pictureItem = "Extremo_Item_WoodPlank";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "Extremo_Item_WoodPlank"}
		};
		components[] = 
		{
			{2, "Extremo_Item_WoodLog"}
		};
		tools[] = {"Extremo_Item_Handsaw"};
	};
	class CraftWoodStairs: Extremo_AbstractCraftingRecipe
	{
		name = "Craft Wood Stairs";
		pictureItem = "Extremo_Item_WoodStairsKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "Extremo_Item_WoodStairsKit"}
		};
		components[] = 
		{
			{6, "Extremo_Item_WoodPlank"}
		};
	};
	class CraftWoodSupport: Extremo_AbstractCraftingRecipe
	{
		name = "Craft Wood Support";
		pictureItem = "Extremo_Item_WoodSupportKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "Extremo_Item_WoodSupportKit"}
		};
		components[] = 
		{
			{6, "Extremo_Item_WoodPlank"}
		};
	};
	class CraftWoodWall: Extremo_AbstractCraftingRecipe
	{
		name = "Craft Wood Wall";
		pictureItem = "Extremo_Item_WoodWallKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "Extremo_Item_WoodWallKit"}
		};
		components[] = 
		{
			{4, "Extremo_Item_WoodPlank"}
		};
	};
	class CraftWoodWallHalf: Extremo_AbstractCraftingRecipe
	{
		name = "Craft 1/2 Wood Wall";
		pictureItem = "Extremo_Item_WoodWallHalfKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "Extremo_Item_WoodWallHalfKit"}
		};
		components[] = 
		{
			{2, "Extremo_Item_WoodPlank"}
		};
	};
	class CraftWoodWindow: Extremo_AbstractCraftingRecipe
	{
		name = "Craft Wood Window";
		pictureItem = "Extremo_Item_WoodWindowKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "Extremo_Item_WoodWindowKit"}
		};
		components[] = 
		{
			{6, "Extremo_Item_WoodPlank"}
		};
	};
	class CraftWorkBench: Extremo_AbstractCraftingRecipe
	{
		name = "Craft Work Bench";
		pictureItem = "Extremo_Item_WorkBenchKit";
		returnedItems[] = 
		{
			{1, "Extremo_Item_WorkBenchKit"}
		};
		components[] = 
		{
			{4, "Extremo_Item_WoodLog"}
		};
	};
	class EmptyFuelCanister: Extremo_AbstractCraftingRecipe
	{
		name = "Empty Fuel Canister";
		pictureItem = "Extremo_Item_FuelCanisterEmpty";
		returnedItems[] = 
		{
			{1, "Extremo_Item_FuelCanisterEmpty"}
		};
		components[] = 
		{
			{1, "Extremo_Item_FuelCanisterFull"}
		};
	};
	class EmptyPlasticBottleDirtyWater: Extremo_AbstractCraftingRecipe
	{
		name = "Empty Dirty Water";
		pictureItem = "Extremo_Item_PlasticBottleEmpty";
		returnedItems[] =
		{
			{1, "Extremo_Item_PlasticBottleEmpty"}
		};
		components[] =
		{
			{1, "Extremo_Item_PlasticBottleDirtyWater"}
		};
	};
	class EmptyPlasticBottleSaltWater: Extremo_AbstractCraftingRecipe
	{
		name = "Empty Salt Water";
		pictureItem = "Extremo_Item_PlasticBottleEmpty";
		returnedItems[] =
		{
			{1, "Extremo_Item_PlasticBottleEmpty"}
		};
		components[] =
		{
			{1, "Extremo_Item_PlasticBottleSaltWater"}
		};
	};
	class FillEmptyPlasticBottleWithDirtyWater: Extremo_AbstractCraftingRecipe
	{
		name = "Fill Dirty Water";
		pictureItem = "Extremo_Item_PlasticBottleDirtyWater";
		requiredInteractionModelGroup = "WaterSource";
		returnedItems[] =
		{
			{1, "Extremo_Item_PlasticBottleDirtyWater"}
		};
		components[] = 
		{
			{1, "Extremo_Item_PlasticBottleEmpty"}
		};
	};
	class FillEmptyPlasticBottleWithFreshWater: Extremo_AbstractCraftingRecipe
	{
		name = "Fill Fresh Water";
		pictureItem = "Extremo_Item_PlasticBottleFreshWater";
		requiredInteractionModelGroup = "CleanWaterSource";
		returnedItems[] =
		{
			{1, "Extremo_Item_PlasticBottleFreshWater"}
		};
		components[] = 
		{
			{1, "Extremo_Item_PlasticBottleEmpty"}
		};
	};
	class FillEmptyPlasticBottleWithSaltWater: Extremo_AbstractCraftingRecipe
	{
		name = "Fill Salt Water";
		pictureItem = "Extremo_Item_PlasticBottleSaltWater";
		requiresOcean = 1;
		returnedItems[] = 
		{
			{1, "Extremo_Item_PlasticBottleSaltWater"}
		};
		components[] = 
		{
			{1, "Extremo_Item_PlasticBottleEmpty"}
		};
	};
	class FillFuelCanister: Extremo_AbstractCraftingRecipe
	{
		name = "Fill Fuel Canister";
		pictureItem = "Extremo_Item_FuelCanisterFull";
		requiredInteractionModelGroup = "FuelSource";
		returnedItems[] = 
		{
			{1, "Extremo_Item_FuelCanisterFull"}
		};
		components[] = 
		{
			{1, "Extremo_Item_FuelCanisterEmpty"}
		};
	};
	class UpgradeToWoodDoor: Extremo_AbstractCraftingRecipe
	{
		name = "Upgrade to Wood Door";
		pictureItem = "Extremo_Item_WoodDoorKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "Extremo_Item_WoodDoorKit"}
		};
		components[] = 
		{
			{1, "Extremo_Item_WoodDoorwayKit"},
			{2, "Extremo_Item_WoodPlank"}
		};
	};
	class UpgradeToWoodFloorPort: Extremo_AbstractCraftingRecipe
	{
		name = "Upgrade to Wood Floor Port";
		pictureItem = "Extremo_Item_WoodFloorPortKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "Extremo_Item_WoodFloorPortKit"}
		};
		components[] = 
		{
			{1, "Extremo_Item_WoodFloorKit"},
			{2, "Extremo_Item_WoodPlank"}
		};
	};
	class UpgradeToWoodGate: Extremo_AbstractCraftingRecipe
	{
		name = "Upgrade to Wood Gate";
		pictureItem = "Extremo_Item_WoodGateKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "Extremo_Item_WoodGateKit"}
		};
		components[] = 
		{
			{1, "Extremo_Item_WoodWallKit"},
			{4, "Extremo_Item_WoodPlank"}
		};
	};
	class UpgradeToWoodWall: Extremo_AbstractCraftingRecipe
	{
		name = "Upgrade to Wood Wall";
		pictureItem = "Extremo_Item_WoodWallHalfKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "Extremo_Item_WoodWallKit"}
		};
		components[] = 
		{
			{2, "Extremo_Item_WoodWallHalfKit"}
		};
	};
	class UpgradeToWoodWindow: Extremo_AbstractCraftingRecipe
	{
		name = "Upgrade to Wood Window";
		pictureItem = "Extremo_Item_WoodWindowKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "Extremo_Item_WoodWindowKit"}
		};
		components[] = 
		{
			{1, "Extremo_Item_WoodWallKit"},
			{2, "Extremo_Item_WoodPlank"}
		};
	};
};
class CfgExtremoArsenal
{
	class Extremo_Uniform_BambiOverall				{ quality = 1; price = 1; sellPrice = 1; };

	class U_C_Journalist 							{ quality = 1; price = 20; };
	class U_C_Poloshirt_blue 						{ quality = 1; price = 20; };
	class U_C_Poloshirt_burgundy 					{ quality = 1; price = 20; };
	class U_C_Poloshirt_salmon 						{ quality = 1; price = 20; };
	class U_C_Poloshirt_stripped 					{ quality = 1; price = 20; };
	class U_C_Poloshirt_tricolour 					{ quality = 1; price = 20; };
	class U_C_Poor_1 								{ quality = 1; price = 20; };
	class U_C_Poor_2 								{ quality = 1; price = 20; };
	class U_C_Poor_shorts_1 						{ quality = 1; price = 20; };
	class U_C_Scientist 							{ quality = 1; price = 20; };
	class U_OrestesBody 							{ quality = 3; price = 40; };
	class U_Rangemaster 							{ quality = 1; price = 40; };
	class U_NikosAgedBody 							{ quality = 3; price = 40; };
	class U_NikosBody 								{ quality = 3; price = 40; };
	class U_Competitor 								{ quality = 1; price = 40; };

	class U_B_CombatUniform_mcam 					{ quality = 2; price = 40; };
	class U_B_CombatUniform_mcam_tshirt 			{ quality = 1; price = 40; };
	class U_B_CombatUniform_mcam_vest 				{ quality = 1; price = 40; };
	class U_B_CombatUniform_mcam_worn 				{ quality = 1; price = 40; };
	class U_B_CTRG_1 								{ quality = 2; price = 40; };
	class U_B_CTRG_2 								{ quality = 2; price = 40; };
	class U_B_CTRG_3								{ quality = 2; price = 40; };
	class U_I_CombatUniform 						{ quality = 1; price = 40; };
	class U_I_CombatUniform_shortsleeve				{ quality = 1; price = 40; };
	class U_I_CombatUniform_tshirt					{ quality = 1; price = 40; };
	class U_I_OfficerUniform						{ quality = 1; price = 40; };
	class U_O_CombatUniform_ocamo 					{ quality = 1; price = 40; };
	class U_O_CombatUniform_oucamo 					{ quality = 1; price = 40; };
	class U_O_OfficerUniform_ocamo 					{ quality = 3; price = 80; };
	class U_B_SpecopsUniform_sgg 					{ quality = 3; price = 80; };
	class U_O_SpecopsUniform_blk 					{ quality = 3; price = 80; };
	class U_O_SpecopsUniform_ocamo 					{ quality = 3; price = 80; };
	class U_I_G_Story_Protagonist_F 				{ quality = 3; price = 100; };
	class Extremo_Uniform_Woodland 					{ quality = 3; price = 150; };

	class U_C_HunterBody_grn						{ quality = 1; price = 40; };
	class U_IG_Guerilla1_1							{ quality = 1; price = 40; };
	class U_IG_Guerilla2_1							{ quality = 2; price = 60; };
	class U_IG_Guerilla2_2							{ quality = 1; price = 40; };
	class U_IG_Guerilla2_3							{ quality = 1; price = 40; };
	class U_IG_Guerilla3_1							{ quality = 1; price = 40; };
	class U_BG_Guerilla2_1							{ quality = 1; price = 40; };
	class U_IG_Guerilla3_2							{ quality = 1; price = 40; };
	class U_BG_Guerrilla_6_1						{ quality = 2; price = 60; };
	class U_BG_Guerilla1_1							{ quality = 1; price = 40; };
	class U_BG_Guerilla2_2							{ quality = 1; price = 40; };
	class U_BG_Guerilla2_3							{ quality = 1; price = 40; };
	class U_BG_Guerilla3_1							{ quality = 1; price = 40; };
	class U_BG_leader								{ quality = 1; price = 40; };
	class U_IG_leader								{ quality = 1; price = 40; };
	class U_I_G_resistanceLeader_F					{ quality = 3; price = 100; };

	class U_B_FullGhillie_ard						{ quality = 3; price = 150; };
	class U_B_FullGhillie_lsh						{ quality = 3; price = 150; };
	class U_B_FullGhillie_sard						{ quality = 3; price = 150; };
	class U_B_GhillieSuit							{ quality = 2; price = 100; };
	class U_I_FullGhillie_ard						{ quality = 3; price = 150; };
	class U_I_FullGhillie_lsh						{ quality = 3; price = 150; };
	class U_I_FullGhillie_sard						{ quality = 3; price = 150; };
	class U_I_GhillieSuit							{ quality = 2; price = 100; };
	class U_O_FullGhillie_ard						{ quality = 3; price = 150; };
	class U_O_FullGhillie_lsh						{ quality = 3; price = 150; };
	class U_O_FullGhillie_sard						{ quality = 3; price = 150; };
	class U_O_GhillieSuit							{ quality = 2; price = 100; };

	class U_I_Wetsuit								{ quality = 3; price = 80; };
	class U_O_Wetsuit								{ quality = 3; price = 80; };
	class U_B_Wetsuit								{ quality = 3; price = 80; };
	class U_B_survival_uniform						{ quality = 3; price = 80; };

	class V_BandollierB_blk							{ quality = 1; price = 20; };
	class V_BandollierB_cbr							{ quality = 1; price = 20; };
	class V_BandollierB_khk							{ quality = 1; price = 20; };
	class V_BandollierB_oli							{ quality = 1; price = 20; };
	class V_BandollierB_rgr							{ quality = 1; price = 20; };

	class V_Chestrig_blk 							{ quality = 1; price = 30; };
	class V_Chestrig_khk 							{ quality = 1; price = 30; };
	class V_Chestrig_oli 							{ quality = 1; price = 30; };
	class V_Chestrig_rgr 							{ quality = 1; price = 30; };

	class V_Press_F									{ quality = 1; price = 10; };
	class V_Rangemaster_belt						{ quality = 1; price = 6; };
	class V_TacVest_blk								{ quality = 2; price = 50; };
	class V_TacVest_blk_POLICE						{ quality = 3; price = 50; };
	class V_TacVest_brn								{ quality = 2; price = 50; };
	class V_TacVest_camo							{ quality = 2; price = 50; };
	class V_TacVest_khk								{ quality = 2; price = 50; };
	class V_TacVest_oli								{ quality = 2; price = 50; };
	class V_TacVestCamo_khk							{ quality = 2; price = 50; };
	class V_TacVestIR_blk							{ quality = 2; price = 50; };
	class V_I_G_resistanceLeader_F					{ quality = 2; price = 50; };

	class V_HarnessO_brn							{ quality = 1; price = 40; };
	class V_HarnessO_gry							{ quality = 1; price = 40; };
	class V_HarnessOGL_brn							{ quality = 1; price = 30; };
	class V_HarnessOGL_gry							{ quality = 1; price = 30; };
	class V_HarnessOSpec_brn						{ quality = 1; price = 40; };
	class V_HarnessOSpec_gry						{ quality = 1; price = 40; };

	class V_PlateCarrier1_blk 						{ quality = 1; price = 80; };
	class V_PlateCarrier1_rgr 						{ quality = 1; price = 80; };
	class V_PlateCarrier2_rgr 						{ quality = 2; price = 100; };
	class V_PlateCarrier3_rgr 						{ quality = 2; price = 100; };
	class V_PlateCarrierGL_blk 						{ quality = 3; price = 500; };
	class V_PlateCarrierGL_mtp 						{ quality = 3; price = 500; };
	class V_PlateCarrierGL_rgr 						{ quality = 3; price = 500; };
	class V_PlateCarrierH_CTRG 						{ quality = 2; price = 100; };
	class V_PlateCarrierIA1_dgtl 					{ quality = 2; price = 80; };
	class V_PlateCarrierIA2_dgtl 					{ quality = 2; price = 100; };
	class V_PlateCarrierIAGL_dgtl 					{ quality = 3; price = 400; };
	class V_PlateCarrierIAGL_oli 					{ quality = 3; price = 400; };
	class V_PlateCarrierL_CTRG 						{ quality = 2; price = 100; };
	class V_PlateCarrierSpec_blk 					{ quality = 3; price = 200; };
	class V_PlateCarrierSpec_mtp 					{ quality = 3; price = 200; };
	class V_PlateCarrierSpec_rgr 					{ quality = 3; price = 200; };

	class H_Cap_blk 								{ quality = 1; price = 6; };
	class H_Cap_blk_Raven 							{ quality = 1; price = 6; };
	class H_Cap_blu 								{ quality = 1; price = 6; };
	class H_Cap_brn_SPECOPS 						{ quality = 1; price = 6; };
	class H_Cap_grn 								{ quality = 1; price = 6; };
	class H_Cap_headphones 							{ quality = 1; price = 6; };
	class H_Cap_khaki_specops_UK 					{ quality = 1; price = 6; };
	class H_Cap_oli 								{ quality = 1; price = 6; };
	class H_Cap_press 								{ quality = 1; price = 6; };
	class H_Cap_red 								{ quality = 1; price = 6; };
	class H_Cap_tan 								{ quality = 1; price = 6; };
	class H_Cap_tan_specops_US 						{ quality = 1; price = 6; };

	class H_MilCap_blue 							{ quality = 1; price = 8; };
	class H_MilCap_dgtl 							{ quality = 1; price = 8; };
	class H_MilCap_mcamo 							{ quality = 1; price = 8; };
	class H_MilCap_ocamo 							{ quality = 1; price = 8; };
	class H_MilCap_oucamo 							{ quality = 1; price = 8; };
	class H_MilCap_rucamo 							{ quality = 1; price = 8; };

	class H_Watchcap_blk 							{ quality = 1; price = 6; };
	class H_Watchcap_camo 							{ quality = 1; price = 6; };
	class H_Watchcap_khk 							{ quality = 1; price = 6; };
	class H_Watchcap_sgg 							{ quality = 1; price = 6; };

	class H_Bandanna_camo							{ quality = 1; price = 4; };
	class H_Bandanna_cbr							{ quality = 1; price = 4; };
	class H_Bandanna_gry							{ quality = 1; price = 4; };
	class H_Bandanna_khk							{ quality = 1; price = 4; };
	class H_Bandanna_khk_hs							{ quality = 1; price = 4; };
	class H_Bandanna_mcamo							{ quality = 1; price = 4; };
	class H_Bandanna_sgg							{ quality = 1; price = 4; };
	class H_Bandanna_surfer							{ quality = 1; price = 4; };

	class H_Booniehat_dgtl							{ quality = 1; price = 6; };
	class H_Booniehat_dirty							{ quality = 1; price = 6; };
	class H_Booniehat_grn							{ quality = 1; price = 6; };
	class H_Booniehat_indp							{ quality = 1; price = 6; };
	class H_Booniehat_khk							{ quality = 1; price = 6; };
	class H_Booniehat_khk_hs						{ quality = 1; price = 6; };
	class H_Booniehat_mcamo							{ quality = 1; price = 6; };
	class H_Booniehat_tan							{ quality = 1; price = 6; };

	class H_Hat_blue								{ quality = 1; price = 6; };
	class H_Hat_brown								{ quality = 1; price = 6; };
	class H_Hat_camo								{ quality = 1; price = 6; };
	class H_Hat_checker								{ quality = 1; price = 6; };
	class H_Hat_grey								{ quality = 1; price = 6; };
	class H_Hat_tan									{ quality = 1; price = 6; };
	class H_StrawHat								{ quality = 1; price = 6; };
	class H_StrawHat_dark							{ quality = 1; price = 6; };

	class H_Beret_02								{ quality = 1; price = 6; };
	class H_Beret_blk								{ quality = 1; price = 6; };
	class H_Beret_blk_POLICE						{ quality = 1; price = 6; };
	class H_Beret_brn_SF							{ quality = 1; price = 6; };
	class H_Beret_Colonel							{ quality = 3; price = 8; };
	class H_Beret_grn								{ quality = 1; price = 6; };
	class H_Beret_grn_SF							{ quality = 1; price = 6; };
	class H_Beret_ocamo								{ quality = 1; price = 6; };
	class H_Beret_red								{ quality = 1; price = 6; };

	class H_Shemag_khk								{ quality = 1; price = 10; };
	class H_Shemag_olive							{ quality = 1; price = 10; };
	class H_Shemag_olive_hs							{ quality = 1; price = 10; };
	class H_Shemag_tan								{ quality = 1; price = 10; };
	class H_ShemagOpen_khk							{ quality = 1; price = 10; };
	class H_ShemagOpen_tan							{ quality = 1; price = 10; };
	class H_TurbanO_blk								{ quality = 1; price = 10; };

	class H_HelmetB_light							{ quality = 1; price = 20; };
	class H_HelmetB_light_black						{ quality = 1; price = 20; };
	class H_HelmetB_light_desert					{ quality = 1; price = 20; };
	class H_HelmetB_light_grass						{ quality = 1; price = 20; };
	class H_HelmetB_light_sand						{ quality = 1; price = 20; };
	class H_HelmetB_light_snakeskin					{ quality = 1; price = 20; };

	class H_HelmetIA								{ quality = 1; price = 40; };
	class H_HelmetIA_camo							{ quality = 1; price = 40; };
	class H_HelmetIA_net							{ quality = 1; price = 40; };
	class H_HelmetB									{ quality = 2; price = 60; };
	class H_HelmetB_black							{ quality = 2; price = 60; };
	class H_HelmetB_camo							{ quality = 3; price = 80; };
	class H_HelmetB_desert							{ quality = 2; price = 60; };
	class H_HelmetB_grass							{ quality = 2; price = 60; };
	class H_HelmetB_paint							{ quality = 2; price = 60; };
	class H_HelmetB_plain_blk						{ quality = 2; price = 60; };
	class H_HelmetB_sand							{ quality = 2; price = 60; };
	class H_HelmetB_snakeskin						{ quality = 2; price = 60; };

	class H_HelmetSpecB								{ quality = 2; price = 80; };
	class H_HelmetSpecB_blk							{ quality = 2; price = 80; };
	class H_HelmetSpecB_paint1						{ quality = 2; price = 80; };
	class H_HelmetSpecB_paint2						{ quality = 2; price = 80; };

	class H_HelmetO_ocamo							{ quality = 3; price = 150; };
	class H_HelmetO_oucamo							{ quality = 3; price = 150; };
	class H_HelmetSpecO_blk							{ quality = 3; price = 100; };
	class H_HelmetSpecO_ocamo						{ quality = 3; price = 100; };
	class H_HelmetLeaderO_ocamo						{ quality = 3; price = 200; };
	class H_HelmetLeaderO_oucamo					{ quality = 3; price = 200; };

	class acc_flashlight 							{ quality = 1; price = 4; };
	class acc_pointer_IR 							{ quality = 1; price = 10; };

	class bipod_01_F_blk	 						{ quality = 1; price = 10; };
	class bipod_01_F_mtp	 						{ quality = 1; price = 10; };
	class bipod_01_F_snd	 						{ quality = 1; price = 10; };
	class bipod_02_F_blk	 						{ quality = 1; price = 10; };
	class bipod_02_F_hex	 						{ quality = 1; price = 10; };
	class bipod_02_F_tan	 						{ quality = 1; price = 10; };
	class bipod_03_F_blk	 						{ quality = 1; price = 10; };
	class bipod_03_F_oli	 						{ quality = 1; price = 10; };

	class muzzle_snds_338_black 					{ quality = 2; price = 50; };
	class muzzle_snds_338_green 					{ quality = 2; price = 50; };
	class muzzle_snds_338_sand 						{ quality = 2; price = 50; };
	class muzzle_snds_93mmg 						{ quality = 2; price = 50; };
	class muzzle_snds_93mmg_tan 					{ quality = 2; price = 50; };
	class muzzle_snds_acp 							{ quality = 1; price = 10; };
	class muzzle_snds_B 							{ quality = 1; price = 20; };
	class muzzle_snds_H 							{ quality = 2; price = 20; };
	class muzzle_snds_H_MG 							{ quality = 2; price = 20; };
	class muzzle_snds_H_SW 							{ quality = 2; price = 20; };
	class muzzle_snds_L 							{ quality = 1; price = 10; };
	class muzzle_snds_M 							{ quality = 1; price = 10; };

	class I_UavTerminal								{ quality = 3; price = 750; };
	class I_UAV_01_backpack_F						{ quality = 3; price = 3000; };

	class O_HMG_01_weapon_F 						{ quality = 3; price = 5000; };
	class O_HMG_01_support_F 						{ quality = 3; price = 1000; };

	class optic_Aco									{ quality = 1; price = 70; };
	class optic_ACO_grn								{ quality = 1; price = 70; };
	class optic_ACO_grn_smg							{ quality = 1; price = 70; };
	class optic_Aco_smg								{ quality = 1; price = 70; };
	class optic_AMS									{ quality = 3; price = 300; };
	class optic_AMS_khk								{ quality = 3; price = 300; };
	class optic_AMS_snd								{ quality = 3; price = 300; };
	class optic_Arco								{ quality = 1; price = 100; };
	class optic_DMS									{ quality = 1; price = 150; };
	class optic_Hamr								{ quality = 3; price = 200; };
	class optic_Holosight							{ quality = 1; price = 50; };
	class optic_Holosight_smg						{ quality = 1; price = 50; };
	class optic_KHS_blk								{ quality = 3; price = 300; };
	class optic_KHS_hex								{ quality = 3; price = 300; };
	class optic_KHS_old								{ quality = 3; price = 300; };
	class optic_KHS_tan								{ quality = 3; price = 300; };
	class optic_LRPS								{ quality = 2; price = 300; };
	class optic_MRCO								{ quality = 1; price = 100; };
	class optic_MRD									{ quality = 1; price = 10; };
	class optic_Nightstalker						{ quality = 3; price = 1000; };
	class optic_NVS									{ quality = 2; price = 500; };
	class optic_SOS									{ quality = 2; price = 200; };
	//class optic_tws									{ quality = 3; price = 1500; };
	//class optic_tws_mg								{ quality = 3; price = 1500; };
	class optic_Yorris								{ quality = 1; price = 10; };

	class Extremo_Item_Rope							{ quality = 1; price = 20; };
	class Extremo_Item_DuctTape						{ quality = 1; price = 300; };
	class Extremo_Item_ExtensionCord					{ quality = 1; price = 40; };
	class Extremo_Item_FuelCanisterEmpty				{ quality = 1; price = 40; };
	class Extremo_Item_JunkMetal						{ quality = 1; price = 400; };
	class Extremo_Item_LightBulb						{ quality = 1; price = 20; };
	class Extremo_Item_MetalBoard						{ quality = 1; price = 600; };
	//class Extremo_Item_MetalHedgehogKit				{ quality = 1; price = 1200; };
	class Extremo_Item_SafeKit						{ quality = 3; price = 10000; };
	class Extremo_Item_CodeLock						{ quality = 2; price = 5000; };
	//class Extremo_Item_Laptop						{ quality = 2; price = 9000; };
	//class Extremo_Item_BaseCameraKit				{ quality = 2; price = 5000; };
	class Extremo_Item_CamoTentKit					{ quality = 1; price = 250; };
	class Extremo_Item_MetalPole						{ quality = 1; price = 800; };
	//class Extremo_Item_MetalScrews					{ quality = 1; price = 100; };
	//class Extremo_Item_MetalWire						{ quality = 1; price = 100; };
	//class Extremo_Item_Cement							{ quality = 1; price = 20; };
	//class Extremo_Item_Sand							{ quality = 1; price = 20; };
	//class Extremo_Item_CarWheel						{ quality = 1; price = 1000; };
	
	class Extremo_Item_EMRE							{ quality = 3; price = 54; }; //75, 60
	class Extremo_Item_GloriousKnakworst				{ quality = 3; price = 40; }; //60, 30
	class Extremo_Item_Surstromming					{ quality = 3; price = 34; }; //55, 25
	class Extremo_Item_SausageGravy					{ quality = 3; price = 30; }; //50, 25
	class Extremo_Item_Catfood						{ quality = 2; price = 24; }; //40, 40
	class Extremo_Item_ChristmasTinner				{ quality = 3; price = 20; }; //40, 60
	class Extremo_Item_BBQSandwich					{ quality = 3; price = 20; }; //40, 60
	class Extremo_Item_Dogfood						{ quality = 2; price = 18; }; //30, 30
	class Extremo_Item_BeefParts						{ quality = 2; price = 18; }; //30, 30
	class Extremo_Item_Cheathas						{ quality = 2; price = 18; }; //30, 30
	class Extremo_Item_Noodles						{ quality = 1; price = 14; }; //25, 50
	class Extremo_Item_SeedAstics						{ quality = 1; price = 12; }; //20, 40
	class Extremo_Item_Raisins						{ quality = 1; price = 10; }; //15, 30
	class Extremo_Item_Moobar							{ quality = 1; price = 8; }; //10, 30
	class Extremo_Item_InstantCoffee					{ quality = 1; price = 20; }; //5, 10
	class Extremo_Item_Can_Empty						{ quality = 1; price = 1; sellPrice = 1; };

	class Extremo_Item_PlasticBottleCoffee	 		{ quality = 3; price = 40; }; //100, 60
	class Extremo_Item_PowerDrink						{ quality = 3; price = 60; }; //95, 10
	class Extremo_Item_PlasticBottleFreshWater 		{ quality = 2; price = 50; sellPrice = 4; }; //80, 15
	class Extremo_Item_Beer 							{ quality = 1; price = 50; }; //75, 30
	class Extremo_Item_EnergyDrink					{ quality = 1; price = 40; }; //75, 20
	class Extremo_Item_MountainDupe					{ quality = 1; price = 30; }; //50, 20
	class Extremo_Item_PlasticBottleEmpty				{ quality = 1; price = 4; };
	
	class Extremo_Item_InstaDoc                       { quality = 1; price = 1250; };
	class Extremo_Item_Vishpirin						{ quality = 1; price = 300; };
	class Extremo_Item_Bandage	                    { quality = 1; price = 100; };
	//class Extremo_Item_Defibrillator				{ quality = 1; price = 7500; };
	
	class Extremo_Item_Matches 						{ quality = 1; price = 60; };
	class Extremo_Item_CookingPot						{ quality = 2; price = 80; };
	class Extremo_Melee_Axe							{ quality = 1; price = 100; };
	class Extremo_Melee_Pickaxe						{ quality = 1; price = 100; };
	class Extremo_Melee_Sword						{ quality = 1; price = 100; };
	class Extremo_Item_CanOpener						{ quality = 1; price = 80; };
	class Extremo_Item_Handsaw						{ quality = 1; price = 500; };
	class Extremo_Item_Pliers							{ quality = 1; price = 350; };
	class Extremo_Item_Grinder						{ quality = 1; price = 1250; };
	//class Extremo_Item_Foolbox						{ quality = 1; price = 4000; };
	//class Extremo_Item_CordlessScrewdriver			{ quality = 1; price = 750; };
	//class Extremo_Item_FireExtinguisher				{ quality = 1; price = 650; };
	//class Extremo_Item_Hammer						{ quality = 1; price = 600; };
	//class Extremo_Item_OilCanister					{ quality = 1; price = 1750; };
	//class Extremo_Item_Screwdriver					{ quality = 1; price = 250; };
	//class Extremo_Item_Shovel						{ quality = 1; price = 700; };
	//class Extremo_Item_Wrench						{ quality = 1; price = 250; };
	//class Extremo_Item_SleepingMat					{ quality = 1; price = 1250; };
	//class Extremo_Item_ToiletPaper					{ quality = 1; price = 5; };
	//class Extremo_Item_ZipTie						{ quality = 1; price = 250; };

	class ItemWatch									{ quality = 1; price = 2; };	
	class ItemGPS									{ quality = 1; price = 40; };
	class ItemMap									{ quality = 1; price = 6; };
	class ItemCompass								{ quality = 1; price = 6; }; 
	class Binocular									{ quality = 1; price = 40; };
	class Rangefinder								{ quality = 2; price = 200; };
	class Laserdesignator							{ quality = 3; price = 750; };
	class Laserdesignator_02						{ quality = 3; price = 750; };
	class Laserdesignator_03						{ quality = 3; price = 750; };
	class NVGoggles									{ quality = 2; price = 100; };
	class NVGoggles_INDEP							{ quality = 2; price = 100; };
	class NVGoggles_OPFOR							{ quality = 2; price = 100; };
	class Extremo_Item_XM8							{ quality = 2; price = 20; };

	class V_RebreatherB								{ quality = 2; price = 250; };
	class V_RebreatherIA							{ quality = 2; price = 250; };
	class V_RebreatherIR							{ quality = 2; price = 250; };

	class B_Parachute								{ quality = 3; price = 150; };
	class H_CrewHelmetHeli_B						{ quality = 2; price = 150; };
	class H_CrewHelmetHeli_I						{ quality = 2; price = 150; };
	class H_CrewHelmetHeli_O						{ quality = 2; price = 150; };
	class H_HelmetCrew_I							{ quality = 1; price = 100; };
	class H_HelmetCrew_B							{ quality = 1; price = 100; };
	class H_HelmetCrew_O							{ quality = 1; price = 100; };
	class H_PilotHelmetHeli_B						{ quality = 3; price = 100; };
	class H_PilotHelmetHeli_I						{ quality = 3; price = 100; };
	class H_PilotHelmetHeli_O						{ quality = 3; price = 100; };
	class U_B_HeliPilotCoveralls					{ quality = 1; price = 80; };
	class U_B_PilotCoveralls						{ quality = 1; price = 60; };
	class U_I_HeliPilotCoveralls					{ quality = 1; price = 60; };
	class U_I_pilotCoveralls						{ quality = 1; price = 60; };
	class U_O_PilotCoveralls						{ quality = 1; price = 60; };
	class H_PilotHelmetFighter_B					{ quality = 2; price = 150; };
	class H_PilotHelmetFighter_I					{ quality = 2; price = 150; };
	class H_PilotHelmetFighter_O					{ quality = 2; price = 150; };

	class B_HuntingBackpack							{ quality = 3; price = 70; };
	class B_OutdoorPack_blk							{ quality = 1; price = 80; };
	class B_OutdoorPack_blu							{ quality = 1; price = 80; };
	class B_OutdoorPack_tan							{ quality = 1; price = 80; };
	class B_AssaultPack_blk							{ quality = 1; price = 90; };
	class B_AssaultPack_cbr							{ quality = 1; price = 90; };
	class B_AssaultPack_dgtl						{ quality = 1; price = 90; };
	class B_AssaultPack_khk							{ quality = 1; price = 90; };
	class B_AssaultPack_mcamo						{ quality = 1; price = 90; };
	class B_AssaultPack_rgr							{ quality = 1; price = 90; };
	class B_AssaultPack_sgg							{ quality = 1; price = 90; };
	class B_FieldPack_blk							{ quality = 2; price = 120; };
	class B_FieldPack_cbr							{ quality = 2; price = 120; };
	class B_FieldPack_ocamo							{ quality = 2; price = 120; };
	class B_FieldPack_oucamo						{ quality = 2; price = 120; };
	class B_TacticalPack_blk						{ quality = 2; price = 150; };
	class B_TacticalPack_rgr						{ quality = 2; price = 150; };
	class B_TacticalPack_ocamo						{ quality = 2; price = 150; };
	class B_TacticalPack_mcamo						{ quality = 2; price = 150; };
	class B_TacticalPack_oli						{ quality = 2; price = 150; };
	class B_Kitbag_cbr								{ quality = 3; price = 200; };
	class B_Kitbag_mcamo							{ quality = 3; price = 200; };
	class B_Kitbag_sgg								{ quality = 3; price = 200; };
	class B_Bergen_blk								{ quality = 2; price = 200; };
	class B_Bergen_mcamo							{ quality = 2; price = 200; };
	class B_Bergen_rgr								{ quality = 2; price = 200; };
	class B_Bergen_sgg								{ quality = 2; price = 200; };
	class B_Carryall_cbr							{ quality = 3; price = 300; };
	class B_Carryall_khk							{ quality = 3; price = 300; };
	class B_Carryall_mcamo							{ quality = 3; price = 300; };
	class B_Carryall_ocamo							{ quality = 3; price = 300; };
	class B_Carryall_oli							{ quality = 3; price = 300; };
	class B_Carryall_oucamo							{ quality = 3; price = 300; };

	class 100Rnd_65x39_caseless_mag 				{ quality = 1; price = 30; };
	class 100Rnd_65x39_caseless_mag_Tracer 			{ quality = 2; price = 40; };
	class 10Rnd_127x54_Mag 							{ quality = 1; price = 30; };
	// Broken in Arma
	class 10Rnd_338_Mag 							{ quality = 1; price = 30; };

	class 10Rnd_762x54_Mag 							{ quality = 1; price = 30; };
	//class 10Rnd_762x51_Mag 						{ quality = 1; price = 30; };
	class 10Rnd_93x64_DMR_05_Mag 					{ quality = 1; price = 40; };
	class 11Rnd_45ACP_Mag 							{ quality = 1; price = 8; };
	class 150Rnd_762x54_Box 						{ quality = 1; price = 20; };
	class 150Rnd_762x54_Box_Tracer 					{ quality = 2; price = 30; };
	class 16Rnd_9x21_Mag 							{ quality = 1; price = 20; };
	class 200Rnd_65x39_cased_Box 					{ quality = 1; price = 30; };
	class 200Rnd_65x39_cased_Box_Tracer 			{ quality = 2; price = 30; };
	class 150Rnd_93x64_Mag 							{ quality = 2; price = 50; };
	class 130Rnd_338_Mag 							{ quality = 2; price = 40; };
	class 20Rnd_556x45_UW_mag 						{ quality = 1; price = 20; };
	class 20Rnd_762x51_Mag 							{ quality = 1; price = 20; };
	class 30Rnd_45ACP_Mag_SMG_01 					{ quality = 1; price = 10; };
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Green 		{ quality = 2; price = 10; };
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow		{ quality = 2; price = 10; };
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Red			{ quality = 2; price = 10; };
	class 30Rnd_556x45_Stanag 						{ quality = 1; price = 20; };
	class 30Rnd_556x45_Stanag_Tracer_Green 			{ quality = 2; price = 20; };
	class 30Rnd_556x45_Stanag_green  				{ quality = 2; price = 20; };
	class 30Rnd_556x45_Stanag_Tracer_Red 			{ quality = 2; price = 20; };
	class 30Rnd_556x45_Stanag_Tracer_Yellow 		{ quality = 2; price = 20; };
	class 30Rnd_556x45_Stanag_red 					{ quality = 2; price = 20; };
	class 30Rnd_65x39_caseless_green 				{ quality = 1; price = 20; };
	class 30Rnd_65x39_caseless_green_mag_Tracer 	{ quality = 2; price = 30; };
	class 30Rnd_65x39_caseless_mag 					{ quality = 1; price = 20; };
	class 30Rnd_65x39_caseless_mag_Tracer 			{ quality = 2; price = 30; };
	class 30Rnd_9x21_Mag 							{ quality = 1; price = 40; };
	class 5Rnd_127x108_APDS_Mag 					{ quality = 2; price = 50; };
	class 5Rnd_127x108_Mag 							{ quality = 1; price = 40; };
	class 6Rnd_45ACP_Cylinder 						{ quality = 1; price = 8; };
	class 6Rnd_GreenSignal_F 						{ quality = 9000; price = 30; };
	class 6Rnd_RedSignal_F 							{ quality = 9000; price = 30; };
	class 7Rnd_408_Mag 								{ quality = 1; price = 10; };
	class 9Rnd_45ACP_Mag 							{ quality = 1; price = 6; };

	class Chemlight_blue							{ quality = 1; price = 2; };
	class Chemlight_green							{ quality = 1; price = 2; };
	class Chemlight_red								{ quality = 1; price = 2; };
	class FlareGreen_F								{ quality = 1; price = 6; };
	class FlareRed_F								{ quality = 1; price = 6; };
	class FlareWhite_F								{ quality = 1; price = 6; };
	class FlareYellow_F								{ quality = 1; price = 6; };
	class UGL_FlareGreen_F							{ quality = 2; price = 8; };
	class UGL_FlareRed_F							{ quality = 2; price = 8; };
	class UGL_FlareWhite_F							{ quality = 2; price = 8; };
	class UGL_FlareYellow_F							{ quality = 2; price = 8; };
	class 3Rnd_UGL_FlareGreen_F						{ quality = 3; price = 8*3; };
	class 3Rnd_UGL_FlareRed_F						{ quality = 3; price = 8*3; };
	class 3Rnd_UGL_FlareWhite_F						{ quality = 3; price = 8*3; };
	class 3Rnd_UGL_FlareYellow_F					{ quality = 3; price = 8*3; };

	class SmokeShell								{ quality = 1; price = 6; };
	class SmokeShellBlue							{ quality = 1; price = 6; };
	class SmokeShellGreen							{ quality = 1; price = 6; };
	class SmokeShellOrange							{ quality = 1; price = 6; };
	class SmokeShellPurple							{ quality = 1; price = 6; };
	class SmokeShellRed								{ quality = 1; price = 6; };
	class SmokeShellYellow							{ quality = 1; price = 6; };
	class 1Rnd_Smoke_Grenade_shell					{ quality = 2; price = 8; };
	class 1Rnd_SmokeBlue_Grenade_shell				{ quality = 2; price = 8; };
	class 1Rnd_SmokeGreen_Grenade_shell				{ quality = 2; price = 8; };
	class 1Rnd_SmokeOrange_Grenade_shell			{ quality = 2; price = 8; };
	class 1Rnd_SmokePurple_Grenade_shell			{ quality = 2; price = 8; };
	class 1Rnd_SmokeRed_Grenade_shell				{ quality = 2; price = 8; };
	class 1Rnd_SmokeYellow_Grenade_shell			{ quality = 2; price = 8; };
	class 3Rnd_Smoke_Grenade_shell					{ quality = 3; price = 8*3; };
	class 3Rnd_SmokeBlue_Grenade_shell				{ quality = 3; price = 8*3; };
	class 3Rnd_SmokeGreen_Grenade_shell				{ quality = 3; price = 8*3; };
	class 3Rnd_SmokeOrange_Grenade_shell			{ quality = 3; price = 8*3; };
	class 3Rnd_SmokePurple_Grenade_shell			{ quality = 3; price = 8*3; };
	class 3Rnd_SmokeRed_Grenade_shell				{ quality = 3; price = 8*3; };
	class 3Rnd_SmokeYellow_Grenade_shell			{ quality = 3; price = 8*3; };

	class HandGrenade								{ quality = 3; price = 40; };
	class MiniGrenade								{ quality = 2; price = 30; };
	class B_IR_Grenade								{ quality = 1; price = 50; };
	class O_IR_Grenade								{ quality = 1; price = 50; };
	class I_IR_Grenade								{ quality = 1; price = 50; };
	class 1Rnd_HE_Grenade_shell						{ quality = 2; price = 70; };
	class 3Rnd_HE_Grenade_shell						{ quality = 3; price = 70*3; };
	class APERSBoundingMine_Range_Mag				{ quality = 3; price = 500; };
	class APERSMine_Range_Mag						{ quality = 3; price = 600; };
	class APERSTripMine_Wire_Mag					{ quality = 3; price = 300; };
	class ClaymoreDirectionalMine_Remote_Mag		{ quality = 3; price = 350; };
	class DemoCharge_Remote_Mag						{ quality = 3; price = 700; };
	class IEDLandBig_Remote_Mag						{ quality = 3; price = 600; };
	class IEDLandSmall_Remote_Mag					{ quality = 3; price = 300; };
	class IEDUrbanBig_Remote_Mag					{ quality = 3; price = 800; };
	class IEDUrbanSmall_Remote_Mag					{ quality = 3; price = 400; };
	class SatchelCharge_Remote_Mag					{ quality = 3; price = 1000; };
	class SLAMDirectionalMine_Wire_Mag				{ quality = 3; price = 700; };

	class hgun_ACPC2_F 								{ quality = 1; price = 50; };
	class hgun_P07_F 								{ quality = 1; price = 50; };
	class hgun_Pistol_heavy_01_F 					{ quality = 2; price = 80; };
	class hgun_Pistol_heavy_02_F 					{ quality = 2; price = 80; };
	class hgun_Pistol_Signal_F 						{ quality = 9000; price = 100; };
	class hgun_Rook40_F 							{ quality = 1; price = 50; };

	class hgun_PDW2000_F 							{ quality = 1; price = 100; };
	class SMG_01_F 									{ quality = 1; price = 150; };
	class SMG_02_F 									{ quality = 1; price = 150; };

	class arifle_MX_SW_Black_F						{ quality = 2; price = 250; };
	class arifle_MX_SW_F							{ quality = 2; price = 250; };
	class LMG_Mk200_F								{ quality = 2; price = 300; };
	class LMG_Zafir_F								{ quality = 2; price = 350; };
	class MMG_01_hex_F								{ quality = 3; price = 800; };
	class MMG_01_tan_F								{ quality = 3; price = 800; };
	class MMG_02_black_F							{ quality = 3; price = 450; };
	class MMG_02_camo_F								{ quality = 3; price = 450; };
	class MMG_02_sand_F								{ quality = 3; price = 450; };

	class arifle_Katiba_C_F							{ quality = 1; price = 150; };
	class arifle_Katiba_F							{ quality = 1; price = 150; };
	class arifle_Katiba_GL_F						{ quality = 2; price = 200; };
	class arifle_Mk20_F								{ quality = 1; price = 150; };
	class arifle_Mk20_GL_F							{ quality = 2; price = 200; };
	class arifle_Mk20_GL_plain_F					{ quality = 2; price = 200; };
	class arifle_Mk20_plain_F						{ quality = 1; price = 150; };
	class arifle_Mk20C_F							{ quality = 1; price = 150; };
	class arifle_Mk20C_plain_F						{ quality = 1; price = 150; };
	class arifle_MX_Black_F							{ quality = 1; price = 450; };
	class arifle_MX_F								{ quality = 1; price = 450; };
	class arifle_MX_GL_Black_F						{ quality = 2; price = 450; };
	class arifle_MX_GL_F							{ quality = 2; price = 450; };
	class arifle_MXC_Black_F						{ quality = 1; price = 350; };
	class arifle_MXC_F								{ quality = 1; price = 350; };
	class arifle_SDAR_F								{ quality = 3; price = 650; };
	class arifle_TRG20_F							{ quality = 1; price = 250; };
	class arifle_TRG21_F							{ quality = 1; price = 250; };
	class arifle_TRG21_GL_F							{ quality = 2; price = 350; };

	class arifle_MXM_Black_F 						{ quality = 1; price = 550; };
	class arifle_MXM_F 								{ quality = 1; price = 550; };
	class srifle_DMR_01_F 							{ quality = 2; price = 600; };
	class srifle_DMR_02_camo_F 						{ quality = 3; price = 800; };
	class srifle_DMR_02_F 							{ quality = 3; price = 800; };
	class srifle_DMR_02_sniper_F 					{ quality = 3; price = 800; };
	class srifle_DMR_03_F 							{ quality = 3; price = 750; };
	class srifle_DMR_03_khaki_F 					{ quality = 3; price = 750; };
	class srifle_DMR_03_multicam_F 					{ quality = 3; price = 750; };
	class srifle_DMR_03_tan_F 						{ quality = 3; price = 750; };
	class srifle_DMR_03_woodland_F 					{ quality = 3; price = 750; };
	class srifle_DMR_04_F 							{ quality = 3; price = 700; };
	class srifle_DMR_04_Tan_F 						{ quality = 3; price = 700; };
	class srifle_DMR_05_blk_F 						{ quality = 3; price = 850; };
	class srifle_DMR_05_hex_F 						{ quality = 3; price = 850; };
	class srifle_DMR_05_tan_f 						{ quality = 3; price = 850; };
	class srifle_DMR_06_camo_F 						{ quality = 3; price = 800; };
	class srifle_DMR_06_olive_F 					{ quality = 3; price = 800; };
	class srifle_EBR_F 								{ quality = 2; price = 700; };
	class srifle_GM6_camo_F 						{ quality = 3; price = 900; };
	class srifle_GM6_F 								{ quality = 3; price = 900; };
	class srifle_LRR_camo_F 						{ quality = 3; price = 850; };
	class srifle_LRR_F 								{ quality = 3; price = 850; };

	class Extremo_Bike_OldBike 						{ quality = 1; price = 40; };
	class Extremo_Bike_MountainBike 					{ quality = 1; price = 50; };

	class Extremo_Bike_QuadBike_Black					{ quality = 1; price = 2500; };
	class Extremo_Bike_QuadBike_Blue					{ quality = 1; price = 2500; };
	class Extremo_Bike_QuadBike_Red					{ quality = 1; price = 2500; };
	class Extremo_Bike_QuadBike_White					{ quality = 1; price = 2500; };
	class Extremo_Bike_QuadBike_Nato					{ quality = 1; price = 2500; };
	class Extremo_Bike_QuadBike_Csat					{ quality = 1; price = 2500; };
	class Extremo_Bike_QuadBike_Fia					{ quality = 1; price = 2500; };
	class Extremo_Bike_QuadBike_Guerilla01			{ quality = 1; price = 2500; };
	class Extremo_Bike_QuadBike_Guerilla02			{ quality = 1; price = 2500; };

	class Extremo_Car_Kart_BluKing					{ quality = 1; price = 1100; };
	class Extremo_Car_Kart_RedStone					{ quality = 1; price = 1100; };
	class Extremo_Car_Kart_Vrana						{ quality = 1; price = 1100; };
	class Extremo_Car_Kart_Green						{ quality = 1; price = 1100; };
	class Extremo_Car_Kart_Blue						{ quality = 1; price = 1100; };
	class Extremo_Car_Kart_Orange						{ quality = 1; price = 1100; };
	class Extremo_Car_Kart_White						{ quality = 1; price = 1100; };
	class Extremo_Car_Kart_Yellow						{ quality = 1; price = 1100; };
	class Extremo_Car_Kart_Black						{ quality = 1; price = 1100; };

	class Extremo_Boat_MotorBoat_Police				{ quality = 1; price = 700; };
	class Extremo_Boat_MotorBoat_Orange				{ quality = 1; price = 700; };
	class Extremo_Boat_MotorBoat_White				{ quality = 1; price = 700; };

	class Extremo_Boat_RubberDuck_CSAT				{ quality = 1; price = 500; };
	class Extremo_Boat_RubberDuck_Digital				{ quality = 1; price = 500; };
	class Extremo_Boat_RubberDuck_Orange				{ quality = 1; price = 500; };
	class Extremo_Boat_RubberDuck_Blue				{ quality = 1; price = 500; };
	class Extremo_Boat_RubberDuck_Black				{ quality = 1; price = 500; };

	class Extremo_Boat_SDV_CSAT						{ quality = 1; price = 11000; };
	class Extremo_Boat_SDV_Digital					{ quality = 1; price = 11000; };
	class Extremo_Boat_SDV_Grey						{ quality = 1; price = 11000; };

	class Extremo_Chopper_Hellcat_Green				{ quality = 1; price = 27500; };
	class Extremo_Chopper_Hellcat_FIA					{ quality = 1; price = 27500; };

	class Extremo_Chopper_Hummingbird_Green			{ quality = 1; price = 23000; };

	class Extremo_Chopper_Hummingbird_Civillian_Blue				{ quality = 1; price = 17000; };
	class Extremo_Chopper_Hummingbird_Civillian_Red				{ quality = 1; price = 17000; };
	class Extremo_Chopper_Hummingbird_Civillian_ION				{ quality = 1; price = 17000; };
	class Extremo_Chopper_Hummingbird_Civillian_BlueLine			{ quality = 1; price = 17000; };
	class Extremo_Chopper_Hummingbird_Civillian_Digital			{ quality = 1; price = 17000; };
	class Extremo_Chopper_Hummingbird_Civillian_Elliptical		{ quality = 1; price = 17000; };
	class Extremo_Chopper_Hummingbird_Civillian_Furious			{ quality = 1; price = 17000; };
	class Extremo_Chopper_Hummingbird_Civillian_GrayWatcher		{ quality = 1; price = 17000; };
	class Extremo_Chopper_Hummingbird_Civillian_Jeans				{ quality = 1; price = 17000; };
	class Extremo_Chopper_Hummingbird_Civillian_Light				{ quality = 1; price = 17000; };
	class Extremo_Chopper_Hummingbird_Civillian_Shadow			{ quality = 1; price = 17000; };
	class Extremo_Chopper_Hummingbird_Civillian_Sheriff			{ quality = 1; price = 17000; };
	class Extremo_Chopper_Hummingbird_Civillian_Speedy			{ quality = 1; price = 17000; };
	class Extremo_Chopper_Hummingbird_Civillian_Sunset			{ quality = 1; price = 17000; };
	class Extremo_Chopper_Hummingbird_Civillian_Vrana				{ quality = 1; price = 17000; };
	class Extremo_Chopper_Hummingbird_Civillian_Wasp				{ quality = 1; price = 17000; };
	class Extremo_Chopper_Hummingbird_Civillian_Wave				{ quality = 1; price = 17000; };

	class Extremo_Chopper_Huron_Black								{ quality = 1; price = 50000; };
	class Extremo_Chopper_Huron_Green								{ quality = 1; price = 50000; };

	class Extremo_Chopper_Mohawk_FIA								{ quality = 1; price = 45000; };

	class Extremo_Chopper_Orca_CSAT								{ quality = 1; price = 28000; };
	class Extremo_Chopper_Orca_Black								{ quality = 1; price = 28000; };
	class Extremo_Chopper_Orca_BlackCustom						{ quality = 1; price = 28000; };

	class Extremo_Chopper_Taru_Transport_CSAT						{ quality = 1; price = 17000; };
	class Extremo_Chopper_Taru_Transport_Black					{ quality = 1; price = 17000; };
	
	class Extremo_Chopper_Taru_CSAT								{ quality = 1; price = 33000; };
	class Extremo_Chopper_Taru_Black								{ quality = 1; price = 33000; };

	class Extremo_Chopper_Taru_Covered_CSAT						{ quality = 1; price = 43000; };
	class Extremo_Chopper_Taru_Covered_Black						{ quality = 1; price = 43000; };

	class Extremo_Plane_Cessna									{ quality = 1; price = 16500; };

	class Extremo_Car_Hatchback_Beige						{ quality = 1; price = 12000; };
	class Extremo_Car_Hatchback_Green						{ quality = 1; price = 12000; };
	class Extremo_Car_Hatchback_Blue						{ quality = 1; price = 12000; };
	class Extremo_Car_Hatchback_BlueCustom				{ quality = 1; price = 12000; };
	class Extremo_Car_Hatchback_BeigeCustom				{ quality = 1; price = 12000; };
	class Extremo_Car_Hatchback_Yellow					{ quality = 1; price = 12000; };
	class Extremo_Car_Hatchback_Grey						{ quality = 1; price = 12000; };
	class Extremo_Car_Hatchback_Black						{ quality = 1; price = 12000; };
	class Extremo_Car_Hatchback_Dark						{ quality = 1; price = 12000; };
	class Extremo_Car_Hatchback_Rusty1					{ quality = 1; price = 12000; };
	class Extremo_Car_Hatchback_Rusty2					{ quality = 1; price = 12000; };
	class Extremo_Car_Hatchback_Rusty3					{ quality = 1; price = 12000; };

	class Extremo_Car_Ikarus_Blue 				{ quality = 1; price = 17000; };
	class Extremo_Car_Ikarus_Red 					{ quality = 1; price = 17000; };
	class Extremo_Car_Ikarus_Party 				{ quality = 1; price = 17000; };

	class Extremo_Car_Ural_Open_Blue			{ quality = 1; price = 25000; };
	class Extremo_Car_Ural_Open_Yellow		{ quality = 1; price = 25000; };
	class Extremo_Car_Ural_Open_Worker		{ quality = 1; price = 25000; };
	class Extremo_Car_Ural_Open_Military		{ quality = 1; price = 25000; };

	class Extremo_Car_Ural_Covered_Blue			{ quality = 1; price = 28000; };
	class Extremo_Car_Ural_Covered_Yellow			{ quality = 1; price = 28000; };
	class Extremo_Car_Ural_Covered_Worker			{ quality = 1; price = 28000; };
	class Extremo_Car_Ural_Covered_Military		{ quality = 1; price = 28000; };

	class Extremo_Car_SUVXL_Black 				{ quality = 1; price = 20000; };

	class Extremo_Car_Lada_Green 				{ quality = 1; price = 6000; };
	class Extremo_Car_Lada_Taxi 				{ quality = 1; price = 6000; };
	class Extremo_Car_Lada_Red 				{ quality = 1; price = 6000; };
	class Extremo_Car_Lada_White 				{ quality = 1; price = 6000; };
	class Extremo_Car_Lada_Hipster 			{ quality = 1; price = 6000; };

	class Extremo_Car_Volha_Blue				{ quality = 1; price = 6000; };
	class Extremo_Car_Volha_White				{ quality = 1; price = 6000; };
	class Extremo_Car_Volha_Black				{ quality = 1; price = 6000; };

	class Extremo_Car_Hatchback_Sport_Red					{ quality = 1; price = 14000; };
	class Extremo_Car_Hatchback_Sport_Blue				{ quality = 1; price = 14000; };
	class Extremo_Car_Hatchback_Sport_Orange				{ quality = 1; price = 14000; };
	class Extremo_Car_Hatchback_Sport_White				{ quality = 1; price = 14000; };
	class Extremo_Car_Hatchback_Sport_Beige				{ quality = 1; price = 14000; };
	class Extremo_Car_Hatchback_Sport_Green				{ quality = 1; price = 14000; };

	class Extremo_Car_HEMMT 								{ quality = 1; price = 48000; };

	class Extremo_Car_Hunter 								{ quality = 1; price = 26500; };

	class Extremo_Car_Ifrit 								{ quality = 1; price = 23000; };

	class Extremo_Car_Offroad_Red							{ quality = 1; price = 16000; };
	class Extremo_Car_Offroad_Beige						{ quality = 1; price = 16000; };
	class Extremo_Car_Offroad_White						{ quality = 1; price = 16000; };
	class Extremo_Car_Offroad_Blue						{ quality = 1; price = 16000; };
	class Extremo_Car_Offroad_DarkRed						{ quality = 1; price = 16000; };
	class Extremo_Car_Offroad_BlueCustom					{ quality = 1; price = 16000; };
	class Extremo_Car_Offroad_Guerilla01					{ quality = 1; price = 16000; };
	class Extremo_Car_Offroad_Guerilla02					{ quality = 1; price = 16000; };
	class Extremo_Car_Offroad_Guerilla03					{ quality = 1; price = 16000; };
	class Extremo_Car_Offroad_Guerilla04					{ quality = 1; price = 16000; };
	class Extremo_Car_Offroad_Guerilla05					{ quality = 1; price = 16000; };
	class Extremo_Car_Offroad_Guerilla06					{ quality = 1; price = 16000; };
	class Extremo_Car_Offroad_Guerilla07					{ quality = 1; price = 16000; };
	class Extremo_Car_Offroad_Guerilla08					{ quality = 1; price = 16000; };
	class Extremo_Car_Offroad_Guerilla09					{ quality = 1; price = 16000; };
	class Extremo_Car_Offroad_Guerilla10					{ quality = 1; price = 16000; };
	class Extremo_Car_Offroad_Guerilla11					{ quality = 1; price = 16000; };
	class Extremo_Car_Offroad_Guerilla12					{ quality = 1; price = 16000; };
	class Extremo_Car_Offroad_Rusty1						{ quality = 1; price = 16000; };
	class Extremo_Car_Offroad_Rusty2						{ quality = 1; price = 16000; };
	class Extremo_Car_Offroad_Rusty3						{ quality = 1; price = 16000; };

	class Extremo_Car_Offroad_Armed_Guerilla01 			{ quality = 1; price = 25000; };
	class Extremo_Car_Offroad_Armed_Guerilla02 			{ quality = 1; price = 25000; };
	class Extremo_Car_Offroad_Armed_Guerilla03 			{ quality = 1; price = 25000; };
	class Extremo_Car_Offroad_Armed_Guerilla04 			{ quality = 1; price = 25000; };
	class Extremo_Car_Offroad_Armed_Guerilla05 			{ quality = 1; price = 25000; };
	class Extremo_Car_Offroad_Armed_Guerilla06 			{ quality = 1; price = 25000; };
	class Extremo_Car_Offroad_Armed_Guerilla07 			{ quality = 1; price = 25000; };
	class Extremo_Car_Offroad_Armed_Guerilla08 			{ quality = 1; price = 25000; };
	class Extremo_Car_Offroad_Armed_Guerilla09 			{ quality = 1; price = 25000; };
	class Extremo_Car_Offroad_Armed_Guerilla10 			{ quality = 1; price = 25000; };
	class Extremo_Car_Offroad_Armed_Guerilla11 			{ quality = 1; price = 25000; };
	class Extremo_Car_Offroad_Armed_Guerilla12 			{ quality = 1; price = 25000; };

	class Extremo_Car_Offroad_Repair_Civillian 			{ quality = 1; price = 12500; };
	class Extremo_Car_Offroad_Repair_Red 					{ quality = 1; price = 12500; };
	class Extremo_Car_Offroad_Repair_Beige 				{ quality = 1; price = 12500; };
	class Extremo_Car_Offroad_Repair_White 				{ quality = 1; price = 12500; };
	class Extremo_Car_Offroad_Repair_Blue 				{ quality = 1; price = 12500; };
	class Extremo_Car_Offroad_Repair_DarkRed 				{ quality = 1; price = 12500; };
	class Extremo_Car_Offroad_Repair_BlueCustom 			{ quality = 1; price = 12500; };
	class Extremo_Car_Offroad_Repair_Guerilla01 			{ quality = 1; price = 12500; };
	class Extremo_Car_Offroad_Repair_Guerilla02 			{ quality = 1; price = 12500; };
	class Extremo_Car_Offroad_Repair_Guerilla03 			{ quality = 1; price = 12500; };
	class Extremo_Car_Offroad_Repair_Guerilla04 			{ quality = 1; price = 12500; };
	class Extremo_Car_Offroad_Repair_Guerilla05 			{ quality = 1; price = 12500; };
	class Extremo_Car_Offroad_Repair_Guerilla06 			{ quality = 1; price = 12500; };
	class Extremo_Car_Offroad_Repair_Guerilla07 			{ quality = 1; price = 12500; };
	class Extremo_Car_Offroad_Repair_Guerilla08 			{ quality = 1; price = 12500; };
	class Extremo_Car_Offroad_Repair_Guerilla09 			{ quality = 1; price = 12500; };
	class Extremo_Car_Offroad_Repair_Guerilla10 			{ quality = 1; price = 12500; };
	class Extremo_Car_Offroad_Repair_Guerilla11 			{ quality = 1; price = 12500; };
	class Extremo_Car_Offroad_Repair_Guerilla12 			{ quality = 1; price = 12500; };

	class Extremo_Car_Strider 							{ quality = 1; price = 44000; };

	class Extremo_Car_SUV_Red 							{ quality = 1; price = 14000; };
	class Extremo_Car_SUV_Black 							{ quality = 1; price = 14000; };
	class Extremo_Car_SUV_Grey 							{ quality = 1; price = 14000; };
	class Extremo_Car_SUV_Orange 							{ quality = 1; price = 14000; };

	class Extremo_Car_Tempest 							{ quality = 1; price = 48300; };

	class Extremo_Car_Van_Black 							{ quality = 1; price = 12000; };
	class Extremo_Car_Van_White 							{ quality = 1; price = 12000; };
	class Extremo_Car_Van_Red 							{ quality = 1; price = 12000; };
	class Extremo_Car_Van_Guerilla01 						{ quality = 1; price = 12000; };
	class Extremo_Car_Van_Guerilla02 						{ quality = 1; price = 12000; };
	class Extremo_Car_Van_Guerilla03 						{ quality = 1; price = 12000; };
	class Extremo_Car_Van_Guerilla04 						{ quality = 1; price = 12000; };
	class Extremo_Car_Van_Guerilla05 						{ quality = 1; price = 12000; };
	class Extremo_Car_Van_Guerilla06 						{ quality = 1; price = 12000; };
	class Extremo_Car_Van_Guerilla07 						{ quality = 1; price = 12000; };
	class Extremo_Car_Van_Guerilla08 						{ quality = 1; price = 12000; };

	class Extremo_Car_Van_Box_Black 						{ quality = 1; price = 17000; };
	class Extremo_Car_Van_Box_White 						{ quality = 1; price = 17000; };
	class Extremo_Car_Van_Box_Red 						{ quality = 1; price = 17000; };
	class Extremo_Car_Van_Box_Guerilla01 					{ quality = 1; price = 17000; };
	class Extremo_Car_Van_Box_Guerilla02 					{ quality = 1; price = 17000; };
	class Extremo_Car_Van_Box_Guerilla03 					{ quality = 1; price = 17000; };
	class Extremo_Car_Van_Box_Guerilla04 					{ quality = 1; price = 17000; };
	class Extremo_Car_Van_Box_Guerilla05 					{ quality = 1; price = 17000; };
	class Extremo_Car_Van_Box_Guerilla06 					{ quality = 1; price = 17000; };
	class Extremo_Car_Van_Box_Guerilla07 					{ quality = 1; price = 17000; };
	class Extremo_Car_Van_Box_Guerilla08 					{ quality = 1; price = 17000; };

	class Extremo_Car_Van_Fuel_Black 						{ quality = 1; price = 15000; };
	class Extremo_Car_Van_Fuel_White 						{ quality = 1; price = 15000; };
	class Extremo_Car_Van_Fuel_Red 						{ quality = 1; price = 15000; };
	class Extremo_Car_Van_Fuel_Guerilla01 				{ quality = 1; price = 15000; };
	class Extremo_Car_Van_Fuel_Guerilla02 				{ quality = 1; price = 15000; };
	class Extremo_Car_Van_Fuel_Guerilla03 				{ quality = 1; price = 15000; };

	class Extremo_Car_Zamak 								{ quality = 1; price = 43000; };
};
class CfgFlags 
{
	class USA
	{
		name = "USA";
		texture = "\A3\Data_F\Flags\flag_us_co.paa";
		uid = "";
	};
};
class CfgInteractionMenus
{
	class Car 
	{
		targetType = 2;
		target = "Car";

		class Actions 
		{
			class ScanLock: ExtremoAbstractAction
			{
				title = "Scan Lock";
				condition = "('Extremo_Item_ThermalScannerPro' in (magazines player)) && !ExtremoPlayerInSafezone && ((locked ExtremoClientInteractionObject) != 1)";
				action = "_this call Extremo_fnc_object_lock_scan";
			};

			class Lock: ExtremoAbstractAction
			{
				title = "Lock";
				condition = "((locked ExtremoClientInteractionObject) isEqualTo 0) && ((locked ExtremoClientInteractionObject) != 1)";
				action = "true spawn Extremo_fnc_object_lock_toggle";
			};

			class Unlock: ExtremoAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExtremoClientInteractionObject) isEqualTo 2) && ((locked ExtremoClientInteractionObject) != 1)";
				action = "false spawn Extremo_fnc_object_lock_toggle";
			};

			class Repair: ExtremoAbstractAction
			{
				title = "Repair";
				condition = "call Extremo_fnc_object_vehicle_interaction_show";
				action = "_this call Extremo_fnc_object_vehicle_Repair";
			};

			class Flip: ExtremoAbstractAction
			{
				title = "Flip";
				condition = "call Extremo_fnc_object_vehicle_interaction_show";
				action = "_this call Extremo_fnc_object_vehicle_flip";
			};

			class Refuel: ExtremoAbstractAction
			{
				title = "Refuel";
				condition = "call Extremo_fnc_object_vehicle_interaction_show";
				action = "_this call Extremo_fnc_object_vehicle_refuel";
			};

			class DrainFuel: ExtremoAbstractAction
			{
				title = "Drain Fuel";
				condition = "call Extremo_fnc_object_vehicle_interaction_show";
				action = "_this call Extremo_fnc_object_vehicle_drain";
			};
		};
	};

	class Air
	{
		target = "Air";
		targetType = 2;

		class Actions
		{
			class ScanLock: ExtremoAbstractAction
			{
				title = "Scan Lock";
				condition = "('Extremo_Item_ThermalScannerPro' in (magazines player)) && ((locked ExtremoClientInteractionObject) != 1) && !ExtremoPlayerInSafezone";
				action = "_this call Extremo_fnc_object_lock_scan";
			};

			class Lock: ExtremoAbstractAction
			{
				title = "Lock";
				condition = "((locked ExtremoClientInteractionObject) isEqualTo 0) && ((locked ExtremoClientInteractionObject) != 1)";
				action = "true spawn Extremo_fnc_object_lock_toggle";
			};

			class Unlock: ExtremoAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExtremoClientInteractionObject) isEqualTo 2) && ((locked ExtremoClientInteractionObject) != 1)";
				action = "false spawn Extremo_fnc_object_lock_toggle";
			};

			class Repair: ExtremoAbstractAction
			{
				title = "Repair";
				condition = "call Extremo_fnc_object_vehicle_interaction_show";
				action = "_this call Extremo_fnc_object_vehicle_Repair";
			};

			class Flip: ExtremoAbstractAction
			{
				title = "Flip";
				condition = "call Extremo_fnc_object_vehicle_interaction_show";
				action = "_this call Extremo_fnc_object_vehicle_flip";
			};

			class Refuel: ExtremoAbstractAction
			{
				title = "Refuel";
				condition = "call Extremo_fnc_object_vehicle_interaction_show";
				action = "_this call Extremo_fnc_object_vehicle_refuel";
			};

			class DrainFuel: ExtremoAbstractAction
			{
				title = "Drain Fuel";
				condition = "call Extremo_fnc_object_vehicle_interaction_show";
				action = "_this call Extremo_fnc_object_vehicle_drain";
			};

			class RotateLeft: ExtremoAbstractAction
			{
				title = "Rotate Left";	
				condition = "call Extremo_fnc_object_vehicle_interaction_show";
				action = "[ExtremoClientInteractionObject,-15] call Extremo_fnc_object_vehicle_rotate";
			};

			class RotateRight: ExtremoAbstractAction
			{
				title = "Rotate Right";
				condition = "call Extremo_fnc_object_vehicle_interaction_show";
				action = "[ExtremoClientInteractionObject,15] call Extremo_fnc_object_vehicle_rotate";
			};
		};
	};

	class Safe
	{
		targetType = 2;
		target = "Extremo_Container_Safe";

		class Actions 
		{
			class ScanLock: ExtremoAbstractAction
			{
				title = "Scan Lock";
				condition = "('Extremo_Item_ThermalScannerPro' in (magazines player)) && !((ExtremoClientInteractionObject getvariable ['ExtremoIsLocked',1]) isEqualTo 1) && !ExtremoPlayerInSafezone";
				action = "_this call Extremo_fnc_object_lock_scan";
			};

			class Lock : ExtremoAbstractAction
			{
				title = "Lock";
				condition = "((ExtremoClientInteractionObject getvariable ['ExtremoIsLocked',1]) isEqualTo 0)";
				action = "true spawn Extremo_fnc_object_lock_toggle";
			};

			class Unlock : ExtremoAbstractAction
			{
				title = "Unlock";
				condition = "((ExtremoClientInteractionObject getvariable ['ExtremoIsLocked',1]) isEqualTo -1)";
				action = "false spawn Extremo_fnc_object_lock_toggle";
			};

			class Pack : ExtremoAbstractAction
			{
				title = "Pack";
				condition = "((ExtremoClientInteractionObject getvariable ['ExtremoIsLocked',1]) isEqualTo 0)";
				action = "_this spawn Extremo_fnc_object_container_pack";
			};

			class SetPinCode : ExtremoAbstractAction
			{
				title = "Set PIN";
				condition = "((ExtremoClientInteractionObject getvariable ['ExtremoIsLocked',1]) isEqualTo 0)";
				action = "_this spawn Extremo_fnc_Object_lock_SetPin";
			};
		};
	};

	class Laptop
	{
		targetType = 2;
		target = "Extremo_Construction_Laptop_Static";

		class Actions
		{
			class CameraSystem: ExtremoAbstractAction
			{
				title = "CCTV Access";
				condition = "((ExtremoClientInteractionObject animationPhase 'LaptopLidRotation') >= 0.5)";
				action = "_this call Extremo_fnc_gui_baseCamera_show";
			};
		};
	};

	class SupplyBox
	{
		targetType = 2;
		target = "Extremo_Container_SupplyBox";

		class Actions
		{
			class Mount: ExtremoAbstractAction
			{
				title = "Mount";
				condition = "isNull (attachedTo ExtremoClientInteractionObject)";
				action = "_this call Extremo_fnc_object_supplyBox_mount";
			};

			class Install: ExtremoAbstractAction
			{
				title = "Install";
				condition = "isNull (attachedTo ExtremoClientInteractionObject)";
				action = "_this call Extremo_fnc_object_supplyBox_install";
			};

			class Unmount: ExtremoAbstractAction
			{
				title = "Unmount";
				condition = "!(isNull (attachedTo ExtremoClientInteractionObject))";
				action = "_this call Extremo_fnc_object_supplyBox_unmount";
			};
		};
	};

	class Construction
	{
		targetType = 2;
		target = "Extremo_Construction_Abstract_Static";

		class Actions 
		{
			class ScanLock: ExtremoAbstractAction
			{
				title = "Scan Lock";
				condition = "('Extremo_Item_ThermalScannerPro' in (magazines player)) && !((ExtremoClientInteractionObject getvariable ['ExtremoIsLocked',1]) isEqualTo 1)";
				action = "_this call Extremo_fnc_object_lock_scan";
			};

			class Unlock : ExtremoAbstractAction
			{
				title = "Unlock";
				condition = "((ExtremoClientInteractionObject getvariable ['ExtremoIsLocked',1]) isEqualTo -1)";
				action = "false spawn Extremo_fnc_object_lock_toggle";
			};

			class Lock : ExtremoAbstractAction
			{
				title = "Lock";
				condition = "((ExtremoClientInteractionObject getvariable ['ExtremoIsLocked',1]) isEqualTo 0)";
				action = "true spawn Extremo_fnc_object_lock_toggle";
			};

			class Move: ExtremoAbstractAction
			{
				title = "Move";
				condition = "true";
				action = "_this spawn Extremo_fnc_object_construction_move";
			};

			class Deconstruct: ExtremoAbstractAction
			{
				title = "Remove";
				condition = "true";
				action = "_this spawn Extremo_fnc_object_construction_deconstruct";
			};

			class AddALock : ExtremoAbstractAction
			{
				title = "Add a Lock";
				condition = "call Extremo_fnc_object_construction_lockAddShow";
				action = "_this spawn Extremo_fnc_object_construction_lockAdd";
			};

			class Upgrade : ExtremoAbstractAction
			{
				title = "Upgrade";
				condition = "call Extremo_fnc_object_construction_upgradeShow";
				action = "_this call Extremo_fnc_object_construction_upgrade";
			};

		};
	};

	class Container 
	{
		targetType = 2;
		target = "Extremo_Container_Abstract";

		class Actions 
		{
			class Pack 
			{
				title = "Pack";
				condition = "true";
				action = "_this spawn Extremo_fnc_object_container_pack";
			};
		};
	};

	class Flag
	{
		targetType = 2;
		target = "Extremo_Construction_Flag_Static";

		class Actions
		{
			class Upgrade: ExtremoAbstractAction
			{
				title = "Upgrade";
				condition = "true";
				action = "_this call Extremo_fnc_gui_upgradeterritoryDialog_request";
			};
		};
	};

	class Boat 
	{
		targetType = 2;
		target = "Ship";

		class Actions
		{

			class Lock: ExtremoAbstractAction
			{
				title = "Lock";
				condition = "((locked ExtremoClientInteractionObject) isEqualTo 0) && ((locked ExtremoClientInteractionObject) != 1)";
				action = "true spawn Extremo_fnc_object_lock_toggle";
			};

			class Unlock: ExtremoAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExtremoClientInteractionObject) isEqualTo 2) && ((locked ExtremoClientInteractionObject) != 1)";
				action = "false spawn Extremo_fnc_object_lock_toggle";
			};

			class Repair: ExtremoAbstractAction
			{
				title = "Repair";
				condition = "call Extremo_fnc_object_vehicle_interaction_show";
				action = "_this call Extremo_fnc_object_vehicle_Repair";
			};

			class Refuel: ExtremoAbstractAction
			{
				title = "Refuel";
				condition = "call Extremo_fnc_object_vehicle_interaction_show";
				action = "_this call Extremo_fnc_object_vehicle_refuel";
			};

			class DrainFuel: ExtremoAbstractAction
			{
				title = "Drain Fuel";
				condition = "call Extremo_fnc_object_vehicle_interaction_show";
				action = "_this call Extremo_fnc_object_vehicle_drain";
			};

			class Push: ExtremoAbstractAction
			{
				title = "Fus Ro Dah!";
				condition = "((crew ExtremoClientInteractionObject) isEqualTo [])";
				action = "_this call Extremo_fnc_object_vehicle_push";
			};
		};
	};

	class Bikes
	{
		targetType = 2;
		target = "Bicycle";

		class Actions
		{
			class Flip: ExtremoAbstractAction
			{
				title = "Flip";
				condition = "true";
				action = "_this call Extremo_fnc_object_vehicle_flip";
			};
			class Scrap: ExtremoAbstractAction
			{
				title = "Scrap";
				condition = "true";
				action = "execVM 'scripts\bikescrap.sqf';";
			};
		};
	};

	class Player 
	{
		targetType = 2;
		target = "Extremo_Unit_Player";

		class Actions 
		{
			class Free: ExtremoAbstractAction
			{
				title = "Free";
				condition = "(alive ExtremoClientInteractionObject) && (ExtremoClientInteractionObject getVariable ['ExtremoIsHandcuffed', false]) && !ExtremoClientIsHandcuffed";
				action = "_this call Extremo_fnc_object_handcuffs_free";
			};
			
			class Search: ExtremoAbstractAction
			{
				title = "Search Gear";
				condition = "(alive ExtremoClientInteractionObject) && (ExtremoClientInteractionObject getVariable ['ExtremoIsHandcuffed', false]) && !ExtremoClientIsHandcuffed";
				action = "_this call Extremo_fnc_object_handcuffs_searchGear";
			};

			class Identify: ExtremoAbstractAction
			{
				title = "Identify Body";
				condition = "!(alive ExtremoClientInteractionObject)";
				action = "_this call Extremo_fnc_object_player_identifyBody";
			};
		};
	};
};
class CfgInteractionModels
{
	class WaterSource
	{
		name = "Water tanks, barrels, coolers or pumps";
		models[] = 	
		{
			"barrelwater_f", 
			"barrelwater_grey_f",
			"waterbarrel_f",
			"Extremo_Container_WoodBucket",
			"watertank_f",
			"stallwater_f",
			"waterpump_01_f",
			"water_source_f"
		};
	};

	class CleanWaterSource
	{
		name = "Water cooler";
		models[] = 	
		{
			"watercooler"
		};
	};

	class WorkBench
	{
		name = "Work Bench";
		models[] = 
		{
			"workstand_f.p3d"
		};
	};

	class WoodSource
	{
		name = "Trees";
		models[] = 
		{
			" t_",
			" bo_t_",

			// A2 trees
            " str_",
            " Smrk_",
            " les_",
            " brg_"			
		};
	};

	class BushSource
	{
		name = "Bushes";
		models[] = {" b_"};
	};

	class StoneSource
	{
		name = "Stones, stone walls or rocks";
		models[] = 
		{
			"stone",
			"Stone",
			"Rock",
			"rock",
			"cobble",
			"Cobble",
			"sea_wall_f.p3d"
		};
	};

	class FuelSource
	{
		name = "Fuel pumps, stations or barrels";
		models[] = 
		{
			"fuelstation_feed_f.p3d",
			"metalbarrel_f.p3d",
			"flexibletank_01_f.p3d",
			"fs_feed_f.p3d"
		};	
	};

	class Wrecks
	{
		name = "Wrecks";
		models[] = 
		{
			"wreck_"
		};
	};

	class Trash
	{
		name = "Trash";
		models[] = 
		{
			"trash",
			"garbage",
			"crabcages_f.p3d",
			"fishinggear",
			"junkpile_f.p3d",
			"wheeliebin_01_f.p3d"
		};
	};
};
class CfgTerritories
{

	prices[] = 
	{
		// Purchase Price 		Radius 		Number of Objects
		{5000,					15,			30 					}, // Level 1
		{10000,					30,			60 					}, // Level 2 
		{15000,					45,			90 					}, // Level 3
		{20000,					60,			120					}, // Level 4
		{25000,					75,			150					}, // Level 5
		{30000,					90,			180					}, // Level 6
		{35000,					105,		210					}, // Level 7
		{40000,					120,		240					}, // Level 8
		{45000,					135,		270					}, // Level 9
		{50000,					150,		300					}  // Level 10
	};

	maximumRadius = 150;

	minimumDistanceToOtherTerritories = 325; 

	maximumNumberOfTerritoriesPerPlayer = 2;


	minimumDistanceToTraderZones = 1000;

	minimumDistanceToSpawnZones = 1000;

	popTabAmountPerObject = 10;
	respectAmountPerObject = 5;
};
class CfgTraderCategories 
{
	class Community
	{
		name = "Community Items";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community2
	{
		name = "Community Items 2";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community3
	{
		name = "Community Items 3";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community4
	{
		name = "Community Items 4";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community5
	{
		name = "Community Items 5";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community6
	{
		name = "Community Items 6";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community7
	{
		name = "Community Items 7";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community8
	{
		name = "Community Items 8";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community9
	{
		name = "Community Items 9";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community10
	{
		name = "Community Items 10";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Uniforms
	{
		name = "Uniforms";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			"U_C_Journalist",
			"U_C_Poloshirt_blue",
			"U_C_Poloshirt_burgundy",
			"U_C_Poloshirt_salmon",
			"U_C_Poloshirt_stripped",
			"U_C_Poloshirt_tricolour",
			"U_C_Poor_1",
			"U_C_Poor_2",
			"U_C_Poor_shorts_1",
			"U_C_Scientist",
			"U_OrestesBody",
			"U_Rangemaster",
			"U_NikosAgedBody",
			"U_NikosBody",
			"U_Competitor",
			"U_B_CombatUniform_mcam",
			"U_B_CombatUniform_mcam_tshirt",
			"U_B_CombatUniform_mcam_vest",
			"U_B_CombatUniform_mcam_worn",
			"U_B_CTRG_1",
			"U_B_CTRG_2",
			"U_B_CTRG_3",
			"U_I_CombatUniform",
			"U_I_CombatUniform_shortsleeve",
			"U_I_CombatUniform_tshirt",
			"U_I_OfficerUniform",
			"U_O_CombatUniform_ocamo",
			"U_O_CombatUniform_oucamo",
			"U_O_OfficerUniform_ocamo",
			"U_B_SpecopsUniform_sgg",
			"U_O_SpecopsUniform_blk",
			"U_O_SpecopsUniform_ocamo",
			"U_I_G_Story_Protagonist_F",
			"Extremo_Uniform_Woodland",
			"U_C_HunterBody_grn",
			"U_IG_Guerilla1_1",
			"U_IG_Guerilla2_1",
			"U_IG_Guerilla2_2",
			"U_IG_Guerilla2_3",
			"U_IG_Guerilla3_1",
			"U_BG_Guerilla2_1",
			"U_IG_Guerilla3_2",
			"U_BG_Guerrilla_6_1",
			"U_BG_Guerilla1_1",
			"U_BG_Guerilla2_2",
			"U_BG_Guerilla2_3",
			"U_BG_Guerilla3_1",
			"U_BG_leader",
			"U_IG_leader",
			"U_I_G_resistanceLeader_F",
			"U_I_Wetsuit",
			"U_O_Wetsuit",
			"U_B_Wetsuit",
			"U_B_survival_uniform",
			"U_B_HeliPilotCoveralls",
			"U_I_HeliPilotCoveralls",
			"U_B_PilotCoveralls",
			"U_I_pilotCoveralls",
			"U_O_PilotCoveralls"
		};
	};

	class Vests
	{
		name = "Vests";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\vest_ca.paa";
		items[] = 
		{
			"V_Press_F",
			"V_Rangemaster_belt",
			"V_TacVest_blk",
			"V_TacVest_blk_POLICE",
			"V_TacVest_brn",
			"V_TacVest_camo",
			"V_TacVest_khk",
			"V_TacVest_oli",
			"V_TacVestCamo_khk",
			"V_TacVestIR_blk",
			"V_I_G_resistanceLeader_F",
			"V_BandollierB_blk",
			"V_BandollierB_cbr",
			"V_BandollierB_khk",
			"V_BandollierB_oli",
			"V_BandollierB_rgr",
			"V_Chestrig_blk",
			"V_Chestrig_khk",
			"V_Chestrig_oli",
			"V_Chestrig_rgr",
			"V_HarnessO_brn",
			"V_HarnessO_gry",
			"V_HarnessOGL_brn",
			"V_HarnessOGL_gry",
			"V_HarnessOSpec_brn",
			"V_HarnessOSpec_gry",
			"V_PlateCarrier1_blk",
			"V_PlateCarrier1_rgr",
			"V_PlateCarrier2_rgr",
			"V_PlateCarrier3_rgr",
			"V_PlateCarrierGL_blk",
			"V_PlateCarrierGL_mtp",
			"V_PlateCarrierGL_rgr",
			"V_PlateCarrierH_CTRG",
			"V_PlateCarrierIA1_dgtl",
			"V_PlateCarrierIA2_dgtl",
			"V_PlateCarrierIAGL_dgtl",
			"V_PlateCarrierIAGL_oli",
			"V_PlateCarrierL_CTRG",
			"V_PlateCarrierSpec_blk",
			"V_PlateCarrierSpec_mtp",
			"V_PlateCarrierSpec_rgr"
		};
	};

	class Headgear 
	{
		name = "Headgear";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\headgear_ca.paa";
		items[] =
		{
			"H_Cap_blk",
			"H_Cap_blk_Raven",
			"H_Cap_blu",
			"H_Cap_brn_SPECOPS",
			"H_Cap_grn",
			"H_Cap_headphones",
			"H_Cap_khaki_specops_UK",
			"H_Cap_oli",
			"H_Cap_press",
			"H_Cap_red",
			"H_Cap_tan",
			"H_Cap_tan_specops_US",
			"H_Watchcap_blk",
			"H_Watchcap_camo",
			"H_Watchcap_khk",
			"H_Watchcap_sgg",
			"H_MilCap_blue",
			"H_MilCap_dgtl",
			"H_MilCap_mcamo",
			"H_MilCap_ocamo",
			"H_MilCap_oucamo",
			"H_MilCap_rucamo",
			"H_Bandanna_camo",
			"H_Bandanna_cbr",
			"H_Bandanna_gry",
			"H_Bandanna_khk",
			"H_Bandanna_khk_hs",
			"H_Bandanna_mcamo",
			"H_Bandanna_sgg",
			"H_Bandanna_surfer",
			"H_Booniehat_dgtl",
			"H_Booniehat_dirty",
			"H_Booniehat_grn",
			"H_Booniehat_indp",
			"H_Booniehat_khk",
			"H_Booniehat_khk_hs",
			"H_Booniehat_mcamo",
			"H_Booniehat_tan",
			"H_Hat_blue",
			"H_Hat_brown",
			"H_Hat_camo",
			"H_Hat_checker",
			"H_Hat_grey",
			"H_Hat_tan",
			"H_StrawHat",
			"H_StrawHat_dark",
			"H_Beret_02",
			"H_Beret_blk",
			"H_Beret_blk_POLICE",
			"H_Beret_brn_SF",
			"H_Beret_Colonel",
			"H_Beret_grn",
			"H_Beret_grn_SF",
			"H_Beret_ocamo",
			"H_Beret_red",
			"H_Shemag_khk",
			"H_Shemag_olive",
			"H_Shemag_olive_hs",
			"H_Shemag_tan",
			"H_ShemagOpen_khk",
			"H_ShemagOpen_tan",
			"H_TurbanO_blk",
			"H_HelmetB",
			"H_HelmetB_black",
			"H_HelmetB_camo",
			"H_HelmetB_desert",
			"H_HelmetB_grass",
			"H_HelmetB_light",
			"H_HelmetB_light_black",
			"H_HelmetB_light_desert",
			"H_HelmetB_light_grass",
			"H_HelmetB_light_sand",
			"H_HelmetB_light_snakeskin",
			"H_HelmetB_paint",
			"H_HelmetB_plain_blk",
			"H_HelmetB_sand",
			"H_HelmetB_snakeskin",
			"H_HelmetCrew_B",
			"H_HelmetCrew_I",
			"H_HelmetCrew_O",
			"H_HelmetIA",
			"H_HelmetIA_camo",
			"H_HelmetIA_net",
			"H_HelmetLeaderO_ocamo",
			"H_HelmetLeaderO_oucamo",
			"H_HelmetO_ocamo",
			"H_HelmetO_oucamo",
			"H_HelmetSpecB",
			"H_HelmetSpecB_blk",
			"H_HelmetSpecB_paint1",
			"H_HelmetSpecB_paint2",
			"H_HelmetSpecO_blk",
			"H_HelmetSpecO_ocamo",
			"H_CrewHelmetHeli_B",
			"H_CrewHelmetHeli_I",
			"H_CrewHelmetHeli_O",
			"H_HelmetCrew_I",
			"H_HelmetCrew_B",
			"H_HelmetCrew_O",
			"H_PilotHelmetHeli_B",
			"H_PilotHelmetHeli_I",
			"H_PilotHelmetHeli_O"
		};
	};


	class PointerAttachments 
	{
		name = "Pointer Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"acc_flashlight",
			"acc_pointer_IR"
		};
	};

	class BipodAttachments 
	{
		name = "Bipod Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itembipod_ca.paa";
		items[] = 
		{
			"bipod_01_F_blk",
			"bipod_01_F_mtp",
			"bipod_01_F_snd",
			"bipod_02_F_blk",
			"bipod_02_F_hex",
			"bipod_02_F_tan",
			"bipod_03_F_blk",
			"bipod_03_F_oli"
		};
	};

	class MuzzleAttachments 
	{
		name = "Suppressor Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemmuzzle_ca.paa";
		items[] = 
		{
			"muzzle_snds_338_black",
			"muzzle_snds_338_green",
			"muzzle_snds_338_sand",
			"muzzle_snds_93mmg",
			"muzzle_snds_93mmg_tan",
			"muzzle_snds_acp",
			"muzzle_snds_B",
			"muzzle_snds_H",
			"muzzle_snds_H_MG",
			"muzzle_snds_H_SW",
			"muzzle_snds_L",
			"muzzle_snds_M"
		};
	};

	class UAVs
	{
		name = "Unmanned Aerial Vehicles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\gps_ca.paa";
		items[] = 
		{
			"I_UavTerminal",
			"I_UAV_01_backpack_F"
		};
	};

	class StaticMGs
	{
		name = "Static Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"O_HMG_01_support_F",
			"O_HMG_01_weapon_F"
		};
	};

	class OpticAttachments 
	{
		name = "Scopes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemoptic_ca.paa";
		items[] = 
		{
			"optic_Aco",
			"optic_ACO_grn",
			"optic_ACO_grn_smg",
			"optic_Aco_smg",
			"optic_AMS",
			"optic_AMS_khk",
			"optic_AMS_snd",
			"optic_Arco",
			"optic_DMS",
			"optic_Hamr",
			"optic_Holosight",
			"optic_Holosight_smg",
			"optic_KHS_blk",
			"optic_KHS_hex",
			"optic_KHS_old",
			"optic_KHS_tan",
			"optic_LRPS",
			"optic_MRCO",
			"optic_MRD",
			"optic_Nightstalker",
			"optic_NVS",
			"optic_SOS",
			//"optic_tws",
			//"optic_tws_mg",
			"optic_Yorris"
		};
	};

	class Hardware 
	{
		name = "Hardware";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Extremo_Item_Rope",
			"Extremo_Item_DuctTape",
			"Extremo_Item_ExtensionCord",
			"Extremo_Item_FuelCanisterEmpty",
			"Extremo_Item_JunkMetal",
			"Extremo_Item_LightBulb",
			"Extremo_Item_MetalBoard",
			"Extremo_Item_MetalPole",
			"Extremo_Item_SafeKit",
			"Extremo_Item_CamoTentKit",
			"Extremo_Item_CodeLock"
			
		};
	};

	class Food 
	{
		name = "Fast Food";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Extremo_Item_EMRE",		
			"Extremo_Item_GloriousKnakworst",
			"Extremo_Item_Surstromming",
			"Extremo_Item_SausageGravy",
			"Extremo_Item_Catfood",
			"Extremo_Item_ChristmasTinner",
			"Extremo_Item_BBQSandwich",
			"Extremo_Item_Dogfood",
			"Extremo_Item_BeefParts",
			"Extremo_Item_Cheathas",
			"Extremo_Item_Noodles",
			"Extremo_Item_SeedAstics",
			"Extremo_Item_Raisins",
			"Extremo_Item_Moobar",
			"Extremo_Item_InstantCoffee"
		};
	};

	class Drinks 
	{
		name = "Drinks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Extremo_Item_PlasticBottleCoffee",
			"Extremo_Item_PowerDrink",
			"Extremo_Item_PlasticBottleFreshWater",
			"Extremo_Item_Beer",
			"Extremo_Item_Whisky",			
			"Extremo_Item_EnergyDrink",
			"Extremo_Item_MountainDupe",
			"Extremo_Item_PlasticBottleEmpty"
		};
	};

	class Tools
	{
		name = "Tools";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Extremo_Item_Matches",
			"Extremo_Item_CookingPot",
			"Extremo_Item_CanOpener",
			"Extremo_Item_Handsaw",
			"Extremo_Item_Pliers",
			"Extremo_Item_Grinder",
			"Binocular",
			"Rangefinder",
			"NVGoggles",
			"NVGoggles_INDEP",
			"NVGoggles_OPFOR",
			"ItemGPS",
			"ItemMap",
			"ItemCompass", 
			"ItemWatch",
			"Extremo_Item_XM8"
		};
	};

	class FirstAid
	{
		name = "FirstAid";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Extremo_Item_InstaDoc",
			"Extremo_Item_Bandage",
			"Extremo_Item_Vishpirin"

			// Not available in 0.9.4!
			//"Extremo_Item_Defibrillator"
		};
	};
	class Navigation
	{
		name = "Special Environment";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"B_Parachute",
			"V_RebreatherB",
			"V_RebreatherIA",
			"V_RebreatherIR"		
		};
	};

	class Backpacks
	{
		name = "Backpacks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\backpack_ca.paa";
		items[] = 
		{
			"B_AssaultPack_blk",
			"B_AssaultPack_cbr",
			"B_AssaultPack_dgtl",
			"B_AssaultPack_khk",
			"B_AssaultPack_mcamo",
			"B_AssaultPack_rgr",
			"B_AssaultPack_sgg",
			"B_Bergen_blk",
			"B_Bergen_mcamo",
			"B_Bergen_rgr",
			"B_Bergen_sgg",
			"B_Carryall_cbr",
			"B_Carryall_khk",
			"B_Carryall_mcamo",
			"B_Carryall_ocamo",
			"B_Carryall_oli",
			"B_Carryall_oucamo",
			"B_FieldPack_blk",
			"B_FieldPack_cbr",
			"B_FieldPack_ocamo",
			"B_FieldPack_oucamo",
			"B_HuntingBackpack",
			"B_Kitbag_cbr",
			"B_Kitbag_mcamo",
			"B_Kitbag_sgg",
			"B_OutdoorPack_blk",
			"B_OutdoorPack_blu",
			"B_OutdoorPack_tan",
			"B_TacticalPack_blk",
			"B_TacticalPack_mcamo",
			"B_TacticalPack_ocamo",
			"B_TacticalPack_oli",
			"B_TacticalPack_rgr"
		};
	};

	class Ammunition
	{
		name = "Ammunition";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"100Rnd_65x39_caseless_mag",
			"100Rnd_65x39_caseless_mag_Tracer",
			"10Rnd_127x54_Mag",
			"10Rnd_338_Mag",
			"10Rnd_762x54_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"11Rnd_45ACP_Mag",
			//"130Rnd_338_Mag", SPMG
			"150Rnd_762x54_Box",
			"150Rnd_762x54_Box_Tracer",
			//"150Rnd_93x64_Mag", // NAVID
			"16Rnd_9x21_Mag",
			"200Rnd_65x39_cased_Box",
			"200Rnd_65x39_cased_Box_Tracer",
			"20Rnd_556x45_UW_mag",
			"20Rnd_762x51_Mag",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01_tracer_green",
			"30Rnd_45ACP_Mag_SMG_01_Tracer_Red",
			"30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green_mag_Tracer",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag_Tracer",
			"30Rnd_9x21_Mag",
			"5Rnd_127x108_APDS_Mag",
			"5Rnd_127x108_Mag",
			"6Rnd_45ACP_Cylinder",
			"6Rnd_GreenSignal_F",
			"6Rnd_RedSignal_F",
			"7Rnd_408_Mag",
			"9Rnd_45ACP_Mag"
		};
	};

	class Flares 
	{
		name = "Flares";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Chemlight_blue",
			"Chemlight_green",
			"Chemlight_red",
			"FlareGreen_F",
			"FlareRed_F",
			"FlareWhite_F",
			"FlareYellow_F",
			"UGL_FlareGreen_F",
			"UGL_FlareRed_F",
			"UGL_FlareWhite_F",
			"UGL_FlareYellow_F",
			"3Rnd_UGL_FlareGreen_F",
			"3Rnd_UGL_FlareRed_F",
			"3Rnd_UGL_FlareWhite_F",
			"3Rnd_UGL_FlareYellow_F"
		};
	};

	class Smokes 
	{
		name = "Smokes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"SmokeShell",
			"SmokeShellBlue",
			"SmokeShellGreen",
			"SmokeShellOrange",
			"SmokeShellPurple",
			"SmokeShellRed",
			"SmokeShellYellow",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell",
			"1Rnd_SmokePurple_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeYellow_Grenade_shell",
			"3Rnd_Smoke_Grenade_shell",
			"3Rnd_SmokeBlue_Grenade_shell",
			"3Rnd_SmokeGreen_Grenade_shell",
			"3Rnd_SmokeOrange_Grenade_shell",
			"3Rnd_SmokePurple_Grenade_shell",
			"3Rnd_SmokeRed_Grenade_shell",
			"3Rnd_SmokeYellow_Grenade_shell"
		};
	};	

	class Explosives
	{
		name = "Explosives";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\cargothrow_ca.paa";
		items[] = 
		{
			"HandGrenade",
			"MiniGrenade",
			"B_IR_Grenade",
			"O_IR_Grenade",
			"I_IR_Grenade",
			"1Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"APERSBoundingMine_Range_Mag",
			"APERSMine_Range_Mag",
			"APERSTripMine_Wire_Mag",
			"ClaymoreDirectionalMine_Remote_Mag",
			"DemoCharge_Remote_Mag",
			"IEDLandBig_Remote_Mag",
			"IEDLandSmall_Remote_Mag",
			"IEDUrbanBig_Remote_Mag",
			"IEDUrbanSmall_Remote_Mag",
			"SatchelCharge_Remote_Mag",
			"SLAMDirectionalMine_Wire_Mag"
		};
	};

	class Pistols 
	{
		name = "Pistols";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\handgun_ca.paa";
		items[] = 
		{
			"hgun_ACPC2_F",
			"hgun_P07_F",
			"hgun_Pistol_heavy_01_F",
			"hgun_Pistol_heavy_02_F",
			"hgun_Pistol_Signal_F",
			"hgun_Rook40_F"
		};
	};

	class SubMachineGuns 
	{
		name = "Sub Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"hgun_PDW2000_F",
			"SMG_01_F",
			"SMG_02_F"
		};
	};

	class LightMachineGuns 
	{
		name = "Light Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"arifle_MX_SW_Black_F",
			"arifle_MX_SW_F",
			"LMG_Mk200_F",
			"LMG_Zafir_F"

		};
	};

	class AssaultRifles
	{
		name = "Assault Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"arifle_Katiba_C_F",
			"arifle_Katiba_F",
			"arifle_Katiba_GL_F",
			"arifle_Mk20_F",
			"arifle_Mk20_GL_F",
			"arifle_Mk20_GL_plain_F",
			"arifle_Mk20_plain_F",
			"arifle_Mk20C_F",
			"arifle_Mk20C_plain_F",
			"arifle_MX_Black_F",
			"arifle_MX_F",
			"arifle_MX_GL_Black_F",
			"arifle_MX_GL_F",
			"arifle_MXC_Black_F",
			"arifle_MXC_F",
			"arifle_SDAR_F",
			"arifle_TRG20_F",
			"arifle_TRG21_F",
			"arifle_TRG21_GL_F"
		};
	};

	class SniperRifles
	{
		name = "Sniper Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"arifle_MXM_Black_F",
			"arifle_MXM_F",
			"srifle_DMR_01_F",
			"srifle_DMR_02_camo_F",
			"srifle_DMR_02_F",
			"srifle_DMR_02_sniper_F",
			"srifle_DMR_03_F",
			"srifle_DMR_03_khaki_F",
			"srifle_DMR_03_multicam_F",
			"srifle_DMR_03_tan_F",
			"srifle_DMR_03_woodland_F",
			"srifle_DMR_04_F",
			"srifle_DMR_04_Tan_F",
			"srifle_DMR_05_blk_F",
			"srifle_DMR_05_hex_F",
			"srifle_DMR_05_tan_f",
			"srifle_DMR_06_camo_F",
			"srifle_DMR_06_olive_F",
			"srifle_EBR_F",
			"srifle_GM6_camo_F",
			"srifle_GM6_F",
			"srifle_LRR_camo_F",
			"srifle_LRR_F"
		};
	};

	class Bikes
	{
		name = "Bikes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Extremo_Bike_OldBike",
			"Extremo_Bike_MountainBike"
		};
	};

	class Cars
	{
		name = "Cars";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Extremo_Car_Kart_Black",
			"Extremo_Bike_QuadBike_Black",
			"Extremo_Car_Lada_Green",
			"Extremo_Car_Volha_White",
			"Extremo_Car_Hatchback_Rusty1",
			"Extremo_Car_Hatchback_Rusty2",
			"Extremo_Car_Hatchback_Rusty3",
			"Extremo_Car_Hatchback_Sport_Red",
			"Extremo_Car_SUV_Red",
			"Extremo_Car_SUVXL_Black",
			"Extremo_Car_Offroad_Rusty1",
			"Extremo_Car_Offroad_Rusty2",
			"Extremo_Car_Offroad_Rusty3",
			"Extremo_Car_Offroad_Repair_Civillian",
			"Extremo_Car_Offroad_Armed_Guerilla01",
			"Extremo_Car_Strider",
			"Extremo_Car_Hunter",
			"Extremo_Car_Ifrit"
		};
	};

	class Trucks
	{
		name = "Trucks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Extremo_Car_Van_Black",
			"Extremo_Car_Van_Box_Black",
			"Extremo_Car_Van_Fuel_Black",
			"Extremo_Car_Zamak",
			"Extremo_Car_Tempest",
			"Extremo_Car_HEMMT",
			"Extremo_Car_Ikarus_Blue",
			"Extremo_Car_Ural_Open_Worker",
			"Extremo_Car_Ural_Covered_Worker"
		};
	};

	class Choppers
	{
		name = "Helicopters";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Extremo_Chopper_Hummingbird_Green",
			"Extremo_Chopper_Hummingbird_Civillian_Wasp",
			"Extremo_Chopper_Taru_Black",
			"Extremo_Chopper_Taru_Covered_Black",
			"Extremo_Chopper_Taru_Transport_Black",
			"Extremo_Chopper_Orca_BlackCustom",
			"Extremo_Chopper_Mohawk_FIA",
			"Extremo_Chopper_Huron_Black",
			"Extremo_Chopper_Hellcat_Green"
		};
	};

	class Boats
	{
		name = "Boats";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Extremo_Boat_RubberDuck_CSAT",
			"Extremo_Boat_RubberDuck_Digital",
			"Extremo_Boat_RubberDuck_Orange",
			"Extremo_Boat_RubberDuck_Blue",
			"Extremo_Boat_RubberDuck_Black",
			"Extremo_Boat_MotorBoat_Police",
			"Extremo_Boat_MotorBoat_Orange",
			"Extremo_Boat_MotorBoat_White",
			"Extremo_Boat_SDV_CSAT",
			"Extremo_Boat_SDV_Digital",
			"Extremo_Boat_SDV_Grey"
		};
	};

	class Planes
	{
		name = "Planes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Extremo_Plane_Cessna"
		};
	};
};
class CfgTraders
{

	class Extremo_Trader_Armory
	{
		name = "ARMORY";
		showWeaponFilter = 1;
		categories[] = 
		{
			"PointerAttachments",
			"BipodAttachments",
			"MuzzleAttachments",
			"OpticAttachments",
			"Ammunition",
			"Pistols",
			"SubMachineGuns",
			"LightMachineGuns",
			"AssaultRifles",
			"SniperRifles"
		};
	};

	class Extremo_Trader_SpecialOperations
	{
		name = "SPECIAL OPERATIONS";
		showWeaponFilter = 1;
		categories[] = 
		{
			"Flares",
			"Smokes",
			"UAVs",
			"StaticMGs",
			"Explosives",
			"Navigation"
		};
	};


	class Extremo_Trader_Equipment
	{	
		name = "EQUIPMENT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Headgear",
			"Uniforms",
			"Vests",
			"Backpacks",
			"FirstAid"
		};
	};


	class Extremo_Trader_Food
	{
		name = "FAST FOOD";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Food",
			"Drinks"
		};
	};


	class Extremo_Trader_Hardware
	{
		name = "HARDWARE";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Hardware",
			"Tools"
		};
	};


	class Extremo_Trader_Vehicle
	{
		name = "VEHICLE";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Cars",
			"Trucks"
		};
	};

	class Extremo_Trader_Aircraft
	{
		name = "AIRCRAFT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Choppers", 
			"Planes"
		};
	};
 
	class Extremo_Trader_Boat
	{
		name = "BOAT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Boats"
		};
	};

	class Extremo_Trader_CommunityCustoms
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community"
		};
	};

	class Extremo_Trader_CommunityCustoms2
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community2"
		};
	};

	class Extremo_Trader_CommunityCustoms3
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community3"
		};
	};

	class Extremo_Trader_CommunityCustoms4
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community4"
		};
	};

	class Extremo_Trader_CommunityCustoms5
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community5"
		};
	};

	class Extremo_Trader_CommunityCustoms6
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community6"
		};
	};

	class Extremo_Trader_CommunityCustoms7
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community7"
		};
	};

	class Extremo_Trader_CommunityCustoms8
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community8"
		};
	};

	class Extremo_Trader_CommunityCustoms9
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community9"
		};
	};

	class Extremo_Trader_CommunityCustoms10
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community10"
		};
	};
};
class CfgTrading 
{
	sellPriceFactor = 0.5;
};
class CfgVehicleCustoms
{
	class Extremo_Bike_QuadBike_Abstract
	{
		skins[] = 
		{
			{"Extremo_Bike_QuadBike_Black",		100},
			{"Extremo_Bike_QuadBike_Blue",		100},
			{"Extremo_Bike_QuadBike_Red",			100},
			{"Extremo_Bike_QuadBike_White",		100},
			{"Extremo_Bike_QuadBike_Nato",		150},
			{"Extremo_Bike_QuadBike_Csat",		150},
			{"Extremo_Bike_QuadBike_Fia",			150},
			{"Extremo_Bike_QuadBike_Guerilla01",	150},
			{"Extremo_Bike_QuadBike_Guerilla02",	150}
		};
	};

	class Extremo_Boat_MotorBoat_Abstract
	{
		skins[] = 
		{
			{"Extremo_Boat_MotorBoat_Police",		350},
			{"Extremo_Boat_MotorBoat_Orange",		300},
			{"Extremo_Boat_MotorBoat_White",		300}
		};
	};

	class Extremo_Boat_RubberDuck_Abstract
	{
		skins[] = 
		{
			{"Extremo_Boat_RubberDuck_CSAT",		200},
			{"Extremo_Boat_RubberDuck_Digital",	200},
			{"Extremo_Boat_RubberDuck_Orange",	150},
			{"Extremo_Boat_RubberDuck_Blue",		150},
			{"Extremo_Boat_RubberDuck_Black",		150}
		};
	};

	class Extremo_Boat_SDV_Abstract
	{
		skins[] = 
		{
			{"Extremo_Boat_SDV_CSAT",		200},
			{"Extremo_Boat_SDV_Digital",	200},
			{"Extremo_Boat_SDV_Grey",		100}
		};
	};

	class Extremo_Chopper_Hellcat_Abstract
	{
		skins[] = 
		{
			{"Extremo_Chopper_Hellcat_Green", 350},
			{"Extremo_Chopper_Hellcat_FIA", 	500}
		};
	};

	class Extremo_Car_Kart_Abstract
	{
		skins[] = 
		{
			{"Extremo_Car_Kart_BluKing", 				100},	
			{"Extremo_Car_Kart_RedStone", 			100},
			{"Extremo_Car_Kart_Vrana", 				100},	
			{"Extremo_Car_Kart_Green", 				100},	
			{"Extremo_Car_Kart_Blue", 				100},	
			{"Extremo_Car_Kart_Orange", 				100},	
			{"Extremo_Car_Kart_White", 				100},	
			{"Extremo_Car_Kart_Yellow", 				100},	
			{"Extremo_Car_Kart_Black", 				100}	
		};
	};

	class Extremo_Chopper_Hummingbird_Civillian_Abstract
	{
		skins[] = 
		{
			{"Extremo_Chopper_Hummingbird_Civillian_Blue", 		350},
			{"Extremo_Chopper_Hummingbird_Civillian_Red", 		350},
			{"Extremo_Chopper_Hummingbird_Civillian_ION", 		350},
			{"Extremo_Chopper_Hummingbird_Civillian_BlueLine", 	350},
			{"Extremo_Chopper_Hummingbird_Civillian_Digital", 	350},
			{"Extremo_Chopper_Hummingbird_Civillian_Elliptical", 	350},
			{"Extremo_Chopper_Hummingbird_Civillian_Furious", 	350},
			{"Extremo_Chopper_Hummingbird_Civillian_GrayWatcher", 350},
			{"Extremo_Chopper_Hummingbird_Civillian_Jeans", 		350},
			{"Extremo_Chopper_Hummingbird_Civillian_Light", 		350},
			{"Extremo_Chopper_Hummingbird_Civillian_Shadow", 		350},
			{"Extremo_Chopper_Hummingbird_Civillian_Sheriff", 	350},
			{"Extremo_Chopper_Hummingbird_Civillian_Speedy", 		350},
			{"Extremo_Chopper_Hummingbird_Civillian_Sunset", 		350},
			{"Extremo_Chopper_Hummingbird_Civillian_Vrana", 		350},
			{"Extremo_Chopper_Hummingbird_Civillian_Wasp", 		350},
			{"Extremo_Chopper_Hummingbird_Civillian_Wave", 		350}
		};
	};

	class Extremo_Chopper_Huron_Abstract
	{
		skins[] = 
		{
			{"Extremo_Chopper_Huron_Black", 	450},
			{"Extremo_Chopper_Huron_Green", 	450}
		};
	};

	class Extremo_Chopper_Orca_Abstract
	{
		skins[] = 
		{
			{"Extremo_Chopper_Orca_CSAT", 		350},
			{"Extremo_Chopper_Orca_Black", 		350},
			{"Extremo_Chopper_Orca_BlackCustom", 	350}
		};
	};

	class Extremo_Chopper_Taru_Abstract
	{
		skins[] = 
		{
			{"Extremo_Chopper_Taru_CSAT",		500},
			{"Extremo_Chopper_Taru_Black",	500}
		};
	};

	class Extremo_Chopper_Taru_Transport_Abstract
	{
		skins[] = 
		{
			{"Extremo_Chopper_Taru_Transport_CSAT",	500},
			{"Extremo_Chopper_Taru_Transport_Black",	500}
		};
	};

	class Extremo_Chopper_Taru_Covered_Abstract
	{
		skins[] = 
		{
			{"Extremo_Chopper_Taru_Covered_CSAT",		500},
			{"Extremo_Chopper_Taru_Covered_Black",	500}
		};
	};

	class Extremo_Car_Hatchback_Abstract
	{	
		skins[] = 
		{
			{"Extremo_Car_Hatchback_Rusty1", 			50},
			{"Extremo_Car_Hatchback_Rusty2", 			50},
			{"Extremo_Car_Hatchback_Rusty3", 			50},
			{"Extremo_Car_Hatchback_Beige", 			100},
			{"Extremo_Car_Hatchback_Green", 			100},
			{"Extremo_Car_Hatchback_Blue", 			100},
			{"Extremo_Car_Hatchback_BlueCustom", 		100},
			{"Extremo_Car_Hatchback_BeigeCustom", 	100},
			{"Extremo_Car_Hatchback_Yellow", 			100},
			{"Extremo_Car_Hatchback_Grey", 			100},
			{"Extremo_Car_Hatchback_Black", 			100},
			{"Extremo_Car_Hatchback_Dark", 			100}
		};
	};

	class Extremo_Car_Hatchback_Sport_Abstract
	{
		skins[] = 
		{
			{"Extremo_Car_Hatchback_Sport_Red", 		100},
			{"Extremo_Car_Hatchback_Sport_Blue", 		100},
			{"Extremo_Car_Hatchback_Sport_Orange", 	100},
			{"Extremo_Car_Hatchback_Sport_White", 	100},
			{"Extremo_Car_Hatchback_Sport_Beige", 	100},
			{"Extremo_Car_Hatchback_Sport_Green", 	100}
		};
	};

	class Extremo_Car_Offroad_Abstract
	{
		skins[] = 
		{
			{"Extremo_Car_Offroad_Rusty1", 		50},
			{"Extremo_Car_Offroad_Rusty2", 		50},
			{"Extremo_Car_Offroad_Rusty3", 		50},
			{"Extremo_Car_Offroad_Red", 			500},
			{"Extremo_Car_Offroad_Beige", 		500},
			{"Extremo_Car_Offroad_White", 		500},
			{"Extremo_Car_Offroad_Blue", 			500},
			{"Extremo_Car_Offroad_DarkRed", 		500},
			{"Extremo_Car_Offroad_BlueCustom", 	500},
			{"Extremo_Car_Offroad_Guerilla01", 	700},
			{"Extremo_Car_Offroad_Guerilla02", 	700},
			{"Extremo_Car_Offroad_Guerilla03", 	700},
			{"Extremo_Car_Offroad_Guerilla04", 	700},
			{"Extremo_Car_Offroad_Guerilla05", 	700},
			{"Extremo_Car_Offroad_Guerilla06", 	700},
			{"Extremo_Car_Offroad_Guerilla07", 	700},
			{"Extremo_Car_Offroad_Guerilla08", 	700},
			{"Extremo_Car_Offroad_Guerilla09", 	700},
			{"Extremo_Car_Offroad_Guerilla10", 	700},
			{"Extremo_Car_Offroad_Guerilla11", 	700},
			{"Extremo_Car_Offroad_Guerilla12", 	700}
		};
	};

	class Extremo_Car_Offroad_Armed_Abstract
	{
		skins[] = 
		{
			{"Extremo_Car_Offroad_Armed_Guerilla01",	250},
			{"Extremo_Car_Offroad_Armed_Guerilla02",	250},
			{"Extremo_Car_Offroad_Armed_Guerilla03",	250},
			{"Extremo_Car_Offroad_Armed_Guerilla04",	250},
			{"Extremo_Car_Offroad_Armed_Guerilla05",	250},
			{"Extremo_Car_Offroad_Armed_Guerilla06",	250},
			{"Extremo_Car_Offroad_Armed_Guerilla07",	250},
			{"Extremo_Car_Offroad_Armed_Guerilla08",	250},
			{"Extremo_Car_Offroad_Armed_Guerilla09",	250},
			{"Extremo_Car_Offroad_Armed_Guerilla10",	250},
			{"Extremo_Car_Offroad_Armed_Guerilla11",	250},
			{"Extremo_Car_Offroad_Armed_Guerilla12",	250}
		};
	};

	class Extremo_Car_Offroad_Repair_Abstract
	{
		skins[] = 
		{
			{"Extremo_Car_Offroad_Repair_Civillian",		150},
			{"Extremo_Car_Offroad_Repair_Red",			150},
			{"Extremo_Car_Offroad_Repair_Beige",			150},
			{"Extremo_Car_Offroad_Repair_White",			150},
			{"Extremo_Car_Offroad_Repair_Blue",			150},
			{"Extremo_Car_Offroad_Repair_DarkRed",		150},
			{"Extremo_Car_Offroad_Repair_BlueCustom",		150},
			{"Extremo_Car_Offroad_Repair_Guerilla01",		250},
			{"Extremo_Car_Offroad_Repair_Guerilla02",		250},
			{"Extremo_Car_Offroad_Repair_Guerilla03",		250},
			{"Extremo_Car_Offroad_Repair_Guerilla04",		250},
			{"Extremo_Car_Offroad_Repair_Guerilla05",		250},
			{"Extremo_Car_Offroad_Repair_Guerilla06",		250},
			{"Extremo_Car_Offroad_Repair_Guerilla07",		250},
			{"Extremo_Car_Offroad_Repair_Guerilla08",		250},
			{"Extremo_Car_Offroad_Repair_Guerilla09",		250},
			{"Extremo_Car_Offroad_Repair_Guerilla10",		250},
			{"Extremo_Car_Offroad_Repair_Guerilla11",		250},
			{"Extremo_Car_Offroad_Repair_Guerilla12",		250}
		};
	};

	class Extremo_Car_SUV_Abstract
	{
		skins[] = 
		{
			{"Extremo_Car_SUV_Red", 		100},
			{"Extremo_Car_SUV_Black", 	150},
			{"Extremo_Car_SUV_Grey", 		100},
			{"Extremo_Car_SUV_Orange", 	100}
		};
	};

	class Extremo_Car_SUVXL_Abstract
	{
		skins[] = 
		{
			{"Extremo_Car_SUVXL_Black", 100}
		};
	};

	class Extremo_Car_Van_Abstract
	{
		skins[] = 
		{
			{"Extremo_Car_Van_Black",			100},
			{"Extremo_Car_Van_White",			100},
			{"Extremo_Car_Van_Red",			100},
			{"Extremo_Car_Van_Guerilla01",	150},
			{"Extremo_Car_Van_Guerilla02",	150},
			{"Extremo_Car_Van_Guerilla03",	150},
			{"Extremo_Car_Van_Guerilla04",	150},
			{"Extremo_Car_Van_Guerilla05",	150},
			{"Extremo_Car_Van_Guerilla06",	150},
			{"Extremo_Car_Van_Guerilla07",	150},
			{"Extremo_Car_Van_Guerilla08",	150}
		};
	};

	class Extremo_Car_Van_Box_Abstract
	{
		skins[] = 
		{
			{"Extremo_Car_Van_Box_Black",				100},
			{"Extremo_Car_Van_Box_White",				100},
			{"Extremo_Car_Van_Box_Red",				100},
			{"Extremo_Car_Van_Box_Guerilla01",		150},
			{"Extremo_Car_Van_Box_Guerilla02",		150},
			{"Extremo_Car_Van_Box_Guerilla03",		150},
			{"Extremo_Car_Van_Box_Guerilla04",		150},
			{"Extremo_Car_Van_Box_Guerilla05",		150},
			{"Extremo_Car_Van_Box_Guerilla06",		150},
			{"Extremo_Car_Van_Box_Guerilla07",		150},
			{"Extremo_Car_Van_Box_Guerilla08",		150}
		};
	};

	class Extremo_Car_Van_Fuel_Abstract
	{
		skins[] = 
		{
			{"Extremo_Car_Van_Fuel_Black",			100},
			{"Extremo_Car_Van_Fuel_White",			100},
			{"Extremo_Car_Van_Fuel_Red",				100},
			{"Extremo_Car_Van_Fuel_Guerilla01",		150},
			{"Extremo_Car_Van_Fuel_Guerilla02",		150},
			{"Extremo_Car_Van_Fuel_Guerilla03",		150}
		};
	};

	class Extremo_Car_Ikarus_Abstract
	{	
		skins[] = 
		{
			{"Extremo_Car_Ikarus_Blue", 		200},
			{"Extremo_Car_Ikarus_Red", 		200},
			{"Extremo_Car_Ikarus_Party", 		500}
		};
	};

	class Extremo_Car_Ural_Open_Abstract
	{	
		skins[] = 
		{
			{"Extremo_Car_Ural_Open_Blue",			300},
			{"Extremo_Car_Ural_Open_Yellow",			300},
			{"Extremo_Car_Ural_Open_Worker",			300},
			{"Extremo_Car_Ural_Open_Military",		300}
		};
	};

	class Extremo_Car_Ural_Covered_Abstract
	{	
		skins[] = 
		{
			{"Extremo_Car_Ural_Covered_Blue",			300},
			{"Extremo_Car_Ural_Covered_Yellow",		300},
			{"Extremo_Car_Ural_Covered_Worker",		300},
			{"Extremo_Car_Ural_Covered_Military",		300}
		};
	};

	class Extremo_Car_Lada_Abstract
	{	
		skins[] = 
		{
			{"Extremo_Car_Lada_Green", 		100},
			{"Extremo_Car_Lada_Taxi", 		100},
			{"Extremo_Car_Lada_Red", 			100},
			{"Extremo_Car_Lada_White", 		100},
			{"Extremo_Car_Lada_Hipster", 		100}
		};
	};

	class Extremo_Car_Volha_Abstract
	{	
		skins[] = 
		{
			{"Extremo_Car_Volha_Blue", 		100},
			{"Extremo_Car_Volha_White", 		100},
			{"Extremo_Car_Volha_Black",		100}
		};
	};
};
class CfgVehicleTransport 
{
	class Extremo_Container_SupplyBox
	{
		vehicles[] = {"Extremo_Car_Van_Abstract", "Extremo_Car_Offroad_Abstract", "Extremo_Car_Zamak_Abstract", "Extremo_Car_HEMMT_Abstract", "Extremo_Car_Tempest_Abstract"};

		class Extremo_Car_Van_Abstract
		{
			attachPosition[] = {0, -1.1, 0.2};
			cargoIndizes[] = {2, 3, 4, 5, 6, 7}; 
			detachPosition[] = {0, -4.4};
		};

		class Extremo_Car_Offroad_Abstract
		{
			attachPosition[] = {0, -1.6, 0.4};
			cargoIndizes[] = {1, 2, 3, 4}; 
			detachPosition[] = {0, -4};
		};

		class Extremo_Car_Zamak_Abstract
		{
			attachPosition[] = {0.03, 0.3, 0};
			cargoIndizes[] = {2, 3, 4, 5, 6, 7}; 
			detachPosition[] = {0.03, -4.8};
		};

		class Extremo_Car_HEMMT_Abstract
		{
			attachPosition[] = {0.05, -0.1, 0.3};
			cargoIndizes[] = {1, 2, 8, 9}; 
			detachPosition[] = {0.05, -6.1};
		};

		class Extremo__Car_Tempest_Abstract
		{
			attachPosition[] = {0.08, -0.85, 0.4};
			cargoIndizes[] = {1, 6, 7, 9}; 
			detachPosition[] = {0.08, -6};
		};
	};
};
class CfgIdentities
{
	class ExtremoPlayer
	{
		name		= "Survialist";
		nameSound	= "ExtremoPLayer";
		face		= "whiteHead_06";
		glasses		= "None";
		speaker		= "Male05ENG";
		pitch		= 1.1;
	};
	class ExtremoTrader
	{
		name		= "Trader";
		nameSound	= "ExtremoTrader";
		face		= "whiteHead_06";
		glasses		= "None";
		speaker		= "Male05ENG";
		pitch		= 1.1;
	};
	class ExtremoZombie
	{
		name		= "Zombie";
		nameSound	= "ExtremoZombie";
		face		= "whiteHead_06";
		glasses		= "None";
		speaker		= "Male05ENG";
		pitch		= 1.1;
	};
};
class RadioProtocolENG 
{
	class Words 
	{
		ExtremoPLayer[]= {"RadioProtocolENG\Normal\020_Names\Givens.ogg"};
		ExtremoTrader[]= {"RadioProtocolENG\Normal\020_Names\Givens.ogg"};
		ExtremoZombie[]= {"RadioProtocolENG\Normal\020_Names\Givens.ogg"};
	}
};
class CfgEditorCategories
{
	//editorCategory = "Character";
	//editorSubcategory = "Men";
	class Character  { displayName = "Characters"; };
	class Zombie { displayName = "Zombies"; };
	class Animal { displayName = "Animals"; };
	class Building { displayName = "Buildings"; };
	class Vehicle { displayName = "Vehicles"; };
	class Object { displayName = "Objects"; };
	class Gear { displayName = "Gear"; };
};
class CfgEditorSubcategories
{
	//-- Character & Zombie
	class Men { displayName = "Men (Extremo)"; }; 
	class Women { displayName = "Women (Extremo)"; };
	class Slot { displayName = "Slot (Extremo)"; };
	class HC { displayName = "Headless (Extremo)"; };
	//-- Building
	class Construction { displayName = "Construction"; };
	//-- Vehicle
	class Land { displayName = "Land (Extremo)"; };
	class Air { displayName = "Air (Extremo)"; };
	class Water { displayName = "Water (Extremo)"; };
	//-- Object
	class Tablet { displayName = "Tablets (Extremo)"; };
	class Phone { displayName = "Phones (Extremo)"; }; 
	//-- Gear
	class Suit { displayName = "Suits (Extremo)"; };
	class Uniform { displayName = "Uniforms (Extremo)"; };
	class Backpack { displayName = "Backpacks (Extremo)"; };
	class Vest { displayName = "Vests (Extremo)"; };
};

#include "hpp\CfgVehicles.hpp"
#include "hpp\CfgWeapons.hpp"
#include "hpp\ui.hpp"