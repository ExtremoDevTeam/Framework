/*
	## EXTREMO Survival
	## Nikko & Happyfeet
	## https://community.bistudio.com/wiki/Arma_3:_Characters_And_Gear_Encoding_Guide
	## https://community.bistudio.com/wiki/CfgVehicles_Config_Reference
*/

class Extremo_Construction_BaseCamera_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="Extremo_Assets\model\Extremo_Construction_BaseCamera.p3d";
	displayName="Base Camera (Preview)";
	class AnimationSources
	{
		class ExtremoCctvPitch
		{
			source="user";
			initPhase=0;
			animPeriod=1;
			sound="";
		};
		class ExtremoCctvYaw
		{
			source="user";
			initPhase=0;
			animPeriod=1;
			sound="";
		};
	};
};
class Extremo_Construction_BaseCamera_Static: Extremo_Construction_Abstract_Static
{
	scope=2;
	model="Extremo_Assets\model\Extremo_Construction_BaseCamera.p3d";
	displayName="Base Camera";
	ExtremoRequiresSimulation=1;
	class AnimationSources
	{
		class ExtremoCctvPitch
		{
			source="user";
			initPhase=0;
			animPeriod=1;
			sound="";
		};
		class ExtremoCctvYaw
		{
			source="user";
			initPhase=0;
			animPeriod=1;
			sound="";
		};
	};
};
class Extremo_Construction_CamoTent_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="\a3\structures_f\Civ\Camping\TentA_F.p3d";
	displayName="Camo Tent";
	hiddenSelections[]=
	{
		"Component01"
	};
	hiddenSelectionsTextures[]=
	{
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
	};
};
class Extremo_Construction_CampFire_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="\a3\structures_f\Civ\Camping\Campfire_F.p3d";
	displayName="Camp Fire";
	hiddenSelections[]=
	{
		"Component01"
	};
	hiddenSelectionsTextures[]=
	{
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
	};
};
class Extremo_Construction_CampFire_Static: Extremo_Construction_Abstract_Static
{
	scope=2;
	model="\a3\structures_f\Civ\Camping\Campfire_F.p3d";
	displayName="Camp Fire";
	simulation="fire";
	ExtremoRequiresSimulation=1;
	class Effects: SmallFire
	{
		class Light1
		{
			simulation="light";
			type="SmallFireLight";
		};
		class sound
		{
			simulation="sound";
			type="Fire_camp";
		};
		class Smoke1
		{
			simulation="particles";
			type="SmallFireS";
		};
		class Fire1: Smoke1
		{
			simulation="particles";
			type="SmallFireF";
		};
		class Refract1
		{
			simulation="particles";
			type="SmallFireFRefract";
		};
	};
	class UserActions
	{
		class lightup
		{
			displayNameDefault="Light fire";
			displayName="Light fire";
			position="ohniste";
			radius=3;
			onlyForPlayer=0;
			condition="!(inflamed this)";
			statement="this call Extremo_fnc_object_fire_inflame";
		};
		class putout
		{
			displayNameDefault="Put out fire";
			displayName="Put out fire";
			position="ohniste";
			radius=3;
			onlyForPlayer=0;
			condition="(inflamed this)";
			statement="this call Extremo_fnc_object_fire_extinguish";
		};
	};
	actionBegin1="lightup";
	actionEnd1="lightup";
};
class Extremo_Construction_ConcreteDoorway_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_ConcreteDoorway_Preview.p3d";
	displayName="Concrete Doorway";
	hiddenSelections[]=
	{
		"Component01"
	};
	hiddenSelectionsTextures[]=
	{
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
	};
};
class Extremo_Construction_ConcreteDoorway_Static: Extremo_Construction_Abstract_Static
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_ConcreteDoorway.p3d";
	displayName="Concrete Doorway";
	armor=20000;
	hiddenSelections[]=
	{
		"Concrete"
	};
	hiddenSelectionsTextures[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_co.paa"
	};
	hiddenSelectionMaterials[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete.rvmat"
	};
	damageLevel1Textures[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage01_co.paa"
	};
	damageLevel1Materials[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage01.rvmat"
	};
	damageLevel2Textures[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage02_co.paa"
	};
	damageLevel2Materials[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage02.rvmat"
	};
};
class Extremo_Construction_ConcreteDoor_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_ConcreteDoor_Preview.p3d";
	displayName="Concrete Door";
	hiddenSelections[]=
	{
		"Component01",
		"Component02"
	};
	hiddenSelectionsTextures[]=
	{
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)",
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
	};
};
class Extremo_Construction_ConcreteDoor_Static: Extremo_Construction_Abstract_Static
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_ConcreteDoor.p3d";
	displayName="Concrete Door";
	ExtremoIsDoor=1;
	ExtremoIsLockable=1;
	ExtremoRequiresSimulation=1;
	armor=20000;
	hiddenSelections[]=
	{
		"Concrete"
	};
	hiddenSelectionsTextures[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_co.paa"
	};
	hiddenSelectionMaterials[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete.rvmat"
	};
	damageLevel1Textures[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage01_co.paa"
	};
	damageLevel1Materials[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage01.rvmat"
	};
	damageLevel2Textures[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage02_co.paa"
	};
	damageLevel2Materials[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage02.rvmat"
	};
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
	class UserActions
	{
		class OpenDoor
		{
			displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
			displayName="Open Door";
			position="DoorTrigger";
			priority=6;
			radius=3;
			onlyForPlayer="true";
			condition="this call Extremo_fnc_object_construction_openShow";
			statement="this animate ['DoorRotation', 1]";
		};
		class CloseDoor: OpenDoor
		{
			displayName="Close Door";
			condition="this animationPhase 'DoorRotation' >= 0.5";
			statement="this animate ['DoorRotation', 0]";
		};
	};
	actionBegin1="OpenDoor";
	actionEnd1="OpenDoor";
	numberOfDoors=1;
};
class Extremo_Construction_ConcreteDrawBridge_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_ConcreteDrawBridge_Preview.p3d";
	displayName="Concrete DrawBridge";
	hiddenSelections[]=
	{
		"Component01"
	};
	hiddenSelectionsTextures[]=
	{
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
	};
};
class Extremo_Construction_Abstract_DrawBridge: Extremo_Construction_Abstract_Static
{
	scope=1;
	author="Nikko Renolds";
};
class Extremo_Construction_ConcreteDrawBridge_Static: Extremo_Construction_Abstract_DrawBridge
{
	scope=2;
	model="Extremo_Assets\model\Extremo_Construction_ConcreteDrawBridge.p3d";
	displayName="Concrete DrawBridge";
	ExtremoIsDoor=1;
	ExtremoIsLockable=1;
	ExtremoRequiresSimulation=1;
	armor=20000;
	hiddenSelections[]=
	{
		"Concrete",
		"Gate"
	};
	hiddenSelectionsTextures[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_co.paa",
		"Extremo_Assets\model\Extremo_MetalGate_co.paa"
	};
	hiddenSelectionMaterials[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete.rvmat",
		"Extremo_Assets\model\Extremo_MetalGate.rvmat"
	};
	damageLevel1Textures[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage01_co.paa",
		"Extremo_Assets\model\Extremo_MetalGate_Damage01_co.paa"
	};
	damageLevel1Materials[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage01.rvmat",
		"Extremo_Assets\model\Extremo_MetalGate_Damage01.rvmat"
	};
	damageLevel2Textures[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage02_co.paa",
		"Extremo_Assets\model\Extremo_MetalGate_Damage02_co.paa"
	};
	damageLevel2Materials[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage02.rvmat",
		"Extremo_Assets\model\Extremo_MetalGate_Damage02.rvmat"
	};
	class AnimationSources
	{
		class DrawBridge_Source
		{
			source="user";
			initPhase=2;
			animPeriod=2;
			sound="MetalBigDoorsSound";
		};
	};
};
class Extremo_Construction_ConcreteFloorHatch_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_ConcreteFloorPort_Preview.p3d";
	displayName="Concrete Floor Hatch";
	hiddenSelections[]=
	{
		"Component01"
	};
	hiddenSelectionsTextures[]=
	{
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)",
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
	};
};
class Extremo_Construction_ConcreteFloorHatch_Static: Extremo_Construction_Abstract_Static
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_ConcreteFloorHatch.p3d";
	displayName="Concrete Floor Hatch";
	ExtremoIsDoor=1;
	ExtremoIsLockable=1;
	ExtremoRequiresSimulation=1;
	armor=20000;
	hiddenSelections[]=
	{
		"Concrete"
	};
	hiddenSelectionsTextures[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_co.paa"
	};
	hiddenSelectionMaterials[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete.rvmat"
	};
	damageLevel1Textures[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage01_co.paa"
	};
	damageLevel1Materials[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage01.rvmat"
	};
	damageLevel2Textures[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage02_co.paa"
	};
	damageLevel2Materials[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage02.rvmat"
	};
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
	class UserActions
	{
		class OpenDoor
		{
			displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
			displayName="Open Door";
			position="DoorTrigger";
			priority=0.40000001;
			radius=3;
			onlyForPlayer="true";
			condition="this call Extremo_fnc_object_construction_openShow";
			statement="this animate ['DoorRotation', 1]";
		};
		class CloseDoor: OpenDoor
		{
			displayName="Close Door";
			priority=0.2;
			condition="this animationPhase 'DoorRotation' >= 0.5";
			statement="this animate ['DoorRotation', 0]";
		};
	};
	actionBegin1="OpenDoor";
	actionEnd1="OpenDoor";
	numberOfDoors=1;
};
class Extremo_Construction_ConcreteFloorPortSmall_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_ConcreteFloorPortSmall_Preview.p3d";
	displayName="Concrete Floor Port (Small)";
	hiddenSelections[]=
	{
		"Component01"
	};
	hiddenSelectionsTextures[]=
	{
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
	};
};
class Extremo_Construction_ConcreteFloorPortSmall_Static: Extremo_Construction_Abstract_Static
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_ConcreteFloorPortSmall.p3d";
	displayName="Concrete Floor Port (Small)";
	armor=20000;
	hiddenSelections[]=
	{
		"Concrete"
	};
	hiddenSelectionsTextures[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_co.paa"
	};
	hiddenSelectionMaterials[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete.rvmat"
	};
	damageLevel1Textures[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage01_co.paa"
	};
	damageLevel1Materials[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage01.rvmat"
	};
	damageLevel2Textures[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage02_co.paa"
	};
	damageLevel2Materials[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage02.rvmat"
	};
};
class Extremo_Construction_ConcreteFloorPort_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_ConcreteFloorPort_Preview.p3d";
	displayName="Concrete Floor Port";
	hiddenSelections[]=
	{
		"Component01"
	};
	hiddenSelectionsTextures[]=
	{
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
	};
};
class Extremo_Construction_ConcreteFloorPort_Static: Extremo_Construction_Abstract_Static
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_ConcreteFloorPort.p3d";
	displayName="Concrete Floor Port";
	armor=20000;
	hiddenSelections[]=
	{
		"Concrete"
	};
	hiddenSelectionsTextures[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_co.paa"
	};
	hiddenSelectionMaterials[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete.rvmat"
	};
	damageLevel1Textures[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage01_co.paa"
	};
	damageLevel1Materials[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage01.rvmat"
	};
	damageLevel2Textures[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage02_co.paa"
	};
	damageLevel2Materials[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage02.rvmat"
	};
};
class Extremo_Construction_ConcreteFloor_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_ConcreteFloor_Preview.p3d";
	displayName="Concrete Floor";
	hiddenSelections[]=
	{
		"Component01"
	};
	hiddenSelectionsTextures[]=
	{
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
	};
};
class Extremo_Construction_ConcreteFloor_Static: Extremo_Construction_Abstract_Static
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_ConcreteFloor.p3d";
	displayName="Concrete Floor";
	armor=20000;
	hiddenSelections[]=
	{
		"Concrete"
	};
	hiddenSelectionsTextures[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_co.paa"
	};
	hiddenSelectionMaterials[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete.rvmat"
	};
	damageLevel1Textures[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage01_co.paa"
	};
	damageLevel1Materials[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage01.rvmat"
	};
	damageLevel2Textures[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage02_co.paa"
	};
	damageLevel2Materials[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage02.rvmat"
	};
};
class Extremo_Construction_ConcreteGate_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_ConcreteGate_Preview.p3d";
	displayName="Concrete Gate";
	hiddenSelections[]=
	{
		"Component01",
		"Component02",
		"Component03",
		"Component04"
	};
	hiddenSelectionsTextures[]=
	{
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)",
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)",
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)",
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
	};
};
class Extremo_Construction_ConcreteGate_Static: Extremo_Construction_Abstract_Static
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_ConcreteGate.p3d";
	displayName="Concrete Gate";
	ExtremoIsDoor=1;
	ExtremoIsLockable=1;
	ExtremoRequiresSimulation=1;
	armor=20000;
	hiddenSelections[]=
	{
		"Concrete",
		"Gate"
	};
	hiddenSelectionsTextures[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_co.paa",
		"Extremo_Assets\model\Extremo_MetalGate_co.paa"
	};
	hiddenSelectionMaterials[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete.rvmat",
		"Extremo_Assets\model\Extremo_MetalGate.rvmat"
	};
	damageLevel1Textures[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage01_co.paa",
		"Extremo_Assets\model\Extremo_MetalGate_Damage01_co.paa"
	};
	damageLevel1Materials[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage01.rvmat",
		"Extremo_Assets\model\Extremo_MetalGate_Damage01.rvmat"
	};
	damageLevel2Textures[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage02_co.paa",
		"Extremo_Assets\model\Extremo_MetalGate_Damage02_co.paa"
	};
	damageLevel2Materials[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage02.rvmat",
		"Extremo_Assets\model\Extremo_MetalGate_Damage02.rvmat"
	};
	class AnimationSources
	{
		class DoorAnimationSource
		{
			source="user";
			initPhase=0;
			animPeriod=2;
			sound="MetalBigDoorsSound";
		};
	};
	class UserActions
	{
		class OpenDoor
		{
			displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
			displayName="Open Door";
			position="DoorHandle";
			priority=0.40000001;
			radius=3.5;
			onlyForPlayer="true";
			condition="this call Extremo_fnc_object_construction_openGateShow";
			statement="this animate ['DoorRotationLeft', 1]; this animate ['DoorRotationRight', 1];";
		};
		class CloseDoor: OpenDoor
		{
			displayName="Close Door";
			priority=0.2;
			condition="this animationPhase 'DoorRotationLeft' >= 0.5";
			statement="this animate ['DoorRotationLeft', 0]; this animate ['DoorRotationRight', 0]";
		};
	};
	actionBegin1="OpenDoor";
	actionEnd1="OpenDoor";
	numberOfDoors=1;
};
class Extremo_Construction_ConcreteLadderHatch_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_ConcreteLadderHatch_Preview.p3d";
	displayName="Concrete Ladder Hatch";
	hiddenSelections[]=
	{
		"Component01"
	};
	hiddenSelectionsTextures[]=
	{
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
	};
};
class Extremo_Construction_ConcreteLadderHatch_Static: Extremo_Construction_Abstract_Static
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_ConcreteLadderHatch.p3d";
	displayName="Concrete Ladder Hatch";
	ExtremoIsDoor=1;
	ExtremoIsLockable=1;
	ExtremoRequiresSimulation=1;
	armor=20000;
	hiddenSelections[]=
	{
		"Concrete"
	};
	hiddenSelectionsTextures[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_co.paa"
	};
	hiddenSelectionMaterials[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete.rvmat"
	};
	damageLevel1Textures[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage01_co.paa"
	};
	damageLevel1Materials[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage01.rvmat"
	};
	damageLevel2Textures[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage02_co.paa"
	};
	damageLevel2Materials[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage02.rvmat"
	};
	class AnimationSources
	{
		class TrapDoor_Source
		{
			source="user";
			initPhase=0;
			animPeriod=2;
			sound="MetalDoorsSound";
		};
	};
	ladders[]=
	{
		
		{
			"ladder_start",
			"ladder_end",
			2.5,
			"ladder_action"
		}
	};
	class UserActions
	{
		class OpenTrap
		{
			displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
			displayName="Open Trapdoor";
			position="DoorHandle";
			priority=6;
			radius=3;
			onlyForPlayer=1;
			condition="this call Extremo_fnc_object_construction_openHatchShow";
			statement="this animateSource ['TrapDoor_Source', 1.75];";
		};
		class CloseTrap: OpenTrap
		{
			displayName="Close Trapdoor";
			condition="this call Extremo_fnc_object_construction_closeHatchShow";
			statement="this animateSource ['TrapDoor_Source', 0];";
		};
	};
};
class Extremo_Construction_ConcreteStairs_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_ConcreteStairs_Preview.p3d";
	displayName="Concrete Stairs";
	hiddenSelections[]=
	{
		"Component01"
	};
	hiddenSelectionsTextures[]=
	{
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
	};
};
class Extremo_Construction_ConcreteStairs_Static: Extremo_Construction_Abstract_Static
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_ConcreteStairs.p3d";
	displayName="Concrete Stairs";
	armor=20000;
	hiddenSelections[]=
	{
		"Concrete"
	};
	hiddenSelectionsTextures[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_co.paa"
	};
	hiddenSelectionMaterials[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete.rvmat"
	};
	damageLevel1Textures[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage01_co.paa"
	};
	damageLevel1Materials[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage01.rvmat"
	};
	damageLevel2Textures[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage02_co.paa"
	};
	damageLevel2Materials[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage02.rvmat"
	};
};
class Extremo_Construction_ConcreteSupport_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_ConcreteSupport_Preview.p3d";
	displayName="Concrete Support";
	hiddenSelections[]=
	{
		"Component01"
	};
	hiddenSelectionsTextures[]=
	{
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
	};
};
class Extremo_Construction_ConcreteSupport_Static: Extremo_Construction_Abstract_Static
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_ConcreteSupport.p3d";
	displayName="Concrete Support";
	armor=20000;
	hiddenSelections[]=
	{
		"Concrete"
	};
	hiddenSelectionsTextures[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_co.paa"
	};
	hiddenSelectionMaterials[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete.rvmat"
	};
	damageLevel1Textures[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage01_co.paa"
	};
	damageLevel1Materials[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage01.rvmat"
	};
	damageLevel2Textures[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage02_co.paa"
	};
	damageLevel2Materials[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage02.rvmat"
	};
};
class Extremo_Construction_ConcreteWall_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_ConcreteWall_Preview.p3d";
	displayName="Concrete Wall";
	hiddenSelections[]=
	{
		"Component01"
	};
	hiddenSelectionsTextures[]=
	{
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
	};
};
class Extremo_Construction_ConcreteWall_Static: Extremo_Construction_Abstract_Static
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_ConcreteWall.p3d";
	displayName="Concrete Wall";
	armor=20000;
	hiddenSelections[]=
	{
		"Concrete"
	};
	hiddenSelectionsTextures[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_co.paa"
	};
	hiddenSelectionMaterials[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete.rvmat"
	};
	damageLevel1Textures[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage01_co.paa"
	};
	damageLevel1Materials[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage01.rvmat"
	};
	damageLevel2Textures[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage02_co.paa"
	};
	damageLevel2Materials[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage02.rvmat"
	};
};
class Extremo_Construction_ConcreteWindowHatch_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_ConcreteWindowHatch_Preview.p3d";
	displayName="Concrete Window Hatch";
	hiddenSelections[]=
	{
		"Component01"
	};
	hiddenSelectionsTextures[]=
	{
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)",
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
	};
};
class Extremo_Construction_ConcreteWindowHatch_Static: Extremo_Construction_Abstract_Static
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_ConcreteWindowHatch.p3d";
	displayName="Concrete Window Hatch";
	ExtremoIsDoor=1;
	ExtremoIsLockable=1;
	ExtremoRequiresSimulation=1;
	armor=20000;
	hiddenSelections[]=
	{
		"Concrete"
	};
	hiddenSelectionsTextures[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_co.paa"
	};
	hiddenSelectionMaterials[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete.rvmat"
	};
	damageLevel1Textures[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage01_co.paa"
	};
	damageLevel1Materials[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage01.rvmat"
	};
	damageLevel2Textures[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage02_co.paa"
	};
	damageLevel2Materials[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage02.rvmat"
	};
	class AnimationSources
	{
		class DoorAnimationSource
		{
			source="user";
			initPhase=0;
			animPeriod=1;
			sound="RollDoorsSound";
		};
	};
	class UserActions
	{
		class OpenDoor
		{
			displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
			displayName="Open Hatch";
			position="DoorTrigger";
			priority=0.40000001;
			radius=1.5;
			onlyForPlayer="true";
			condition="this call Extremo_fnc_object_construction_openShow";
			statement="this animate ['DoorRotation', 1]";
		};
		class CloseDoor: OpenDoor
		{
			displayName="Close Hatch";
			priority=0.2;
			condition="this animationPhase 'DoorRotation' >= 0.5";
			statement="this animate ['DoorRotation', 0]";
		};
	};
	actionBegin1="OpenDoor";
	actionEnd1="OpenDoor";
	numberOfDoors=1;
};
class Extremo_Construction_ConcreteWindow_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_ConcreteWindow_Preview.p3d";
	displayName="Concrete Window";
	hiddenSelections[]=
	{
		"Component01"
	};
	hiddenSelectionsTextures[]=
	{
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
	};
};
class Extremo_Construction_ConcreteWindow_Static: Extremo_Construction_Abstract_Static
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_ConcreteWindow.p3d";
	displayName="Concrete Window";
	armor=20000;
	hiddenSelections[]=
	{
		"Concrete"
	};
	hiddenSelectionsTextures[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_co.paa"
	};
	hiddenSelectionMaterials[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete.rvmat"
	};
	damageLevel1Textures[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage01_co.paa"
	};
	damageLevel1Materials[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage01.rvmat"
	};
	damageLevel2Textures[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage02_co.paa"
	};
	damageLevel2Materials[]=
	{
		"Extremo_Assets\model\Extremo_Construction_Concrete_Damage02.rvmat"
	};
};
class Extremo_Construction_Flag_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="\a3\Structures_F\Mil\Flags\Mast_F.p3d";
	displayName="Territory Flag";
	hiddenSelections[]=
	{
		"Component01"
	};
	hiddenSelectionsTextures[]=
	{
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
	};
};
class Extremo_Construction_Flag_Static: FlagCarrier
{
	scope=2;
	model="\a3\Structures_F\Mil\Flags\Mast_F.p3d";
	displayName="Territory Flag";
	ExtremoRequiresSimulation=1;
	armor=10000;
	destrType="DestructNo";
};
class Extremo_Construction_FloodLight_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="\a3\structures_f_epa\civ\constructions\PortableLight_single_F.p3d";
	displayName="Flood Light";
	hiddenSelections[]=
	{
		"Component01"
	};
	hiddenSelectionsTextures[]=
	{
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
	};
};
class Extremo_Construction_FloodLight_Static: Extremo_Construction_Abstract_Static
{
	scope=2;
	model="\a3\structures_f_epa\civ\constructions\PortableLight_single_F.p3d";
	displayName="Flood Light";
	ExtremoRequiresSimulation=1;
	destrType="DestructTree";
	class EventHandlers
	{
		init="(_this select 0) setHit ['light_1_hitpoint', 0.92];";
	};
	class AnimationSources
	{
		class Light_1_jaw_source
		{
			animPeriod=2;
			initPhase=0.13;
			source="user";
		};
		class Light_1_pitch_source
		{
			animPeriod="1/45";
			initPhase=0;
			source="user";
		};
	};
	class Reflectors
	{
		class Light_1
		{
			color[]={1000,1000,1200};
			ambient[]={10,10,12};
			intensity=5;
			size=1;
			innerAngle=60;
			outerAngle=130;
			coneFadeCoef=6;
			position="Light_1_pos";
			direction="Light_1_dir";
			hitpoint="Light_1_hitpoint";
			selection="Light_1_hide";
			useFlare=1;
			flareSize=0.89999998;
			flareMaxDistance=250;
			class Attenuation
			{
				start=0;
				constant=0;
				linear=2;
				quadratic=0.5;
				hardLimitStart=50;
				hardLimitEnd=70;
			};
		};
	};
};
class Extremo_Construction_HBarrier5_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="A3\Structures_F\Mil\Fortification\HBarrier_5_F.p3d";
	displayName="H-barrier (5 Blocks)";
};
class Extremo_Construction_HBarrier5_Static: Extremo_Construction_Abstract_Static
{
	scope=2;
	displayName="H-barrier (5 Blocks)";
	mapSize=3.1199999;
	model="A3\Structures_F\Mil\Fortification\HBarrier_5_F.p3d";
	icon="iconObject_7x1";
	armor=1000;
	destrType="DestructTent";
};
class Extremo_Construction_Laptop_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="Extremo_Assets\model\Extremo_construction_laptop.p3d";
	displayName="Base Laptop";
	class AnimationSources
	{
		class LaptopLidRotation
		{
			source="user";
			initPhase=0;
			animPeriod=1;
			sound="GenericDoorsSound";
		};
	};
};
class Extremo_Construction_Laptop_Static: Extremo_Construction_Abstract_Static
{
	scope=2;
	model="Extremo_Assets\model\Extremo_construction_laptop.p3d";
	displayName="Base Laptop";
	ExtremoRequiresSimulation=1;
	class AnimationSources
	{
		class LaptopLidRotation
		{
			source="user";
			initPhase=0;
			animPeriod=1;
			sound="GenericDoorsSound";
		};
	};
	class UserActions
	{
		class OpenLid
		{
			displayNameDefault="<img image='Extremo_Assets\texture\hud\hud_icon_laptop.paa' size='2'/>";
			displayName="Open Laptop";
			position="LaptopLid";
			priority=0.40000001;
			radius=1;
			onlyForPlayer="true";
			condition="this call Extremo_fnc_gui_baseCamera_lidOpenShow";
			statement="this animate ['LaptopLidRotation', 1]; call Extremo_fnc_gui_interactionMenu_unhook";
		};
		class CloseLid: OpenLid
		{
			displayName="Close Laptop";
			priority=0.2;
			condition="this animationPhase 'LaptopLidRotation' >= 0.5";
			statement="this animate ['LaptopLidRotation', 0]; call Extremo_fnc_gui_interactionMenu_unhook";
		};
	};
};
class Extremo_Construction_MetalHedgehog_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_Hedgehog_Metal.p3d";
	displayName="Metal Hedgehog";
};
class Extremo_Construction_MetalHedgehog_Static: Extremo_Construction_Abstract_Static
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_Hedgehog_Metal.p3d";
	displayName="Metal Hedgehog";
	destrType="DestructNo";
	requiresTerritory=0;
	canBePlacedOnRoad=1;
};
class Extremo_Construction_MetalLadderDouble_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_MetalLadder_Double_Preview.p3d";
	displayName="Metal Ladder (Double Tall)";
	hiddenSelections[]=
	{
		"Component01"
	};
	hiddenSelectionsTextures[]=
	{
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
	};
};
class Extremo_Construction_MetalLadderDouble_Static: Extremo_Construction_Abstract_Static
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_MetalLadder_Double.p3d";
	displayName="Metal Ladder (Double Tall)";
	ExtremoIsDoor=1;
	ExtremoIsLockable=0;
	ExtremoRequiresSimulation=1;
	armor=4000;
	ladders[]=
	{
		
		{
			"start",
			"end"
		}
	};
};
class Extremo_Construction_MetalLadder_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_WoodLadder_Preview.p3d";
	displayName="Metal Ladder";
	hiddenSelections[]=
	{
		"Component01"
	};
	hiddenSelectionsTextures[]=
	{
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
	};
};
class Extremo_Construction_MetalLadder_Static: Extremo_Construction_Abstract_Static
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_MetalLadder.p3d";
	displayName="Metal Ladder";
	ExtremoIsDoor=1;
	ExtremoIsLockable=0;
	ExtremoRequiresSimulation=1;
	armor=4000;
	ladders[]=
	{
		
		{
			"start",
			"end"
		}
	};
};
class Extremo_Construction_OldChest_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Container_OldChest.p3d";
	displayName="Old Chest";
	ExtremoContainer=1;
};
class Extremo_Construction_PortableGenerator_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="\a3\structures_f\Items\Electronics\Portable_generator_F.p3d";
	displayName="Portable Generator";
	hiddenSelections[]=
	{
		"Component01"
	};
	hiddenSelectionsTextures[]=
	{
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
	};
};
class Extremo_Construction_PortableGenerator_Static: Extremo_Construction_Abstract_Static
{
	scope=2;
	model="\a3\structures_f\Items\Electronics\Portable_generator_F.p3d";
	displayName="Portable Generator";
	ExtremoRequiresSimulation=1;
	armor=1000;
	destrType="DestructTent";
	class EventHandlers
	{
		init="(_this select 0) setVariable['isRunning', false];";
	};
	class UserActions
	{
		class switchOn
		{
			displayName="Switch On";
			position="left";
			radius=3;
			onlyForPlayer=1;
			condition="!(this getVariable 'isRunning')";
			statement="this call Extremo_fnc_object_portableGenerator_switchOn;";
		};
		class switchOff
		{
			displayName="Switch Off";
			position="left";
			radius=3;
			onlyForPlayer=1;
			condition="(this getVariable 'isRunning')";
			statement="this call Extremo_fnc_object_portableGenerator_switchOff;";
		};
	};
};
class Extremo_Construction_RazorWire_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="\A3\Structures_F\Mil\Fortification\Razorwire_F.p3d";
	displayName="Razor Wire";
};
class Extremo_Construction_Safe_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Container_Safe.p3d";
	displayName="Safe";
	ExtremoContainer=1;
};
class Extremo_Construction_Safe_Small_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Container_Safe_Small.p3d";
	displayName="Safe (Small)";
	ExtremoContainer=1;
};
class Extremo_Construction_SandBags_Corner_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="A3\Structures_F\Mil\BagFence\BagFence_Corner_F.p3d";
	displayName="Sandbags (Corner)";
};
class Extremo_Construction_SandBags_Corner_Static: Extremo_Construction_Abstract_Static
{
	scope=2;
	displayName="Sandbags (Corner)";
	mapSize=3.1199999;
	model="A3\Structures_F\Mil\BagFence\BagFence_Corner_F.p3d";
	icon="iconObject_7x1";
	armor=1000;
	destrType="DestructTent";
};
class Extremo_Construction_SandBags_Long_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="A3\Structures_F\Mil\BagFence\BagFence_Long_F.p3d";
	displayName="Sand Bags (Long)";
};
class Extremo_Construction_SandBags_Long_Static: Extremo_Construction_Abstract_Static
{
	scope=2;
	displayName="Sand Bags (Long)";
	mapSize=3.1199999;
	model="A3\Structures_F\Mil\BagFence\BagFence_Long_F.p3d";
	icon="iconObject_7x1";
	armor=1000;
	destrType="DestructTent";
};
class Extremo_Construction_StorageCrate_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Container_Storagecrate.p3d";
	displayName="Crate";
	ExtremoContainer=1;
};
class Extremo_Construction_SupplyBox_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="\A3\Supplies_F_Heli\CargoNets\CargoNet_01_ammo_F.p3d";
	displayName="Supply Box";
	ExtremoContainer=1;
};
class Extremo_Construction_WaterBarrel_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="\A3\Structures_F\Items\Vessels\WaterBarrel_F.p3d";
	displayName="Water Barrel";
};
class Extremo_Construction_WaterBarrel_Static: Extremo_Construction_Abstract_Static
{
	scope=2;
	model="\A3\Structures_F\Items\Vessels\WaterBarrel_F.p3d";
	displayName="Water Barrel";
	armor=1000;
	destrType="DestructTent";
};
class Extremo_Construction_WoodenWaterBarrel_Static: Extremo_Construction_Abstract_Static
{
	scope=2;
	model="\extremo_assets\model\Extremo_Container_WoodBucket.p3d";
	displayName="Wooden Water Barrel";
	armor=1000;
	destrType="DestructTent";
};
class Extremo_Construction_WiredFence_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="\A3\Structures_F\Walls\Mil_WiredFence_F.p3d";
	displayName="Wired Fence";
};
class Extremo_Construction_WiredFence_Static: Extremo_Construction_Abstract_Static
{
	scope=2;
	displayName="Wired Fence";
	mapSize=7.9699998;
	model="\A3\Structures_F\Walls\Mil_WiredFence_F.p3d";
	icon="iconObject_5x1";
	armor=100;
	destrType="DestructTent";
};
class Extremo_Construction_WoodDoorway_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_WoodDoorway_Preview.p3d";
	displayName="Wood Doorway";
	hiddenSelections[]=
	{
		"Component01"
	};
	hiddenSelectionsTextures[]=
	{
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
	};
};
class Extremo_Construction_WoodDoorway_Reinforced_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_WoodDoorway_Preview.p3d";
	displayName="Wood Doorway (Reinforced)";
	hiddenSelections[]=
	{
		"Component01"
	};
	hiddenSelectionsTextures[]=
	{
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
	};
};
class Extremo_Construction_WoodDoorway_Reinforced_Static: Extremo_Construction_Abstract_Static
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_WoodDoorway_Reinforced.p3d";
	displayName="Wood Doorway (Reinforced)";
	armor=4000;
	hiddenSelections[]=
	{
		"WoodPlank",
		"MetalBoard"
	};
	hiddenSelectionsTextures[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank_co.paa",
		"Extremo_Assets\model\Extremo_CorrugatedMetal_co.paa"
	};
	hiddenSelectionMaterials[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank.rvmat",
		"Extremo_Assets\model\Extremo_CorrugatedMetal.rvmat"
	};
	damageLevel1Textures[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank_Damage01_co.paa",
		"Extremo_Assets\model\Extremo_CorrugatedMetal_Damage01_co.paa"
	};
	damageLevel1Materials[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank_Damage01.rvmat",
		"Extremo_Assets\model\Extremo_CorrugatedMetal_Damage01.rvmat"
	};
	damageLevel2Textures[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank_Damage02_co.paa",
		"Extremo_Assets\model\Extremo_CorrugatedMetal_Damage02_co.paa"
	};
	damageLevel2Materials[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank_Damage02.rvmat",
		"Extremo_Assets\model\Extremo_CorrugatedMetal_Damage02.rvmat"
	};
};
class Extremo_Construction_WoodDoorway_Static: Extremo_Construction_Abstract_Static
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_WoodDoorway.p3d";
	displayName="Wood Doorway";
	armor=1000;
	hiddenSelections[]=
	{
		"WoodBoard",
		"WoodPlank"
	};
	hiddenSelectionsTextures[]=
	{
		"Extremo_Assets\model\Extremo_woodboard_co.paa",
		"Extremo_Assets\model\Extremo_woodplank_co.paa"
	};
	hiddenSelectionMaterials[]=
	{
		"Extremo_Assets\model\Extremo_woodboard.rvmat",
		"Extremo_Assets\model\Extremo_woodplank.rvmat"
	};
	damageLevel1Textures[]=
	{
		"Extremo_Assets\model\Extremo_woodboard_damage01_co.paa",
		"Extremo_Assets\model\Extremo_woodplank_damage01_co.paa"
	};
	damageLevel1Materials[]=
	{
		"Extremo_Assets\model\Extremo_woodboard_damage01.rvmat",
		"Extremo_Assets\model\Extremo_woodplank_damage01.rvmat"
	};
	damageLevel2Textures[]=
	{
		"Extremo_Assets\model\Extremo_woodboard_damage02_co.paa",
		"Extremo_Assets\model\Extremo_woodplank_damage02_co.paa"
	};
	damageLevel2Materials[]=
	{
		"Extremo_Assets\model\Extremo_woodboard_damage02.rvmat",
		"Extremo_Assets\model\Extremo_woodplank_damage02.rvmat"
	};
};
class Extremo_Construction_WoodDoor_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_WoodDoor_Preview.p3d";
	displayName="Wood Door";
	hiddenSelections[]=
	{
		"Component01",
		"Component02"
	};
	hiddenSelectionsTextures[]=
	{
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)",
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
	};
};
class Extremo_Construction_WoodDoor_Reinforced_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_WoodDoor_Preview.p3d";
	displayName="Wood Door (Reinforced)";
	hiddenSelections[]=
	{
		"Component01",
		"Component02"
	};
	hiddenSelectionsTextures[]=
	{
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)",
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
	};
};
class Extremo_Construction_WoodDoor_Reinforced_Static: Extremo_Construction_Abstract_Static
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_WoodDoor_Reinforced.p3d";
	displayName="Wood Door (Reinforced)";
	ExtremoIsDoor=1;
	ExtremoIsLockable=1;
	ExtremoRequiresSimulation=1;
	armor=4000;
	hiddenSelections[]=
	{
		"WoodPlank",
		"MetalBoard"
	};
	hiddenSelectionsTextures[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank_co.paa",
		"Extremo_Assets\model\Extremo_CorrugatedMetal_co.paa"
	};
	hiddenSelectionMaterials[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank.rvmat",
		"Extremo_Assets\model\Extremo_CorrugatedMetal.rvmat"
	};
	damageLevel1Textures[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank_Damage01_co.paa",
		"Extremo_Assets\model\Extremo_CorrugatedMetal_Damage01_co.paa"
	};
	damageLevel1Materials[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank_Damage01.rvmat",
		"Extremo_Assets\model\Extremo_CorrugatedMetal_Damage01.rvmat"
	};
	damageLevel2Textures[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank_Damage02_co.paa",
		"Extremo_Assets\model\Extremo_CorrugatedMetal_Damage02_co.paa"
	};
	damageLevel2Materials[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank_Damage02.rvmat",
		"Extremo_Assets\model\Extremo_CorrugatedMetal_Damage02.rvmat"
	};
	class AnimationSources
	{
		class DoorAnimationSource
		{
			source="user";
			initPhase=0;
			animPeriod=1;
			sound="FenceGateDoorsSound";
		};
	};
	class UserActions
	{
		class OpenDoor
		{
			displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
			displayName="Open Door";
			position="DoorTrigger";
			priority=0.40000001;
			radius=1.5;
			onlyForPlayer="true";
			condition="this call Extremo_fnc_object_construction_openShow";
			statement="this animate ['DoorRotation', 1]";
		};
		class CloseDoor: OpenDoor
		{
			displayName="Close Door";
			priority=0.2;
			condition="this animationPhase 'DoorRotation' >= 0.5";
			statement="this animate ['DoorRotation', 0]";
		};
	};
	actionBegin1="OpenDoor";
	actionEnd1="OpenDoor";
	numberOfDoors=1;
};
class Extremo_Construction_WoodDoor_Static: Extremo_Construction_Abstract_Static
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_WoodDoor.p3d";
	displayName="Wood Door";
	ExtremoIsDoor=1;
	ExtremoIsLockable=1;
	ExtremoRequiresSimulation=1;
	armor=1000;
	hiddenSelections[]=
	{
		"WoodBoard",
		"WoodPlank"
	};
	hiddenSelectionsTextures[]=
	{
		"Extremo_Assets\model\Extremo_woodboard_co.paa",
		"Extremo_Assets\model\Extremo_woodplank_co.paa"
	};
	hiddenSelectionMaterials[]=
	{
		"Extremo_Assets\model\Extremo_woodboard.rvmat",
		"Extremo_Assets\model\Extremo_woodplank.rvmat"
	};
	damageLevel1Textures[]=
	{
		"Extremo_Assets\model\Extremo_woodboard_damage01_co.paa",
		"Extremo_Assets\model\Extremo_woodplank_damage01_co.paa"
	};
	damageLevel1Materials[]=
	{
		"Extremo_Assets\model\Extremo_woodboard_damage01.rvmat",
		"Extremo_Assets\model\Extremo_woodplank_damage01.rvmat"
	};
	damageLevel2Textures[]=
	{
		"Extremo_Assets\model\Extremo_woodboard_damage02_co.paa",
		"Extremo_Assets\model\Extremo_woodplank_damage02_co.paa"
	};
	damageLevel2Materials[]=
	{
		"Extremo_Assets\model\Extremo_woodboard_damage02.rvmat",
		"Extremo_Assets\model\Extremo_woodplank_damage02.rvmat"
	};
	class AnimationSources
	{
		class DoorAnimationSource
		{
			source="user";
			initPhase=0;
			animPeriod=1;
			sound="GenericDoorsSound";
		};
	};
	class UserActions
	{
		class OpenDoor
		{
			displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
			displayName="Open Door";
			position="DoorTrigger";
			priority=0.40000001;
			radius=1.5;
			onlyForPlayer="true";
			condition="this call Extremo_fnc_object_construction_openShow";
			statement="this animate ['DoorRotation', 1]";
		};
		class CloseDoor: OpenDoor
		{
			displayName="Close Door";
			priority=0.2;
			condition="this animationPhase 'DoorRotation' >= 0.5";
			statement="this animate ['DoorRotation', 0]";
		};
	};
	actionBegin1="OpenDoor";
	actionEnd1="OpenDoor";
	numberOfDoors=1;
};
class Extremo_Construction_WoodDrawBridge_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_WoodDrawBridge_Preview.p3d";
	displayName="Wood DrawBridge";
	hiddenSelections[]=
	{
		"Component01"
	};
	hiddenSelectionsTextures[]=
	{
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
	};
};
class Extremo_Construction_WoodDrawBridge_Reinforced_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_WoodDrawBridge_Preview.p3d";
	displayName="Wood DrawBridge (Reinforced)";
	hiddenSelections[]=
	{
		"Component01"
	};
	hiddenSelectionsTextures[]=
	{
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
	};
};
class Extremo_Construction_WoodDrawBridge_Reinforced_Static: Extremo_Construction_Abstract_DrawBridge
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_WoodDrawBridge_Reinforced.p3d";
	displayName="Wood DrawBridge (Reinforced)";
	ExtremoIsDoor=1;
	ExtremoIsLockable=1;
	ExtremoRequiresSimulation=1;
	armor=1000;
	hiddenSelections[]=
	{
		"WoodPlank",
		"MetalBoard"
	};
	hiddenSelectionsTextures[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank_co.paa",
		"Extremo_Assets\model\Extremo_CorrugatedMetal_co.paa"
	};
	hiddenSelectionMaterials[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank.rvmat",
		"Extremo_Assets\model\Extremo_CorrugatedMetal.rvmat"
	};
	damageLevel1Textures[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank_Damage01_co.paa",
		"Extremo_Assets\model\Extremo_CorrugatedMetal_Damage01_co.paa"
	};
	damageLevel1Materials[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank_Damage01.rvmat",
		"Extremo_Assets\model\Extremo_CorrugatedMetal_Damage01.rvmat"
	};
	damageLevel2Textures[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank_Damage02_co.paa",
		"Extremo_Assets\model\Extremo_CorrugatedMetal_Damage02_co.paa"
	};
	damageLevel2Materials[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank_Damage02.rvmat",
		"Extremo_Assets\model\Extremo_CorrugatedMetal_Damage02.rvmat"
	};
	class AnimationSources
	{
		class DrawBridge_Source
		{
			source="user";
			initPhase=2;
			animPeriod=2;
			sound="FenceGateDoorsSound";
		};
	};
};
class Extremo_Construction_WoodDrawBridge_Static: Extremo_Construction_Abstract_DrawBridge
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_WoodDrawBridge.p3d";
	displayName="Wood DrawBridge";
	ExtremoIsDoor=1;
	ExtremoIsLockable=1;
	ExtremoRequiresSimulation=1;
	armor=1000;
	hiddenSelections[]=
	{
		"WoodBoard",
		"WoodPlank"
	};
	hiddenSelectionsTextures[]=
	{
		"Extremo_Assets\model\Extremo_woodboard_co.paa",
		"Extremo_Assets\model\Extremo_woodplank_co.paa"
	};
	hiddenSelectionMaterials[]=
	{
		"Extremo_Assets\model\Extremo_woodboard.rvmat",
		"Extremo_Assets\model\Extremo_woodplank.rvmat"
	};
	damageLevel1Textures[]=
	{
		"Extremo_Assets\model\Extremo_woodboard_damage01_co.paa",
		"Extremo_Assets\model\Extremo_woodplank_damage01_co.paa"
	};
	damageLevel1Materials[]=
	{
		"Extremo_Assets\model\Extremo_woodboard_damage01.rvmat",
		"Extremo_Assets\model\Extremo_woodplank_damage01.rvmat"
	};
	damageLevel2Textures[]=
	{
		"Extremo_Assets\model\Extremo_woodboard_damage02_co.paa",
		"Extremo_Assets\model\Extremo_woodplank_damage02_co.paa"
	};
	damageLevel2Materials[]=
	{
		"Extremo_Assets\model\Extremo_woodboard_damage02.rvmat",
		"Extremo_Assets\model\Extremo_woodplank_damage02.rvmat"
	};
	class AnimationSources
	{
		class DrawBridge_Source
		{
			source="user";
			initPhase=2;
			animPeriod=2;
			sound="RoadGateDoors";
		};
	};
};
class Extremo_Construction_WoodFloorPortSmall_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_WoodFloorPortSmall_Preview.p3d";
	displayName="Wood Floor Port (Small)";
	hiddenSelections[]=
	{
		"Component01"
	};
	hiddenSelectionsTextures[]=
	{
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
	};
};
class Extremo_Construction_WoodFloorPortSmall_Reinforced_Static: Extremo_Construction_Abstract_Static
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_WoodFloorPortSmall_Reinforced.p3d";
	displayName="Wood Floor Port (Small - Reinforced)";
	armor=4000;
	hiddenSelections[]=
	{
		"WoodPlank",
		"MetalBoard"
	};
	hiddenSelectionsTextures[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank_co.paa",
		"Extremo_Assets\model\Extremo_CorrugatedMetal_co.paa"
	};
	hiddenSelectionMaterials[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank.rvmat",
		"Extremo_Assets\model\Extremo_CorrugatedMetal.rvmat"
	};
	damageLevel1Textures[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank_Damage01_co.paa",
		"Extremo_Assets\model\Extremo_CorrugatedMetal_Damage01_co.paa"
	};
	damageLevel1Materials[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank_Damage01.rvmat",
		"Extremo_Assets\model\Extremo_CorrugatedMetal_Damage01.rvmat"
	};
	damageLevel2Textures[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank_Damage02_co.paa",
		"Extremo_Assets\model\Extremo_CorrugatedMetal_Damage02_co.paa"
	};
	damageLevel2Materials[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank_Damage02.rvmat",
		"Extremo_Assets\model\Extremo_CorrugatedMetal_Damage02.rvmat"
	};
};
class Extremo_Construction_WoodFloorPortSmall_Static: Extremo_Construction_Abstract_Static
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_WoodFloorPortSmall.p3d";
	displayName="Wood Floor Port (Small)";
	armor=1000;
	hiddenSelections[]=
	{
		"WoodBoard",
		"WoodPlank"
	};
	hiddenSelectionsTextures[]=
	{
		"Extremo_Assets\model\Extremo_woodboard_co.paa",
		"Extremo_Assets\model\Extremo_woodplank_co.paa"
	};
	hiddenSelectionMaterials[]=
	{
		"Extremo_Assets\model\Extremo_woodboard.rvmat",
		"Extremo_Assets\model\Extremo_woodplank.rvmat"
	};
	damageLevel1Textures[]=
	{
		"Extremo_Assets\model\Extremo_woodboard_damage01_co.paa",
		"Extremo_Assets\model\Extremo_woodplank_damage01_co.paa"
	};
	damageLevel1Materials[]=
	{
		"Extremo_Assets\model\Extremo_woodboard_damage01.rvmat",
		"Extremo_Assets\model\Extremo_woodplank_damage01.rvmat"
	};
	damageLevel2Textures[]=
	{
		"Extremo_Assets\model\Extremo_woodboard_damage02_co.paa",
		"Extremo_Assets\model\Extremo_woodplank_damage02_co.paa"
	};
	damageLevel2Materials[]=
	{
		"Extremo_Assets\model\Extremo_woodboard_damage02.rvmat",
		"Extremo_Assets\model\Extremo_woodplank_damage02.rvmat"
	};
};
class Extremo_Construction_WoodFloorPort_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_WoodFloorPort_Preview.p3d";
	displayName="Wood Floor Port";
	hiddenSelections[]=
	{
		"Component01"
	};
	hiddenSelectionsTextures[]=
	{
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
	};
};
class Extremo_Construction_WoodFloorPort_Static: Extremo_Construction_Abstract_Static
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_WoodFloorPort.p3d";
	displayName="Wood Floor Port";
	armor=1000;
	hiddenSelections[]=
	{
		"WoodBoard",
		"WoodPlank"
	};
	hiddenSelectionsTextures[]=
	{
		"Extremo_Assets\model\Extremo_woodboard_co.paa",
		"Extremo_Assets\model\Extremo_woodplank_co.paa"
	};
	hiddenSelectionMaterials[]=
	{
		"Extremo_Assets\model\Extremo_woodboard.rvmat",
		"Extremo_Assets\model\Extremo_woodplank.rvmat"
	};
	damageLevel1Textures[]=
	{
		"Extremo_Assets\model\Extremo_woodboard_damage01_co.paa",
		"Extremo_Assets\model\Extremo_woodplank_damage01_co.paa"
	};
	damageLevel1Materials[]=
	{
		"Extremo_Assets\model\Extremo_woodboard_damage01.rvmat",
		"Extremo_Assets\model\Extremo_woodplank_damage01.rvmat"
	};
	damageLevel2Textures[]=
	{
		"Extremo_Assets\model\Extremo_woodboard_damage02_co.paa",
		"Extremo_Assets\model\Extremo_woodplank_damage02_co.paa"
	};
	damageLevel2Materials[]=
	{
		"Extremo_Assets\model\Extremo_woodboard_damage02.rvmat",
		"Extremo_Assets\model\Extremo_woodplank_damage02.rvmat"
	};
};
class Extremo_Construction_WoodFloor_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_WoodFloor_Preview.p3d";
	displayName="Wood Floor";
	hiddenSelections[]=
	{
		"Component01"
	};
	hiddenSelectionsTextures[]=
	{
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
	};
};
class Extremo_Construction_WoodFloor_Reinforced_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_WoodFloor_Reinforced_Preview.p3d";
	displayName="Wood Floor (Reinforced)";
	hiddenSelections[]=
	{
		"Component01"
	};
	hiddenSelectionsTextures[]=
	{
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
	};
};
class Extremo_Construction_WoodFloor_Reinforced_Static: Extremo_Construction_Abstract_Static
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_WoodFloor_Reinforced.p3d";
	displayName="Wood Floor (Reinforced)";
	armor=4000;
	hiddenSelections[]=
	{
		"WoodPlank",
		"MetalBoard"
	};
	hiddenSelectionsTextures[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank_co.paa",
		"Extremo_Assets\model\Extremo_CorrugatedMetal_co.paa"
	};
	hiddenSelectionMaterials[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank.rvmat",
		"Extremo_Assets\model\Extremo_CorrugatedMetal.rvmat"
	};
	damageLevel1Textures[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank_Damage01_co.paa",
		"Extremo_Assets\model\Extremo_CorrugatedMetal_Damage01_co.paa"
	};
	damageLevel1Materials[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank_Damage01.rvmat",
		"Extremo_Assets\model\Extremo_CorrugatedMetal_Damage01.rvmat"
	};
	damageLevel2Textures[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank_Damage02_co.paa",
		"Extremo_Assets\model\Extremo_CorrugatedMetal_Damage02_co.paa"
	};
	damageLevel2Materials[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank_Damage02.rvmat",
		"Extremo_Assets\model\Extremo_CorrugatedMetal_Damage02.rvmat"
	};
};
class Extremo_Construction_WoodFloor_Static: Extremo_Construction_Abstract_Static
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_WoodFloor.p3d";
	displayName="Wood Floor";
	armor=1000;
	hiddenSelections[]=
	{
		"WoodBoard",
		"WoodPlank"
	};
	hiddenSelectionsTextures[]=
	{
		"Extremo_Assets\model\Extremo_woodboard_co.paa",
		"Extremo_Assets\model\Extremo_woodplank_co.paa"
	};
	hiddenSelectionMaterials[]=
	{
		"Extremo_Assets\model\Extremo_woodboard.rvmat",
		"Extremo_Assets\model\Extremo_woodplank.rvmat"
	};
	damageLevel1Textures[]=
	{
		"Extremo_Assets\model\Extremo_woodboard_damage01_co.paa",
		"Extremo_Assets\model\Extremo_woodplank_damage01_co.paa"
	};
	damageLevel1Materials[]=
	{
		"Extremo_Assets\model\Extremo_woodboard_damage01.rvmat",
		"Extremo_Assets\model\Extremo_woodplank_damage01.rvmat"
	};
	damageLevel2Textures[]=
	{
		"Extremo_Assets\model\Extremo_woodboard_damage02_co.paa",
		"Extremo_Assets\model\Extremo_woodplank_damage02_co.paa"
	};
	damageLevel2Materials[]=
	{
		"Extremo_Assets\model\Extremo_woodboard_damage02.rvmat",
		"Extremo_Assets\model\Extremo_woodplank_damage02.rvmat"
	};
};
class Extremo_Construction_WoodGate_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_WoodGate_Preview.p3d";
	displayName="Wood Gate";
	hiddenSelections[]=
	{
		"Component01",
		"Component02",
		"Component03",
		"Component04"
	};
	hiddenSelectionsTextures[]=
	{
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)",
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)",
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)",
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
	};
};
class Extremo_Construction_WoodGate_Reinforced_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_WoodGate_Preview.p3d";
	displayName="Wood Gate (Reinforced)";
	hiddenSelections[]=
	{
		"Component01",
		"Component02",
		"Component03",
		"Component04"
	};
	hiddenSelectionsTextures[]=
	{
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)",
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)",
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)",
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
	};
};
class Extremo_Construction_WoodGate_Reinforced_Static: Extremo_Construction_Abstract_Static
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_WoodGate_Reinforced.p3d";
	displayName="Wood Gate (Reinforced)";
	ExtremoIsDoor=1;
	ExtremoIsLockable=1;
	ExtremoRequiresSimulation=1;
	armor=4000;
	hiddenSelections[]=
	{
		"WoodPlank",
		"MetalBoard"
	};
	hiddenSelectionsTextures[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank_co.paa",
		"Extremo_Assets\model\Extremo_CorrugatedMetal_co.paa"
	};
	hiddenSelectionMaterials[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank.rvmat",
		"Extremo_Assets\model\Extremo_CorrugatedMetal.rvmat"
	};
	damageLevel1Textures[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank_Damage01_co.paa",
		"Extremo_Assets\model\Extremo_CorrugatedMetal_Damage01_co.paa"
	};
	damageLevel1Materials[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank_Damage01.rvmat",
		"Extremo_Assets\model\Extremo_CorrugatedMetal_Damage01.rvmat"
	};
	damageLevel2Textures[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank_Damage02_co.paa",
		"Extremo_Assets\model\Extremo_CorrugatedMetal_Damage02_co.paa"
	};
	damageLevel2Materials[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank_Damage02.rvmat",
		"Extremo_Assets\model\Extremo_CorrugatedMetal_Damage02.rvmat"
	};
	class AnimationSources
	{
		class DoorAnimationSource
		{
			source="user";
			initPhase=0;
			animPeriod=2;
			sound="RoadGateDoors";
		};
	};
	class UserActions
	{
		class OpenDoor
		{
			displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
			displayName="Open Door";
			position="DoorHandle";
			priority=0.40000001;
			radius=3.5;
			onlyForPlayer="true";
			condition="this call Extremo_fnc_object_construction_openGateShow";
			statement="this animate ['DoorRotationLeft', 1]; this animate ['DoorRotationRight', 1];";
		};
		class CloseDoor: OpenDoor
		{
			displayName="Close Door";
			priority=0.2;
			condition="this animationPhase 'DoorRotationLeft' >= 0.5";
			statement="this animate ['DoorRotationLeft', 0]; this animate ['DoorRotationRight', 0]";
		};
	};
	actionBegin1="OpenDoor";
	actionEnd1="OpenDoor";
	numberOfDoors=1;
};
class Extremo_Construction_WoodGate_Static: Extremo_Construction_Abstract_Static
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_WoodGate.p3d";
	displayName="Wood Gate";
	ExtremoIsDoor=1;
	ExtremoIsLockable=1;
	ExtremoRequiresSimulation=1;
	armor=1000;
	hiddenSelections[]=
	{
		"WoodBoard",
		"WoodPlank"
	};
	hiddenSelectionsTextures[]=
	{
		"Extremo_Assets\model\Extremo_woodboard_co.paa",
		"Extremo_Assets\model\Extremo_woodplank_co.paa"
	};
	hiddenSelectionMaterials[]=
	{
		"Extremo_Assets\model\Extremo_woodboard.rvmat",
		"Extremo_Assets\model\Extremo_woodplank.rvmat"
	};
	damageLevel1Textures[]=
	{
		"Extremo_Assets\model\Extremo_woodboard_damage01_co.paa",
		"Extremo_Assets\model\Extremo_woodplank_damage01_co.paa"
	};
	damageLevel1Materials[]=
	{
		"Extremo_Assets\model\Extremo_woodboard_damage01.rvmat",
		"Extremo_Assets\model\Extremo_woodplank_damage01.rvmat"
	};
	damageLevel2Textures[]=
	{
		"Extremo_Assets\model\Extremo_woodboard_damage02_co.paa",
		"Extremo_Assets\model\Extremo_woodplank_damage02_co.paa"
	};
	damageLevel2Materials[]=
	{
		"Extremo_Assets\model\Extremo_woodboard_damage02.rvmat",
		"Extremo_Assets\model\Extremo_woodplank_damage02.rvmat"
	};
	class AnimationSources
	{
		class DoorAnimationSource
		{
			source="user";
			initPhase=0;
			animPeriod=2;
			sound="RoadGateDoors";
		};
	};
	class UserActions
	{
		class OpenDoor
		{
			displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
			displayName="Open Door";
			position="DoorHandle";
			priority=0.40000001;
			radius=3.5;
			onlyForPlayer="true";
			condition="this call Extremo_fnc_object_construction_openGateShow";
			statement="this animate ['DoorRotationLeft', 1]; this animate ['DoorRotationRight', 1];";
		};
		class CloseDoor: OpenDoor
		{
			displayName="Close Door";
			priority=0.2;
			condition="this animationPhase 'DoorRotationLeft' >= 0.5";
			statement="this animate ['DoorRotationLeft', 0]; this animate ['DoorRotationRight', 0]";
		};
	};
	actionBegin1="OpenDoor";
	actionEnd1="OpenDoor";
	numberOfDoors=1;
};
class Extremo_Construction_WoodLadderHatch_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_WoodLadderHatch_Preview.p3d";
	displayName="Wood Ladder Hatch";
	hiddenSelections[]=
	{
		"Component01"
	};
	hiddenSelectionsTextures[]=
	{
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
	};
};
class Extremo_Construction_WoodLadderHatch_Reinforced_Static: Extremo_Construction_Abstract_Static
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_WoodLadderHatch_Reinforced.p3d";
	displayName="Wood Ladder Hatch (Reinforced)";
	ExtremoIsDoor=1;
	ExtremoIsLockable=1;
	ExtremoRequiresSimulation=1;
	armor=4000;
	hiddenSelections[]=
	{
		"WoodPlank",
		"MetalBoard"
	};
	hiddenSelectionsTextures[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank_co.paa",
		"Extremo_Assets\model\Extremo_CorrugatedMetal_co.paa"
	};
	hiddenSelectionMaterials[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank.rvmat",
		"Extremo_Assets\model\Extremo_CorrugatedMetal.rvmat"
	};
	damageLevel1Textures[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank_Damage01_co.paa",
		"Extremo_Assets\model\Extremo_CorrugatedMetal_Damage01_co.paa"
	};
	damageLevel1Materials[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank_Damage01.rvmat",
		"Extremo_Assets\model\Extremo_CorrugatedMetal_Damage01.rvmat"
	};
	damageLevel2Textures[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank_Damage02_co.paa",
		"Extremo_Assets\model\Extremo_CorrugatedMetal_Damage02_co.paa"
	};
	damageLevel2Materials[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank_Damage02.rvmat",
		"Extremo_Assets\model\Extremo_CorrugatedMetal_Damage02.rvmat"
	};
	class AnimationSources
	{
		class TrapDoor_Source
		{
			source="user";
			initPhase=0;
			animPeriod=2;
			sound="GenericDoorsSound";
		};
	};
	ladders[]=
	{
		
		{
			"ladder_start",
			"ladder_end",
			2.5,
			"ladder_action"
		}
	};
	class UserActions
	{
		class OpenTrap
		{
			displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
			displayName="Open Trapdoor";
			position="DoorHandle";
			priority=6;
			radius=3;
			onlyForPlayer=1;
			condition="this call Extremo_fnc_object_construction_openHatchShow";
			statement="this animateSource ['TrapDoor_Source', 1.75];";
		};
		class CloseTrap: OpenTrap
		{
			displayName="Close Trapdoor";
			condition="this call Extremo_fnc_object_construction_closeHatchShow";
			statement="this animateSource ['TrapDoor_Source', 0];";
		};
	};
};
class Extremo_Construction_WoodLadderHatch_Static: Extremo_Construction_Abstract_Static
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_WoodLadderHatch.p3d";
	displayName="Wood Ladder Hatch";
	ExtremoIsDoor=1;
	ExtremoIsLockable=1;
	ExtremoRequiresSimulation=1;
	armor=1000;
	hiddenSelections[]=
	{
		"WoodBoard",
		"WoodPlank"
	};
	hiddenSelectionsTextures[]=
	{
		"Extremo_Assets\model\Extremo_woodboard_co.paa",
		"Extremo_Assets\model\Extremo_woodplank_co.paa"
	};
	hiddenSelectionMaterials[]=
	{
		"Extremo_Assets\model\Extremo_woodboard.rvmat",
		"Extremo_Assets\model\Extremo_woodplank.rvmat"
	};
	damageLevel1Textures[]=
	{
		"Extremo_Assets\model\Extremo_woodboard_damage01_co.paa",
		"Extremo_Assets\model\Extremo_woodplank_damage01_co.paa"
	};
	damageLevel1Materials[]=
	{
		"Extremo_Assets\model\Extremo_woodboard_damage01.rvmat",
		"Extremo_Assets\model\Extremo_woodplank_damage01.rvmat"
	};
	damageLevel2Textures[]=
	{
		"Extremo_Assets\model\Extremo_woodboard_damage02_co.paa",
		"Extremo_Assets\model\Extremo_woodplank_damage02_co.paa"
	};
	damageLevel2Materials[]=
	{
		"Extremo_Assets\model\Extremo_woodboard_damage02.rvmat",
		"Extremo_Assets\model\Extremo_woodplank_damage02.rvmat"
	};
	class AnimationSources
	{
		class TrapDoor_Source
		{
			source="user";
			initPhase=0;
			animPeriod=2;
			sound="GenericDoorsSound";
		};
	};
	ladders[]=
	{
		
		{
			"ladder_start",
			"ladder_end",
			2.5,
			"ladder_action"
		}
	};
	class UserActions
	{
		class OpenTrap
		{
			displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
			displayName="Open Trapdoor";
			position="DoorHandle";
			priority=6;
			radius=3;
			onlyForPlayer=1;
			condition="this call Extremo_fnc_object_construction_openHatchShow";
			statement="this animateSource ['TrapDoor_Source', 1.75];";
		};
		class CloseTrap: OpenTrap
		{
			displayName="Close Trapdoor";
			condition="this call Extremo_fnc_object_construction_closeHatchShow";
			statement="this animateSource ['TrapDoor_Source', 0];";
		};
	};
};
class Extremo_Construction_WoodLadder_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_WoodLadder_Preview.p3d";
	displayName="Wood Ladder";
	hiddenSelections[]=
	{
		"Component01"
	};
	hiddenSelectionsTextures[]=
	{
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
	};
};
class Extremo_Construction_WoodLadder_Static: Extremo_Construction_Abstract_Static
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_WoodLadder.p3d";
	displayName="Wood Ladder";
	ExtremoIsDoor=1;
	ExtremoIsLockable=0;
	ExtremoRequiresSimulation=1;
	armor=1000;
	hiddenSelections[]=
	{
		"WoodPlank"
	};
	hiddenSelectionsTextures[]=
	{
		"Extremo_Assets\model\Extremo_woodplank_co.paa"
	};
	hiddenSelectionMaterials[]=
	{
		"Extremo_Assets\model\Extremo_woodplank.rvmat"
	};
	damageLevel1Textures[]=
	{
		"Extremo_Assets\model\Extremo_woodplank_damage01_co.paa"
	};
	damageLevel1Materials[]=
	{
		"Extremo_Assets\model\Extremo_woodplank_damage01.rvmat"
	};
	damageLevel2Textures[]=
	{
		"Extremo_Assets\model\Extremo_woodplank_damage02_co.paa"
	};
	damageLevel2Materials[]=
	{
		"Extremo_Assets\model\Extremo_woodplank_damage02.rvmat"
	};
	ladders[]=
	{
		
		{
			"start",
			"end"
		}
	};
};
class Extremo_Construction_WoodStairs_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_WoodStairs_Preview.p3d";
	displayName="Wood Stairs";
	hiddenSelections[]=
	{
		"Component01"
	};
	hiddenSelectionsTextures[]=
	{
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
	};
};
class Extremo_Construction_WoodStairs_Static: Extremo_Construction_Abstract_Static
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_WoodStairs.p3d";
	displayName="Wood Stairs";
	armor=1000;
	hiddenSelections[]=
	{
		"WoodPlank"
	};
	hiddenSelectionsTextures[]=
	{
		"Extremo_Assets\model\Extremo_woodplank_co.paa"
	};
	hiddenSelectionMaterials[]=
	{
		"Extremo_Assets\model\Extremo_woodplank.rvmat"
	};
	damageLevel1Textures[]=
	{
		"Extremo_Assets\model\Extremo_woodplank_damage01_co.paa"
	};
	damageLevel1Materials[]=
	{
		"Extremo_Assets\model\Extremo_woodplank_damage01.rvmat"
	};
	damageLevel2Textures[]=
	{
		"Extremo_Assets\model\Extremo_woodplank_damage02_co.paa"
	};
	damageLevel2Materials[]=
	{
		"Extremo_Assets\model\Extremo_woodplank_damage02.rvmat"
	};
};
class Extremo_Construction_WoodSupport_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_WoodSupport_Preview.p3d";
	displayName="Wood Support";
	hiddenSelections[]=
	{
		"Component01"
	};
	hiddenSelectionsTextures[]=
	{
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
	};
};
class Extremo_Construction_WoodSupport_Static: Extremo_Construction_Abstract_Static
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_WoodSupport.p3d";
	displayName="Wood Support";
	armor=1000;
	hiddenSelections[]=
	{
		"WoodPlank"
	};
	hiddenSelectionsTextures[]=
	{
		"Extremo_Assets\model\Extremo_woodplank_co.paa"
	};
	hiddenSelectionMaterials[]=
	{
		"Extremo_Assets\model\Extremo_woodplank.rvmat"
	};
	damageLevel1Textures[]=
	{
		"Extremo_Assets\model\Extremo_woodplank_damage01_co.paa"
	};
	damageLevel1Materials[]=
	{
		"Extremo_Assets\model\Extremo_woodplank_damage01.rvmat"
	};
	damageLevel2Textures[]=
	{
		"Extremo_Assets\model\Extremo_woodplank_damage02_co.paa"
	};
	damageLevel2Materials[]=
	{
		"Extremo_Assets\model\Extremo_woodplank_damage02.rvmat"
	};
};
class Extremo_Construction_WoodWallHalf_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_WoodWallHalf_Preview.p3d";
	displayName="1/2 Wood Wall";
	hiddenSelections[]=
	{
		"Component01"
	};
	hiddenSelectionsTextures[]=
	{
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
	};
};
class Extremo_Construction_WoodWallHalf_Reinforced_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_WoodWallHalf_Preview.p3d";
	displayName="1/2 Wood Wall (Reinforced)";
	hiddenSelections[]=
	{
		"Component01"
	};
	hiddenSelectionsTextures[]=
	{
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
	};
};
class Extremo_Construction_WoodWallHalf_Reinforced_Static: Extremo_Construction_Abstract_Static
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_WoodWallHalf_Reinforced.p3d";
	displayName="1/2 Wood Wall (Reinforced)";
	armor=4000;
	hiddenSelections[]=
	{
		"WoodPlank",
		"MetalBoard"
	};
	hiddenSelectionsTextures[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank_co.paa",
		"Extremo_Assets\model\Extremo_CorrugatedMetal_co.paa"
	};
	hiddenSelectionMaterials[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank.rvmat",
		"Extremo_Assets\model\Extremo_CorrugatedMetal.rvmat"
	};
	damageLevel1Textures[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank_Damage01_co.paa",
		"Extremo_Assets\model\Extremo_CorrugatedMetal_Damage01_co.paa"
	};
	damageLevel1Materials[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank_Damage01.rvmat",
		"Extremo_Assets\model\Extremo_CorrugatedMetal_Damage01.rvmat"
	};
	damageLevel2Textures[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank_Damage02_co.paa",
		"Extremo_Assets\model\Extremo_CorrugatedMetal_Damage02_co.paa"
	};
	damageLevel2Materials[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank_Damage02.rvmat",
		"Extremo_Assets\model\Extremo_CorrugatedMetal_Damage02.rvmat"
	};
};
class Extremo_Construction_WoodWallHalf_Static: Extremo_Construction_Abstract_Static
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_WoodWallHalf.p3d";
	displayName="1/2 Wood Wall";
	armor=1000;
	hiddenSelections[]=
	{
		"WoodBoard",
		"WoodPlank"
	};
	hiddenSelectionsTextures[]=
	{
		"Extremo_Assets\model\Extremo_woodboard_co.paa",
		"Extremo_Assets\model\Extremo_woodplank_co.paa"
	};
	hiddenSelectionMaterials[]=
	{
		"Extremo_Assets\model\Extremo_woodboard.rvmat",
		"Extremo_Assets\model\Extremo_woodplank.rvmat"
	};
	damageLevel1Textures[]=
	{
		"Extremo_Assets\model\Extremo_woodboard_damage01_co.paa",
		"Extremo_Assets\model\Extremo_woodplank_damage01_co.paa"
	};
	damageLevel1Materials[]=
	{
		"Extremo_Assets\model\Extremo_woodboard_damage01.rvmat",
		"Extremo_Assets\model\Extremo_woodplank_damage01.rvmat"
	};
	damageLevel2Textures[]=
	{
		"Extremo_Assets\model\Extremo_woodboard_damage02_co.paa",
		"Extremo_Assets\model\Extremo_woodplank_damage02_co.paa"
	};
	damageLevel2Materials[]=
	{
		"Extremo_Assets\model\Extremo_woodboard_damage02.rvmat",
		"Extremo_Assets\model\Extremo_woodplank_damage02.rvmat"
	};
};
class Extremo_Construction_WoodWall_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_WoodWall_Preview.p3d";
	displayName="Wood Wall";
	hiddenSelections[]=
	{
		"Component01"
	};
	hiddenSelectionsTextures[]=
	{
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
	};
};
class Extremo_Construction_WoodWall_Reinforced_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_WoodWall_Preview.p3d";
	displayName="Wood Wall (Reinforced)";
	hiddenSelections[]=
	{
		"Component01"
	};
	hiddenSelectionsTextures[]=
	{
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
	};
};
class Extremo_Construction_WoodWall_Reinforced_Static: Extremo_Construction_Abstract_Static
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_WoodWall_Reinforced.p3d";
	displayName="Wood Wall (Reinforced)";
	armor=4000;
	hiddenSelections[]=
	{
		"WoodPlank",
		"MetalBoard"
	};
	hiddenSelectionsTextures[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank_co.paa",
		"Extremo_Assets\model\Extremo_CorrugatedMetal_co.paa"
	};
	hiddenSelectionMaterials[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank.rvmat",
		"Extremo_Assets\model\Extremo_CorrugatedMetal.rvmat"
	};
	damageLevel1Textures[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank_Damage01_co.paa",
		"Extremo_Assets\model\Extremo_CorrugatedMetal_Damage01_co.paa"
	};
	damageLevel1Materials[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank_Damage01.rvmat",
		"Extremo_Assets\model\Extremo_CorrugatedMetal_Damage01.rvmat"
	};
	damageLevel2Textures[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank_Damage02_co.paa",
		"Extremo_Assets\model\Extremo_CorrugatedMetal_Damage02_co.paa"
	};
	damageLevel2Materials[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank_Damage02.rvmat",
		"Extremo_Assets\model\Extremo_CorrugatedMetal_Damage02.rvmat"
	};
};
class Extremo_Construction_WoodWall_Static: Extremo_Construction_Abstract_Static
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_WoodWall.p3d";
	displayName="Wood Wall";
	armor=1000;
	hiddenSelections[]=
	{
		"WoodBoard",
		"WoodPlank"
	};
	hiddenSelectionsTextures[]=
	{
		"Extremo_Assets\model\Extremo_woodboard_co.paa",
		"Extremo_Assets\model\Extremo_woodplank_co.paa"
	};
	hiddenSelectionMaterials[]=
	{
		"Extremo_Assets\model\Extremo_woodboard.rvmat",
		"Extremo_Assets\model\Extremo_woodplank.rvmat"
	};
	damageLevel1Textures[]=
	{
		"Extremo_Assets\model\Extremo_woodboard_damage01_co.paa",
		"Extremo_Assets\model\Extremo_woodplank_damage01_co.paa"
	};
	damageLevel1Materials[]=
	{
		"Extremo_Assets\model\Extremo_woodboard_damage01.rvmat",
		"Extremo_Assets\model\Extremo_woodplank_damage01.rvmat"
	};
	damageLevel2Textures[]=
	{
		"Extremo_Assets\model\Extremo_woodboard_damage02_co.paa",
		"Extremo_Assets\model\Extremo_woodplank_damage02_co.paa"
	};
	damageLevel2Materials[]=
	{
		"Extremo_Assets\model\Extremo_woodboard_damage02.rvmat",
		"Extremo_Assets\model\Extremo_woodplank_damage02.rvmat"
	};
};
class Extremo_Construction_WoodWindow_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_WoodWindow_Preview.p3d";
	displayName="Wood Window";
	hiddenSelections[]=
	{
		"Component01"
	};
	hiddenSelectionsTextures[]=
	{
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
	};
};
class Extremo_Construction_WoodWindow_Reinforced_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_WoodWindow_Preview.p3d";
	displayName="Wood Window (Reinforced)";
	hiddenSelections[]=
	{
		"Component01"
	};
	hiddenSelectionsTextures[]=
	{
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
	};
};
class Extremo_Construction_WoodWindow_Reinforced_Static: Extremo_Construction_Abstract_Static
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_WoodWindow_Reinforced.p3d";
	displayName="Wood Window (Reinforced)";
	armor=4000;
	hiddenSelections[]=
	{
		"WoodPlank",
		"MetalBoard"
	};
	hiddenSelectionsTextures[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank_co.paa",
		"Extremo_Assets\model\Extremo_CorrugatedMetal_co.paa"
	};
	hiddenSelectionMaterials[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank.rvmat",
		"Extremo_Assets\model\Extremo_CorrugatedMetal.rvmat"
	};
	damageLevel1Textures[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank_Damage01_co.paa",
		"Extremo_Assets\model\Extremo_CorrugatedMetal_Damage01_co.paa"
	};
	damageLevel1Materials[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank_Damage01.rvmat",
		"Extremo_Assets\model\Extremo_CorrugatedMetal_Damage01.rvmat"
	};
	damageLevel2Textures[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank_Damage02_co.paa",
		"Extremo_Assets\model\Extremo_CorrugatedMetal_Damage02_co.paa"
	};
	damageLevel2Materials[]=
	{
		"Extremo_Assets\model\Extremo_WoodPlank_Damage02.rvmat",
		"Extremo_Assets\model\Extremo_CorrugatedMetal_Damage02.rvmat"
	};
};
class Extremo_Construction_WoodWindow_Static: Extremo_Construction_Abstract_Static
{
	scope=2;
	model="\Extremo_Assets\model\Extremo_Construction_WoodWindow.p3d";
	displayName="Wood Window";
	armor=1000;
	hiddenSelections[]=
	{
		"WoodBoard",
		"WoodPlank"
	};
	hiddenSelectionsTextures[]=
	{
		"Extremo_Assets\model\Extremo_woodboard_co.paa",
		"Extremo_Assets\model\Extremo_woodplank_co.paa"
	};
	hiddenSelectionMaterials[]=
	{
		"Extremo_Assets\model\Extremo_woodboard.rvmat",
		"Extremo_Assets\model\Extremo_woodplank.rvmat"
	};
	damageLevel1Textures[]=
	{
		"Extremo_Assets\model\Extremo_woodboard_damage01_co.paa",
		"Extremo_Assets\model\Extremo_woodplank_damage01_co.paa"
	};
	damageLevel1Materials[]=
	{
		"Extremo_Assets\model\Extremo_woodboard_damage01.rvmat",
		"Extremo_Assets\model\Extremo_woodplank_damage01.rvmat"
	};
	damageLevel2Textures[]=
	{
		"Extremo_Assets\model\Extremo_woodboard_damage02_co.paa",
		"Extremo_Assets\model\Extremo_woodplank_damage02_co.paa"
	};
	damageLevel2Materials[]=
	{
		"Extremo_Assets\model\Extremo_woodboard_damage02.rvmat",
		"Extremo_Assets\model\Extremo_woodplank_damage02.rvmat"
	};
};
class Extremo_Construction_WorkBench_Preview: Extremo_Construction_Abstract_Physics
{
	scope=2;
	model="\a3\structures_f\civ\constructions\WorkStand_F.p3d";
	displayName="Work Bench";
	hiddenSelections[]=
	{
		"Component01"
	};
	hiddenSelectionsTextures[]=
	{
		"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"
	};
};
class Extremo_Construction_WorkBench_Static: Extremo_Construction_Abstract_Static
{
	scope=2;
	displayName="Work Bench";
	model="\A3\Structures_F\Civ\Constructions\WorkStand_F.p3d";
};