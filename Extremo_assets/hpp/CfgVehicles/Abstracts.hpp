/*
	## EXTREMO Survival
	## Nikko & Happyfeet
	## https://community.bistudio.com/wiki/Arma_3:_Characters_And_Gear_Encoding_Guide
	## https://community.bistudio.com/wiki/CfgVehicles_Config_Reference
*/

//--- Base Defines
class VirtualMan_F;
class Man;
class B_Soldier_diver_base_F;
class I_G_engineer_F;
class I_G_medic_F;
class I_G_officer_F;
class I_G_Soldier_A_F;
class I_G_Soldier_exp_F;
class I_G_Soldier_F;
class I_G_Soldier_GL_F;
class I_G_Soldier_LAT_F;
class I_G_Soldier_lite_F;
class I_G_Soldier_M_F;
class I_G_Soldier_SL_F;
class I_G_Soldier_TL_F;
class C_man_1;
class Civilian;
class I_Soldier_diver_base_F;
class O_Soldier_diver_base_F;
class I_G_Soldier_AR_F;
class Zombie: Man {};

class CAManBase: Man
{
	editorCategory = "Character"; 		// Class from CfgEditorCategories. Usually used for props.
	editorSubcategory = "Men"; 		    // Class from CfgEditorSubcategories. Should be used everywhere.
	vehicleClass="";
	extCameraPosition[] = {0.35,-0.221,-1.2};// better External (third-person) camera offset relative to the vehicle's aimpoint memory point, around which the camera orbits. (float Array: {X,Z,Y} Default {0, 2, -20})
	class ViewPilot;
	class HitPoints
	{
		class HitHead;
		class HitBody;
		class HitHands;
		class HitLegs;
	};
};
class CAZombieBase: Zombie
{
	author="Nikko Renolds";
	editorCategory = "Zombie"; 		    // Class from CfgEditorCategories. Usually used for props.
	editorSubcategory = "Men"; 		    // Class from CfgEditorSubcategories. Should be used everywhere.
	side=0;
	faction="Zombie_Faction";
	picture="";
	Icon="iconMan";
	fsmDanger="-";
	moves="CfgMovesMaleSdr";
	gestures="CfgGesturesMale";
	bonePrimaryWeapon="weapon";
	formationTimeDiving=2;
	formationTimeSwimming=3;
	movesFatigue="CfgMovesFatigue";
	AnimEffectShortExhaust=0.0049999999;
	AnimEffectShortRest=0.050000001;
	oxygenCapacity=80;
	triggerAnim="A3\anims_f\data\Anim\sdr\trigger.rtm";
	woman=0;
	faceType="Man_A3";
	minGunElev=-80;
	maxGunElev=60;
	minGunTurn=-1;
	maxGunTurn=1;
	minGunTurnAI=-30;
	maxGunTurnAI=30;
	extCameraPosition[]={0.22,0.050000001,-2.2};
	class HeadLimits;
	boneHead="head";
	boneHeadCutScene="headcutscene";
	boneLEye="eyeleft";
	boneREye="eyeright";
	boneLEyelidUp="face_eyelidupperleft";
	boneREyelidUp="face_eyelidupperright";
	boneLEyelidDown="face_eyelidlowerleft";
	boneREyelidDown="face_eyelidlowerright";
	boneLPupil="l_pupila";
	boneRPupil="r_pupila";
	minHeadTurnAI=-60;
	maxHeadTurnAI=60;
	class ViewPilot
	{
		minFov=0.25;
		maxFov=1.25;
		initFov=0.75;
		initAngleX=8;
		minAngleX=-85;
		maxAngleX=85;
		initAngleY=0;
		minAngleY=-150;
		maxAngleY=150;
	};
	ISangleMod[]={0.1,0.029999999,0.1};
	ISrecoilMod[]={0,0,0.2};
	ISspeedMod[]={9.9999997e-005,9.9999997e-005,0};
	ISmaxTurn=0.5;
	ISanimMod[]={0.029999999,0.059999999,0.039999999};
	class HitPoints
	{
		class HitFace
		{
			armor=1;
			material=-1;
			name="face_hub";
			passThrough=0.80000001;
			radius=0.079999998;
			explosionShielding=0.1;
			minimalHit=0.0099999998;
		};
		class HitNeck: HitFace
		{
			armor=1;
			material=-1;
			name="neck";
			passThrough=0.80000001;
			radius=0.1;
			explosionShielding=0.5;
			minimalHit=0.0099999998;
		};
		class HitHead: HitNeck
		{
			armor=1;
			material=-1;
			name="head";
			passThrough=0.80000001;
			radius=0.2;
			explosionShielding=0.5;
			minimalHit=0.0099999998;
			depends="HitFace max HitNeck";
		};
		class HitPelvis: HitHead
		{
			armor=6;
			material=-1;
			name="pelvis";
			passThrough=0.80000001;
			radius=0.23999999;
			explosionShielding=1;
			visual="injury_body";
			minimalHit=0.0099999998;
			depends="0";
		};
		class HitAbdomen: HitPelvis
		{
			armor=1;
			material=-1;
			name="spine1";
			passThrough=0.80000001;
			radius=0.16;
			explosionShielding=1;
			visual="injury_body";
			minimalHit=0.0099999998;
		};
		class HitDiaphragm: HitAbdomen
		{
			armor=1;
			material=-1;
			name="spine2";
			passThrough=0.80000001;
			radius=0.18000001;
			explosionShielding=6;
			visual="injury_body";
			minimalHit=0.0099999998;
		};
		class HitChest: HitDiaphragm
		{
			armor=1;
			material=-1;
			name="spine3";
			passThrough=0.80000001;
			radius=0.18000001;
			explosionShielding=6;
			visual="injury_body";
			minimalHit=0.0099999998;
		};
		class HitBody: HitChest
		{
			armor=1000;
			material=-1;
			name="body";
			passThrough=1;
			radius=0;
			explosionShielding=6;
			visual="injury_body";
			minimalHit=0.0099999998;
			depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
		};
		class HitArms: HitBody
		{
			armor=3;
			material=-1;
			name="arms";
			passThrough=1;
			radius=0.1;
			explosionShielding=1;
			visual="injury_hands";
			minimalHit=0.0099999998;
			depends="0";
		};
		class HitHands: HitArms
		{
			armor=3;
			material=-1;
			name="hands";
			passThrough=1;
			radius=0.1;
			explosionShielding=1;
			visual="injury_hands";
			minimalHit=0.0099999998;
			depends="HitArms";
		};
		class HitLegs: HitHands
		{
			armor=3;
			material=-1;
			name="legs";
			passThrough=1;
			radius=0.14;
			explosionShielding=1;
			visual="injury_legs";
			minimalHit=0.0099999998;
			depends="0";
		};
		class Incapacitated: HitLegs
		{
			armor=1000;
			material=-1;
			name="body";
			passThrough=1;
			radius=0;
			explosionShielding=1;
			visual="";
			minimalHit=0;
			depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
		};
	};
	armor=2;
	armorStructural=3;
	explosionShielding=0.30000001;
	minTotalDamageThreshold=0.001;
	impactDamageMultiplier=0.5;
	selectionHeadWound="head_injury";
	selectionBodyWound="injury_body";
	selectionLArmWound="injury_hands";
	selectionRArmWound="injury_hands";
	selectionLLegWound="injury_legs";
	selectionRLegWound="injury_legs";
	selectionLArmWound1="injury_hands";
	selectionRArmWound1="injury_hands";
	selectionLLegWound1="injury_legs";
	selectionRLegWound1="injury_legs";
	selectionLArmWound2="hl";
	selectionRArmWound2="hl";
	selectionLLegWound2="hl";
	selectionRLegWound2="hl";
	selectionHeadHide="";
	selectionNeckHide="";
	memoryPointLStep="footstepL";
	memoryPointRStep="footstepR";
	memoryPointAim="aimPoint";
	memoryPointCameraTarget="camera";
	memoryPointCommonDamage="l_femur_hit";
	memoryPointLeaningAxis="leaning_axis";
	memoryPointAimingAxis="aiming_axis";
	memoryPointHeadAxis="head_axis";
	memoryPointWaterSurface="water_surface";
	selectionLBrow="lBrow";
	selectionMBrow="mBrow";
	selectionRBrow="rBrow";
	selectionLMouth="lMouth";
	selectionMMouth="mMouth";
	selectionRMouth="rMouth";
	selectionEyelid="Eyelids";
	selectionLip="LLip";
	useInternalLODInVehicles=1;
	accuracy=0;
	vehicleClass=""; 
	type=0;
	threat[]={0,0,0};
	weaponSlots="1	 + 	4	 + 12*		256	 + 	4096	 + 	2	 + 8*	16  + 12*131072";
	fsmFormation="Formation";
	leftArmToElbow[]=
	{
		"LeftArm",
		0.5,
		"LeftArmRoll",
		0
	};
	leftArmFromElbow[]=
	{
		"LeftForeArm",
		0,
		"LeftForeArmRoll",
		0.5
	};
	leftWrist="LeftHand";
	leftShoulder="LeftShoulder";
	leftHand[]=
	{
		"LeftHandThumb3",
		"LeftHandThumb2",
		"LeftHandThumb1",
		"LeftHandIndex3",
		"LeftHandIndex2",
		"LeftHandIndex1",
		"LeftHandMiddle3",
		"LeftHandMiddle2",
		"LeftHandMiddle1",
		"LeftHandRing3",
		"LeftHandRing2",
		"LeftHandRing1",
		"LeftHandRing",
		"LeftHandPinky3",
		"LeftHandPinky2",
		"LeftHandPinky1"
	};
	leftArmPoints[]=
	{
		"LeftShoulder",
		"lelbow",
		"lelbow_axis",
		"lwrist"
	};
	rightArmToElbow[]=
	{
		"rightArm",
		0.5,
		"rightArmRoll",
		0
	};
	rightArmFromElbow[]=
	{
		"rightForeArm",
		0,
		"rightForeArmRoll",
		0.5
	};
	rightWrist="rightHand";
	rightShoulder="rightShoulder";
	rightHand[]=
	{
		"rightHandThumb3",
		"rightHandThumb2",
		"rightHandThumb1",
		"rightHandIndex3",
		"rightHandIndex2",
		"rightHandIndex1",
		"rightHandMiddle3",
		"rightHandMiddle2",
		"rightHandMiddle1",
		"rightHandRing3",
		"rightHandRing2",
		"rightHandRing1",
		"rightHandRing",
		"rightHandPinky3",
		"rightHandPinky2",
		"rightHandPinky1"
	};
	rightArmPoints[]=
	{
		"rightShoulder",
		"relbow",
		"relbow_axis",
		"rwrist"
	};
	leftLegToKnee[]=
	{
		"LeftUpLeg",
		0.5,
		"LeftUpLegRoll",
		0
	};
	leftLegFromKnee[]=
	{
		"LeftLeg",
		0,
		"LeftLegRoll",
		0.5
	};
	leftHeel="leftFoot";
	leftHip="pelvis";
	leftFoot[]=
	{
		"LeftToeBase"
	};
	leftLegPoints[]=
	{
		"lfemur",
		"lknee",
		"lknee_axis",
		"lankle"
	};
	rightLegToKnee[]=
	{
		"rightUpLeg",
		0.5,
		"rightUpLegRoll",
		0
	};
	rightLegFromKnee[]=
	{
		"rightLeg",
		0,
		"rightLegRoll",
		0.5
	};
	rightHeel="rightFoot";
	rightHip="pelvis";
	rightFoot[]=
	{
		"RightToeBase"
	};
	rightLegPoints[]=
	{
		"rfemur",
		"rknee",
		"rknee_axis",
		"rankle"
	};
	launcherBone="launcher";
	handGunBone="RightHand";
	weaponBone="weapon";
	impactEffectsSea="ImpactEffectsSeaMen";
	canCarryBackPack=1;
	class UniformInfo
	{
		class SlotsInfo
		{
			class NVG: UniformSlotInfo
			{
				slotType=602;
			};
			class Scuba: UniformSlotInfo
			{
				slotType=604;
			};
			class Googles: UniformSlotInfo
			{
				slotType=603;
			};
			class Headgear: UniformSlotInfo
			{
				slotType=605;
			};
		};
	};
	grenadeThrowDir[]={0,0.2,1};
};

class SoldierWB: CAManBase
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class SoldierEB: CAManBase
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class SoldierGB: CAManBase
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class SoldierWZ: CAZombieBase
{
	author="Nikko Renolds";
	threat[]={0.80000001,0.1,0.1};
	model="\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
	modelSides[]={3,1};
	picture="";
	Icon="iconMan";
	role="";
	displayName="Zombie";
	side=0;
	faction="Zombie_Faction";
	accuracy=1.6;
	weapons[]={"Throw","Put"};
	respawnWeapons[]={"Throw","Put"};
	magazines[]={};
	class HeadLimits: HeadLimits
	{
		initAngleX=5;
		minAngleX=-40;
		maxAngleX=40;
		initAngleY=0;
		minAngleY=-60;
		maxAngleY=60;
	};
	class Wounds
	{
		tex[]={};
		mat[]={};
	};
	primaryAmmoCoef=0.40000001;
	secondaryAmmoCoef=0.2;
	handgunAmmoCoef=0.1;
	cost=100000;
}; 

class B_diver_F: B_Soldier_diver_base_F
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class B_G_engineer_F: I_G_engineer_F
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class B_G_medic_F: I_G_medic_F
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class B_G_officer_F: I_G_officer_F
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class B_G_Soldier_A_F: I_G_Soldier_A_F
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class B_G_Soldier_exp_F: I_G_Soldier_exp_F
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class B_G_Soldier_F: I_G_Soldier_F
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class B_G_Soldier_GL_F: I_G_Soldier_GL_F
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class B_G_Soldier_LAT_F: I_G_Soldier_LAT_F
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class B_G_Soldier_lite_F: I_G_Soldier_lite_F
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class B_G_Soldier_M_F: I_G_Soldier_M_F
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class B_G_Soldier_SL_F: I_G_Soldier_SL_F
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class B_G_Soldier_TL_F: I_G_Soldier_TL_F
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class B_Soldier_base_F: SoldierWB
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class B_Soldier_02_f: B_Soldier_base_F
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class B_Soldier_03_f: B_Soldier_base_F
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class B_Soldier_04_f: B_Soldier_base_F
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class B_Soldier_05_f: B_Soldier_base_F
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class B_Helipilot_F: B_Soldier_04_f
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class B_helicrew_F: B_Helipilot_F
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class B_Pilot_F: B_Soldier_05_f
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class B_RangeMaster_F: B_Soldier_base_F
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class b_soldier_survival_F: B_Soldier_base_F
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class B_Story_SF_Captain_F: B_Soldier_base_F
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class C_journalist_F: C_man_1
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class C_Driver_1_F: C_man_1
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class C_man_1_1_F: C_man_1
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class Civilian_F: Civilian
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class C_man_hunter_1_F: C_man_1
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class C_man_p_fugitive_F: C_man_1
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class C_man_p_beggar_F: C_man_p_fugitive_F
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class C_man_pilot_F: C_man_1
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class C_Marshal_F: B_RangeMaster_F
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class C_man_w_worker_F: C_man_1
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class C_scientist_F: C_man_w_worker_F
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class I_diver_F: I_Soldier_diver_base_F
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class I_G_Soldier_base_F: SoldierGB
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class I_G_Story_SF_Captain_F: B_G_Soldier_F
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class I_Soldier_base_F: SoldierGB
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class I_officer_F: I_Soldier_base_F
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class I_Soldier_03_F: I_Soldier_base_F
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class I_Soldier_04_F: I_Soldier_base_F
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class O_diver_F: O_Soldier_diver_base_F
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class O_G_engineer_F: I_G_engineer_F
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class O_G_medic_F: I_G_medic_F
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class O_G_officer_F: I_G_officer_F
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class O_G_Soldier_A_F: I_G_Soldier_A_F
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class O_G_Soldier_AR_F: I_G_Soldier_AR_F
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class O_G_Soldier_exp_F: I_G_Soldier_exp_F
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class O_G_Soldier_F: I_G_Soldier_F
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class O_G_Soldier_GL_F: I_G_Soldier_GL_F
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class O_G_Soldier_LAT_F: I_G_Soldier_LAT_F
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class O_G_Soldier_lite_F: I_G_Soldier_lite_F
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class O_G_Soldier_M_F: I_G_Soldier_M_F
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class O_G_Soldier_SL_F: I_G_Soldier_SL_F
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class O_G_Soldier_TL_F: I_G_Soldier_TL_F
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class O_Soldier_base_F: SoldierEB
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class O_officer_F: O_Soldier_base_F
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class O_Soldier_02_F: O_Soldier_base_F
{
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
};
class Z_Soldier_base_F: SoldierWZ
{
	author="Nikko Renolds";
	expansion=1;
	identityTypes[]={};
	faceType="Man_A3";
	side=0;
	faction="Zombie_Faction";
	genericNames="NATOMen";
	portrait="";
	picture="";
	icon="iconMan";
	accuracy=2.3;
	camouflage=1.4;
	minFireTime=7;
	canCarryBackPack=1;
	scope=0;
	class Wounds
	{
		tex[]={};
		mat[]=
		{
			"A3\Characters_F\BLUFOR\Data\clothing1.rvmat",
			"A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat",
			"A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat",
			"A3\Characters_F\Common\Data\basicbody.rvmat",
			"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
			"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
			"a3\characters_f\heads\data\hl_white.rvmat",
			"a3\characters_f\heads\data\hl_white_injury.rvmat",
			"a3\characters_f\heads\data\hl_white_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
			"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
			"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
			"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat",
			"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
			"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
			"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat",
			"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat",
			"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"
		};
	};
	model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
	modelSides[]={3,1};
	nakedUniform="U_BasicBody";
	uniformClass="U_B_CombatUniform_mcam";
	class UniformInfo
	{
		class SlotsInfo
		{
			class NVG: UniformSlotInfo
			{
				slotType=602;
			};
			class Scuba: UniformSlotInfo
			{
				slotType=604;
			};
			class Googles: UniformSlotInfo
			{
				slotType=603;
			};
			class Headgear: UniformSlotInfo
			{
				slotType=605;
			};
		};
	};
	armor=2;
	armorStructural=3;
	explosionShielding=0.30000001;
	hiddenSelections[]={ "Camo" };
	hiddenSelectionsTextures[]={ "\a3\characters_f\blufor\data\clothing1_co.paa" };
	class EventHandlers;
	weapons[]={"Throw","Put"};
	respawnWeapons[]={"Throw","Put"};
	Items[]={};
	RespawnItems[]={};
	magazines[]={};
	respawnMagazines[]={};
	linkedItems[]={};
	respawnLinkedItems[]={};
};

class Headgear_Base_F;
class ReammoBox;
class LootWeaponHolder: ReammoBox
{
	author="Nikko Renolds";
	displayName="Loot Weapon Holder";
	scope=1;
	scopeCurator=0;
	model="\A3\Weapons_f\dummyweapon.p3d";
	accuracy=0.2;
	forceSupply=1;
	showWeaponCargo=1;
	transportMaxMagazines=1e+009;
	transportMaxWeapons=1e+009;
	destrType="DestructNo";
	transportMaxBackpacks=0;
	isGround=1;
	icon="iconObject_1x1";
	class TransportMagazines
	{
	};
};
class ReammoBox_F;
class NATO_Box_Base;

class thing;
class thingX;
class Static;
class NonStrategic;
class Sound;
class FlagCarrier;

class Land_WorkStand_F;
class UserTexture10m_F;
class SignAd_Sponsor_F;
class SignAd_SponsorS_F;
class Land_Billboard_F;

class DemoCharge_F;
class SatchelCharge_F;
class Land_ChairWood_F;
class Land_PortableLight_single_F; 
class Land_TacticalBacon_F;



class C_Hatchback_01_F;
class C_Hatchback_01_sport_F;
class B_Truck_01_transport_F;
class HMMWV_M134;
class HMMWV_M2;
class HMMWV_MEV;
class HMMWV_UNA;
class B_MRAP_01_F;
class O_MRAP_02_F;
class Ikarus_Civ_02;
class C_Kart_01_black_F;
class LR_Ambulance_Base;
class Lada_Base;
class Landrover_Civ_02;
class C_Offroad_01_repair_F;
class I_G_Offroad_01_armed_F;
class Offroad_01_civil_base_F;
class C_Offroad_02_unarmed_orange_F;
class I_C_Offroad_02_unarmed_F;
class Octavia_Civ_01;
class SUV_Base;
class C_SUV_01_F;
class I_MRAP_03_F;
class O_T_LSV_02_unarmed_black_F;
class B_T_LSV_01_unarmed_black_F;
class B_CTRG_LSV_01_light_F;
class TractorOld;
class SUV_armored_Base;
class O_Truck_03_transport_F;
class TowingTractor;
class Tractor_Base;
class UAZ_Base;
class UAZ_Open_Base;
class Ural_RU;
class Ural_Open_RU;
class V3S_Base_EP1;
class V3S_base;
class C_Van_01_transport_F;
class C_Van_01_box_F;
class C_Van_01_fuel_F;
class volha_Base;
class I_Truck_02_transport_F;
class LandVehicle;
class Car: LandVehicle
{
	class HitPoints;
};
class Car_F: Car
{
	class HitPoints
	{
		class HitLFWheel;
		class HitLF2Wheel;
		class HitBody;
		class HitRFWheel;
		class HitRF2Wheel;
		class HitGlass1;
		class HitGlass2;
		class HitGlass3;
		class HitGlass4;
		class HitGlass5;
		class HitGlass6;
	};
	class EventHandlers;
	class AnimationSources;
};
class Quadbike_01_base_F: Car_F
{
	class Turrets;
};
class Golf_Base: Car_F
{
	model="\Extremo_assets\model\vw_golf\Extremo_VWGolf";
	icon="\Extremo_assets\texture\ui\vw_golf\icon_VWGolf_ca.paa";
	picture="\Extremo_assets\texture\ui\vw_golf\Picture_VWGolf_ca.paa";
	mapsize=5;
	displayName="Golf";
	hiddenSelections[]=
	{
		"camo1"
	};
	hiddenSelectionsTextures[]=
	{
		"\Extremo_assets\model\vw_golf\vwgolf_body_co.paa"
	};
	driveraction="Golf_Driver";
	attenuationEffectType="OpenCarAttenuation";
	armor=22;
	cost=10000;
	wheelDamageRadiusCoef=0.80000001;
	wheelDestroyRadiusCoef=0.40000001;
	maxFordingDepth=0.5;
	waterResistance=1;
	crew="C_man_1";
	faction="CIV_F";
	crewCrashProtection=0.25;
	driverLeftHandAnimName="drivewheel";
	driverRightHandAnimName="shift";
	driverRightLegAnimName="pedalR";
	slingLoadCargoMemoryPoints[]=
	{
		"SlingLoadCargo1",
		"SlingLoadCargo2",
		"SlingLoadCargo3",
		"SlingLoadCargo4"
	};
	afmax=200;
	htmax=1800;
	htmin=60;
	mfact=0;
	mfmax=100;
	tbody=0;
	normalSpeedForwardCoef=0.94999999;
	enginePower=220;
	maxOmega=581.71002;
	peakTorque=666;
	armorWheels=0.5;
	armorGlass=0.1;
	idleRPM=850;
	redRpm=4800;
	terrainCoef=2.3;
	turnCoef=1.5;
	precision=10;
	brakeDistance=1;
	acceleration=28;
	fireResistance=5;
	thrustDelay=0.2;
	brakeIdleSpeed=1.78;
	maxSpeed=234;
	fuelCapacity=64;
	wheelCircumference=2.22;
	steerAheadPlan=0.40000001;
	steerAheadSimul=0.40000001;
	predictTurnPlan=0.89999998;
	predictTurnSimul=0.5;
	wheelDamageThreshold=0.69999999;
	wheelDestroyThreshold=0.99000001;
	damperSize=0.2;
	damperForce=1;
	damperDamping=1;
	antiRollbarForceCoef=12;
	antiRollbarForceLimit=10;
	antiRollbarSpeedMin=20;
	antiRollbarSpeedMax=50;
	latency=1;
	switchTime=0.31;
	changeGearMinEffectivity[]={0.94999999,0.15000001,0.94999999,0.94999999,0.94999999,0.94999999,0.94999999};
	class complexGearbox
	{
		GearboxRatios[]=
		{
			"R1",
			-4.4749999,
			"N",
			0,
			"D1",
			2.3670001,
			"D2",
			1.67,
			"D3",
			1.238,
			"D4",
			0.99000001,
			"D5",
			0.80199999,
			"D6",
			0.40099999
		};
		TransmissionRatios[]=
		{
			"High",
			6
		};
		gearBoxMode="auto";
		moveOffGear=1;
		driveString="D";
		neutralString="N";
		reverseString="R";
		transmissionDelay=0.0099999998;
	};
	simulation="carx";
	dampersBumpCoef=0.5;
	differentialType="front_limited";
	frontRearSplit=0.30000001;
	frontBias=1.5;
	rearBias=1.3;
	centreBias=2.3;
	clutchStrength=80;
	dampingRateFullThrottle=0.079999998;
	dampingRateZeroThrottleClutchEngaged=0.34999999;
	dampingRateZeroThrottleClutchDisengaged=0.34999999;
	torqueCurve[]=
	{
		{0,0},
		{0.2,0.69999998},
		{0.30000001,0.80000001},
		{0.40000001,0.94999999},
		{0.60000002,1},
		{0.69999999,0.94999999},
		{0.89999998,0.89999998},
		{1,0.5}
	};
	class Wheels
	{
		class LF
		{
			width="0.2";
			boneName="wheel_1_1_damper";
			steering=1;
			side="left";
			center="wheel_1_1_axis";
			boundary="wheel_1_1_bound";
			mass=20;
			MOI=5.1999998;
			dampingRate=0.40000001;
			maxBrakeTorque=1900;
			maxHandBrakeTorque=0;
			suspTravelDirection[]={0,-1,0};
			suspForceAppPointOffset="wheel_1_1_axis";
			tireForceAppPointOffset="wheel_1_1_axis";
			maxCompression=0.15000001;
			mMaxDroop=0.1;
			sprungMass=398;
			springStrength=39800;
			springDamperRate=6725;
			longitudinalStiffnessPerUnitGravity=10000;
			latStiffX=25;
			latStiffY=18000;
			frictionVsSlipGraph[]=
			{
				{0,1.61},
				{0.5,1.41},
				{1,1}
			};
		};
		class LR: LF
		{
			boneName="wheel_1_2_damper";
			steering=0;
			center="wheel_1_2_axis";
			boundary="wheel_1_2_bound";
			suspForceAppPointOffset="wheel_1_2_axis";
			tireForceAppPointOffset="wheel_1_2_axis";
			maxHandBrakeTorque=3000;
		};
		class RF: LF
		{
			boneName="wheel_2_1_damper";
			center="wheel_2_1_axis";
			boundary="wheel_2_1_bound";
			suspForceAppPointOffset="wheel_2_1_axis";
			tireForceAppPointOffset="wheel_2_1_axis";
			steering=1;
			side="right";
		};
		class RR: RF
		{
			boneName="wheel_2_2_damper";
			steering=0;
			center="wheel_2_2_axis";
			boundary="wheel_2_2_bound";
			suspForceAppPointOffset="wheel_2_2_axis";
			tireForceAppPointOffset="wheel_2_2_axis";
			maxHandBrakeTorque=3000;
		};
	};
	soundAttenuationCargo[]={0.5};
	insideSoundCoef=0.69999999;
	soundGetIn[]=
	{
		"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_door",
		0.56234133,
		1
	};
	soundGetOut[]=
	{
		"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_door",
		0.56234133,
		1,
		40
	};
	soundDammage[]=
	{
		"",
		0.56234133,
		1
	};
	soundEngineOnInt[]=
	{
		"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_start",
		0.39810717,
		1
	};
	soundEngineOnExt[]=
	{
		"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_start",
		0.44668359,
		1,
		200
	};
	soundEngineOffInt[]=
	{
		"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_stop",
		0.39810717,
		1
	};
	soundEngineOffExt[]=
	{
		"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_stop",
		0.44668359,
		1,
		200
	};
	buildCrash0[]=
	{
		"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
		1,
		1,
		200
	};
	buildCrash1[]=
	{
		"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
		1,
		1,
		200
	};
	buildCrash2[]=
	{
		"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
		1,
		1,
		200
	};
	buildCrash3[]=
	{
		"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
		1,
		1,
		200
	};
	soundBuildingCrash[]=
	{
		"buildCrash0",
		0.25,
		"buildCrash1",
		0.25,
		"buildCrash2",
		0.25,
		"buildCrash3",
		0.25
	};
	WoodCrash0[]=
	{
		"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
		1,
		1,
		200
	};
	WoodCrash1[]=
	{
		"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
		1,
		1,
		200
	};
	WoodCrash2[]=
	{
		"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
		1,
		1,
		200
	};
	WoodCrash3[]=
	{
		"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
		1,
		1,
		200
	};
	soundWoodCrash[]=
	{
		"woodCrash0",
		0.25,
		"woodCrash1",
		0.25,
		"woodCrash2",
		0.25,
		"woodCrash3",
		0.25
	};
	armorCrash0[]=
	{
		"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
		1,
		1,
		200
	};
	armorCrash1[]=
	{
		"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
		1,
		1,
		200
	};
	armorCrash2[]=
	{
		"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
		1,
		1,
		200
	};
	armorCrash3[]=
	{
		"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
		1,
		1,
		200
	};
	soundArmorCrash[]=
	{
		"ArmorCrash0",
		0.25,
		"ArmorCrash1",
		0.25,
		"ArmorCrash2",
		0.25,
		"ArmorCrash3",
		0.25
	};
	class Sounds
	{
		class Idle_ext
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_engine_idle",
				0.22387211,
				1,
				150
			};
			frequency="0.9	+	((rpm/	4600) factor[(267/	4600),(767/	4600)])*0.2";
			volume="engineOn*camPos*(((rpm/	4600) factor[(200/	4600),(500/	4600)])	*	((rpm/	4600) factor[(900/	4600),(700/	4600)]))";
		};
		class Engine
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_engine_03",
				0.2818383,
				1,
				200
			};
			frequency="0.8	+	((rpm/	4600) factor[(600/	4600),(1300/	4600)])*0.2";
			volume="engineOn*camPos*(((rpm/	4600) factor[(780/	4600),(833/	4600)])	*	((rpm/	4600) factor[(1100/	4600),(967/	4600)]))";
		};
		class Engine1_ext
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_engine_05",
				0.3548134,
				1,
				240
			};
			frequency="0.8	+	((rpm/	4600) factor[(967/	4600),(1767/	4600)])*0.2";
			volume="engineOn*camPos*(((rpm/	4600) factor[(833/	4600),(1267/	4600)])	*	((rpm/	4600) factor[(1767/	4600),(1433/	4600)]))";
		};
		class Engine2_ext
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_engine_07",
				0.39810717,
				1,
				280
			};
			frequency="0.8	+	((rpm/	4600) factor[(1400/	4600),(2533/	4600)])*0.2";
			volume="engineOn*camPos*(((rpm/	4600) factor[(1400/	4600),(2033/	4600)])	*	((rpm/	4600) factor[(2733/	4600),(2200/	4600)]))";
		};
		class Engine3_ext
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_engine_09",
				0.44668359,
				1,
				320
			};
			frequency="0.8	+	((rpm/	4600) factor[(2200/	4600),(3267/	4600)])*0.2";
			volume="engineOn*camPos*(((rpm/	4600) factor[(2167/	4600),(2700/	4600)])	*	((rpm/	4600) factor[(3247/	4600),(2800/	4600)]))";
		};
		class Engine4_ext
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_engine_11",
				0.50118721,
				1,
				360
			};
			frequency="0.8	+	((rpm/	4600) factor[(2800/	4600),(4133/	4600)])*0.2";
			volume="engineOn*camPos*(((rpm/	4600) factor[(2767/	4600),(3200/	4600)])	*	((rpm/	4600) factor[(4100/	4600),(3433/	4600)]))";
		};
		class Engine5_ext
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_engine_13",
				0.56234133,
				1,
				420
			};
			frequency="0.95	+	((rpm/	4600) factor[(3400/	4600),(4600/	4600)])*0.15";
			volume="engineOn*camPos*((rpm/	4600) factor[(3400/	4600),(4067/	4600)])";
		};
		class IdleThrust
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_exhaust_idle",
				0.50118721,
				1,
				200
			};
			frequency="0.9	+	((rpm/	4600) factor[(267/	4600),(767/	4600)])*0.2";
			volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4600) factor[(200/	4600),(500/	4600)])	*	((rpm/	4600) factor[(900/	4600),(700/	4600)]))";
		};
		class EngineThrust
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_exhaust_03",
				0.56234133,
				1,
				250
			};
			frequency="0.8	+	((rpm/	4600) factor[(600/	4600),(1300/	4600)])*0.2";
			volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4600) factor[(780/	4600),(833/	4600)])	*	((rpm/	4600) factor[(1100/	4600),(967/	4600)]))";
		};
		class Engine1_Thrust_ext
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_exhaust_05",
				0.63095737,
				1,
				280
			};
			frequency="0.8	+	((rpm/	4600) factor[(967/	4600),(1767/	4600)])*0.2";
			volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4600) factor[(833/	4600),(1267/	4600)])	*	((rpm/	4600) factor[(1767/	4600),(1433/	4600)]))";
		};
		class Engine2_Thrust_ext
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_exhaust_07",
				0.70794576,
				1,
				320
			};
			frequency="0.8	+	((rpm/	4600) factor[(1400/	4600),(2533/	4600)])*0.2";
			volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4600) factor[(1400/	4600),(2033/	4600)])	*	((rpm/	4600) factor[(2733/	4600),(2200/	4600)]))";
		};
		class Engine3_Thrust_ext
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_exhaust_09",
				0.79432821,
				1,
				360
			};
			frequency="0.8	+	((rpm/	4600) factor[(2200/	4600),(3267/	4600)])*0.2";
			volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4600) factor[(2167/	4600),(2700/	4600)])	*	((rpm/	4600) factor[(3247/	4600),(2800/	4600)]))";
		};
		class Engine4_Thrust_ext
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_exhaust_11",
				1,
				1,
				400
			};
			frequency="0.8	+	((rpm/	4600) factor[(2800/	4600),(4133/	4600)])*0.3";
			volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4600) factor[(2767/	4600),(3200/	4600)])	*	((rpm/	4600) factor[(4100/	4600),(3433/	4600)]))";
		};
		class Engine5_Thrust_ext
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_exhaust_13",
				1.2589254,
				1,
				450
			};
			frequency="0.9	+	((rpm/	4600) factor[(3400/	4600),(4600/	4600)])*0.2";
			volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	4600) factor[(3400/	4600),(4067/	4600)])";
		};
		class Idle_int
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_engine_idle_int",
				0.17782794,
				1
			};
			frequency="0.9	+	((rpm/	4600) factor[(267/	4600),(767/	4600)])*0.2";
			volume="engineOn*(1-camPos)*(((rpm/	4600) factor[(200/	4600),(500/	4600)])	*	((rpm/	4600) factor[(900/	4600),(700/	4600)]))";
		};
		class Engine_int
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_engine_03_int",
				0.19952622,
				1
			};
			frequency="0.8	+	((rpm/	4600) factor[(600/	4600),(1300/	4600)])*0.2";
			volume="engineOn*(1-camPos)*(((rpm/	4600) factor[(780/	4600),(833/	4600)])	*	((rpm/	4600) factor[(1100/	4600),(967/	4600)]))";
		};
		class Engine1_int
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_engine_05_int",
				0.25118864,
				1
			};
			frequency="0.8	+	((rpm/	4600) factor[(967/	4600),(1767/	4600)])*0.2";
			volume="engineOn*(1-camPos)*(((rpm/	4600) factor[(833/	4600),(1267/	4600)])	*	((rpm/	4600) factor[(1767/	4600),(1433/	4600)]))";
		};
		class Engine2_int
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_engine_07_int",
				0.2818383,
				1
			};
			frequency="0.8	+	((rpm/	4600) factor[(1400/	4600),(2533/	4600)])*0.2";
			volume="engineOn*(1-camPos)*(((rpm/	4600) factor[(1400/	4600),(2033/	4600)])	*	((rpm/	4600) factor[(2733/	4600),(2200/	4600)]))";
		};
		class Engine3_int
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_engine_09_int",
				0.31622776,
				1
			};
			frequency="0.8	+	((rpm/	4600) factor[(2200/	4600),(3267/	4600)])*0.2";
			volume="engineOn*(1-camPos)*(((rpm/	4600) factor[(2167/	4600),(2700/	4600)])	*	((rpm/	4600) factor[(3247/	4600),(2800/	4600)]))";
		};
		class Engine4_int
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_engine_11_int",
				0.3548134,
				1
			};
			frequency="0.8	+	((rpm/	4600) factor[(2800/	4600),(4133/	4600)])*0.2";
			volume="engineOn*(1-camPos)*(((rpm/	4600) factor[(2767/	4600),(3200/	4600)])	*	((rpm/	4600) factor[(4100/	4600),(3433/	4600)]))";
		};
		class Engine5_int
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_engine_13_int",
				0.50118721,
				1
			};
			frequency="0.95	+	((rpm/	4600) factor[(3400/	4600),(4600/	4600)])*0.15";
			volume="engineOn*(1-camPos)*((rpm/	4600) factor[(3400/	4600),(4067/	4600)])";
		};
		class IdleThrust_int
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_exhaust_idle_int",
				0.31622776,
				1
			};
			frequency="0.9	+	((rpm/	4600) factor[(267/	4600),(767/	4600)])*0.2";
			volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4600) factor[(200/	4600),(500/	4600)])	*	((rpm/	4600) factor[(900/	4600),(700/	4600)]))";
		};
		class EngineThrust_int
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_exhaust_03_int",
				0.3548134,
				1
			};
			frequency="0.8	+	((rpm/	4600) factor[(600/	4600),(1300/	4600)])*0.2";
			volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4600) factor[(780/	4600),(833/	4600)])	*	((rpm/	4600) factor[(1100/	4600),(967/	4600)]))";
		};
		class Engine1_Thrust_int
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_exhaust_05_int",
				0.39810717,
				1
			};
			frequency="0.8	+	((rpm/	4600) factor[(967/	4600),(1767/	4600)])*0.2";
			volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4600) factor[(833/	4600),(1267/	4600)])	*	((rpm/	4600) factor[(1767/	4600),(1433/	4600)]))";
		};
		class Engine2_Thrust_int
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_exhaust_07_int",
				0.44668359,
				1
			};
			frequency="0.8	+	((rpm/	4600) factor[(1400/	4600),(2533/	4600)])*0.2";
			volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4600) factor[(1400/	4600),(2033/	4600)])	*	((rpm/	4600) factor[(2733/	4600),(2200/	4600)]))";
		};
		class Engine3_Thrust_int
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_exhaust_09_int",
				0.50118721,
				1
			};
			frequency="0.8	+	((rpm/	4600) factor[(2200/	4600),(3267/	4600)])*0.2";
			volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4600) factor[(2167/	4600),(2700/	4600)])	*	((rpm/	4600) factor[(3247/	4600),(2800/	4600)]))";
		};
		class Engine4_Thrust_int
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_exhaust_11_int",
				0.56234133,
				1
			};
			frequency="0.8	+	((rpm/	4600) factor[(2800/	4600),(4133/	4600)])*0.3";
			volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4600) factor[(2767/	4600),(3200/	4600)])	*	((rpm/	4600) factor[(4100/	4600),(3433/	4600)]))";
		};
		class Engine5_Thrust_int
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_exhaust_13_int",
				0.63095737,
				1
			};
			frequency="0.9	+	((rpm/	4600) factor[(3400/	4600),(4600/	4600)])*0.2";
			volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	4600) factor[(3400/	4600),(4067/	4600)])";
		};
		class Movement
		{
			sound="soundEnviron";
			frequency="1";
			volume="0";
		};
		class TiresRockOut
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",
				1.9952624,
				1,
				60
			};
			frequency="1";
			volume="camPos*rock*(speed factor[2, 20])";
		};
		class TiresSandOut
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",
				1.9952624,
				1,
				60
			};
			frequency="1";
			volume="camPos*sand*(speed factor[2, 20])";
		};
		class TiresGrassOut
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",
				1.9952624,
				1,
				60
			};
			frequency="1";
			volume="camPos*grass*(speed factor[2, 20])";
		};
		class TiresMudOut
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",
				1.9952624,
				1,
				60
			};
			frequency="1";
			volume="camPos*mud*(speed factor[2, 20])";
		};
		class TiresGravelOut
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",
				1.9952624,
				1,
				60
			};
			frequency="1";
			volume="camPos*gravel*(speed factor[2, 20])";
		};
		class TiresAsphaltOut
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",
				1.9952624,
				1,
				60
			};
			frequency="1";
			volume="camPos*asphalt*(speed factor[2, 20])";
		};
		class NoiseOut
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3",
				2.5118864,
				1,
				90
			};
			frequency="1";
			volume="camPos*(damper0 max 0.02)*(speed factor[0, 8])";
		};
		class TiresRockIn
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",
				1.9952624,
				1
			};
			frequency="1";
			volume="(1-camPos)*rock*(speed factor[2, 20])";
		};
		class TiresSandIn
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",
				1.9952624,
				1
			};
			frequency="1";
			volume="(1-camPos)*sand*(speed factor[2, 20])";
		};
		class TiresGrassIn
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2",
				1.9952624,
				1
			};
			frequency="1";
			volume="(1-camPos)*grass*(speed factor[2, 20])";
		};
		class TiresMudIn
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",
				1.9952624,
				1
			};
			frequency="1";
			volume="(1-camPos)*mud*(speed factor[2, 20])";
		};
		class TiresGravelIn
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",
				1.9952624,
				1
			};
			frequency="1";
			volume="(1-camPos)*gravel*(speed factor[2, 20])";
		};
		class TiresAsphaltIn
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2",
				1.9952624,
				1
			};
			frequency="1";
			volume="(1-camPos)*asphalt*(speed factor[2, 20])";
		};
		class NoiseIn
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",
				3.9810717,
				1
			};
			frequency="1";
			volume="(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
		};
		class breaking_ext_road
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
				1.4125376,
				1,
				80
			};
			frequency=1;
			volume="engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
		};
		class acceleration_ext_road
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
				1.4125376,
				1,
				80
			};
			frequency=1;
			volume="engineOn*camPos*asphalt*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
		};
		class turn_left_ext_road
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
				1.4125376,
				1,
				80
			};
			frequency=1;
			volume="engineOn*camPos*asphalt*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
		};
		class turn_right_ext_road
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
				1.4125376,
				1,
				80
			};
			frequency=1;
			volume="engineOn*camPos*asphalt*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
		};
		class breaking_ext_dirt
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking",
				1.4125376,
				1,
				60
			};
			frequency=1;
			volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
		};
		class acceleration_ext_dirt
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration",
				1.4125376,
				1,
				60
			};
			frequency=1;
			volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1])";
		};
		class turn_left_ext_dirt
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",
				1.4125376,
				1,
				60
			};
			frequency=1;
			volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
		};
		class turn_right_ext_dirt
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",
				1.4125376,
				1,
				60
			};
			frequency=1;
			volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
		};
		class breaking_int_road
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
				3.1622777,
				1
			};
			frequency=1;
			volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
		};
		class acceleration_int_road
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
				3.1622777,
				1
			};
			frequency=1;
			volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
		};
		class turn_left_int_road
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
				3.1622777,
				1
			};
			frequency=1;
			volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
		};
		class turn_right_int_road
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
				3.1622777,
				1
			};
			frequency=1;
			volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
		};
		class breaking_int_dirt
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int",
				3.1622777,
				1
			};
			frequency=1;
			volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-01, -0.4])*(Speed Factor[2, 15])";
		};
		class acceleration_int_dirt
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int",
				3.1622777,
				1
			};
			frequency=1;
			volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
		};
		class turn_left_int_dirt
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",
				3.1622777,
				1
			};
			frequency=1;
			volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
		};
		class turn_right_int_dirt
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",
				3.1622777,
				1
			};
			frequency=1;
			volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
		};
	};
	class Turrets
	{
	};
	cargoaction[]=
	{
		"Golf_Cargo01",
		"Golf_Cargo02",
		"Golf_Cargo02",
		"Golf_Cargo03"
	};
	memorypointsgetincargo[]=
	{
		"pos cargo 1",
		"pos cargo 2",
		"pos cargo 3",
		"pos cargo 4"
	};
	memorypointsgetincargodir[]=
	{
		"pos cargo dir 1",
		"pos cargo dir 2",
		"pos cargo dir 3",
		"pos cargo dir 4"
	};
	driverDoor="Door_LF";
	cargoDoors[]=
	{
		"Door_RF",
		"Door_LB",
		"Door_RB",
		"Trunk"
	};
	driverCompartments="Compartment1";
	cargoCompartments[]=
	{
		"Compartment1",
		"Compartment2",
		"Compartment2",
		"Compartment3"
	};
	cargoProxyIndexes[]={1,2,3,4};
	getInProxyOrder[]={1,2,3,4,5};
	getInAction="GetInOffroad";
	getOutAction="GetOutLow";
	cargoGetInAction[]=
	{
		"GetInLow"
	};
	cargoGetOutAction[]=
	{
		"GetOutLow"
	};
	maximumLoad=4000;
	transportMaxWeapons=20;
	transportMaxMagazines=150;
	transportMaxBackpacks=7;
	transportSoldier=4;
	supplyRadius=5;
	class AnimationSources: AnimationSources
	{
		class Door_LF
		{
			source="door";
			animPeriod=0.80000001;
		};
		class Door_RF
		{
			source="door";
			animPeriod=0.80000001;
		};
		class Trunk: Door_LF
		{
		};
		class Door_1_1: Door_LF
		{
		};	
		class Door_1_2: Door_RF
		{
		};	
	};
	class UserActions
	{
		class openTrunk
		{
			displayName="Open Trunk";
			position="trunk_action";
			radius=1;
			showWindow=0;
			condition="(this animationPhase ""trunk"" < 0.5)";
			statement="this animateDoor [""trunk"",1]";
			onlyForPlayer=0;
		};
		class closeTrunk: openTrunk
		{
			displayName="Close Trunk";
			condition="(this animationPhase ""trunk"" > 0.5)";
			statement="this animateDoor [""trunk"",0]";
		};
	};
	class HitPoints: HitPoints
	{
		class HitLFWheel: HitLFWheel
		{
			armor=0.175;
			passThrough=0.30000001;
		};
		class HitLF2Wheel: HitLF2Wheel
		{
			armor=0.175;
			passThrough=0.30000001;
		};
		class HitRFWheel: HitRFWheel
		{
			armor=0.175;
			passThrough=0.30000001;
		};
		class HitRF2Wheel: HitRF2Wheel
		{
			armor=0.175;
			passThrough=0.30000001;
		};
		class HitFuel
		{
			armor=0.5;
			material=-1;
			name="palivo";
			visual="";
			passThrough=0.2;
		};
		class HitEngine
		{
			armor=0.5;
			material=-1;
			name="motor";
			visual="";
			passThrough=0.2;
		};
		class HitBody: HitBody
		{
			name="karoserie";
			visual="camo1";
			passThrough=1;
		};
		class HitGlass1: HitGlass1
		{
			armor=0.1;
		};
		class HitGlass2: HitGlass2
		{
			armor=0.050000001;
		};
		class HitGlass3: HitGlass3
		{
			armor=0.050000001;
		};
		class HitGlass4: HitGlass4
		{
			visual="glass4";
			armor=0.050000001;
		};
		class HitGlass5: HitGlass5
		{
			armor=0.050000001;
		};
		class HitGlass6: HitGlass6
		{
			armor=0.050000001;
		};
	};
	memoryPointTrackFLL="TrackFLL";
	memoryPointTrackFLR="TrackFLR";
	memoryPointTrackBLL="TrackBLL";
	memoryPointTrackBLR="TrackBLR";
	memoryPointTrackFRL="TrackFRL";
	memoryPointTrackFRR="TrackFRR";
	memoryPointTrackBRL="TrackBRL";
	memoryPointTrackBRR="TrackBRR";
	dustFrontLeftPos="dustFrontLeft";
	dustFrontRightPos="dustFrontRight";
	dustBackLeftPos="dustBackLeft";
	dustBackRightPos="dustBackRight";
	class Damage
	{
		mat[]={};
		tex[]={};
	};
	class Exhausts
	{
		class Exhaust1
		{
			position="exhaust";
			direction="exhaust_dir";
			effect="ExhaustEffectHEMTT";
		};
	};
	class Reflectors
	{
		class LSvetla
		{
			color[]={1700,1600,1500};
			ambient[]={4,4,4};
			position="LightCarHeadL01";
			direction="LightCarHeadL01_end";
			hitpoint="Light_L";
			selection="Light_L";
			size=1;
			innerAngle=30;
			outerAngle=100;
			coneFadeCoef=10;
			intensity=1.5;
			useFlare=1;
			dayLight=0;
			flareSize=0.85000002;
			class Attenuation
			{
				start=1;
				constant=0;
				linear=0;
				quadratic=0.25;
				hardLimitStart=30;
				hardLimitEnd=60;
			};
		};
		class RSvetla: LSvetla
		{
			position="LightCarHeadR01";
			direction="LightCarHeadR01_end";
			hitpoint="Light_R";
			selection="Light_R";
		};
	};
	aggregateReflectors[]=
	{
		
		{
			"LSvetla",
			"RSvetla"
		}
	};
	class RenderTargets
	{
		class LeftMirror
		{
			renderTarget="rendertarget0";
			class CameraView1
			{
				pointPosition="m1p";
				pointDirection="m1d";
				renderQuality=2;
				renderVisionMode=4;
				fov=0.5;
			};
		};
		class RightMirror
		{
			renderTarget="rendertarget1";
			class CameraView1
			{
				pointPosition="m2p";
				pointDirection="m2d";
				renderQuality=2;
				renderVisionMode=4;
				fov=0.69999999;
			};
		};
		class BackMirror
		{
			renderTarget="rendertarget2";
			class CameraView1
			{
				pointPosition="m3p";
				pointDirection="m3d";
				renderQuality=2;
				renderVisionMode=4;
				fov=0.69999999;
			};
		};
	};
};
class BMW_Base: Car_F
{
	model="\Extremo_assets\model\2002bmwturbo\bmw2002turbo";
	icon="\Extremo_assets\texture\ui\vw_golf\icon_VWGolf_ca.paa";
	picture="\Extremo_assets\texture\ui\vw_golf\Picture_VWGolf_ca.paa";
	mapsize=5;
	displayName="BMW";
	hiddenSelections[]={};
	hiddenSelectionsTextures[]={};
	driveraction="Golf_Driver";
	attenuationEffectType="OpenCarAttenuation";
	armor=22;
	cost=10000;
	wheelDamageRadiusCoef=0.80000001;
	wheelDestroyRadiusCoef=0.40000001;
	maxFordingDepth=0.5;
	waterResistance=1;
	crew="C_man_1";
	faction="CIV_F";
	crewCrashProtection=0.25;
	driverLeftHandAnimName="drivewheel";
	driverRightHandAnimName="shift";
	driverRightLegAnimName="pedalR";
	slingLoadCargoMemoryPoints[]=
	{
		"SlingLoadCargo1",
		"SlingLoadCargo2",
		"SlingLoadCargo3",
		"SlingLoadCargo4"
	};
	afmax=200;
	htmax=1800;
	htmin=60;
	mfact=0;
	mfmax=100;
	tbody=0;
	normalSpeedForwardCoef=0.94999999;
	enginePower=220;
	maxOmega=581.71002;
	peakTorque=666;
	armorWheels=0.5;
	armorGlass=0.1;
	idleRPM=850;
	redRpm=4800;
	terrainCoef=2.3;
	turnCoef=1.5;
	precision=10;
	brakeDistance=1;
	acceleration=28;
	fireResistance=5;
	thrustDelay=0.2;
	brakeIdleSpeed=1.78;
	maxSpeed=234;
	fuelCapacity=64;
	wheelCircumference=2.22;
	steerAheadPlan=0.40000001;
	steerAheadSimul=0.40000001;
	predictTurnPlan=0.89999998;
	predictTurnSimul=0.5;
	wheelDamageThreshold=0.69999999;
	wheelDestroyThreshold=0.99000001;
	damperSize=0.2;
	damperForce=1;
	damperDamping=1;
	antiRollbarForceCoef=12;
	antiRollbarForceLimit=10;
	antiRollbarSpeedMin=20;
	antiRollbarSpeedMax=50;
	latency=1;
	switchTime=0.31;
	changeGearMinEffectivity[]={0.94999999,0.15000001,0.94999999,0.94999999,0.94999999,0.94999999,0.94999999};
	class complexGearbox
	{
		GearboxRatios[]=
		{
			"R1",
			-4.4749999,
			"N",
			0,
			"D1",
			2.3670001,
			"D2",
			1.67,
			"D3",
			1.238,
			"D4",
			0.99000001,
			"D5",
			0.80199999,
			"D6",
			0.40099999
		};
		TransmissionRatios[]=
		{
			"High",
			6
		};
		gearBoxMode="auto";
		moveOffGear=1;
		driveString="D";
		neutralString="N";
		reverseString="R";
		transmissionDelay=0.0099999998;
	};
	simulation="carx";
	dampersBumpCoef=0.5;
	differentialType="front_limited";
	frontRearSplit=0.30000001;
	frontBias=1.5;
	rearBias=1.3;
	centreBias=2.3;
	clutchStrength=80;
	dampingRateFullThrottle=0.079999998;
	dampingRateZeroThrottleClutchEngaged=0.34999999;
	dampingRateZeroThrottleClutchDisengaged=0.34999999;
	torqueCurve[]=
	{
		{0,0},
		{0.2,0.69999998},
		{0.30000001,0.80000001},
		{0.40000001,0.94999999},
		{0.60000002,1},
		{0.69999999,0.94999999},
		{0.89999998,0.89999998},
		{1,0.5}
	};
	class Wheels
	{
		class LF
		{
			width="0.2";
			boneName="wheel_1_1_damper";
			steering=1;
			side="left";
			center="wheel_1_1_axis";
			boundary="wheel_1_1_bound";
			mass=20;
			MOI=5.1999998;
			dampingRate=0.40000001;
			maxBrakeTorque=1900;
			maxHandBrakeTorque=0;
			suspTravelDirection[]={0,-1,0};
			suspForceAppPointOffset="wheel_1_1_axis";
			tireForceAppPointOffset="wheel_1_1_axis";
			maxCompression=0.15000001;
			mMaxDroop=0.1;
			sprungMass=398;
			springStrength=39800;
			springDamperRate=6725;
			longitudinalStiffnessPerUnitGravity=10000;
			latStiffX=25;
			latStiffY=18000;
			frictionVsSlipGraph[]=
			{
				{0,1.61},
				{0.5,1.41},
				{1,1}
			};
		};
		class LR: LF
		{
			boneName="wheel_1_2_damper";
			steering=0;
			center="wheel_1_2_axis";
			boundary="wheel_1_2_bound";
			suspForceAppPointOffset="wheel_1_2_axis";
			tireForceAppPointOffset="wheel_1_2_axis";
			maxHandBrakeTorque=3000;
		};
		class RF: LF
		{
			boneName="wheel_2_1_damper";
			center="wheel_2_1_axis";
			boundary="wheel_2_1_bound";
			suspForceAppPointOffset="wheel_2_1_axis";
			tireForceAppPointOffset="wheel_2_1_axis";
			steering=1;
			side="right";
		};
		class RR: RF
		{
			boneName="wheel_2_2_damper";
			steering=0;
			center="wheel_2_2_axis";
			boundary="wheel_2_2_bound";
			suspForceAppPointOffset="wheel_2_2_axis";
			tireForceAppPointOffset="wheel_2_2_axis";
			maxHandBrakeTorque=3000;
		};
	};
	soundAttenuationCargo[]={0.5};
	insideSoundCoef=0.69999999;
	soundGetIn[]=
	{
		"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_door",
		0.56234133,
		1
	};
	soundGetOut[]=
	{
		"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_door",
		0.56234133,
		1,
		40
	};
	soundDammage[]=
	{
		"",
		0.56234133,
		1
	};
	soundEngineOnInt[]=
	{
		"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_start",
		0.39810717,
		1
	};
	soundEngineOnExt[]=
	{
		"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_start",
		0.44668359,
		1,
		200
	};
	soundEngineOffInt[]=
	{
		"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_stop",
		0.39810717,
		1
	};
	soundEngineOffExt[]=
	{
		"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_stop",
		0.44668359,
		1,
		200
	};
	buildCrash0[]=
	{
		"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
		1,
		1,
		200
	};
	buildCrash1[]=
	{
		"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
		1,
		1,
		200
	};
	buildCrash2[]=
	{
		"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
		1,
		1,
		200
	};
	buildCrash3[]=
	{
		"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
		1,
		1,
		200
	};
	soundBuildingCrash[]=
	{
		"buildCrash0",
		0.25,
		"buildCrash1",
		0.25,
		"buildCrash2",
		0.25,
		"buildCrash3",
		0.25
	};
	WoodCrash0[]=
	{
		"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
		1,
		1,
		200
	};
	WoodCrash1[]=
	{
		"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
		1,
		1,
		200
	};
	WoodCrash2[]=
	{
		"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
		1,
		1,
		200
	};
	WoodCrash3[]=
	{
		"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
		1,
		1,
		200
	};
	soundWoodCrash[]=
	{
		"woodCrash0",
		0.25,
		"woodCrash1",
		0.25,
		"woodCrash2",
		0.25,
		"woodCrash3",
		0.25
	};
	armorCrash0[]=
	{
		"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
		1,
		1,
		200
	};
	armorCrash1[]=
	{
		"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
		1,
		1,
		200
	};
	armorCrash2[]=
	{
		"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
		1,
		1,
		200
	};
	armorCrash3[]=
	{
		"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
		1,
		1,
		200
	};
	soundArmorCrash[]=
	{
		"ArmorCrash0",
		0.25,
		"ArmorCrash1",
		0.25,
		"ArmorCrash2",
		0.25,
		"ArmorCrash3",
		0.25
	};
	class Sounds
	{
		class Idle_ext
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_engine_idle",
				0.22387211,
				1,
				150
			};
			frequency="0.9	+	((rpm/	4600) factor[(267/	4600),(767/	4600)])*0.2";
			volume="engineOn*camPos*(((rpm/	4600) factor[(200/	4600),(500/	4600)])	*	((rpm/	4600) factor[(900/	4600),(700/	4600)]))";
		};
		class Engine
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_engine_03",
				0.2818383,
				1,
				200
			};
			frequency="0.8	+	((rpm/	4600) factor[(600/	4600),(1300/	4600)])*0.2";
			volume="engineOn*camPos*(((rpm/	4600) factor[(780/	4600),(833/	4600)])	*	((rpm/	4600) factor[(1100/	4600),(967/	4600)]))";
		};
		class Engine1_ext
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_engine_05",
				0.3548134,
				1,
				240
			};
			frequency="0.8	+	((rpm/	4600) factor[(967/	4600),(1767/	4600)])*0.2";
			volume="engineOn*camPos*(((rpm/	4600) factor[(833/	4600),(1267/	4600)])	*	((rpm/	4600) factor[(1767/	4600),(1433/	4600)]))";
		};
		class Engine2_ext
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_engine_07",
				0.39810717,
				1,
				280
			};
			frequency="0.8	+	((rpm/	4600) factor[(1400/	4600),(2533/	4600)])*0.2";
			volume="engineOn*camPos*(((rpm/	4600) factor[(1400/	4600),(2033/	4600)])	*	((rpm/	4600) factor[(2733/	4600),(2200/	4600)]))";
		};
		class Engine3_ext
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_engine_09",
				0.44668359,
				1,
				320
			};
			frequency="0.8	+	((rpm/	4600) factor[(2200/	4600),(3267/	4600)])*0.2";
			volume="engineOn*camPos*(((rpm/	4600) factor[(2167/	4600),(2700/	4600)])	*	((rpm/	4600) factor[(3247/	4600),(2800/	4600)]))";
		};
		class Engine4_ext
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_engine_11",
				0.50118721,
				1,
				360
			};
			frequency="0.8	+	((rpm/	4600) factor[(2800/	4600),(4133/	4600)])*0.2";
			volume="engineOn*camPos*(((rpm/	4600) factor[(2767/	4600),(3200/	4600)])	*	((rpm/	4600) factor[(4100/	4600),(3433/	4600)]))";
		};
		class Engine5_ext
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_engine_13",
				0.56234133,
				1,
				420
			};
			frequency="0.95	+	((rpm/	4600) factor[(3400/	4600),(4600/	4600)])*0.15";
			volume="engineOn*camPos*((rpm/	4600) factor[(3400/	4600),(4067/	4600)])";
		};
		class IdleThrust
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_exhaust_idle",
				0.50118721,
				1,
				200
			};
			frequency="0.9	+	((rpm/	4600) factor[(267/	4600),(767/	4600)])*0.2";
			volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4600) factor[(200/	4600),(500/	4600)])	*	((rpm/	4600) factor[(900/	4600),(700/	4600)]))";
		};
		class EngineThrust
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_exhaust_03",
				0.56234133,
				1,
				250
			};
			frequency="0.8	+	((rpm/	4600) factor[(600/	4600),(1300/	4600)])*0.2";
			volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4600) factor[(780/	4600),(833/	4600)])	*	((rpm/	4600) factor[(1100/	4600),(967/	4600)]))";
		};
		class Engine1_Thrust_ext
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_exhaust_05",
				0.63095737,
				1,
				280
			};
			frequency="0.8	+	((rpm/	4600) factor[(967/	4600),(1767/	4600)])*0.2";
			volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4600) factor[(833/	4600),(1267/	4600)])	*	((rpm/	4600) factor[(1767/	4600),(1433/	4600)]))";
		};
		class Engine2_Thrust_ext
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_exhaust_07",
				0.70794576,
				1,
				320
			};
			frequency="0.8	+	((rpm/	4600) factor[(1400/	4600),(2533/	4600)])*0.2";
			volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4600) factor[(1400/	4600),(2033/	4600)])	*	((rpm/	4600) factor[(2733/	4600),(2200/	4600)]))";
		};
		class Engine3_Thrust_ext
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_exhaust_09",
				0.79432821,
				1,
				360
			};
			frequency="0.8	+	((rpm/	4600) factor[(2200/	4600),(3267/	4600)])*0.2";
			volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4600) factor[(2167/	4600),(2700/	4600)])	*	((rpm/	4600) factor[(3247/	4600),(2800/	4600)]))";
		};
		class Engine4_Thrust_ext
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_exhaust_11",
				1,
				1,
				400
			};
			frequency="0.8	+	((rpm/	4600) factor[(2800/	4600),(4133/	4600)])*0.3";
			volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4600) factor[(2767/	4600),(3200/	4600)])	*	((rpm/	4600) factor[(4100/	4600),(3433/	4600)]))";
		};
		class Engine5_Thrust_ext
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_exhaust_13",
				1.2589254,
				1,
				450
			};
			frequency="0.9	+	((rpm/	4600) factor[(3400/	4600),(4600/	4600)])*0.2";
			volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	4600) factor[(3400/	4600),(4067/	4600)])";
		};
		class Idle_int
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_engine_idle_int",
				0.17782794,
				1
			};
			frequency="0.9	+	((rpm/	4600) factor[(267/	4600),(767/	4600)])*0.2";
			volume="engineOn*(1-camPos)*(((rpm/	4600) factor[(200/	4600),(500/	4600)])	*	((rpm/	4600) factor[(900/	4600),(700/	4600)]))";
		};
		class Engine_int
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_engine_03_int",
				0.19952622,
				1
			};
			frequency="0.8	+	((rpm/	4600) factor[(600/	4600),(1300/	4600)])*0.2";
			volume="engineOn*(1-camPos)*(((rpm/	4600) factor[(780/	4600),(833/	4600)])	*	((rpm/	4600) factor[(1100/	4600),(967/	4600)]))";
		};
		class Engine1_int
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_engine_05_int",
				0.25118864,
				1
			};
			frequency="0.8	+	((rpm/	4600) factor[(967/	4600),(1767/	4600)])*0.2";
			volume="engineOn*(1-camPos)*(((rpm/	4600) factor[(833/	4600),(1267/	4600)])	*	((rpm/	4600) factor[(1767/	4600),(1433/	4600)]))";
		};
		class Engine2_int
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_engine_07_int",
				0.2818383,
				1
			};
			frequency="0.8	+	((rpm/	4600) factor[(1400/	4600),(2533/	4600)])*0.2";
			volume="engineOn*(1-camPos)*(((rpm/	4600) factor[(1400/	4600),(2033/	4600)])	*	((rpm/	4600) factor[(2733/	4600),(2200/	4600)]))";
		};
		class Engine3_int
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_engine_09_int",
				0.31622776,
				1
			};
			frequency="0.8	+	((rpm/	4600) factor[(2200/	4600),(3267/	4600)])*0.2";
			volume="engineOn*(1-camPos)*(((rpm/	4600) factor[(2167/	4600),(2700/	4600)])	*	((rpm/	4600) factor[(3247/	4600),(2800/	4600)]))";
		};
		class Engine4_int
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_engine_11_int",
				0.3548134,
				1
			};
			frequency="0.8	+	((rpm/	4600) factor[(2800/	4600),(4133/	4600)])*0.2";
			volume="engineOn*(1-camPos)*(((rpm/	4600) factor[(2767/	4600),(3200/	4600)])	*	((rpm/	4600) factor[(4100/	4600),(3433/	4600)]))";
		};
		class Engine5_int
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_engine_13_int",
				0.50118721,
				1
			};
			frequency="0.95	+	((rpm/	4600) factor[(3400/	4600),(4600/	4600)])*0.15";
			volume="engineOn*(1-camPos)*((rpm/	4600) factor[(3400/	4600),(4067/	4600)])";
		};
		class IdleThrust_int
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_exhaust_idle_int",
				0.31622776,
				1
			};
			frequency="0.9	+	((rpm/	4600) factor[(267/	4600),(767/	4600)])*0.2";
			volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4600) factor[(200/	4600),(500/	4600)])	*	((rpm/	4600) factor[(900/	4600),(700/	4600)]))";
		};
		class EngineThrust_int
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_exhaust_03_int",
				0.3548134,
				1
			};
			frequency="0.8	+	((rpm/	4600) factor[(600/	4600),(1300/	4600)])*0.2";
			volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4600) factor[(780/	4600),(833/	4600)])	*	((rpm/	4600) factor[(1100/	4600),(967/	4600)]))";
		};
		class Engine1_Thrust_int
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_exhaust_05_int",
				0.39810717,
				1
			};
			frequency="0.8	+	((rpm/	4600) factor[(967/	4600),(1767/	4600)])*0.2";
			volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4600) factor[(833/	4600),(1267/	4600)])	*	((rpm/	4600) factor[(1767/	4600),(1433/	4600)]))";
		};
		class Engine2_Thrust_int
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_exhaust_07_int",
				0.44668359,
				1
			};
			frequency="0.8	+	((rpm/	4600) factor[(1400/	4600),(2533/	4600)])*0.2";
			volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4600) factor[(1400/	4600),(2033/	4600)])	*	((rpm/	4600) factor[(2733/	4600),(2200/	4600)]))";
		};
		class Engine3_Thrust_int
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_exhaust_09_int",
				0.50118721,
				1
			};
			frequency="0.8	+	((rpm/	4600) factor[(2200/	4600),(3267/	4600)])*0.2";
			volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4600) factor[(2167/	4600),(2700/	4600)])	*	((rpm/	4600) factor[(3247/	4600),(2800/	4600)]))";
		};
		class Engine4_Thrust_int
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_exhaust_11_int",
				0.56234133,
				1
			};
			frequency="0.8	+	((rpm/	4600) factor[(2800/	4600),(4133/	4600)])*0.3";
			volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4600) factor[(2767/	4600),(3200/	4600)])	*	((rpm/	4600) factor[(4100/	4600),(3433/	4600)]))";
		};
		class Engine5_Thrust_int
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_exhaust_13_int",
				0.63095737,
				1
			};
			frequency="0.9	+	((rpm/	4600) factor[(3400/	4600),(4600/	4600)])*0.2";
			volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	4600) factor[(3400/	4600),(4067/	4600)])";
		};
		class Movement
		{
			sound="soundEnviron";
			frequency="1";
			volume="0";
		};
		class TiresRockOut
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",
				1.9952624,
				1,
				60
			};
			frequency="1";
			volume="camPos*rock*(speed factor[2, 20])";
		};
		class TiresSandOut
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",
				1.9952624,
				1,
				60
			};
			frequency="1";
			volume="camPos*sand*(speed factor[2, 20])";
		};
		class TiresGrassOut
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",
				1.9952624,
				1,
				60
			};
			frequency="1";
			volume="camPos*grass*(speed factor[2, 20])";
		};
		class TiresMudOut
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",
				1.9952624,
				1,
				60
			};
			frequency="1";
			volume="camPos*mud*(speed factor[2, 20])";
		};
		class TiresGravelOut
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",
				1.9952624,
				1,
				60
			};
			frequency="1";
			volume="camPos*gravel*(speed factor[2, 20])";
		};
		class TiresAsphaltOut
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",
				1.9952624,
				1,
				60
			};
			frequency="1";
			volume="camPos*asphalt*(speed factor[2, 20])";
		};
		class NoiseOut
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3",
				2.5118864,
				1,
				90
			};
			frequency="1";
			volume="camPos*(damper0 max 0.02)*(speed factor[0, 8])";
		};
		class TiresRockIn
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",
				1.9952624,
				1
			};
			frequency="1";
			volume="(1-camPos)*rock*(speed factor[2, 20])";
		};
		class TiresSandIn
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",
				1.9952624,
				1
			};
			frequency="1";
			volume="(1-camPos)*sand*(speed factor[2, 20])";
		};
		class TiresGrassIn
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2",
				1.9952624,
				1
			};
			frequency="1";
			volume="(1-camPos)*grass*(speed factor[2, 20])";
		};
		class TiresMudIn
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",
				1.9952624,
				1
			};
			frequency="1";
			volume="(1-camPos)*mud*(speed factor[2, 20])";
		};
		class TiresGravelIn
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",
				1.9952624,
				1
			};
			frequency="1";
			volume="(1-camPos)*gravel*(speed factor[2, 20])";
		};
		class TiresAsphaltIn
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2",
				1.9952624,
				1
			};
			frequency="1";
			volume="(1-camPos)*asphalt*(speed factor[2, 20])";
		};
		class NoiseIn
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",
				3.9810717,
				1
			};
			frequency="1";
			volume="(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
		};
		class breaking_ext_road
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
				1.4125376,
				1,
				80
			};
			frequency=1;
			volume="engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
		};
		class acceleration_ext_road
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
				1.4125376,
				1,
				80
			};
			frequency=1;
			volume="engineOn*camPos*asphalt*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
		};
		class turn_left_ext_road
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
				1.4125376,
				1,
				80
			};
			frequency=1;
			volume="engineOn*camPos*asphalt*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
		};
		class turn_right_ext_road
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
				1.4125376,
				1,
				80
			};
			frequency=1;
			volume="engineOn*camPos*asphalt*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
		};
		class breaking_ext_dirt
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking",
				1.4125376,
				1,
				60
			};
			frequency=1;
			volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
		};
		class acceleration_ext_dirt
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration",
				1.4125376,
				1,
				60
			};
			frequency=1;
			volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1])";
		};
		class turn_left_ext_dirt
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",
				1.4125376,
				1,
				60
			};
			frequency=1;
			volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
		};
		class turn_right_ext_dirt
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",
				1.4125376,
				1,
				60
			};
			frequency=1;
			volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
		};
		class breaking_int_road
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
				3.1622777,
				1
			};
			frequency=1;
			volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
		};
		class acceleration_int_road
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
				3.1622777,
				1
			};
			frequency=1;
			volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
		};
		class turn_left_int_road
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
				3.1622777,
				1
			};
			frequency=1;
			volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
		};
		class turn_right_int_road
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
				3.1622777,
				1
			};
			frequency=1;
			volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
		};
		class breaking_int_dirt
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int",
				3.1622777,
				1
			};
			frequency=1;
			volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-01, -0.4])*(Speed Factor[2, 15])";
		};
		class acceleration_int_dirt
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int",
				3.1622777,
				1
			};
			frequency=1;
			volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
		};
		class turn_left_int_dirt
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",
				3.1622777,
				1
			};
			frequency=1;
			volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
		};
		class turn_right_int_dirt
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",
				3.1622777,
				1
			};
			frequency=1;
			volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
		};
	};
	class Turrets
	{
	};
	cargoaction[]=
	{
		"Golf_Cargo01",
		"Golf_Cargo02",
		"Golf_Cargo02",
		"Golf_Cargo03"
	};
	memorypointsgetincargo[]=
	{
		"pos cargo 1",
		"pos cargo 2",
		"pos cargo 3",
		"pos cargo 4"
	};
	memorypointsgetincargodir[]=
	{
		"pos cargo dir 1",
		"pos cargo dir 2",
		"pos cargo dir 3",
		"pos cargo dir 4"
	};
	driverDoor="Door_LF";
	cargoDoors[]=
	{
		"Door_RF",
		"Door_LB",
		"Door_RB",
		"Trunk"
	};
	driverCompartments="Compartment1";
	cargoCompartments[]=
	{
		"Compartment1",
		"Compartment2",
		"Compartment2",
		"Compartment3"
	};
	cargoProxyIndexes[]={1,2,3,4};
	getInProxyOrder[]={1,2,3,4,5};
	getInAction="GetInOffroad";
	getOutAction="GetOutLow";
	cargoGetInAction[]=
	{
		"GetInLow"
	};
	cargoGetOutAction[]=
	{
		"GetOutLow"
	};
	maximumLoad=4000;
	transportMaxWeapons=20;
	transportMaxMagazines=150;
	transportMaxBackpacks=7;
	transportSoldier=4;
	supplyRadius=5;
	class AnimationSources: AnimationSources
	{
		class Door_LF
		{
			source="door";
			animPeriod=0.80000001;
		};
		class Door_RF
		{
			source="door";
			animPeriod=0.80000001;
		};
		class Trunk: Door_LF
		{
		};
		class Door_1_1: Door_LF
		{
		};	
		class Door_1_2: Door_RF
		{
		};	
	};
	class UserActions
	{
		class openTrunk
		{
			displayName="Open Trunk";
			position="trunk_action";
			radius=1;
			showWindow=0;
			condition="(this animationPhase ""trunk"" < 0.5)";
			statement="this animateDoor [""trunk"",1]";
			onlyForPlayer=0;
		};
		class closeTrunk: openTrunk
		{
			displayName="Close Trunk";
			condition="(this animationPhase ""trunk"" > 0.5)";
			statement="this animateDoor [""trunk"",0]";
		};
	};
	class HitPoints: HitPoints
	{
		class HitLFWheel: HitLFWheel
		{
			armor=0.175;
			passThrough=0.30000001;
		};
		class HitLF2Wheel: HitLF2Wheel
		{
			armor=0.175;
			passThrough=0.30000001;
		};
		class HitRFWheel: HitRFWheel
		{
			armor=0.175;
			passThrough=0.30000001;
		};
		class HitRF2Wheel: HitRF2Wheel
		{
			armor=0.175;
			passThrough=0.30000001;
		};
		class HitFuel
		{
			armor=0.5;
			material=-1;
			name="palivo";
			visual="";
			passThrough=0.2;
		};
		class HitEngine
		{
			armor=0.5;
			material=-1;
			name="motor";
			visual="";
			passThrough=0.2;
		};
		class HitBody: HitBody
		{
			name="karoserie";
			visual="camo1";
			passThrough=1;
		};
		class HitGlass1: HitGlass1
		{
			armor=0.1;
		};
		class HitGlass2: HitGlass2
		{
			armor=0.050000001;
		};
		class HitGlass3: HitGlass3
		{
			armor=0.050000001;
		};
		class HitGlass4: HitGlass4
		{
			visual="glass4";
			armor=0.050000001;
		};
		class HitGlass5: HitGlass5
		{
			armor=0.050000001;
		};
		class HitGlass6: HitGlass6
		{
			armor=0.050000001;
		};
	};
	memoryPointTrackFLL="TrackFLL";
	memoryPointTrackFLR="TrackFLR";
	memoryPointTrackBLL="TrackBLL";
	memoryPointTrackBLR="TrackBLR";
	memoryPointTrackFRL="TrackFRL";
	memoryPointTrackFRR="TrackFRR";
	memoryPointTrackBRL="TrackBRL";
	memoryPointTrackBRR="TrackBRR";
	dustFrontLeftPos="dustFrontLeft";
	dustFrontRightPos="dustFrontRight";
	dustBackLeftPos="dustBackLeft";
	dustBackRightPos="dustBackRight";
	class Damage
	{
		mat[]={};
		tex[]={};
	};
	class Exhausts
	{
		class Exhaust1
		{
			position="exhaust";
			direction="exhaust_dir";
			effect="ExhaustEffectHEMTT";
		};
	};
	class Reflectors
	{
		class LSvetla
		{
			color[]={1700,1600,1500};
			ambient[]={4,4,4};
			position="LightCarHeadL01";
			direction="LightCarHeadL01_end";
			hitpoint="Light_L";
			selection="Light_L";
			size=1;
			innerAngle=30;
			outerAngle=100;
			coneFadeCoef=10;
			intensity=1.5;
			useFlare=1;
			dayLight=0;
			flareSize=0.85000002;
			class Attenuation
			{
				start=1;
				constant=0;
				linear=0;
				quadratic=0.25;
				hardLimitStart=30;
				hardLimitEnd=60;
			};
		};
		class RSvetla: LSvetla
		{
			position="LightCarHeadR01";
			direction="LightCarHeadR01_end";
			hitpoint="Light_R";
			selection="Light_R";
		};
	};
	aggregateReflectors[]=
	{
		
		{
			"LSvetla",
			"RSvetla"
		}
	};
	class RenderTargets
	{
		class LeftMirror
		{
			renderTarget="rendertarget0";
			class CameraView1
			{
				pointPosition="m1p";
				pointDirection="m1d";
				renderQuality=2;
				renderVisionMode=4;
				fov=0.5;
			};
		};
		class RightMirror
		{
			renderTarget="rendertarget1";
			class CameraView1
			{
				pointPosition="m2p";
				pointDirection="m2d";
				renderQuality=2;
				renderVisionMode=4;
				fov=0.69999999;
			};
		};
		class BackMirror
		{
			renderTarget="rendertarget2";
			class CameraView1
			{
				pointPosition="m3p";
				pointDirection="m3d";
				renderQuality=2;
				renderVisionMode=4;
				fov=0.69999999;
			};
		};
	};
};


class B_Heli_Light_01_F;
class I_Heli_light_03_unarmed_F;
class UH1H_Clo;
class UH1H_M240;
class C_Heli_Light_01_civil_F;
class B_Heli_Transport_03_unarmed_F; 
class I_Heli_Transport_02_F; 
class O_Heli_Light_02_unarmed_F;
class O_Heli_Transport_04_bench_F;
class O_Heli_Transport_04_covered_black_F;
class O_Heli_Transport_04_F;

class C_Scooter_Transport_01_F;
class Boat_Civil_01_base_F;
class C_Rubberboat;
class B_G_Boat_Transport_02_F;

class SDV_01_base_F;
class an2_base;
class B_T_VTOL_01_infantry_F;
class B_T_VTOL_01_vehicle_F;
class C_Plane_Civil_01_F;

class Animal_Base_F;



//--- Abstract Defines
class Extremo_Unit_Abstract: C_man_w_worker_F
{
	scope=0;
	author="Nikko Renolds";
	displayName="Extremo Unit Abstract";
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
	editorCategory = "Character"; 		// Class from CfgEditorCategories. Usually used for props.
	editorSubcategory = "Men"; 		    // Class from CfgEditorSubcategories. Should be used everywhere. 
	weapons[]=
	{
		"Throw",
		"Put"
	};
	respawnWeapons[]=
	{
		"Throw",
		"Put"
	};
	magazines[]={};
	respawnMagazines[]={};
	items[]={};
	respawnItems[]={};
	linkedItems[]={};
	respawnLinkedItems[]={};
	canCarryBackPack=1;
	nakedUniform="U_BasicBody";
	model="";
	uniformClass="";
	hiddenSelections[]=
	{
		"camo"
	};
	hiddenSelectionsTextures[]=
	{
		""
	};
	class UniformInfo
	{
		class SlotsInfo
		{
			class NVG: UniformSlotInfo
			{
				slotType=602;
			};
			class Scuba: UniformSlotInfo
			{
				slotType=604;
			};
			class Googles: UniformSlotInfo
			{
				slotType=603;
			};
			class Headgear: UniformSlotInfo
			{
				slotType=605;
			};
		};
	};
};
class Extremo_Cutscene_Abstract: B_Soldier_base_F
{
	scope=2;
	author="Nikko Renolds";
	displayName="Extremo Guard Base";
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
	editorCategory = "Character"; 		// Class from CfgEditorCategories. Usually used for props.
	editorSubcategory = "Men"; 		    // Class from CfgEditorSubcategories. Should be used everywhere. 
	weapons[]={};
	respawnWeapons[]={};
	magazines[]={};
	respawnMagazines[]={};
	items[]={};
	respawnItems[]={};
	linkedItems[]={};
	respawnLinkedItems[]={};
	backpack="";
	canCarryBackPack=1;
	nakedUniform="U_BasicBody";
	model="\A3\characters_F\common\coveralls";
	uniformClass="";
	class EventHandlers
	{
		init="";
	};
	class UserActions
	{
	};
	actionBegin1="";
	actionEnd1="";
};
class Extremo_Guard_Abstract: B_Soldier_base_F
{
	scope=2;
	author="Nikko Renolds";
	displayName="Extremo Guard Base";
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
	editorCategory = "Character"; 		// Class from CfgEditorCategories. Usually used for props.
	editorSubcategory = "Men"; 		    // Class from CfgEditorSubcategories. Should be used everywhere. 
	weapons[]={};
	respawnWeapons[]={};
	magazines[]={};
	respawnMagazines[]={};
	items[]={};
	respawnItems[]={};
	linkedItems[]={};
	respawnLinkedItems[]={};
	backpack="";
	canCarryBackPack=1;
	nakedUniform="U_BasicBody";
	model="\A3\characters_F\common\coveralls";
	uniformClass="";
	class EventHandlers
	{
		init="";
	};
	class UserActions
	{
	};
	actionBegin1="";
	actionEnd1="";
};
class Extremo_Cutscene_Player: Extremo_Cutscene_Abstract
{
	displayName="Extremo Cutcene Player";
	uniformClass="Extremo_Uniform_BambiOverall";
	linkedItems[]={};
	weapons[]={};
};
class Extremo_Trader_Abstract: B_Soldier_base_F
{
	scope=2;
	author="Nikko Renolds";
	displayName="Extremo Trader Base";
	side=2;
	modelSides[]={2};
	faction="Player_Faction";
	editorCategory = "Character"; 		// Class from CfgEditorCategories. Usually used for props.
	editorSubcategory = "Men"; 		    // Class from CfgEditorSubcategories. Should be used everywhere. 
	weapons[]={};
	respawnWeapons[]={};
	magazines[]={};
	respawnMagazines[]={};
	items[]={};
	respawnItems[]={};
	linkedItems[]={};
	respawnLinkedItems[]={};
	backpack="";
	canCarryBackPack=1;
	nakedUniform="U_BasicBody";
	model="\A3\characters_F\common\coveralls";
	uniformClass="";
	class EventHandlers
	{
		init="";
	};
	class UserActions
	{
		class trade
		{
			displayName="<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' shadow='false' />Trade";
			position="ohniste";
			radius=3;
			priority=6;
			onlyForPlayer=1;
			condition="true";
			statement="this call Extremo_fnc_gui_traderDialog_show";
		};
	};
	actionBegin1="trade";
	actionEnd1="trade";
};
class Extremo_Zombie_Abstract: Z_Soldier_base_F
{
	scope=0;
	scopeCurator = 0;
	scopeArsenal = 0;
	
	//--- Editor
	author="Nikko Renolds";
	displayName="Zombie";
	
	//---Model
	model="\A3\characters_F\BLUFOR\b_soldier_02.p3d";
	modelSides[]={3,1};

	//--- Inventory
	uniformClass="U_B_CombatUniform_mcam_tshirt";
	
	//--- Armor
	armor=2;
	armorStructural=4;
	explosionShielding=0.40000001;
	
	//--- Detection
	camouflage = 1.0; // How likely this character is spotted (smaller number = more stealthy).
	sensitivity = 6.9; // How likely this character spots enemies when controlled by AI.

	//--- Eventhandlers
	class Eventhandlers
	{
		init="[_this#0,'init'] call Extremo_fnc_object_zombie_handler";
		killed="[_this#0,'killed'] call Extremo_fnc_object_zombie_handler";
	};

	//--- Interactions
	class UserActions
	{
		//https://community.bistudio.com/wiki/UserActions
		class push
		{
			displayName="Push Zombie";
			position="ohniste";
			radius=3.5;
			priority=6;
			onlyForPlayer=1;
			animation = "";
			condition="[this,'conpush'] call Extremo_fnc_object_zombie_handler";
			statement="[this,'push'] spawn Extremo_fnc_object_zombie_handler";
		};
		class grab
		{
			displayName="<img image='\a3\ui_f\data\IGUI\Cfg\Actions\take_ca.paa' size='1' shadow='true' /> Grab Zombie"; 
			position="ohniste";
			radius=3.5;
			priority=7;
			onlyForPlayer=1;
			animation = "";
			condition="[this,'congrab'] call Extremo_fnc_object_zombie_handler";
			statement="[this,'grab'] spawn Extremo_fnc_object_zombie_handler";
		};
		class drop
		{
			displayName="Drop Zombie"; 
			position="ohniste";
			radius=3.5;
			priority=8;
			onlyForPlayer=1;
			animation = "";
			condition="[this,'condrop'] call Extremo_fnc_object_zombie_handler";
			statement="[this,'drop'] spawn Extremo_fnc_object_zombie_handler";
		};
		class kill
		{
			displayName="Kill Zombie"; 
			position="ohniste";
			radius=3.5;
			priority=9;
			onlyForPlayer=1;
			animation = "GutAnimal";
			condition="[this,'conkill'] call Extremo_fnc_object_zombie_handler";
			statement="[this,'kill'] spawn Extremo_fnc_object_zombie_handler";
		};
		class bury
		{
			displayName="Bury Zombie"; 
			position="ohniste";
			radius=3.5;
			priority=10;
			onlyForPlayer=1;
			animation = "HideBody";
			condition="[this,'conbury'] call Extremo_fnc_object_zombie_handler";
			statement="[this,'bury'] spawn Extremo_fnc_object_zombie_handler";
		};
	};
	actionBegin1="push";
	actionEnd1="push";
	actionBegin2="grab";
	actionEnd2="grab";
	actionBegin3="drop";
	actionEnd3="drop";
	actionBegin4="kill";
	actionEnd4="kill";
	actionBegin5="bury";
	actionEnd5="bury";
};
class Extremo_Construction_Abstract_Physics: thingX
{
	scope=1;
	author="Nikko Renolds";
	mapSize=1;
	armor=1000;
	cost=1000;
	icon="iconObject_1x1";
	destrType="DestructNo";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Building";
	editorSubcategory = "Construction";
	hiddenSelections[]={};
	hiddenSelectionsTextures[]={};
};
class Extremo_Construction_Abstract_Static: NonStrategic
{
	scope=1;
	author="Nikko Renolds";
	mapSize=1;
	armor=10000;
	cost=1000;
	icon="iconObject_1x1";
	destrType="DestructNo";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Building";
	editorSubcategory = "Construction";
	hiddenSelections[]={};
	hiddenSelectionsTextures[]={};
	ExtremoRequiresSimulation=0;
};
class Extremo_Container_Abstract: ReammoBox_F
{
	author="Nikko Renolds";
	scope=1;
	vehicleClass="Ammo";
	ExtremoContainer=1;
	icon="iconCrateWpns";
	simulation="thingX";
	ExtremoRequiresSimulation=0;
	maximumLoad=500;
	armor=1000;
	destrType="DestructNo";
	ExtremoIsLockable=0;
	class TransportItems
	{
	};
	class TransportWeapons
	{
	};
	class TransportMagazines
	{
	};
};
class Extremo_Car_Golf_Abstract: Golf_Base
{
	author="Nikko Renolds";
	scope=0;
	side=2;
	faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Land";
	skinName="";
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
	maximumLoad=1000;
	forceInGarage=1; 
	displayName="Golf Black";
	hiddenSelections[]=
	{
		"camo1"
	};
	hiddenSelectionsTextures[]=
	{
		"\Extremo_assets\model\vw_golf\black_co.paa"
	};
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
class Extremo_Car_BMW_Abstract: BMW_Base
{
	author="Nikko Renolds & HappyFeet";
	scope=0;
	side=2;
	faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Land";
	skinName="";
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
	maximumLoad=1000;
	forceInGarage=1; 
	displayName="BMW Red";
	hiddenSelections[]={};
	hiddenSelectionsTextures[]={};
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
class Extremo_Car_Hatchback_Abstract: C_Hatchback_01_F
{
	author="Nikko Renolds";
	scope=0;
	side=2;
	faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Land";
	skinName="";
	displayName="Hatchback";
	fuelConsumptionRate="0.03f";
	maximumLoad=1300;
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
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
class Extremo_Car_Hatchback_Sport_Abstract: C_Hatchback_01_sport_F
{
	author="Nikko Renolds";
	scope=0;
	side=2;
	 faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Land";
	skinName="";
	displayName="Hatchback (Sport)";
	fuelConsumptionRate="0.04f";
	maximumLoad=1300;
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
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
class Extremo_Car_HEMMT_Abstract: B_Truck_01_transport_F
{
	author="Nikko Renolds";
	scope=0;
	side=2;
	 faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Land";
	skinName="";
	displayName="HEMMT (Transport)";
	fuelConsumptionRate="0.03f";
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
	maximumLoad=4600;
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
class Extremo_Car_HMMWV_M134_Abstract: HMMWV_M134
{
	author="Nikko Renolds";
	scope=0;
	side=2;
	 faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Land";
	skinName="";
	displayName="HMMWV (M134)";
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="exile_psycho_uaz\sounds\ext-uaz-getout";
	maximumLoad=1500;
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
class Extremo_Car_HMMWV_M2_Abstract: HMMWV_M2
{
	author="Nikko Renolds";
	scope=0;
	side=2;
	 faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Land";
	skinName="";
	displayName="HMMWV (M2)";
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="exile_psycho_uaz\sounds\ext-uaz-getout";
	maximumLoad=1200;
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
class Extremo_Car_HMMWV_MEV_Abstract: HMMWV_MEV
{
	author="Nikko Renolds";
	scope=0;
	side=2;
	 faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Land";
	skinName="";
	displayName="HMMWV (MEV)";
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="exile_psycho_uaz\sounds\ext-uaz-getout";
	maximumLoad=2000;
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
class Extremo_Car_HMMWV_UNA_Abstract: HMMWV_UNA
{
	author="Nikko Renolds";
	scope=0;
	side=2;
	 faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Land";
	skinName="";
	displayName="HMMWV (Unarmed)";
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="exile_psycho_uaz\sounds\ext-uaz-getout";
	maximumLoad=2000;
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
class Extremo_Car_Hunter_Abstract: B_MRAP_01_F
{
	author="Nikko Renolds";
	scope=0;
	side=2;
	 faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Land";
	skinName="";
	displayName="Hunter";
	fuelConsumptionRate="0.03f";
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
	maximumLoad=2200;
	armor=200;
	driverDoor="Door_LF";
	cargoDoors[]=
	{
		"Door_RF",
		"Door_LB",
		"Door_RB"
	};
	crewVulnerable=1;
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
class Extremo_Car_Ifrit_Abstract: O_MRAP_02_F
{
	author="Nikko Renolds";
	scope=0;
	side=2;
	 faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Land";
	skinName="";
	displayName="Ifrit";
	fuelConsumptionRate="0.05f";
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
	maximumLoad=1800;
	armor=150;
	driverDoor="Door_LF";
	cargoDoors[]=
	{
		"Door_RF",
		"Door_LB",
		"Door_RB",
		"Door_rear"
	};
	crewVulnerable=1;
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
class Extremo_Car_Ikarus_Abstract: Ikarus_Civ_02
{
	author="Nikko Renolds";
	scope=0;
	side=2;
	 faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Land";
	skinName="";
	displayName="Ikarus";
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="exile_psycho_Ikarus\Data\sounds\d1opn_r";
	maximumLoad=4000;
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
class Extremo_Car_Kart_Abstract: C_Kart_01_black_F
{
	author="Nikko Renolds";
	scope=0;
	side=2;
	 faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Land";
	skinName="";
	displayName="Kart";
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
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
class Extremo_Car_LandRover_Abstract: Landrover_Civ_02
{
	author="Nikko Renolds";
	scope=0;
	side=2;
	 faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Land";
	skinName="";
	displayName="Land Rover";
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="exile_psycho_lrc\data\sounds\LRover_door";
	maximumLoad=2200;
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
class Extremo_Car_Lada_Abstract: Lada_Base
{
	author="Nikko Renolds";
	scope=0;
	side=2;
	 faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Land";
	skinName="";
	displayName="Lada";
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="exile_psycho_lada\sounds\lada_door";
	maximumLoad=1500;
	maxSpeed=110;
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
class Extremo_Car_LandRover_Ambulance_Abstract: LR_Ambulance_Base
{
	author="Nikko Renolds";
	scope=0;
	side=2;
	 faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Land";
	skinName="";
	displayName="Land Rover (Ambulance)";
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="exile_psycho_lrc\data\sounds\LRover_door";
	maximumLoad=2500;
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
class Extremo_Car_Octavius_Abstract: Octavia_Civ_01
{
	author="Nikko Renolds";
	scope=0;
	side=2;
	 faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Land";
	skinName="";
	displayName="Octavius";
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="exile_psycho_uaz\sounds\ext-uaz-getout";
	maximumLoad=1500;
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
class Extremo_Car_Offroad_Abstract: Offroad_01_civil_base_F
{
	author="Nikko Renolds";
	scope=0;
	side=2;
	 faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Land";
	skinName="";
	displayName="Offroad";
	fuelConsumptionRate="0.03f";
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
	maximumLoad=2000;
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
class Extremo_Car_Offroad_Armed_Abstract: I_G_Offroad_01_armed_F
{
	author="Nikko Renolds";
	scope=0;
	side=2;
	 faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Land";
	skinName="";
	displayName="Offroad (Armed)";
	fuelConsumptionRate="0.03f";
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
	maximumLoad=1100;
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
class Extremo_Car_Offroad_Repair_Abstract: C_Offroad_01_repair_F
{
	author="Nikko Renolds";
	scope=0;
	side=2;
	 faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Land";
	crew="";
	skinName="";
	displayName="Offroad (Repair)";
	fuelConsumptionRate="0.03f";
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
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
class Extremo_Car_OldTractor_Abstract: TractorOld
{
	author="Nikko Renolds";
	scope=0;
	side=2;
	 faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Land";
	skinName="";
	displayName="Old Tractor";
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="exile_psycho_lada\sounds\lada_door";
	maxSpeed=35;
	maximumLoad=1100;
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
class Extremo_Car_Strider_Abstract: I_MRAP_03_F
{
	author="Nikko Renolds";
	scope=0;
	side=2;
	 faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Land";
	skinName="";
	displayName="Strider";
	fuelConsumptionRate="0.05f";
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
	maximumLoad=1800;
	armor=250;
	driverDoor="Door_LF";
	cargoDoors[]=
	{
		"Door_RF"
	};
	crewVulnerable=1;
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
class Extremo_Car_SUV_Abstract: C_SUV_01_F
{
	author="Nikko Renolds";
	scope=0;
	side=2;
	 faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Land";
	skinName="";
	displayName="SUV";
	fuelConsumptionRate="0.03f";
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
	maximumLoad=1600;
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
class Extremo_Car_SUVXL_Abstract: SUV_Base
{
	author="Nikko Renolds";
	scope=0;
	side=2;
	 faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Land";
	skinName="";
	displayName="SUV (Classic)";
	fuelConsumptionRate="0.03f";
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="exile_psycho_SUV_a3\sound\SUV_ext_door";
	maximumLoad=1800;
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
class Extremo_Car_SUV_Armed_Abstract: SUV_armored_Base
{
	author="Nikko Renolds";
	scope=0;
	side=2;
	 faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Land";
	skinName="";
	displayName="SUV (Armed)";
	fuelConsumptionRate="0.03f";
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="exile_psycho_SUV_a3\sound\SUV_ext_door";
	maximumLoad=1500;
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
	class UserActions
	{
		class Hide
		{
			condition="((driver this) == player) && ((this animationPhase 'HideGun_01') == 0) && (isNull (this turretUnit [0]))";
			displayName="Hide Gun";
			displayNameDefault="Hide Gun";
			onlyForPlayer=1;
			position="hideaction";
			radius=3;
			statement="this animate['HideGun_01', 1]; this animate['HideGun_02', 1]; this animate['HideGun_03', 1]; this animate['HideGun_04', 1]; this animate['CloseCover1', 1]; this animate['CloseCover2', 1]; this lockTurret [[0], true];";
		};
		class Unhide
		{
			condition="((driver this) == player) && ((this animationPhase 'HideGun_01') == 1)";
			displayName="Show Gun";
			displayNameDefault="Show Gun";
			onlyForplayer=1;
			position="hideaction";
			radius=3;
			statement="this animate['HideGun_01', 0]; this animate['HideGun_02', 0]; this animate['HideGun_03', 0]; this animate['HideGun_04', 0]; this animate['CloseCover1', 0]; this animate['CloseCover2', 0]; this lockTurret [[0], false];";
		};
	};
};
class Extremo_Car_Tempest_Abstract: O_Truck_03_transport_F
{
	author="Nikko Renolds";
	scope=0;
	side=2;
	 faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Land";
	skinName="";
	displayName="Tempest (Transport)";
	fuelConsumptionRate="0.03f";
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
	maximumLoad=3800;
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
class Extremo_Car_Tractor_Abstract: Tractor_Base
{
	author="Nikko Renolds";
	scope=0;
	side=2;
	 faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Land";
	skinName="Red";
	displayName="Tractor";
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="exile_psycho_lada\sounds\lada_door";
	maxSpeed=45;
	maximumLoad=1200;
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
class Extremo_Car_UAZ_Abstract: UAZ_Base
{
	author="Nikko Renolds";
	scope=0;
	side=2;
	 faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Land";
	skinName="";
	displayName="UAZ";
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="exile_psycho_uaz\sounds\ext-uaz-getout";
	maximumLoad=1800;
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
class Extremo_Car_UAZ_Open_Abstract: UAZ_Open_Base
{
	author="Nikko Renolds";
	scope=0;
	side=2;
	 faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Land";
	skinName="Green";
	displayName="UAZ (Open)";
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="exile_psycho_uaz\sounds\ext-uaz-getout";
	maximumLoad=1800;
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
class Extremo_Car_Ural_Covered_Abstract: Ural_RU
{
	author="Nikko Renolds";
	scope=0;
	side=2;
	 faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Land";
	skinName="";
	displayName="Ural (Covered)";
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="exile_psycho_Ural\Sounds\int-ural-getout.wss";
	maximumLoad=4500;
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
class Extremo_Car_Ural_Open_Abstract: Ural_Open_RU
{
	author="Nikko Renolds";
	scope=0;
	side=2;
	 faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Land";
	skinName="";
	displayName="Ural (Open)";
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="exile_psycho_Ural\Sounds\int-ural-getout.wss";
	maximumLoad=4500;
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
class Extremo_Car_V3S_Covered_Abstract: V3S_Base_EP1
{
	author="Nikko Renolds";
	scope=0;
	side=2;
	 faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Land";
	skinName="";
	displayName="V3S (Covered)";
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="exile_psycho_Ural\Sounds\int-ural-getout.wss";
	maximumLoad=4500;
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
class Extremo_Car_V3S_Open_Abstract: V3S_base
{
	author="Nikko Renolds";
	scope=0;
	side=2;
	 faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Land";
	skinName="";
	displayName="V3S (Open)";
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="exile_psycho_Ural\Sounds\int-ural-getout.wss";
	maximumLoad=4500;
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
class Extremo_Car_Van_Abstract: C_Van_01_transport_F
{
	author="Nikko Renolds";
	scope=0;
	side=2;
	 faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Land";
	skinName="";
	displayName="Van";
	fuelConsumptionRate="0.03f";
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
	maximumLoad=3600;
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
class Extremo_Car_Van_Box_Abstract: C_Van_01_box_F
{
	author="Nikko Renolds";
	scope=0;
	side=2;
	 faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Land";
	skinName="";
	displayName="Van (Box)";
	fuelConsumptionRate="0.03f";
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
	maximumLoad=4600;
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
class Extremo_Car_Van_Fuel_Abstract: C_Van_01_fuel_F
{
	author="Nikko Renolds";
	scope=0;
	side=2;
	 faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Land";
	skinName="";
	displayName="Van (Fuel)";
	fuelConsumptionRate="0.03f";
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
	maximumLoad=1100;
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
class Extremo_Car_Volha_Abstract: volha_Base
{
	author="Nikko Renolds";
	scope=0;
	side=2;
	 faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Land";
	skinName="";
	displayName="Volha";
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="exile_psycho_Gaz_volha\sounds\gaz\gaz_door";
	maximumLoad=1800;
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
class Extremo_Car_Zamak_Abstract: I_Truck_02_transport_F
{
	author="Nikko Renolds";
	scope=0;
	side=2;
	 faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Land";
	skinName="";
	displayName="Zamak (Transport)";
	fuelConsumptionRate="0.03f";
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
	maximumLoad=4200;
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
class Extremo_Car_Zamak: Extremo_Car_Zamak_Abstract
{
	scope=2;
};
class Extremo_Car_TowTractor_Abstract: TowingTractor
{
	author="Nikko Renolds";
	scope=0;
	side=2;
	 faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Land";
	skinName="";
	displayName="Tow Tractor";
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="exile_psycho_lada\sounds\lada_door";
	maxSpeed=25;
	maximumLoad=500;
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
class Extremo_Bike_QuadBike_Abstract: Quadbike_01_base_F
{
	author="Nikko Renolds";
	scope=0;
	side=2;
	 faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Land";
	skinName="";
	displayName="Quad Bike";
	fuelConsumptionRate="0.03f";
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
	maximumLoad=600;
	cargoProxyIndexes[]={1};
	driverCompartments="Compartment1";
	cargoCompartments[]=
	{
		"Compartment2"
	};
	class CargoTurret;
	class Turrets: Turrets
	{
		class CargoTurret_01: CargoTurret
		{
			gunnerGetInAction="GetInLOW";
			gunnerGetOutAction="GetOutLOW";
			gunnerAction="passenger_inside_1";
			gunnerCompartments="Compartment2";
			memoryPointsGetInGunner="pos cargo";
			memoryPointsGetInGunnerDir="pos cargo dir";
			gunnerName="Gunner (Passenger)";
			proxyIndex=1;
			initElev=0;
			maxElev=15;
			minElev=-5;
			initTurn=0;
			maxTurn=90;
			minTurn=-90;
			isPersonTurret=1;
			ejectDeadGunner="true";
		};
	};
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
class Extremo_Chopper_Hummingbird_Abstract: B_Heli_Light_01_F
{
	author="Nikko Renolds";
	scope=0;
	side=2;
	 faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Air";
	crew="";
	typicalCargo[]={};
	skinName="";
	displayName="MH-9 Hummingbird";
	fuelConsumptionRate="0.0966";
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
	maximumLoad=1300;
	driverCanEject=1;
	driverDoor="DoorL_Front_Open";
	cargoDoors[]=
	{
		"DoorR_Front_Open",
		"DoorL_Back_Open",
		"DoorR_Back_Open"
	};
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
class Extremo_Chopper_Hummingbird_Green: Extremo_Chopper_Hummingbird_Abstract
{
	scope=2;
	skinName="Green";
}; 
class Extremo_Chopper_Orca_Abstract: O_Heli_Light_02_unarmed_F
{
	author="Nikko Renolds";
	scope=0;
	side=2;
	 faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Air";
	crew="";
	typicalCargo[]={};
	skinName="";
	displayName="PO-30 Orca";
	fuelConsumptionRate="0.33";
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
	maximumLoad=4600;
	driverCanEject=1;
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
class Extremo_Chopper_Taru_Abstract: O_Heli_Transport_04_bench_F
{
	author="Nikko Renolds";
	scope=0;
	side=2;
	 faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Air";
	crew="";
	typicalCargo[]={};
	skinName="";
	displayName="MI-280 Taru";
	fuelConsumptionRate="0.406";
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
	maximumLoad=3200;
	driverCanEject=1;
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
class Extremo_Chopper_Taru_Covered_Abstract: O_Heli_Transport_04_covered_black_F
{
	author="Nikko Renolds";
	scope=0;
	side=2;
	 faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Air";
	crew="";
	typicalCargo[]={};
	skinName="";
	displayName="MI-280 Taru (Covered)";
	fuelConsumptionRate="0.406";
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
	maximumLoad=4300;
	driverCanEject=1;
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
class Extremo_Chopper_Taru_Transport_Abstract: O_Heli_Transport_04_F
{
	author="Nikko Renolds";
	scope=0;
	side=2;
	 faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Air";
	crew="";
	typicalCargo[]={};
	skinName="";
	displayName="MI-280 Taru (Transport)";
	fuelConsumptionRate="0.406";
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
	maximumLoad=1100;
	driverCanEject=1;
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
class Extremo_Chopper_Mohawk_Abstract: I_Heli_Transport_02_F
{
	author="Nikko Renolds";
	scope=0;
	side=2;
	 faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Air";
	crew="";
	typicalCargo[]={};
	skinName="";
	displayName="CH-49 Mohawk";
	fuelConsumptionRate="0.406";
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
	maximumLoad=4800;
	driverCanEject=1;
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
class Extremo_Chopper_Huron_Abstract: B_Heli_Transport_03_unarmed_F
{
	author="Nikko Renolds";
	scope=0;
	side=2;
	 faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Air";
	crew="";
	typicalCargo[]={};
	skinName="";
	displayName="CH-67 Huron";
	fuelConsumptionRate="0.378";
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
	maximumLoad=6000;
	driverCanEject=1;
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
class Extremo_Chopper_Hummingbird_Civillian_Abstract: C_Heli_Light_01_civil_F
{
	author="Nikko Renolds";
	scope=0;
	side=2;
	 faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Air";
	crew="";
	typicalCargo[]={};
	skinName="";
	displayName="M-900 (Civillian)";
	fuelConsumptionRate="0.0966";
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
	maximumLoad=1300;
	driverCanEject=1;
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
class Extremo_Chopper_Hellcat_Abstract: I_Heli_light_03_unarmed_F
{
	author="Nikko Renolds";
	scope=0;
	side=2;
	 faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Air";
	crew="";
	typicalCargo[]={};
	skinName="";
	displayName="WY-55 Hellcat";
	fuelConsumptionRate="0.515";
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
	maximumLoad=2600;
	driverCanEject=1;
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
class Extremo_Chopper_Huey_Abstract: UH1H_Clo
{
	author="Nikko Renolds";
	scope=0;
	side=2;
	 faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Air";
	crew="";
	typicalCargo[]={};
	skinName="";
	displayName="UH-1H Huey";
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
	driverCanEject=1;
	maximumLoad=2500;
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
class Extremo_Chopper_Huey_Armed_Abstract: UH1H_M240
{
	author="Nikko Renolds";
	scope=0;
	side=2;
	 faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Air";
	crew="";
	typicalCargo[]={};
	skinName="";
	displayName="UH-1H Huey (Armed)";
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
	driverCanEject=1;
	maximumLoad=2500;
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
class Extremo_Boat_WaterScooter_Abstract: C_Scooter_Transport_01_F
{
	author="Nikko Renolds";
	scope=0;
	side=2;
	 faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Water";
	crew="";
	typicalCargo[]={};
	skinName="";
	displayName="Water Scooter";
	fuelConsumptionRate="0.03f";
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
class Extremo_Boat_SDV_Abstract: SDV_01_base_F
{
	author="Nikko Renolds";
	scope=0;
	side=2;
	 faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Water";
	crew="";
	typicalCargo[]={};
	skinName="";
	displayName="SDV";
	fuelConsumptionRate="0.03f";
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
class Extremo_Boat_MotorBoat_Abstract: Boat_Civil_01_base_F
{
	author="Nikko Renolds";
	scope=0;
	side=2;
	 faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Water";
	crew="";
	typicalCargo[]={};
	skinName="";
	displayName="Motor Boat";
	fuelConsumptionRate="0.03f";
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
class Extremo_Boat_RubberDuck_Abstract: C_Rubberboat
{
	author="Nikko Renolds";
	scope=0;
	side=2;
	 faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Water";
	crew="";
	typicalCargo[]={};
	skinName="";
	displayName="Rubber Duck";
	fuelConsumptionRate="0.03f";
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
class Extremo_Boat_RHIB_Abstract: B_G_Boat_Transport_02_F
{
	author="Nikko Renolds";
	scope=0;
	side=2;
	 faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Water";
	crew="";
	typicalCargo[]={};
	skinName="";
	displayName="RHIB";
	fuelConsumptionRate="0.03f";
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
class Extremo_Plane_AN2_Abstract: an2_base
{
	author="Nikko Renolds";
	scope=2;
	side=2;
	 faction="Player_Faction";
	vehicleclass="";//Not used, please use (editorCategory,editorSubcategory) instead
	editorCategory = "Vehicle";
	editorSubcategory = "Air";
	displayName="An-2";
	skinName="";
	fuelExplosionPower=3;
	fuelConsumptionRate="0.05f";
	ExtremoLockSound="Extremo_Assets\sound\lock01.wss";
	ExtremoUnlockSound="a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
	maximumLoad=2500;
	class AnimationSources
	{
		class door
		{
			animPeriod=1;
			initPhase=1;
			source="user";
		};
	};
	class TransportItems
	{
	};
	class UserActions
	{
		class opendoor
		{
			condition="((driver this) == player) && ((this animationPhase 'door') == 0) && (isNull (this turretUnit [3]))";
			displayName="Open Door";
			hideOnUse=1;
			onlyforplayer=1;
			position="pos cargo";
			radius=8;
			showWindow=0;
			statement="this animate ['door', 1]; this lockTurret [[3], true];";
		};
		class closedoor
		{
			condition="((driver this) == player) && ((this animationPhase 'door') == 1)";
			displayName="Close Door";
			hideOnUse=1;
			onlyforplayer=1;
			position="pos cargo";
			radius=40;
			showWindow=0;
			statement="this animate ['door', 0]; this lockTurret [[3], true];";
		};
	};
};
class Extremo_Effect_Abstract: thing
{
	author="Nikko Renolds";
	scope=1;
	side=2;
	animated=0;
	faction="None";
	vehicleClass="Emitters";
	simulation="thing";
	icon="iconExplosiveAP";
	mapSize=1;
	displayName="Extremo Effect";
	picture="\A3\weapons_f\ammoBoxes\data\ui\map_AmmoBox_F_CA.paa";
	model="\A3\Weapons_F\empty.p3d";
	class Eventhandlers
	{
		init="";
		killed="";
	};
};
class Extremo_Animal_Abstract: Animal_Base_F
{
	scope=1;
	author="Nikko Renolds";
	hiddenSelectionsTextures[]={};
	hiddenSelectionMaterials[]={};
	class EventHandlers
	{
		init="";
	};
	class Extremo
	{
		variations[]={};
		fleeMove="";
		idleMove="";
		gutItems[]={};
		dangerSounds[]={};
		deathSounds[]={};
		idleSounds[]={};
	};
};