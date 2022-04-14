class AbstractConstruction
{
	staticObject="";
	previewObject="";
	kitMagazine="";
	upgradeObject="";
	refundObjects[]={};
	requiresTerritory=1;
	canBePlacedOnRoad=1;
	allowDuplicateSnap=0;
	class SnapPositions
	{
	};
	class SnapObjects
	{
	};
};

class CfgConstruction
{
	class AbstractFloor: AbstractConstruction
	{
		class SnapPositions
		{
			Wall01[]={0,-2.875,0.25};
			Wall02[]={-2.875,0,0.25};
			Wall03[]={0,2.875,0.25};
			Wall04[]={2.875,0,0.25};
			Floor01[]={0,6,0};
			Floor02[]={6,0,0};
			Floor03[]={0,-6,0};
			Floor04[]={-6,0,0};
			Floor05[]={0,0,3.25};
			Floor06[]={0,0,-3.25};
			Stairs01[]={0,0,0.25};
			Stairs02[]={0,0,-2.75};
			ConcreteStairs01[]={0,0,0};
			ConcreteStairs02[]={0,0,-3.25};
		};
		class SnapObjects
		{
			class Extremo_Construction_WoodFloor_Static
			{
				positions[]=
				{
					"Floor01",
					"Floor02",
					"Floor03",
					"Floor04",
					"Floor05",
					"Floor06"
				};
			};
			class Extremo_Construction_WoodFloor_Reinforced_Static
			{
				positions[]=
				{
					"Floor01",
					"Floor02",
					"Floor03",
					"Floor04",
					"Floor05",
					"Floor06"
				};
			};
			class Extremo_Construction_WoodFloorPort_Static
			{
				positions[]=
				{
					"Floor01",
					"Floor02",
					"Floor03",
					"Floor04",
					"Floor05",
					"Floor06"
				};
			};
			class Extremo_Construction_WoodSupport_Static
			{
				positions[]=
				{
					"Floor01",
					"Floor02",
					"Floor03",
					"Floor04"
				};
			};
			class Extremo_Construction_WoodWall_Static
			{
				positions[]=
				{
					"Floor01",
					"Floor02"
				};
			};
			class Extremo_Construction_WoodWall_Reinforced_Static
			{
				positions[]=
				{
					"Floor01",
					"Floor02"
				};
			};
			class Extremo_Construction_WoodDoor_Static
			{
				positions[]=
				{
					"Floor01",
					"Floor02"
				};
			};
			class Extremo_Construction_WoodDoor_Reinforced_Static
			{
				positions[]=
				{
					"Floor01",
					"Floor02"
				};
			};
			class Extremo_Construction_WoodWindow_Static
			{
				positions[]=
				{
					"Floor01",
					"Floor02"
				};
			};
			class Extremo_Construction_WoodWindow_Reinforced_Static
			{
				positions[]=
				{
					"Floor01",
					"Floor02"
				};
			};
			class Extremo_Construction_WoodGate_Static
			{
				positions[]=
				{
					"Floor01",
					"Floor02"
				};
			};
			class Extremo_Construction_WoodGate_Reinforced_Static
			{
				positions[]=
				{
					"Floor01",
					"Floor02"
				};
			};
			class Extremo_Construction_ConcreteFloor_Static
			{
				positions[]=
				{
					"Floor01",
					"Floor02",
					"Floor03",
					"Floor04",
					"Floor05"
				};
			};
			class Extremo_Construction_ConcreteFloorPort_Static
			{
				positions[]=
				{
					"Floor01",
					"Floor02",
					"Floor03",
					"Floor04",
					"Floor05"
				};
			};
			class Extremo_Construction_ConcreteFloorHatch_Static
			{
				positions[]=
				{
					"Floor01",
					"Floor02",
					"Floor03",
					"Floor04",
					"Floor05"
				};
			};
			class Extremo_Construction_ConcreteFloorPortSmall_Static
			{
				positions[]=
				{
					"Floor01",
					"Floor02",
					"Floor03",
					"Floor04",
					"Floor05",
					"Floor06"
				};
			};
			class Extremo_Construction_ConcreteLadderHatch_Static
			{
				positions[]=
				{
					"Floor01",
					"Floor02",
					"Floor03",
					"Floor04",
					"Floor05",
					"Floor06"
				};
			};
			class Extremo_Construction_ConcreteSupport_Static
			{
				positions[]=
				{
					"Floor01",
					"Floor02",
					"Floor03",
					"Floor04"
				};
			};
			class Extremo_Construction_ConcreteWall_Static
			{
				positions[]=
				{
					"Floor01",
					"Floor02"
				};
			};
			class Extremo_Construction_ConcreteDoor_Static
			{
				positions[]=
				{
					"Floor01",
					"Floor02"
				};
			};
			class Extremo_Construction_ConcreteWindow_Static
			{
				positions[]=
				{
					"Floor01",
					"Floor02"
				};
			};
			class Extremo_Construction_ConcreteGate_Static
			{
				positions[]=
				{
					"Floor01",
					"Floor02"
				};
			};
			class Extremo_Construction_ConcreteDrawBridge_Static
			{
				positions[]=
				{
					"Floor01",
					"Floor02"
				};
			};
			class Extremo_Construction_WoodFloorPortSmall_Static
			{
				positions[]=
				{
					"Floor01",
					"Floor02",
					"Floor03",
					"Floor04",
					"Floor05",
					"Floor06"
				};
			};
			class Extremo_Construction_WoodFloorPortSmall_Reinforced_Static
			{
				positions[]=
				{
					"Floor01",
					"Floor02",
					"Floor03",
					"Floor04",
					"Floor05",
					"Floor06"
				};
			};
			class Extremo_Construction_WoodDrawBridge_Static
			{
				positions[]=
				{
					"Floor01",
					"Floor02"
				};
			};
			class Extremo_Construction_WoodDrawBridge_Reinforced_Static
			{
				positions[]=
				{
					"Floor01",
					"Floor02"
				};
			};
			class Extremo_Construction_WoodLadderHatch_Static
			{
				positions[]=
				{
					"Floor01",
					"Floor02",
					"Floor03",
					"Floor04",
					"Floor05",
					"Floor06"
				};
			};
			class Extremo_Construction_WoodLadderHatch_Reinforced_Static
			{
				positions[]=
				{
					"Floor01",
					"Floor02",
					"Floor03",
					"Floor04",
					"Floor05",
					"Floor06"
				};
			};
		};
	};
	class AbstractSupport: AbstractConstruction
	{
		class SnapPositions
		{
			Floor01[]={3,3,3};
			Floor02[]={-3,3,3};
			Floor03[]={3,-3,3};
			Floor04[]={-3,-3,3};
			Support01[]={-6,0,0};
			Support02[]={0,-6,0};
			Support03[]={6,0,0};
			Support04[]={0,6,0};
			Support05[]={0,0,3};
		};
		class SnapObjects
		{
			class Extremo_Construction_WoodSupport_Static
			{
				positions[]=
				{
					"Support01",
					"Support02",
					"Support03",
					"Support04",
					"Support05"
				};
			};
			class Extremo_Construction_ConcreteSupport_Static
			{
				positions[]=
				{
					"Support01",
					"Support02",
					"Support03",
					"Support04",
					"Support05"
				};
			};
		};
	};
	class AbstractWall: AbstractConstruction
	{
		class SnapPositions
		{
			Wall01[]={-6,0,0};
			Wall02[]={-2.875,-2.875,0};
			Wall03[]={2.875,-2.875,0};
			Wall04[]={6,0,0};
			Wall05[]={2.875,2.875,0};
			Wall06[]={-2.875,2.875,0};
			Wall07[]={0,0,3};
			Wall08[]={0,0,-3};
			Floor01[]={0,2.875,3};
			Floor02[]={0,-2.875,3};
		};
		class SnapObjects
		{
			class Extremo_Construction_WoodWallHalf_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04",
					"Wall05",
					"Wall06"
				};
			};
			class Extremo_Construction_WoodWallHalf_Reinforced_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04",
					"Wall05",
					"Wall06"
				};
			};
			class Extremo_Construction_WoodWall_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04",
					"Wall05",
					"Wall06",
					"Wall07",
					"Wall08"
				};
			};
			class Extremo_Construction_ConcreteWall_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04",
					"Wall05",
					"Wall06",
					"Wall07",
					"Wall08"
				};
			};
			class Extremo_Construction_WoodWall_Reinforced_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04",
					"Wall05",
					"Wall06",
					"Wall07",
					"Wall08"
				};
			};
			class Extremo_Construction_WoodFloor_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04"
				};
			};
			class Extremo_Construction_WoodFloor_Reinforced_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04"
				};
			};
			class Extremo_Construction_ConcreteFloor_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04"
				};
			};
			class Extremo_Construction_WoodFloorPort_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04"
				};
			};
			class Extremo_Construction_ConcreteFloorPort_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04"
				};
			};
			class Extremo_Construction_ConcreteFloorPortSmall_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04"
				};
			};
			class Extremo_Construction_ConcreteLadderHatch_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04"
				};
			};
			class Extremo_Construction_WoodWindow_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04",
					"Wall05",
					"Wall06",
					"Wall07",
					"Wall08"
				};
			};
			class Extremo_Construction_WoodWindow_Reinforced_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04",
					"Wall05",
					"Wall06",
					"Wall07",
					"Wall08"
				};
			};
			class Extremo_Construction_ConcreteWindow_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04",
					"Wall05",
					"Wall06",
					"Wall07",
					"Wall08"
				};
			};
			class Extremo_Construction_ConcreteWindowHatch_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04",
					"Wall05",
					"Wall06",
					"Wall07",
					"Wall08"
				};
			};
			class Extremo_Construction_WoodDoor_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04",
					"Wall05",
					"Wall06",
					"Wall07",
					"Wall08"
				};
			};
			class Extremo_Construction_WoodDoor_Reinforced_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04",
					"Wall05",
					"Wall06",
					"Wall07",
					"Wall08"
				};
			};
			class Extremo_Construction_ConcreteDoor_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04",
					"Wall05",
					"Wall06",
					"Wall07",
					"Wall08"
				};
			};
			class Extremo_Construction_WoodDoorway_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04",
					"Wall05",
					"Wall06",
					"Wall07",
					"Wall08"
				};
			};
			class Extremo_Construction_WoodDoorway_Reinforced_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04",
					"Wall05",
					"Wall06",
					"Wall07",
					"Wall08"
				};
			};
			class Extremo_Construction_ConcreteDoorway_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04",
					"Wall05",
					"Wall06",
					"Wall07",
					"Wall08"
				};
			};
			class Extremo_Construction_WoodGate_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04",
					"Wall05",
					"Wall06",
					"Wall07",
					"Wall08"
				};
			};
			class Extremo_Construction_WoodGate_Reinforced_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04",
					"Wall05",
					"Wall06",
					"Wall07",
					"Wall08"
				};
			};
			class Extremo_Construction_ConcreteGate_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04",
					"Wall05",
					"Wall06",
					"Wall07",
					"Wall08"
				};
			};
			class Extremo_Construction_ConcreteDrawBridge_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04",
					"Wall05",
					"Wall06",
					"Wall07",
					"Wall08"
				};
			};
			class Extremo_Construction_WoodFloorPortSmall_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04"
				};
			};
			class Extremo_Construction_WoodFloorPortSmall_Reinforced_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04"
				};
			};
			class Extremo_Construction_WoodDrawBridge_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04",
					"Wall05",
					"Wall06",
					"Wall07",
					"Wall08"
				};
			};
			class Extremo_Construction_WoodDrawBridge_Reinforced_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04",
					"Wall05",
					"Wall06",
					"Wall07",
					"Wall08"
				};
			};
			class Extremo_Construction_WoodLadderHatch_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04"
				};
			};
			class Extremo_Construction_WoodLadderHatch_Reinforced_Static
			{
				positions[]=
				{
					"Wall01",
					"Wall02",
					"Wall03",
					"Wall04"
				};
			};
		};
	};
	class Camera: AbstractWall
	{
		staticObject="Extremo_Construction_BaseCamera_Static";
		previewObject="Extremo_Construction_BaseCamera_Preview";
		kitMagazine="Extremo_Item_BaseCameraKit";
		refundObjects[]=
		{
			"Extremo_Item_BaseCameraKit"
		};
	};
	class CamoTent: AbstractConstruction
	{
		staticObject="Extremo_Container_CamoTent";
		previewObject="Extremo_Construction_CamoTent_Preview";
		kitMagazine="Extremo_Item_CamoTentKit";
		requiresTerritory=0;
		refundObjects[]=
		{
			"Extremo_Item_CamoTentKit"
		};
	};
	class CampFire: AbstractConstruction
	{
		staticObject="Extremo_Construction_CampFire_Static";
		previewObject="Extremo_Construction_CampFire_Preview";
		kitMagazine="Extremo_Item_CampFireKit";
		requiresTerritory=0;
		canBePlacedOnRoad=0;
		refundObjects[]=
		{
			"Extremo_Item_CampFireKit"
		};
	};
	class ConcreteDoor: AbstractWall
	{
		staticObject="Extremo_Construction_ConcreteDoor_Static";
		previewObject="Extremo_Construction_ConcreteDoor_Preview";
		kitMagazine="Extremo_Item_ConcreteDoorKit";
		refundObjects[]=
		{
			"Extremo_Item_ConcreteDoorKit"
		};
		materialType=12;
	};
	class ConcreteDoorway: AbstractWall
	{
		staticObject="Extremo_Construction_ConcreteDoorway_Static";
		previewObject="Extremo_Construction_ConcreteDoorway_Preview";
		kitMagazine="Extremo_Item_ConcreteDoorwayKit";
		refundObjects[]=
		{
			"Extremo_Item_ConcreteDoorwayKit"
		};
		materialType=12;
	};
	class ConcreteDrawBridge: AbstractWall
	{
		staticObject="Extremo_Construction_ConcreteDrawBridge_Static";
		previewObject="Extremo_Construction_ConcreteDrawBridge_Preview";
		kitMagazine="Extremo_Item_ConcreteDrawBridgeKit";
		refundObjects[]=
		{
			"Extremo_Item_ConcreteDrawBridgeKit"
		};
		materialType=12;
		class SnapPositions
		{
			Floor01[]={0,2.875,3};
			Floor02[]={0,-2.875,3};
			Wall01[]={-6,0,0};
			Wall02[]={-2.875,-2.875,0};
			Wall03[]={2.875,-2.875,0};
			Wall04[]={6,0,0};
			Wall05[]={2.875,3.1300001,0};
			Wall06[]={-2.875,3.1300001,0};
			Wall07[]={0,0,3};
			Wall08[]={0,0,-3};
		};
	};
	class ConcreteFloor: AbstractFloor
	{
		staticObject="Extremo_Construction_ConcreteFloor_Static";
		previewObject="Extremo_Construction_ConcreteFloor_Preview";
		kitMagazine="Extremo_Item_ConcreteFloorKit";
		refundObjects[]=
		{
			"Extremo_Item_ConcreteFloorKit"
		};
		materialType=12;
	};
	class ConcreteFloorHatch: AbstractFloor
	{
		staticObject="Extremo_Construction_ConcreteFloorHatch_Static";
		previewObject="Extremo_Construction_ConcreteFloorHatch_Preview";
		refundObjects[]=
		{
			"Extremo_Item_ConcreteFloorPortKit",
			"Extremo_Item_FortificationUpgrade"
		};
		materialType=12;
	};
	class ConcreteFloorPort: AbstractFloor
	{
		staticObject="Extremo_Construction_ConcreteFloorPort_Static";
		previewObject="Extremo_Construction_ConcreteFloorPort_Preview";
		kitMagazine="Extremo_Item_ConcreteFloorPortKit";
		refundObjects[]=
		{
			"Extremo_Item_ConcreteFloorPortKit"
		};
		upgradeObject="Extremo_Construction_ConcreteFloorHatch_Static";
		materialType=12;
	};
	class ConcreteFloorPortSmall: AbstractFloor
	{
		staticObject="Extremo_Construction_ConcreteFloorPortSmall_Static";
		previewObject="Extremo_Construction_ConcreteFloorPortSmall_Preview";
		kitMagazine="Extremo_Item_ConcreteFloorPortSmallKit";
		refundObjects[]=
		{
			"Extremo_Item_ConcreteFloorPortSmallKit"
		};
		materialType=12;
		class SnapPositions
		{
			PortHole01[]={-0.85000002,0,-3.1500001};
			PortHole02[]={0,0.85000002,-3.1500001};
			PortHole03[]={0,-0.85000002,-3.1500001};
			PortHole04[]={0.85000002,0,-3.1500001};
			Wall01[]={0,-2.875,0.25};
			Wall02[]={-2.875,0,0.25};
			Wall03[]={0,2.875,0.25};
			Wall04[]={2.875,0,0.25};
			Floor01[]={0,6,0};
			Floor02[]={6,0,0};
			Floor03[]={0,-6,0};
			Floor04[]={-6,0,0};
			Floor05[]={0,0,3.25};
			Floor06[]={0,0,-3.25};
		};
	};
	class ConcreteGate: AbstractWall
	{
		staticObject="Extremo_Construction_ConcreteGate_Static";
		previewObject="Extremo_Construction_ConcreteGate_Preview";
		kitMagazine="Extremo_Item_ConcreteGateKit";
		refundObjects[]=
		{
			"Extremo_Item_ConcreteGateKit"
		};
		materialType=12;
	};
	class ConcreteLadderHatch: AbstractFloor
	{
		staticObject="Extremo_Construction_ConcreteLadderHatch_Static";
		previewObject="Extremo_Construction_ConcreteLadderHatch_Preview";
		kitMagazine="Extremo_Item_ConcreteLadderHatchKit";
		refundObjects[]=
		{
			"Extremo_Item_ConcreteLadderHatchKit"
		};
		materialType=12;
	};
	class ConcreteStairs: AbstractConstruction
	{
		staticObject="Extremo_Construction_ConcreteStairs_Static";
		previewObject="Extremo_Construction_ConcreteStairs_Preview";
		kitMagazine="Extremo_Item_ConcreteStairsKit";
		refundObjects[]=
		{
			"Extremo_Item_ConcreteStairsKit"
		};
		materialType=12;
		allowDuplicateSnap=1;
		class SnapObjects
		{
			class Extremo_Construction_WoodFloor_Static
			{
				positions[]=
				{
					"ConcreteStairs01"
				};
			};
			class Extremo_Construction_WoodFloorPort_Static
			{
				positions[]=
				{
					"ConcreteStairs01",
					"ConcreteStairs02"
				};
			};
			class Extremo_Construction_ConcreteFloor_Static
			{
				positions[]=
				{
					"ConcreteStairs01"
				};
			};
			class Extremo_Construction_ConcreteFloorPort_Static
			{
				positions[]=
				{
					"ConcreteStairs01",
					"ConcreteStairs02"
				};
			};
		};
	};
	class ConcreteSupport: AbstractSupport
	{
		staticObject="Extremo_Construction_ConcreteSupport_Static";
		previewObject="Extremo_Construction_ConcreteSupport_Preview";
		kitMagazine="Extremo_Item_ConcreteSupportKit";
		refundObjects[]=
		{
			"Extremo_Item_ConcreteSupportKit"
		};
		materialType=12;
	};
	class ConcreteWall: AbstractWall
	{
		staticObject="Extremo_Construction_ConcreteWall_Static";
		previewObject="Extremo_Construction_ConcreteWall_Preview";
		kitMagazine="Extremo_Item_ConcreteWallKit";
		refundObjects[]=
		{
			"Extremo_Item_ConcreteWallKit"
		};
		materialType=12;
	};
	class ConcreteWindow: AbstractWall
	{
		staticObject="Extremo_Construction_ConcreteWindow_Static";
		previewObject="Extremo_Construction_ConcreteWindow_Preview";
		kitMagazine="Extremo_Item_ConcreteWindowKit";
		refundObjects[]=
		{
			"Extremo_Item_ConcreteWindowKit"
		};
		upgradeObject="Extremo_Construction_ConcreteWindowHatch_Static";
		materialType=12;
	};
	class ConcreteWindowHatch: AbstractWall
	{
		staticObject="Extremo_Construction_ConcreteWindowHatch_Static";
		previewObject="Extremo_Construction_ConcreteWindowHatch_Preview";
		refundObjects[]=
		{
			"Extremo_Item_ConcreteWindowKit",
			"Extremo_Item_FortificationUpgrade"
		};
		materialType=12;
	};
	class Flag: AbstractConstruction
	{
		staticObject="Extremo_Construction_Flag_Static";
		previewObject="Extremo_Construction_Flag_Preview";
		kitMagazine="Extremo_Item_Flag";
		requiresTerritory=0;
		refundObjects[]=
		{
			"Extremo_Item_Flag"
		};
	};
	class FloodLight: AbstractConstruction
	{
		staticObject="Extremo_Construction_FloodLight_Static";
		previewObject="Extremo_Construction_FloodLight_Preview";
		kitMagazine="Extremo_Item_FloodLightKit";
		refundObjects[]=
		{
			"Extremo_Item_FloodLightKit"
		};
	};
	class HBarrier5: AbstractConstruction
	{
		staticObject="Extremo_Construction_HBarrier5_Static";
		previewObject="Extremo_Construction_HBarrier5_Preview";
		kitMagazine="Extremo_Item_HBarrier5Kit";
		requiresTerritory=1;
		canBePlacedOnRoad=0;
		refundObjects[]=
		{
			"Extremo_Item_HBarrier5Kit"
		};
		class SnapPositions
		{
			HBarrier5_01[]={-5.69873,-0.00390625,-0.74051398};
			HBarrier5_02[]={5.69873,-0.00390625,-0.74051398};
		};
		class SnapObjects
		{
			class Extremo_Construction_HBarrier5_Static
			{
				positions[]=
				{
					"HBarrier5_01",
					"HBarrier5_02"
				};
			};
		};
	};
	class Laptop: AbstractWall
	{
		staticObject="Extremo_Construction_Laptop_Static";
		previewObject="Extremo_Construction_Laptop_Preview";
		kitMagazine="Extremo_Item_Laptop";
		refundObjects[]=
		{
			"Extremo_Item_Laptop"
		};
	};
	class MetalHedgehog: AbstractConstruction
	{
		staticObject="Extremo_Construction_MetalHedgehog_Static";
		previewObject="Extremo_Construction_MetalHedgehog_Preview";
		kitMagazine="Extremo_Item_MetalHedgehogKit";
		refundObjects[]=
		{
			"Extremo_Item_MetalHedgehogKit"
		};
		requiresTerritory=0;
		canBePlacedOnRoad=1;
	};
	class MetalLadder: AbstractConstruction
	{
		staticObject="Extremo_Construction_MetalLadder_Static";
		previewObject="Extremo_Construction_MetalLadder_Preview";
		kitMagazine="Extremo_Item_MetalLadderKit";
		refundObjects[]=
		{
			"Extremo_Item_MetalLadderKit"
		};
		materialType=11;
		allowDuplicateSnap=1;
		class SnapPositions
		{
			Ladder01[]={0,0,3.5};
		};
		class SnapObjects
		{
			class Extremo_Construction_WoodFloorPortSmall_Static
			{
				positions[]=
				{
					"PortHole01",
					"PortHole02",
					"PortHole03",
					"PortHole04"
				};
			};
			class Extremo_Construction_WoodFloorPortSmall_Reinforced_Static
			{
				positions[]=
				{
					"PortHole01",
					"PortHole02",
					"PortHole03",
					"PortHole04"
				};
			};
			class Extremo_Construction_WoodLadder_Static
			{
				positions[]=
				{
					"Ladder01"
				};
			};
			class Extremo_Construction_ConcreteFloorPortSmall_Static
			{
				positions[]=
				{
					"PortHole01",
					"PortHole02",
					"PortHole03",
					"PortHole04"
				};
			};
			class Extremo_Construction_MetalLadder_Static
			{
				positions[]=
				{
					"Ladder01"
				};
			};
			class Extremo_Construction_MetalLadderDouble_Static
			{
				positions[]=
				{
					"Ladder01"
				};
			};
		};
	};
	class MetalLadderDouble: AbstractConstruction
	{
		staticObject="Extremo_Construction_MetalLadderDouble_Static";
		previewObject="Extremo_Construction_MetalLadderDouble_Preview";
		kitMagazine="Extremo_Item_MetalLadderDoubleKit";
		refundObjects[]=
		{
			"Extremo_Item_MetalLadderDoubleKit"
		};
		materialType=11;
		allowDuplicateSnap=1;
		class SnapPositions
		{
			Ladder01[]={0,0,6.5};
		};
		class SnapObjects
		{
			class Extremo_Construction_WoodFloorPortSmall_Static
			{
				positions[]=
				{
					"PortHole01",
					"PortHole02",
					"PortHole03",
					"PortHole04"
				};
			};
			class Extremo_Construction_WoodFloorPortSmall_Reinforced_Static
			{
				positions[]=
				{
					"PortHole01",
					"PortHole02",
					"PortHole03",
					"PortHole04"
				};
			};
			class Extremo_Construction_WoodLadder_Static
			{
				positions[]=
				{
					"Ladder01"
				};
			};
			class Extremo_Construction_ConcreteFloorPortSmall_Static
			{
				positions[]=
				{
					"PortHole01",
					"PortHole02",
					"PortHole03",
					"PortHole04"
				};
			};
			class Extremo_Construction_MetalLadder_Static
			{
				positions[]=
				{
					"Ladder01"
				};
			};
			class Extremo_Construction_MetalLadderDouble_Static
			{
				positions[]=
				{
					"Ladder01"
				};
			};
		};
	};
	class OldChest: AbstractConstruction
	{
		staticObject="Extremo_Container_OldChest";
		previewObject="Extremo_Construction_OldChest_Preview";
		kitMagazine="Extremo_Item_OldChestKit";
		requiresTerritory=0;
		canBePlacedOnRoad=0;
		refundObjects[]=
		{
			"Extremo_Item_OldChestKit"
		};
	};
	class PortableGenerator: AbstractConstruction
	{
		staticObject="Extremo_Construction_PortableGenerator_Static";
		previewObject="Extremo_Construction_PortableGenerator_Preview";
		kitMagazine="Extremo_Item_PortableGeneratorKit";
		refundObjects[]=
		{
			"Extremo_Item_PortableGeneratorKit"
		};
	};
	class RazorWire: AbstractConstruction
	{
		staticObject="Extremo_Construction_RazorWire_Static";
		previewObject="Extremo_Construction_RazorWire_Preview";
		kitMagazine="Extremo_Item_RazorWireKit";
		requiresTerritory=0;
		canBePlacedOnRoad=1;
		refundObjects[]=
		{
			"Extremo_Item_RazorWireKit"
		};
	};
	class Safe: AbstractConstruction
	{
		staticObject="Extremo_Container_Safe";
		previewObject="Extremo_Construction_Safe_Preview";
		kitMagazine="Extremo_Item_SafeKit";
		requiresTerritory=0;
		refundObjects[]=
		{
			"Extremo_Item_SafeKit"
		};
	};
	class SafeSmall: AbstractConstruction
	{
		staticObject="Extremo_Container_Safe_Small";
		previewObject="Extremo_Construction_Safe_Small_Preview";
		kitMagazine="Extremo_Item_SafeSmallKit";
		requiresTerritory=0;
		refundObjects[]=
		{
			"Extremo_Item_SafeSmallKit"
		};
	};
	class SandBags: AbstractConstruction
	{
		staticObject="Extremo_Construction_SandBags_Long_Static";
		previewObject="Extremo_Construction_SandBags_Long_Preview";
		kitMagazine="Extremo_Item_SandBagsKit_Long";
		requiresTerritory=0;
		canBePlacedOnRoad=1;
		refundObjects[]=
		{
			"Extremo_Item_SandBagsKit_Long"
		};
		class SnapPositions
		{
			SandBags01[]={-3,0,-0.417873};
			SandBags02[]={3,0,-0.417873};
			SandbagCorner03[]={2,-0.27978501,-0.419312};
			SandbagCorner04[]={-1.94995,-0.37011701,-0.419312};
		};
		class SnapObjects
		{
			class Extremo_Construction_SandBags_Long_Static
			{
				positions[]=
				{
					"SandBags01",
					"SandBags02"
				};
			};
			class Extremo_Construction_SandBags_Corner_Static
			{
				positions[]=
				{
					"SandBags03",
					"SandBags04"
				};
			};
		};
	};
	class SandbagsCorner: AbstractConstruction
	{
		staticObject="Extremo_Construction_SandBags_Corner_Static";
		previewObject="Extremo_Construction_SandBags_Corner_Preview";
		kitMagazine="Extremo_Item_SandBagsKit_Corner";
		requiresTerritory=0;
		canBePlacedOnRoad=1;
		refundObjects[]=
		{
			"Extremo_Item_SandBagsKit_Corner"
		};
		class SnapPositions
		{
			SandbagCorner01[]={0.139893,-1.02979,-0.42109501};
			SandbagCorner02[]={-1.01001,-0.12988301,-0.42109501};
			SandBags03[]={0.389893,-1.93994,-0.42109501};
			SandBags04[]={-2.11011,0.27002001,-0.42109501};
		};
		class SnapObjects
		{
			class Extremo_Construction_SandBags_Corner_Static
			{
				positions[]=
				{
					"SandbagCorner01",
					"SandbagCorner02"
				};
			};
			class Extremo_Construction_SandBags_Long_Static
			{
				positions[]=
				{
					"SandbagCorner03",
					"SandbagCorner04"
				};
			};
		};
	};
	class StorageCrate: AbstractConstruction
	{
		staticObject="Extremo_Container_StorageCrate";
		previewObject="Extremo_Construction_StorageCrate_Preview";
		kitMagazine="Extremo_Item_StorageCrateKit";
		requiresTerritory=0;
		canBePlacedOnRoad=0;
		refundObjects[]=
		{
			"Extremo_Item_StorageCrateKit"
		};
	};
	class SupplyBox: AbstractConstruction
	{
		staticObject="Extremo_Container_SupplyBox";
		previewObject="Extremo_Construction_SupplyBox_Preview";
		kitMagazine="Extremo_Item_SupplyBoxKit";
		requiresTerritory=0;
		refundObjects[]=
		{
			"Extremo_Item_SupplyBoxKit"
		};
	};
	class WaterBarrel: AbstractConstruction
	{
		staticObject="Extremo_Construction_WaterBarrel_Static";
		previewObject="Extremo_Construction_WaterBarrel_Preview";
		kitMagazine="Extremo_Item_WaterBarrelKit";
		requiresTerritory=1;
		canBePlacedOnRoad=0;
		refundObjects[]=
		{
			"Extremo_Item_WaterBarrelKit"
		};
	};
	class WireFence: AbstractConstruction
	{
		staticObject="Extremo_Construction_WiredFence_Static";
		previewObject="Extremo_Construction_WiredFence_Preview";
		kitMagazine="Extremo_Item_WireFenceKit";
		requiresTerritory=1;
		canBePlacedOnRoad=0;
		refundObjects[]=
		{
			"Extremo_Item_WireFenceKit"
		};
		class SnapPositions
		{
			Fence01[]={-7.875,0,-1.789415};
			Fence02[]={7.875,0,-1.789415};
		};
		class SnapObjects
		{
			class Extremo_Construction_WiredFence_Static
			{
				positions[]=
				{
					"Fence01",
					"Fence02"
				};
			};
		};
	};
	class WoodDoor: AbstractWall
	{
		staticObject="Extremo_Construction_WoodDoor_Static";
		previewObject="Extremo_Construction_WoodDoor_Preview";
		kitMagazine="Extremo_Item_WoodDoorKit";
		upgradeObject="Extremo_Construction_WoodDoor_Reinforced_Static";
		refundObjects[]=
		{
			"Extremo_Item_WoodDoorKit"
		};
		materialType=10;
	};
	class WoodDoorReinforced: AbstractWall
	{
		staticObject="Extremo_Construction_WoodDoor_Reinforced_Static";
		previewObject="Extremo_Construction_WoodDoor_Reinforced_Preview";
		refundObjects[]=
		{
			"Extremo_Item_WoodDoorKit",
			"Extremo_Item_FortificationUpgrade"
		};
		materialType=11;
	};
	class WoodDoorway: AbstractWall
	{
		staticObject="Extremo_Construction_WoodDoorway_Static";
		previewObject="Extremo_Construction_WoodDoorway_Preview";
		kitMagazine="Extremo_Item_WoodDoorwayKit";
		upgradeObject="Extremo_Construction_WoodDoorway_Reinforced_Static";
		refundObjects[]=
		{
			"Extremo_Item_WoodDoorwayKit"
		};
		materialType=10;
	};
	class WoodDoorwayReinforced: AbstractWall
	{
		staticObject="Extremo_Construction_WoodDoorway_Reinforced_Static";
		previewObject="Extremo_Construction_WoodDoorway_Reinforced_Preview";
		refundObjects[]=
		{
			"Extremo_Item_WoodDoorwayKit",
			"Extremo_Item_FortificationUpgrade"
		};
		materialType=11;
	};
	class WoodDrawBridge: AbstractWall
	{
		staticObject="Extremo_Construction_WoodDrawBridge_Static";
		previewObject="Extremo_Construction_WoodDrawBridge_Preview";
		kitMagazine="Extremo_Item_WoodDrawBridgeKit";
		upgradeObject="Extremo_Construction_WoodDrawBridge_Reinforced_Static";
		refundObjects[]=
		{
			"Extremo_Item_WoodDrawBridgeKit"
		};
		materialType=10;
		class SnapPositions
		{
			Floor01[]={0,2.875,3};
			Floor02[]={0,-2.875,3};
			Wall01[]={-6,0,0};
			Wall02[]={-2.875,-2.875,0};
			Wall03[]={2.875,-2.875,0};
			Wall04[]={6,0,0};
			Wall05[]={2.875,3.1300001,0};
			Wall06[]={-2.875,3.1300001,0};
			Wall07[]={0,0,3};
			Wall08[]={0,0,-3};
		};
	};
	class WoodDrawBridgeReinforced: AbstractWall
	{
		staticObject="Extremo_Construction_WoodDrawBridge_Reinforced_Static";
		previewObject="Extremo_Construction_WoodDrawBridge_Reinforced_Preview";
		refundObjects[]=
		{
			"Extremo_Item_WoodDrawBridgeKit",
			"Extremo_Item_FortificationUpgrade"
		};
		materialType=11;
		class SnapPositions
		{
			Floor01[]={0,2.875,3};
			Floor02[]={0,-2.875,3};
			Wall01[]={-6,0,0};
			Wall02[]={-2.875,-2.875,0};
			Wall03[]={2.875,-2.875,0};
			Wall04[]={6,0,0};
			Wall05[]={2.875,3.1300001,0};
			Wall06[]={-2.875,3.1300001,0};
			Wall07[]={0,0,3};
			Wall08[]={0,0,-3};
		};
	};
	class WoodFloor: AbstractFloor
	{
		staticObject="Extremo_Construction_WoodFloor_Static";
		previewObject="Extremo_Construction_WoodFloor_Preview";
		kitMagazine="Extremo_Item_WoodFloorKit";
		upgradeObject="Extremo_Construction_WoodFloor_Reinforced_Static";
		refundObjects[]=
		{
			"Extremo_Item_WoodFloorKit"
		};
		materialType=10;
	};
	class WoodFloorPort: AbstractFloor
	{
		staticObject="Extremo_Construction_WoodFloorPort_Static";
		previewObject="Extremo_Construction_WoodFloorPort_Preview";
		kitMagazine="Extremo_Item_WoodFloorPortKit";
		refundObjects[]=
		{
			"Extremo_Item_WoodFloorPortKit"
		};
		materialType=10;
	};
	class WoodFloorPortSmall: AbstractFloor
	{
		staticObject="Extremo_Construction_WoodFloorPortSmall_Static";
		previewObject="Extremo_Construction_WoodFloorPortSmall_Preview";
		kitMagazine="Extremo_Item_WoodFloorPortSmallKit";
		upgradeObject="Extremo_Construction_WoodFloorPortSmall_Reinforced_Static";
		refundObjects[]=
		{
			"Extremo_Item_WoodFloorPortSmallKit"
		};
		materialType=10;
		class SnapPositions
		{
			PortHole01[]={-0.85000002,0,-3.1500001};
			PortHole02[]={0,0.85000002,-3.1500001};
			PortHole03[]={0,-0.85000002,-3.1500001};
			PortHole04[]={0.85000002,0,-3.1500001};
			Wall01[]={0,-2.875,0.25};
			Wall02[]={-2.875,0,0.25};
			Wall03[]={0,2.875,0.25};
			Wall04[]={2.875,0,0.25};
			Floor01[]={0,6,0};
			Floor02[]={6,0,0};
			Floor03[]={0,-6,0};
			Floor04[]={-6,0,0};
			Floor05[]={0,0,3.25};
			Floor06[]={0,0,-3.25};
		};
	};
	class WoodFloorPortSmallReinforced: AbstractFloor
	{
		staticObject="Extremo_Construction_WoodFloorPortSmall_Reinforced_Static";
		previewObject="Extremo_Construction_WoodFloorPortSmall_Reinforced_Preview";
		refundObjects[]=
		{
			"Extremo_Item_WoodFloorPortSmallKit",
			"Extremo_Item_FortificationUpgrade"
		};
		materialType=11;
		class SnapPositions
		{
			PortHole01[]={-0.85000002,0,-3.1500001};
			PortHole02[]={0,0.85000002,-3.1500001};
			PortHole03[]={0,-0.85000002,-3.1500001};
			PortHole04[]={0.85000002,0,-3.1500001};
			Wall01[]={0,-2.875,0.25};
			Wall02[]={-2.875,0,0.25};
			Wall03[]={0,2.875,0.25};
			Wall04[]={2.875,0,0.25};
			Floor01[]={0,6,0};
			Floor02[]={6,0,0};
			Floor03[]={0,-6,0};
			Floor04[]={-6,0,0};
			Floor05[]={0,0,3.25};
			Floor06[]={0,0,-3.25};
		};
	};
	class WoodFloorReinforced: AbstractFloor
	{
		staticObject="Extremo_Construction_WoodFloor_Reinforced_Static";
		previewObject="Extremo_Construction_WoodFloor_Reinforced_Preview";
		refundObjects[]=
		{
			"Extremo_Item_WoodFloorKit",
			"Extremo_Item_FortificationUpgrade"
		};
		materialType=11;
	};
	class WoodGate: AbstractWall
	{
		staticObject="Extremo_Construction_WoodGate_Static";
		previewObject="Extremo_Construction_WoodGate_Preview";
		kitMagazine="Extremo_Item_WoodGateKit";
		upgradeObject="Extremo_Construction_WoodGate_Reinforced_Static";
		refundObjects[]=
		{
			"Extremo_Item_WoodGateKit"
		};
		materialType=10;
	};
	class WoodGateReinforced: AbstractWall
	{
		staticObject="Extremo_Construction_WoodGate_Reinforced_Static";
		previewObject="Extremo_Construction_WoodGate_Reinforced_Preview";
		refundObjects[]=
		{
			"Extremo_Item_WoodGateKit",
			"Extremo_Item_FortificationUpgrade"
		};
		materialType=11;
	};
	class WoodLadder: AbstractConstruction
	{
		staticObject="Extremo_Construction_WoodLadder_Static";
		previewObject="Extremo_Construction_WoodLadder_Preview";
		kitMagazine="Extremo_Item_WoodLadderKit";
		refundObjects[]=
		{
			"Extremo_Item_WoodLadderKit"
		};
		materialType=10;
		allowDuplicateSnap=1;
		class SnapPositions
		{
			Ladder01[]={0,0,3.5};
		};
		class SnapObjects
		{
			class Extremo_Construction_WoodFloorPortSmall_Static
			{
				positions[]=
				{
					"PortHole01",
					"PortHole02",
					"PortHole03",
					"PortHole04"
				};
			};
			class Extremo_Construction_WoodFloorPortSmall_Reinforced_Static
			{
				positions[]=
				{
					"PortHole01",
					"PortHole02",
					"PortHole03",
					"PortHole04"
				};
			};
			class Extremo_Construction_WoodLadder_Static
			{
				positions[]=
				{
					"Ladder01"
				};
			};
		};
	};
	class WoodLadderHatch: AbstractFloor
	{
		staticObject="Extremo_Construction_WoodLadderHatch_Static";
		previewObject="Extremo_Construction_WoodLadderHatch_Preview";
		kitMagazine="Extremo_Item_WoodLadderHatchKit";
		upgradeObject="Extremo_Construction_WoodLadderHatch_Reinforced_Static";
		refundObjects[]=
		{
			"Extremo_Item_WoodLadderHatchKit"
		};
		materialType=10;
	};
	class WoodLadderHatchReinforced: AbstractFloor
	{
		staticObject="Extremo_Construction_WoodLadderHatch_Reinforced_Static";
		previewObject="Extremo_Construction_WoodLadderHatch_Reinforced_Preview";
		refundObjects[]=
		{
			"Extremo_Item_WoodLadderHatchKit",
			"Extremo_Item_FortificationUpgrade"
		};
		materialType=11;
	};
	class WoodStairs: AbstractConstruction
	{
		staticObject="Extremo_Construction_WoodStairs_Static";
		previewObject="Extremo_Construction_WoodStairs_Preview";
		kitMagazine="Extremo_Item_WoodStairsKit";
		refundObjects[]=
		{
			"Extremo_Item_WoodStairsKit"
		};
		materialType=10;
		allowDuplicateSnap=1;
		class SnapObjects
		{
			class Extremo_Construction_WoodFloor_Static
			{
				positions[]=
				{
					"Stairs01"
				};
			};
			class Extremo_Construction_WoodFloorPort_Static
			{
				positions[]=
				{
					"Stairs01",
					"Stairs02"
				};
			};
			class Extremo_Construction_ConcreteFloor_Static
			{
				positions[]=
				{
					"Stairs01"
				};
			};
			class Extremo_Construction_ConcreteFloorPort_Static
			{
				positions[]=
				{
					"Stairs01",
					"Stairs02"
				};
			};
		};
	};
	class WoodSupport: AbstractSupport
	{
		staticObject="Extremo_Construction_WoodSupport_Static";
		previewObject="Extremo_Construction_WoodSupport_Preview";
		kitMagazine="Extremo_Item_WoodSupportKit";
		refundObjects[]=
		{
			"Extremo_Item_WoodSupportKit"
		};
		materialType=10;
	};
	class WoodWall: AbstractWall
	{
		staticObject="Extremo_Construction_WoodWall_Static";
		previewObject="Extremo_Construction_WoodWall_Preview";
		kitMagazine="Extremo_Item_WoodWallKit";
		upgradeObject="Extremo_Construction_WoodWall_Reinforced_Static";
		refundObjects[]=
		{
			"Extremo_Item_WoodWallKit"
		};
		materialType=10;
	};
	class WoodWallHalf: AbstractWall
	{
		staticObject="Extremo_Construction_WoodWallHalf_Static";
		previewObject="Extremo_Construction_WoodWallHalf_Preview";
		kitMagazine="Extremo_Item_WoodWallHalfKit";
		upgradeObject="Extremo_Construction_WoodWallHalf_Reinforced_Static";
		refundObjects[]=
		{
			"Extremo_Item_WoodWallHalfKit"
		};
		materialType=10;
	};
	class WoodWallHalfReinforced: AbstractWall
	{
		staticObject="Extremo_Construction_WoodWallHalf_Reinforced_Static";
		previewObject="Extremo_Construction_WoodWallHalf_Reinforced_Preview";
		refundObjects[]=
		{
			"Extremo_Item_WoodWallHalfKit",
			"Extremo_Item_FortificationUpgrade"
		};
		materialType=11;
	};
	class WoodWallReinforced: AbstractWall
	{
		staticObject="Extremo_Construction_WoodWall_Reinforced_Static";
		previewObject="Extremo_Construction_WoodWall_Reinforced_Preview";
		refundObjects[]=
		{
			"Extremo_Item_WoodWallKit",
			"Extremo_Item_FortificationUpgrade"
		};
		materialType=11;
	};
	class WoodWindow: AbstractWall
	{
		staticObject="Extremo_Construction_WoodWindow_Static";
		previewObject="Extremo_Construction_WoodWindow_Preview";
		kitMagazine="Extremo_Item_WoodWindowKit";
		upgradeObject="Extremo_Construction_WoodWindow_Reinforced_Static";
		refundObjects[]=
		{
			"Extremo_Item_WoodWindowKit"
		};
		materialType=10;
	};
	class WoodWindowReinforced: AbstractWall
	{
		staticObject="Extremo_Construction_WoodWindow_Reinforced_Static";
		previewObject="Extremo_Construction_WoodWindow_Reinforced_Preview";
		refundObjects[]=
		{
			"Extremo_Item_WoodWindowKit",
			"Extremo_Item_FortificationUpgrade"
		};
		materialType=11;
	};
	class WorkBench: AbstractConstruction
	{
		staticObject="Extremo_Construction_WorkBench_Static";
		previewObject="Extremo_Construction_WorkBench_Preview";
		kitMagazine="Extremo_Item_WorkBenchKit";
		refundObjects[]=
		{
			"Extremo_Item_WorkBenchKit"
		};
		requiresTerritory=0;
		canBePlacedOnRoad=0;
	};
};