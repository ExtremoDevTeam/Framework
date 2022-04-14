class CfgAmmo
{
	class BulletBase;
	class Extremo_Ammo_AbstractMelee: BulletBase
	{
		hit=8;
		indirectHit=0;
		indirectHitRange=0;
		cost=1;
		typicalSpeed=85;
		timeToLive=0.050000001;
		airFriction=0;
		waterFriction=0;
		caliber=0.69999999;
		model="\A3\weapons_f\empty";
		proxyShape="\A3\weapons_f\empty";
		soundHitBody1[]=
		{
			"\Extremo_Assets\sound\hack_flesh01.ogg",
			1.584893,
			1,
			10
		};
		soundHitBody2[]=
		{
			"\Extremo_Assets\sound\hack_flesh02.ogg",
			1.584893,
			1,
			10
		};
		hitMan[]=
		{
			"soundHitBody1",
			0.5,
			"soundHitBody2",
			0.5
		};
		maxControlRange=1;
		simulation="shotRocket";
		explosive=0;
		visibleFireTime=0;
		whistleOnFire=0;
		whistleDist=0;
		effectsMissileInit="EmptyEffect";
		effectsMissile="EmptyEffect";
		effectsSmoke="EmptyEffect";
		explosionEffects="NoExplosion";
		craterEffects="NoCrater";
		muzzleEffect="";
		class CamShakeExplode
		{
			power="(5^0.5)";
			duration="((round (5^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((5^0.5)*3)";
		};
		class CamShakeHit
		{
			power=5;
			duration="((round (5^0.25))*0.2 max 0.2)";
			frequency=20;
			distance=1;
		};
	};
	class Extremo_Ammo_Battery: BulletBase
	{
		hit=0;
		indirectHit=0;
		indirectHitRange=0;
		cartridge="FxCartridge_9mm";
		caliber=2.5999999;
		deflecting=45;
		visibleFire=5;
		audibleFire=9;
		cost=100;
		typicalSpeed=280;
		airFriction=-0.0018;
	};
	class DemoCharge_Remote_Ammo_Scripted;
	class SatchelCharge_Remote_Ammo_Scripted;
	class Extremo_Ammo_BreachingCharge_BigMomma: SatchelCharge_Remote_Ammo_Scripted
	{
		displayName="Breaching Charge (Big Momma)";
		model="\Extremo_Assets\model\Extremo_Item_BigMomma.p3d";
		CraterEffects="ArtyShellCrater";
		directionalExplosion=1;
		ExplosionEffects="MortarExplosion";
	};
	class Extremo_Ammo_BreachingCharge_Wood: DemoCharge_Remote_Ammo_Scripted
	{
		displayName="Breaching Charge (Wood)";
		directionalExplosion=1;
	};
	class Extremo_Ammo_BreachingCharge_Metal: SatchelCharge_Remote_Ammo_Scripted
	{
		displayName="Breaching Charge (Metal)";
		directionalExplosion=1;
	};
	class Extremo_Ammo_Swing: Extremo_Ammo_AbstractMelee
	{
		hit=9;
		typicalSpeed=620;
		timeToLive=0.60000002;
		visibleFire=0.1;
		audibleFire=1;
		caliber=4.1999998;
		airFriction=-0.0020000001;
	};
	class Extremo_Ammo_Swoosh: Extremo_Ammo_Swing
	{
		hit=12;
	};
	class Extremo_Ammo_Boing: Extremo_Ammo_Swing
	{
		hit=5;
	};
	class SmokeShellOrange;
	class Extremo_Ammo_SmokeShellOrange: SmokeShellOrange
	{
		deflecting=360;
		explosionTime=1;
		timeToLive=360;
	};
};

class CfgMagazines
{
	class CA_Magazine;
	class HandGrenade_Stone;
	class Extremo_AbstractItem_Interaction_Consuming
	{
		scope=1;
		sounds[]={};
		returnedItem="";
		stopBleeding=0;
		animations[]={};
		tools[]={};
	};
	class Extremo_AbstractItem_Interaction_Eating: Extremo_AbstractItem_Interaction_Consuming
	{
		scope=1;
		sounds[]=
		{
			"SndExtremoHeartbeatEating01",
			"SndExtremoHeartbeatEating02"
		};
	};
	class Extremo_AbstractItem_Interaction_Eating_Can: Extremo_AbstractItem_Interaction_Eating
	{
		tools[]=
		{
			"Extremo_Item_CanOpener"
		};
	};
	class Extremo_AbstractItem_Interaction_Drinking: Extremo_AbstractItem_Interaction_Consuming
	{
		scope=1;
		sounds[]=
		{
			"SndExtremoHeartbeatDrinking01"
		};
	};
	class Extremo_AbstractItem_Interaction_Consuming_Healing: Extremo_AbstractItem_Interaction_Consuming
	{
		animations[]=
		{
			"AinvPknlMstpSlayWnonDnon_medic",
			"AinvPknlMstpSlayWrflDnon_medic",
			"AinvPknlMstpSlayWpstDnon_medic",
			"AinvPknlMstpSlayWrflDnon_medic",
			"AinvPknlMstpSlayWnonDnon_medic",
			"AinvPknlMstpSlayWnonDnon_medic",
			"AinvPknlMstpSlayWrflDnon_medic",
			"AinvPknlMstpSlayWpstDnon_medic",
			"AinvPknlMstpSlayWrflDnon_medic",
			"AinvPknlMstpSlayWnonDnon_medic",
			"AinvPpneMstpSlayWnonDnon_medic",
			"AinvPpneMstpSlayWrflDnon_medic",
			"AinvPpneMstpSlayWpstDnon_medic",
			"AinvPpneMstpSlayWrflDnon_medic",
			"AinvPpneMstpSlayWnonDnon_medic"
		};
	};
	class Extremo_AbstractItem_Interaction_Using
	{
		scope=1;
		chance=100;
		successFunction="";
		successNotification="";
	};
	class Extremo_AbstractItem_Interaction_Constructing
	{
		scope=1;
	};
	class Extremo_AbstractItem: CA_Magazine
	{
		scope=1;
		descriptionShort="Dummy";
		displayName="Dummy";
		count=1;
		mass=1;
		picture="\Extremo_Assets\texture\item\Dummy.paa";
		model="\Extremo_Assets\model\Dummy.p3d";
		class Interactions
		{
		};
	};
	class Extremo_Item_BreachingCharge_Wood: Extremo_AbstractItem
	{
		scope=2;
		displayName="Breaching Charge (Wood)";
		descriptionShort="A basic breaching charge to destroy wood constructions.<br/><br/>It requires three breaching charges to destroy one construction object. Can only plant one at a time per construction object.";
		mass=20;
		model="\A3\Weapons_F\Explosives\c4_charge_small";
		picture="\A3\Weapons_F\Data\UI\gear_c4_charge_small_CA.paa";
	};
	class Extremo_Item_BreachingCharge_Metal: Extremo_AbstractItem
	{
		scope=2;
		displayName="Breaching Charge (Metal)";
		descriptionShort="Can be used to destroy reinforced wood constructions.<br/><br/>It requires three breaching charges to destroy one construction object. Can only plant one at a time per construction object.";
		mass=80;
		model="\A3\Weapons_F\Explosives\satchel_i";
		picture="\A3\Weapons_f\data\UI\gear_satchel_CA.paa";
	};
	class Extremo_Item_BreachingCharge_BigMomma: Extremo_AbstractItem
	{
		scope=2;
		displayName="Breaching Charge (Big Momma)";
		descriptionShort="An expensive breaching charge that is used to destroy concrete constructions.<br/><br/>It requires three breaching charges to destroy one construction object. Can only plant one at a time per construction object.";
		mass=250;
		model="\Extremo_Assets\model\Extremo_Item_BigMomma.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_BigMomma_ca.paa";
	};
	class Extremo_Item_Bandage: Extremo_AbstractItem
	{
		scope=2;
		displayName="Bandage";
		descriptionShort="A small bandage to stop bleeding wounds.<br/>Health: +5%/10s";
		mass=2;
		model="\A3\Structures_F_EPA\Items\Medical\Bandage_F.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Bandage.paa";
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Consuming_Healing
			{
				stopBleeding=1;
				effects[]=
				{
					{0,5,10}
				};
			};
		};
	};
	class Extremo_Item_BaseCameraKit: Extremo_AbstractItem
	{
		scope=2;
		displayName="Security Camera";
		descriptionShort="I see something you don't see!";
		mass=25;
		model="Extremo_Assets\model\Extremo_Construction_BaseCamera_world.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Camera.paa";
		class Interactions
		{
			class Constructing: Extremo_AbstractItem_Interaction_Constructing{};
		};
	};
	class Extremo_Item_BBQSandwich: Extremo_AbstractItem
	{
		scope=2;
		displayName="BBQ Sandwich (Raw)";
		descriptionShort="Some things shouldn't be canned.<br/>Hunger +40%/60s";
		model="\Extremo_Assets\model\Extremo_Item_BBQSandwich.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_BBQSandwich.paa";
		mass=5;
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating_Can
			{
				effects[]=
				{
					{2,40,60}
				};
			};
		};
	};
	class Extremo_Item_BBQSandwich_Cooked: Extremo_AbstractItem
	{
		scope=2;
		displayName="BBQ Sandwich (Cooked)";
		descriptionShort="Some things shouldn't be canned.<br/>Hunger +100%/30s";
		model="\Extremo_Assets\model\Extremo_Item_BBQSandwich_Cooked.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_BBQSandwich_Cooked.paa";
		mass=5;
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating_Can
			{
				effects[]=
				{
					{2,100,30}
				};
			};
		};
	};
	class Extremo_Item_BeefParts: Extremo_AbstractItem
	{
		scope=2;
		displayName="Beef Parts";
		descriptionShort="A vegetarians nightmare. <br/>Hunger: +30%/30s";
		model="\Extremo_Assets\model\Extremo_Item_BeefParts.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_BeefParts.paa";
		mass=15;
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,30,30}
				};
			};
		};
	};
	class Extremo_Item_Beer: Extremo_AbstractItem
	{
		scope=2;
		displayName="Hausmann Beer";
		descriptionShort="No expiration date, no problem! <br/>Thirst: +75%/30s<br/>Temperature: +0.5°C%/10s<br/>Alc. Vol.: 7‰";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Beer.paa";
		model="\Extremo_Assets\model\Extremo_Item_Beer.p3d";
		mass=10;
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Drinking
			{
				effects[]=
				{
					{3,75,30},
					{4,0.40000001,0},
					{5,0.5,10}
				};
			};
		};
	};
	class Extremo_Item_Whisky: Extremo_AbstractItem
	{
		scope=2;
		displayName="HappyFeet's Whisky";
		descriptionShort="No expiration date, no problem! <br/>Thirst: +75%/30s<br/>Temperature: +0.5°C%/10s<br/>Alc. Vol.: 7‰";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Beer.paa";
		model="\Extremo_Assets\model\Extremo_Item_Beer.p3d";
		mass=10;
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Drinking
			{
				effects[]=
				{
					{3,75,30},
					{4,0.40000001,0},
					{5,0.5,10}
				};
			};
		};
	};
	class Extremo_Item_BushKit_Green: Extremo_AbstractItem
	{
		scope=2;
		displayName="Bush Kit (Green)";
		descriptionShort="We want: A SHRUBBERY!";
		mass=50;
		class Interactions
		{
			class Using: Extremo_AbstractItem_Interaction_Using
			{
				successFunction="Extremo_fnc_object_bush_attachGreenBush";
				successNotification="TurnedIntoABushNotification";
			};
		};
	};
	class Extremo_Item_CamoTentKit: Extremo_AbstractItem
	{
		scope=2;
		displayName="Camo Tent Kit";
		descriptionShort="A packed tent.";
		model="\a3\structures_f\Civ\Camping\Sleeping_bag_folded_F.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_CamoTentKit.paa";
		mass=10;
		class Interactions
		{
			class Constructing: Extremo_AbstractItem_Interaction_Constructing{};
		};
	};
	class Extremo_Item_CampFireKit: Extremo_AbstractItem
	{
		scope=2;
		displayName="Camp Fire Kit";
		descriptionShort="Camping Fire";
		mass=10;
		model="\Extremo_Assets\model\Extremo_Construction_Crate.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Construction_CampFire.paa";
		class Interactions
		{
			class Constructing: Extremo_AbstractItem_Interaction_Constructing{};
		};
	};
	class Extremo_Item_CanOpener: Extremo_AbstractItem
	{
		scope=2;
		displayName="Can Opener";
		descriptionShort="Used to open cans.";
		model="\A3\Structures_F_EPA\Items\Tools\CanOpener_F.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_CanOpener.paa";
		mass=5;
	};
	class Extremo_Item_Can_Empty: Extremo_AbstractItem
	{
		scope=2;
		displayName="Can (Empty)";
		descriptionShort="An empty tin can.";
		model="\Extremo_Assets\model\Extremo_Item_Can_Empty.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Can_Empty.paa";
		mass=5;
	};
	class Extremo_Item_CarWheel: Extremo_AbstractItem
	{
		scope=2;
		displayName="Car Wheel";
		descriptionShort="A simple car wheel. Looks a bit like a tire.";
		model="\A3\Structures_F\Civ\Garbage\Tyre_F.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_CarWheel.paa";
		mass=100;
	};
	class Extremo_Item_CatFood: Extremo_AbstractItem
	{
		scope=2;
		displayName="Cat Food (Raw)";
		descriptionShort="Meow... <br/>Hunger: +40%/40s";
		model="\Extremo_Assets\model\Extremo_Item_Catfood.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Catfood.paa";
		mass=5;
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating_Can
			{
				effects[]=
				{
					{2,40,40}
				};
			};
		};
	};
	class Extremo_Item_CatFood_Cooked: Extremo_AbstractItem
	{
		scope=2;
		displayName="Cat Food (Cooked)";
		descriptionShort="Meow... <br/>Hunger: +100%/20s";
		model="\Extremo_Assets\model\Extremo_Item_Catfood_Cooked.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Catfood_Cooked.paa";
		mass=5;
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating_Can
			{
				effects[]=
				{
					{2,100,20}
				};
			};
		};
	};
	class Extremo_Item_Cement: Extremo_AbstractItem
	{
		scope=2;
		displayName="Bag of Cement";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Cement.paa";
		model="\Extremo_Assets\model\Extremo_Item_Cement.p3d";
		descriptionShort="Perfect for making shoes that fits every size!";
		mass=25;
	};
	class Extremo_Item_Cheathas: Extremo_AbstractItem
	{
		scope=2;
		displayName="Cheathas";
		descriptionShort="Perfect for a cozy TV evening with friends. If you have some. <br/>Hunger: +30%/30s";
		model="\Extremo_Assets\model\Extremo_Item_Cheathas.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Cheathas.paa";
		mass=15;
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,30,30}
				};
			};
		};
	};
	class Extremo_Item_ChocolateMilk: Extremo_AbstractItem
	{
		scope=2;
		displayName="Chocolate Milk";
		descriptionShort="Half chocolate, half questionable milk.<br/>Thirst: +35%/10s";
		picture="\Extremo_Assets\texture\item\Extremo_Item_ChocolateMilk_ca.paa";
		model="\Extremo_Assets\model\Extremo_Item_ChocolateMilk.p3d";
		mass=7;
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Drinking
			{
				effects[]=
				{
					{3,35,10}
				};
			};
		};
	};
	class Extremo_Item_ChristmasTinner: Extremo_AbstractItem
	{
		scope=2;
		displayName="Christmas Tinner (Raw)";
		descriptionShort="Festive!<br/>Hunger: +40%/60s";
		model="\Extremo_Assets\model\Extremo_Item_ChristmasTinner.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_ChristmasTinner.paa";
		mass=5;
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating_Can
			{
				effects[]=
				{
					{2,40,60}
				};
			};
		};
	};
	class Extremo_Item_ChristmasTinner_Cooked: Extremo_AbstractItem
	{
		scope=2;
		displayName="Christmas Tinner (Cooked)";
		descriptionShort="Festive!<br/>Hunger: +100%/30s";
		model="\Extremo_Assets\model\Extremo_Item_ChristmasTinner_Cooked.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_ChristmasTinner_Cooked.paa";
		mass=5;
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating_Can
			{
				effects[]=
				{
					{2,100,30}
				};
			};
		};
	};
	class Extremo_Item_CockONut: Extremo_AbstractItem
	{
		scope=2;
		displayName="Cock'O'Nut";
		descriptionShort="The real candy bar. <br/>Hunger: +20%/40s";
		model="\Extremo_Assets\model\Extremo_Item_CockONut.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_CockONut.paa";
		mass=5;
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,20,40}
				};
			};
		};
	};
	class Extremo_Item_Codelock: Extremo_AbstractItem
	{
		scope=2;
		displayName="Code Lock";
		descriptionShort="Used to lock doors or gates on bases.";
		model="\Extremo_Assets\model\Extremo_Item_Codelock.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Codelock.paa";
		mass=5;
	};
	class Extremo_Item_ConcreteDoorKit: Extremo_AbstractItem
	{
		scope=2;
		displayName="Concrete Door Kit";
		descriptionShort="Obviously an even better construction for knock-knock jokes.";
		mass=100;
		model="\Extremo_Assets\model\Extremo_Construction_Crate.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_ConcreteDoorKit.paa";
		class Interactions
		{
			class Constructing: Extremo_AbstractItem_Interaction_Constructing{};
		};
	};
	class Extremo_Item_ConcreteDoorwayKit: Extremo_AbstractItem
	{
		scope=2;
		displayName="Concrete Doorway Kit";
		descriptionShort="The perfect construction for knock-knock jokes.";
		mass=100;
		model="\Extremo_Assets\model\Extremo_Construction_Crate.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_ConcreteDoorwayKit.paa";
		class Interactions
		{
			class Constructing: Extremo_AbstractItem_Interaction_Constructing{};
		};
	};
	class Extremo_Item_ConcreteDrawBridgeKit: Extremo_AbstractItem
	{
		scope=2;
		displayName="Concrete DrawBridge Kit";
		descriptionShort="A 6x3m drawbridge made out of concrete and steel.";
		mass=100;
		model="\Extremo_Assets\model\Extremo_Construction_Crate.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_ConcreteDrawBridgeKit.paa";
		class Interactions
		{
			class Constructing: Extremo_AbstractItem_Interaction_Constructing{};
		};
	};
	class Extremo_Item_ConcreteFloorKit: Extremo_AbstractItem
	{
		scope=2;
		displayName="Concrete Floor Kit";
		descriptionShort="A 6x6m floor made out of concrete.";
		mass=100;
		model="\Extremo_Assets\model\Extremo_Construction_Crate.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_ConcreteFloorKit.paa";
		class Interactions
		{
			class Constructing: Extremo_AbstractItem_Interaction_Constructing{};
		};
	};
	class Extremo_Item_ConcreteFloorPortKit: Extremo_AbstractItem
	{
		scope=2;
		displayName="Concrete Floor Port Kit";
		descriptionShort="A 6x6m floor made out of concrete. This is a special floor with a hole in it. Place stairs inside to get to the next floor or use it was a secret escape on the bottom of your base.";
		mass=100;
		model="\Extremo_Assets\model\Extremo_Construction_Crate.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_ConcreteFloorPortKit.paa";
		class Interactions
		{
			class Constructing: Extremo_AbstractItem_Interaction_Constructing{};
		};
	};
	class Extremo_Item_ConcreteFloorPortSmallKit: Extremo_AbstractItem
	{
		scope=2;
		displayName="Concrete Floor Port Kit (Small)";
		descriptionShort="A 6x6m floor made out of concrete. This is a special floor with a hole in it. Expand the functionality of this floor with a metal ladder!";
		mass=100;
		model="\Extremo_Assets\model\Extremo_Construction_Crate.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_ConcreteFloorPortSmallKit.paa";
		class Interactions
		{
			class Constructing: Extremo_AbstractItem_Interaction_Constructing{};
		};
	};
	class Extremo_Item_ConcreteGateKit: Extremo_AbstractItem
	{
		scope=2;
		displayName="Concrete Gate Kit";
		descriptionShort="Similar to a door, but is used for vehicles.";
		mass=100;
		model="\Extremo_Assets\model\Extremo_Construction_Crate.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_ConcreteGate.paa";
		class Interactions
		{
			class Constructing: Extremo_AbstractItem_Interaction_Constructing{};
		};
	};
	class Extremo_Item_ConcreteLadderHatchKit: Extremo_AbstractItem
	{
		scope=2;
		displayName="Concrete Ladder Hatch";
		descriptionShort="A 6x6m floor made out of concrete. But this floor is different, it has a metal ladder hatch in the center!";
		mass=100;
		model="\Extremo_Assets\model\Extremo_Construction_Crate.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_ConcreteLadderHatchKit.paa";
		class Interactions
		{
			class Constructing: Extremo_AbstractItem_Interaction_Constructing{};
		};
	};
	class Extremo_Item_ConcreteStairsKit: Extremo_AbstractItem
	{
		scope=2;
		displayName="Concrete Stairs Kit";
		descriptionShort="Since we do not have an elevator yet...";
		mass=100;
		model="\Extremo_Assets\model\Extremo_Construction_Crate.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_ConcreteStairsKit.paa";
		class Interactions
		{
			class Constructing: Extremo_AbstractItem_Interaction_Constructing{};
		};
	};
	class Extremo_Item_ConcreteSupportKit: Extremo_AbstractItem
	{
		scope=2;
		displayName="Concrete Support Kit";
		descriptionShort="An effective way to build on not-so-flat terrain.";
		mass=100;
		model="\Extremo_Assets\model\Extremo_Construction_Crate.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_ConcreteSupportKit.paa";
		class Interactions
		{
			class Constructing: Extremo_AbstractItem_Interaction_Constructing{};
		};
	};
	class Extremo_Item_ConcreteWallKit: Extremo_AbstractItem
	{
		scope=2;
		displayName="Concrete Wall Kit";
		descriptionShort="A 6x3m wall made out of concrete and steel.";
		mass=100;
		model="\Extremo_Assets\model\Extremo_Construction_Crate.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_ConcreteWallKit.paa";
		class Interactions
		{
			class Constructing: Extremo_AbstractItem_Interaction_Constructing{};
		};
	};
	class Extremo_Item_ConcreteWindowKit: Extremo_AbstractItem
	{
		scope=2;
		displayName="Concrete Window Kit";
		descriptionShort="Offers a good position to shoot out of your base. Does not contain glass.";
		mass=100;
		model="\Extremo_Assets\model\Extremo_Construction_Crate.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_ConcreteWindowKit.paa";
		class Interactions
		{
			class Constructing: Extremo_AbstractItem_Interaction_Constructing{};
		};
	};
	class Extremo_Item_CookingPot: Extremo_AbstractItem
	{
		scope=2;
		displayName="Cooking Pot";
		descriptionShort="If you know how to cook, this pot will surely become handy sometime.";
		model="\Extremo_Assets\model\Extremo_Item_Cookingpot.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Cookingpot.paa";
		mass=20;
	};
	class Extremo_Item_CordlessScrewdriver: Extremo_AbstractItem
	{
		scope=2;
		displayName="Cordless Screwdriver";
		descriptionShort="Let's drill some holes... :)";
		model="\A3\Structures_F\Items\Tools\DrillAku_F.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_CordlessScrewdriver.paa";
		mass=30;
	};
	class Extremo_Item_Defibrillator: Extremo_AbstractItem
	{
		scope=2;
		displayName="Defibrillator";
		descriptionShort="";
		model="\A3\Structures_F_EPA\Items\Medical\Defibrillator_F.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Defibrillator.paa";
		mass=30;
	};
	class Extremo_Item_DogFood: Extremo_AbstractItem
	{
		scope=2;
		displayName="Dog Food (Raw)";
		descriptionShort="Woof, Woof, Bark! <br/>Hunger: +30%/30s";
		model="\Extremo_Assets\model\Extremo_Item_DogFood.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_DogFood.paa";
		mass=5;
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating_Can
			{
				effects[]=
				{
					{2,30,30}
				};
			};
		};
	};
	class Extremo_Item_DogFood_Cooked: Extremo_AbstractItem
	{
		scope=2;
		displayName="Dog Food (Cooked)";
		descriptionShort="Good boy! <br/>Hunger: +100%/20s";
		model="\Extremo_Assets\model\Extremo_Item_DogFood_Open.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_DogFood_Open.paa";
		mass=5;
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating_Can
			{
				effects[]=
				{
					{2,100,20}
				};
			};
		};
	};
	class Extremo_Item_DsNuts: Extremo_AbstractItem
	{
		scope=2;
		displayName="D's Nuts";
		descriptionShort="A tiny can with huge nuts. <br/>Hunger: +30%/60s";
		model="\Extremo_Assets\model\Extremo_Item_DsNuts.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_DsNuts.paa";
		mass=5;
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,30,60}
				};
			};
		};
	};
	class Extremo_Item_DuctTape: Extremo_AbstractItem
	{
		scope=2;
		displayName="Duct Tape";
		descriptionShort="Can fix almost anything. If it moves and it should not, use Duct Tape.";
		model="\a3\structures_f_epa\Items\Tools\DuctTape_F.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_DuctTape.paa";
		mass=5;
	};
	class Extremo_Item_EMRE: Extremo_AbstractItem
	{
		scope=2;
		displayName="EMRE";
		descriptionShort="Extra delicious, well tinned remains. <br/>Hunger: +75%/60s";
		model="\Extremo_Assets\model\Extremo_Item_EMRE.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_EMRE.paa";
		mass=20;
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,75,60}
				};
			};
		};
	};
	class Extremo_Item_EnergyDrink: Extremo_AbstractItem
	{
		scope=2;
		displayName="Energy Drink";
		descriptionShort="Gotta go fast!<br/>Thirst: +75%/20s";
		picture="\Extremo_Assets\texture\item\Extremo_Item_EnergyDrink.paa";
		model="\Extremo_Assets\model\Extremo_Item_EnergyDrink.p3d";
		mass=7;
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Drinking
			{
				effects[]=
				{
					{3,75,20}
				};
			};
		};
	};
	class Extremo_Item_ExtensionCord: Extremo_AbstractItem
	{
		scope=2;
		displayName="Extension Cord";
		descriptionShort="Used to connect electronic devices to a power supply.";
		model="\a3\structures_f\Items\Electronics\ExtensionCord_F.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_ExtensionCord.paa";
		mass=5;
	};
	class Extremo_Item_FireExtinguisher: Extremo_AbstractItem
	{
		scope=2;
		displayName="Fire Extinguisher";
		descriptionShort="Used to put out fires.";
		model="\A3\Structures_F_EPA\Items\Tools\FireExtinguisher_F.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_FireExtinguisher.paa";
		mass=30;
	};
	class Extremo_Item_Flag: Extremo_AbstractItem
	{
		scope=2;
		displayName="Territory Flag Kit";
		descriptionShort="A flag in cardboard box and your cats favorite toy. Can be used to setup a base zone flag.";
		model="\Extremo_Assets\model\Extremo_Item_Flagbox.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Flagbox.paa";
		mass=50;
		class Interactions
		{
			class Constructing: Extremo_AbstractItem_Interaction_Constructing{};
		};
	};
	class Extremo_Item_FlagStolen1: Extremo_AbstractItem
	{
		scope=2;
		displayName="Stolen Flag (Level 1)";
		descriptionShort="Can be sold at the trader.";
		model="\Extremo_Assets\model\Extremo_Item_Flagbox.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Flagbox.paa";
		mass=50;
	};
	class Extremo_Item_FlagStolen10: Extremo_AbstractItem
	{
		scope=2;
		displayName="Stolen Flag (Level 10)";
		descriptionShort="Can be sold at the trader.";
		model="\Extremo_Assets\model\Extremo_Item_Flagbox.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Flagbox.paa";
		mass=50;
	};
	class Extremo_Item_FlagStolen2: Extremo_AbstractItem
	{
		scope=2;
		displayName="Stolen Flag (Level 2)";
		descriptionShort="Can be sold at the trader.";
		model="\Extremo_Assets\model\Extremo_Item_Flagbox.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Flagbox.paa";
		mass=50;
	};
	class Extremo_Item_FlagStolen3: Extremo_AbstractItem
	{
		scope=2;
		displayName="Stolen Flag (Level 3)";
		descriptionShort="Can be sold at the trader.";
		model="\Extremo_Assets\model\Extremo_Item_Flagbox.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Flagbox.paa";
		mass=50;
	};
	class Extremo_Item_FlagStolen4: Extremo_AbstractItem
	{
		scope=2;
		displayName="Stolen Flag (Level 4)";
		descriptionShort="Can be sold at the trader.";
		model="\Extremo_Assets\model\Extremo_Item_Flagbox.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Flagbox.paa";
		mass=50;
	};
	class Extremo_Item_FlagStolen5: Extremo_AbstractItem
	{
		scope=2;
		displayName="Stolen Flag (Level 5)";
		descriptionShort="Can be sold at the trader.";
		model="\Extremo_Assets\model\Extremo_Item_Flagbox.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Flagbox.paa";
		mass=50;
	};
	class Extremo_Item_FlagStolen6: Extremo_AbstractItem
	{
		scope=2;
		displayName="Stolen Flag (Level 6)";
		descriptionShort="Can be sold at the trader.";
		model="\Extremo_Assets\model\Extremo_Item_Flagbox.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Flagbox.paa";
		mass=50;
	};
	class Extremo_Item_FlagStolen7: Extremo_AbstractItem
	{
		scope=2;
		displayName="Stolen Flag (Level 7)";
		descriptionShort="Can be sold at the trader.";
		model="\Extremo_Assets\model\Extremo_Item_Flagbox.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Flagbox.paa";
		mass=50;
	};
	class Extremo_Item_FlagStolen8: Extremo_AbstractItem
	{
		scope=2;
		displayName="Stolen Flag (Level 8)";
		descriptionShort="Can be sold at the trader.";
		model="\Extremo_Assets\model\Extremo_Item_Flagbox.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Flagbox.paa";
		mass=50;
	};
	class Extremo_Item_FlagStolen9: Extremo_AbstractItem
	{
		scope=2;
		displayName="Stolen Flag (Level 9)";
		descriptionShort="Can be sold at the trader.";
		model="\Extremo_Assets\model\Extremo_Item_Flagbox.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Flagbox.paa";
		mass=50;
	};
	class Extremo_Item_FloodLightKit: Extremo_AbstractItem
	{
		scope=2;
		displayName="Flood Light Kit";
		descriptionShort="Flood Light";
		mass=10;
		model="\Extremo_Assets\model\Extremo_Construction_Crate.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Construction_FloodLight.paa";
		class Interactions
		{
			class Constructing: Extremo_AbstractItem_Interaction_Constructing{};
		};
	};
	class Extremo_Item_Foolbox: Extremo_AbstractItem
	{
		scope=2;
		displayName="Foolbox";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Toolbox.paa";
		model="\Extremo_Assets\model\Extremo_Item_Toolbox.p3d";
		descriptionShort="The ultimate tool box for the overly-manly-man.";
		mass=50;
	};
	class Extremo_Item_FortificationUpgrade: Extremo_AbstractItem
	{
		scope=2;
		displayName="Fortification Upgrade Kit";
		picture="\Extremo_Assets\texture\item\Extremo_Item_MetalBoard.paa";
		model="\Extremo_Assets\model\Extremo_Construction_Crate.p3d";
		descriptionShort="Used to upgrade wood constructions to fortified wood constructions";
		mass=100;
	};
	class Extremo_Item_FuelBarrelEmpty: Extremo_AbstractItem
	{
		scope=2;
		displayName="Fuel Barrel (Empty)";
		descriptionShort="";
		model="\a3\structures_f\Items\Vessels\metalbarrel_f.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_FuelBarrel.paa";
		mass=150;
	};
	class Extremo_Item_FuelBarrelFull: Extremo_AbstractItem
	{
		scope=2;
		displayName="Fuel Barrel (Full)";
		descriptionShort="";
		model="\a3\structures_f\Items\Vessels\metalbarrel_f.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_FuelBarrel.paa";
		mass=150;
		count=300;
	};
	class Extremo_Item_FuelCanisterEmpty: Extremo_AbstractItem
	{
		scope=2;
		displayName="Fuel Canister (Empty)";
		descriptionShort="";
		model="\a3\structures_f\Items\Vessels\CanisterFuel_F.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_FuelCanister.paa";
		mass=2;
	};
	class Extremo_Item_FuelCanisterFull: Extremo_AbstractItem
	{
		scope=2;
		displayName="Fuel Canister (Full)";
		descriptionShort="";
		model="\a3\structures_f\Items\Vessels\CanisterFuel_F.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_FuelCanister.paa";
		mass=22;
		count=20;
	};
	class Extremo_Item_GloriousKnakworst: Extremo_AbstractItem
	{
		scope=2;
		displayName="Glorious Knakworst (Raw)";
		descriptionShort="As Dutch as it gets. <br/>Hunger +60%/30s";
		model="\Extremo_Assets\model\Extremo_Item_Knakworst.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Knakworst.paa";
		mass=5;
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating_Can
			{
				effects[]=
				{
					{2,60,30}
				};
			};
		};
	};
	class Extremo_Item_GloriousKnakworst_Cooked: Extremo_AbstractItem
	{
		scope=2;
		displayName="Glorious Knakworst (Cooked)";
		descriptionShort="As Dutch as it gets. <br/>Hunger +100%/20s";
		model="\Extremo_Assets\model\Extremo_Item_Knakworst_Cooked.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Knakworst_Cooked.paa";
		mass=5;
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating_Can
			{
				effects[]=
				{
					{2,100,20}
				};
			};
		};
	};
	class Extremo_Item_Grinder: Extremo_AbstractItem
	{
		scope=2;
		displayName="Grinder";
		descriptionShort="";
		model="\A3\Structures_F\Items\Tools\Grinder_F.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Grinder.paa";
		mass=30;
	};
	class Extremo_Item_Hammer: Extremo_AbstractItem
	{
		scope=2;
		displayName="Hammer";
		descriptionShort="STOP... Hammer time!";
		model="\A3\Structures_F\Items\Tools\Hammer_F.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Hammer.paa";
		mass=10;
	};
	class Extremo_Item_Handsaw: Extremo_AbstractItem
	{
		scope=2;
		displayName="Handsaw";
		descriptionShort="";
		model="\A3\Structures_F\Items\Tools\Saw_F.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Handsaw.paa";
		mass=20;
	};
	class Extremo_Item_HBarrier5Kit: Extremo_AbstractItem
	{
		scope=2;
		displayName="H-barrier (5 Blocks)";
		picture="\Extremo_Assets\texture\item\Extremo_Item_HBarrier5Kit.paa";
		model="\Extremo_Assets\model\Extremo_Construction_Crate.p3d";
		descriptionShort="Can be used to craft a 5-block H-barrier.";
		mass=150;
		class Interactions
		{
			class Constructing: Extremo_AbstractItem_Interaction_Constructing{};
		};
	};
	class Extremo_Item_Heatpack: Extremo_AbstractItem
	{
		scope=2;
		displayName="Thermal Buddy";
		descriptionShort="Can be used to warm you up a bit. You just need to rub it.<br/>Temperature: +1°C/10s";
		mass=5;
		model="\A3\Structures_F_EPA\Items\Medical\HeatPack_F.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Heatpack.paa";
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Consuming_Healing
			{
				effects[]=
				{
					{5,1,10}
				};
			};
		};
	};
	class Extremo_Item_InstaDoc: Extremo_AbstractItem
	{
		scope=2;
		displayName="InstaDoc";
		descriptionShort="The universal auto-injector to regenerate health and stop bleeding wounds.<br/>Health: +100%/30s";
		mass=15;
		model="\Extremo_Assets\model\Extremo_Item_Instadoc.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Instadoc.paa";
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Consuming_Healing
			{
				stopBleeding=1;
				effects[]=
				{
					{0,100,30}
				};
			};
		};
	};
	class Extremo_Item_InstantCoffee: Extremo_AbstractItem
	{
		scope=2;
		displayName="Instant Coffee Beanz";
		descriptionShort="100% Beanz!<br/>Hunger +5%/10s";
		model="\Extremo_Assets\model\Extremo_Item_InstantCoffee.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_InstantCoffee.paa";
		mass=10;
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,5,10}
				};
			};
		};
	};
	class Extremo_Item_JunkMetal: Extremo_AbstractItem
	{
		scope=2;
		displayName="Junk Metal";
		descriptionShort="This must have been something useful before. Rest in pieces.";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Junkmetal.paa";
		model="\Extremo_Assets\model\Extremo_Item_Junkmetal.p3d";
		mass=25;
	};
	class Extremo_Item_Knife: Extremo_AbstractItem
	{
		scope=2;
		displayName="Knife";
		descriptionShort="Combine this with bubble gum and do some MacGyver-like things with it.";
		model="\Extremo_Assets\model\Extremo_Item_Knife.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Knife.paa";
		mass=10;
	};
	class Extremo_Item_Laptop: Extremo_AbstractItem
	{
		scope=2;
		displayName="Base Laptop";
		descriptionShort="The best of best!";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Laptop.paa";
		model="\Extremo_Assets\model\Extremo_Construction_Laptop.p3d";
		mass=30;
		class Interactions
		{
			class Constructing: Extremo_AbstractItem_Interaction_Constructing{};
		};
	};
	class Extremo_Item_Leaves: Extremo_AbstractItem
	{
		scope=2;
		displayName="Leaves";
		descriptionShort="A very useful stack of leaves.";
		model="\Extremo_Assets\model\Extremo_Item_Leaves.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Leaves.paa";
		mass=5;
	};
	class Extremo_Item_LightBulb: Extremo_AbstractItem
	{
		scope=2;
		displayName="Light Bulb";
		descriptionShort="How many bambis does it take it replace a light bulb? None. They do not know what a light bulb is. Haha. Ha. Okay, that was lame.";
		model="\Extremo_Assets\model\Extremo_Item_LightBulb.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_LightBulb.paa";
		mass=5;
	};
	class Extremo_Item_MacasCheese: Extremo_AbstractItem
	{
		scope=2;
		displayName="Maca's Cheese (Raw)";
		descriptionShort="#BlameMaca! <br/>Hunger: +40%/60s";
		model="\Extremo_Assets\model\Extremo_Item_MacasCheese.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_MacasCheese.paa";
		mass=5;
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating_Can
			{
				effects[]=
				{
					{2,40,60}
				};
			};
		};
	};
	class Extremo_Item_MacasCheese_Cooked: Extremo_AbstractItem
	{
		scope=2;
		displayName="Maca's Cheese (Cooked)";
		descriptionShort="Extra cheesy <br/>Hunger: +100%/20s";
		model="\Extremo_Assets\model\Extremo_Item_MacasCheese_Open.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_MacasCheese_Open.paa";
		mass=5;
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating_Can
			{
				effects[]=
				{
					{2,100,20}
				};
			};
		};
	};
	class Extremo_Item_Magazine01: Extremo_AbstractItem
	{
		scope=2;
		displayName="Better Prisoners #01";
		descriptionShort="First edition of the Better Prisoners magazine.";
		model="\Extremo_Assets\model\Extremo_Item_Magazine01.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Magazine01.paa";
		mass=5;
	};
	class Extremo_Item_Magazine02: Extremo_AbstractItem
	{
		scope=2;
		displayName="Better Prisoners #02";
		descriptionShort="Second edition of the Better Prisoners magazine.";
		model="\Extremo_Assets\model\Extremo_Item_Magazine02.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Magazine02.paa";
		mass=5;
	};
	class Extremo_Item_Magazine03: Extremo_AbstractItem
	{
		scope=2;
		displayName="Better Prisoners #03";
		descriptionShort="Third edition of the Better Prisoners magazine.";
		model="\Extremo_Assets\model\Extremo_Item_Magazine03.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Magazine03.paa";
		mass=5;
	};
	class Extremo_Item_Magazine04: Extremo_AbstractItem
	{
		scope=2;
		displayName="Better Prisoners #04";
		descriptionShort="Fourth edition of the Better Prisoners magazine.";
		model="\Extremo_Assets\model\Extremo_Item_Magazine04.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Magazine04.paa";
		mass=5;
	};
	class Extremo_Item_Matches: Extremo_AbstractItem
	{
		scope=2;
		displayName="Box of Matches";
		descriptionShort="Kill it with fire!";
		model="\Extremo_Assets\model\Extremo_Item_Matchbox.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Matchbox.paa";
		mass=1;
		count=10;
	};
	class Extremo_Item_MetalBoard: Extremo_AbstractItem
	{
		scope=2;
		displayName="Metal Board";
		descriptionShort="Can be used to fortify wood constructions.";
		mass=50;
		model="\Extremo_Assets\model\Extremo_Item_MetalBoard.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_MetalBoard.paa";
	};
	class Extremo_Item_MetalHedgehogKit: Extremo_AbstractItem
	{
		scope=2;
		displayName="Metal Hedgehog Kit";
		descriptionShort="Can be used to construct a metal hedgehog.";
		mass=50;
		model="\Extremo_Assets\model\Extremo_Construction_Crate.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Construction_Hedgehog_Metal.paa";
		class Interactions
		{
			class Constructing: Extremo_AbstractItem_Interaction_Constructing{};
		};
	};
	class Extremo_Item_MetalLadderDoubleKit: Extremo_AbstractItem
	{
		scope=2;
		displayName="Metal Ladder Kit (Double Tall)";
		descriptionShort="The metal ladder's bigger brother";
		mass=130;
		model="\Extremo_Assets\model\Extremo_Construction_Crate.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_MetalLadderDoubleKit.paa";
		class Interactions
		{
			class Constructing: Extremo_AbstractItem_Interaction_Constructing{};
		};
	};
	class Extremo_Item_MetalLadderKit: Extremo_AbstractItem
	{
		scope=2;
		displayName="Metal Ladder Kit";
		descriptionShort="Now with more rust!";
		mass=100;
		model="\Extremo_Assets\model\Extremo_Construction_Crate.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_MetalLadderKit.paa";
		class Interactions
		{
			class Constructing: Extremo_AbstractItem_Interaction_Constructing{};
		};
	};
	class Extremo_Item_MetalPole: Extremo_AbstractItem
	{
		scope=2;
		displayName="Metal Pole";
		descriptionShort="Time for a pole dance!";
		mass=20;
		model="\Extremo_Assets\model\Extremo_Item_MetalPole.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_MetalPole.paa";
	};
	class Extremo_Item_MetalScrews: Extremo_AbstractItem
	{
		scope=2;
		displayName="Box of Screws";
		picture="\Extremo_Assets\texture\item\Extremo_Item_MetalScrews.paa";
		model="\Extremo_Assets\model\Extremo_Item_MetalScrews.p3d";
		descriptionShort="Not only do I have a screw loose. I can't find the screw driver.";
		mass=10;
	};
	class Extremo_Item_MetalWire: Extremo_AbstractItem
	{
		scope=2;
		displayName="Metal Wire";
		descriptionShort="In case you do not know what a metal wire is: It is a wire made out of metal.";
		model="\A3\Structures_F_EPA\Items\Tools\MetalWire_F.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_MetalWire.paa";
		mass=5;
	};
	class Extremo_Item_MobilePhone: Extremo_AbstractItem
	{
		scope=2;
		displayName="Mobile Phone";
		descriptionShort="A massive, ancient mobile phone. Magically capable of 8G network.";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Phone_ca.paa";
		model="\Extremo_Assets\model\Extremo_Item_Phone.p3d";
		mass=10;
	};
	class Extremo_Item_Moobar: Extremo_AbstractItem
	{
		scope=2;
		displayName="Moobar";
		descriptionShort="Some yummi milky chocolate! <br/>Hunger: +10%/30s";
		model="\Extremo_Assets\model\Extremo_Item_Moobar.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Moobar.paa";
		mass=5;
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,10,30}
				};
			};
		};
	};
	class Extremo_Item_MountainDupe: Extremo_AbstractItem
	{
		scope=2;
		displayName="Mountain Dupe";
		descriptionShort="Original Bavarian Soft Drink<br/>Thirst: +50%/20s";
		picture="\Extremo_Assets\texture\item\Extremo_Item_MountainDupe.paa";
		model="\Extremo_Assets\model\Extremo_Item_MountainDupe.p3d";
		mass=5;
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Drinking
			{
				effects[]=
				{
					{3,50,20}
				};
			};
		};
	};
	class Extremo_Item_Noodles: Extremo_AbstractItem
	{
		scope=2;
		displayName="Chemical Noodles";
		descriptionShort="BIO is yesterday's quality. <br/>Hunger: +25%/50s";
		model="\Extremo_Assets\model\Extremo_Item_Noodles.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Noodles.paa";
		mass=5;
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,25,50}
				};
			};
		};
	};
	class Extremo_Item_OilCanister: Extremo_AbstractItem
	{
		scope=2;
		displayName="Oil Canister";
		descriptionShort="";
		model="\A3\Structures_F\Items\Vessels\CanisterOil_F.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_OilCanister.paa";
		mass=30;
	};
	class Extremo_Item_OldChestKit: Extremo_AbstractItem
	{
		scope=2;
		displayName="Old Chest Kit";
		descriptionShort="Old storage for a new world";
		mass=150;
		model="\Extremo_Assets\model\Extremo_Construction_Crate.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_OldChestKit.paa";
		class Interactions
		{
			class Constructing: Extremo_AbstractItem_Interaction_Constructing{};
		};
	};
	class Extremo_Item_PlasticBottleCoffee: Extremo_AbstractItem
	{
		scope=2;
		displayName="Plastic Bottle (Coffee)";
		descriptionShort="No milk, no sugar. Just pure darkness.<br/>Thirst: +100%/60s<br/>Hunger: +10%/5s<br/>Temperature: +0.5°C%/10s";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Waterbottle_Coffee.paa";
		model="\Extremo_Assets\model\Extremo_Item_Waterbottle_Coffee.p3d";
		mass=5;
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Drinking
			{
				returnedItem="Extremo_Item_PlasticBottleEmpty";
				effects[]=
				{
					{3,100,60},
					{2,10,5},
					{5,0.5,10}
				};
			};
		};
	};
	class Extremo_Item_PlasticBottleDirtyWater: Extremo_AbstractItem
	{
		scope=2;
		displayName="Plastic Bottle (Dirty Water)";
		descriptionShort="Contains a lot of bacteria. Drink at your own risk.<br/>Thirst: +10%/20s<br/>Health: -10%/5s";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Waterbottle_Dirty.paa";
		model="\Extremo_Assets\model\Extremo_Item_Waterbottle_Dirty.p3d";
		mass=5;
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Drinking
			{
				returnedItem="Extremo_Item_PlasticBottleEmpty";
				effects[]=
				{
					{3,10,20},
					{0,-10,5}
				};
			};
		};
	};
	class Extremo_Item_PlasticBottleEmpty: Extremo_AbstractItem
	{
		scope=2;
		displayName="Plastic Bottle (Empty)";
		descriptionShort="Fill it with salt water at the ocean or rain water at local water tanks. Or collect the deposit at a trader.";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Waterbottle_Empty.paa";
		model="\Extremo_Assets\model\Extremo_Item_Waterbottle_Empty.p3d";
		mass=5;
	};
	class Extremo_Item_PlasticBottleFreshWater: Extremo_AbstractItem
	{
		scope=2;
		displayName="Plastic Bottle (Fresh Water)";
		descriptionShort="Enjoy the refreshing taste of nothing.<br/>Thirst: +80%/15s";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Waterbottle_Clean.paa";
		model="\Extremo_Assets\model\Extremo_Item_Waterbottle_Clean.p3d";
		mass=5;
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Drinking
			{
				returnedItem="Extremo_Item_PlasticBottleEmpty";
				effects[]=
				{
					{3,80,15}
				};
			};
		};
	};
	class Extremo_Item_PlasticBottleSaltWater: Extremo_AbstractItem
	{
		scope=2;
		displayName="Plastic Bottle (Salt Water)";
		descriptionShort="Drink this fishy soup to commit suicide slowly.<br/>Thirst: -20%/10s<br/>Health: -30%/15s";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Waterbottle_Salty.paa";
		model="\Extremo_Assets\model\Extremo_Item_Waterbottle_Salty.p3d";
		mass=5;
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Drinking
			{
				returnedItem="Extremo_Item_PlasticBottleEmpty";
				effects[]=
				{
					{3,-20,10},
					{0,-30,15}
				};
			};
		};
	};
	class Extremo_Item_Pliers: Extremo_AbstractItem
	{
		scope=2;
		displayName="Pliers";
		descriptionShort="";
		model="\A3\Structures_F\Items\Tools\Pliers_F.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Pliers.paa";
		mass=10;
	};
	class Extremo_Item_PortableGeneratorKit: Extremo_AbstractItem
	{
		scope=2;
		displayName="Portable Generator Kit";
		descriptionShort="Can be used to switch your flood lights on and off.";
		mass=10;
		model="\Extremo_Assets\model\Extremo_Construction_Crate.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Construction_PortableGenerator.paa";
		class Interactions
		{
			class Constructing: Extremo_AbstractItem_Interaction_Constructing{};
		};
	};
	class Extremo_Item_PowerDrink: Extremo_AbstractItem
	{
		scope=2;
		displayName="Power Drink";
		descriptionShort="Recharge in seconds!<br/>Thirst: +95%/10s";
		picture="\Extremo_Assets\texture\item\Extremo_Item_PowerDrink.paa";
		model="\Extremo_Assets\model\Extremo_Item_PowerDrink.p3d";
		mass=15;
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Drinking
			{
				effects[]=
				{
					{3,95,10}
				};
			};
		};
	};
	class Extremo_Item_Raisins: Extremo_AbstractItem
	{
		scope=2;
		displayName="Raisins";
		descriptionShort="There is a time in life where you don't regret to eat this. <br/>Hunger: +15%/30s";
		model="\Extremo_Assets\model\Extremo_Item_Raisins.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Raisins.paa";
		mass=5;
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,15,30}
				};
			};
		};
	};
	class Extremo_Item_RazorWireKit: Extremo_AbstractItem
	{
		scope=2;
		displayName="Razor Wire Kit";
		picture="\Extremo_Assets\texture\item\Extremo_Item_RazorWireKit.paa";
		model="\Extremo_Assets\model\Extremo_Construction_Crate.p3d";
		descriptionShort="Good to stop infantry, but can be destroyed by driving into it. Might rip the wheels, though.";
		mass=50;
		class Interactions
		{
			class Constructing: Extremo_AbstractItem_Interaction_Constructing{};
		};
	};
	class Extremo_Item_RepairKitConcrete: Extremo_AbstractItem
	{
		scope=2;
		displayName="Concrete Repair Kit";
		model="\Extremo_Assets\model\Extremo_Construction_Crate.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Construction_Crate.paa";
		descriptionShort="Used to repair concrete constructions.";
		mass=100;
	};
	class Extremo_Item_RepairKitMetal: Extremo_AbstractItem
	{
		scope=2;
		displayName="Metal Repair Kit";
		model="\Extremo_Assets\model\Extremo_Construction_Crate.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Construction_Crate.paa";
		descriptionShort="Used to repair metal constructions.";
		mass=75;
	};
	class Extremo_Item_RepairKitWood: Extremo_AbstractItem
	{
		scope=2;
		displayName="Wood Repair Kit";
		model="\Extremo_Assets\model\Extremo_Construction_Crate.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Construction_Crate.paa";
		descriptionShort="Used to repair wood constructions.";
		mass=50;
	};
	class Extremo_Item_Rope: Extremo_AbstractItem
	{
		scope=2;
		displayName="Rope";
		descriptionShort="Time for some rope skipping!";
		mass=10;
		model="\Extremo_Assets\model\Extremo_Item_Rope.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Rope.paa";
	};
	class Extremo_Item_RubberDuck: Extremo_AbstractItem
	{
		scope=2;
		displayName="Linus' Rubber Duck";
		descriptionShort="A rubber duck";
		mass=5;
		model="\Extremo_Assets\model\Extremo_Item_RubberDuck.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_RubberDuck.paa";
	};
	class Extremo_Item_SafeKit: Extremo_AbstractItem
	{
		scope=2;
		displayName="Safe Kit";
		descriptionShort="Storage for the elite.";
		mass=200;
		model="\Extremo_Assets\model\Extremo_Container_Safe_Groundmodel.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Safe.paa";
		class Interactions
		{
			class Constructing: Extremo_AbstractItem_Interaction_Constructing{};
		};
	};
	class Extremo_Item_SafeSmallKit: Extremo_AbstractItem
	{
		scope=2;
		displayName="Safe Small Kit";
		descriptionShort="Storage for the semi-elite.";
		mass=125;
		model="\Extremo_Assets\model\Extremo_Container_Safe_Small_Groundmodel.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_SafeSmallKit.paa";
		class Interactions
		{
			class Constructing: Extremo_AbstractItem_Interaction_Constructing{};
		};
	};
	class Extremo_Item_Sand: Extremo_AbstractItem
	{
		scope=2;
		displayName="Bag of Sand";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Sand.paa";
		model="\Extremo_Assets\model\Extremo_Item_Sand.p3d";
		descriptionShort="A portable do-it-yourself sand castle";
		mass=25;
	};
	class Extremo_Item_SandBagsKit_Corner: Extremo_AbstractItem
	{
		scope=2;
		displayName="Sandbags Kit (Corner)";
		picture="\Extremo_Assets\texture\item\Extremo_Item_SandBagsKit_Corner.paa";
		model="\Extremo_Assets\model\Extremo_Construction_Crate.p3d";
		descriptionShort="Can be used to craft a corner sandbag fence.";
		mass=50;
		class Interactions
		{
			class Constructing: Extremo_AbstractItem_Interaction_Constructing{};
		};
	};
	class Extremo_Item_SandBagsKit_Long: Extremo_AbstractItem
	{
		scope=2;
		displayName="Sandbags Kit (Long)";
		picture="\Extremo_Assets\texture\item\Extremo_Item_SandBagsKit_Long.paa";
		model="\Extremo_Assets\model\Extremo_Construction_Crate.p3d";
		descriptionShort="Can be used to craft a long sandbag fence.";
		mass=100;
		class Interactions
		{
			class Constructing: Extremo_AbstractItem_Interaction_Constructing{};
		};
	};
	class Extremo_Item_SausageGravy: Extremo_AbstractItem
	{
		scope=2;
		displayName="Sausage Gravy (Raw)";
		descriptionShort="Looks like sea men <br/>Hunger +50%/25s";
		model="\Extremo_Assets\model\Extremo_Item_SausageGravy.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_SausageGravy.paa";
		mass=5;
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating_Can
			{
				effects[]=
				{
					{2,50,25}
				};
			};
		};
	};
	class Extremo_Item_SausageGravy_Cooked: Extremo_AbstractItem
	{
		scope=2;
		displayName="Sausage Gravy (Cooked)";
		descriptionShort="Looks like sea men <br/>Hunger +100%/20s";
		model="\Extremo_Assets\model\Extremo_Item_SausageGravy_Cooked.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_SausageGravy_Cooked.paa";
		mass=5;
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating_Can
			{
				effects[]=
				{
					{2,100,20}
				};
			};
		};
	};
	class Extremo_Item_Screwdriver: Extremo_AbstractItem
	{
		scope=2;
		displayName="Screwdriver";
		descriptionShort="";
		model="\A3\Structures_F\Items\Tools\Screwdriver_V1_F.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Screwdriver.paa";
		mass=10;
	};
	class Extremo_Item_SeedAstics: Extremo_AbstractItem
	{
		scope=2;
		displayName="Seed-Astics";
		descriptionShort="Bird is the word. <br/>Hunger: +20%/40s";
		model="\Extremo_Assets\model\Extremo_Item_SeedAstics.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_SeedAstics.paa";
		mass=5;
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,20,40}
				};
			};
		};
	};
	class Extremo_Item_Shovel: Extremo_AbstractItem
	{
		scope=2;
		displayName="Shovel";
		descriptionShort="";
		model="\A3\Structures_F_EPA\Items\Tools\Shovel_F.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Shovel.paa";
		mass=30;
	};
	class Extremo_Item_SleepingMat: Extremo_AbstractItem
	{
		scope=2;
		displayName="Sleeping Mat";
		descriptionShort="";
		model="\A3\Structures_F\Civ\Camping\Ground_sheet_folded_F.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_SleepingMat.paa";
		mass=30;
	};
	class Extremo_Item_Storagecratekit: Extremo_AbstractItem
	{
		scope=2;
		displayName="Storage Crate Kit";
		descriptionShort="Simple storage.";
		mass=75;
		model="\Extremo_Assets\model\Extremo_Construction_Crate.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Storagecrate.paa";
		class Interactions
		{
			class Constructing: Extremo_AbstractItem_Interaction_Constructing{};
		};
	};
	class Extremo_Item_Surstromming: Extremo_AbstractItem
	{
		scope=2;
		displayName="Surströmming (Raw)";
		descriptionShort="Rotten fish in pickle. Nothing more, nothing less.<br/>Hunger +55%/25s<br/>Thirst -10%/5s";
		model="\Extremo_Assets\model\Extremo_Item_Surstromming.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Surstromming.paa";
		mass=5;
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating_Can
			{
				effects[]=
				{
					{2,55,25},
					{3,-10,5}
				};
			};
		};
	};
	class Extremo_Item_Surstromming_Cooked: Extremo_AbstractItem
	{
		scope=2;
		displayName="Surströmming (Cooked)";
		descriptionShort="Rotten fish in pickle. Nothing more, nothing less.<br/>Hunger +100%/20s";
		model="\Extremo_Assets\model\Extremo_Item_Surstromming_Cooked.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Surstromming_Cooked.paa";
		mass=5;
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating_Can
			{
				effects[]=
				{
					{2,100,20}
				};
			};
		};
	};
	class Extremo_Item_ThermalScannerPro: Extremo_AbstractItem
	{
		scope=2;
		displayName="Thermal Scanner Pro";
		descriptionShort="Prints a thermal image of a used code lock. Can only be used five times. Does not work in safe zones.";
		picture="\Extremo_Assets\texture\item\Dummy.paa";
		model="\Extremo_Assets\model\Extremo_Item_ThermalScannerPro.p3d";
		mass=5;
		count=5;
	};
	class Extremo_Item_ToiletPaper: Extremo_AbstractItem
	{
		scope=2;
		displayName="Toilet Paper";
		picture="\Extremo_Assets\texture\item\Extremo_Item_ToiletPaper.paa";
		model="\Extremo_Assets\model\Extremo_Item_ToiletPaper.p3d";
		descriptionShort="How do blind people know when to stop using this?";
		mass=5;
	};
	class Extremo_Item_Vishpirin: Extremo_AbstractItem
	{
		scope=2;
		displayName="Vishpirin";
		descriptionShort="Oestrogen Power Shot!<br/>Health: +25%/30s<br/>Instant Soberness!";
		model="\Extremo_Assets\model\Extremo_Item_Vishpirin.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Vishpirin.paa";
		mass=5;
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Consuming_Healing
			{
				effects[]=
				{
					{0,25,30},
					{4,-5,0}
				};
			};
		};
	};
	class Extremo_Item_WaterBarrelKit: Extremo_AbstractItem
	{
		scope=2;
		displayName="Water Barrel Kit";
		descriptionShort="Can be used to re-fill your water bottles with dirty water. May taste suspicious.";
		mass=40;
		model="\Extremo_Assets\model\Extremo_Construction_Crate.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Construction_WaterBarrel.paa";
		class Interactions
		{
			class Constructing: Extremo_AbstractItem_Interaction_Constructing{};
		};
	};
	class Extremo_Item_WaterCanisterDirtyWater: Extremo_AbstractItem
	{
		scope=2;
		displayName="Water Canister (Dirty Water)";
		descriptionShort="A canister full of water. Surprise, surprise.";
		model="\a3\structures_f\Items\Vessels\CanisterPlastic_F.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_WaterCanister.paa";
		mass=20;
	};
	class Extremo_Item_WaterCanisterEmpty: Extremo_AbstractItem
	{
		scope=2;
		displayName="Water Canister (Empty)";
		descriptionShort="An empty plastic canister.";
		model="\a3\structures_f\Items\Vessels\CanisterPlastic_F.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_WaterCanister.paa";
		mass=10;
	};
	class Extremo_Item_WireFenceKit: Extremo_AbstractItem
	{
		scope=2;
		displayName="Wire Fence Kit";
		picture="\Extremo_Assets\texture\item\Extremo_Item_WireFenceKit.paa";
		model="\Extremo_Assets\model\Extremo_Construction_Crate.p3d";
		descriptionShort="The grass is always greener on the other side of the fence. Good that this one is look-through.";
		mass=150;
		class Interactions
		{
			class Constructing: Extremo_AbstractItem_Interaction_Constructing{};
		};
	};
	class Extremo_Item_WoodDoorKit: Extremo_AbstractItem
	{
		scope=2;
		displayName="Wood Door Kit";
		descriptionShort="A must-have for your base.";
		mass=60;
		model="\Extremo_Assets\model\Extremo_Construction_Crate.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_WoodDoorKit.paa";
		class Interactions
		{
			class Constructing: Extremo_AbstractItem_Interaction_Constructing{};
		};
	};
	class Extremo_Item_WoodDoorwayKit: Extremo_AbstractItem
	{
		scope=2;
		displayName="Wood Doorway Kit";
		descriptionShort="A wall with a doorway, that is, without a door.";
		mass=50;
		model="\Extremo_Assets\model\Extremo_Construction_Crate.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_WoodDoorwayKit.paa";
		class Interactions
		{
			class Constructing: Extremo_AbstractItem_Interaction_Constructing{};
		};
	};
	class Extremo_Item_WoodDrawBridgeKit: Extremo_AbstractItem
	{
		scope=2;
		displayName="Wood Drawbridge Kit";
		descriptionShort="Now all you need is a moat.";
		mass=60;
		model="\Extremo_Assets\model\Extremo_Construction_Crate.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_WoodDrawBridgeKit.paa";
		class Interactions
		{
			class Constructing: Extremo_AbstractItem_Interaction_Constructing{};
		};
	};
	class Extremo_Item_WoodFloorKit: Extremo_AbstractItem
	{
		scope=2;
		displayName="Wood Floor Kit";
		descriptionShort="A 6x6m floor made out of wood.";
		mass=60;
		model="\Extremo_Assets\model\Extremo_Construction_Crate.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_WoodFloorKit.paa";
		class Interactions
		{
			class Constructing: Extremo_AbstractItem_Interaction_Constructing{};
		};
	};
	class Extremo_Item_WoodFloorPortKit: Extremo_AbstractItem
	{
		scope=2;
		displayName="Wood Floor Port Kit";
		descriptionShort="A 6x6m floor made out of wood. This is a special floor with a hole in it. Place stairs inside to get to the next floor or use it was a secret escape on the bottom of your base.";
		mass=60;
		model="\Extremo_Assets\model\Extremo_Construction_Crate.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_WoodFloorPortKit.paa";
		class Interactions
		{
			class Constructing: Extremo_AbstractItem_Interaction_Constructing{};
		};
	};
	class Extremo_Item_WoodFloorPortSmallKit: Extremo_AbstractItem
	{
		scope=2;
		displayName="Wood Floor Port Small Kit";
		descriptionShort="A 6x6m floor made out of wood. This is a special floor with a hole in it. Expand the functionality of this floor with a ladder!";
		mass=60;
		model="\Extremo_Assets\model\Extremo_Construction_Crate.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_WoodFloorPortSmallKit.paa";
		class Interactions
		{
			class Constructing: Extremo_AbstractItem_Interaction_Constructing{};
		};
	};
	class Extremo_Item_WoodGateKit: Extremo_AbstractItem
	{
		scope=2;
		displayName="Wood Gate Kit";
		descriptionShort="Similar to a door, but is used for vehicles.";
		mass=60;
		model="\Extremo_Assets\model\Extremo_Construction_Crate.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_WoodGateKit.paa";
		class Interactions
		{
			class Constructing: Extremo_AbstractItem_Interaction_Constructing{};
		};
	};
	class Extremo_Item_WoodLadderHatchKit: Extremo_AbstractItem
	{
		scope=2;
		displayName="Wood Ladder Hatch Kit";
		descriptionShort="A 6x6m floor made out of wood. Someone decided to add a nifty lockable hatch with a ladder to the center of the floor. Now you can make a tree house!";
		mass=60;
		model="\Extremo_Assets\model\Extremo_Construction_Crate.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_WoodLadderHatchKit.paa";
		class Interactions
		{
			class Constructing: Extremo_AbstractItem_Interaction_Constructing{};
		};
	};
	class Extremo_Item_WoodLadderKit: Extremo_AbstractItem
	{
		scope=2;
		displayName="Wood Ladder Kit";
		descriptionShort="Since we have not mastered levitation yet...";
		mass=60;
		model="\Extremo_Assets\model\Extremo_Construction_Crate.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_WoodLadderKit.paa";
		class Interactions
		{
			class Constructing: Extremo_AbstractItem_Interaction_Constructing{};
		};
	};
	class Extremo_Item_WoodLog: Extremo_AbstractItem
	{
		scope=2;
		displayName="Wood Log";
		descriptionShort="Timber!";
		model="Extremo_Assets\model\Extremo_Item_Woodlog.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Woodlog.paa";
		mass=20;
	};
	class Extremo_Item_WoodPlank: Extremo_AbstractItem
	{
		scope=2;
		displayName="Wood Plank";
		descriptionShort="The reason why Planking became a trend.";
		mass=20;
		model="\Extremo_Assets\model\Extremo_Item_WoodPlank.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_WoodPlank.paa";
	};
	class Extremo_Item_WoodStairsKit: Extremo_AbstractItem
	{
		scope=2;
		displayName="Wood Stairs Kit";
		descriptionShort="Since we do not have an elevator yet...";
		mass=60;
		model="\Extremo_Assets\model\Extremo_Construction_Crate.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_WoodStairsKit.paa";
		class Interactions
		{
			class Constructing: Extremo_AbstractItem_Interaction_Constructing{};
		};
	};
	class Extremo_Item_WoodSticks: Extremo_AbstractItem
	{
		scope=2;
		displayName="Wood Sticks";
		descriptionShort="The imaginary sword of the young and innocent.";
		model="\Extremo_Assets\model\Extremo_Item_WoodSticks.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_WoodSticks.paa";
		mass=15;
	};
	class Extremo_Item_WoodSupportKit: Extremo_AbstractItem
	{
		scope=2;
		displayName="Wood Support Kit";
		descriptionShort="An effective way to build on not-so-flat terrain.";
		mass=60;
		model="\Extremo_Assets\model\Extremo_Construction_Crate.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_WoodSupportKit.paa";
		class Interactions
		{
			class Constructing: Extremo_AbstractItem_Interaction_Constructing{};
		};
	};
	class Extremo_Item_WoodWallHalfKit: Extremo_AbstractItem
	{
		scope=2;
		displayName="1/2 Wood Wall Kit";
		descriptionShort="A 6x1.5m wall made out of wood.";
		mass=30;
		model="\Extremo_Assets\model\Extremo_Construction_Crate.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_WoodWallHalfKit.paa";
		class Interactions
		{
			class Constructing: Extremo_AbstractItem_Interaction_Constructing{};
		};
	};
	class Extremo_Item_WoodWallKit: Extremo_AbstractItem
	{
		scope=2;
		displayName="Wood Wall Kit";
		descriptionShort="A 6x3m wall made out of wood.";
		mass=60;
		model="\Extremo_Assets\model\Extremo_Construction_Crate.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_WoodWallKit.paa";
		class Interactions
		{
			class Constructing: Extremo_AbstractItem_Interaction_Constructing{};
		};
	};
	class Extremo_Item_WoodWindowKit: Extremo_AbstractItem
	{
		scope=2;
		displayName="Wood Window Kit";
		descriptionShort="Offers a good position to shoot out of your base. Does not contain glass.";
		mass=60;
		model="\Extremo_Assets\model\Extremo_Construction_Crate.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_WoodWindowKit.paa";
		class Interactions
		{
			class Constructing: Extremo_AbstractItem_Interaction_Constructing{};
		};
	};
	class Extremo_Item_WorkBenchKit: Extremo_AbstractItem
	{
		scope=2;
		displayName="Work Bench Kit";
		descriptionShort="Used to craft most construction items.";
		mass=50;
		model="\Extremo_Assets\model\Extremo_Construction_Crate.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_WorkBenchKit.paa";
		class Interactions
		{
			class Constructing: Extremo_AbstractItem_Interaction_Constructing{};
		};
	};
	class Extremo_Item_Wrench: Extremo_AbstractItem
	{
		scope=2;
		displayName="Wrench";
		descriptionShort="";
		model="\A3\Structures_F\Items\Tools\Wrench_F.p3d";
		picture="\Extremo_Assets\texture\item\Extremo_Item_Wrench.paa";
		mass=10;
	};
	class Extremo_Item_ZipTie: HandGrenade_Stone
	{
		scope=2;
		displayName="Zip Tie";
		picture="\Extremo_Assets\texture\item\Extremo_Item_ZipTie.paa";
		model="\Extremo_Assets\model\Extremo_Item_ZipTie.p3d";
		descriptionShort="Can be used for handcuffing and secret, super-special operations.";
		mass=5;
	};
	class spraycan_blk;
	class spraycan_red;
	class spraycan_grn;
	class spraycan_wht;
	class spraycan_blu;
	class burlap;
	class 556;
	class 762;
	class wpn_prt;
	class Alsatain_Ck;
	class Alsatian_Raw;
	class CatShark_Ck;
	class CatShark_Raw;
	class Chicken_Ck;
	class Chicken_Raw;
	class Fin_Ck;
	class Fin_Raw;
	class Goat_Raw;
	class Goat_Ck;
	class Mackrel_Ck;
	class Mackrel_Raw;
	class Mullet_Raw;
	class Mullet_Ck;
	class Ornate_Raw;
	class Ornate_Ck;
	class Rabbit_Ck;
	class Rabbit_Raw;
	class Rooster_Raw;
	class Rooster_Ck;
	class Salema_Ck;
	class Salema_Raw;
	class Sheep_Raw;
	class Sheep_Ck;
	class Snake_Ck;
	class Snake_Raw;
	class Tuna_Raw;
	class Tuna_Ck;
	class Turtle_Ck;
	class Turtle_Raw;
	class Extremo_Item_SprayCan_Black: spraycan_blk
	{
		scope=2;
		author="Nikko Renolds";
		count=1;
		displayName="Spray Can (Black)";
	};
	class Extremo_Item_SprayCan_Red: spraycan_red
	{
		scope=2;
		author="Nikko Renolds";
		count=1;
		displayName="Spray Can (Red)";
	};
	class Extremo_Item_SprayCan_Green: spraycan_grn
	{
		scope=2;
		author="Nikko Renolds";
		count=1;
		displayName="Spray Can (Green)";
	};
	class Extremo_Item_SprayCan_White: spraycan_wht
	{
		scope=2;
		author="Nikko Renolds";
		count=1;
		displayName="Spray Can (White)";
	};
	class Extremo_Item_SprayCan_Blue: spraycan_blu
	{
		scope=2;
		author="Nikko Renolds";
		count=1;
		displayName="Spray Can (Blue)";
	};
	class Extremo_Item_BurlapSack: burlap
	{
		scope=2;
		author="Nikko Renolds";
		count=1;
		displayName="Burlap Sack";
	};
	class Extremo_Item_Bullets_556: 556
	{
		scope=2;
		author="Nikko Renolds";
		count=1;
		displayName="5.56mm Bullets";
	};
	class Extremo_Item_Bullets_762: 762
	{
		scope=2;
		author="Nikko Renolds";
		count=1;
		displayName="7.62mm Bullets";
	};
	class Extremo_Item_WeaponParts: wpn_prt
	{
		scope=2;
		author="Nikko Renolds";
		count=1;
		displayName="Weapon Parts";
	};
	class Extremo_Item_AlsatianSteak_Raw: Alsatian_Raw
	{
		scope=2;
		author="Nikko Renolds";
		count=1;
		displayName="Alsatian Steak (Raw)";
		descriptionShort="So raw, you can still hear the faint woofs<br/>Hunger +15%/30s<br/>Health -10%/30s";
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,15,30},
					{0,-10,30}
				};
			};
		};
	};
	class Extremo_Item_AlsatianSteak_Cooked: Alsatain_Ck
	{
		scope=2;
		author="Nikko Renolds";
		count=1;
		displayName="Alsatian Steak (Cooked)";
		descriptionShort="Alsatian, only the best<br/>Hunger +100%/30s";
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,100,30}
				};
			};
		};
	};
	class Extremo_Item_CatSharkFilet_Raw: CatShark_Raw
	{
		scope=2;
		author="Nikko Renolds";
		count=1;
		displayName="Cat Shark Filet (Raw)";
		descriptionShort="It's dangerous on land and in water. Meow...<br/>Hunger +15%/30s<br/>Health -10%/30s";
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,25,30},
					{0,-20,30}
				};
			};
		};
	};
	class Extremo_Item_CatSharkFilet_Cooked: CatShark_Ck
	{
		scope=2;
		author="Nikko Renolds";
		count=1;
		displayName="Cat Shark Filet (Cooked)";
		descriptionShort="I want my food, right meow<br/>Hunger +100%/30s";
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,100,30}
				};
			};
		};
	};
	class Extremo_Item_ChickenFilet_Raw: Chicken_Raw
	{
		scope=2;
		author="Nikko Renolds";
		count=1;
		displayName="Chicken Filet (Raw)";
		descriptionShort="So fresh, you can still see the feathers<br/>Hunger +15%/30s<br/>Health -10%/30s";
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,10,30},
					{0,-7,30}
				};
			};
		};
	};
	class Extremo_Item_ChickenFilet_Cooked: Chicken_Ck
	{
		scope=2;
		author="Nikko Renolds";
		count=1;
		displayName="Chicken Filet (Cooked)";
		descriptionShort="Sadly, its not deep fried<br/>Hunger +100%/30s";
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,70,30}
				};
			};
		};
	};
	class Extremo_Item_FinSteak_Raw: Fin_Raw
	{
		scope=2;
		author="Nikko Renolds";
		count=1;
		displayName="Fin Steak (Raw)";
		descriptionShort="Come here, good boy..........<br/>Hunger +15%/30s<br/>Health -10%/30s";
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,15,30},
					{0,-10,30}
				};
			};
		};
	};
	class Extremo_Item_FinSteak_Cooked: Fin_Ck
	{
		scope=2;
		author="Nikko Renolds";
		count=1;
		displayName="Fin Steak (Cooked)";
		descriptionShort="Now who is the monster?<br/>Hunger +100%/30s";
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,100,30}
				};
			};
		};
	};
	class Extremo_Item_GoatSteak_Raw: Goat_Raw
	{
		scope=2;
		author="Nikko Renolds";
		count=1;
		displayName="Goat Steak (Raw)";
		descriptionShort="Haven't goat any words....<br/>Hunger +15%/30s<br/>Health -10%/30s";
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,15,30},
					{0,-10,30}
				};
			};
		};
	};
	class Extremo_Item_GoatSteak_Cooked: Goat_Ck
	{
		scope=2;
		author="Nikko Renolds";
		count=1;
		displayName="Goat Steak (Cooked)";
		descriptionShort="That raw goat pun was baaaaaaaaaad<br/>Hunger +100%/30s";
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,100,30}
				};
			};
		};
	};
	class Extremo_Item_MackerelFilet_Raw: Mackrel_Raw
	{
		scope=2;
		author="Nikko Renolds";
		count=1;
		displayName="Mackeral Filet (Raw)";
		descriptionShort="The unholy mackerel<br/>Hunger +15%/30s<br/>Health -10%/30s";
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,5,30},
					{0,-3,30}
				};
			};
		};
	};
	class Extremo_Item_MackerelFilet_Cooked: Mackrel_Ck
	{
		scope=2;
		author="Nikko Renolds";
		count=1;
		displayName="Mackeral Filet (Cooked)";
		descriptionShort="A holy mackeral!<br/>Hunger +100%/30s";
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,55,30}
				};
			};
		};
	};
	class Extremo_Item_MulletFilet_Raw: Mullet_Raw
	{
		scope=2;
		author="Nikko Renolds";
		count=1;
		displayName="Mullet Filet (Raw)";
		descriptionShort="We aren't talking about the one on your head<br/>Hunger +15%/30s<br/>Health -10%/30s";
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,5,30},
					{0,-3,30}
				};
			};
		};
	};
	class Extremo_Item_MulletFilet_Cooked: Mullet_Ck
	{
		scope=2;
		author="Nikko Renolds";
		count=1;
		displayName="Mullet Filet (Cooked)";
		descriptionShort="Don't mistake this for your ""awesome"" hairstyle<br/>Hunger +100%/30s";
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,65,30}
				};
			};
		};
	};
	class Extremo_Item_OrnateFilet_Raw: Ornate_Raw
	{
		scope=2;
		author="Nikko Renolds";
		count=1;
		displayName="Ornate Filet (Raw)";
		descriptionShort="To be, ornate to be<br/>Hunger +15%/30s<br/>Health -10%/30s";
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,5,30},
					{0,-3,30}
				};
			};
		};
	};
	class Extremo_Item_OrnateFilet_Cooked: Ornate_Ck
	{
		scope=2;
		author="Nikko Renolds";
		count=1;
		displayName="Ornate Filet (Cooked)";
		descriptionShort="Maybe ornater time...<br/>Hunger +100%/30s";
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,40,30}
				};
			};
		};
	};
	class Extremo_Item_RabbitSteak_Raw: Rabbit_Raw
	{
		scope=2;
		author="Nikko Renolds";
		count=1;
		displayName="Rabbit Steak (Raw)";
		descriptionShort="Don't eat my carrots<br/>Hunger +15%/30s<br/>Health -10%/30s";
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,5,30},
					{0,-3,30}
				};
			};
		};
	};
	class Extremo_Item_RabbitSteak_Cooked: Rabbit_Ck
	{
		scope=2;
		author="Nikko Renolds";
		count=1;
		displayName="Rabbit Steak (Cooked)";
		descriptionShort="I'd make a veggie joke, but no one would carrot all<br/>Hunger +100%/30s";
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,80,30}
				};
			};
		};
	};
	class Extremo_Item_RoosterFilet_Raw: Rooster_Raw
	{
		scope=2;
		author="Nikko Renolds";
		count=1;
		displayName="Rooster Filet (Raw)";
		descriptionShort="Up since the break of dawn<br/>Hunger +15%/30s<br/>Health -10%/30s";
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,10,30},
					{0,-8,30}
				};
			};
		};
	};
	class Extremo_Item_RoosterFilet_Cooked: Rooster_Ck
	{
		scope=2;
		author="Nikko Renolds";
		count=1;
		displayName="Rooster Filet (Cooked)";
		descriptionShort="It's the year of the rooster<br/>Hunger +100%/30s";
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,70,30}
				};
			};
		};
	};
	class Extremo_Item_SalemaFilet_Raw: Salema_Raw
	{
		scope=2;
		author="Nikko Renolds";
		count=1;
		displayName="Salema Filet (Raw)";
		descriptionShort="Don't worry, you won't trip out<br/>Hunger +15%/30s<br/>Health -10%/30s";
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,5,30},
					{0,-3,30}
				};
			};
		};
	};
	class Extremo_Item_SalemaFilet_Cooked: Salema_Ck
	{
		scope=2;
		author="Nikko Renolds";
		count=1;
		displayName="Salema Filet (Cooked)";
		descriptionShort="Seriously, don't worry.<br/>Hunger +100%/30s";
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,65,30}
				};
			};
		};
	};
	class Extremo_Item_SheepSteak_Raw: Sheep_Raw
	{
		scope=2;
		author="Nikko Renolds";
		count=1;
		displayName="Sheep Steak (Raw)";
		descriptionShort="What is love? Baby don't herd me..<br/>Hunger +15%/30s<br/>Health -10%/30s";
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,15,30},
					{0,-10,30}
				};
			};
		};
	};
	class Extremo_Item_SheepSteak_Cooked: Sheep_Ck
	{
		scope=2;
		author="Nikko Renolds";
		count=1;
		displayName="Sheep Steak (Cooked)";
		descriptionShort="Don't herd me, no more...<br/>Hunger +100%/30s";
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,100,30}
				};
			};
		};
	};
	class Extremo_Item_SnakeFilet_Raw: Snake_Raw
	{
		scope=2;
		author="Nikko Renolds";
		count=1;
		displayName="Snake Filet (Raw)";
		descriptionShort="Hiss off! I'm serious<br/>Hunger +15%/30s<br/>Health -10%/30s";
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,5,30},
					{0,-3,30}
				};
			};
		};
	};
	class Extremo_Item_SnakeFilet_Cooked: Snake_Ck
	{
		scope=2;
		author="Nikko Renolds";
		count=1;
		displayName="Snake Filet (Cooked)";
		descriptionShort="Hiss off!<br/>Hunger +100%/30s";
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,40,30}
				};
			};
		};
	};
	class Extremo_Item_TunaFilet_Raw: Tuna_Raw
	{
		scope=2;
		author="Nikko Renolds";
		count=1;
		displayName="Tuna Filet (Raw)";
		descriptionShort="What's the difference between a fish and a piano? You can't tuna fish..<br/>Hunger +15%/30s<br/>Health -10%/30s";
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,20,30},
					{0,-15,30}
				};
			};
		};
	};
	class Extremo_Item_TunaFilet_Cooked: Tuna_Ck
	{
		scope=2;
		author="Nikko Renolds";
		count=1;
		displayName="Tuna Filet (Cooked)";
		descriptionShort="Tunas, huh?<br/>Hunger +100%/30s";
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,90,30}
				};
			};
		};
	};
	class Extremo_Item_TurtleFilet_Raw: Turtle_Raw
	{
		scope=2;
		author="Nikko Renolds";
		count=1;
		displayName="Turtle Filet (Raw)";
		descriptionShort="Be careful, they bite hard.<br/>Hunger +15%/30s<br/>Health -10%/30s";
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,15,30},
					{0,-10,30}
				};
			};
		};
	};
	class Extremo_Item_TurtleFilet_Cooked: Turtle_Ck
	{
		scope=2;
		author="Nikko Renolds";
		count=1;
		displayName="Turtle Filet (Cooked)";
		descriptionShort="TMNT FTW<br/>Hunger +100%/30s";
		class Interactions
		{
			class Consuming: Extremo_AbstractItem_Interaction_Eating
			{
				effects[]=
				{
					{2,100,30}
				};
			};
		};
	};
	class 10Rnd_765x17ball;
	class Extremo_Magazine_10Rnd_765x17_SA61: 10Rnd_765x17ball
	{
		scope=2;
		author="Nikko Renolds";
		displayName="7.65 mm 10Rnd Mag";
		descriptionShort="Caliber: 7.65x17 mm<br />Rounds: 10<br />Used in: SA61";
	};
	class 20Rnd_765x17ball;
	class Extremo_Magazine_20Rnd_765x17_SA61: 20Rnd_765x17ball
	{
		scope=2;
		author="Nikko Renolds";
		displayName="7.65 mm 20Rnd Mag";
		descriptionShort="Caliber: 7.65x17 mm<br />Rounds: 20<br />Used in: SA61";
	};
	class 5Rnd_127x108_APDS_KSVK;
	class Extremo_Magazine_5Rnd_127x108_APDS_KSVK: 5Rnd_127x108_APDS_KSVK
	{
		scope=2;
		author="Nikko Renolds";
		displayName="APDS 12.7 mm 5Rnd Mag";
		descriptionShort="Caliber: 12.7x108 mm<br />Rounds: 5<br />Used in: KSVK";
	};
	class 5Rnd_127x108_KSVK;
	class Extremo_Magazine_5Rnd_127x108_KSVK: 5Rnd_127x108_KSVK
	{
		scope=2;
		author="Nikko Renolds";
		displayName="12.7 mm 5Rnd Mag";
		descriptionShort="Caliber: 12.7x108 mm<br />Rounds: 5<br />Used in: KSVK";
	};
	class 10Rnd_127x99_m107;
	class Extremo_Magazine_10Rnd_127x99_m107: 10Rnd_127x99_m107
	{
		scope=2;
		author="Nikko Renolds";
		displayName="12.7 mm 10Rnd Mag";
		descriptionShort="Caliber: 12.7x99 mm<br />Rounds: 10<br />Used in: M107";
	};
	class 30Rnd_762x39_AK47_M;
	class Extremo_Magazine_30Rnd_762x39_AK: 30Rnd_762x39_AK47_M
	{
		scope=2;
		author="Nikko Renolds";
		displayName="7.62 mm 30Rnd Mag";
		descriptionShort="Caliber: 7.62x39 mm<br />Rounds: 30<br />Used in: AK47, AKM, AKS";
	};
	class 30Rnd_545x39_AK;
	class Extremo_Magazine_30Rnd_545x39_AK: 30Rnd_545x39_AK
	{
		scope=2;
		author="Nikko Renolds";
		displayName="5.45 mm 30Rnd Mag";
		descriptionShort="Caliber: 5.45x39 mm<br />Rounds: 30<br />Used in: AK107, AK74";
	};
	class 30Rnd_Green_Tracer_545x39_AK;
	class Extremo_Magazine_30Rnd_545x39_AK_Green: 30Rnd_Green_Tracer_545x39_AK
	{
		scope=2;
		author="Nikko Renolds";
		displayName="5.45 mm 30Rnd Tracer (Green) Mag";
		descriptionShort="Caliber: 5.45x39 mm<br />Rounds: 30<br />Used in: AK107, AK74";
	};
	class 30Rnd_Red_Tracer_545x39_AK;
	class Extremo_Magazine_30Rnd_545x39_AK_Red: 30Rnd_Red_Tracer_545x39_AK
	{
		scope=2;
		author="Nikko Renolds";
		displayName="5.45 mm 30Rnd Tracer (Red) Mag";
		descriptionShort="Caliber: 5.45x39 mm<br />Rounds: 30<br />Used in: AK107, AK74";
	};
	class 30Rnd_White_Tracer_545x39_AK;
	class Extremo_Magazine_30Rnd_545x39_AK_White: 30Rnd_White_Tracer_545x39_AK
	{
		scope=2;
		author="Nikko Renolds";
		displayName="5.45 mm 30Rnd Tracer (White) Mag";
		descriptionShort="Caliber: 5.45x39 mm<br />Rounds: 30<br />Used in: AK107, AK74";
	};
	class 30Rnd_Yellow_Tracer_545x39_AK;
	class Extremo_Magazine_30Rnd_545x39_AK_Yellow: 30Rnd_Yellow_Tracer_545x39_AK
	{
		scope=2;
		author="Nikko Renolds";
		displayName="5.45 mm 30Rnd Tracer (Yellow) Mag";
		descriptionShort="Caliber: 5.45x39 mm<br />Rounds: 30<br />Used in: AK107, AK74";
	};
	class 45Rnd_Green_Tracer_545x39_RPK;
	class Extremo_Magazine_45Rnd_545x39_RPK_Green: 45Rnd_Green_Tracer_545x39_RPK
	{
		scope=2;
		author="Nikko Renolds";
		displayName="5.45 mm 45Rnd Tracer (Green) Mag";
		descriptionShort="Caliber: 5.45x39 mm<br />Rounds: 45<br />Used in: RPK";
	};
	class 75Rnd_Green_Tracer_545x39_RPK;
	class Extremo_Magazine_75Rnd_545x39_RPK_Green: 75Rnd_Green_Tracer_545x39_RPK
	{
		scope=2;
		author="Nikko Renolds";
		displayName="5.45 mm 75Rnd Tracer (Green) Mag";
		descriptionShort="Caliber: 5.45x39 mm<br />Rounds: 75<br />Used in: RPK";
	};
	class 20Rnd_762x51_DMR;
	class Extremo_Magazine_20Rnd_762x51_DMR: 20Rnd_762x51_DMR
	{
		scope=2;
		author="Nikko Renolds";
		displayName="7.62 mm 20Rnd Mag";
		descriptionShort="Caliber: 7.62x51 mm NATO<br />Rounds: 20<br />Used in: DMR";
	};
	class 20Rnd_Yellow_Tracer_762x51_DMR;
	class Extremo_Magazine_20Rnd_762x51_DMR_Yellow: 20Rnd_Yellow_Tracer_762x51_DMR
	{
		scope=2;
		author="Nikko Renolds";
		displayName="7.62 mm 20Rnd Tracer (Yellow) Mag";
		descriptionShort="Caliber: 7.62x51 mm NATO<br />Rounds: 20<br />Used in: DMR";
	};
	class 20Rnd_Red_Tracer_762x51_DMR;
	class Extremo_Magazine_20Rnd_762x51_DMR_Red: 20Rnd_Red_Tracer_762x51_DMR
	{
		scope=2;
		author="Nikko Renolds";
		displayName="7.62 mm 20Rnd Tracer (Red) Mag";
		descriptionShort="Caliber: 7.62x51 mm NATO<br />Rounds: 20<br />Used in: DMR";
	};
	class 20Rnd_Green_Tracer_762x51_DMR;
	class Extremo_Magazine_20Rnd_762x51_DMR_Green: 20Rnd_Green_Tracer_762x51_DMR
	{
		scope=2;
		author="Nikko Renolds";
		displayName="7.62 mm 20Rnd Tracer (Green) Mag";
		descriptionShort="Caliber: 7.62x51 mm NATO<br />Rounds: 20<br />Used in: DMR";
	};
	class 10x_303_M;
	class Extremo_Magazine_10Rnd_303: 10x_303_M
	{
		scope=2;
		author="Nikko Renolds";
		displayName=".303 British Mag";
		descriptionShort="Caliber: .303 British<br />Rounds: 10<br />Used in: Lee-Enfield No.4 Mk.I";
	};
	class 100Rnd_762x54_PK_Tracer_Green;
	class Extremo_Magazine_100Rnd_762x54_PK_Green: 100Rnd_762x54_PK_Tracer_Green
	{
		scope=2;
		author="Nikko Renolds";
		displayName="7.62 mm 100Rnd Belt Tracer (Green)";
		descriptionShort="Caliber: 7.62x54 mm<br />Rounds: 100<br />Used in: PK, PKP";
	};
	class 7Rnd_45ACP_1911;
	class Extremo_Magazine_7Rnd_45ACP: 7Rnd_45ACP_1911
	{
		scope=2;
		author="Nikko Renolds";
		displayName=".45 ACP 7Rnd Mag";
		descriptionShort="Caliber: .45 ACP<br />Rounds: 7<br />Used in: Colt 1911";
	};
	class 8Rnd_9x18_Makarov;
	class Extremo_Magazine_8Rnd_9x18: 8Rnd_9x18_Makarov
	{
		scope=2;
		author="Nikko Renolds";
		displayName="9 mm 8Rnd Mag";
		descriptionShort="Caliber: 9x18 mm<br />Rounds: 8<br />Used in: Makarov";
	};
	class 6Rnd_45ACP;
	class Extremo_Magazine_6Rnd_45ACP: 6Rnd_45ACP
	{
		scope=2;
		author="Nikko Renolds";
		displayName="45 ACP 6Rnd Mag";
		descriptionShort="Caliber: 45 ACP<br />Rounds: 6<br />Used in: Taurus";
	};
	class 5x_22_LR_17_HMR_M;
	class Extremo_Magazine_5Rnd_22LR: 5x_22_LR_17_HMR_M
	{
		scope=2;
		author="Nikko Renolds";
		displayName=".22LR 5Rnd Mag";
		descriptionShort="Caliber: .22LR<br />Rounds: 5<br />Used in: CZ550";
	};
	class 10Rnd_762x54_SVD;
	class Extremo_Magazine_10Rnd_762x54: 10Rnd_762x54_SVD
	{
		scope=2;
		author="Nikko Renolds";
		displayName="762x54 10Rnd Mag";
		descriptionShort="Caliber: 762x54<br />Rounds: 10<br />Used in: SVD";
	};
	class 10Rnd_9x39_VSS;
	class Extremo_Magazine_10Rnd_9x39: 10Rnd_9x39_VSS
	{
		scope=2;
		author="Nikko Renolds";
		displayName="9x39 10Rnd Mag";
		descriptionShort="Caliber: 9x39<br />Rounds: 10<br />Used in: VSS";
	};
	class 20Rnd_9x39_VSS;
	class Extremo_Magazine_20Rnd_9x39: 20Rnd_9x39_VSS
	{
		scope=2;
		author="Nikko Renolds";
		displayName="9x39 20Rnd Mag";
		descriptionShort="Caliber: 9x39<br />Rounds: 20<br />Used in: VSS";
	};
	class 8rnd_B_Beneli_74Slug;
	class Extremo_Magazine_8Rnd_74Slug: 8rnd_B_Beneli_74Slug
	{
		scope=2;
		author="Nikko Renolds";
		displayName="Slug 8Rnd";
		descriptionShort="Caliber: 12 Gauge<br />Rounds: 8<br />Used in: M1014";
	};
	class 8Rnd_B_Beneli_74Pellets;
	class Extremo_Magazine_8Rnd_74Pellets: 8Rnd_B_Beneli_74Pellets
	{
		scope=2;
		author="Nikko Renolds";
		displayName="Pellets 8Rnd";
		descriptionShort="Caliber: 12 Gauge<br />Rounds: 8<br />Used in: M1014";
	};
	class Extremo_Magazine_Battery: Extremo_AbstractItem
	{
		scope=2;
		count=100;
		displayName="Battery";
		ammo="Extremo_Ammo_Battery";
		mass=3;
		picture="\Extremo_Assets\texture\item\Extremo_Item_Battery.paa";
		model="\A3\Structures_F_EPA\Items\Electronics\Battery_F.p3d";
		descriptionShort="Used in electronic devices.";
		sound[]=
		{
			"A3\sounds_f\dummysound",
			31.622776,
			1,
			1600
		};
		reloadMagazineSound[]=
		{
			"A3\sounds_f\dummysound",
			0.0099999998,
			1,
			10
		};
	};
	class 5Rnd_127x108_Mag;
	class Extremo_Magazine_5Rnd_127x108_Bullet_Cam_Mag: 5Rnd_127x108_Mag
	{
		scope=2;
		author="Nikko Renolds";
		displayName="12.7 mm 5Rnd 8G Bullet Cam Mag";
		ExtremoBulletCam=1;
		picture="\Extremo_Assets\texture\item\Extremo_Magazine_5Rnd_127x108_Bullet_Cam_Mag_ca.paa";
		descriptionShort="Caliber: 12.7x108 mm Russian<br />Rounds: 5<br />Used in: GM6 Lynx<br /><br />Supports 8G Bullet Cam";
	};
	class 5Rnd_127x108_APDS_Mag;
	class Extremo_Magazine_5Rnd_127x108_APDS_Bullet_Cam_Mag: 5Rnd_127x108_APDS_Mag
	{
		scope=2;
		author="Nikko Renolds";
		displayName="12.7 mm 5Rnd APDS 8G Bullet Cam Mag";
		ExtremoBulletCam=1;
		picture="\Extremo_Assets\texture\item\Extremo_Magazine_5Rnd_127x108_Bullet_Cam_Mag_ca.paa";
		descriptionShort="Caliber: 12.7x108 mm APDS Russian<br />Rounds: 5<br />Used in: GM6 Lynx<br /><br />Supports 8G Bullet Cam";
	};
	class 10Rnd_93x64_DMR_05_Mag;
	class Extremo_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag: 10Rnd_93x64_DMR_05_Mag
	{
		scope=2;
		author="Nikko Renolds";
		displayName="9.3 mm 10Rnd 8G Bullet Cam Mag";
		ExtremoBulletCam=1;
		picture="\Extremo_Assets\texture\item\Extremo_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag_ca.paa";
		descriptionShort="Caliber: 9.3x64mm<br />Rounds: 10<br />Used in: Cyrus<br /><br />Supports 8G Bullet Cam";
	};
	class 7Rnd_408_Mag;
	class Extremo_Magazine_7Rnd_408_Bullet_Cam_Mag: 7Rnd_408_Mag
	{
		scope=2;
		author="Nikko Renolds";
		displayName=".408 7Rnd 8G Bullet Cam Mag";
		ExtremoBulletCam=1;
		picture="\Extremo_Assets\texture\item\Extremo_Magazine_7Rnd_408_Bullet_Cam_Mag_ca.paa";
		descriptionShort="Caliber: .408<br />Rounds: 7<br />Used in: M320 LRR<br /><br />Supports 8G Bullet Cam";
	};
	class 10Rnd_338_Mag;
	class Extremo_Magazine_10Rnd_338_Bullet_Cam_Mag: 10Rnd_338_Mag
	{
		scope=2;
		author="Nikko Renolds";
		displayName=".338 LM 10Rnd 8G Bullet Cam Mag";
		ExtremoBulletCam=1;
		picture="\Extremo_Assets\texture\item\Extremo_Magazine_10Rnd_338_Bullet_Cam_Mag_ca.paa";
		descriptionShort="Caliber: .338 Lapua Magnum<br />Rounds: 10<br />Used in: MAR-10<br /><br />Supports 8G Bullet Cam";
	};
	class Extremo_Magazine_10Rnd_127x99_m107_Bullet_Cam_Mag: 10Rnd_127x99_m107
	{
		scope=2;
		author="Nikko Renolds";
		displayName="12.7 mm 10Rnd 8G Bullet Cam Mag";
		ExtremoBulletCam=1;
		picture="\Extremo_Assets\texture\item\Extremo_Magazine_10Rnd_127x99_m107_Bullet_Cam_Mag.paa";
		descriptionShort="Caliber: 12.7x99 mm<br />Rounds: 10<br />Used in: M107<br /><br />Supports 8G Bullet Cam";
	};
	class Extremo_Magazine_5Rnd_127x108_KSVK_Bullet_Cam_Mag: 5Rnd_127x108_KSVK
	{
		scope=2;
		author="Nikko Renolds";
		displayName="12.7 mm 5Rnd 8G Bullet Cam Mag";
		ExtremoBulletCam=1;
		picture="\Extremo_Assets\texture\item\Extremo_Magazine_5Rnd_127x108_KSVK_Bullet_Cam_Mag.paa";
		descriptionShort="Caliber: 12.7x108 mm<br />Rounds: 5<br />Used in: KSVK<br /><br />Supports 8G Bullet Cam";
	};
	class Extremo_Magazine_5Rnd_127x108_APDS_KSVK_Bullet_Cam_Mag: 5Rnd_127x108_APDS_KSVK
	{
		scope=2;
		author="Nikko Renolds";
		displayName="12.7 mm 5Rnd APDS 8G Bullet Cam Mag";
		ExtremoBulletCam=1;
		picture="\Extremo_Assets\texture\item\Extremo_Magazine_5Rnd_127x108_APDS_KSVK_Bullet_Cam_Mag.paa";
		descriptionShort="Caliber: 12.7x108 mm<br />Rounds: 5<br />Used in: KSVK<br /><br />Supports 8G Bullet Cam";
	};
	class Extremo_Magazine_Swing: Extremo_AbstractItem
	{
		scope=2;
		count=999;
		autoReload=1;
		flash="";
		flashSize=0;
		displayName="Swing";
		ammo="Extremo_Ammo_Swing";
		mass=0;
		picture="\Extremo_Assets\texture\item\Extremo_Magazine_Swing.paa";
		model="\A3\weapons_F\ammo\mag_univ.p3d";
		initSpeed=0.1;
		sound[]=
		{
			"A3\sounds_f\dummysound",
			31.622776,
			1,
			1600
		};
		reloadMagazineSound[]=
		{
			"A3\sounds_f\dummysound",
			0.0099999998,
			1,
			10
		};
	};
	class Extremo_Magazine_Boing: Extremo_Magazine_Swing
	{
		scope=2;
		displayName="Boing";
		ammo="Extremo_Ammo_Boing";
		initSpeed=0.1;
	};
	class Extremo_Magazine_Swoosh: Extremo_Magazine_Swing
	{
		scope=2;
		displayName="Swoosh";
		ammo="Extremo_Ammo_Swoosh";
		initSpeed=0.1;
	};
};