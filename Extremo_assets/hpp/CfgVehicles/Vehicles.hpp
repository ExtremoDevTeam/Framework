/*
	## EXTREMO Survival
	## Nikko & Happyfeet
	## https://community.bistudio.com/wiki/Arma_3:_Characters_And_Gear_Encoding_Guide
	## https://community.bistudio.com/wiki/CfgVehicles_Config_Reference
*/

//-- Land
class Extremo_Car_Golf_Black: Extremo_Car_Golf_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Black";
};
class Extremo_Car_Golf_Red: Extremo_Car_Golf_Black
{
	skinName="Red";
	displayName="Golf Red";
	hiddenSelectionsTextures[]=
	{
		"\Extremo_assets\model\vw_golf\vwgolf_body_co.paa"
	};
};
class Extremo_Car_Golf_Pink: Extremo_Car_Golf_Red
{
	skinName="Pink";
	displayName="Golf Pink";
	hiddenSelectionsTextures[]=
	{
		"\Extremo_assets\model\vw_golf\pink_co.paa"
	};
};
class Extremo_Car_BMW_Red: Extremo_Car_BMW_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Red";
};
class Extremo_Car_Hatchback_Beige: Extremo_Car_Hatchback_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Beige";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE01_CO.paa"
	};
};
class Extremo_Car_Hatchback_Green: Extremo_Car_Hatchback_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Green";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE02_CO.paa"
	};
};
class Extremo_Car_Hatchback_Blue: Extremo_Car_Hatchback_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Blue";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE03_CO.paa"
	};
};
class Extremo_Car_Hatchback_BlueCustom: Extremo_Car_Hatchback_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Blue Custom";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE04_CO.paa"
	};
};
class Extremo_Car_Hatchback_BeigeCustom: Extremo_Car_Hatchback_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Beige Custom";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE05_CO.paa"
	};
};
class Extremo_Car_Hatchback_Yellow: Extremo_Car_Hatchback_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Yellow";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE06_CO.paa"
	};
};
class Extremo_Car_Hatchback_Grey: Extremo_Car_Hatchback_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Grey";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE07_CO.paa"
	};
};
class Extremo_Car_Hatchback_Black: Extremo_Car_Hatchback_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Black";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE08_CO.paa"
	};
};
class Extremo_Car_Hatchback_Dark: Extremo_Car_Hatchback_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Dark";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE09_CO.paa"
	};
};
class Extremo_Car_Hatchback_Rusty1: Extremo_Car_Hatchback_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Rusty White";
	hiddenSelectionsTextures[]=
	{
		"\Extremo_Assets\model\RTV\Extremo_Car_Hatchback_01_co.paa"
	};
	hiddenSelectionsMaterials[]=
	{
		"\Extremo_Assets\model\RTV\Extremo_Car_Hatchback.rvmat",
		"\Extremo_Assets\model\RTV\Extremo_Car_Hatchback.rvmat"
	};
};
class Extremo_Car_Hatchback_Rusty2: Extremo_Car_Hatchback_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Rusty Red";
	hiddenSelectionsTextures[]=
	{
		"\Extremo_Assets\model\RTV\Extremo_Car_Hatchback_02_co.paa"
	};
	hiddenSelectionsMaterials[]=
	{
		"\Extremo_Assets\model\RTV\Extremo_Car_Hatchback.rvmat",
		"\Extremo_Assets\model\RTV\Extremo_Car_Hatchback.rvmat"
	};
};
class Extremo_Car_Hatchback_Rusty3: Extremo_Car_Hatchback_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Rusty Yellow";
	hiddenSelectionsTextures[]=
	{
		"\Extremo_Assets\model\RTV\Extremo_Car_Hatchback_03_co.paa"
	};
	hiddenSelectionsMaterials[]=
	{
		"\Extremo_Assets\model\RTV\Extremo_Car_Hatchback.rvmat",
		"\Extremo_Assets\model\RTV\Extremo_Car_Hatchback.rvmat"
	};
};
class Extremo_Car_Hatchback_Sport_Red: Extremo_Car_Hatchback_Sport_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Red";
	hiddenSelectionsTextures[]=
	{
		"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT01_CO.paa"
	};
};
class Extremo_Car_Hatchback_Sport_Blue: Extremo_Car_Hatchback_Sport_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Blue";
	hiddenSelectionsTextures[]=
	{
		"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT02_CO.paa"
	};
};
class Extremo_Car_Hatchback_Sport_Orange: Extremo_Car_Hatchback_Sport_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Orange";
	hiddenSelectionsTextures[]=
	{
		"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT03_CO.paa"
	};
};
class Extremo_Car_Hatchback_Sport_White: Extremo_Car_Hatchback_Sport_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="White";
	hiddenSelectionsTextures[]=
	{
		"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT04_CO.paa"
	};
};
class Extremo_Car_Hatchback_Sport_Beige: Extremo_Car_Hatchback_Sport_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Beige";
	hiddenSelectionsTextures[]=
	{
		"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT05_CO.paa"
	};
};
class Extremo_Car_Hatchback_Sport_Green: Extremo_Car_Hatchback_Sport_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Green";
	hiddenSelectionsTextures[]=
	{
		"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT06_CO.paa"
	};
};
class Extremo_Car_Hatchback_Sport_Admin: Extremo_Car_Hatchback_Sport_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Admin Race Car";
	maxSpeed=99999;
	acceleration=150;
	brakeTorque=99999;
	redRpm=99999;
	displayName="Race Car";
	fuelConsumptionRate="0.001f";
	maximumLoad=99999;
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss"; 
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE08_CO.paa"
	};
};
class Extremo_Car_HEMMT: Extremo_Car_HEMMT_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
};
class Extremo_Car_HMMWV_M134_Green: Extremo_Car_HMMWV_M134_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Green";
	hiddenSelectionsTextures[]=
	{
		"exile_psycho_hmmw\data\hmmwv_body_co.paa"
	};
};
class Extremo_Car_HMMWV_M134_Desert: Extremo_Car_HMMWV_M134_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Desert";
	hiddenSelectionsTextures[]=
	{
		"exile_psycho_hmmw\data\des\hmmwv_body_co.paa"
	};
}; 
class Extremo_Car_HMMWV_M2_Green: Extremo_Car_HMMWV_M2_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Green";
	hiddenSelectionsTextures[]=
	{
		"exile_psycho_hmmw\data\hmmwv_body_co.paa"
	};
};
class Extremo_Car_HMMWV_M2_Desert: Extremo_Car_HMMWV_M2_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Desert";
	hiddenSelectionsTextures[]=
	{
		"exile_psycho_hmmw\data\des\hmmwv_body_co.paa"
	};
}; 
class Extremo_Car_HMMWV_MEV_Green: Extremo_Car_HMMWV_MEV_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Green";
	hiddenSelectionsTextures[]=
	{
		"exile_psycho_hmmw\data\hmmwv_body_cm.paa"
	};
};
class Extremo_Car_HMMWV_MEV_Desert: Extremo_Car_HMMWV_MEV_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Desert";
	hiddenSelectionsTextures[]=
	{
		"exile_psycho_hmmw\data\des\hmmwv_body_cm.paa"
	};
};
class Extremo_Car_HMMWV_UNA_Green: Extremo_Car_HMMWV_UNA_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Green";
	hiddenSelectionsTextures[]=
	{
		"exile_psycho_hmmw\data\hmmwv_body_co.paa"
	};
};
class Extremo_Car_HMMWV_UNA_Desert: Extremo_Car_HMMWV_UNA_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Desert";
	hiddenSelectionsTextures[]=
	{
		"exile_psycho_hmmw\data\des\hmmwv_body_co.paa"
	};
};
class Extremo_Car_Hunter: Extremo_Car_Hunter_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
}; 
class Extremo_Car_Ifrit: Extremo_Car_Ifrit_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
};
class Extremo_Car_Ikarus_Blue: Extremo_Car_Ikarus_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Blue";
	hiddenselections[]=
	{
		"Camo1"
	};
	hiddenselectionstextures[]=
	{
		"exile_psycho_Ikarus\Data\bus_exterior_co.paa"
	};
};
class Extremo_Car_Ikarus_Red: Extremo_Car_Ikarus_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Red";
	hiddenselections[]=
	{
		"Camo1"
	};
	hiddenselectionstextures[]=
	{
		"exile_psycho_Ikarus\Data\bus_exterior_eciv_co.paa"
	};
};
class Extremo_Car_Ikarus_Party: Extremo_Car_Ikarus_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Party";
	hiddenselections[]=
	{
		"Camo1"
	};
	hiddenselectionstextures[]=
	{
		"exile_psycho_Ikarus\Data\bus_exterior_eciv_co.paa"
	};
};
class Extremo_Car_Kart_BluKing: Extremo_Car_Kart_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="BluKing";
	hiddenSelectionsTextures[]=
	{
		"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_blu_CO.paa",
		"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa",
		"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa",
		"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"
	};
};
class Extremo_Car_Kart_RedStone: Extremo_Car_Kart_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="RedStone";
	hiddenSelectionsTextures[]=
	{
		"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_black_CO.paa",
		"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_black_CA.paa",
		"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa",
		"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"
	};
};
class Extremo_Car_Kart_Vrana: Extremo_Car_Kart_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Vrana";
	hiddenSelectionsTextures[]=
	{
		"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_vrana_CO.paa",
		"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_vrana_CA.paa",
		"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa",
		"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"
	};
};
class Extremo_Car_Kart_Green: Extremo_Car_Kart_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Green";
	hiddenSelectionsTextures[]=
	{
		"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_green_CO.paa",
		"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa",
		"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa",
		"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"
	};
};
class Extremo_Car_Kart_Blue: Extremo_Car_Kart_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Blue";
	hiddenSelectionsTextures[]=
	{
		"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_blue_CO.paa",
		"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa",
		"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa",
		"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"
	};
};
class Extremo_Car_Kart_Orange: Extremo_Car_Kart_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Orange";
	hiddenSelectionsTextures[]=
	{
		"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_orange_CO.paa",
		"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa",
		"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa",
		"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"
	};
};
class Extremo_Car_Kart_White: Extremo_Car_Kart_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="White";
	hiddenSelectionsTextures[]=
	{
		"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_white_CO.paa",
		"",
		"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa",
		"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"
	};
};
class Extremo_Car_Kart_Yellow: Extremo_Car_Kart_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Yellow";
	hiddenSelectionsTextures[]=
	{
		"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_yellow_CO.paa",
		"",
		"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa",
		"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"
	};
};
class Extremo_Car_Kart_Black: Extremo_Car_Kart_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Black";
	hiddenSelectionsTextures[]=
	{
		"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_black_CO.paa",
		"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_black_CA.paa",
		"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa",
		"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"
	};
};
class Extremo_Car_Lada_Green: Extremo_Car_Lada_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Green";
	hiddenselections[]=
	{
		"Camo1",
		"Camo2"
	};
	hiddenselectionstextures[]=
	{
		"exile_psycho_lada\data\lada_eciv1_co.paa",
		"exile_psycho_lada\data\Lada_glass_ECIV1_CA.paa"
	};
};
class Extremo_Car_Lada_Taxi: Extremo_Car_Lada_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Taxi";
	hiddenselections[]=
	{
		"Camo1",
		"Camo2"
	};
	hiddenselectionstextures[]=
	{
		"exile_psycho_lada\data\Lada_red_CO.paa"
	};
	model="\exile_psycho_lada\Lada_LM.p3d";
};
class Extremo_Car_Lada_Red: Extremo_Car_Lada_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Red";
	hiddenselections[]=
	{
		"Camo1"
	};
	hiddenselectionstextures[]=
	{
		"exile_psycho_lada\data\Lada_red_CO.paa"
	};
};
class Extremo_Car_Lada_White: Extremo_Car_Lada_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="White";
	hiddenSelectionsTextures[]={};
};
class Extremo_Car_Lada_Hipster: Extremo_Car_Lada_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Hipster";
	hiddenselections[]=
	{
		"Camo1",
		"Camo2"
	};
	hiddenselectionstextures[]=
	{
		"exile_psycho_lada\data\lada_eciv2_co.paa",
		"exile_psycho_lada\data\Lada_glass_ECIV2_CA.paa"
	};
};
class Extremo_Car_LandRover_Red: Extremo_Car_LandRover_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Red";
	hiddenSelectionsTextures[]=
	{
		"exile_psycho_LRC\data\r_lr_base_co.paa",
		"exile_psycho_LRC\data\r_lr_special_co.paa"
	};
};
class Extremo_Car_LandRover_Urban: Extremo_Car_LandRover_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Urban";
	hiddenSelectionsTextures[]=
	{
		"exile_psycho_LRC\data\textures\lr_base_urbancamo_co.paa",
		"exile_psycho_LRC\data\textures\lr_special_urbancamo_co.paa"
	};
};
class Extremo_Car_LandRover_Green: Extremo_Car_LandRover_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Green";
	hiddenSelectionsTextures[]=
	{
		"exile_psycho_LRC\data\lr_acr_base_co.paa",
		"exile_psycho_LRC\data\lr_acr_spec_co.paa"
	};
};
class Extremo_Car_LandRover_Sand: Extremo_Car_LandRover_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Sand";
	hiddenSelectionsTextures[]=
	{
		"exile_psycho_LRC\data\lr_acr_sand_base_co.paa",
		"exile_psycho_LRC\data\lr_special_acr_co.paa"
	};
};
class Extremo_Car_LandRover_Desert: Extremo_Car_LandRover_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Desert";
	hiddenSelectionsTextures[]=
	{
		"exile_psycho_LRC\data\lr_acrs_base_co.paa",
		"exile_psycho_LRC\data\lr_special_acr_co.paa"
	};
};
class Extremo_Car_LandRover_Ambulance_Green: Extremo_Car_LandRover_Ambulance_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Green";
	hiddenSelectionsTextures[]=
	{
		"exile_psycho_LRC\data\lr_acr_base_co.paa",
		"exile_psycho_LRC\data\lr_amb_ext_co.paa",
		"exile_psycho_LRC\data\lr_acr_spec_co.paa"
	};
};
class Extremo_Car_LandRover_Ambulance_Desert: Extremo_Car_LandRover_Ambulance_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Desert";
	hiddenSelectionsTextures[]=
	{
		"exile_psycho_LRC\data\lr_acrs_base_co.paa",
		"exile_psycho_LRC\data\lr_amb_ext_co.paa",
		"exile_psycho_LRC\data\lr_special_acr_co.paa"
	};
};
class Extremo_Car_LandRover_Ambulance_Sand: Extremo_Car_LandRover_Ambulance_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Sand";
	hiddenSelectionsTextures[]=
	{
		"exile_psycho_LRC\data\lr_acr_sand_base_co.paa",
		"exile_psycho_LRC\data\lr_amb_ext_co.paa",
		"exile_psycho_LRC\data\lr_special_acr_co.paa"
	};
};
class Extremo_Car_MB4WD: C_Offroad_02_unarmed_orange_F
{
	author="Nikko Renolds";
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";
	skinName="Orange";
	displayName="MB 4WD";
	fuelConsumptionRate="0.03f";
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
	maximumLoad=3000;
	class EventHandlers: DefaultEventHandlers
	{
		init="";
	};
	class TransportItems
	{
	};
	class TransportBackpacks
	{
	};
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
}; 
class Extremo_Car_MB4WDOpen: I_C_Offroad_02_unarmed_F
{
	author="Nikko Renolds";
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";
	skinName="Orange";
	displayName="MB 4WD (Open)";
	fuelConsumptionRate="0.03f";
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
	maximumLoad=3000;
	class TransportItems
	{
	};
	class TransportBackpacks
	{
	};
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
};
class Extremo_Car_Octavius_White: Extremo_Car_Octavius_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="White";
	hiddenSelectionsTextures[]=
	{
		"exile_psycho_Octavia\Data\car_body_co.paa"
	};
};
class Extremo_Car_Octavius_Black: Extremo_Car_Octavius_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Black";
	hiddenSelectionsTextures[]=
	{
		"exile_psycho_Octavia\Data\car_body_bl_co.paa"
	};
};
class Extremo_Car_Offroad_Red: Extremo_Car_Offroad_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Red";
	hiddenSelectionsTextures[]=
	{
		"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa",
		"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa"
	};
};
class Extremo_Car_Offroad_Beige: Extremo_Car_Offroad_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Beige";
	hiddenSelectionsTextures[]=
	{
		"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa",
		"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa"
	};
};
class Extremo_Car_Offroad_White: Extremo_Car_Offroad_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="White";
	hiddenSelectionsTextures[]=
	{
		"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa",
		"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa"
	};
};
class Extremo_Car_Offroad_Blue: Extremo_Car_Offroad_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Blue";
	hiddenSelectionsTextures[]=
	{
		"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa",
		"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa"
	};
};
class Extremo_Car_Offroad_DarkRed: Extremo_Car_Offroad_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Dark Red";
	hiddenSelectionsTextures[]=
	{
		"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa",
		"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa"
	};
};
class Extremo_Car_Offroad_BlueCustom: Extremo_Car_Offroad_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Blue Custom";
	hiddenSelectionsTextures[]=
	{
		"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa",
		"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa"
	};
};
class Extremo_Car_Offroad_Guerilla01: Extremo_Car_Offroad_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 01";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa",
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"
	};
};
class Extremo_Car_Offroad_Guerilla02: Extremo_Car_Offroad_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 02";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa",
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"
	};
};
class Extremo_Car_Offroad_Guerilla03: Extremo_Car_Offroad_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 03";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa",
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"
	};
};
class Extremo_Car_Offroad_Guerilla04: Extremo_Car_Offroad_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 04";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa",
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"
	};
};
class Extremo_Car_Offroad_Guerilla05: Extremo_Car_Offroad_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 05";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa",
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"
	};
};
class Extremo_Car_Offroad_Guerilla06: Extremo_Car_Offroad_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 06";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa",
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"
	};
};
class Extremo_Car_Offroad_Guerilla07: Extremo_Car_Offroad_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 07";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa",
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"
	};
};
class Extremo_Car_Offroad_Guerilla08: Extremo_Car_Offroad_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 08";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa",
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"
	};
};
class Extremo_Car_Offroad_Guerilla09: Extremo_Car_Offroad_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 09";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa",
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"
	};
};
class Extremo_Car_Offroad_Guerilla10: Extremo_Car_Offroad_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 10";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa",
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"
	};
};
class Extremo_Car_Offroad_Guerilla11: Extremo_Car_Offroad_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 11";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa",
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"
	};
};
class Extremo_Car_Offroad_Guerilla12: Extremo_Car_Offroad_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 12";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa",
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"
	};
};
class Extremo_Car_Offroad_Rusty1: Extremo_Car_Offroad_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Rusty Red";
	hiddenSelectionsTextures[]=
	{
		"\Extremo_Assets\model\RTV\Extremo_offroad_01_co.paa",
		"\Extremo_Assets\model\RTV\Extremo_offroad_01_co.paa"
	};
	hiddenSelectionsMaterials[]=
	{
		"\Extremo_Assets\model\RTV\Extremo_offroad_01.rvmat",
		"\Extremo_Assets\model\RTV\Extremo_offroad_01.rvmat"
	};
};
class Extremo_Car_Offroad_Rusty2: Extremo_Car_Offroad_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Rusty Blue";
	hiddenSelectionsTextures[]=
	{
		"\Extremo_Assets\model\RTV\Extremo_offroad_02_co.paa",
		"\Extremo_Assets\model\RTV\Extremo_offroad_02_co.paa"
	};
	hiddenSelectionsMaterials[]=
	{
		"\Extremo_Assets\model\RTV\Extremo_offroad_01.rvmat",
		"\Extremo_Assets\model\RTV\Extremo_offroad_01.rvmat"
	};
};
class Extremo_Car_Offroad_Rusty3: Extremo_Car_Offroad_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Rusty White";
	hiddenSelectionsTextures[]=
	{
		"\Extremo_Assets\model\RTV\Extremo_offroad_03_co.paa",
		"\Extremo_Assets\model\RTV\Extremo_offroad_03_co.paa"
	};
	hiddenSelectionsMaterials[]=
	{
		"\Extremo_Assets\model\RTV\Extremo_offroad_01.rvmat",
		"\Extremo_Assets\model\RTV\Extremo_offroad_01.rvmat"
	};
};
class Extremo_Car_Offroad_Armed_Guerilla01: Extremo_Car_Offroad_Armed_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 01";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa",
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"
	};
};
class Extremo_Car_Offroad_Armed_Guerilla02: Extremo_Car_Offroad_Armed_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 02";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa",
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"
	};
};
class Extremo_Car_Offroad_Armed_Guerilla03: Extremo_Car_Offroad_Armed_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 03";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa",
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"
	};
};
class Extremo_Car_Offroad_Armed_Guerilla04: Extremo_Car_Offroad_Armed_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 04";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa",
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"
	};
};
class Extremo_Car_Offroad_Armed_Guerilla05: Extremo_Car_Offroad_Armed_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 05";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa",
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"
	};
};
class Extremo_Car_Offroad_Armed_Guerilla06: Extremo_Car_Offroad_Armed_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 06";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa",
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"
	};
};
class Extremo_Car_Offroad_Armed_Guerilla07: Extremo_Car_Offroad_Armed_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 07";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa",
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"
	};
};
class Extremo_Car_Offroad_Armed_Guerilla08: Extremo_Car_Offroad_Armed_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 08";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa",
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"
	};
};
class Extremo_Car_Offroad_Armed_Guerilla09: Extremo_Car_Offroad_Armed_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 09";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa",
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"
	};
};
class Extremo_Car_Offroad_Armed_Guerilla10: Extremo_Car_Offroad_Armed_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 10";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa",
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"
	};
};
class Extremo_Car_Offroad_Armed_Guerilla11: Extremo_Car_Offroad_Armed_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 11";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa",
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"
	};
};
class Extremo_Car_Offroad_Armed_Guerilla12: Extremo_Car_Offroad_Armed_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 12";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa",
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"
	};
};
class Extremo_Car_Offroad_Repair_Civillian: Extremo_Car_Offroad_Repair_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Civillian";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\Offroad_01_ext_repair_CIV_CO.paa",
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\Offroad_01_ext_repair_CIV_CO.paa"
	};
	hiddenSelectionsMaterials[]=
	{
		"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext.rvmat",
		"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat"
	};
};
class Extremo_Car_Offroad_Repair_Red: Extremo_Car_Offroad_Repair_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Red";
	hiddenSelectionsTextures[]=
	{
		"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa",
		"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa"
	};
};
class Extremo_Car_Offroad_Repair_Beige: Extremo_Car_Offroad_Repair_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Beige";
	hiddenSelectionsTextures[]=
	{
		"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa",
		"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa"
	};
};
class Extremo_Car_Offroad_Repair_White: Extremo_Car_Offroad_Repair_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="White";
	hiddenSelectionsTextures[]=
	{
		"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa",
		"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa"
	};
};
class Extremo_Car_Offroad_Repair_Blue: Extremo_Car_Offroad_Repair_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Blue";
	hiddenSelectionsTextures[]=
	{
		"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa",
		"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa"
	};
};
class Extremo_Car_Offroad_Repair_DarkRed: Extremo_Car_Offroad_Repair_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Dark Red";
	hiddenSelectionsTextures[]=
	{
		"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa",
		"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa"
	};
};
class Extremo_Car_Offroad_Repair_BlueCustom: Extremo_Car_Offroad_Repair_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Blue Custom";
	hiddenSelectionsTextures[]=
	{
		"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa",
		"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa"
	};
};
class Extremo_Car_Offroad_Repair_Guerilla01: Extremo_Car_Offroad_Repair_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 01";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa",
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"
	};
};
class Extremo_Car_Offroad_Repair_Guerilla02: Extremo_Car_Offroad_Repair_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 02";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa",
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"
	};
};
class Extremo_Car_Offroad_Repair_Guerilla03: Extremo_Car_Offroad_Repair_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 03";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa",
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"
	};
};
class Extremo_Car_Offroad_Repair_Guerilla04: Extremo_Car_Offroad_Repair_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 04";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa",
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"
	};
};
class Extremo_Car_Offroad_Repair_Guerilla05: Extremo_Car_Offroad_Repair_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 05";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa",
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"
	};
};
class Extremo_Car_Offroad_Repair_Guerilla06: Extremo_Car_Offroad_Repair_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 06";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa",
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"
	};
};
class Extremo_Car_Offroad_Repair_Guerilla07: Extremo_Car_Offroad_Repair_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 07";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa",
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"
	};
};
class Extremo_Car_Offroad_Repair_Guerilla08: Extremo_Car_Offroad_Repair_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 08";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa",
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"
	};
};
class Extremo_Car_Offroad_Repair_Guerilla09: Extremo_Car_Offroad_Repair_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 09";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa",
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"
	};
};
class Extremo_Car_Offroad_Repair_Guerilla10: Extremo_Car_Offroad_Repair_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 10";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa",
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"
	};
};
class Extremo_Car_Offroad_Repair_Guerilla11: Extremo_Car_Offroad_Repair_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 11";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa",
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"
	};
};
class Extremo_Car_Offroad_Repair_Guerilla12: Extremo_Car_Offroad_Repair_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 12";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa",
		"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"
	};
}; 
class Extremo_Car_OldTractor_Red: Extremo_Car_OldTractor_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Red";
}; 
class Extremo_Car_ProwlerLight: B_CTRG_LSV_01_light_F
{
	author="Nikko Renolds";
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";
	skinName="Olive";
	displayName="Prowler (Light)";
	fuelConsumptionRate="0.03f";
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
	maximumLoad=3800;
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_olive_CO.paa",
		"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
		"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
		"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"
	};
	class TransportItems
	{
	};
	class TransportBackpacks
	{
	};
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
}; 
class Extremo_Car_ProwlerUnarmed: B_T_LSV_01_unarmed_black_F
{
	author="Nikko Renolds";
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";
	skinName="Black";
	displayName="Prowler (Unarmed)";
	fuelConsumptionRate="0.03f";
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
	maximumLoad=3800;
	class TransportItems
	{
	};
	class TransportBackpacks
	{
	};
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
}; 
class Extremo_Car_QilinUnarmed: O_T_LSV_02_unarmed_black_F
{
	author="Nikko Renolds";
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";
	skinName="Black";
	displayName="Qilin (Unarmed)";
	fuelConsumptionRate="0.03f";
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
	maximumLoad=3800;
	class TransportItems
	{
	};
	class TransportBackpacks
	{
	};
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
}; 
class Extremo_Car_Strider: Extremo_Car_Strider_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
}; 
class Extremo_Car_SUV_Red: Extremo_Car_SUV_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_CO.paa"
	};
	skinName="Red";
};
class Extremo_Car_SUV_Black: Extremo_Car_SUV_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_02_CO.paa"
	};
	skinName="Black";
};
class Extremo_Car_SUV_Grey: Extremo_Car_SUV_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Grey";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_03_CO.paa"
	};
};
class Extremo_Car_SUV_Orange: Extremo_Car_SUV_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Orange";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_04_CO.paa"
	};
};
class Extremo_Car_SUV_Rusty1: Extremo_Car_SUV_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Rusty White";
	hiddenSelectionsTextures[]=
	{
		"\Extremo_Assets\model\RTV\Extremo_Car_Suv_01_co.paa"
	};
	hiddenSelectionsMaterials[]=
	{
		"\Extremo_Assets\model\RTV\Extremo_Car_Suv.rvmat",
		"\Extremo_Assets\model\RTV\Extremo_Car_Suv.rvmat"
	};
};
class Extremo_Car_SUV_Rusty2: Extremo_Car_SUV_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Rusty Dark";
	hiddenSelectionsTextures[]=
	{
		"\Extremo_Assets\model\RTV\Extremo_Car_Suv_02_co.paa"
	};
	hiddenSelectionsMaterials[]=
	{
		"\Extremo_Assets\model\RTV\Extremo_Car_Suv.rvmat",
		"\Extremo_Assets\model\RTV\Extremo_Car_Suv.rvmat"
	};
};
class Extremo_Car_SUV_Rusty3: Extremo_Car_SUV_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Rusty Red";
	hiddenSelectionsTextures[]=
	{
		"\Extremo_Assets\model\RTV\Extremo_Car_Suv_03_co.paa"
	};
	hiddenSelectionsMaterials[]=
	{
		"\Extremo_Assets\model\RTV\Extremo_Car_Suv.rvmat",
		"\Extremo_Assets\model\RTV\Extremo_Car_Suv.rvmat"
	};
};
class Extremo_Car_SUVXL_Black: Extremo_Car_SUVXL_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Black";
};
class Extremo_Car_SUV_Armed_Black: Extremo_Car_SUV_Armed_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Black";
};
class Extremo_Car_Tempest: Extremo_Car_Tempest_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
};
class Extremo_Car_TowTractor_White: Extremo_Car_TowTractor_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="White";
};
class Extremo_Car_Tractor_Red: Extremo_Car_Tractor_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Red";
};
class Extremo_Car_UAZ_Green: Extremo_Car_UAZ_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Green";
};
class Extremo_Car_UAZ_Open_Green: Extremo_Car_UAZ_Open_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Green";
};
class Extremo_Car_Ural_Covered_Blue: Extremo_Car_Ural_Covered_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Blue";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"exile_psycho_Ural\data\ural_kabina_civil_co.paa",
		"exile_psycho_Ural\data\ural_plachta_civil_co.paa"
	};
};
class Extremo_Car_Ural_Covered_Yellow: Extremo_Car_Ural_Covered_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Yellow";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"exile_psycho_Ural\data\ural_kabina_civ1_co.paa",
		"exile_psycho_Ural\data\ural_plachta_civ1_co.paa"
	};
};
class Extremo_Car_Ural_Covered_Worker: Extremo_Car_Ural_Covered_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Worker";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"exile_psycho_Ural\data\ural_kabina_civ2_co.paa",
		"exile_psycho_Ural\data\Ural_plachta_civil_co.paa"
	};
};
class Extremo_Car_Ural_Covered_Military: Extremo_Car_Ural_Covered_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Military";
	hiddenSelections[]=
	{
		"camo1",
		"camo2",
		"camo3"
	};
	hiddenSelectionsTextures[]=
	{
		"exile_psycho_Ural\data\ural_kabina_khk_co.paa",
		"exile_psycho_Ural\data\ural_plachta_co.paa"
	};
};
class Extremo_Car_Ural_Open_Blue: Extremo_Car_Ural_Open_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Blue";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"exile_psycho_Ural\data\Ural_kabina_civil_co.paa",
		"exile_psycho_Ural\data\ural_plachta_civil_co.paa"
	};
};
class Extremo_Car_Ural_Open_Yellow: Extremo_Car_Ural_Open_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Yellow";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"exile_psycho_Ural\data\ural_kabina_civ1_co.paa",
		"exile_psycho_Ural\data\ural_plachta_civ1_co.paa"
	};
};
class Extremo_Car_Ural_Open_Worker: Extremo_Car_Ural_Open_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Worker";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"exile_psycho_Ural\data\ural_kabina_civ2_co.paa",
		"exile_psycho_Ural\data\Ural_plachta_civil_co.paa"
	};
};
class Extremo_Car_Ural_Open_Military: Extremo_Car_Ural_Open_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Military";
	hiddenSelections[]=
	{
		"camo1",
		"camo2",
		"camo3"
	};
	hiddenSelectionsTextures[]=
	{
		"exile_psycho_Ural\data\ural_kabina_khk_co.paa",
		"exile_psycho_Ural\data\ural_plachta_co.paa"
	};
}; 
class Extremo_Car_V3S_Covered: Extremo_Car_V3S_Covered_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Camo";
};
class Extremo_Car_V3S_Open: Extremo_Car_V3S_Open_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Green";
};
class Extremo_Car_Van_Black: Extremo_Car_Van_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Black";
	hiddenSelectionsTextures[]=
	{
		"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa",
		"\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"
	};
};
class Extremo_Car_Van_White: Extremo_Car_Van_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="White";
	hiddenSelectionsTextures[]=
	{
		"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa",
		"\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"
	};
};
class Extremo_Car_Van_Red: Extremo_Car_Van_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Red";
	hiddenSelectionsTextures[]=
	{
		"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa",
		"\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"
	};
};
class Extremo_Car_Van_Guerilla01: Extremo_Car_Van_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 01";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa",
		"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_01_CO.paa"
	};
};
class Extremo_Car_Van_Guerilla02: Extremo_Car_Van_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 02";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa",
		"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_02_CO.paa"
	};
};
class Extremo_Car_Van_Guerilla03: Extremo_Car_Van_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 03";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa",
		"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_03_CO.paa"
	};
};
class Extremo_Car_Van_Guerilla04: Extremo_Car_Van_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 04";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_04_CO.paa",
		"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_04_CO.paa"
	};
};
class Extremo_Car_Van_Guerilla05: Extremo_Car_Van_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 05";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_05_CO.paa",
		"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_05_CO.paa"
	};
};
class Extremo_Car_Van_Guerilla06: Extremo_Car_Van_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 06";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_06_CO.paa",
		"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_06_CO.paa"
	};
};
class Extremo_Car_Van_Guerilla07: Extremo_Car_Van_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 07";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_07_CO.paa",
		"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_07_CO.paa"
	};
};
class Extremo_Car_Van_Guerilla08: Extremo_Car_Van_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 08";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_08_CO.paa",
		"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_08_CO.paa"
	};
}; 
class Extremo_Car_Van_Box_Black: Extremo_Car_Van_Box_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Black";
	hiddenSelectionsTextures[]=
	{
		"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa",
		"\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"
	};
};
class Extremo_Car_Van_Box_White: Extremo_Car_Van_Box_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="White";
	hiddenSelectionsTextures[]=
	{
		"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa",
		"\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"
	};
};
class Extremo_Car_Van_Box_Red: Extremo_Car_Van_Box_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Red";
	hiddenSelectionsTextures[]=
	{
		"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa",
		"\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"
	};
};
class Extremo_Car_Van_Box_Guerilla01: Extremo_Car_Van_Box_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 01";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa",
		"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_01_CO.paa"
	};
};
class Extremo_Car_Van_Box_Guerilla02: Extremo_Car_Van_Box_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 02";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa",
		"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_02_CO.paa"
	};
};
class Extremo_Car_Van_Box_Guerilla03: Extremo_Car_Van_Box_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 03";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa",
		"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_03_CO.paa"
	};
};
class Extremo_Car_Van_Box_Guerilla04: Extremo_Car_Van_Box_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 04";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_04_CO.paa",
		"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_04_CO.paa"
	};
};
class Extremo_Car_Van_Box_Guerilla05: Extremo_Car_Van_Box_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 05";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_05_CO.paa",
		"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_05_CO.paa"
	};
};
class Extremo_Car_Van_Box_Guerilla06: Extremo_Car_Van_Box_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 06";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_06_CO.paa",
		"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_06_CO.paa"
	};
};
class Extremo_Car_Van_Box_Guerilla07: Extremo_Car_Van_Box_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 07";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_07_CO.paa",
		"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_07_CO.paa"
	};
};
class Extremo_Car_Van_Box_Guerilla08: Extremo_Car_Van_Box_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 08";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_08_CO.paa",
		"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_08_CO.paa"
	};
}; 
class Extremo_Car_Van_Fuel_Black: Extremo_Car_Van_Fuel_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Black";
	hiddenSelectionsTextures[]=
	{
		"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa",
		"\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"
	};
};
class Extremo_Car_Van_Fuel_White: Extremo_Car_Van_Fuel_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="White";
	hiddenSelectionsTextures[]=
	{
		"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa",
		"\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"
	};
};
class Extremo_Car_Van_Fuel_Red: Extremo_Car_Van_Fuel_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Red";
	hiddenSelectionsTextures[]=
	{
		"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa",
		"\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"
	};
};
class Extremo_Car_Van_Fuel_Guerilla01: Extremo_Car_Van_Fuel_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 01";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa",
		"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_01_CO.paa"
	};
};
class Extremo_Car_Van_Fuel_Guerilla02: Extremo_Car_Van_Fuel_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 02";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa",
		"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_02_CO.paa"
	};
};
class Extremo_Car_Van_Fuel_Guerilla03: Extremo_Car_Van_Fuel_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 03";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa",
		"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_03_CO.paa"
	};
}; 
class Extremo_Car_Volha_Blue: Extremo_Car_Volha_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Blue";
	hiddenselections[]=
	{
		"Camo1"
	};
	hiddenselectionstextures[]=
	{
		"exile_psycho_Gaz_volha\data\Volha_ECIV_CO.paa"
	};
};
class Extremo_Car_Volha_White: Extremo_Car_Volha_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="White";
	hiddenselections[]=
	{
		"Camo1"
	};
	hiddenselectionstextures[]=
	{
		"exile_psycho_Gaz_volha\data\Volha_Gray_ECIV_CO.paa"
	};
};
class Extremo_Car_Volha_Black: Extremo_Car_Volha_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Black";
	hiddenselections[]=
	{
		"Camo1"
	};
	hiddenselectionstextures[]=
	{
		"exile_psycho_Gaz_volha\data\Volha_Black_ECIV_CO.paa"
	};
};
class Extremo_Bike_QuadBike_Black: Extremo_Bike_QuadBike_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Black";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLACK_CO.paa",
		"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLACK_CO.paa"
	};
};
class Extremo_Bike_QuadBike_Blue: Extremo_Bike_QuadBike_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Blue";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLUE_CO.paa",
		"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLUE_CO.paa"
	};
};
class Extremo_Bike_QuadBike_Red: Extremo_Bike_QuadBike_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Red";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_RED_CO.paa",
		"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVRED_CO.paa"
	};
};
class Extremo_Bike_QuadBike_White: Extremo_Bike_QuadBike_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="White";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_WHITE_CO.paa",
		"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVWHITE_CO.paa"
	};
};
class Extremo_Bike_QuadBike_Nato: Extremo_Bike_QuadBike_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="NATO";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa",
		"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_wheel_co.paa"
	};
};
class Extremo_Bike_QuadBike_Csat: Extremo_Bike_QuadBike_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="CSAT";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_OPFOR_CO.paa",
		"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_wheel_OPFOR_CO.paa"
	};
};
class Extremo_Bike_QuadBike_Fia: Extremo_Bike_QuadBike_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="FIA";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_INDP_CO.paa",
		"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_INDP_CO.paa"
	};
};
class Extremo_Bike_QuadBike_Guerilla01: Extremo_Bike_QuadBike_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 01";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Quadbike_01\Data\Quadbike_01_IG_CO.paa",
		"\A3\soft_f_gamma\Quadbike_01\Data\Quadbike_01_wheel_IG_CO.paa"
	};
};
class Extremo_Bike_QuadBike_Guerilla02: Extremo_Bike_QuadBike_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Land";	
	skinName="Guerilla 02";
	hiddenSelectionsTextures[]=
	{
		"\A3\Soft_F_Bootcamp\Quadbike_01\Data\Quadbike_01_INDP_Hunter_CO.paa",
		"\A3\soft_f_gamma\Quadbike_01\Data\Quadbike_01_wheel_INDP_Hunter_CO.paa"
	};
};

//--- Choppers
class Extremo_Chopper_Hellcat_Green: Extremo_Chopper_Hellcat_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Air";	
	skinName="Green";
	hiddenSelectionsTextures[]=
	{
		"\A3\Air_F_EPB\Heli_Light_03\data\Heli_Light_03_base_CO.paa"
	};
};
class Extremo_Chopper_Hellcat_FIA: Extremo_Chopper_Hellcat_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Air";	
	skinName="FIA";
	hiddenSelectionsTextures[]=
	{
		"\A3\Air_F_EPB\Heli_Light_03\data\heli_light_03_base_indp_co.paa"
	};
};
class Extremo_Chopper_Huey_Green: Extremo_Chopper_Huey_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Air";	
	skinName="Green";
	hiddenSelectionsTextures[]=
	{
		"exile_psycho_UH1H\data\uh1h_co.paa",
		"exile_psycho_UH1H\data\uh1h_in_co.paa",
		"exile_psycho_UH1H\data\default_co.paa",
		"exile_psycho_UH1H\data\alpha_ca.paa"
	};
};
class Extremo_Chopper_Huey_Desert: Extremo_Chopper_Huey_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Air";	
	skinName="Desert";
	hiddenSelectionsTextures[]=
	{
		"exile_psycho_UH1H\data\uh1d_tka_co.paa",
		"exile_psycho_UH1H\data\uh1d_in_tka_co.paa",
		"exile_psycho_UH1H\data\default_co.paa",
		"exile_psycho_UH1H\data\alpha_ca.paa"
	};
};
class Extremo_Chopper_Huey_Armed_Green: Extremo_Chopper_Huey_Armed_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Air";	
	skinName="Green";
	hiddenSelectionsTextures[]=
	{
		"exile_psycho_UH1H\data\uh1h_co.paa",
		"exile_psycho_UH1H\data\uh1h_in_co.paa",
		"exile_psycho_UH1H\data\default_co.paa",
		"exile_psycho_UH1H\data\alpha_ca.paa"
	};
};
class Extremo_Chopper_Huey_Armed_Desert: Extremo_Chopper_Huey_Armed_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Air";	
	skinName="Desert";
	hiddenSelectionsTextures[]=
	{
		"exile_psycho_UH1H\data\uh1d_tka_co.paa",
		"exile_psycho_UH1H\data\uh1d_in_tka_co.paa",
		"exile_psycho_UH1H\data\default_co.paa",
		"exile_psycho_UH1H\data\alpha_ca.paa"
	};
};
class Extremo_Chopper_Hummingbird_Civillian_Blue: Extremo_Chopper_Hummingbird_Civillian_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Air";	
	skinName="Blue";
	hiddenSelectionsTextures[]=
	{
		"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
	};
};
class Extremo_Chopper_Hummingbird_Civillian_Red: Extremo_Chopper_Hummingbird_Civillian_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Air";	
	skinName="Red";
	hiddenSelectionsTextures[]=
	{
		"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
	};
};
class Extremo_Chopper_Hummingbird_Civillian_ION: Extremo_Chopper_Hummingbird_Civillian_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Air";	
	skinName="ION";
	hiddenSelectionsTextures[]=
	{
		"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"
	};
};
class Extremo_Chopper_Hummingbird_Civillian_BlueLine: Extremo_Chopper_Hummingbird_Civillian_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Air";	
	skinName="Blue Line";
	hiddenSelectionsTextures[]=
	{
		"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueLine_co.paa"
	};
};
class Extremo_Chopper_Hummingbird_Civillian_Digital: Extremo_Chopper_Hummingbird_Civillian_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Air";	
	skinName="Digital";
	hiddenSelectionsTextures[]=
	{
		"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
	};
};
class Extremo_Chopper_Hummingbird_Civillian_Elliptical: Extremo_Chopper_Hummingbird_Civillian_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Air";	
	skinName="Elliptical";
	hiddenSelectionsTextures[]=
	{
		"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
	};
};
class Extremo_Chopper_Hummingbird_Civillian_Furious: Extremo_Chopper_Hummingbird_Civillian_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Air";	
	skinName="Furious";
	hiddenSelectionsTextures[]=
	{
		"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
	};
};
class Extremo_Chopper_Hummingbird_Civillian_GrayWatcher: Extremo_Chopper_Hummingbird_Civillian_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Air";	
	skinName="Gray Watcher";
	hiddenSelectionsTextures[]=
	{
		"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_graywatcher_co.paa"
	};
};
class Extremo_Chopper_Hummingbird_Civillian_Jeans: Extremo_Chopper_Hummingbird_Civillian_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Air";	
	skinName="Jeans";
	hiddenSelectionsTextures[]=
	{
		"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
	};
};
class Extremo_Chopper_Hummingbird_Civillian_Light: Extremo_Chopper_Hummingbird_Civillian_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Air";	
	skinName="Light";
	hiddenSelectionsTextures[]=
	{
		"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_light_co.paa"
	};
};
class Extremo_Chopper_Hummingbird_Civillian_Shadow: Extremo_Chopper_Hummingbird_Civillian_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Air";	
	skinName="Shadow";
	hiddenSelectionsTextures[]=
	{
		"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_shadow_co.paa"
	};
};
class Extremo_Chopper_Hummingbird_Civillian_Sheriff: Extremo_Chopper_Hummingbird_Civillian_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Air";	
	skinName="Sheriff";
	hiddenSelectionsTextures[]=
	{
		"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
	};
};
class Extremo_Chopper_Hummingbird_Civillian_Speedy: Extremo_Chopper_Hummingbird_Civillian_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Air";	
	skinName="Speedy";
	hiddenSelectionsTextures[]=
	{
		"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
	};
};
class Extremo_Chopper_Hummingbird_Civillian_Sunset: Extremo_Chopper_Hummingbird_Civillian_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Air";	
	skinName="Sunset";
	hiddenSelectionsTextures[]=
	{
		"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
	};
};
class Extremo_Chopper_Hummingbird_Civillian_Vrana: Extremo_Chopper_Hummingbird_Civillian_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Air";	
	skinName="Vrana";
	hiddenSelectionsTextures[]=
	{
		"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
	};
};
class Extremo_Chopper_Hummingbird_Civillian_Wasp: Extremo_Chopper_Hummingbird_Civillian_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Air";	
	skinName="Wasp";
	hiddenSelectionsTextures[]=
	{
		"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wasp_co.paa"
	};
};
class Extremo_Chopper_Hummingbird_Civillian_Wave: Extremo_Chopper_Hummingbird_Civillian_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Air";	
	skinName="Wave";
	hiddenSelectionsTextures[]=
	{
		"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
	};
};
class Extremo_Chopper_Huron_Black: Extremo_Chopper_Huron_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Air";	
	skinName="Black";
	hiddenSelectionsTextures[]=
	{
		"\A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_ext01_black_CO.paa",
		"\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_black_co.paa"
	};
};
class Extremo_Chopper_Huron_Green: Extremo_Chopper_Huron_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Air";	
	skinName="Green";
	hiddenSelectionsTextures[]=
	{
		"\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext01_co.paa",
		"\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_co.paa"
	};
};
class Extremo_Chopper_Mohawk_FIA: Extremo_Chopper_Mohawk_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Air";	
	skinName="FIA";
};
class Extremo_Chopper_Orca_CSAT: Extremo_Chopper_Orca_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Air";	
	skinName="CSAT";
	hiddenSelectionsTextures[]=
	{
		"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_CO.paa"
	};
};
class Extremo_Chopper_Orca_Black: Extremo_Chopper_Orca_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Air";	
	skinName="Black";
	hiddenSelectionsTextures[]=
	{
		"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_CO.paa"
	};
};
class Extremo_Chopper_Orca_BlackCustom: Extremo_Chopper_Orca_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Air";	
	skinName="Black Custom";
	hiddenSelectionsTextures[]=
	{
		"\A3\Air_F_Heli\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_V2_CO.paa"
	};
};
class Extremo_Chopper_Taru_CSAT: Extremo_Chopper_Taru_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Air";	
	skinName="CSAT";
	hiddenSelectionsTextures[]=
	{
		"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_co.paa",
		"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_co.paa"
	};
};
class Extremo_Chopper_Taru_Black: Extremo_Chopper_Taru_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Air";	
	skinName="Black";
	hiddenSelectionsTextures[]=
	{
		"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_CO.paa",
		"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_CO.paa"
	};
};
class Extremo_Chopper_Taru_Covered_CSAT: Extremo_Chopper_Taru_Covered_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Air";	
	skinName="CSAT";
	hiddenSelectionsTextures[]=
	{
		"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_CO.paa",
		"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_CO.paa",
		"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_CO.paa",
		"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_CO.paa"
	};
};
class Extremo_Chopper_Taru_Covered_Black: Extremo_Chopper_Taru_Covered_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Air";	
	skinName="Black";
	hiddenSelectionsTextures[]=
	{
		"A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_01_black_co.paa",
		"A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_02_black_co.paa",
		"A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_pod_ext01_black_co.paa",
		"A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_pod_ext02_black_co.paa"
	};
}; 
class Extremo_Chopper_Taru_Transport_CSAT: Extremo_Chopper_Taru_Transport_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Air";	
	skinName="CSAT";
	hiddenSelectionsTextures[]=
	{
		"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_co.paa",
		"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_co.paa"
	};
};
class Extremo_Chopper_Taru_Transport_Black: Extremo_Chopper_Taru_Transport_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Air";	
	skinName="Black";
	hiddenSelectionsTextures[]=
	{
		"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_CO.paa",
		"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_CO.paa"
	};
};

//--- Boats
class Extremo_Boat_MotorBoat_Police: Extremo_Boat_MotorBoat_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Water";	
	skinName="Police";
	displayName="Motor Boat (Police)";
	class AnimationSources: AnimationSources
	{
		class Proxy
		{
			source="user";
			animPeriod=1;
			initPhase=1;
		};
		class Beacons
		{
			source="user";
			animPeriod=1;
			initPhase=0;
		};
	};
	class Eventhandlers: EventHandlers
	{
		init="_this select 0 animate [""HidePoliceSigns"",0]; _this select 0 animate [""HideRescueSigns"",1]; _this select 0 animate [""HidePolice"",0];";
	};
	class UserActions
	{
		class beacons_start
		{
			userActionID=50;
			displayName="$STR_A3_CfgVehicles_beacons_on";
			displayNameDefault="$STR_A3_CfgVehicles_beacons_on";
			position="mph_axis";
			priority=1.5;
			radius=1.8;
			animPeriod=2;
			onlyForplayer=0;
			condition="this animationPhase ""BeaconsStart"" < 0.5 AND Alive(this) AND driver this == player";
			statement="this animate [""BeaconsStart"",1];";
		};
		class beacons_stop: beacons_start
		{
			userActionID=51;
			displayName="$STR_A3_CfgVehicles_beacons_off";
			displayNameDefault="$STR_A3_CfgVehicles_beacons_off";
			condition="this animationPhase ""BeaconsStart"" > 0.5 AND Alive(this) AND driver this == player";
			statement="this animate [""BeaconsStart"",0];";
		};
	};
	hiddenSelectionsTextures[]=
	{
		"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_police_co.paa",
		"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_police_co.paa"
	};
	textureList[]=
	{
		"police",
		1
	};
	animationList[]=
	{
		"hidePolice",
		0,
		"HideRescueSigns",
		1,
		"HidePoliceSigns",
		0
	};
};
class Extremo_Boat_MotorBoat_Orange: Extremo_Boat_MotorBoat_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Water";	
	skinName="Orange";
	displayName="Motor Boat (Orange)";
	hiddenSelectionsTextures[]=
	{
		"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_rescue_co.paa",
		"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_rescue_co.paa"
	};
};
class Extremo_Boat_MotorBoat_White: Extremo_Boat_MotorBoat_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Water";	
	skinName="White";
	displayName="Motor Boat (White)";
	textures[]=
	{
		"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_co.paa",
		"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_co.paa"
	};
};
class Extremo_Boat_WaterScooter: Extremo_Boat_WaterScooter_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Water";	
	skinName="Black";
	displayName="Water Scooter";
	hiddenSelectionsTextures[]=
	{
		"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Black_CO.paa",
		"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Black_CO.paa"
	};
};
class Extremo_Boat_RHIB: Extremo_Boat_RHIB_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Water";	
	skinName="Gray";
	displayName="RHIB";
};
class Extremo_Boat_RubberDuck_CSAT: Extremo_Boat_RubberDuck_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Water";	
	skinName="CSAT";
	displayName="Rubber Duck (CSAT)";
	hiddenSelectionsTextures[]=
	{
		"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_OPFOR_CO.paa"
	};
};
class Extremo_Boat_RubberDuck_Digital: Extremo_Boat_RubberDuck_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Water";	
	skinName="Digital";
	displayName="Rubber Duck (Digital)";
	hiddenSelectionsTextures[]=
	{
		"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_INDP_CO.paa"
	};
};
class Extremo_Boat_RubberDuck_Orange: Extremo_Boat_RubberDuck_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Water";	
	skinName="Orange";
	displayName="Rubber Duck (Orange)";
	hiddenSelectionsTextures[]=
	{
		"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_rescue_CO.paa"
	};
};
class Extremo_Boat_RubberDuck_Blue: Extremo_Boat_RubberDuck_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Water";	
	skinName="Blue";
	displayName="Rubber Duck (Blue)";
	hiddenSelectionsTextures[]=
	{
		"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_civilian_CO.paa"
	};
};
class Extremo_Boat_RubberDuck_Black: Extremo_Boat_RubberDuck_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Water";	
	skinName="Black";
	displayName="Rubber Duck (Black)";
	hiddenSelectionsTextures[]=
	{
		"\A3\boat_F\Boat_Transport_01\data\boat_transport_01_co.paa"
	};
};
class Extremo_Boat_SDV_CSAT: Extremo_Boat_SDV_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Water";	
	skinName="CSAT";
	displayName="SDV (CSAT)";
	hiddenSelectionsTextures[]=
	{
		"\A3\boat_f_beta\SDV_01\data\SDV_ext_opfor_CO.paa"
	};
};
class Extremo_Boat_SDV_Digital: Extremo_Boat_SDV_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Water";	
	skinName="Digital";
	displayName="SDV (Digital)";
	hiddenSelectionsTextures[]=
	{
		"\A3\boat_f_beta\SDV_01\data\SDV_ext_INDP_CO.paa"
	};
};
class Extremo_Boat_SDV_Grey: Extremo_Boat_SDV_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Water";	
	skinName="Grey";
	displayName="SDV (Grey)";
	hiddenSelectionsTextures[]=
	{
		"\A3\boat_f_beta\SDV_01\data\SDV_ext_CO.paa"
	};
};
//--- Planes
class Extremo_Plane_AN2_Green: Extremo_Plane_AN2_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Water";	
	skinName="Green";
	hiddenSelectionsTextures[]=
	{
		"exile_psycho_An2\data\an2_1_co.paa",
		"exile_psycho_An2\data\an2_2_co.paa",
		"exile_psycho_An2\data\an2_wings_co.paa"
	};
};
class Extremo_Plane_AN2_White: Extremo_Plane_AN2_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Water";	
	skinName="Red, White & Blue";
	hiddenSelectionsTextures[]=
	{
		"exile_psycho_An2\data\an2_1_a_co.paa",
		"exile_psycho_An2\data\an2_2_a_co.paa",
		"exile_psycho_An2\data\an2_wings_a_co.paa"
	};
};
class Extremo_Plane_AN2_Stripe: Extremo_Plane_AN2_Abstract
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Water";	
	skinName="Green Stripe";
	hiddenSelectionsTextures[]=
	{
		"exile_psycho_An2\data\an2_1_b_co.paa",
		"exile_psycho_An2\data\an2_2_b_co.paa",
		"exile_psycho_An2\data\an2_wings_b_co.paa"
	};
};
class Extremo_Plane_BlackfishInfantry: B_T_VTOL_01_infantry_F
{
	author="Nikko Renolds";
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Water";
	crew="";
	typicalCargo[]={};
	skinName="Olive";
	displayName="V-44 X Blackfish (Infantry Transport)";
	fuelConsumptionRate="0.406";
	maximumLoad=7000;
	class EventHandlers: DefaultEventHandlers
	{
		init="";
	};
	class TransportItems
	{
	};
	class TransportBackpacks
	{
	};
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
};
class Extremo_Plane_BlackfishVehicle: B_T_VTOL_01_vehicle_F
{
	author="Nikko Renolds";
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Water";
	crew="";
	typicalCargo[]={};
	skinName="Olive";
	displayName="V-44 X Blackfish (Vehicle Transport)";
	fuelConsumptionRate="0.406";
	maximumLoad=7000;
	class EventHandlers: DefaultEventHandlers
	{
		init="";
	};
	class TransportItems
	{
	};
	class TransportBackpacks
	{
	};
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
};
class Extremo_Plane_Ceasar: C_Plane_Civil_01_F
{
	author="Nikko Renolds";
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Water";
	crew="";
	typicalCargo[]={};
	skinName="Redline";
	displayName="Ceasar BTT";
	fuelConsumptionRate="0.03f";
	maximumLoad=1300;
	class EventHandlers: DefaultEventHandlers
	{
		init="";
	};
	class TransportItems
	{
	};
	class TransportBackpacks
	{
	};
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
};
class Extremo_Casino_TwinkleTwister: NonStrategic
{
	scope=2; 
	side=2;
	faction="Player_Faction";
	vehicleclass="";
	editorCategory = "Vehicle";
	editorSubcategory = "Water";	
	author="Nikko Renolds";
	displayName="Twinkle Twister";
	model="\Extremo_Assets\model\Extremo_Test_OAB.p3d";
	destrType="DestructNo";
	class EventHandlers
	{
		init="";
	};
	class AnimationSources
	{
		class RotorLeft
		{
			source="user";
			initPhase=0;
			animPeriod=1;
			sound="";
		};
		class RotorMiddle
		{
			source="user";
			initPhase=0;
			animPeriod=1;
			sound="";
		};
		class RotorRight
		{
			source="user";
			initPhase=0;
			animPeriod=1;
			sound="";
		};
		class Light01
		{
			source="MarkerLight";
			markerLight="Light01";
		};
	};
	class MarkerLights
	{
		class Light01
		{
			color[]={1,0,0};
			ambient[]={0.0099999998,0,0};
			intensity=1000;
			name="Light01";
			useFlare=1;
			flareSize=1.7;
			flareMaxDistance=2000;
			activeLight=0;
			dayLight=1;
			blinking=1;
			blinkingPattern[]={0.2,1.3};
			blinkingPatternGuarantee=0;
			drawLight=1;
			drawLightSize=0.15000001;
			drawLightCenterSize=0.039999999;
			class Attenuation
			{
				start=0;
				constant=10;
				linear=6;
				quadratic=4;
				hardLimitStart=12;
				hardLimitEnd=15;
			};
		};
	};
	class UserActions
	{
		class play
		{
			displayName="Play";
			position="left";
			radius=3;
			onlyForPlayer=1;
			condition="true";
			statement="this call Extremo_fnc_object_twinkleTwister_play";
		};
	};
};