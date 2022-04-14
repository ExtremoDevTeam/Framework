/*
	## EXTREMO Survival
	## Nikko & Happyfeet
	## https://community.bistudio.com/wiki/Arma_3:_Characters_And_Gear_Encoding_Guide
	## https://community.bistudio.com/wiki/CfgVehicles_Config_Reference
*/

class Extremo_Container_Abstract_Safe: Extremo_Container_Abstract
{
	scope=1;
	destrType="DestructNo";
	ExtremoIsLockable=1;
	simulation="house";
};
class Extremo_Container_CamoTent: Extremo_Container_Abstract
{
	scope=2;
	model="\a3\structures_f\Civ\Camping\TentA_F.p3d";
	displayName="Camo Tent";
	destrType="DestructTent";
	icon="iconObject_2x3";
	maximumLoad=500;
	simulation="house";
	ExtremoRequiresSimulation=1;
};
class Extremo_Container_OldChest: Extremo_Container_Abstract
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Container_OldChest.p3d";
	shortDescription="An old rusted chest, just big enough to store a dead body in.";
	displayName="Old Chest";
	destrType="DestructBuilding";
	icon="iconCrate";
	explosionEffect="BasicAmmoExplosion";
	maximumLoad=2500;
	armor=5000;
	simulation="house";
	class AnimationSources
	{
		class OldChest_Source
		{
			source="user";
			initPhase=0;
			animPeriod=2;
			sound="MetalDoorsSound";
		};
	};
	class UserActions
	{
		class OpenChest
		{
			displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='1.5' />";
			displayName="Open Chest";
			position="ActionPoint";
			priority=0.40000001;
			radius=2.5;
			onlyForPlayer=1;
			condition="((this animationSourcePhase 'OldChest_Source') < 0.5)";
			statement="this animateSource ['OldChest_Source', 1];";
		};
		class CloseChest: OpenChest
		{
			displayName="Close Chest";
			priority=0.2;
			condition="((this animationSourcePhase 'OldChest_Source') >= 0.5)";
			statement="this animateSource ['OldChest_Source', 0];";
		};
	};
};
class Extremo_Container_Safe: Extremo_Container_Abstract_Safe
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Container_Safe.p3d";
	displayName="Safe";
	maximumLoad=3000;
	armor=2000;
	class AnimationSources
	{
		class DoorAnimationSource
		{
			source="user";
			initPhase=0;
			animPeriod=1;
			sound="MetalDoorsSound";
		};
	};
};
class Extremo_Container_Safe_Small: Extremo_Container_Abstract_Safe
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Container_Safe_Small.p3d";
	displayName="Safe (Small)";
	maximumLoad=175;
	armor=2000;
	class AnimationSources
	{
		class DoorAnimationSource
		{
			source="user";
			initPhase=0;
			animPeriod=2;
			sound="MetalDoorsSound";
		};
	};
};
class Extremo_Container_Storagecrate: Extremo_Container_Abstract
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Container_Storagecrate.p3d";
	shortDescription="Will explode when shot. Powered by Michael Bay.";
	displayName="Storage Crate";
	destrType="DestructBuilding";
	icon="iconCrate";
	explosionEffect="BasicAmmoExplosion";
	maximumLoad=600;
	armor=5000;
	simulation="house";
};
class Extremo_Container_SupplyBox: Extremo_Container_Abstract
{
	scope=2;
	model="\A3\Supplies_F_Heli\CargoNets\CargoNet_01_ammo_F.p3d";
	shortDescription="A supply box that can hold a lot of things.";
	displayName="Supply Box";
	destrType="DestructBuilding";
	icon="iconCrate";
	explosionEffect="BasicAmmoExplosion";
	maximumLoad=5000;
	armor=5000;
	hiddenSelections[]=
	{
		"Camo_1",
		"Camo_2"
	};
	hiddenSelectionsMaterials[]={};
	hiddenSelectionsTextures[]=
	{
		"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_CO.paa",
		""
	};
	hiddenUnderwaterSelections[]={};
	hiddenUnderwaterSelectionsTextures[]={};
	slingLoadCargoMemoryPoints[]={};
	slingLoadCargoMemoryPointsDir[]={};
};

class Extremo_Container_WoodenBarrel: Extremo_Container_Abstract
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Container_WoodBarrel.p3d";
	shortDescription="Will explode when shot. Powered by Michael Bay.";
	displayName="Barrel Storage";
	destrType="DestructBuilding";
	icon="iconCrate";
	explosionEffect="BasicAmmoExplosion";
	maximumLoad=350;
	armor=5000;
	simulation="house";
};
class Extremo_Container_WoodStoragecrate: Extremo_Container_Abstract
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Container_WoodStoragecrate.p3d";
	shortDescription="Will explode when shot. Powered by Michael Bay.";
	displayName="Wooden Storage Crate";
	destrType="DestructBuilding";
	icon="iconCrate";
	explosionEffect="BasicAmmoExplosion";
	maximumLoad=300;
	armor=5000;
	simulation="house";
};