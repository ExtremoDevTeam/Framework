/*
	## EXTREMO Survival
	## Nikko & Happyfeet
	## https://community.bistudio.com/wiki/Arma_3:_Characters_And_Gear_Encoding_Guide
	## https://community.bistudio.com/wiki/CfgVehicles_Config_Reference
*/

class Extremo_Locker: NonStrategic
{
	scope=2;
	author="Nikko Renolds";
	displayName="Locker";
	model="\Extremo_Assets\model\Extremo_Locker.p3d";
	destrType="DestructNo";
	class EventHandlers
	{
		init="";
	};
	class UserActions
	{
		class play
		{
			displayName="Inventory";
			position="left";
			radius=3;
			onlyForPlayer=1;
			condition="true";
			statement="this call Extremo_fnc_gui_lockerDialog_show";
		};
	};
};
class Extremo_PopTabs: thing
{
	author="Nikko Renolds";
	scope=1;
	side=2;
	mapSize=0.15000001;
	displayName="Pop Tabs";
	simulation="thing";
	animated=0;
	vehicleClass="Small_items";
	faction="None";
	icon="iconObject";
	editorCategory="EdCat_Things";
	editorSubcategory="EdSubcat_Default";
	destrType="DestructNo";
	armor=999999;
	cost=100;
	model="\Extremo_Assets\model\Extremo_Item_PopTabs.p3d";
	class Eventhandlers
	{
		init="";
		killed="";
	};
	class UserActions
	{
		class Take
		{
			available=1;
			displayNameDefault="<img image='\a3\ui_f\data\IGUI\Cfg\Actions\take_ca.paa' size='2' shadow='true' />";
			condition="true";
			displayName="<img image='\a3\ui_f\data\IGUI\Cfg\Actions\take_ca.paa' size='1' shadow='true' /> Take Pop Tabs";
			onlyForPlayer=1;
			position="Supply";
			priority=6;
			radius=2;
			showWindow=1;
			statement="this call Extremo_fnc_system_money_take";
		};
	};
};
class Extremo_XM8: thing
{//Extremo_XM8 and Extremo_Item_XM8 work together
	
	author="Nikko Renolds";
	scope=1;//NOT IN EDITOR
	side=2;
	mapSize=0.15000001;
	displayName="XM8";
	simulation="thing";
	animated=0;
	vehicleClass="Small_items";
	faction="None";
	icon="iconObject";
	editorCategory="EdCat_Things";
	editorSubcategory="EdSubcat_Default";
	destrType="DestructNo";
	armor=999999;
	cost=100;
	model="\Extremo_Assets\model\Extremo_Item_XM8.p3d";
	class Eventhandlers
	{
		init="_this call Extremo_fnc_object_xm8_event_onInit";
		killed="_this call Extremo_fnc_object_xm8_event_onKilled";
	};
	class UserActions
	{
		class Take
		{
			available=1;
			displayNameDefault="<img image='\a3\ui_f\data\IGUI\Cfg\Actions\take_ca.paa' size='2' shadow='true' />"; 
			displayName="<img image='\a3\ui_f\data\IGUI\Cfg\Actions\take_ca.paa' size='1' shadow='true' /> Take XM8";
			onlyForPlayer=1;
			position="Supply";
			priority=6;
			radius=2;
			showWindow=1;
			condition="true";
			statement="_this call Extremo_fnc_object_xm8_pickup";
		};
	}; 
};
class Extremo_Preloader: NonStrategic
{
	scope=2;
	author="Nikko Renolds";
	displayName="Extremo Preloader";
	model="\Extremo_Assets\model\Extremo_Preloader.p3d";
	destrType="DestructNo";
	class EventHandlers
	{
		init="";
	};
};
class Extremo_ConcreteMixer: NonStrategic
{
	scope=2;
	author="Nikko Renolds";
	displayName="Concrete Mixer";
	model="\Extremo_Assets\model\Extremo_ConcreteMixer.p3d";
	destrType="DestructNo";
	class EventHandlers
	{
		init="";
	};
	class AnimationSources
	{
		class SpinSource
		{
			source="user";
			initPhase=0;
			animPeriod=60;
			sound="";
		};
	};
}; 
class Extremo_RussianRouletteChair: Land_ChairWood_F
{
	scope=2;
	author="Nikko Renolds";
	destrType="DestructNo";
	displayName="Extremo Russian Roulette Chair";
};