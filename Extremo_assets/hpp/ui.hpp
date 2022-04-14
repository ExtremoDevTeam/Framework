
//--- UI Base Classes
class Attributes;
class RscStandardDisplay;
class RscProgress;
class RscStructuredText;
class RscPicture;
class RscButton;
class RscShortcutButton;
class RscButtonMenu;
class RscButtonMenuOK;
class RscButtonMenuCancel;
class RscText;
class RscVignette;
class RscDisplayGetReady;
class RscActiveText;
class RscListBox;
class RscListNBox;
class RscCombo;
class RscXListBox;
class RscHTML;
class RscPictureKeepAspect;
class RscActivePicture;
class RscControlsGroupNoScrollbars;
class RscControlsGroupNoHScrollbars;
class RscFrame;
class RscTitle;
class CA_Title;
class RscDebugConsole;
class RscTrafficLight;
class RscFeedback;
class RscMessageBox;
class RscControlsGroup;
class RscTextCheckbox;
class RscDisplayInventory_DLCTemplate;
class RscEdit;
class RscCheckBox;
class RscIGProgress;
class RscHitZones;
class RscIGUIText;
class RscIGUIValue;
class RscOpticsValue;
class RscOpticsText;
class Scrollbar;
class RscIGUIShortcutButton;
class RscActivePictureKeepAspect;
class RscTree;
class RscXSliderH;
class RscObject;
class ctrlMenu;
class ctrlStaticPicture;
class RscButtonMenuSteam;
class RscButtonTextOnly;
class ctrlShortcutButton;
class IGUIBack;
class RscLine;

//--- Custom UI Classes
class RscGuiBack
{
	type = 0;
	idc = 124;
	style = 128;
	text = "";
	colorText[] = 
	{
		0,
		0,
		0,
		0
	};
	font = "RobotoCondensed";
	sizeEx = 0;
	shadow = 0;
	x = 0.1;
	y = 0.1;
	w = 0.1;
	h = 0.1;
	colorbackground[] = 
	{
		"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])",
		"(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])",
		"(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])",
		"(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"
	};
};
class RscMapControl
{
	x="safezoneXAbs";
	y="safezoneY";
	w="safezoneWAbs";
	h="safezoneH";
	ptsPerSquareFor=14;
	ptsPerSquareForEdge=1000;
	ptsPerSquareRoad=14;
	ptsPerSquareRoadSimple=1;
	ptsPerSquareMainRoad=14;
	ptsPerSquareMainRoadSimple=1;
	ptsPerSquareObj=14;
	ptsPerSquareObjLod1=14;
	ptsPerSquareForLod1=7;
	ptsPerSquareForLod2=1;
	ptsPerSquareTown=1;
	ptsPerSquareTownEdge=7;
	ptsPerSquareSea=20;
	ptsPerSquareTxt=20;
	ptsPerSquareCLn=10;
	mapOrientation=0;
	drawObjects=1;
	drawShaded=0.25;
	maxSatelliteAlpha=0.85000002;
	alphaFadeStartScale=9.9999997e-006;
	alphaFadeEndScale=1.9999999e-005;
	widthPowerLines=3;
	showCountourInterval=0;
	moveOnEdges=0;
	text="#(rgb,1,1,1)color(1,1,1,1)";
	colorBackground[]={1,1,1,1};
	colorSea[]={0.290196,0.615686,0.88627499,0.5};
	colorForest[]={0.384314,0.72941202,0,0.25};
	colorForestTextured[]={0.384314,0.72941202,0,0.25};
	colorForestBorder[]={0.384314,0.72941202,0,0};
	colorRocks[]={0.615686,0.63137299,0.55294102,0};
	colorRocksBorder[]={0.615686,0.63137299,0.55294102,0};
	colorTown[]={0.756863,0.73725498,0.73333299,1};
	colorTownBorder[]={0,0,0,0};
	colorLevels[]={0,0,0,0.5};
	colorMainCountlines[]={0.57200003,0.354,0.18799999,0.5};
	colorCountlines[]={0.57200003,0.354,0.18799999,0.25};
	colorMainCountlinesWater[]={0.491,0.57700002,0.70200002,0.5};
	colorCountlinesWater[]={0.491,0.57700002,0.70200002,0.25};
	colorGrid[]={0,0,0,0.30000001};
	colorGridMap[]={0,0,0,0.30000001};
	colorPowerLines[]={0,0,0,1};
	colorRailWay[]={0.80000001,0.2,0,1};
	colorTracks[]={0.64705902,0.61176503,0.49411801,0.5};
	colorTracksFill[]={0.64705902,0.61176503,0.49411801,1};
	colorRoads[]={0.70588201,0.70588201,0.70588201,0.75};
	colorRoadsFill[]={1,0.84313703,0.40784299,1};
	colorMainRoads[]={0.90980399,0.64705902,0.25490201,1};
	colorMainRoadsFill[]={0.96862698,0.580392,0.113725,1};
	colorTrails[]={0.83999997,0.75999999,0.64999998,0.15000001};
	colorTrailsFill[]={0.83999997,0.75999999,0.64999998,0.64999998};
	scaleMin=0.039999999;
	scaleMax=0.60000002;
	scaleDefault=0.16;
	fontNames="Caveat";
	sizeExNames=0.125;
	class Cross
	{
		icon="\Extremo_assets\texture\map\icons\Cross_CA.paa";
		size=24;
		importance=1;
		coefMin=0.85000002;
		coefMax=1;
		color[]={1,1,1,1};
	};
	class Chapel
	{
		icon="\Extremo_assets\texture\map\icons\Chapel_CA.paa";
		size=24;
		importance=1;
		coefMin=0.85000002;
		coefMax=1;
		color[]={1,1,1,1};
	};
	class Shipwreck
	{
		icon="\Extremo_assets\texture\map\icons\Shipwreck_CA.paa";
		size=24;
		importance=1;
		coefMin=0.85000002;
		coefMax=1;
		color[]={1,1,1,1};
	};
	class BusStop
	{
		icon="\Extremo_assets\texture\map\icons\BusStop_CA.paa";
		size=48;
		importance=1;
		coefMin=0.85000002;
		coefMax=1;
		color[]={1,1,1,1};
	};
	class FuelStation
	{
		icon="\Extremo_assets\texture\map\icons\FuelStation_CA.paa";
		size=24;
		importance=1;
		coefMin=0.85000002;
		coefMax=1;
		color[]={1,1,1,1};
	};
	class Hospital
	{
		icon="\Extremo_assets\texture\map\icons\Hospital_CA.paa";
		size=24;
		importance=1;
		coefMin=0.85000002;
		coefMax=1;
		color[]={1,1,1,1};
	};
	class Church
	{
		icon="\Extremo_assets\texture\map\icons\Church_CA.paa";
		size=48;
		importance=1;
		coefMin=0.85000002;
		coefMax=1;
		color[]={1,1,1,1};
	};
	class Lighthouse
	{
		icon="\Extremo_assets\texture\map\icons\Lighthouse_CA.paa";
		size=24;
		importance=1;
		coefMin=0.85000002;
		coefMax=1;
		color[]={1,1,1,1};
	};
	class Power
	{
		icon="\Extremo_assets\texture\map\icons\Power_CA.paa";
		size=24;
		importance=1;
		coefMin=0.85000002;
		coefMax=1;
		color[]={1,1,1,1};
	};
	class PowerSolar
	{
		icon="\Extremo_assets\texture\map\icons\PowerSolar_CA.paa";
		size=24;
		importance=1;
		coefMin=0.85000002;
		coefMax=1;
		color[]={1,1,1,1};
	};
	class PowerWave
	{
		icon="\Extremo_assets\texture\map\icons\PowerWave_CA.paa";
		size=24;
		importance=1;
		coefMin=0.85000002;
		coefMax=1;
		color[]={1,1,1,1};
	};
	class PowerWind
	{
		icon="\Extremo_assets\texture\map\icons\PowerWind_CA.paa";
		size=48;
		importance=1;
		coefMin=0.85000002;
		coefMax=1;
		color[]={1,1,1,1};
	};
	class Quay
	{
		icon="\Extremo_assets\texture\map\icons\Quay_CA.paa";
		size=24;
		importance=1;
		coefMin=0.85000002;
		coefMax=1;
		color[]={1,1,1,1};
	};
	class Transmitter
	{
		icon="\Extremo_assets\texture\map\icons\Transmitter_CA.paa";
		size=48;
		importance=1;
		coefMin=0.85000002;
		coefMax=1;
		color[]={1,1,1,1};
	};
	class WaterTower
	{
		icon="\Extremo_assets\texture\map\icons\WaterTower_CA.paa";
		size=48;
		importance=1;
		coefMin=0.85000002;
		coefMax=1;
		color[]={1,1,1,1};
	};
	class Rock
	{
		icon="\Extremo_assets\texture\map\icons\Rock_CA.paa";
		size=24;
		importance=1;
		coefMin=0.85000002;
		coefMax=1;
		color[]={1,1,1,1};
	};
	class CustomMark
	{
		color[]={1,1,0,1};
		icon="\Extremo_assets\texture\map\icons\customMark_ca.paa";
		size=32;
	};
};
class RscMapControlEmpty: RscMapControl
{
	ptsPerSquareForLod1=1000;
	ptsPerSquareForLod2=1000;
	ptsPerSquareMainRoad=1000;
	ptsPerSquareMainRoadSimple=1000;
	ptsPerSquareObjLod1=1000;
	ptsPerSquareRoadSimple=1000;
	ptsPerSquareTown=1000;
	ptsPerSquareTownEdge=1000;
	drawShaded=0;
	drawObjects=0;
	text="#(rgb,1,1,1)color(1,1,1,1)";
};
class RscVehicleToggles
{
	y=-1;
};
class RscPictureButton: RscActivePicture
{
	color[]={1,1,1,0.69999999};
	tooltip="";
	text="";
	action="";
	style=2096;
};
class RscVideo: RscPicture
{
	autoplay=1;
	loops=1;
};
class RscHorizontalCompass: RscControlsGroupNoScrollbars
{
	delete scriptName;
	delete scriptPath;
	onLoad="[""onLoad"",_this] call (uinamespace getvariable 'BIS_fnc_rscHorizontalCompass')";
	onUnload="[""onUnload"",_this] call (uinamespace getvariable 'BIS_fnc_rscHorizontalCompass')";
	class Controls
	{
		class Map: RscMapControlEmpty
		{
			idc=999;
			w=0;
			h=0;
			onDraw="['onDraw',[ctrlparentcontrolsgroup (_this # 0),true],''] call (uinamespace getvariable 'RscHorizontalCompass_script');";
			scaleMax=0.001;
			scaleMin=0.001;
		};
		class Compass: RscControlsGroupNoScrollbars
		{
			idc=6700;
			class Controls
			{
				class Background: RscPicture
				{
					idc=6713;
					colorText[]=
					{
						"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])",
						"(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])",
						"(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])",
						"(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"
					};
					text="\Extremo_assets\texture\compass\compassBackground_ca.paa";
				};
				class DangerZone: RscPicture
				{
					idc=6714;
					fade=0;
					colorText[]={0.5,0,0,1};
					text="\Extremo_assets\texture\compass\dangerZone_ca.paa";
				};
				class CurrentTaskArea: RscPicture
				{
					idc=6709;
					fade=1;
					text="\Extremo_assets\texture\compass\currentTaskArea_ca.paa";
					colorText[]={1,0.5,0,1};
					show=1;
				};
				class Center: RscPicture
				{
					idc=6712;
					colorText[]=
					{
						"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
						"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
						"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
						"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"
					};
					text="\Extremo_assets\texture\compass\compassCenter_ca.paa";
				};
				class Bar1: RscControlsGroupNoScrollbars
				{
					idc=6701;
					class Controls
					{
						class N: RscText
						{
							idc=6703;
							text="$STR_MOVE_N";
							shadow=0;
							sizeEx=0.1;
							font="RobotoCondensedLight";
							style=2;
							colorText[]=
							{
								"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
								"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
								"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
								"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"
							};
						};
						class E: N
						{
							idc=6705;
							text="$STR_MOVE_E";
						};
						class S: N
						{
							idc=6704;
							text="$STR_MOVE_S";
						};
						class W: N
						{
							idc=6706;
							text="$STR_MOVE_W";
						};
						class HQ: RscPicture
						{
							idc=6710;
							text="\Extremo_assets\texture\compass\compass_hq_ca.paa";
							colorText[]={1,0,0,1};
							show=0;
						};
						class CurrentTask: RscPicture
						{
							idc=6707;
							text="\Extremo_assets\texture\compass\compass_currentTask_ca.paa";
							colorText[]={1,0.5,0,1};
							show=0;
						};
						class CustomMark: RscPicture
						{
							idc=6711;
							text="\Extremo_assets\texture\compass\compass_customMark_ca.paa";
							colorText[]={1,1,1,1};
							show=0;
						};
					};
				};
				class Bar2: Bar1
				{
					idc=6702;
					x="GRID_COMPASS_W";
				};
				class CurrentTaskIn: RscPicture
				{
					idc=6708;
					fade=1;
					text="\Extremo_assets\texture\compass\compass_currentTaskIn_ca.paa";
					colorText[]={1,0.5,0,1};
				};
			};
		};
	};
};
class RscVideoKeepAspect: RscPictureKeepAspect
{
	autoplay=1;
	loops=1;
};
class RscMainMenuSpotlight: RscControlsGroupNoScrollbars
{
	fade=1;
	x="0.5 - (1.5 * 	10) * 	(pixelW * pixelGridNoUIScale * 2) - 	(2 * pixelW)";
	y="0.5 - (	10 / 2) * 	(pixelH * pixelGridNoUIScale * 2)";
	w="10 * 	(pixelW * pixelGridNoUIScale * 2)";
	h="10 * 	(pixelH * pixelGridNoUIScale * 2)";
	class Controls
	{
		class GroupPicture: RscControlsGroupNoScrollbars
		{
			x=0;
			y=0;
			w="10 * 	(pixelW * pixelGridNoUIScale * 2)";
			h="10 * 	(pixelH * pixelGridNoUIScale * 2)";
			class Controls
			{
				class Picture: RscPictureKeepAspect
				{
					idc=1023;
					text="#(argb,8,8,3)color(1,0,1,1)";
					x=0;
					y=0;
					w="10 * 	(pixelW * pixelGridNoUIScale * 2)";
					h="10 * 	(pixelH * pixelGridNoUIScale * 2)";
				};
				class Video: RscVideo
				{
					idc=1024;
					show=0;
					x=0;
					y=0;
					w="10 * 	(pixelW * pixelGridNoUIScale * 2)";
					h="10 * 	(pixelH * pixelGridNoUIScale * 2)";
				};
			};
		};
		class GroupHover: RscControlsGroupNoScrollbars
		{
			idc=1025;
			fade=1;
			x=0;
			y=0;
			w="10 * 	(pixelW * pixelGridNoUIScale * 2)";
			h="10 * 	(pixelH * pixelGridNoUIScale * 2)";
			class Controls
			{
				class Overlay: RscPicture
				{
					text="\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\hover_ca.paa";
					colorText[]={0,0,0,0.5};
					x=0;
					y=0;
					w="10 * 	(pixelW * pixelGridNoUIScale * 2)";
					h="10 * 	(pixelH * pixelGridNoUIScale * 2)";
				};
				class LineLeft: RscText
				{
					colorBackground[]={1,1,1,1};
					x=0;
					y=0;
					w="pixelW";
					h="10 * 	(pixelH * pixelGridNoUIScale * 2)";
				};
				class LineRight: LineLeft
				{
					x="10 * 	(pixelW * pixelGridNoUIScale * 2) - pixelW";
				};
				class LineTop: LineLeft
				{
					idc=1027;
					x=0;
					y=0;
					w="10 * 	(pixelW * pixelGridNoUIScale * 2)";
					h="(pixelH * pixelGrid * 2)";
					colorText[]={0,0,0,1};
					shadow=0;
					style=0;
					sizeEx="(pixelH * pixelGrid * 2)";
					font="PuristaLight";
					onLoad="(_this select 0) ctrlsettext toupper ctrltext (_this select 0);";
				};
				class LineBottom: LineTop
				{
					y="10 * 	(pixelH * pixelGridNoUIScale * 2) - pixelH";
					h="pixelH";
				};
			};
		};
		class TextBackground: RscPicture
		{
			idc=1029;
			text="\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\spotlight_backgroundText_ca.paa";
			colorText[]={0,0,0,0.5};
			x=0;
			y=0;
			w="10 * 	(pixelW * pixelGridNoUIScale * 2)";
			h="10 * 	(pixelH * pixelGridNoUIScale * 2)";
		};
		class Text: RscStructuredText
		{
			idc=1028;
			size="1.00 * 	(pixelH * pixelGridNoUIScale * 2)";
			shadow=2;
			x=0;
			y=0;
			w="10 * 	(pixelW * pixelGridNoUIScale * 2)";
			h="10 * 	(pixelH * pixelGridNoUIScale * 2)";
			class Attributes
			{
				align="center";
				color="#ffffff";
				font="PuristaBold";
			};
		};
		class Button: RscButton
		{
			idc=1026;
			colorBackground[]={0,0,0,0};
			colorBackgroundActive[]={0,0,0,0};
			colorBackgroundDisabled[]={0,0,0,0};
			colorFocused[]={0,0,0,0};
			colorDisabled[]={0,0,0,0};
			x=0;
			y=0;
			w="10 * 	(pixelW * pixelGridNoUIScale * 2)";
			h="10 * 	(pixelH * pixelGridNoUIScale * 2)";
		};
	};
};
class RscPictureMenuButton: RscButtonMenu
{
	style=2;
};
class RscExtremoQuickStats: RscStructuredText
{
	size="1 * pixelH";
};
class RscExtremoItemListBox: RscListBox
{
	sizeEx="0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	sizeEx2="0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	rowHeight="2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	canDrag=0;
	itemSpacing=0.001;
	period=1.2;
	shadow=0;
	maxHistoryDelay=1;
	fade=0;
	deletable=0;
	type=5;
	style=16;
	colorBackground[]={0,0,0,0.30000001};
	colorDisabled[]={1,1,1,0.25};
	colorPicture[]={1,1,1,1};
	colorPictureDisabled[]={1,1,1,0.25};
	colorPictureRight[]={1,1,1,1};
	colorPictureRightDisabled[]={1,1,1,0.25};
	colorPictureSelected[]={1,1,1,1};
	colorScrollbar[]={1,0,0,0};
	colorSelect2[]={0,0,0,1};
	colorSelect2Right[]={0,0,0,1};
	colorSelectBackground2[]={1,1,1,0.5};
	colorSelectBackground[]={0.94999999,0.94999999,0.94999999,1};
	colorSelectRight[]={0,0,0,1};
	colorShadow[]={0,0,0,0.5};
	colorText[]={1,1,1,1};
	colorTextRight[]={1,1,1,1};
	disabledCtrlColor[]={1,1,1,0.5};
	itemBackground[]={1,1,1,0.1};
	tooltipColorBox[]={1,1,1,1};
	tooltipColorShade[]={0,0,0,0.64999998};
	tooltipColorText[]={1,1,1,1};
};
class RscExtremoPrimaryButton: RscButton
{
	w="300 * pixelW";
	h="60 * pixelH";
	colorBackground[]=
	{
		"199/255",
		"38/255",
		"81/255",
		1
	};
	colorText[]={1,1,1,1};
	shadow=0;
	font="RobotoCondensed";
	sizeEx="30 * pixelH";
	colorFocused[]=
	{
		"199/255",
		"38/255",
		"81/255",
		0.80000001
	};
	colorBackgroundActive[]=
	{
		"199/255",
		"38/255",
		"81/255",
		0.80000001
	};
};
class RscExtremoMapCreateMenu: RscControlsGroupNoScrollbars
{
	onLoad="uiNamespace setVariable ['RscExtremoMapCreateMenu', _this select 0]";
	onUnload="uiNamespace setVariable ['RscExtremoMapCreateMenu', controlNull]";
	x=0;
	y=0;
	w="21.5 * (0.025)";
	h="13.5 * (0.04)";
	class controls
	{
		class DialogBackground: RscText
		{
			idc=-1;
			x="0 * (0.025) + (0)";
			y="1.1 * (0.04) + (0)";
			w="21.5 * (0.025)";
			h="9.9 * (0.04)";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
		class DialogCaption: RscText
		{
			idc=-1;
			text="Add Family Marker";
			x="0 * (0.025) + (0)";
			y="0 * (0.04) + (0)";
			w="21.5 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0.1,0.1,0.1,1};
		};
		class NameLabel: RscText
		{
			idc=-1;
			text="Name:";
			x="0.5 * (0.025) + (0)";
			y="1.5 * (0.04) + (0)";
			w="5.5 * (0.025)";
			h="1.5 * (0.04)";
		};
		class NameInput: RscEdit
		{
			idc=4000;
			x="6.5 * (0.025) + (0)";
			y="1.5 * (0.04) + (0)";
			w="14.5 * (0.025)";
			h="1.5 * (0.04)";
			autocomplete="";
			font="EtelkaMonospacePro";
			colorText[]={0.94999999,0.94999999,0.94999999,1};
			style=16;
			sizeEx="1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ColorLabel: RscText
		{
			idc=-1;
			text="Color:";
			x="0.5 * (0.025) + (0)";
			y="3.5 * (0.04) + (0)";
			w="5.5 * (0.025)";
			h="1 * (0.04)";
		};
		class ColorDropDown: RscCombo
		{
			idc=4002;
			x="6.5 * (0.025) + (0)";
			y="3.5 * (0.04) + (0)";
			w="14.5 * (0.025)";
			h="1 * (0.04)";
			onLBSelChanged="_this call Extremo_fnc_gui_clan_markerAddMenu_event_onColorLbSelectionChanged;";
		};
		class IconLabel: RscText
		{
			idc=-1;
			text="Icon:";
			x="0.5 * (0.025) + (0)";
			y="5 * (0.04) + (0)";
			w="5.5 * (0.025)";
			h="1 * (0.04)";
		};
		class IconDropDown: RscCombo
		{
			idc=4001;
			x="6.5 * (0.025) + (0)";
			y="5 * (0.04) + (0)";
			w="14.5 * (0.025)";
			h="1 * (0.04)";
			onLBSelChanged="_this call Extremo_fnc_gui_clan_markerAddMenu_event_onIconLbSelectionChanged;";
		};
		class CancelButton: RscButtonMenuCancel
		{
			idc=-1;
			x="14 * (0.025) + (0)";
			y="9.5 * (0.04) + (0)";
			w="7 * (0.025)";
			h="1 * (0.04)";
			action="call Extremo_fnc_gui_clan_markerAddMenu_event_onUnload;";
		};
		class AddButton: RscButtonMenuOK
		{
			idc=-1;
			text="ADD";
			x="6.5 * (0.025) + (0)";
			y="9.5 * (0.04) + (0)";
			w="7 * (0.025)";
			h="1 * (0.04)";
			action="call Extremo_fnc_gui_clan_markerAddMenu_event_onAddButtonClick;";
		};
		class IconSizeLabel: RscText
		{
			idc=-1;
			text="Icon size:";
			x="0.5 * (0.025) + (0)";
			y="6.5 * (0.04) + (0)";
			w="5.5 * (0.025)";
			h="1 * (0.04)";
		};
		class TextSizeLabel: RscText
		{
			idc=-1;
			text="Text size:";
			x="0.5 * (0.025) + (0)";
			y="8 * (0.04) + (0)";
			w="5.5 * (0.025)";
			h="1 * (0.04)";
		};
		class IconSizeSlider: RscXSliderH
		{
			idc=4004;
			x="6.5 * (0.025) + (0)";
			y="6.5 * (0.04) + (0)";
			w="14.5 * (0.025)";
			h="1 * (0.04)";
			sliderPosition=30;
			sliderRange[]={20,50};
			onSliderPosChanged="_this call Extremo_fnc_gui_clan_markerAddMenu_event_onIconResize; false";
			color[]=
			{
				"63/255",
				"212/255",
				"252/255",
				1
			};
			colorActive[]=
			{
				"63/255",
				"212/255",
				"252/255",
				1
			};
		};
		class TextSizeSlider: RscXSliderH
		{
			idc=4005;
			x="6.5 * (0.025) + (0)";
			y="8 * (0.04) + (0)";
			w="14.5 * (0.025)";
			h="1 * (0.04)";
			sliderPosition=0.059999999;
			sliderRange[]={0.02,0.2};
			onSliderPosChanged="call Extremo_fnc_gui_clan_markerAddMenu_event_onTextResize; false";
			color[]=
			{
				"63/255",
				"212/255",
				"252/255",
				1
			};
			colorActive[]=
			{
				"63/255",
				"212/255",
				"252/255",
				1
			};
		};
	};
};
class RscExtremoMapCreatePoly: RscControlsGroupNoScrollbars
{
	onLoad="uiNamespace setVariable ['RscExtremoMapCreatePoly', _this select 0]";
	onUnload="uiNamespace setVariable ['RscExtremoMapCreatePoly', controlNull]";
	x="0 * (0.025) + (0)";
	y="0 * (0.04) + (0)";
	w="15 * (0.025)";
	h="7.5 * (0.04)";
	class controls
	{
		class DialogCaption: RscText
		{
			idc=-1;
			text="Add Family Polygon";
			x="0 * (0.025) + (0)";
			y="0 * (0.04) + (0)";
			w="15 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0.1,0.1,0.1,1};
		};
		class DialogBackground: RscText
		{
			idc=-1;
			x="0 * (0.025) + (0)";
			y="1.2 * (0.04) + (0)";
			w="15 * (0.025)";
			h="6 * (0.04)";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
		class ColorLabel: RscText
		{
			idc=-1;
			text="Color:";
			x="0 * (0.025) + (0)";
			y="1.5 * (0.04) + (0)";
			w="3.5 * (0.025)";
			h="1 * (0.04)";
		};
		class ColorDropDown: RscCombo
		{
			idc=4000;
			x="3.5 * (0.025) + (0)";
			y="1.5 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
		};
		class LinkedLabel: RscText
		{
			idc=-1;
			text="Linked:";
			x="0 * (0.025) + (0)";
			y="3 * (0.04) + (0)";
			w="3.5 * (0.025)";
			h="1 * (0.04)";
		};
		class LinkedStatus: RscStructuredText
		{
			idc=4001;
			x="3.5 * (0.025) + (0)";
			y="3 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
		};
		class AddButton: RscButtonMenuOK
		{
			idc=4002;
			text="ADD";
			x="4 * (0.025) + (0)";
			y="6 * (0.04) + (0)";
			w="5 * (0.025)";
			h="1 * (0.04)";
			default=0;
			action="call Extremo_fnc_gui_clan_polyAddMenu_event_onAddButtonClick;";
		};
		class CancelButton: RscButtonMenuCancel
		{
			idc=-1;
			x="9.5 * (0.025) + (0)";
			y="6 * (0.04) + (0)";
			w="5 * (0.025)";
			h="1 * (0.04)";
			action="call Extremo_fnc_gui_clan_polyAddMenu_event_onUnload;";
		};
		class LinesStatus: RscProgress
		{
			idc=4003;
			x="3.5 * (0.025) + (0)";
			y="4.5 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorBar[]={0,0.77999997,0.93000001,0.60000002};
		};
		class LinesLabel: RscText
		{
			idc=4004;
			text="Lines:";
			x="0 * (0.025) + (0)";
			y="4.5 * (0.04) + (0)";
			w="3.5 * (0.025)";
			h="1 * (0.04)";
		};
	};
};
class RscExtremoMapContextMenu: ctrlMenu
{
	colorBackground[]={0.1,0.1,0.1,1};
	class Items
	{
		items[]=
		{
			"CMInsert",
			"CMRemove"
		};
		class CMRemove
		{
			action="_this call Extremo_fnc_gui_clan_context_event_onRemoveButtonClick;";
			text="Remove";
			picture="\a3\3den\Data\Cfg3DEN\History\deleteItems_ca.paa";
		};
		class CMInsert
		{
			items[]=
			{
				"CMInsertMarker",
				"CMInsertPoly"
			};
			text="Add";
			picture="\a3\3den\Data\Cfg3DEN\History\create_ca.paa";
		};
		class CMInsertMarker
		{
			action="_this call Extremo_fnc_gui_clan_context_event_onMarkerAddButtonClick;";
			text="Marker";
			picture="\a3\3den\Data\Cfg3DEN\History\create_ca.paa";
		};
		class CMInsertPoly
		{
			action="_this call Extremo_fnc_gui_clan_context_event_onPolyAddButtonClick;";
			text="Polygon";
			picture="\a3\3den\Data\Cfg3DEN\History\create_ca.paa";
		};
		class Default
		{
			enable=0;
			text="Empty";
			data="Empty";
		};
	};
};
class RscChatListDefault
{
	shadow=1;
	shadowPlayer=0;
	shadowColor[]={0,0,0,0.5};
	x="safeZoneX + 60 * pixelW";
	y="(safeZoneY + safeZoneH) - 140 * pixelH - 40 * pixelH";
	w="320 * pixelW";
	h="400 * pixelH";
	font="PuristaMedium";
	size="(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	rows="((5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))+ 0.3*(safezoneH - 				(			((safezoneW / safezoneH) min 1.2) / 1.2))) / 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	colorBackground[]={0,0,0,0.30000001};
	colorGlobalChannel[]=
	{
		"0.606*1.4",
		"0.606*1.4",
		"0.606*1.4",
		1
	};
	colorGlobalChannelPlayerBackground[]=
	{
		"0.606*1.4",
		"0.606*1.4",
		"0.606*1.4",
		0.5
	};
	colorGlobalChannelPlayerText[]={0,0,0,1};
	colorSideChannel[]=
	{
		"0.196*1.4",
		"0.592*1.4",
		"0.706*1.4",
		1
	};
	colorSideChannelPlayerBackground[]=
	{
		"0.196*1.4",
		"0.592*1.4",
		"0.706*1.4",
		0.5
	};
	colorSideChannelPlayerText[]={0,0,0,1};
	colorCommandChannel[]=
	{
		"0.8275*1.4",
		"0.8196*1.4",
		"0.1961*1.4",
		1
	};
	colorCommandChannelPlayerBackground[]=
	{
		"0.8275*1.4",
		"0.8196*1.4",
		"0.1961*1.4",
		0.5
	};
	colorCommandChannelPlayerText[]={0,0,0,1};
	colorGroupChannel[]={0.70899999,0.972,0.384,1};
	colorGroupChannelPlayerBackground[]={0.70899999,0.972,0.384,0.5};
	colorGroupChannelPlayerText[]={0,0,0,1};
	colorVehicleChannel[]=
	{
		"0.863*1.4",
		"0.584*1.4",
		"0.0*1.4",
		1
	};
	colorVehicleChannelPlayerBackground[]=
	{
		"0.863*1.4",
		"0.584*1.4",
		"0.0*1.4",
		0.5
	};
	colorVehicleChannelPlayerText[]={0,0,0,1};
	colorDirectChannel[]={1,1,1,1};
	colorDirectChannelPlayerBackground[]={1,1,1,0.5};
	colorDirectChannelPlayerText[]={0,0,0,1};
	colorPlayerChannel[]={0.80000001,0.69999999,1,1};
	colorPlayerChannelPlayerBackground[]={0.80000001,0.69999999,1,0.5};
	colorPlayerChannelPlayerText[]={0,0,0,1};
	colorMessage[]={1,1,1,1};
	colorMessageProtocol[]={0.64999998,0.64999998,0.64999998,1};
};
class RscExtremoToast: RscControlsGroupNoScrollbars
{
	idc=-1;
	x=0;
	y=0;
	w="240 * pixelW";
	h="60 * pixelH";
	fade=1;
	class controls
	{
		class Background: RscText
		{
			idc=100;
			x=0;
			y=0;
			w="240 * pixelW";
			h="60 * pixelH";
			colorBackground[]=
			{
				"19/255",
				"22/255",
				"27/255",
				0.80000001
			};
		};
		class Stripe: RscText
		{
			idc=101;
			x=0;
			y=0;
			w="5 * pixelW";
			h="60 * pixelH";
			colorBackground[]=
			{
				"199/255",
				"38/255",
				"81/255",
				1
			};
		};
		class Text: RscStructuredText
		{
			idc=102;
			text="<t size='22' font='PuristaMedium'>Building disallowed!</t><br/><t color='#ff979ba1' size='19' font='PuristaLight'>Concrete mixer is nearby.</t>";
			x="10 * pixelW";
			y="0";
			w="(240 - 10) * pixelW";
			h="60 * pixelH"; 
			size="20 * pixelH";
			sizeEx="20 * pixelH";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0};
			shadow=0;
			class Attributes
			{
				font="RobotoCondensed";
				color="#ffffff";
				colorLink="#ffffff";
				align="left";
				shadow=0;
			}; 
		};
	};
};
class RscExtremoBaguette: RscControlsGroupNoScrollbars
{
	idc=-1;
	x="safezoneX + safezoneW * 0.5 - ((60 + 5 + 400) * 0.5) * pixelW";
	y="safezoneY + 60 * pixelH";
	w="(60 + 5 + 400) * pixelW";
	h="60 * pixelH";
	class controls
	{
		class TextGroup: RscControlsGroupNoScrollbars
		{
			idc=5001;
			x="(60 + 5) * pixelW";
			y=0;
			w="400 * pixelW";
			h="60 * pixelH";
			fade=0;
			class controls
			{
				class TextBackground: RscText
				{
					idc=-1;
					x=0;
					y=0;
					w="400 * pixelW";
					h="60 * pixelH";
					colorBackground[]=
					{
						"19/255",
						"22/255",
						"27/255",
						0.80000001
					};
				};
				class Text: RscText
				{
					idc=5002;
					x="5 * pixelW";
					y=0;
					w="(400 - 5) * pixelW";
					h="60 * pixelH";
					colorText[]={1,1,1,1};
					font="PuristaSemibold";
					sizeEx="29 * pixelH";
					shadow=0;
				};
			};
		};
		class IconGroup: RscControlsGroupNoScrollbars
		{
			idc=5000;
			x=0;
			y=0;
			w="60 * pixelW";
			h="60 * pixelH";
			fade=0;
			class controls
			{
				class IconBackground: RscText
				{
					idc=-1;
					x=0;
					y=0;
					w="60 * pixelW";
					h="60 * pixelH";
					colorBackground[]=
					{
						"19/255",
						"22/255",
						"27/255",
						0.80000001
					};
				};
				class Icon: RscPictureKeepAspect
				{
					idc=5003;
					text="Extremo_Assets\texture\mod\icon.paa";
					x=0;
					y=0;
					w="60 * pixelW";
					h="60 * pixelH";
				};
			};
		};
	};
};



//--- Custom UI Screens

//- Main Menu
delete RscDisplayBootcampMsgBox;
class RscDisplayMain
{
	onLoad="with uiNameSpace do { RscDisplayMain = _this#0; ['onLoad',_this,'RscDisplayMain','GUI'] call BIS_fnc_initDisplay; [RscDisplayMain, 'RscDisplayMain'] call Extremo_fnc_gui_loadingScreen_load;}; ";
	onUnload="with uiNameSpace do {['onUnload',_this,'RscDisplayMain','GUI'] call BIS_fnc_initDisplay; (_this#0) call Extremo_fnc_gui_loadingScreen_unload;  RscDisplayMain = displayNull;};";
	class controlsBackground
	{
		delete TileGroup;
	};
	class Controls
	{
		class Spotlight3: RscMainMenuSpotlight
		{
			idc=1022;
			x="0.5 + (0.5 * 	10) * 	(pixelW * pixelGridNoUIScale * 2) + 	(2 * pixelW)";
			class Controls: Controls
			{
				class GroupPicture: GroupPicture
				{
					class Controls: Controls
					{
						class Picture: Picture { text="\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\spotlight_3_ca.paa"; };
						class Video: Video { text="\a3\Ui_f\Video\spotlight3.ogv"; };
					};
				};
				class GroupHover: GroupHover
				{
					class Controls: Controls
					{
						class Overlay: Overlay {};
						class LineLeft: LineLeft {};
						class LineRight: LineRight {};
						class LineTop: LineTop {text="Extremo Editor"; };
						class LineBottom: LineBottom {};
					};
				};
				class TextBackground: TextBackground {};
				class Text: Text { text=""; };
				class Button: Button { };
			};
		};
	};
};

//- Main Map
class RscDisplayMainMap
{
	class controls
	{
		class ExtremoMarkerMenu: RscExtremoMapCreateMenu
		{
			show=0;
		};
		class ExtremoPolyMenu: RscExtremoMapCreatePoly
		{
			show=0;
		};
	};
	class controlsBackground
	{
		class CA_Map: RscMapControl
		{
			onDraw="_this call Extremo_fnc_gui_map_event_onDraw;";
			onMouseButtonUp="_this call Extremo_fnc_gui_map_event_onMouseButtonUp";
			onMouseButtonDown="_this call Extremo_fnc_gui_map_event_onMouseButtonDown";
		};
	};
};

//- Loading
class RscMPSetupMessage
{
	access=3;
	onLoad="with uiNameSpace do { [_this select 0, 'RscMPSetupMessage'] call Extremo_fnc_gui_loadingScreen_load; };";
	onUnload="with uiNameSpace do { (_this select 0) call Extremo_fnc_gui_loadingScreen_unload;  };";
	class controlsBackground
	{
		class FullscreenBackground: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class Vignette: RscVignette
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class ExtremoBlackBackground: RscText
		{
			idc=-1;
			colorBackground[]={0,0,0,1};
			x="safezoneXAbs";
			y="safezoneY";
			w="safezoneWAbs";
			h="safezoneH";
		};
		class ExtremoBackgroundPicture: RscPicture
		{
			idc=66000;
			x="safezoneX";
			y="safezoneY";
			w="safezoneW";
			h="safezoneW * 4/3";
			text="Extremo_Assets\texture\loading\loading_cheathas_co.paa";
		};
	};
	class Controls
	{
		class BackgroundFull: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class BackgroundProgress: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class DownloadText: RscStructuredText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class ExtremoProgress: RscProgress
		{
			idc=102;
			x="safeZoneX";
			y="safeZoneY";
			w="safeZoneW";
			h="5 * pixelH";
			colorBar[]=
			{
				"199/255",
				"38/255",
				"81/255",
				1
			};
		};
		class ExtremoSpinnerPicture: RscPicture
		{
			idc=66001;
			x="safeZoneX + 60 * pixelW";
			y="safeZoneY + safeZoneH - (60 + 64) * pixelH";
			w="64 * pixelW";
			h="64 * pixelH";
			text="Extremo_Assets\texture\loading\spinner_ca.paa";
			type=0;
			centerU=0.5;
			centerV=0.5;
			angle=90;
			show=0;
		};
		class ExtremoSpinnerTitle: RscStructuredText
		{
			idc=66002;
			text="";
			x="(safeZoneX + 60 * pixelW) + 0.10";
			y="safeZoneY + safeZoneH - (60 + 64 - 10) * pixelH";
			w="safeZoneW - (60 + 64 + 15) * pixelW";
			h="64 * pixelH";
			size="44 * pixelH";
			sizeEx="44 * pixelH";
			colorText[]={1,1,1,1};
			shadow=0;
			class Attributes
			{
				font="RobotoCondensed";
				color="#ffffff";
				colorLink="#ffffff";
				align="left";
				shadow=0;
			};
		};
		class ExtremoLogo: RscControlsGroupNoScrollbars
		{
			idc=66015;
			x="safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y="safeZoneY + 60 * pixelH";
			w="380 * pixelW";
			h="60 * pixelH";
			class controls
			{
				class ExtremoModBackground: RscText
				{
					idc=66014;
					colorBackground[]={0,0,0,1};
					x=0;
					y=0;
					w="380 * pixelW";
					h="60 * pixelH";
					show = 0;
				};
				class ExtremoModIcon: RscPictureKeepAspect
				{
					idc=66011;
					text="";
					x=0;
					y=0;
					w="60 * pixelW";
					h="60 * pixelH";
					show = 0;
				};
				class ExtremoModName: RscText
				{
					idc=66012;
					text="";
					font="RobotoCondensed";
					x="(60 + 10) * pixelW";
					y="1 * pixelH";
					w="(380 - 60 - 10) * pixelW";
					h="(30 + 15) * pixelH";
					sizeEx="30 * pixelH";
					colorText[]={1,1,1,1};
					shadow=0;
					show = 0;
				};
				class ExtremoModUrl: RscText
				{
					idc=-66013;
					text="";
					font="RobotoCondensedLight";
					x="(60 + 10) * pixelW";
					y="(1 + 30) * pixelH";
					w="(380 - 60 - 10) * pixelW";
					h="20 * pixelH";
					sizeEx="20 * pixelH";
					colorText[]=
					{
						"151/255",
						"155/255",
						"161/255",
						1
					};
					show = 0;
					shadow=0;
				};
			};
		};
		class ExtremoMap: RscControlsGroupNoScrollbars
		{
			idc=66003;
			x="safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y="safeZoneY + (60 + 60 + 30) * pixelH";
			w="380 * pixelW";
			h="(190 + 30 + 20) * pixelH";
			show=0;
			class controls
			{
				class ExtremoMapBackground: RscText
				{
					idc=-1;
					colorBackground[]={0,0,0,1};
					x=0;
					y=0;
					w="380 * pixelW";
					h="(190 + 30 + 20) * pixelH";
				};
				class ExtremoMapPictureBackground: RscText
				{
					idc=-1;
					colorBackground[]=
					{
						"18/255",
						"19/255",
						"21/255",
						1
					};
					x=0;
					y=0;
					w="380 * pixelW";
					h="190 * pixelH";
				};
				class ExtremoMapPicture: RscPicture
				{
					idc=66004;
					text="a3\ui_f\data\Logos\arma3_white_ca.paa";
					x=0;
					y=0;
					w="380 * pixelW";
					h="190 * pixelH";
				};
				class ExtremoMapName: RscText
				{
					idc=66005;
					text="RscMPSetupMessage";
					font="RobotoCondensed";
					x=0;
					y="(190 + 1) * pixelH";
					w="380 * pixelW";
					h="30 * pixelH";
					sizeEx="24 * pixelH";
					colorText[]={1,1,1,1};
					shadow=0;
					style=192;
				};
				class ExtremoMapAuthor: RscText
				{
					idc=66006;
					text="by some special person";
					font="RobotoCondensedLight";
					x=0;
					y="(190 + 25 - 1) * pixelH";
					w="380 * pixelW";
					h="20 * pixelH";
					sizeEx="20 * pixelH";
					colorText[]=
					{
						"151/255",
						"155/255",
						"161/255",
						1
					};
					shadow=0;
				};
			};
		};
		class ExtremoMission: RscControlsGroupNoScrollbars
		{
			idc=66007;
			x="safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y="safeZoneY + (60 + 60 + 30 + 190 + 30 + 20 + 30) * pixelH";
			w="380 * pixelW";
			h="(190 + 30 + 20) * pixelH";
			show=0;
			class controls
			{
				class ExtremoMissionBackground: RscText
				{
					idc=-1;
					colorBackground[]={0,0,0,1};
					x=0;
					y=0;
					w="380 * pixelW";
					h="(190 + 30 + 20) * pixelH";
				};
				class ExtremoMissionPictureBackground: RscText
				{
					idc=-1;
					colorBackground[]=
					{
						"18/255",
						"19/255",
						"21/255",
						1
					};
					x=0;
					y=0;
					w="380 * pixelW";
					h="190 * pixelH";
				};
				class ExtremoMissionPicture: RscPictureKeepAspect
				{
					idc=66008;
					text="Extremo_Assets\texture\mod\logo.paa";
					x=0;
					y=0;
					w="380 * pixelW";
					h="190 * pixelH";
				};
				class ExtremoMissionName: RscText
				{
					idc=66009;
					text="RscMPSetupMessage";
					font="RobotoCondensed";
					x=0;
					y="(190 + 1) * pixelH";
					w="380 * pixelW";
					h="30 * pixelH";
					sizeEx="24 * pixelH";
					colorText[]={1,1,1,1};
					shadow=0;
					style=192;
				};
				class ExtremoMissionAuthor: RscText
				{
					idc=66010;
					text="by Community";
					font="RobotoCondensedLight";
					x=0;
					y="(190 + 25 - 1) * pixelH";
					w="380 * pixelW";
					h="20 * pixelH";
					sizeEx="20 * pixelH";
					colorText[]=
					{
						"151/255",
						"155/255",
						"161/255",
						1
					};
					shadow=0;
				};
			};
		};
	};
};
class RscDisplayClient: RscStandardDisplay
{
	delete scriptName;
	delete scriptPath;
	access=3;
	onLoad="with uiNameSpace do { [_this select 0, 'RscDisplayClient'] call Extremo_fnc_gui_loadingScreen_load; };";
	onUnload="with uiNameSpace do { (_this select 0) call Extremo_fnc_gui_loadingScreen_unload; };";
	class controlsBackground
	{
		class Black: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class Map: RscPicture
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class Noise: RscPicture
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class CA_Vignette: RscVignette
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class Line: RscPicture
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class ExtremoBlackBackground: RscText
		{
			idc=-1;
			colorBackground[]={0,0,0,1};
			x="safezoneXAbs";
			y="safezoneY";
			w="safezoneWAbs";
			h="safezoneH";
		};
		class ExtremoBackgroundPicture: RscPicture
		{
			idc=66000;
			x="safezoneX";
			y="safezoneY";
			w="safezoneW";
			h="safezoneW * 4/3";
			text="Extremo_Assets\texture\loading\loading_cheathas_co.paa";
		};
	};
	class Controls
	{
		class Disclaimer: RscControlsGroupNoScrollbars
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class MapAuthor: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class MapBackBottom: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class MapBackTop: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class MapName: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class MapDescription: RscStructuredText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class ProgressMap: RscProgress
		{
			x="safeZoneX";
			y="safeZoneY";
			w="safeZoneW";
			h="5 * pixelH";
			colorBar[]=
			{
				"199/255",
				"38/255",
				"81/255",
				1
			};
		};
		class ProgressMission: ProgressMap
		{
			x="safeZoneX";
			y="safeZoneY";
			w="safeZoneW";
			h="5 * pixelH";
			colorBar[]=
			{
				"199/255",
				"38/255",
				"81/255",
				1
			};
		};
		class ExtremoSpinnerPicture: RscPicture
		{
			idc=66001;
			x="safeZoneX + 60 * pixelW";
			y="safeZoneY + safeZoneH - (60 + 64) * pixelH";
			w="64 * pixelW";
			h="64 * pixelH";
			text="Extremo_Assets\texture\loading\spinner_ca.paa";
			type=0;
			centerU=0.5;
			centerV=0.5;
			angle=90;
			show=0;
		};
		class ExtremoSpinnerTitle: RscStructuredText
		{
			idc=66002;
			text="";
			x="(safeZoneX + 60 * pixelW) + 0.10";
			y="safeZoneY + safeZoneH - (60 + 64 - 10) * pixelH";
			w="safeZoneW - (60 + 64 + 15) * pixelW";
			h="64 * pixelH";
			size="44 * pixelH";
			sizeEx="44 * pixelH";
			colorText[]={1,1,1,1};
			shadow=0;
			class Attributes
			{
				font="RobotoCondensed";
				color="#ffffff";
				colorLink="#ffffff";
				align="left";
				shadow=0;
			};
		};
		class ExtremoLogo: RscControlsGroupNoScrollbars
		{
			idc=66015;
			x="safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y="safeZoneY + 60 * pixelH";
			w="380 * pixelW";
			h="60 * pixelH";
			class controls
			{
				class ExtremoModBackground: RscText
				{
					idc=66014;
					colorBackground[]={0,0,0,1};
					x=0;
					y=0;
					w="380 * pixelW";
					h="60 * pixelH";
					show = 0;
				};
				class ExtremoModIcon: RscPictureKeepAspect
				{
					idc=66011;
					text="";
					x=0;
					y=0;
					w="60 * pixelW";
					h="60 * pixelH";
					show = 0;
				};
				class ExtremoModName: RscText
				{
					idc=66012;
					text="";
					font="RobotoCondensed";
					x="(60 + 10) * pixelW";
					y="1 * pixelH";
					w="(380 - 60 - 10) * pixelW";
					h="(30 + 15) * pixelH";
					sizeEx="30 * pixelH";
					colorText[]={1,1,1,1};
					shadow=0;
					show = 0;
				};
				class ExtremoModUrl: RscText
				{
					idc=-66013;
					text="";
					font="RobotoCondensedLight";
					x="(60 + 10) * pixelW";
					y="(1 + 30) * pixelH";
					w="(380 - 60 - 10) * pixelW";
					h="20 * pixelH";
					sizeEx="20 * pixelH";
					colorText[]=
					{
						"151/255",
						"155/255",
						"161/255",
						1
					};
					show = 0;
					shadow=0;
				};
			};
		};
		class ExtremoMap: RscControlsGroupNoScrollbars
		{
			idc=66003;
			x="safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y="safeZoneY + (60 + 60 + 30) * pixelH";
			w="380 * pixelW";
			h="(190 + 30 + 20) * pixelH";
			show=0;
			class controls
			{
				class ExtremoMapBackground: RscText
				{
					idc=-1;
					colorBackground[]={0,0,0,1};
					x=0;
					y=0;
					w="380 * pixelW";
					h="(190 + 30 + 20) * pixelH";
				};
				class ExtremoMapPictureBackground: RscText
				{
					idc=-1;
					colorBackground[]=
					{
						"18/255",
						"19/255",
						"21/255",
						1
					};
					x=0;
					y=0;
					w="380 * pixelW";
					h="190 * pixelH";
				};
				class ExtremoMapPicture: RscPicture
				{
					idc=66004;
					text="a3\ui_f\data\Logos\arma3_white_ca.paa";
					x=0;
					y=0;
					w="380 * pixelW";
					h="190 * pixelH";
				};
				class ExtremoMapName: RscText
				{
					idc=66005;
					text="RscDisplayLoadMission";
					font="RobotoCondensed";
					x=0;
					y="(190 + 1) * pixelH";
					w="380 * pixelW";
					h="30 * pixelH";
					sizeEx="24 * pixelH";
					colorText[]={1,1,1,1};
					shadow=0;
					style=192;
				};
				class ExtremoMapAuthor: RscText
				{
					idc=66006;
					text="by some special person";
					font="RobotoCondensedLight";
					x=0;
					y="(190 + 25 - 1) * pixelH";
					w="380 * pixelW";
					h="20 * pixelH";
					sizeEx="20 * pixelH";
					colorText[]=
					{
						"151/255",
						"155/255",
						"161/255",
						1
					};
					shadow=0;
				};
			};
		};
		class ExtremoMission: RscControlsGroupNoScrollbars
		{
			idc=66007;
			x="safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y="safeZoneY + (60 + 60 + 30 + 190 + 30 + 20 + 30) * pixelH";
			w="380 * pixelW";
			h="(190 + 30 + 20) * pixelH";
			show=0;
			class controls
			{
				class ExtremoMissionBackground: RscText
				{
					idc=-1;
					colorBackground[]={0,0,0,1};
					x=0;
					y=0;
					w="380 * pixelW";
					h="(190 + 30 + 20) * pixelH";
				};
				class ExtremoMissionPictureBackground: RscText
				{
					idc=-1;
					colorBackground[]=
					{
						"18/255",
						"19/255",
						"21/255",
						1
					};
					x=0;
					y=0;
					w="380 * pixelW";
					h="190 * pixelH";
				};
				class ExtremoMissionPicture: RscPictureKeepAspect
				{
					idc=66008;
					text="Extremo_Assets\texture\mod\logo.paa";
					x=0;
					y=0;
					w="380 * pixelW";
					h="190 * pixelH";
				};
				class ExtremoMissionName: RscText
				{
					idc=66009;
					text="RscDisplayLoadMission";
					font="RobotoCondensed";
					x=0;
					y="(190 + 1) * pixelH";
					w="380 * pixelW";
					h="30 * pixelH";
					sizeEx="24 * pixelH";
					colorText[]={1,1,1,1};
					shadow=0;
					style=192;
				};
				class ExtremoMissionAuthor: RscText
				{
					idc=66010;
					text="by Community";
					font="RobotoCondensedLight";
					x=0;
					y="(190 + 25 - 1) * pixelH";
					w="380 * pixelW";
					h="20 * pixelH";
					sizeEx="20 * pixelH";
					colorText[]=
					{
						"151/255",
						"155/255",
						"161/255",
						1
					};
					shadow=0;
				};
			};
		};
	};
};
class RscDisplayLoadMission: RscStandardDisplay
{
	movingEnable=0;
	enableSimulation=0;
	enableDisplay=1;
	access=3;
	onLoad="with uiNameSpace do { [_this select 0, 'RscDisplayLoadMission'] call Extremo_fnc_gui_loadingScreen_load; };";
	onUnload="with uiNameSpace do { (_this select 0) call Extremo_fnc_gui_loadingScreen_unload; };";
	delete scriptName;
	delete scriptPath;
	class controlsBackground
	{
		class Black: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class CA_Vignette: RscVignette
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class Line: RscPicture
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class Map: RscPicture
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class Noise: RscPicture
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class ExtremoBlackBackground: RscText
		{
			idc=-1;
			colorBackground[]={0,0,0,1};
			x="safezoneXAbs";
			y="safezoneY";
			w="safezoneWAbs";
			h="safezoneH";
		};
		class ExtremoBackgroundPicture: RscPicture
		{
			idc=66000;
			x="safezoneX";
			y="safezoneY";
			w="safezoneW";
			h="safezoneW * 4/3";
			text="Extremo_Assets\texture\loading\loading_cheathas_co.paa";
		};
	};
	class controls
	{
		class Disclaimer: RscControlsGroupNoScrollbars
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class LoadingStart: RscControlsGroup
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class MapAuthor: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class MapBackBottom: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class MapBackTop: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class MapDescription: RscStructuredText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class MapName: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class Mission: RscControlsGroupNoScrollbars
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class ProgressMap: RscProgress
		{
			x="safeZoneX";
			y="safeZoneY";
			w="safeZoneW";
			h="5 * pixelH";
			colorBar[]=
			{
				"199/255",
				"38/255",
				"81/255",
				1
			};
		};
		class ProgressMission: ProgressMap
		{
			x="safeZoneX";
			y="safeZoneY";
			w="safeZoneW";
			h="5 * pixelH";
			colorBar[]=
			{
				"199/255",
				"38/255",
				"81/255",
				1
			};
		};
		class Logo3DEN: ctrlStaticPicture
		{
			x="safeZoneX + safeZoneW - 60 * pixelW - 0.3";
			y="safeZoneY + safeZoneH - 60 * pixelW - 0.2";
		};
		class ExtremoSpinnerPicture: RscPicture
		{
			idc=66001;
			x="safeZoneX + 60 * pixelW";
			y="safeZoneY + safeZoneH - (60 + 64) * pixelH";
			w="64 * pixelW";
			h="64 * pixelH";
			text="Extremo_Assets\texture\loading\spinner_ca.paa";
			type=0;
			centerU=0.5;
			centerV=0.5;
			angle=90;
			show=0;
		};
		class ExtremoSpinnerTitle: RscStructuredText
		{
			idc=66002;
			text="";
			x="(safeZoneX + 60 * pixelW) + 0.10";
			y="safeZoneY + safeZoneH - (60 + 64 - 10) * pixelH";
			w="safeZoneW - (60 + 64 + 15) * pixelW";
			h="64 * pixelH";
			size="44 * pixelH";
			sizeEx="44 * pixelH";
			colorText[]={1,1,1,1};
			shadow=0;
			class Attributes
			{
				font="RobotoCondensed";
				color="#ffffff";
				colorLink="#ffffff";
				align="left";
				shadow=0;
			};
		};
		class ExtremoLogo: RscControlsGroupNoScrollbars
		{
			idc=66015;
			x="safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y="safeZoneY + 60 * pixelH";
			w="380 * pixelW";
			h="60 * pixelH";
			class controls
			{
				class ExtremoModBackground: RscText
				{
					idc=66014;
					colorBackground[]={0,0,0,1};
					x=0;
					y=0;
					w="380 * pixelW";
					h="60 * pixelH";
					show = 0;
				};
				class ExtremoModIcon: RscPictureKeepAspect
				{
					idc=66011;
					text="";
					x=0;
					y=0;
					w="60 * pixelW";
					h="60 * pixelH";
					show = 0;
				};
				class ExtremoModName: RscText
				{
					idc=66012;
					text="";
					font="RobotoCondensed";
					x="(60 + 10) * pixelW";
					y="1 * pixelH";
					w="(380 - 60 - 10) * pixelW";
					h="(30 + 15) * pixelH";
					sizeEx="30 * pixelH";
					colorText[]={1,1,1,1};
					shadow=0;
					show = 0;
				};
				class ExtremoModUrl: RscText
				{
					idc=-66013;
					text="";
					font="RobotoCondensedLight";
					x="(60 + 10) * pixelW";
					y="(1 + 30) * pixelH";
					w="(380 - 60 - 10) * pixelW";
					h="20 * pixelH";
					sizeEx="20 * pixelH";
					colorText[]=
					{
						"151/255",
						"155/255",
						"161/255",
						1
					};
					show = 0;
					shadow=0;
				};
			};
		};
		class ExtremoMap: RscControlsGroupNoScrollbars
		{
			idc=66003;
			x="safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y="safeZoneY + (60 + 60 + 30) * pixelH";
			w="380 * pixelW";
			h="(190 + 30 + 20) * pixelH";
			show=0;
			class controls
			{
				class ExtremoMapBackground: RscText
				{
					idc=-1;
					colorBackground[]={0,0,0,1};
					x=0;
					y=0;
					w="380 * pixelW";
					h="(190 + 30 + 20) * pixelH";
				};
				class ExtremoMapPictureBackground: RscText
				{
					idc=-1;
					colorBackground[]=
					{
						"18/255",
						"19/255",
						"21/255",
						1
					};
					x=0;
					y=0;
					w="380 * pixelW";
					h="190 * pixelH";
				};
				class ExtremoMapPicture: RscPicture
				{
					idc=66004;
					text="a3\ui_f\data\Logos\arma3_white_ca.paa";
					x=0;
					y=0;
					w="380 * pixelW";
					h="190 * pixelH";
				};
				class ExtremoMapName: RscText
				{
					idc=66005;
					text="RscDisplayLoadMission";
					font="RobotoCondensed";
					x=0;
					y="(190 + 1) * pixelH";
					w="380 * pixelW";
					h="30 * pixelH";
					sizeEx="24 * pixelH";
					colorText[]={1,1,1,1};
					shadow=0;
					style=192;
				};
				class ExtremoMapAuthor: RscText
				{
					idc=66006;
					text="by some special person";
					font="RobotoCondensedLight";
					x=0;
					y="(190 + 25 - 1) * pixelH";
					w="380 * pixelW";
					h="20 * pixelH";
					sizeEx="20 * pixelH";
					colorText[]=
					{
						"151/255",
						"155/255",
						"161/255",
						1
					};
					shadow=0;
				};
			};
		};
		class ExtremoMission: RscControlsGroupNoScrollbars
		{
			idc=66007;
			x="safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y="safeZoneY + (60 + 60 + 30 + 190 + 30 + 20 + 30) * pixelH";
			w="380 * pixelW";
			h="(190 + 30 + 20) * pixelH";
			show=0;
			class controls
			{
				class ExtremoMissionBackground: RscText
				{
					idc=-1;
					colorBackground[]={0,0,0,1};
					x=0;
					y=0;
					w="380 * pixelW";
					h="(190 + 30 + 20) * pixelH";
				};
				class ExtremoMissionPictureBackground: RscText
				{
					idc=-1;
					colorBackground[]=
					{
						"18/255",
						"19/255",
						"21/255",
						1
					};
					x=0;
					y=0;
					w="380 * pixelW";
					h="190 * pixelH";
				};
				class ExtremoMissionPicture: RscPictureKeepAspect
				{
					idc=66008;
					text="Extremo_Assets\texture\mod\logo.paa";
					x=0;
					y=0;
					w="380 * pixelW";
					h="190 * pixelH";
				};
				class ExtremoMissionName: RscText
				{
					idc=66009;
					text="RscDisplayLoadMission";
					font="RobotoCondensed";
					x=0;
					y="(190 + 1) * pixelH";
					w="380 * pixelW";
					h="30 * pixelH";
					sizeEx="24 * pixelH";
					colorText[]={1,1,1,1};
					shadow=0;
					style=192;
				};
				class ExtremoMissionAuthor: RscText
				{
					idc=66010;
					text="by Community";
					font="RobotoCondensedLight";
					x=0;
					y="(190 + 25 - 1) * pixelH";
					w="380 * pixelW";
					h="20 * pixelH";
					sizeEx="20 * pixelH";
					colorText[]=
					{
						"151/255",
						"155/255",
						"161/255",
						1
					};
					shadow=0;
				};
			};
		};
	};
};
class RscDisplayMultiplayerSetup: RscStandardDisplay
{
	access=3;
	onLoad="with uiNameSpace do { [_this select 0, 'RscDisplayLoadMission'] call Extremo_fnc_gui_loadingScreen_load; };";
	onUnload="with uiNameSpace do { (_this select 0) call Extremo_fnc_gui_loadingScreen_unload; };";
	delete scriptName;
	delete scriptPath;
	class controlsbackground
	{
		class TileGroup: RscControlsGroupNoScrollbars
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class Vignette: RscVignette
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class RscTitleBackground: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class MainBackground: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class MissionSettingsBackground: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class NumOfPlayersBackground: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class SideBackground: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class PlayersPoolHeaderBackground: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class RolesBackground: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class ChatBackground: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class PlayersPoolBackground: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class ExtremoBlackBackground: RscText
		{
			idc=-1;
			colorBackground[]={0,0,0,1};
			x="safezoneXAbs";
			y="safezoneY";
			w="safezoneWAbs";
			h="safezoneH";
		};
		class ExtremoBackgroundPicture: RscPicture
		{
			idc=66000;
			x="safezoneX";
			y="safezoneY";
			w="safezoneW";
			h="safezoneW * 4/3";
			text="Extremo_Assets\texture\loading\loading_cheathas_co.paa";
		};
	};
	class controls
	{
		class SortPing: RscPicture
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class SortPlayers: RscPicture
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class Y_GamerCard: RscActiveText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class PartyGUI: RscActiveText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class MuteAll: RscCheckBox
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class AssignRole: RscActiveText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class ButtonPlayers: RscButtonTextOnly
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class ButtonPing: ButtonPlayers
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class Title: RscTitle
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class PlayersName: RscTitle
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class CA_TextVotingTimeLeft: RscTitle
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class ValueMission: RscTitle
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class CA_TextDescription: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class CA_ValueDescription: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class TextIsland: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class ValueIsland: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class TextSide: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class CA_B_West: RscActiveText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class CA_B_Logic: CA_B_West
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class CA_B_East: CA_B_West
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class CA_B_Guerrila: CA_B_West
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class CA_B_Civilian: CA_B_West
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class CA_B_Virtual: CA_B_West
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class CA_ValueRoles: RscListBox
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class CA_ValuePool: RscListNBox
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class CA_B_EnableAll: RscButtonMenu
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class CA_B_Lock: RscButtonMenu
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class CA_B_Params: RscButtonMenu
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class ButtonSteamWorkshop: RscButtonMenuSteam
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class CA_B_Kick: RscButtonMenu
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class CA_ButtonContinue: RscButtonMenuOK
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class CA_ButtonCancel: RscButtonMenuCancel
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class TextMission: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class TextRole: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class TextPlayersPool: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class TextListedPlayers: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class ValueListedPlayers: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class ExtremoSpinnerPicture: RscPicture
		{
			idc=66001;
			x="safeZoneX + 60 * pixelW";
			y="safeZoneY + safeZoneH - (60 + 64) * pixelH";
			w="64 * pixelW";
			h="64 * pixelH";
			text="Extremo_Assets\texture\loading\spinner_ca.paa";
			type=0;
			centerU=0.5;
			centerV=0.5;
			angle=90;
			show=0;
		};
		class ExtremoSpinnerTitle: RscStructuredText
		{
			idc=66002;
			text="";
			x="(safeZoneX + 60 * pixelW) + 0.10";
			y="safeZoneY + safeZoneH - (60 + 64 - 10) * pixelH";
			w="safeZoneW - (60 + 64 + 15) * pixelW";
			h="64 * pixelH";
			size="44 * pixelH";
			sizeEx="44 * pixelH";
			colorText[]={1,1,1,1};
			shadow=0;
			class Attributes
			{
				font="RobotoCondensed";
				color="#ffffff";
				colorLink="#ffffff";
				align="left";
				shadow=0;
			};
		};
		class ExtremoLogo: RscControlsGroupNoScrollbars
		{
			idc=66015;
			x="safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y="safeZoneY + 60 * pixelH";
			w="380 * pixelW";
			h="60 * pixelH";
			class controls
			{
				class ExtremoModBackground: RscText
				{
					idc=66014;
					colorBackground[]={0,0,0,1};
					x=0;
					y=0;
					w="380 * pixelW";
					h="60 * pixelH";
					show = 0;
				};
				class ExtremoModIcon: RscPictureKeepAspect
				{
					idc=66011;
					text="";
					x=0;
					y=0;
					w="60 * pixelW";
					h="60 * pixelH";
					show = 0;
				};
				class ExtremoModName: RscText
				{
					idc=66012;
					text="";
					font="RobotoCondensed";
					x="(60 + 10) * pixelW";
					y="1 * pixelH";
					w="(380 - 60 - 10) * pixelW";
					h="(30 + 15) * pixelH";
					sizeEx="30 * pixelH";
					colorText[]={1,1,1,1};
					shadow=0;
					show = 0;
				};
				class ExtremoModUrl: RscText
				{
					idc=-66013;
					text="";
					font="RobotoCondensedLight";
					x="(60 + 10) * pixelW";
					y="(1 + 30) * pixelH";
					w="(380 - 60 - 10) * pixelW";
					h="20 * pixelH";
					sizeEx="20 * pixelH";
					colorText[]=
					{
						"151/255",
						"155/255",
						"161/255",
						1
					};
					show = 0;
					shadow=0;
				};
			};
		};
		class ExtremoMap: RscControlsGroupNoScrollbars
		{
			idc=66003;
			x="safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y="safeZoneY + (60 + 60 + 30) * pixelH";
			w="380 * pixelW";
			h="(190 + 30 + 20) * pixelH";
			show=0;
			class controls
			{
				class ExtremoMapBackground: RscText
				{
					idc=-1;
					colorBackground[]={0,0,0,1};
					x=0;
					y=0;
					w="380 * pixelW";
					h="(190 + 30 + 20) * pixelH";
				};
				class ExtremoMapPictureBackground: RscText
				{
					idc=-1;
					colorBackground[]=
					{
						"18/255",
						"19/255",
						"21/255",
						1
					};
					x=0;
					y=0;
					w="380 * pixelW";
					h="190 * pixelH";
				};
				class ExtremoMapPicture: RscPicture
				{
					idc=66004;
					text="a3\ui_f\data\Logos\arma3_white_ca.paa";
					x=0;
					y=0;
					w="380 * pixelW";
					h="190 * pixelH";
				};
				class ExtremoMapName: RscText
				{
					idc=66005;
					text="RscDisplayLoadMission";
					font="RobotoCondensed";
					x=0;
					y="(190 + 1) * pixelH";
					w="380 * pixelW";
					h="30 * pixelH";
					sizeEx="24 * pixelH";
					colorText[]={1,1,1,1};
					shadow=0;
					style=192;
				};
				class ExtremoMapAuthor: RscText
				{
					idc=66006;
					text="by some special person";
					font="RobotoCondensedLight";
					x=0;
					y="(190 + 25 - 1) * pixelH";
					w="380 * pixelW";
					h="20 * pixelH";
					sizeEx="20 * pixelH";
					colorText[]=
					{
						"151/255",
						"155/255",
						"161/255",
						1
					};
					shadow=0;
				};
			};
		};
		class ExtremoMission: RscControlsGroupNoScrollbars
		{
			idc=66007;
			x="safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y="safeZoneY + (60 + 60 + 30 + 190 + 30 + 20 + 30) * pixelH";
			w="380 * pixelW";
			h="(190 + 30 + 20) * pixelH";
			show=0;
			class controls
			{
				class ExtremoMissionBackground: RscText
				{
					idc=-1;
					colorBackground[]={0,0,0,1};
					x=0;
					y=0;
					w="380 * pixelW";
					h="(190 + 30 + 20) * pixelH";
				};
				class ExtremoMissionPictureBackground: RscText
				{
					idc=-1;
					colorBackground[]=
					{
						"18/255",
						"19/255",
						"21/255",
						1
					};
					x=0;
					y=0;
					w="380 * pixelW";
					h="190 * pixelH";
				};
				class ExtremoMissionPicture: RscPictureKeepAspect
				{
					idc=66008;
					text="Extremo_Assets\texture\mod\logo.paa";
					x=0;
					y=0;
					w="380 * pixelW";
					h="190 * pixelH";
				};
				class ExtremoMissionName: RscText
				{
					idc=66009;
					text="RscDisplayLoadMission";
					font="RobotoCondensed";
					x=0;
					y="(190 + 1) * pixelH";
					w="380 * pixelW";
					h="30 * pixelH";
					sizeEx="24 * pixelH";
					colorText[]={1,1,1,1};
					shadow=0;
					style=192;
				};
				class ExtremoMissionAuthor: RscText
				{
					idc=66010;
					text="by Community";
					font="RobotoCondensedLight";
					x=0;
					y="(190 + 25 - 1) * pixelH";
					w="380 * pixelW";
					h="20 * pixelH";
					sizeEx="20 * pixelH";
					colorText[]=
					{
						"151/255",
						"155/255",
						"161/255",
						1
					};
					shadow=0;
				};
			};
		};
	};
};
class RscDisplayNotFreeze: RscStandardDisplay
{
	enableSimulation=1;
	access=3;
	onLoad="with uiNameSpace do { [_this select 0, 'RscDisplayNotFreeze'] call Extremo_fnc_gui_loadingScreen_load; };";
	onUnload="with uiNameSpace do { (_this select 0) call Extremo_fnc_gui_loadingScreen_unload; };";
	delete scriptName;
	delete scriptPath;
	class controlsBackground
	{
		class Black: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class CA_Vignette: RscVignette
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class Line: RscPicture
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class Map: RscPicture
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class Noise: RscPicture
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class ExtremoBlackBackground: RscText
		{
			idc=-1;
			colorBackground[]={0,0,0,1};
			x="safezoneXAbs";
			y="safezoneY";
			w="safezoneWAbs";
			h="safezoneH";
		};
		class ExtremoBackgroundPicture: RscPicture
		{
			idc=66000;
			x="safezoneX";
			y="safezoneY";
			w="safezoneW";
			h="safezoneW * 4/3";
			text="Extremo_Assets\texture\loading\loading_cheathas_co.paa";
		};
	};
	class controls
	{
		class Disclaimer: RscControlsGroupNoScrollbars
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class LoadingStart: RscControlsGroup
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class MapAuthor: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class MapBackBottom: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class MapBackTop: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class MapDescription: RscStructuredText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class MapName: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class Mission: RscControlsGroupNoScrollbars
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class ProgressMap: RscProgress
		{
			x="safeZoneX";
			y="safeZoneY";
			w="safeZoneW";
			h="5 * pixelH";
			colorBar[]=
			{
				"199/255",
				"38/255",
				"81/255",
				1
			};
		};
		class ProgressMission: ProgressMap
		{
			x="safeZoneX";
			y="safeZoneY";
			w="safeZoneW";
			h="5 * pixelH";
			colorBar[]=
			{
				"199/255",
				"38/255",
				"81/255",
				1
			};
		};
		class Logo3DEN: ctrlStaticPicture
		{
			x="safeZoneX + safeZoneW - 60 * pixelW - 0.3";
			y="safeZoneY + safeZoneH - 60 * pixelW - 0.2";
		};
		class ExtremoSpinnerPicture: RscPicture
		{
			idc=66001;
			x="safeZoneX + 60 * pixelW";
			y="safeZoneY + safeZoneH - (60 + 64) * pixelH";
			w="64 * pixelW";
			h="64 * pixelH";
			text="Extremo_Assets\texture\loading\spinner_ca.paa";
			type=0;
			centerU=0.5;
			centerV=0.5;
			angle=90;
			show=0;
		};
		class ExtremoSpinnerTitle: RscStructuredText
		{
			idc=66002;
			text="";
			x="(safeZoneX + 60 * pixelW) + 0.10";
			y="safeZoneY + safeZoneH - (60 + 64 - 10) * pixelH";
			w="safeZoneW - (60 + 64 + 15) * pixelW";
			h="64 * pixelH";
			size="44 * pixelH";
			sizeEx="44 * pixelH";
			colorText[]={1,1,1,1};
			shadow=0;
			class Attributes
			{
				font="RobotoCondensed";
				color="#ffffff";
				colorLink="#ffffff";
				align="left";
				shadow=0;
			};
		};
		class ExtremoLogo: RscControlsGroupNoScrollbars
		{
			idc=66015;
			x="safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y="safeZoneY + 60 * pixelH";
			w="380 * pixelW";
			h="60 * pixelH";
			class controls
			{
				class ExtremoModBackground: RscText
				{
					idc=66014;
					colorBackground[]={0,0,0,1};
					x=0;
					y=0;
					w="380 * pixelW";
					h="60 * pixelH";
					show = 0;
				};
				class ExtremoModIcon: RscPictureKeepAspect
				{
					idc=66011;
					text="";
					x=0;
					y=0;
					w="60 * pixelW";
					h="60 * pixelH";
					show = 0;
				};
				class ExtremoModName: RscText
				{
					idc=66012;
					text="";
					font="RobotoCondensed";
					x="(60 + 10) * pixelW";
					y="1 * pixelH";
					w="(380 - 60 - 10) * pixelW";
					h="(30 + 15) * pixelH";
					sizeEx="30 * pixelH";
					colorText[]={1,1,1,1};
					shadow=0;
					show = 0;
				};
				class ExtremoModUrl: RscText
				{
					idc=-66013;
					text="";
					font="RobotoCondensedLight";
					x="(60 + 10) * pixelW";
					y="(1 + 30) * pixelH";
					w="(380 - 60 - 10) * pixelW";
					h="20 * pixelH";
					sizeEx="20 * pixelH";
					colorText[]=
					{
						"151/255",
						"155/255",
						"161/255",
						1
					};
					show = 0;
					shadow=0;
				};
			};
		};
		class ExtremoMap: RscControlsGroupNoScrollbars
		{
			idc=66003;
			x="safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y="safeZoneY + (60 + 60 + 30) * pixelH";
			w="380 * pixelW";
			h="(190 + 30 + 20) * pixelH";
			show=0;
			class controls
			{
				class ExtremoMapBackground: RscText
				{
					idc=-1;
					colorBackground[]={0,0,0,1};
					x=0;
					y=0;
					w="380 * pixelW";
					h="(190 + 30 + 20) * pixelH";
				};
				class ExtremoMapPictureBackground: RscText
				{
					idc=-1;
					colorBackground[]=
					{
						"18/255",
						"19/255",
						"21/255",
						1
					};
					x=0;
					y=0;
					w="380 * pixelW";
					h="190 * pixelH";
				};
				class ExtremoMapPicture: RscPicture
				{
					idc=66004;
					text="a3\ui_f\data\Logos\arma3_white_ca.paa";
					x=0;
					y=0;
					w="380 * pixelW";
					h="190 * pixelH";
				};
				class ExtremoMapName: RscText
				{
					idc=66005;
					text="RscDisplayNotFreeze";
					font="RobotoCondensed";
					x=0;
					y="(190 + 1) * pixelH";
					w="380 * pixelW";
					h="30 * pixelH";
					sizeEx="24 * pixelH";
					colorText[]={1,1,1,1};
					shadow=0;
					style=192;
				};
				class ExtremoMapAuthor: RscText
				{
					idc=66006;
					text="by some special person";
					font="RobotoCondensedLight";
					x=0;
					y="(190 + 25 - 1) * pixelH";
					w="380 * pixelW";
					h="20 * pixelH";
					sizeEx="20 * pixelH";
					colorText[]=
					{
						"151/255",
						"155/255",
						"161/255",
						1
					};
					shadow=0;
				};
			};
		};
		class ExtremoMission: RscControlsGroupNoScrollbars
		{
			idc=66007;
			x="safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y="safeZoneY + (60 + 60 + 30 + 190 + 30 + 20 + 30) * pixelH";
			w="380 * pixelW";
			h="(190 + 30 + 20) * pixelH";
			show=0;
			class controls
			{
				class ExtremoMissionBackground: RscText
				{
					idc=-1;
					colorBackground[]={0,0,0,1};
					x=0;
					y=0;
					w="380 * pixelW";
					h="(190 + 30 + 20) * pixelH";
				};
				class ExtremoMissionPictureBackground: RscText
				{
					idc=-1;
					colorBackground[]=
					{
						"18/255",
						"19/255",
						"21/255",
						1
					};
					x=0;
					y=0;
					w="380 * pixelW";
					h="190 * pixelH";
				};
				class ExtremoMissionPicture: RscPictureKeepAspect
				{
					idc=66008;
					text="Extremo_Assets\texture\mod\logo.paa";
					x=0;
					y=0;
					w="380 * pixelW";
					h="190 * pixelH";
				};
				class ExtremoMissionName: RscText
				{
					idc=66009;
					text="RscDisplayNotFreeze";
					font="RobotoCondensed";
					x=0;
					y="(190 + 1) * pixelH";
					w="380 * pixelW";
					h="30 * pixelH";
					sizeEx="24 * pixelH";
					colorText[]={1,1,1,1};
					shadow=0;
					style=192;
				};
				class ExtremoMissionAuthor: RscText
				{
					idc=66010;
					text="by Community";
					font="RobotoCondensedLight";
					x=0;
					y="(190 + 25 - 1) * pixelH";
					w="380 * pixelW";
					h="20 * pixelH";
					sizeEx="20 * pixelH";
					colorText[]=
					{
						"151/255",
						"155/255",
						"161/255",
						1
					};
					shadow=0;
				};
			};
		};
	};
};
class RscDisplayNotFreezeBig: RscStandardDisplay
{ 
	onLoad="with uiNameSpace do { [_this select 0, 'RscDisplayNotFreezeBig'] call Extremo_fnc_gui_loadingScreen_load; };";
	onUnload="with uiNameSpace do { (_this select 0) call Extremo_fnc_gui_loadingScreen_unload; };";
	delete scriptName;
	delete scriptPath;
	class controlsBackground
	{
		class Black: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class CA_Vignette: RscVignette
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class Line: RscPicture
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class Map: RscPicture
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class Noise: RscPicture
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class ExtremoBlackBackground: RscText
		{
			idc=-1;
			colorBackground[]={0,0,0,1};
			x="safezoneXAbs";
			y="safezoneY";
			w="safezoneWAbs";
			h="safezoneH";
		};
		class ExtremoBackgroundPicture: RscPicture
		{
			idc=66000;
			x="safezoneX";
			y="safezoneY";
			w="safezoneW";
			h="safezoneW * 4/3";
			text="Extremo_Assets\texture\loading\loading_cheathas_co.paa";
		};
	};
	class controls
	{
		class Disclaimer: RscControlsGroupNoScrollbars
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class LoadingStart: RscControlsGroup
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class MapAuthor: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class MapBackBottom: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class MapBackTop: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class MapDescription: RscStructuredText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class MapName: RscText
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class Mission: RscControlsGroupNoScrollbars
		{
			x=-1;
			y=-1;
			h=0;
			w=0;
			show=0;
		};
		class ProgressMap: RscProgress
		{
			x="safeZoneX";
			y="safeZoneY";
			w="safeZoneW";
			h="5 * pixelH";
			colorBar[]=
			{
				"199/255",
				"38/255",
				"81/255",
				1
			};
		};
		class ProgressMission: ProgressMap
		{
			x="safeZoneX";
			y="safeZoneY";
			w="safeZoneW";
			h="5 * pixelH";
			colorBar[]=
			{
				"199/255",
				"38/255",
				"81/255",
				1
			};
		};
		class Logo3DEN: ctrlStaticPicture
		{
			x="safeZoneX + safeZoneW - 60 * pixelW - 0.3";
			y="safeZoneY + safeZoneH - 60 * pixelW - 0.2";
		};
		class ExtremoSpinnerPicture: RscPicture
		{
			idc=66001;
			x="safeZoneX + 60 * pixelW";
			y="safeZoneY + safeZoneH - (60 + 64) * pixelH";
			w="64 * pixelW";
			h="64 * pixelH";
			text="Extremo_Assets\texture\loading\spinner_ca.paa";
			type=0;
			centerU=0.5;
			centerV=0.5;
			angle=90;
			show=0;
		};
		class ExtremoSpinnerTitle: RscStructuredText
		{
			idc=66002;
			text="";
			x="(safeZoneX + 60 * pixelW) + 0.10";
			y="safeZoneY + safeZoneH - (60 + 64 - 10) * pixelH";
			w="safeZoneW - (60 + 64 + 15) * pixelW";
			h="64 * pixelH";
			size="44 * pixelH";
			sizeEx="44 * pixelH";
			colorText[]={1,1,1,1};
			shadow=0;
			class Attributes
			{
				font="RobotoCondensed";
				color="#ffffff";
				colorLink="#ffffff";
				align="left";
				shadow=0;
			};
		};
		class ExtremoLogo: RscControlsGroupNoScrollbars
		{
			idc=66015;
			x="safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y="safeZoneY + 60 * pixelH";
			w="380 * pixelW";
			h="60 * pixelH";
			class controls
			{
				class ExtremoModBackground: RscText
				{
					idc=66014;
					colorBackground[]={0,0,0,1};
					x=0;
					y=0;
					w="380 * pixelW";
					h="60 * pixelH";
					show = 0;
				};
				class ExtremoModIcon: RscPictureKeepAspect
				{
					idc=66011;
					text="";
					x=0;
					y=0;
					w="60 * pixelW";
					h="60 * pixelH";
					show = 0;
				};
				class ExtremoModName: RscText
				{
					idc=66012;
					text="";
					font="RobotoCondensed";
					x="(60 + 10) * pixelW";
					y="1 * pixelH";
					w="(380 - 60 - 10) * pixelW";
					h="(30 + 15) * pixelH";
					sizeEx="30 * pixelH";
					colorText[]={1,1,1,1};
					shadow=0;
					show = 0;
				};
				class ExtremoModUrl: RscText
				{
					idc=-66013;
					text="";
					font="RobotoCondensedLight";
					x="(60 + 10) * pixelW";
					y="(1 + 30) * pixelH";
					w="(380 - 60 - 10) * pixelW";
					h="20 * pixelH";
					sizeEx="20 * pixelH";
					colorText[]=
					{
						"151/255",
						"155/255",
						"161/255",
						1
					};
					show = 0;
					shadow=0;
				};
			};
		};
		class ExtremoMap: RscControlsGroupNoScrollbars
		{
			idc=66003;
			x="safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y="safeZoneY + (60 + 60 + 30) * pixelH";
			w="380 * pixelW";
			h="(190 + 30 + 20) * pixelH";
			show=0;
			class controls
			{
				class ExtremoMapBackground: RscText
				{
					idc=-1;
					colorBackground[]={0,0,0,1};
					x=0;
					y=0;
					w="380 * pixelW";
					h="(190 + 30 + 20) * pixelH";
				};
				class ExtremoMapPictureBackground: RscText
				{
					idc=-1;
					colorBackground[]=
					{
						"18/255",
						"19/255",
						"21/255",
						1
					};
					x=0;
					y=0;
					w="380 * pixelW";
					h="190 * pixelH";
				};
				class ExtremoMapPicture: RscPicture
				{
					idc=66004;
					text="a3\ui_f\data\Logos\arma3_white_ca.paa";
					x=0;
					y=0;
					w="380 * pixelW";
					h="190 * pixelH";
				};
				class ExtremoMapName: RscText
				{
					idc=66005;
					text="RscDisplayNotFreeze";
					font="RobotoCondensed";
					x=0;
					y="(190 + 1) * pixelH";
					w="380 * pixelW";
					h="30 * pixelH";
					sizeEx="24 * pixelH";
					colorText[]={1,1,1,1};
					shadow=0;
					style=192;
				};
				class ExtremoMapAuthor: RscText
				{
					idc=66006;
					text="by some special person";
					font="RobotoCondensedLight";
					x=0;
					y="(190 + 25 - 1) * pixelH";
					w="380 * pixelW";
					h="20 * pixelH";
					sizeEx="20 * pixelH";
					colorText[]=
					{
						"151/255",
						"155/255",
						"161/255",
						1
					};
					shadow=0;
				};
			};
		};
		class ExtremoMission: RscControlsGroupNoScrollbars
		{
			idc=66007;
			x="safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y="safeZoneY + (60 + 60 + 30 + 190 + 30 + 20 + 30) * pixelH";
			w="380 * pixelW";
			h="(190 + 30 + 20) * pixelH";
			show=0;
			class controls
			{
				class ExtremoMissionBackground: RscText
				{
					idc=-1;
					colorBackground[]={0,0,0,1};
					x=0;
					y=0;
					w="380 * pixelW";
					h="(190 + 30 + 20) * pixelH";
				};
				class ExtremoMissionPictureBackground: RscText
				{
					idc=-1;
					colorBackground[]=
					{
						"18/255",
						"19/255",
						"21/255",
						1
					};
					x=0;
					y=0;
					w="380 * pixelW";
					h="190 * pixelH";
				};
				class ExtremoMissionPicture: RscPictureKeepAspect
				{
					idc=66008;
					text="Extremo_Assets\texture\mod\logo.paa";
					x=0;
					y=0;
					w="380 * pixelW";
					h="190 * pixelH";
				};
				class ExtremoMissionName: RscText
				{
					idc=66009;
					text="RscDisplayNotFreeze";
					font="RobotoCondensed";
					x=0;
					y="(190 + 1) * pixelH";
					w="380 * pixelW";
					h="30 * pixelH";
					sizeEx="24 * pixelH";
					colorText[]={1,1,1,1};
					shadow=0;
					style=192;
				};
				class ExtremoMissionAuthor: RscText
				{
					idc=66010;
					text="by Community";
					font="RobotoCondensedLight";
					x=0;
					y="(190 + 25 - 1) * pixelH";
					w="380 * pixelW";
					h="20 * pixelH";
					sizeEx="20 * pixelH";
					colorText[]=
					{
						"151/255",
						"155/255",
						"161/255",
						1
					};
					shadow=0;
				};
			};
		};
	};
};
class RscExtremoLoadingScreen: RscDisplayLoadMission
{
	idd=24110;
	access=3;
	onLoad="uiNamespace setVariable ['RscExtremoLoadingScreen', _this select 0]; with uiNameSpace do { [_this select 0, 'RscExtremoLoadingScreen'] call Extremo_fnc_gui_loadingScreen_load; };";
	onUnload="with uiNameSpace do { (_this select 0) call Extremo_fnc_gui_loadingScreen_unload; }; uiNamespace setVariable ['RscExtremoLoadingScreen', displayNull]";
};
class RscExtremoClientInitScreen: RscExtremoLoadingScreen
{
	idd=24111;
	onLoad="with uiNameSpace do { RscExtremoClientInitScreen = _this#0; [RscExtremoClientInitScreen, 'RscExtremoClientInitScreen'] call Extremo_fnc_gui_loadingScreen_load;}; _this spawn (missionNamespace getvariable ['Extremo_fnc_initClient',{}]);";
	onUnload="with uiNameSpace do {(_this#0) call Extremo_fnc_gui_loadingScreen_unload;  RscExtremoClientInitScreen = displayNull;};";
};
class RscExtremoLoginScreen: RscExtremoLoadingScreen
{
	idd=24112;
	onLoad="with uiNameSpace do { RscExtremoLoginScreen = _this#0; [RscExtremoLoginScreen, 'RscExtremoLoginScreen'] call Extremo_fnc_gui_loadingScreen_load;}; _this spawn (missionNamespace getvariable ['Extremo_fnc_player_login',{}]);";
	onUnload="with uiNameSpace do {(_this#0) call Extremo_fnc_gui_loadingScreen_unload;  RscExtremoLoginScreen = displayNull;};";
};
class RscExtremoLogoutScreen: RscExtremoLoadingScreen
{
	idd=24113;
	onLoad="with uiNameSpace do { RscExtremoLogoutScreen = _this#0; [RscExtremoLogoutScreen, 'RscExtremoLogoutScreen'] call Extremo_fnc_gui_loadingScreen_load;}; _this spawn (missionNamespace getvariable ['Extremo_fnc_player_logout',{}]);";
	onUnload="with uiNameSpace do {(_this#0) call Extremo_fnc_gui_loadingScreen_unload;  RscExtremoLogoutScreen = displayNull;};";
};
class RscExtremoRespawnScreen: RscExtremoLoadingScreen
{
	idd=24114;
	onLoad="with uiNameSpace do { RscExtremoRespawnScreen = _this#0; [RscExtremoRespawnScreen, 'RscExtremoRespawnScreen'] call Extremo_fnc_gui_loadingScreen_load;}; _this spawn (missionNamespace getvariable ['Extremo_fnc_player_respawn',{}]);";
	onUnload="with uiNameSpace do {(_this#0) call Extremo_fnc_gui_loadingScreen_unload;  RscExtremoRespawnScreen = displayNull;};";
};

//- Briefing
class RscDisplayClientGetReady: RscDisplayGetReady
{
	onLoad="missionNamespace setVariable ['ExtremoClientServerIsInitializing', true]; ctrlActivate ((_this select 0) displayCtrl 1); (_this select 0) closeDisplay 1";
};

//- Debriefing
class RscDisplayDebriefing: RscStandardDisplay
{
	onLoad="(_this select 0) closeDisplay 0";
};

//- Escape Menu
class RscDisplayMPInterrupt: RscStandardDisplay
{
	onLoad="[""onLoad"",_this,""RscDisplayMPInterrupt"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay'); [] spawn Extremo_fnc_gui_escape_abort;";
};

//- Inventory Menu
class RscDisplayInventory
{
	scriptName="RscDisplayInventory";
	scriptPath="IGUI";
	onLoad="[""onLoad"",_this,""RscDisplayInventory"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn Extremo_fnc_gui_inventory_event_onLoad";
	onUnload="[""onUnload"",_this,""RscDisplayInventory"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	idd=602;
	enableSimulation=1;
	class Colors
	{
		dragValidBgr[]=
		{
			"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
			"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
			"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
			0.5
		};
		dragInvalidBgr[]=
		{
			"(profilenamespace getvariable ['IGUI_ERROR_RGB_R',0.8])",
			"(profilenamespace getvariable ['IGUI_ERROR_RGB_G',0.0])",
			"(profilenamespace getvariable ['IGUI_ERROR_RGB_B',0.0])",
			0.5
		};
		dragValidBar[]=
		{
			"(profilenamespace getvariable ['IGUI_WARNING_RGB_R',0.8])",
			"(profilenamespace getvariable ['IGUI_WARNING_RGB_G',0.5])",
			"(profilenamespace getvariable ['IGUI_WARNING_RGB_B',0.0])",
			0.5
		};
		dragInvalidBar[]=
		{
			"(profilenamespace getvariable ['IGUI_ERROR_RGB_R',0.8])",
			"(profilenamespace getvariable ['IGUI_ERROR_RGB_G',0.0])",
			"(profilenamespace getvariable ['IGUI_ERROR_RGB_B',0.0])",
			0.5
		};
		progressBar[]=
		{
			"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
			"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
			"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
			1
		};
		progressBarBgr[]=
		{
			"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])",
			"(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])",
			"(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])",
			0.75
		};
		highlight[]=
		{
			"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
			"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
			"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
			0.5
		};
	};
	class controlsBackground
	{
	};
	class controls
	{
		delete Background;
		delete Title;
		delete ButtonOK;
		delete ButtonCancel;
		delete BackgroundSlotPrimary;
		delete BackgroundSlotHeadgear;
		delete BackgroundSlotGoggles;
		delete BackgroundSlotHMD;
		delete BackgroundSlotBinoculars;
		delete BackgroundSlotPrimaryMuzzle;
		delete BackgroundSlotPrimaryUnderBarrel;
		delete BackgroundSlotPrimaryFlashlight;
		delete BackgroundSlotPrimaryOptics;
		delete BackgroundSlotPrimaryMagazineGL;
		delete BackgroundSlotPrimaryMagazine;
		delete BackgroundSlotSecondary;
		delete BackgroundSlotSecondaryMuzzle;
		delete BackgroundSlotSecondaryUnderBarrel;
		delete BackgroundSlotSecondaryFlashlight;
		delete BackgroundSlotSecondaryOptics;
		delete BackgroundSlotSecondaryMagazine;
		delete BackgroundSlotHandgunFlashlight;
		delete BackgroundSlotHandgunOptics;
		delete BackgroundSlotHandgunMagazine;
		delete BackgroundSlotHandgun;
		delete BackgroundSlotMap;
		delete BackgroundSlotGPS;
		delete BackgroundSlotHandgunMuzzle;
		delete BackgroundSlotHandgunUnderBarrel;
		delete BackgroundSlotRadio;
		delete BackgroundSlotCompass;
		delete BackgroundSlotWatch;
		class GroundTab: RscActiveText
		{
			colorBackgroundSelected[]={1,1,1,1};
			colorFocused[]={1,1,1,0};
			soundDoubleClick[]=
			{
				"",
				0.1,
				1
			};
			color[]={1,1,1,1};
			idc=6321;
			x="7 * (0.03) + (-0.25)";
			y="8 * (0.04) + (-0.25)";
			w="6 * (0.03)";
			h="1 * (0.04)";
			colorBackground[]={0,0,0,1};
		};
		class RankBackground: RscText
		{
			idc=1014;
			x=-1;
			y=-1;
			w="0.6 * (0.03)";
			h="0.6 * (0.04)";
			colorBackground[]={1,1,1,0.2};
		};
		class RankPicture: RscPicture
		{
			idc=1203;
			text="\A3\Ui_f\data\GUI\Cfg\Ranks\corporal_gs.paa";
			x=-1;
			y=-1;
			w="0.6 * (0.03)";
			h="0.6 * (0.04)";
		};
		class UniformTab: GroundTab
		{
			idc=6332;
			x=-1;
			y=-1;
			w="4 * (0.03)";
			h="4 * (0.04)";
			colorBackground[]={1,1,0,1};
		};
		class VestTab: UniformTab
		{
			idc=6382;
			x=-1;
			y=-1;
			w="4 * (0.03)";
			h="4 * (0.04)";
			colorBackground[]={1,1,0,1};
		};
		class BackpackTab: UniformTab
		{
			idc=6192;
			x=-1;
			y=-1;
			w="4 * (0.03)";
			h="4 * (0.04)";
			colorBackground[]={1,1,0,1};
		};
		class CA_ContainerBackground: RscText
		{
			idc=1001;
			x="6.5 * (0.03) + (-0.25)";
			y="7.5 * (0.04) + (-0.25)";
			w="13 * (0.03)";
			h="23 * (0.04)";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
		class CA_PlayerBackground: RscText
		{
			idc=1002;
			x="20 * (0.03) + (-0.25)";
			y="7.5 * (0.04) + (-0.25)";
			w="23.5 * (0.03)";
			h="23 * (0.04)";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
		class TitleBackground: RscText
		{
			idc=1020;
			x="20 * (0.03) + (-0.25)";
			y="6.4 * (0.04) + (-0.25)";
			w="23.5 * (0.03)";
			h="1 * (0.04)";
			colorBackground[]={0.1,0.1,0.1,1};
		};
		class PlayersName: RscText
		{
			idc=111;
			text="Player name:";
			x="20 * (0.03) + (-0.25)";
			y="6.4 * (0.04) + (-0.25)";
			w="11.5 * (0.03)";
			h="1 * (0.04)";
		};
		class ExtremoContainerLoadBackground: RscText
		{
			idc=-1;
			text="";
			x="7 * (0.03) + (-0.25)";
			y="29.5 * (0.04) + (-0.25)";
			w="12 * (0.03)";
			h="0.5 * (0.04)";
			colorBackground[]={0,0,0,0.5};
		};
		class ExtremoPlayerLoadBackground: RscText
		{
			idc=-1;
			text="";
			x="20.5 * (0.03) + (-0.25)";
			y="29.5 * (0.04) + (-0.25)";
			w="22.5 * (0.03)";
			h="0.5 * (0.04)";
			colorBackground[]={0,0,0,0.5};
		};
		class ExtremoEquipmentLoadBackground: RscText
		{
			idc=-1;
			text="";
			x="20.5 * (0.03) + (-0.25)";
			y="12 * (0.04) + (-0.25)";
			w="12 * (0.03)";
			h="0.5 * (0.04)";
			colorBackground[]={0,0,0,0.5};
		};
		class ButtonBack: RscActiveText
		{
			color[]={1,1,1,0.69999999};
			idc=2;
			style=48;
			text="\A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
			x="42.4 * (0.03) + (-0.25)";
			y="6.4 * (0.04) + (-0.25)";
			w="1 * (0.03)";
			h="1 * (0.04)";
			colorText[]={1,1,1,0.69999999};
			colorActive[]={1,1,1,1};
			tooltip="Close";
		};
		class ExternalContainerBackground: RscPicture
		{
			idc=1240;
			text="#(argb,8,8,3)color(1,1,1,1)";
			x="7 * (0.03) + (-0.25)";
			y="11 * (0.04) + (-0.25)";
			w="12 * (0.03)";
			h="16 * (0.04)";
			colorText[]={1,1,1,0.1};
		};
		class PlayerContainerBackground: ExternalContainerBackground
		{
			idc=1241;
			text="#(argb,8,8,3)color(1,1,1,1)";
			x="20.5 * (0.03) + (-0.25)";
			y="13 * (0.04) + (-0.25)";
			w="12 * (0.03)";
			h="14 * (0.04)";
			colorText[]={1,1,1,0.1};
		};
		class SoldierTab: GroundTab
		{
			idc=6401;
			x="13 * (0.03) + (-0.25)";
			y="8 * (0.04) + (-0.25)";
			w="6 * (0.03)";
			h="1 * (0.04)";
			colorBackground[]={0,0,0,1};
		};
		class GroundContainer: RscListBox
		{
			itemBackground[]={1,1,1,0.1};
			idc=632;
			sizeEx2="0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			rowHeight="2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			sizeEx="0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			canDrag=1;
			itemSpacing=0.001;
			x="7 * (0.03) + (-0.25)";
			y="11 * (0.04) + (-0.25)";
			w="12 * (0.03)";
			h="16 * (0.04)";
			colorBackground[]={0,0,0,0};
		};
		class SoldierContainer: GroundContainer
		{
			idc=640;
			x="7 * (0.03) + (-0.25)";
			y="11 * (0.04) + (-0.25)";
			w="12 * (0.03)";
			h="16 * (0.04)";
			colorBackground[]={0,0,0,0};
			sizeEx="0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class GroundFilter: RscCombo
		{
			idc=6554;
			x="7 * (0.03) + (-0.25)";
			y="9.5 * (0.04) + (-0.25)";
			w="12 * (0.03)";
			h="1 * (0.04)";
		};
		class GroundLoad: RscProgress
		{
			colorBar[]={0.89999998,0.89999998,0.89999998,0.89999998};
			colorExtBar[]={1,1,1,1};
			idc=6307;
			texture="";
			textureExt="";
			x="7 * (0.03) + (-0.25)";
			y="29.5 * (0.04) + (-0.25)";
			w="12 * (0.03)";
			h="0.5 * (0.04)";
			colorFrame[]={0,0,0,0};
		};
		class SlotPrimary: GroundTab
		{
			color[]={1,1,1,1};
			colorBackgroundSelected[]={1,1,1,0.1};
			colorFocused[]={0,0,0,0};
			idc=610;
			style="0x30 + 0x800";
			canDrag=1;
			onMouseButtonDblClick="_this call Extremo_fnc_gui_inventory_event_onSlotDoubleClick";
			x="33 * (0.03) + (-0.25)";
			y="13 * (0.04) + (-0.25)";
			w="10 * (0.03)";
			h="3.5 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={0,0,0,0};
		};
		class SlotPrimaryMuzzle: SlotPrimary
		{
			idc=620;
			x="34 * (0.03) + (-0.25)";
			y="16.5 * (0.04) + (-0.25)";
			w="1.5 * (0.03)";
			h="1.5 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={0,0,0,0};
		};
		class SlotPrimaryUnderBarrel: SlotPrimary
		{
			idc=641;
			x="35.5 * (0.03) + (-0.25)";
			y="16.5 * (0.04) + (-0.25)";
			w="1.5 * (0.03)";
			h="1.5 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={0,0,0,0};
		};
		class SlotPrimaryFlashlight: SlotPrimary
		{
			idc=622;
			x="37 * (0.03) + (-0.25)";
			y="16.5 * (0.04) + (-0.25)";
			w="1.5 * (0.03)";
			h="1.5 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={0,0,0,0};
		};
		class SlotPrimaryOptics: SlotPrimary
		{
			idc=621;
			x="38.5 * (0.03) + (-0.25)";
			y="16.5 * (0.04) + (-0.25)";
			w="1.5 * (0.03)";
			h="1.5 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={0,0,0,0};
		};
		class SlotPrimaryMagazineGL: SlotPrimary
		{
			idc=644;
			x="40 * (0.03) + (-0.25)";
			y="16.5 * (0.04) + (-0.25)";
			w="1.5 * (0.03)";
			h="1.5 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={0,0,0,0};
		};
		class SlotPrimaryMagazine: SlotPrimary
		{
			idc=623;
			x="41.5 * (0.03) + (-0.25)";
			y="16.5 * (0.04) + (-0.25)";
			w="1.5 * (0.03)";
			h="1.5 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={0,0,0,0};
		};
		class SlotSecondary: SlotPrimary
		{
			idc=611;
			x="33 * (0.03) + (-0.25)";
			y="18.5 * (0.04) + (-0.25)";
			w="10 * (0.03)";
			h="3.5 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={0,0,0,0};
		};
		class SlotSecondaryMuzzle: SlotPrimary
		{
			idc=624;
			x="35.5 * (0.03) + (-0.25)";
			y="22 * (0.04) + (-0.25)";
			w="1.5 * (0.03)";
			h="1.5 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={0,0,0,0};
		};
		class SlotSecondaryUnderBarrel: SlotPrimary
		{
			idc=642;
			x="37 * (0.03) + (-0.25)";
			y="22 * (0.04) + (-0.25)";
			w="1.5 * (0.03)";
			h="1.5 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={0,0,0,0};
		};
		class SlotSecondaryFlashlight: SlotPrimary
		{
			idc=626;
			x="38.5 * (0.03) + (-0.25)";
			y="22 * (0.04) + (-0.25)";
			w="1.5 * (0.03)";
			h="1.5 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={0,0,0,0};
		};
		class SlotSecondaryOptics: SlotPrimary
		{
			idc=625;
			x="40 * (0.03) + (-0.25)";
			y="22 * (0.04) + (-0.25)";
			w="1.5 * (0.03)";
			h="1.5 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={0,0,0,0};
		};
		class SlotSecondaryMagazine: SlotPrimary
		{
			idc=627;
			x="41.5 * (0.03) + (-0.25)";
			y="22 * (0.04) + (-0.25)";
			w="1.5 * (0.03)";
			h="1.5 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={0,0,0,0};
		};
		class SlotHandgun: SlotPrimary
		{
			idc=612;
			x="33 * (0.03) + (-0.25)";
			y="24 * (0.04) + (-0.25)";
			w="10 * (0.03)";
			h="3.5 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={0,0,0,0};
		};
		class SlotHandgunMuzzle: SlotPrimary
		{
			idc=628;
			x="35.5 * (0.03) + (-0.25)";
			y="27.5 * (0.04) + (-0.25)";
			w="1.5 * (0.03)";
			h="1.5 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={0,0,0,0};
		};
		class SlotHandgunUnderBarrel: SlotPrimary
		{
			idc=643;
			x="37 * (0.03) + (-0.25)";
			y="27.5 * (0.04) + (-0.25)";
			w="1.5 * (0.03)";
			h="1.5 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={0,0,0,0};
		};
		class SlotHandgunFlashlight: SlotPrimary
		{
			idc=630;
			x="38.5 * (0.03) + (-0.25)";
			y="27.5 * (0.04) + (-0.25)";
			w="1.5 * (0.03)";
			h="1.5 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={0,0,0,0};
		};
		class SlotHandgunOptics: SlotPrimary
		{
			idc=629;
			x="40 * (0.03) + (-0.25)";
			y="27.5 * (0.04) + (-0.25)";
			w="1.5 * (0.03)";
			h="1.5 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={0,0,0,0};
		};
		class SlotHandgunMagazine: SlotPrimary
		{
			idc=631;
			x="41.5 * (0.03) + (-0.25)";
			y="27.5 * (0.04) + (-0.25)";
			w="1.5 * (0.03)";
			h="1.5 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={0,0,0,0};
		};
		class SlotHeadgear: SlotPrimary
		{
			idc=6240;
			x="33 * (0.03) + (-0.25)";
			y="8 * (0.04) + (-0.25)";
			w="2.5 * (0.03)";
			h="2.5 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={0,0,0,0};
		};
		class SlotGoggles: SlotPrimary
		{
			idc=6216;
			x="35.5 * (0.03) + (-0.25)";
			y="8 * (0.04) + (-0.25)";
			w="2.5 * (0.03)";
			h="2.5 * (0.04)";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0};
		};
		class SlotHMD: SlotPrimary
		{
			idc=6217;
			x="38 * (0.03) + (-0.25)";
			y="8 * (0.04) + (-0.25)";
			w="2.5 * (0.03)";
			h="2.5 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={0,0,0,0};
		};
		class SlotBinoculars: SlotPrimary
		{
			idc=6238;
			x="40.5 * (0.03) + (-0.25)";
			y="8 * (0.04) + (-0.25)";
			w="2.5 * (0.03)";
			h="2.5 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={0,0,0,0};
		};
		class SlotMap: SlotPrimary
		{
			idc=6211;
			x="35 * (0.03) + (-0.25)";
			y="10.5 * (0.04) + (-0.25)";
			w="2 * (0.03)";
			h="2 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={0,0,0,0};
		};
		class SlotGPS: SlotPrimary
		{
			idc=6215;
			x="37 * (0.03) + (-0.25)";
			y="10.5 * (0.04) + (-0.25)";
			w="2 * (0.03)";
			h="2 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={0,0,0,0};
		};
		class SlotCompass: SlotPrimary
		{
			idc=6212;
			x="39 * (0.03) + (-0.25)";
			y="10.5 * (0.04) + (-0.25)";
			w="2 * (0.03)";
			h="2 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={0,0,0,0};
		};
		class SlotRadio: SlotPrimary
		{
			idc=6214;
			x="41 * (0.03) + (-0.25)";
			y="10.5 * (0.04) + (-0.25)";
			w="2 * (0.03)";
			h="2 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={0,0,0,0};
		};
		class SlotWatch: SlotPrimary
		{
			idc=6213;
			x="33 * (0.03) + (-0.25)";
			y="10.5 * (0.04) + (-0.25)";
			w="2 * (0.03)";
			h="2 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={0,0,0,0};
		};
		class UniformSlot: SlotPrimary
		{
			idc=6331;
			x="20.5 * (0.03) + (-0.25)";
			y="8 * (0.04) + (-0.25)";
			w="4 * (0.03)";
			h="4 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={1,1,1,0.1};
		};
		class UniformLoad: GroundLoad
		{
			idc=6304;
			x="20.5 * (0.03) + (-0.25)";
			y="12 * (0.04) + (-0.25)";
			w="4 * (0.03)";
			h="0.5 * (0.04)";
			colorFrame[]={0,0,0,0};
		};
		class UniformContainer: GroundContainer
		{
			idc=633;
			onLBDblClick="_this call Extremo_fnc_gui_inventory_event_onItemDoubleClick";
			x="20.5 * (0.03) + (-0.25)";
			y="13 * (0.04) + (-0.25)";
			w="12 * (0.03)";
			h="14 * (0.04)";
			colorBackground[]={0,0,0,0};
			sizeEx="0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class VestSlot: SlotPrimary
		{
			idc=6381;
			x="24.5 * (0.03) + (-0.25)";
			y="8 * (0.04) + (-0.25)";
			w="4 * (0.03)";
			h="4 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={1,1,1,0.1};
		};
		class VestLoad: GroundLoad
		{
			idc=6305;
			x="24.5 * (0.03) + (-0.25)";
			y="12 * (0.04) + (-0.25)";
			w="4 * (0.03)";
			h="0.5 * (0.04)";
			colorFrame[]={0,0,0,0};
		};
		class VestContainer: UniformContainer
		{
			idc=638;
			onLBDblClick="_this call Extremo_fnc_gui_inventory_event_onItemDoubleClick";
			x="20.5 * (0.03) + (-0.25)";
			y="13 * (0.04) + (-0.25)";
			w="12 * (0.03)";
			h="14 * (0.04)";
			colorBackground[]={0,0,0,0};
			sizeEx="0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class BackpackSlot: SlotPrimary
		{
			idc=6191;
			x="28.5 * (0.03) + (-0.25)";
			y="8 * (0.04) + (-0.25)";
			w="4 * (0.03)";
			h="4 * (0.04)";
			colorText[]={0,0,0,0.5};
			colorBackground[]={1,1,1,0.1};
		};
		class BackpackLoad: GroundLoad
		{
			idc=6306;
			x="28.5 * (0.03) + (-0.25)";
			y="12 * (0.04) + (-0.25)";
			w="4 * (0.03)";
			h="0.5 * (0.04)";
			colorFrame[]={0,0,0,0};
		};
		class BackpackContainer: UniformContainer
		{
			idc=619;
			onLBDblClick="_this call Extremo_fnc_gui_inventory_event_onItemDoubleClick";
			x="20.5 * (0.03) + (-0.25)";
			y="13 * (0.04) + (-0.25)";
			w="12 * (0.03)";
			h="14 * (0.04)";
			colorBackground[]={0,0,0,0};
			sizeEx="0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class TotalLoad: GroundLoad
		{
			idc=6308;
			x="20.5 * (0.03) + (-0.25)";
			y="29.5 * (0.04) + (-0.25)";
			w="22.5 * (0.03)";
			h="0.5 * (0.04)";
			colorFrame[]={0,0,0,0};
		};
		class ContainerMarker: GroundTab
		{
			idc=6325;
			x="-5.5 * (0.03) + (-0.25)";
			y="32.5 * (0.04) + (-0.25)";
			w="1 * (0.03)";
			h="1 * (0.04)";
			colorBackground[]={0,0,0,1};
		};
		class GroundMarker: ContainerMarker
		{
			idc=6385;
			x="-3.5 * (0.03) + (-0.25)";
			y="32.5 * (0.04) + (-0.25)";
			w="1 * (0.03)";
			h="1 * (0.04)";
			colorBackground[]={0,0,0,1};
		};
		class SoldierMarker: ContainerMarker
		{
			idc=6405;
			x="-2 * (0.03) + (-0.25)";
			y="32.5 * (0.04) + (-0.25)";
			w="1 * (0.03)";
			h="1 * (0.04)";
			colorBackground[]={0,0,0,1};
		};
		class ExtremoSecondaryBackground: RscText
		{
			idc=1055;
			x="33 * (0.03) + (-0.25)";
			y="18.5 * (0.04) + (-0.25)";
			w="10 * (0.03)";
			h="5 * (0.04)";
			colorBackground[]={1,1,1,0.050000001};
		};
		class ExtremoHandgunBackground: RscText
		{
			idc=1056;
			x="33 * (0.03) + (-0.25)";
			y="24 * (0.04) + (-0.25)";
			w="10 * (0.03)";
			h="5 * (0.04)";
			colorBackground[]={1,1,1,0.050000001};
		};
		class ExtremoPrimaryBackground: RscText
		{
			idc=1057;
			x="33 * (0.03) + (-0.25)";
			y="13 * (0.04) + (-0.25)";
			w="10 * (0.03)";
			h="5 * (0.04)";
			colorBackground[]={1,1,1,0.050000001};
		};
		class ExtremoItemsBackground: RscText
		{
			idc=1058;
			x="33 * (0.03) + (-0.25)";
			y="8 * (0.04) + (-0.25)";
			w="10 * (0.03)";
			h="4.5 * (0.04)";
			colorBackground[]={1,1,1,0.050000001};
		};
		class ExtremoButtonTakeAll: RscButtonMenu
		{
			idc=20001;
			onMouseButtonDown="call Extremo_fnc_gui_inventory_takeAll";
			text="TAKE ALL";
			x="6.5 * (0.03) + (-0.25)";
			y="31 * (0.04) + (-0.25)";
			w="8.5 * (0.03)";
			h="1 * (0.04)";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.80000001};
			style=2;
			class Attributes
			{
				align="center";
			};
		};
		class ExtremoButtonCombineMags: RscButtonMenu
		{
			idc=20002;
			onMouseButtonDown="call Extremo_fnc_gui_inventory_combineMagazines";
			text="COMBINE MAGS";
			x="(6.5 + 8.5 + 0.5) * (0.03) + (-0.25)";
			y="31 * (0.04) + (-0.25)";
			w="8.5 * (0.03)";
			h="1 * (0.04)";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.80000001};
			style=2;
			class Attributes
			{
				align="center";
			};
		};
		class ExtremoButtonClose: RscButtonMenu
		{
			idc=-1;
			onMouseButtonDown="closeDialog 0";
			text="CLOSE";
			x="35 * (0.03) + (-0.25)";
			y="31 * (0.04) + (-0.25)";
			w="8.5 * (0.03)";
			h="1 * (0.04)";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.80000001};
			style=2;
			class Attributes
			{
				align="center";
			};
		};
		class ExtremoContainerPopTabsBackground: RscText
		{
			idc=-1;
			x="7 * (0.03) + (-0.25)";
			y="27.5 * (0.04) + (-0.25)";
			w="6.5 * (0.03)";
			h="1.5 * (0.04)";
			colorBackground[]={1,1,1,0.1};
		};
		class ExtremoContainerPopTabs: RscStructuredText
		{
			idc=25000;
			size="24 * pixelH";
			sizeEx="24 * pixelH";
			text="<t size='1' font='RobotoCondensed' align='right'>999999 / 999999 <img image='\Extremo_Assets\texture\ui\poptab_inline_ca.paa' size='1' shadow='true' /></t>";
			x="7 * (0.03) + (-0.25)";
			y="(27.5 + 0.25) * (0.04) + (-0.25)";
			w="6.5 * (0.03)";
			h="(1.5 - 0.25) * (0.04)";
			colorBackground[]={0,0,0,0};
		};
		class ExtremoPlayerPopTabsBackground: RscText
		{
			idc=-1;
			x="26 * (0.03) + (-0.25)";
			y="27.5 * (0.04) + (-0.25)";
			w="6.5 * (0.03)";
			h="1.5 * (0.04)";
			colorBackground[]={1,1,1,0.1};
		};
		class ExtremoPlayerPopTabs: RscStructuredText
		{
			idc=25001;
			size="24 * pixelH";
			sizeEx="24 * pixelH";
			text="<t size='1' font='RobotoCondensed' align='right'>999999 <img image='\Extremo_Assets\texture\ui\poptab_inline_ca.paa' size='1' shadow='true' /></t>";
			x="26 * (0.03) + (-0.25)";
			y="(27.5 + 0.25) * (0.04) + (-0.25)";
			w="6.5 * (0.03)";
			h="(1.5 - 0.25) * (0.04)";
			colorBackground[]={0,0,0,0};
		};
		class ExtremoTakePopTabsInput: RscEdit
		{
			idc=25002;
			text="";
			x="14 * (0.03) + (-0.25)";
			y="27.5 * (0.04) + (-0.25)";
			w="3.5 * (0.03)";
			h="1.5 * (0.04)";
			style=2;
			onKeyUp="_this call Extremo_fnc_gui_inventory_event_onTakePopTabsInputKeyUp";
		};
		class ExtremoTakePopTabsButton: RscButton
		{
			idc=25003;
			text=">";
			x="17.5 * (0.03) + (-0.25)";
			y="27.5 * (0.04) + (-0.25)";
			w="1.5 * (0.03)";
			h="1.5 * (0.04)";
			onMouseButtonClick="_this call Extremo_fnc_gui_inventory_event_onTakePopTabsButtonClick";
		};
		class ExtremoPutPopTabsButton: RscButton
		{
			idc=25004;
			text="<";
			x="20.5 * (0.03) + (-0.25)";
			y="27.5 * (0.04) + (-0.25)";
			w="1.5 * (0.03)";
			h="1.5 * (0.04)";
			onMouseButtonClick="_this call Extremo_fnc_gui_inventory_event_onPutPopTabsButtonClick";
		};
		class ExtremoPutPopTabsInput: RscEdit
		{
			idc=25005;
			text="";
			x="22 * (0.03) + (-0.25)";
			y="27.5 * (0.04) + (-0.25)";
			w="3.5 * (0.03)";
			h="1.5 * (0.04)";
			style=2;
			onKeyUp="_this call Extremo_fnc_gui_inventory_event_onPutPopTabsInputKeyUp";
		};
		class ContainerCaptionBackground: RscText
		{
			idc=1020;
			text="Container";
			x="6.5 * (0.03) + (-0.25)";
			y="6.4 * (0.04) + (-0.25)";
			w="13 * (0.03)";
			h="1 * (0.04)";
			colorBackground[]={0.1,0.1,0.1,1};
		};
	};
};

//- Chat Lists
class RscChatListMission: RscChatListDefault
{
	colorBackground[]={0,0,0,0.30000001};
	x="safeZoneX + 60 * pixelW";
	y="(profilenamespace getvariable [""IGUI_GRID_CHAT_Y"",		(safezoneY + safezoneH - 10.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
	w="(profilenamespace getvariable [""IGUI_GRID_CHAT_W"",		(20 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
	h="(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	rows="(profilenamespace getvariable [""IGUI_GRID_CHAT_H"",		(5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) / 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
};
class RscChatListBriefing: RscChatListDefault
{
	x="1.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
	y="14.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
	w="(18.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.45*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
	h="(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	rows="(SafezoneH - (17.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))) / 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
};
class RscChatListMap: RscChatListDefault
{
	x="safeZoneX + 60 * pixelW";
	y="(profilenamespace getvariable [""IGUI_GRID_CHAT_Y"",		(safezoneY + safezoneH - 10.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
	w="(profilenamespace getvariable [""IGUI_GRID_CHAT_W"",		(20 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
	h="(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	rows="(profilenamespace getvariable [""IGUI_GRID_CHAT_H"",		(5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) / 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
};

//- Chat
class RscDisplayChat
{
	class controls
	{
		delete Line;
		delete Background;
		class CA_Background: RscText
		{
			x="safeZoneX + 215 * pixelW";
			y="(safeZoneY + safeZoneH) - 50 * pixelH";
			w="400 * pixelW";
			h="30 * pixelH";
			colorBackground[]=
			{
				"19/255",
				"22/255",
				"27/255",
				0.5
			};
			colorText[]={0,0,0,0};
		};
		class CA_Line: RscEdit
		{
			idc=101;
			x="safeZoneX + 215 * pixelW + 10 * pixelW";
			y="(safeZoneY + safeZoneH) - 50 * pixelH";
			w="400 * pixelW - 20 * pixelW";
			h="30 * pixelH";
			sizeEx="25 * pixelH";
			text="";
			colorBackground[]={0,0,0,0};
			colorText[]={1,1,1,1};
			autocomplete="general";
			style="0x00 + 0x200";
		};
	};
};

//- VON Icon
class RscDisplayVoiceChat
{
	onLoad="uiNamespace setVariable ['ExtremoIsUsingVON', true];";
	onUnload="uiNamespace setVariable ['ExtremoIsUsingVON', false];";
	class controls
	{
		class Background: RscText
		{
			idc=-1;
			x=-1;
			y=-1;
			w=0;
			h=0;
		};
		class Picture: RscText
		{
			idc=101;
			x=-1;
			y=-1;
			w=0;
			h=0;
		};
		class ExtremoPicture: RscPicture
		{
			idc=-1;
			x="(safeZoneX + safeZoneW) - 60 * pixelW - 64 * pixelW";
			y="(safeZoneY + safeZoneH) - 185 * pixelH - 64 * pixelH";
			w="64 * pixelW";
			h="64 * pixelH";
			text="\Extremo_Assets\texture\hud\hud_icon_voice_ca.paa";
			colorText[]={1,1,1,1};
			shadow=0;
		};
	};
};

//- Channel
class RscDisplayChannel
{
	idd=63;
	class controls
	{
		delete Channel;
		class CA_Channel: RscText
		{
			idc=101;
			style=0;
			x="safeZoneX + 60 * pixelW + 10 * pixelW";
			y="(safeZoneY + safeZoneH) - 50 * pixelH";
			w="155 * pixelW - 10 * pixelW";
			h="30 * pixelH";
			colorBackground[]={0,0,0,0};
			sizeEx="18 * pixelH";
		};
		class Background: RscText
		{
			x="safeZoneX + 60 * pixelW";
			y="(safeZoneY + safeZoneH) - 50 * pixelH";
			w="155 * pixelW";
			h="30 * pixelH";
			colorBackground[]=
			{
				"19/255",
				"22/255",
				"27/255",
				0.80000001
			};
		};
		class Picture: RscPicture
		{
			idc=102;
			x=-10.01;
			y=0.72000003;
			w=0.029999999;
			h=0.050000001;
		};
		class MuteChat: RscActiveText
		{
			x=-1;
			y=-1;
			w=0;
			h=0;
		};
		class MuteVON: RscActiveText
		{
			x=-1;
			y=-1;
			w=0;
			h=0;
		};
	};
};

//- Spawn menu
class RscExtremoSelectSpawnLocationDialog
{
	idd=24002;
	access=3;
	duration=-1;
	onLoad="uiNamespace setVariable ['RscExtremoSelectSpawnLocationDialog', _this select 0]; with uiNameSpace do { [_this select 0, 'RscExtremoSelectSpawnLocationDialog'] call Extremo_fnc_gui_loadingScreen_load; };";
	onUnload="with uiNameSpace do { (_this select 0) call Extremo_fnc_gui_loadingScreen_unload; }; uiNamespace setVariable ['RscExtremoSelectSpawnLocationDialog', displayNull]";
	class controlsBackground
	{
		class ExtremoBlackBackground: RscText
		{
			idc=-1;
			colorBackground[]={0,0,0,1};
			x="safezoneXAbs";
			y="safezoneY";
			w="safezoneWAbs";
			h="safezoneH";
		};
		class ExtremoBackgroundPicture: RscPicture
		{
			idc=66000;
			x="safezoneX";
			y="safezoneY";
			w="safezoneW";
			h="safezoneW * 4/3";
			text="Extremo_Assets\texture\loading\loading_cheathas_co.paa";
		};
	};
	class controls
	{
		class ExtremoLogo: RscControlsGroupNoScrollbars
		{
			idc=66015;
			x="safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y="safeZoneY + 60 * pixelH";
			w="380 * pixelW";
			h="60 * pixelH";
			class controls
			{
				class ExtremoModBackground: RscText
				{
					idc=66014;
					colorBackground[]={0,0,0,1};
					x=0;
					y=0;
					w="380 * pixelW";
					h="60 * pixelH";
					show = 0;
				};
				class ExtremoModIcon: RscPictureKeepAspect
				{
					idc=66011;
					text="";
					x=0;
					y=0;
					w="60 * pixelW";
					h="60 * pixelH";
					show = 0;
				};
				class ExtremoModName: RscText
				{
					idc=66012;
					text="";
					font="RobotoCondensed";
					x="(60 + 10) * pixelW";
					y="1 * pixelH";
					w="(380 - 60 - 10) * pixelW";
					h="(30 + 15) * pixelH";
					sizeEx="30 * pixelH";
					colorText[]={1,1,1,1};
					shadow=0;
					show = 0;
				};
				class ExtremoModUrl: RscText
				{
					idc=-66013;
					text="";
					font="RobotoCondensedLight";
					x="(60 + 10) * pixelW";
					y="(1 + 30) * pixelH";
					w="(380 - 60 - 10) * pixelW";
					h="20 * pixelH";
					sizeEx="20 * pixelH";
					colorText[]=
					{
						"151/255",
						"155/255",
						"161/255",
						1
					};
					show = 0;
					shadow=0;
				};
			};
		};
		class ExtremoMap: RscControlsGroupNoScrollbars
		{
			idc=66003;
			x="safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y="safeZoneY + (60 + 60 + 30) * pixelH";
			w="380 * pixelW";
			h="(190 + 30 + 20) * pixelH";
			show=0;
			class controls
			{
				class ExtremoMapBackground: RscText
				{
					idc=-1;
					colorBackground[]={0,0,0,1};
					x=0;
					y=0;
					w="380 * pixelW";
					h="(190 + 30 + 20) * pixelH";
				};
				class ExtremoMapPictureBackground: RscText
				{
					idc=-1;
					colorBackground[]=
					{
						"18/255",
						"19/255",
						"21/255",
						1
					};
					x=0;
					y=0;
					w="380 * pixelW";
					h="190 * pixelH";
				};
				class ExtremoMapPicture: RscPicture
				{
					idc=66004;
					text="a3\ui_f\data\Logos\arma3_white_ca.paa";
					x=0;
					y=0;
					w="380 * pixelW";
					h="190 * pixelH";
				};
				class ExtremoMapName: RscText
				{
					idc=66005;
					text="RscMPSetupMessage";
					font="RobotoCondensed";
					x=0;
					y="(190 + 1) * pixelH";
					w="380 * pixelW";
					h="30 * pixelH";
					sizeEx="24 * pixelH";
					colorText[]={1,1,1,1};
					shadow=0;
					style=192;
				};
				class ExtremoMapAuthor: RscText
				{
					idc=66006;
					text="by some special person";
					font="RobotoCondensedLight";
					x=0;
					y="(190 + 25 - 1) * pixelH";
					w="380 * pixelW";
					h="20 * pixelH";
					sizeEx="20 * pixelH";
					colorText[]=
					{
						"151/255",
						"155/255",
						"161/255",
						1
					};
					shadow=0;
				};
			};
		};
		class ExtremoMission: RscControlsGroupNoScrollbars
		{
			idc=66007;
			x="safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y="safeZoneY + (60 + 60 + 30 + 190 + 30 + 20 + 30) * pixelH";
			w="380 * pixelW";
			h="(190 + 30 + 20) * pixelH";
			show=0;
			class controls
			{
				class ExtremoMissionBackground: RscText
				{
					idc=-1;
					colorBackground[]={0,0,0,1};
					x=0;
					y=0;
					w="380 * pixelW";
					h="(190 + 30 + 20) * pixelH";
				};
				class ExtremoMissionPictureBackground: RscText
				{
					idc=-1;
					colorBackground[]=
					{
						"18/255",
						"19/255",
						"21/255",
						1
					};
					x=0;
					y=0;
					w="380 * pixelW";
					h="190 * pixelH";
				};
				class ExtremoMissionPicture: RscPictureKeepAspect
				{
					idc=66008;
					text="Extremo_Assets\texture\mod\logo.paa";
					x=0;
					y=0;
					w="380 * pixelW";
					h="190 * pixelH";
				};
				class ExtremoMissionName: RscText
				{
					idc=66009;
					text="RscMPSetupMessage";
					font="RobotoCondensed";
					x=0;
					y="(190 + 1) * pixelH";
					w="380 * pixelW";
					h="30 * pixelH";
					sizeEx="24 * pixelH";
					colorText[]={1,1,1,1};
					shadow=0;
					style=192;
				};
				class ExtremoMissionAuthor: RscText
				{
					idc=66010;
					text="by Community";
					font="RobotoCondensedLight";
					x=0;
					y="(190 + 25 - 1) * pixelH";
					w="380 * pixelW";
					h="20 * pixelH";
					sizeEx="20 * pixelH";
					colorText[]=
					{
						"151/255",
						"155/255",
						"161/255",
						1
					};
					shadow=0;
				};
			};
		};
		class DialogBackground: RscText
		{
			idc=-1;
			x="safeZoneX + 60 * pixelW";
			y="safeZoneY + 60 * pixelH";
			w="safeZoneW - (60 + 60 + 380 + 60) * pixelW";
			h="safeZoneH - (60 + 60) * pixelH";
			colorBackground[]=
			{
				"32/255",
				"36/255",
				"42/255",
				1
			};
		};
		class DialogTitleBackground: RscText
		{
			idc=-1;
			x="safeZoneX + 60 * pixelW";
			y="safeZoneY + 60 * pixelH";
			w="safeZoneW - (60 + 60 + 380 + 60) * pixelW";
			h="60 * pixelH";
			colorBackground[]={0,0,0,1};
		};
		class DialogTitle: RscText
		{
			idc=-1;
			x="safeZoneX + (60 + 15) * pixelW";
			y="safeZoneY + 60 * pixelH";
			w="safeZoneW - (60 + 60 + 380 + 60 + 60 + 10) * pixelW";
			h="60 * pixelH";
			text="Spawn Location";
			sizeEx="30 * pixelH";
			font="RobotoCondensed";
		};
		class ListBoxLocations: RscListBox
		{
			idc=24002;
			text="Locations";
			font="RobotoCondensed";
			x="safeZoneX + (60 + 15) * pixelW";
			y="safeZoneY + (60 + 60 + 15) * pixelH";
			w="300 * pixelW";
			h="safeZoneH - (60 + 60 + 60 + 15 + 15 + 60 + 15) * pixelH";
			colorBackground[]={0,0,0,0.25};
			onLBSelChanged="_this call extremo_fnc_gui_spawn_chosen;";
		};
		class Map: RscMapControl
		{
			idc=24001;
			text="";
			x="safeZoneX + (60 + 15 + 300 + 15) * pixelW";
			y="safeZoneY + (60 + 60 + 15) * pixelH";
			w="safeZoneW - (60 + 15 + 300 + 15 + 15 + 60 + 380 + 60) * pixelW";
			h="safeZoneH - (60 + 60 + 15 + 60 + 15) * pixelH";
			moveOnEdges=0;
			maxSatelliteAlpha=0.75;
			alphaFadeStartScale=1.15;
			alphaFadeEndScale=1.29;
		};
		class ButtonSpawn: RscExtremoPrimaryButton
		{
			idc=24003;
			text="OKAY";
			x="safeZoneX + (60 + 15) * pixelW";
			y="safeZoneY + safeZoneH - (60 + 15 + 60) * pixelH";
			w="300 * pixelW";
			h="60 * pixelH";
			onButtonClick="closeDialog 0;[] call extremo_fnc_gui_spawn_confirm";
		};
	};
};

//--- Extremo OLD
class RscExtremoCameraView
{
	idd=20023;
	onLoad="uiNamespace setVariable ['RscExtremoCameraView', _this select 0];	(_this call Extremo_fnc_gui_baseCamera_event_onLoad) lbSetCurSel 0";
	onUnload="uiNamespace setVariable ['RscExtremoCameraView', displayNull];	_this call Extremo_fnc_gui_baseCamera_event_onUnLoad";
	hideControls[]=
	{
		"HideMiddle",
		"HideRight",
		"HideLeft",
		"HideInfo"
	};
	class controlsBackground
	{
		class StyleHeader: RscText
		{
			x="-0.00416666 * safezoneW + safezoneX";
			y="-0.00599999 * safezoneH + safezoneY";
			w="1.00833 * safezoneW";
			h="0.1144 * safezoneH";
			colorBackground[]={0.101961,0.101961,0.101961,1};
		};
		class StyleHeaderLogo: RscPicture
		{
			x="-0.015625 * safezoneW + safezoneX";
			y="0.016 * safezoneH + safezoneY";
			w="0.200521 * safezoneW";
			h="0.088 * safezoneH";
			colorBackground[]={0.235294,0.27058801,0.29803899,1};
			text="\Extremo_Assets\texture\ui\cameraView\masheen_logo.paa";
		};
		class StyleHeaderUserInfo: RscText
		{
			x="0.184896 * safezoneW + safezoneX";
			y="0.016 * safezoneH + safezoneY";
			w="0.120313 * safezoneW";
			h="0.088 * safezoneH";
			colorBackground[]={0.16470601,0.188235,0.20784301,1};
		};
		class StyleHeaderMiddle: RscText
		{
			x="0.305208 * safezoneW + safezoneX";
			y="0.016 * safezoneH + safezoneY";
			w="0.389583 * safezoneW";
			h="0.088 * safezoneH";
			colorBackground[]={0.235294,0.27058801,0.29803899,1};
		};
		class StyleTimeDate: RscText
		{
			x="0.694792 * safezoneW + safezoneX";
			y="0.016 * safezoneH + safezoneY";
			w="0.120313 * safezoneW";
			h="0.088 * safezoneH";
			colorBackground[]={0.16470601,0.188235,0.20784301,1};
		};
		class StyleWeather: RscText
		{
			x="0.815104 * safezoneW + safezoneX";
			y="0.016 * safezoneH + safezoneY";
			w="0.0630208 * safezoneW";
			h="0.088 * safezoneH";
			colorBackground[]={0.235294,0.27058801,0.29803899,1};
		};
		class StyleWifi: RscText
		{
			x="0.878125 * safezoneW + safezoneX";
			y="0.016 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0293333 * safezoneH";
			colorBackground[]={0.16470601,0.188235,0.20784301,1};
		};
		class StyleNV: RscText
		{
			x="0.878125 * safezoneW + safezoneX";
			y="0.0754 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0293333 * safezoneH";
			colorBackground[]={0.16470601,0.188235,0.20784301,1};
		};
		class StyleHD: RscText
		{
			x="0.878125 * safezoneW + safezoneX";
			y="0.0446 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0315333 * safezoneH";
			colorBackground[]={0.203922,0.231373,0.25097999,1};
		};
		class StyleUserInfoPicture: RscPictureKeepAspect
		{
			x="0.196354 * safezoneW + safezoneX";
			y="0.038 * safezoneH + safezoneY";
			w="0.0286458 * safezoneW";
			h="0.044 * safezoneH";
			text="\Extremo_Assets\texture\ui\cameraView\superUser.paa";
		};
		class StyleWlanPicture: RscPictureKeepAspect
		{
			x="0.880417 * safezoneW + safezoneX";
			y="0.0182 * safezoneH + safezoneY";
			w="0.0126041 * safezoneW";
			h="0.0242 * safezoneH";
			text="\Extremo_Assets\texture\ui\cameraView\wlan.paa";
		};
		class StyleNVPicture: RscPictureKeepAspect
		{
			x="0.880417 * safezoneW + safezoneX";
			y="0.0798 * safezoneH + safezoneY";
			w="0.0126041 * safezoneW";
			h="0.022 * safezoneH";
			text="\Extremo_Assets\texture\ui\cameraView\nv.paa";
		};
		class StyleHDDPicture: RscPictureKeepAspect
		{
			x="0.880416 * safezoneW + safezoneX";
			y="0.049 * safezoneH + safezoneY";
			w="0.0126041 * safezoneW";
			h="0.0242 * safezoneH";
			text="\Extremo_Assets\texture\ui\cameraView\hdd.paa";
		};
		class StyleFooter: RscText
		{
			x="-0.00416666 * safezoneW + safezoneX";
			y="0.9444 * safezoneH + safezoneY";
			w="1.0049 * safezoneW";
			h="0.0572 * safezoneH";
			colorBackground[]={0.101961,0.101961,0.101961,1};
		};
		class StyleFooterOver: RscText
		{
			x="-0.000729111 * safezoneW + safezoneX";
			y="0.951 * safezoneH + safezoneY";
			w="1.00034 * safezoneW";
			h="0.0528 * safezoneH";
			colorBackground[]={0.235294,0.27058801,0.29803899,1};
		};
		class StyleFooterInfo: RscPictureKeepAspect
		{
			x="0.00729166 * safezoneW + safezoneX";
			y="0.962 * safezoneH + safezoneY";
			w="0.435417 * safezoneW";
			h="0.033 * safezoneH";
			text="\Extremo_Assets\texture\ui\cameraView\footer.paa";
		};
	};
	class controls
	{
		class HideMiddle: RscText
		{
			idc=4001;
			x="0.305208 * safezoneW + safezoneX";
			y="0.1084 * safezoneH + safezoneY";
			w="0.389583 * safezoneW";
			h="0.836 * safezoneH";
			colorBackground[]={0.235294,0.27058801,0.29803899,1};
		};
		class HideRight: RscText
		{
			idc=4002;
			x="0.694792 * safezoneW + safezoneX";
			y="0.1084 * safezoneH + safezoneY";
			w="0.309375 * safezoneW";
			h="0.836 * safezoneH";
			colorBackground[]={0.16470601,0.188235,0.20784301,1};
		};
		class HideLeft: RscText
		{
			idc=4003;
			x="-0.00416666 * safezoneW + safezoneX";
			y="0.1084 * safezoneH + safezoneY";
			w="0.309375 * safezoneW";
			h="0.836 * safezoneH";
			colorBackground[]={0.16470601,0.188235,0.20784301,1};
		};
		class HideInfo: RscStructuredText
		{
			idc=4004;
			x="0.3625 * safezoneW + safezoneX";
			y="0.456 * safezoneH + safezoneY";
			w="0.275 * safezoneW";
			h="0.11 * safezoneH";
			colorBackground[]={0,0,0,0};
			colorText[]={1,1,1,0.80000001};
			onLoad="_this call Extremo_fnc_gui_baseCamera_event_info_onLoadInfo";
		};
		class MainCaptureArea: RscListBox
		{
			idc=4009;
			access=0;
			colorBackground[]={0,0,0,0};
			x="0 * safezoneW + safezoneX";
			y="0 * safezoneH + safezoneY";
			w="1 * safezoneW";
			h="1 * safezoneH";
			onMouseMoving="_this call Extremo_fnc_gui_baseCamera_event_main_onMouseMoving";
			onMouseButtonDown="_this call Extremo_fnc_gui_baseCamera_event_main_onMouseButtonDown";
			onMouseButtonUp="_this call Extremo_fnc_gui_baseCamera_event_main_onMouseButtonUp";
			onMouseZChanged="_this call Extremo_fnc_gui_baseCamera_event_main_onMouseZChanged";
			onLoad="						['RscExtremoCameraView','MainCaptureArea']						call Extremo_fnc_util_display_mouseControl_buildLimits;						ExtremoClientDisplayResetFocus = true						";
			onUnLoad="ExtremoBaseManagementLimits = []";
			class CaptureArea
			{
				x="0 * safezoneW + safezoneX";
				y="0.1084 * safezoneH + safezoneY";
				w="1 * safezoneW";
				h="0.836 * safezoneH";
			};
		};
		class StyleBigRedButton: RscButton
		{
			idc=4000;
			style=48;
			x="0.895313 * safezoneW + safezoneX";
			y="0.016 * safezoneH + safezoneY";
			w="0.105417 * safezoneW";
			h="0.088 * safezoneH";
			colorBackground[]={0.56078398,0,0.113725,1};
			text="\Extremo_Assets\texture\ui\cameraView\button_off.paa";
			action="closeDialog 0;";
			onMouseMoving="[_this,'RscExtremoCameraView','StyleBigRedButton'] call Extremo_fnc_gui_handle_animButton_onMouseMoving";
			onButtonDown="[_this,'RscExtremoCameraView','StyleBigRedButton'] call Extremo_fnc_gui_handle_animButton_onButtonDown";
			onButtonUp="[_this,'RscExtremoCameraView','StyleBigRedButton'] call Extremo_fnc_gui_handle_animButton_onButtonUp";
			onLoad="ExtremoGuiControlClick = false";
			class buttonPictures
			{
				none="\Extremo_Assets\texture\ui\cameraView\button_off.paa";
				hover="\Extremo_Assets\texture\ui\cameraView\button_hover.paa";
				click="\Extremo_Assets\texture\ui\cameraView\button_click.paa";
			};
		};
		class ComboMiddleCameraSelect: RscCombo
		{
			idc=4005;
			style=2;
			x="0.328125 * safezoneW + safezoneX";
			y="0.049 * safezoneH + safezoneY";
			w="0.349479 * safezoneW";
			h="0.022 * safezoneH";
			onLBSelChanged="_this call Extremo_fnc_gui_baseCamera_event_main_onCameraDropDownChanged";
			onMouseButtonClick="_this call Extremo_fnc_gui_baseCamera_event_onLoad";
		};
		class StyleTime: RscStructuredText
		{
			idc=4006;
			x="0.70625 * safezoneW + safezoneX";
			y="0.038 * safezoneH + safezoneY";
			w="0.0572917 * safezoneW";
			h="0.044 * safezoneH";
			onLoad="_this call Extremo_fnc_gui_baseCamera_event_info_onLoadTime";
		};
		class StyleDate: RscStructuredText
		{
			idc=4007;
			x="0.763542 * safezoneW + safezoneX";
			y="0.049 * safezoneH + safezoneY";
			w="0.0458333 * safezoneW";
			h="0.0242 * safezoneH";
			onLoad="_this call Extremo_fnc_gui_baseCamera_event_info_onLoadDate";
		};
		class StyleUserInfoText: RscStructuredText
		{
			idc=4008;
			x="0.227291 * safezoneW + safezoneX";
			y="0.038 * safezoneH + safezoneY";
			w="0.0630208 * safezoneW";
			h="0.044 * safezoneH";
			onLoad="_this call Extremo_fnc_gui_baseCamera_event_info_onLoadPlayerInfo";
		};
		class StyleWeatherPicture: RscPictureKeepAspect
		{
			x="0.820833 * safezoneW + safezoneX";
			y="0.027 * safezoneH + safezoneY";
			w="0.0515625 * safezoneW";
			h="0.066 * safezoneH";
			onLoad="_this call Extremo_fnc_gui_baseCamera_event_info_onLoadWeather";
		};
	};
};
class RscExtremoCraftItemDialog
{
	idd=24005;
	onLoad="uiNamespace setVariable ['RscExtremoCraftItemDialog', _this select 0]";
	onUnload="uiNamespace setVariable ['RscExtremoCraftItemDialog', displayNull]";
	class controlsBackground
	{
		class BackgroundLeft: RscText
		{
			idc=100;
			x="0 * (0.025) + (0)";
			y="1.5 * (0.04) + (0)";
			w="12 * (0.025)";
			h="21 * (0.04)";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
		class TopLeftCaption: RscText
		{
			idc=101;
			text="ITEM";
			x="0 * (0.025) + (0)";
			y="0.25 * (0.04) + (0)";
			w="12 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0.1,0.1,0.1,1};
		};
		class BackgroundBottom: RscText
		{
			idc=102;
			x="0 * (0.025) + (0)";
			y="23 * (0.04) + (0)";
			w="40 * (0.025)";
			h="2 * (0.04)";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
		class BackgroundRight: RscText
		{
			idc=103;
			x="12.5 * (0.025) + (0)";
			y="1.5 * (0.04) + (0)";
			w="27.5 * (0.025)";
			h="21 * (0.04)";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
		class TopRightCaption: RscText
		{
			idc=104;
			text="COMPONENTS";
			x="12.5 * (0.025) + (0)";
			y="0.25 * (0.04) + (0)";
			w="27.5 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0.1,0.1,0.1,1};
		};
		class ButtonCloseCross: RscActiveText
		{
			idc=105;
			style=2096;
			color[]={1,1,1,0.69999999};
			action="closeDialog 0;";
			text="\A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
			x="39 * (0.025) + (0)";
			y="0.25 * (0.04) + (0)";
			w="1 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,0.69999999};
			colorActive[]={1,1,1,1};
			tooltip="Close";
		};
	};
	class controls
	{
		class ItemPicture: RscPictureKeepAspect
		{
			idc=5000;
			text="#(argb,8,8,3)color(1,1,1,1)";
			x="0.5 * (0.025) + (0)";
			y="2 * (0.04) + (0)";
			w="11 * (0.025)";
			h="9 * (0.04)";
		};
		class ButtonCraft: RscButton
		{
			idc=5001;
			text="CRAFT";
			x="0.5 * (0.025) + (0)";
			y="23.5 * (0.04) + (0)";
			w="5.5 * (0.025)";
			h="1 * (0.04)";
			action="[uiNamespace getVariable 'RscExtremoCraftItemRecipeClassName', (lbCurSel 5002) + 1] call Extremo_fnc_object_item_craft; closeDialog 0;";
		};
		class DropdownQuantity: RscCombo
		{
			idc=5002;
			x="6.5 * (0.025) + (0)";
			y="23.5 * (0.04) + (0)";
			w="5.5 * (0.025)";
			h="1 * (0.04)";
		};
		class ButtonCancel: RscButtonMenuCancel
		{
			x="34 * (0.025) + (0)";
			y="23.5 * (0.04) + (0)";
			w="5.5 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.80000001};
		};
		class Description: RscStructuredText
		{
			idc=5003;
			x="13 * (0.025) + (0)";
			y="2 * (0.04) + (0)";
			w="26.5 * (0.025)";
			h="20 * (0.04)";
		};
	};
};
class RscExtremoItemDetailsDialog
{
	idd=24004;
	onLoad="uiNamespace setVariable ['RscExtremoItemDetailsDialog', _this select 0]";
	onUnload="uiNamespace setVariable ['RscExtremoItemDetailsDialog', displayNull]";
	class controlsBackground
	{
		class BackgroundLeft: RscText
		{
			idc=1000;
			x="0 * (0.025) + (0)";
			y="1.5 * (0.04) + (0)";
			w="12 * (0.025)";
			h="21 * (0.04)";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
		class BackgroundBottom: RscText
		{
			idc=1005;
			x="0 * (0.025) + (0)";
			y="23 * (0.04) + (0)";
			w="40 * (0.025)";
			h="2 * (0.04)";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
		class BackgroundRight: RscText
		{
			idc=1006;
			x="12.5 * (0.025) + (0)";
			y="1.5 * (0.04) + (0)";
			w="27.5 * (0.025)";
			h="21 * (0.04)";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
		class TopLeftCaption: RscText
		{
			idc=1001;
			text="ITEM";
			x="0 * (0.025) + (0)";
			y="0.25 * (0.04) + (0)";
			w="12 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0.1,0.1,0.1,1};
		};
		class TopRightCaption: RscText
		{
			idc=1002;
			text="";
			x="12.5 * (0.025) + (0)";
			y="0.25 * (0.04) + (0)";
			w="27.5 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0.1,0.1,0.1,1};
		};
		class ButtonCloseCross: RscActiveText
		{
			idc=100;
			style=2096;
			color[]={1,1,1,0.69999999};
			action="closeDialog 0;";
			text="\A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
			x="39 * (0.025) + (0)";
			y="0.25 * (0.04) + (0)";
			w="1 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,0.69999999};
			colorActive[]={1,1,1,1};
			tooltip="Close";
		};
	};
	class controls
	{
		class ItemPicture: RscPictureKeepAspect
		{
			idc=5000;
			text="#(argb,8,8,3)color(1,1,1,1)";
			x="0.5 * (0.025) + (0)";
			y="2 * (0.04) + (0)";
			w="11 * (0.025)";
			h="9 * (0.04)";
		};
		class TabButtonDetails: RscButton
		{
			idc=1603;
			text="DETAILS";
			x="13 * (0.025) + (0)";
			y="0.25 * (0.04) + (0)";
			w="5.5 * (0.025)";
			h="1 * (0.04)";
			action="'DETAILS' call Extremo_fnc_gui_itemDetails_event_onTabButtonClicked;";
		};
		class TabButtonRecipes: RscButton
		{
			idc=1604;
			text="RECIPES";
			x="19 * (0.025) + (0)";
			y="0.25 * (0.04) + (0)";
			w="5.5 * (0.025)";
			h="1 * (0.04)";
			action="'RECIPES' call Extremo_fnc_gui_itemDetails_event_onTabButtonClicked;";
		};
		class ButtonConsume: RscButton
		{
			idc=1300;
			action="closeDialog 0; [ExtremoClientSelectedInventoryItem select 0] call Extremo_fnc_object_item_consume;";
			text="CONSUME";
			x="0.5 * (0.025) + (0)";
			y="23.5 * (0.04) + (0)";
			w="5.5 * (0.025)";
			h="1 * (0.04)";
		};
		class ButtonUse: RscButton
		{
			idc=1301;
			action="closeDialog 0; [ExtremoClientSelectedInventoryItem select 0] call Extremo_fnc_object_item_use;";
			text="USE";
			x="12.5 * (0.025) + (0)";
			y="23.5 * (0.04) + (0)";
			w="5.5 * (0.025)";
			h="1 * (0.04)";
		};
		class ButtonConstruct: RscButton
		{
			idc=1303;
			action="closeDialog 0; [ExtremoClientSelectedInventoryItem select 0] call Extremo_fnc_object_item_construct;";
			text="CONSTRUCT";
			x="6.5 * (0.025) + (0)";
			y="23.5 * (0.04) + (0)";
			w="5.5 * (0.025)";
			h="1 * (0.04)";
		};
		class ButtonCancel: RscButtonMenuCancel
		{
			x="34 * (0.025) + (0)";
			y="23.5 * (0.04) + (0)";
			w="5.5 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.80000001};
		};
		class TabDetails: RscControlsGroup
		{
			idc=5003;
			x="13 * (0.025) + (0)";
			y="2 * (0.04) + (0)";
			w="26.5 * (0.025)";
			h="20 * (0.04)";
			class controls
			{
				class TextItemName: RscStructuredText
				{
					idc=5001;
					text="Item Name";
					x=0;
					y=0;
					w="26.5 * (0.025)";
					h="1.5 * (0.04)";
				};
				class TextItemLevel: RscStructuredText
				{
					idc=5002;
					text="Item Level 1";
					x=0;
					y="1.5 * (0.04)";
					w="26.5 * (0.025)";
					h="1 * (0.04)";
				};
				class ItemDescription: RscStructuredText
				{
					idc=1100;
					x=0;
					y="3 * (0.04)";
					w="26.5 * (0.025)";
					h="17 * (0.04)";
				};
			};
		};
		class TabRecipes: RscControlsGroup
		{
			idc=5004;
			x="13 * (0.025) + (0)";
			y="2 * (0.04) + (0)";
			w="26.5 * (0.025)";
			h="20 * (0.04)";
			show="false";
			class controls
			{
				class CraftingListBox: RscListBox
				{
					idc=1400;
					x=0;
					y=0;
					w="26.5 * (0.025)";
					h="20 * (0.04)";
					sizeEx="0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx2="0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					rowHeight="2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					canDrag=0;
					colorText[]={1,1,1,1};
					colorBackground[]={0,0,0,0};
					itemBackground[]={1,1,1,0.1};
					itemSpacing=0.001;
					onLBDblClick="closeDialog 0; _this call Extremo_fnc_gui_itemDetails_event_onCraftingRecipeDoubleClick";
				};
			};
		};
		class Stat01Background: RscText
		{
			idc=6000;
			x="0.5 * (0.025) + (0)";
			y="12 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0,0,0,0.5};
		};
		class Stat01Progress: RscProgress
		{
			idc=6001;
			x="0.5 * (0.025) + (0)";
			y="12 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,0.25};
			colorBackground[]={1,1,1,0.25};
		};
		class Stat01Label: RscText
		{
			idc=6002;
			text="DAMAGE";
			x="0.5 * (0.025) + (0)";
			y="12 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
		};
		class Stat01Value: RscStructuredText
		{
			idc=6003;
			text="9 HP";
			style=1;
			x="6 * (0.025) + (0)";
			y="12 * (0.04) + (0)";
			w="5.5 * (0.025)";
			h="1 * (0.04)";
		};
		class Stat02Background: RscText
		{
			idc=6004;
			x="0.5 * (0.025) + (0)";
			y="13.5 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0,0,0,0.5};
		};
		class Stat02Progress: RscProgress
		{
			idc=6005;
			x="0.5 * (0.025) + (0)";
			y="13.5 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,0.25};
			colorBackground[]={1,1,1,0.25};
		};
		class Stat02Label: RscText
		{
			idc=6006;
			text="DAMAGE";
			x="0.5 * (0.025) + (0)";
			y="13.5 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
		};
		class Stat02Value: RscStructuredText
		{
			idc=6007;
			text="9 HP";
			style=1;
			x="6 * (0.025) + (0)";
			y="13.5 * (0.04) + (0)";
			w="5.5 * (0.025)";
			h="1 * (0.04)";
		};
		class Stat03Background: RscText
		{
			idc=6008;
			x="0.5 * (0.025) + (0)";
			y="15 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0,0,0,0.5};
		};
		class Stat03Progress: RscProgress
		{
			idc=6009;
			x="0.5 * (0.025) + (0)";
			y="15 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,0.25};
			colorBackground[]={1,1,1,0.25};
		};
		class Stat03Label: RscText
		{
			idc=6010;
			text="DAMAGE";
			x="0.5 * (0.025) + (0)";
			y="15 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
		};
		class Stat03Value: RscStructuredText
		{
			idc=6011;
			text="9 HP";
			style=1;
			x="6 * (0.025) + (0)";
			y="15 * (0.04) + (0)";
			w="5.5 * (0.025)";
			h="1 * (0.04)";
		};
		class Stat04Background: RscText
		{
			idc=6012;
			x="0.5 * (0.025) + (0)";
			y="16.5 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0,0,0,0.5};
		};
		class Stat04Progress: RscProgress
		{
			idc=6013;
			x="0.5 * (0.025) + (0)";
			y="16.5 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,0.25};
			colorBackground[]={1,1,1,0.25};
		};
		class Stat04Label: RscText
		{
			idc=6014;
			text="DAMAGE";
			x="0.5 * (0.025) + (0)";
			y="16.5 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
		};
		class Stat04Value: RscStructuredText
		{
			idc=6015;
			text="9 HP";
			style=1;
			x="6 * (0.025) + (0)";
			y="16.5 * (0.04) + (0)";
			w="5.5 * (0.025)";
			h="1 * (0.04)";
		};
		class Stat05Background: RscText
		{
			idc=6016;
			x="0.5 * (0.025) + (0)";
			y="18 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0,0,0,0.5};
		};
		class Stat05Progress: RscProgress
		{
			idc=6017;
			x="0.5 * (0.025) + (0)";
			y="18 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,0.25};
			colorBackground[]={1,1,1,0.25};
		};
		class Stat05Label: RscText
		{
			idc=6018;
			text="DAMAGE";
			x="0.5 * (0.025) + (0)";
			y="18 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
		};
		class Stat05Value: RscStructuredText
		{
			idc=6019;
			text="9 HP";
			style=1;
			x="6 * (0.025) + (0)";
			y="18 * (0.04) + (0)";
			w="5.5 * (0.025)";
			h="1 * (0.04)";
		};
		class Stat06Background: RscText
		{
			idc=6020;
			x="0.5 * (0.025) + (0)";
			y="19.5 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0,0,0,0.5};
		};
		class Stat06Progress: RscProgress
		{
			idc=6021;
			x="0.5 * (0.025) + (0)";
			y="19.5 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,0.25};
			colorBackground[]={1,1,1,0.25};
		};
		class Stat06Label: RscText
		{
			idc=6022;
			text="DAMAGE";
			x="0.5 * (0.025) + (0)";
			y="19.5 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
		};
		class Stat06Value: RscStructuredText
		{
			idc=6023;
			text="9 HP";
			style=1;
			x="6 * (0.025) + (0)";
			y="19.5 * (0.04) + (0)";
			w="5.5 * (0.025)";
			h="1 * (0.04)";
		};
		class Stat07Background: RscText
		{
			idc=6024;
			x="0.5 * (0.025) + (0)";
			y="21 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0,0,0,0.5};
		};
		class Stat07Progress: RscProgress
		{
			idc=6025;
			x="0.5 * (0.025) + (0)";
			y="21 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,0.25};
			colorBackground[]={1,1,1,0.25};
		};
		class Stat07Label: RscText
		{
			idc=6026;
			text="DAMAGE";
			x="0.5 * (0.025) + (0)";
			y="21 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
		};
		class Stat07Value: RscStructuredText
		{
			idc=6027;
			text="9 HP";
			style=1;
			x="6 * (0.025) + (0)";
			y="21 * (0.04) + (0)";
			w="5.5 * (0.025)";
			h="1 * (0.04)";
		};
	};
};
class RscExtremoJoinRussianRouletteDialog
{
	idd=24030;
	onLoad="uiNamespace setVariable ['RscExtremoJoinRussianRouletteDialog', _this select 0]";
	onUnload="call Extremo_fnc_gui_joinRussianRouletteDialog_event_onUnload; uiNamespace setVariable ['RscExtremoJoinRussianRouletteDialog', displayNull]";
	class controlsBackground
	{
		class DialogBackground: RscText
		{
			idc=-1;
			x="10 * (0.025) + (0)";
			y="9 * (0.04) + (0)";
			w="20 * (0.025)";
			h="8.5 * (0.04)";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
		class DialogCation: RscText
		{
			idc=-1;
			text="Russian Roulette";
			x="10 * (0.025) + (0)";
			y="7.9 * (0.04) + (0)";
			w="20 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0.1,0.1,0.1,1};
		};
		class BuyInLabel: RscText
		{
			idc=-1;
			text="Buy-In:";
			x="10.5 * (0.025) + (0)";
			y="12.5 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1 * (0.04)";
		};
		class GameStatusLabel: RscText
		{
			idc=-1;
			text="Game Status:";
			x="10.5 * (0.025) + (0)";
			y="9.5 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1 * (0.04)";
		};
	};
	class controls
	{
		class BuyInValue: RscStructuredText
		{
			idc=4000;
			text="<t size='1.4'>0<img image='\Extremo_Assets\texture\ui\poptab_notification_ca.paa' size='1' shadow='true' /></t>";
			x="10.5 * (0.025) + (0)";
			y="13.5 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1.5 * (0.04)";
			colorBackground[]={0,0,0,0};
		};
		class GameStatusValue: RscStructuredText
		{
			idc=4001;
			text="<t size='1.4' color='#b2ec00'>Waiting for players</t>";
			x="10.5 * (0.025) + (0)";
			y="10.5 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1.5 * (0.04)";
			colorBackground[]={0,0,0,0};
		};
		class CancelButton: RscButtonMenuCancel
		{
			idc=-1;
			action="closeDialog 0";
			x="23.5 * (0.025) + (0)";
			y="16 * (0.04) + (0)";
			w="6 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.80000001};
		};
		class JoinButton: RscButtonMenuOK
		{
			idc=4002;
			onMouseButtonClick="_this call Extremo_fnc_gui_russianRoulette_JoinButtonClick";
			text="Join";
			x="10.5 * (0.025) + (0)";
			y="16 * (0.04) + (0)";
			w="6 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.80000001};
		};
	};
};
class RscExtremoLockerDialog
{
	idd=24029;
	onLoad="uiNamespace setVariable ['RscExtremoLockerDialog', _this select 0]";
	onUnload="call Extremo_fnc_gui_lockerDialog_event_onUnload; uiNamespace setVariable ['RscExtremoLockerDialog', displayNull]";
	class controlsBackground
	{
		class DialogBackground: RscText
		{
			idc=1000;
			x="5.5 * (0.025) + (0)";
			y="8 * (0.04) + (0)";
			w="30 * (0.025)";
			h="10 * (0.04)";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
		class DialogCation: RscText
		{
			idc=1001;
			text="Locker";
			x="5.5 * (0.025) + (0)";
			y="7 * (0.04) + (0)";
			w="30 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0.1,0.1,0.1,1};
		};
		class BalanceLabel: RscText
		{
			idc=1002;
			text="Balance:";
			x="6.5 * (0.025) + (0)";
			y="8.5 * (0.04) + (0)";
			w="14 * (0.025)";
			h="1 * (0.04)";
		};
		class WithdrawLabel: RscText
		{
			idc=1003;
			text="Amount to withdraw:";
			x="6.5 * (0.025) + (0)";
			y="12 * (0.04) + (0)";
			w="10 * (0.025)";
			h="1 * (0.04)";
		};
		class DepositLabel: RscText
		{
			idc=1004;
			text="Amount to deposit:";
			x="24.5 * (0.025) + (0)";
			y="12 * (0.04) + (0)";
			w="10 * (0.025)";
			h="1 * (0.04)";
		};
		class InventoryLabel: RscText
		{
			idc=1005;
			text="Inventory:";
			x="24.5 * (0.025) + (0)";
			y="8.5 * (0.04) + (0)";
			w="10 * (0.025)";
			h="1 * (0.04)";
		};
	};
	class controls
	{
		class Balance: RscStructuredText
		{
			idc=4000;
			text="<t size='1.4'>0</t>";
			x="6.5 * (0.025) + (0)";
			y="10 * (0.04) + (0)";
			w="14 * (0.025)";
			h="2 * (0.04)";
			colorBackground[]={0,0,0,0};
		};
		class Inventory: RscStructuredText
		{
			idc=4001;
			text="<t size='1.4'>0</t>";
			x="24.5 * (0.025) + (0)";
			y="10 * (0.04) + (0)";
			w="10 * (0.025)";
			h="2 * (0.04)";
			colorBackground[]={0,0,0,0};
		};
		class ButtonCancel: RscButtonMenuCancel
		{
			idc=4002;
			action="closeDialog 0";
			x="28 * (0.025) + (0)";
			y="16.5 * (0.04) + (0)";
			w="6 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.80000001};
		};
		class ButtonDeposit: RscButton
		{
			idc=4003;
			text="<";
			x="22 * (0.025) + (0)";
			y="13.5 * (0.04) + (0)";
			w="2 * (0.025)";
			h="2 * (0.04)";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.80000001};
			sizeEx="1.5 * (0.04)";
			onMouseButtonClick="_this call Extremo_fnc_gui_lockerDialog_event_onDepositButtonClick";
		};
		class ButtonWithdraw: RscButton
		{
			idc=4004;
			text=">";
			x="17 * (0.025) + (0)";
			y="13.5 * (0.04) + (0)";
			w="2 * (0.025)";
			h="2 * (0.04)";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.80000001};
			sizeEx="1.5 * (0.04)";
			onMouseButtonClick="_this call Extremo_fnc_gui_lockerDialog_event_onWithdrawButtonClick";
		};
		class WithdrawInput: RscEdit
		{
			idc=4005;
			text="";
			x="6.5 * (0.025) + (0)";
			y="13.5 * (0.04) + (0)";
			w="10 * (0.025)";
			h="2 * (0.04)";
			colorBackground[]={0,0,0,1};
		};
		class DepositInput: RscEdit
		{
			idc=4006;
			text="";
			x="24.5 * (0.025) + (0)";
			y="13.5 * (0.04) + (0)";
			w="10 * (0.025)";
			h="2 * (0.04)";
			colorBackground[]={0,0,0,1};
		};
	};
};
class RscExtremoPayFlagRansomDialog
{
	idd=24028;
	onLoad="uiNamespace setVariable ['RscExtremoPayFlagRansomDialog', _this select 0]";
	onUnload="call Extremo_fnc_gui_payFlagRansomDialog_event_onUnload; uiNamespace setVariable ['RscExtremoPayFlagRansomDialog', displayNull]";
	class controlsBackground
	{
		class DialogBackground: RscText
		{
			idc=-1;
			x="10 * (0.025) + (0)";
			y="9 * (0.04) + (0)";
			w="20 * (0.025)";
			h="8 * (0.04)";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
		class DialogCation: RscText
		{
			idc=-1;
			text="Pay Territory Flag Ransom";
			x="10 * (0.025) + (0)";
			y="7.9 * (0.04) + (0)";
			w="20 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0.1,0.1,0.1,1};
		};
		class TerritoryLabel: RscText
		{
			idc=-1;
			text="Choose the territory to pay for:";
			x="10.5 * (0.025) + (0)";
			y="9.5 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1 * (0.04)";
		};
		class CurrencyLabel: RscText
		{
			idc=-1;
			text="Cost:";
			x="10.5 * (0.025) + (0)";
			y="12 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1 * (0.04)";
		};
	};
	class controls
	{
		class TerritoryDropDown: RscCombo
		{
			idc=4000;
			onLBSelChanged="_this call Extremo_fnc_gui_payFlagRansomDialog_event_onTerritoryDropDownSelectionChanged";
			x="10.5 * (0.025) + (0)";
			y="10.5 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1 * (0.04)";
		};
		class CancelButton: RscButtonMenuCancel
		{
			idc=-1;
			action="closeDialog 0";
			x="23.5 * (0.025) + (0)";
			y="15.5 * (0.04) + (0)";
			w="6 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.80000001};
		};
		class PayButton: RscButtonMenuOK
		{
			idc=4001;
			onMouseButtonClick="_this call Extremo_fnc_gui_payFlagRansomDialog_event_onButtonClick";
			text="Pay Now";
			x="10.5 * (0.025) + (0)";
			y="15.5 * (0.04) + (0)";
			w="6 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.80000001};
		};
		class Cost: RscStructuredText
		{
			idc=4002;
			text="<t size='1.4'></t>";
			x="10.5 * (0.025) + (0)";
			y="13 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1.5 * (0.04)";
		};
	};
};
class RscExtremoPayTerritoryProtectionMoneyDialog
{
	idd=20021;
	onLoad="uiNamespace setVariable ['RscExtremoPayTerritoryProtectionMoneyDialog', _this select 0]";
	onUnload="call Extremo_fnc_gui_payTerritoryProtectionMoneyDialog_event_onUnload; uiNamespace setVariable ['RscExtremoPayTerritoryProtectionMoneyDialog', displayNull]";
	class controlsBackground
	{
		class DialogBackground: RscText
		{
			idc=-1;
			x="10 * (0.025) + (0)";
			y="9 * (0.04) + (0)";
			w="20 * (0.025)";
			h="8 * (0.04)";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
		class DialogCation: RscText
		{
			idc=-1;
			text="Pay Territory Protection Money";
			x="10 * (0.025) + (0)";
			y="7.9 * (0.04) + (0)";
			w="20 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0.1,0.1,0.1,1};
		};
		class TerritoryLabel: RscText
		{
			idc=-1;
			text="Choose the territory to pay for:";
			x="10.5 * (0.025) + (0)";
			y="9.5 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1 * (0.04)";
		};
		class CurrencyLabel: RscText
		{
			idc=-1;
			text="Cost:";
			x="10.5 * (0.025) + (0)";
			y="12 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1 * (0.04)";
		};
	};
	class controls
	{
		class TerritoryDropDown: RscCombo
		{
			idc=4001;
			onLBSelChanged="_this call Extremo_fnc_gui_payTerritoryProtectionMoneyDialog_event_onTerritoryDropDownSelectionChanged";
			x="10.5 * (0.025) + (0)";
			y="10.5 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1 * (0.04)";
		};
		class CancelButton: RscButtonMenuCancel
		{
			idc=-1;
			action="closeDialog 0";
			x="23.5 * (0.025) + (0)";
			y="15.5 * (0.04) + (0)";
			w="6 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.80000001};
		};
		class PayButton: RscButtonMenuOK
		{
			idc=4002;
			onMouseButtonClick="_this call Extremo_fnc_gui_payTerritoryProtectionMoneyDialog_event_onPayButtonClick";
			text="Pay Now";
			x="10.5 * (0.025) + (0)";
			y="15.5 * (0.04) + (0)";
			w="6 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.80000001};
		};
		class Cost: RscStructuredText
		{
			idc=4000;
			text="<t size='1.4'>0</t>";
			x="10.5 * (0.025) + (0)";
			y="13 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1.5 * (0.04)";
		};
	};
};
class RscExtremoPurchaseTerritoryDialog
{
	idd=20017;
	onLoad="uiNamespace setVariable ['RscExtremoPurchaseTerritoryDialog', _this select 0]";
	onUnload="call Extremo_fnc_gui_purchaseTerritoryDialog_event_onUnload; uiNamespace setVariable ['RscExtremoPurchaseTerritoryDialog', displayNull]";
	class controlsBackground
	{
		class DialogBackground: RscText
		{
			idc=-1;
			x="10 * (0.025) + (0)";
			y="8 * (0.04) + (0)";
			w="20 * (0.025)";
			h="10 * (0.04)";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
		class DialogCation: RscText
		{
			idc=-1;
			text="Purchase Territory";
			x="10 * (0.025) + (0)";
			y="6.9 * (0.04) + (0)";
			w="20 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0.1,0.1,0.1,1};
		};
		class PriceLabel: RscText
		{
			idc=-1;
			text="Price:";
			x="10.5 * (0.025) + (0)";
			y="12 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1 * (0.04)";
		};
		class RadiusLabel: RscText
		{
			idc=-1;
			text="Radius:";
			x="10.5 * (0.025) + (0)";
			y="8.5 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1 * (0.04)";
		};
	};
	class controls
	{
		class RegistrationFeeValue: RscStructuredText
		{
			idc=4000;
			text="<t size='1.4'>50,000<img image='\Extremo_Assets\texture\ui\poptab_notification_ca.paa' size='1' shadow='true' /></t>";
			x="10.5 * (0.025) + (0)";
			y="13 * (0.04) + (0)";
			w="19 * (0.025)";
			h="2 * (0.04)";
			colorBackground[]={0,0,0,0};
		};
		class ButtonCancel: RscButtonMenuCancel
		{
			idc=-1;
			action="closeDialog 0";
			x="23.5 * (0.025) + (0)";
			y="16.5 * (0.04) + (0)";
			w="6 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.80000001};
		};
		class PurchaseButton: RscButtonMenuOK
		{
			idc=4001;
			onMouseButtonClick="_this call Extremo_fnc_gui_purchaseTerritoryDialog_event_onPurchaseButtonClick";
			text="Purchase";
			x="10.5 * (0.025) + (0)";
			y="16.5 * (0.04) + (0)";
			w="6 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.80000001};
		};
		class Radius: RscStructuredText
		{
			idc=4002;
			text="<t size='1.4'>15m</t>";
			x="10.5 * (0.025) + (0)";
			y="9.5 * (0.04) + (0)";
			w="19 * (0.025)";
			h="2 * (0.04)";
			colorBackground[]={0,0,0,0};
		};
	};
};
class RscExtremoRegisterClan
{
	idd=24012;
	onLoad="uiNamespace setVariable ['RscExtremoRegisterClan', _this select 0]";
	onUnload="call Extremo_fnc_gui_registerClanDialog_event_onUnload; uiNamespace setVariable ['RscExtremoRegisterClan', displayNull]";
	class controlsBackground
	{
		class DialogBackground: RscText
		{
			idc=1000;
			x="10 * (0.025) + (0)";
			y="8 * (0.04) + (0)";
			w="20 * (0.025)";
			h="10 * (0.04)";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
		class DialogCation: RscText
		{
			idc=1001;
			text="Register Family";
			x="10 * (0.025) + (0)";
			y="6.9 * (0.04) + (0)";
			w="20 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0.1,0.1,0.1,1};
		};
		class NameLabel: RscText
		{
			idc=1002;
			text="Choose a name:";
			x="10.5 * (0.025) + (0)";
			y="8.5 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1 * (0.04)";
		};
		class PriceLabel: RscText
		{
			idc=1003;
			text="Registration Fee:";
			x="10.5 * (0.025) + (0)";
			y="12 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1 * (0.04)";
		};
	};
	class controls
	{
		class RegistrationFeeValue: RscStructuredText
		{
			idc=4000;
			text="<t size='1.4'>50,000<img image='\Extremo_Assets\texture\ui\poptab_notification_ca.paa' size='1' shadow='true' /></t>";
			x="10.5 * (0.025) + (0)";
			y="13 * (0.04) + (0)";
			w="19 * (0.025)";
			h="2 * (0.04)";
			colorBackground[]={0,0,0,0};
		};
		class ButtonCancel: RscButtonMenuCancel
		{
			idc=4001;
			x="23.5 * (0.025) + (0)";
			y="16.5 * (0.04) + (0)";
			w="6 * (0.025)";
			h="1 * (0.04)";
			action="closeDialog 0";
		};
		class ButtonRegister: RscButtonMenuOK
		{
			idc=4002;
			text="Register";
			x="10.5 * (0.025) + (0)";
			y="16.5 * (0.04) + (0)";
			w="6 * (0.025)";
			h="1 * (0.04)";
			onMouseButtonClick="_this call Extremo_fnc_gui_registerClanDialog_event_onRegisterButtonClick";
		};
		class NameInput: RscEdit
		{
			idc=4003;
			text="WWWWWWWWWWWWWWWWWWWW";
			x="10.5 * (0.025) + (0)";
			y="9.5 * (0.04) + (0)";
			w="19 * (0.025)";
			h="2 * (0.04)";
			colorBackground[]={0,0,0,1};
		};
	};
};
class RscExtremoRekeyVehicleDialog
{
	idd=24027;
	onLoad="uiNamespace setVariable ['RscExtremoRekeyVehicleDialog', _this select 0]";
	onUnload="call Extremo_fnc_gui_vehicleRekeyDialog_event_onUnload; uiNamespace setVariable ['RscExtremoRekeyVehicleDialog', displayNull]";
	class controlsBackground
	{
		class DialogBackground: RscText
		{
			idc=-1;
			x="10 * (0.025) + (0)";
			y="5 * (0.04) + (0)";
			w="20 * (0.025)";
			h="13 * (0.04)";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
		class DialogCation: RscText
		{
			idc=-1;
			text="Change Pin Code";
			x="10 * (0.025) + (0)";
			y="4 * (0.04) + (0)";
			w="20 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0.1,0.1,0.1,1};
		};
		class ResetCodeCostLabel: RscText
		{
			idc=-1;
			text="Cost to change if pin is unknown:";
			x="10.5 * (0.025) + (0)";
			y="12.5 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1 * (0.04)";
		};
		class VehicleLabel: RscText
		{
			idc=-1;
			text="Select vehicle to change pin:";
			x="10 * (0.025) + (0)";
			y="5 * (0.04) + (0)";
			w="20 * (0.025)";
			h="1 * (0.04)";
		};
		class ResetCodeFreeLabel: RscText
		{
			idc=-1;
			text="If pin is known you can change it for free.";
			x="10.5 * (0.025) + (0)";
			y="8.5 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1 * (0.04)";
		};
	};
	class controls
	{
		class VehicleDropDown: RscCombo
		{
			idc=4002;
			x="10.5 * (0.025) + (0)";
			y="6.5 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1 * (0.04)";
			onLBSelChanged="_this call Extremo_fnc_gui_vehicleRekeyDialog_event_onDropDownSelectionChanged";
		};
		class Cost: RscStructuredText
		{
			idc=4000;
			text="<t size='1.4'>0<img image='\Extremo_Assets\texture\ui\poptab_notification_ca.paa' size='1' shadow='true' /></t>";
			x="10.5 * (0.025) + (0)";
			y="14 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1.5 * (0.04)";
			colorBackground[]={0,0,0,0};
		};
		class CancelButton: RscButtonMenuCancel
		{
			idc=-1;
			action="closeDialog 0";
			x="23.5 * (0.025) + (0)";
			y="16 * (0.04) + (0)";
			w="6 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,1};
		};
		class PurchaseButton: RscButtonMenuOK
		{
			idc=4001;
			onMouseButtonClick="_this call Extremo_fnc_gui_vehicleRekeyDialog_event_onPurchaseButtonClick";
			text="Reset";
			x="10.5 * (0.025) + (0)";
			y="16 * (0.04) + (0)";
			w="6 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,1};
		};
		class ResetButton: RscButtonMenuOK
		{
			idc=4003;
			onMouseButtonClick="_this call Extremo_fnc_gui_vehicleRekeyDialog_event_onResetButtonClick";
			text="Reset Free";
			x="10.5 * (0.025) + (0)";
			y="10.5 * (0.04) + (0)";
			w="6 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,1};
		};
	};
};
class RscExtremoSandbox
{
	idd=20019;
	onLoad="uiNamespace setVariable ['RscExtremoSandbox', _this select 0];";
	onUnload="uiNamespace setVariable ['RscExtremoSandbox', displayNull]";
	duration=-1;
};
class RscExtremoSetupTerritoryDialog
{
	idd=20016;
	onLoad="uiNamespace setVariable ['RscExtremoSetupTerritoryDialog', _this select 0]";
	onUnload="call Extremo_fnc_gui_setupTerritoryDialog_event_onUnload; uiNamespace setVariable ['RscExtremoSetupTerritoryDialog', displayNull]";
	class controlsBackground
	{
		class DialogBackground: RscText
		{
			idc=-1;
			x="10 * (0.025) + (0)";
			y="5 * (0.04) + (0)";
			w="20 * (0.025)";
			h="16 * (0.04)";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
		class DialogCation: RscText
		{
			idc=-1;
			text="Setup Territory";
			x="10 * (0.025) + (0)";
			y="3.9 * (0.04) + (0)";
			w="20 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0.1,0.1,0.1,1};
		};
		class NameLabel: RscText
		{
			idc=-1;
			text="Name:";
			x="10.5 * (0.025) + (0)";
			y="5.5 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1 * (0.04)";
		};
		class FlagLabel: RscText
		{
			idc=-1;
			text="Flag Texture:";
			x="10.5 * (0.025) + (0)";
			y="9.5 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1 * (0.04)";
		};
	};
	class controls
	{
		class CancelButton: RscButtonMenuCancel
		{
			idc=-1;
			action="closeDialog 0";
			x="23.5 * (0.025) + (0)";
			y="19.5 * (0.04) + (0)";
			w="6 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.80000001};
		};
		class PlaceButton: RscButtonMenuOK
		{
			idc=4002;
			onMouseButtonClick="_this call Extremo_fnc_gui_setupTerritoryDialog_event_onPlaceButtonClick";
			text="Setup";
			x="10.5 * (0.025) + (0)";
			y="19.5 * (0.04) + (0)";
			w="6 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.80000001};
		};
		class NameInput: RscEdit
		{
			idc=4000;
			text="";
			x="10.5 * (0.025) + (0)";
			y="6.5 * (0.04) + (0)";
			w="19 * (0.025)";
			h="2 * (0.04)";
			colorBackground[]={0,0,0,1};
		};
		class FlagListBox: RscListBox
		{
			idc=4001;
			x="10.5 * (0.025) + (0)";
			y="10.5 * (0.04) + (0)";
			w="19 * (0.025)";
			h="8 * (0.04)";
		};
	};
};
class RscExtremoTraderDialog
{
	idd=24007;
	onLoad="uiNamespace setVariable ['RscExtremoTraderDialog', _this select 0]";
	onUnload="call Extremo_fnc_gui_traderDialog_event_onUnload; uiNamespace setVariable ['RscExtremoTraderDialog', displayNull]";
	class controlsBackground
	{
		class DialogCaptionLeft: RscText
		{
			idc=4000;
			text="Eichi";
			x="-4 * (0.025) + (0)";
			y="-0.1 * (0.04) + (0)";
			w="17.5 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0.1,0.1,0.1,1};
		};
		class DialogBackgroundLeft: RscText
		{
			idc=2000;
			x="-4 * (0.025) + (0)";
			y="1 * (0.04) + (0)";
			w="17.5 * (0.025)";
			h="24 * (0.04)";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
		class DialogBackgroundMiddle: RscText
		{
			idc=2001;
			x="14 * (0.025) + (0)";
			y="1 * (0.04) + (0)";
			w="17.5 * (0.025)";
			h="24 * (0.04)";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
		class DialogCaptionMiddle: RscText
		{
			idc=4001;
			text="STORE";
			x="14 * (0.025) + (0)";
			y="-0.1 * (0.04) + (0)";
			w="17.5 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0.1,0.1,0.1,1};
		};
		class DialogBackgroundRight: RscText
		{
			idc=2002;
			x="32 * (0.025) + (0)";
			y="1 * (0.04) + (0)";
			w="12 * (0.025)";
			h="24 * (0.04)";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
		class DialogCaptionRight: RscText
		{
			idc=2003;
			text="STATS";
			x="32 * (0.025) + (0)";
			y="-0.1 * (0.04) + (0)";
			w="12 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0.1,0.1,0.1,1};
		};
	};
	class controls
	{
		class TextPlayerMoney: RscStructuredText
		{
			idc=4002;
			text="0";
			x="5.5 * (0.025) + (0)";
			y="-0.1 * (0.04) + (0)";
			w="8 * (0.025)";
			h="1 * (0.04)";
		};
		class CloseCross: RscActiveText
		{
			idc=1032;
			x="42.8 * (0.025) + (0)";
			y="0.2 * (0.04) + (0)";
			w="1 * (0.025)";
			h="0.5 * (0.04)";
			action="closeDialog 0;";
			style=2096;
			color[]={1,1,1,0.69999999};
			colorText[]={1,1,1,0.69999999};
			colorActive[]={1,1,1,1};
			tooltip="Close";
			text="\A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
		};
		class ItemPicture: RscPictureKeepAspect
		{
			idc=4003;
			text="#(argb,8,8,3)color(1,1,1,1)";
			x="32.5 * (0.025) + (0)";
			y="1.5 * (0.04) + (0)";
			w="11 * (0.025)";
			h="9 * (0.04)";
		};
		class InventoryDropDown: RscCombo
		{
			idc=4004;
			x="-3.5 * (0.025) + (0)";
			y="1.5 * (0.04) + (0)";
			w="16.5 * (0.025)";
			h="1 * (0.04)";
			onLBSelChanged="_this call Extremo_fnc_gui_traderDialog_event_onPlayerInventoryDropDownSelectionChanged";
		};
		class InventoryListBox: RscExtremoItemListBox
		{
			idc=4005;
			x="-3.5 * (0.025) + (0)";
			y="3 * (0.04) + (0)";
			w="16.5 * (0.025)";
			h="20 * (0.04)";
			colorBackground[]={1,1,1,0.1};
			onLBSelChanged="_this call Extremo_fnc_gui_traderDialog_event_onPlayerInventoryListBoxSelectionChanged";
		};
		class CancelButton: RscButtonMenu
		{
			idc=4006;
			x="32.5 * (0.025) + (0)";
			y="23.5 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.80000001};
			action="closeDialog 0;";
			text="Cancel";
		};
		class SellButton: RscButtonMenu
		{
			idc=4007;
			text="Sell";
			x="-3.5 * (0.025) + (0)";
			y="23.5 * (0.04) + (0)";
			w="8 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.80000001};
			onMouseButtonClick="_this call Extremo_fnc_gui_traderDialog_event_onSellButtonClick";
		};
		class StoreDropDown: RscCombo
		{
			idc=4008;
			x="14.5 * (0.025) + (0)";
			y="1.5 * (0.04) + (0)";
			w="16.5 * (0.025)";
			h="1 * (0.04)";
			onLBSelChanged="_this call Extremo_fnc_gui_traderDialog_event_onStoreDropDownSelectionChanged";
		};
		class StoreListBox: RscExtremoItemListBox
		{
			idc=4009;
			x="14.5 * (0.025) + (0)";
			y="3 * (0.04) + (0)";
			w="16.5 * (0.025)";
			h="20 * (0.04)";
			colorBackground[]={1,1,1,0.1};
			onLBSelChanged="_this call Extremo_fnc_gui_traderDialog_event_onStoreListBoxSelectionChanged";
			onLBDblClick="_this call Extremo_fnc_gui_traderDialog_event_onStoreListBoxItemDoubleClick";
		};
		class PurchaseButton: RscButtonMenu
		{
			idc=4010;
			text="Purchase";
			x="14.5 * (0.025) + (0)";
			y="23.5 * (0.04) + (0)";
			w="8 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.80000001};
			onMouseButtonClick="_this call Extremo_fnc_gui_traderDialog_event_onPurchaseButtonClick";
		};
		class QuantityDropDown: RscCombo
		{
			idc=4011;
			x="23 * (0.025) + (0)";
			y="23.5 * (0.04) + (0)";
			w="8 * (0.025)";
			h="1 * (0.04)";
			show="false";
		};
		class PlayerLoadBackground: RscText
		{
			idc=4043;
			x="5 * (0.025) + (0)";
			y="23.5 * (0.04) + (0)";
			w="8 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0,0,0,0.5};
		};
		class PlayerLoadProgress: RscProgress
		{
			idc=4012;
			x="5 * (0.025) + (0)";
			y="23.5 * (0.04) + (0)";
			w="8 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,0.25};
			colorBackground[]={1,1,1,0.25};
		};
		class PlayerLoadLabel: RscText
		{
			idc=4013;
			text="LOAD";
			x="5 * (0.025) + (0)";
			y="23.5 * (0.04) + (0)";
			w="8 * (0.025)";
			h="1 * (0.04)";
		};
		class PlayerLoadValue: RscStructuredText
		{
			idc=4014;
			text="100%";
			x="5 * (0.025) + (0)";
			y="23.5 * (0.04) + (0)";
			w="8 * (0.025)";
			h="1 * (0.04)";
		};
		class PrimaryWeaponFilter: RscCheckBox
		{
			idc=4044;
			x="28.2 * (0.025) + (0)";
			y="1.5 * (0.04) + (0)";
			w="1.2 * (0.025)";
			h="1 * (0.04)";
			tooltip="Show only items that are compatible with your primary weapon.";
			color[]={1,1,1,1};
			colorDisabled[]={1,1,1,0.25};
			colorFocused[]={1,1,1,1};
			colorHover[]={0,0,0,1};
			colorPressed[]={1,1,1,1};
			colorBackground[]={0,0,0,0.80000001};
			colorBackgroundDisabled[]={0,0,0,0.80000001};
			colorBackgroundFocused[]={0,0,0,0.80000001};
			colorBackgroundHover[]={1,1,1,1};
			colorBackgroundPressed[]={0,0,0,0.80000001};
			soundClick[]=
			{
				"\A3\ui_f\data\sound\RscButtonMenu\soundClick",
				0.090000004,
				1
			};
			soundEnter[]=
			{
				"\A3\ui_f\data\sound\RscButtonMenu\soundEnter",
				0.090000004,
				1
			};
			soundEscape[]=
			{
				"\A3\ui_f\data\sound\RscButtonMenu\soundEscape",
				0.090000004,
				1
			};
			soundPush[]=
			{
				"\A3\ui_f\data\sound\RscButtonMenu\soundPush",
				0.090000004,
				1
			};
			textureChecked="Extremo_Assets\texture\arsenal\primaryweapon_green_ca.paa";
			textureDisabledChecked="Extremo_Assets\texture\arsenal\primaryweapon_green_ca.paa";
			textureFocusedChecked="Extremo_Assets\texture\arsenal\primaryweapon_green_ca.paa";
			textureHoverChecked="Extremo_Assets\texture\arsenal\primaryweapon_green_ca.paa";
			texturePressedChecked="Extremo_Assets\texture\arsenal\primaryweapon_green_ca.paa";
			textureDisabledUnchecked="Extremo_Assets\texture\arsenal\primaryweapon_ca.paa";
			textureHoverUnchecked="Extremo_Assets\texture\arsenal\primaryweapon_ca.paa";
			textureFocusedUnchecked="Extremo_Assets\texture\arsenal\primaryweapon_ca.paa";
			texturePressedUnchecked="Extremo_Assets\texture\arsenal\primaryweapon_ca.paa";
			textureUnchecked="Extremo_Assets\texture\arsenal\primaryweapon_ca.paa";
			onCheckedChanged="_this call Extremo_fnc_gui_traderDialog_event_onFilterCheckboxStateChanged";
			show="false";
		};
		class HandgunWeaponFilter: PrimaryWeaponFilter
		{
			idc=4045;
			x="29.8 * (0.025) + (0)";
			y="1.5 * (0.04) + (0)";
			w="1.2 * (0.025)";
			h="1 * (0.04)";
			tooltip="Show only items that are compatible with your handgun.";
			textureChecked="Extremo_Assets\texture\arsenal\handgun_green_ca.paa";
			textureDisabledChecked="Extremo_Assets\texture\arsenal\handgun_green_ca.paa";
			textureFocusedChecked="Extremo_Assets\texture\arsenal\handgun_green_ca.paa";
			textureHoverChecked="Extremo_Assets\texture\arsenal\handgun_green_ca.paa";
			texturePressedChecked="Extremo_Assets\texture\arsenal\handgun_green_ca.paa";
			textureDisabledUnchecked="Extremo_Assets\texture\arsenal\handgun_ca.paa";
			textureHoverUnchecked="Extremo_Assets\texture\arsenal\handgun_ca.paa";
			textureFocusedUnchecked="Extremo_Assets\texture\arsenal\handgun_ca.paa";
			texturePressedUnchecked="Extremo_Assets\texture\arsenal\handgun_ca.paa";
			textureUnchecked="Extremo_Assets\texture\arsenal\handgun_ca.paa";
		};
		class Stat01Background: RscText
		{
			idc=4015;
			x="32.5 * (0.025) + (0)";
			y="11 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0,0,0,0.5};
		};
		class Stat01Progress: RscProgress
		{
			idc=4016;
			x="32.5 * (0.025) + (0)";
			y="11 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,0.25};
			colorBackground[]={1,1,1,0.25};
		};
		class Stat01Label: RscText
		{
			idc=4017;
			text="ARMOR";
			x="32.5 * (0.025) + (0)";
			y="11 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
		};
		class Stat01Value: RscStructuredText
		{
			idc=4018;
			text="0";
			x="32.5 * (0.025) + (0)";
			y="11 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
		};
		class Stat02Background: RscText
		{
			idc=4019;
			x="32.5 * (0.025) + (0)";
			y="12.5 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0,0,0,0.5};
		};
		class Stat02Progress: RscProgress
		{
			idc=4020;
			x="32.5 * (0.025) + (0)";
			y="12.5 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,0.25};
			colorBackground[]={1,1,1,0.25};
		};
		class Stat02Label: RscText
		{
			idc=4021;
			text="ARMOR";
			x="32.5 * (0.025) + (0)";
			y="12.5 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
		};
		class Stat02Value: RscStructuredText
		{
			idc=4022;
			text="0";
			x="32.5 * (0.025) + (0)";
			y="12.5 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
		};
		class Stat03Background: RscText
		{
			idc=4023;
			x="32.5 * (0.025) + (0)";
			y="14 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0,0,0,0.5};
		};
		class Stat03Progress: RscProgress
		{
			idc=4024;
			x="32.5 * (0.025) + (0)";
			y="14 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,0.25};
			colorBackground[]={1,1,1,0.25};
		};
		class Stat03Label: RscText
		{
			idc=4025;
			text="ARMOR";
			x="32.5 * (0.025) + (0)";
			y="14 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
		};
		class Stat03Value: RscStructuredText
		{
			idc=4026;
			text="0";
			x="32.5 * (0.025) + (0)";
			y="14 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
		};
		class Stat04Background: RscText
		{
			idc=4027;
			x="32.5 * (0.025) + (0)";
			y="15.5 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0,0,0,0.5};
		};
		class Stat04Progress: RscProgress
		{
			idc=4028;
			x="32.5 * (0.025) + (0)";
			y="15.5 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,0.25};
			colorBackground[]={1,1,1,0.25};
		};
		class Stat04Label: RscText
		{
			idc=4029;
			text="ARMOR";
			x="32.5 * (0.025) + (0)";
			y="15.5 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
		};
		class Stat04Value: RscStructuredText
		{
			idc=4030;
			text="0";
			x="32.5 * (0.025) + (0)";
			y="15.5 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
		};
		class Stat05Background: RscText
		{
			idc=4031;
			x="32.5 * (0.025) + (0)";
			y="17 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0,0,0,0.5};
		};
		class Stat05Progress: RscProgress
		{
			idc=4032;
			x="32.5 * (0.025) + (0)";
			y="17 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,0.25};
			colorBackground[]={1,1,1,0.25};
		};
		class Stat05Label: RscText
		{
			idc=4033;
			text="ARMOR";
			x="32.5 * (0.025) + (0)";
			y="17 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
		};
		class Stat05Value: RscStructuredText
		{
			idc=4034;
			text="0";
			x="32.5 * (0.025) + (0)";
			y="17 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
		};
		class Stat06Background: RscText
		{
			idc=4035;
			x="32.5 * (0.025) + (0)";
			y="18.5 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0,0,0,0.5};
		};
		class Stat06Progress: RscProgress
		{
			idc=4036;
			x="32.5 * (0.025) + (0)";
			y="18.5 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,0.25};
			colorBackground[]={1,1,1,0.25};
		};
		class Stat06Label: RscText
		{
			idc=4037;
			text="ARMOR";
			x="32.5 * (0.025) + (0)";
			y="18.5 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
		};
		class Stat06Value: RscStructuredText
		{
			idc=4038;
			text="0";
			x="32.5 * (0.025) + (0)";
			y="18.5 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
		};
		class Stat07Background: RscText
		{
			idc=4039;
			x="32.5 * (0.025) + (0)";
			y="20 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0,0,0,0.5};
		};
		class Stat07Progress: RscProgress
		{
			idc=4040;
			x="32.5 * (0.025) + (0)";
			y="20 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,0.25};
			colorBackground[]={1,1,1,0.25};
		};
		class Stat07Label: RscText
		{
			idc=4041;
			text="0";
			x="32.5 * (0.025) + (0)";
			y="20 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
		};
		class Stat07Value: RscStructuredText
		{
			idc=4042;
			text="0";
			x="32.5 * (0.025) + (0)";
			y="20 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
		};
	};
};
class RscExtremoTwinkleTwisterButton: RscButtonMenu
{
	colorBackground[]={0,0,0,0.1};
	font="RobotoCondensed";
	soundClick[]=
	{
		"\A3\ui_f\data\sound\RscButtonMenu\soundClick",
		0.090000004,
		1
	};
	soundEnter[]=
	{
		"\A3\ui_f\data\sound\RscButtonMenu\soundEnter",
		0.090000004,
		1
	};
	soundEscape[]=
	{
		"\A3\ui_f\data\sound\RscButtonMenu\soundEscape",
		0.090000004,
		1
	};
	soundPush[]=
	{
		"\A3\ui_f\data\sound\RscButtonMenu\soundPush",
		0.090000004,
		1
	};
	style=2;
	class Attributes
	{
		align="center";
		color="#FFFFFF";
		font="RobotoCondensed";
		shadow="false";
	};
};
class RscExtremoTwinkleTwister
{
	idd=20024;
	onLoad="uiNamespace setVariable ['RscExtremoTwinkleTwister', _this select 0]";
	onUnload="call Extremo_fnc_gui_twinkleTwister_event_onUnload; uiNamespace setVariable ['RscExtremoTwinkleTwister', displayNull]";
	class controlsBackground
	{
		class Background: RscText
		{
			idc=-1;
			x="0 * (0.025) + (0)";
			y="0 * (0.04) + (0)";
			w="40 * (0.025)";
			h="25 * (0.04)";
			colorBackground[]={0.301961,0.66666698,0.99215698,1};
		};
		class RscText_1002: RscText
		{
			idc=-1;
			x="1.5 * (0.025) + (0)";
			y="3 * (0.04) + (0)";
			w="8 * (0.025)";
			h="3 * (0.04)";
			colorBackground[]={0.71372598,0.85097998,0.99607801,1};
		};
		class RscText_1004: RscText
		{
			idc=-1;
			x="33.5 * (0.025) + (0)";
			y="1.5 * (0.04) + (0)";
			w="3 * (0.025)";
			h="3 * (0.04)";
			colorBackground[]={0.71372598,0.85097998,0.99607801,1};
		};
		class RscText_1007: RscText
		{
			idc=-1;
			x="2.5 * (0.025) + (0)";
			y="1.5 * (0.04) + (0)";
			w="4.5 * (0.025)";
			h="5 * (0.04)";
			colorBackground[]={0.71372598,0.85097998,0.99607801,1};
		};
		class RscText_1009: RscText
		{
			idc=-1;
			x="32 * (0.025) + (0)";
			y="3 * (0.04) + (0)";
			w="6.5 * (0.025)";
			h="2.5 * (0.04)";
			colorBackground[]={0.71372598,0.85097998,0.99607801,1};
		};
		class RscText_1010: RscText
		{
			idc=-1;
			x="33 * (0.025) + (0)";
			y="2.5 * (0.04) + (0)";
			w="4.5 * (0.025)";
			h="3.5 * (0.04)";
			colorBackground[]={0.71372598,0.85097998,0.99607801,1};
		};
		class RscText_1001: RscText
		{
			idc=-1;
			x="0 * (0.025) + (0)";
			y="20.5 * (0.04) + (0)";
			w="40 * (0.025)";
			h="4.5 * (0.04)";
			colorBackground[]={0,0.66666698,0.062745102,1};
		};
		class RscText_1003: RscText
		{
			idc=-1;
			x="0 * (0.025) + (0)";
			y="19 * (0.04) + (0)";
			w="40 * (0.025)";
			h="2 * (0.04)";
			colorBackground[]={0.50588202,0.82352901,0.12548999,1};
		};
		class RscText_1005: RscText
		{
			idc=-1;
			x="0 * (0.025) + (0)";
			y="22 * (0.04) + (0)";
			w="40 * (0.025)";
			h="3 * (0.04)";
			colorBackground[]={0.82352901,0.55686301,0.098039202,1};
		};
	};
	class controls
	{
		class Caption: RscStructuredText
		{
			idc=4001;
			text="<t font='RobotoCondensed' size='2' align='center' shadow='0'>TWINKLE<br/>TWISTER<br/>2000</t>";
			x="0 * (0.025) + (0)";
			y="2 * (0.04) + (0)";
			w="40 * (0.025)";
			h="6.5 * (0.04)";
			colorBackground[]={0,0,0,0};
		};
		class StartButton: RscExtremoTwinkleTwisterButton
		{
			idc=4002;
			text="Start Game";
			x="8 * (0.025) + (0)";
			y="10.5 * (0.04) + (0)";
			w="24 * (0.025)";
			h="3 * (0.04)";
			onMouseButtonClick="_this spawn Extremo_fnc_gui_twinkleTwister_event_onStartButtonClick";
			soundClick[]=
			{
				"\Extremo_Assets\sound\twinkle_twister_button_01",
				0.5,
				1
			};
		};
		class QuitButton: RscExtremoTwinkleTwisterButton
		{
			idc=4003;
			text="Quit";
			x="8 * (0.025) + (0)";
			y="14 * (0.04) + (0)";
			w="24 * (0.025)";
			h="3 * (0.04)";
			onMouseButtonClick="_this call Extremo_fnc_gui_twinkleTwister_event_onQuitButtonClick";
			soundClick[]=
			{
				"\Extremo_Assets\sound\twinkle_twister_button_02",
				0.5,
				1
			};
		};
		class InfoText: RscStructuredText
		{
			idc=4004;
			text="<t font='RobotoCondensed' size='0.75' align='center' shadow='0'>100 Pop Tabs per Game</t>";
			x="0 * (0.025) + (0)";
			y="23 * (0.04) + (0)";
			w="40 * (0.025)";
			h="1 * (0.04)";
			colorText[]={0.47451001,0.36862701,0.192157,1};
			colorBackground[]={0,0,0,0};
		};
		class GameText: RscStructuredText
		{
			idc=4005;
			x="0.29375 * safezoneW + safezoneX";
			y="0.291 * safezoneH + safezoneY";
			w="0.4125 * safezoneW";
			h="0.341 * safezoneH";
			colorBackground[]={0,0,0,0};
		};
	};
};
class RscExtremoUpgradeTerritoryDialog
{
	idd=20018;
	onLoad="uiNamespace setVariable ['RscExtremoUpgradeTerritoryDialog', _this select 0]";
	onUnload="call Extremo_fnc_gui_upgradeTerritoryDialog_event_onUnload; uiNamespace setVariable ['RscExtremoUpgradeTerritoryDialog', displayNull]";
	class controlsBackground
	{
		class DialogBackground: RscText
		{
			idc=-1;
			x="10 * (0.025) + (0)";
			y="6 * (0.04) + (0)";
			w="20 * (0.025)";
			h="14 * (0.04)";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
		class DialogCation: RscText
		{
			idc=-1;
			text="Upgrade Territory";
			x="10 * (0.025) + (0)";
			y="4.9 * (0.04) + (0)";
			w="20 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0.1,0.1,0.1,1};
		};
		class RadiusLabel: RscText
		{
			idc=-1;
			text="New Radius:";
			x="10.5 * (0.025) + (0)";
			y="11.5 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1 * (0.04)";
		};
		class RespectFeeLabel: RscText
		{
			idc=-1;
			text="Cost:";
			x="10.5 * (0.025) + (0)";
			y="15 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1 * (0.04)";
		};
		class LevelLabel: RscText
		{
			idc=-1;
			text="New Level:";
			x="10.5 * (0.025) + (0)";
			y="8 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1 * (0.04)";
		};
	};
	class controls
	{
		class TerritoryDropDown: RscCombo
		{
			idc=4000;
			onLBSelChanged="_this call Extremo_fnc_gui_upgradeTerritoryDialog_event_onTerritoryDropDownSelectionChanged";
			x="10.5 * (0.025) + (0)";
			y="6.5 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1 * (0.04)";
		};
		class CancelButton: RscButtonMenuCancel
		{
			idc=-1;
			action="closeDialog 0";
			x="23.5 * (0.025) + (0)";
			y="18.5 * (0.04) + (0)";
			w="6 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.80000001};
		};
		class UpgradeButton: RscButtonMenuOK
		{
			idc=4001;
			onMouseButtonClick="_this call Extremo_fnc_gui_upgradeTerritoryDialog_event_onUpgradeButtonClick";
			text="Upgrade";
			x="10.5 * (0.025) + (0)";
			y="18.5 * (0.04) + (0)";
			w="6 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.80000001};
		};
		class Cost: RscStructuredText
		{
			idc=4002;
			text="<t size='1.4'>0</t>";
			x="10.5 * (0.025) + (0)";
			y="16.5 * (0.04) + (0)";
			w="19 * (0.025)";
			h="2 * (0.04)";
			colorBackground[]={0,0,0,0};
		};
		class Radius: RscStructuredText
		{
			idc=4003;
			text="<t size='1.4'>30m</t>";
			x="10.5 * (0.025) + (0)";
			y="13 * (0.04) + (0)";
			w="19 * (0.025)";
			h="2 * (0.04)";
			colorBackground[]={0,0,0,0};
		};
		class Level: RscStructuredText
		{
			idc=4004;
			text="<t size='1.4'>2/10</t>";
			x="10.5 * (0.025) + (0)";
			y="9.5 * (0.04) + (0)";
			w="19 * (0.025)";
			h="2 * (0.04)";
			colorBackground[]={0,0,0,0};
		};
	};
};
class RscExtremoVehicleCustomsDialog
{
	idd=24008;
	onLoad="uiNamespace setVariable ['RscExtremoVehicleCustomsDialog', _this select 0]";
	onUnload="call Extremo_fnc_gui_vehicleCustomsDialog_event_onUnload; uiNamespace setVariable ['RscExtremoVehicleCustomsDialog', displayNull]";
	class controlsBackground
	{
		class DialogBackground: RscText
		{
			idc=1000;
			x="0.5 * safezoneW / 40 + safezoneX";
			y="0.5 * safezoneH / 25 + safezoneY";
			w="8 * safezoneW / 40";
			h="11.5 * safezoneH / 25";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
		class DialogTitle: RscText
		{
			idc=1001;
			text="Purchase Paintjob";
			x="1 * safezoneW / 40 + safezoneX";
			y="1 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="1 * safezoneH / 25";
			sizeEx="1 * safezoneH / 25";
		};
		class CancelBackground: RscText
		{
			idc=1002;
			x="0.5 * safezoneW / 40 + safezoneX";
			y="23 * safezoneH / 25 + safezoneY";
			w="8 * safezoneW / 40";
			h="1.5 * safezoneH / 25";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
	};
	class controls
	{
		class VehicleDropDown: RscCombo
		{
			idc=4000;
			x="1 * safezoneW / 40 + safezoneX";
			y="2.1 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.7 * safezoneH / 25";
			onLBSelChanged="_this call Extremo_fnc_gui_vehicleCustomsDialog_event_onVehicleDropDownSelectionChanged";
		};
		class SkinsListBox: RscExtremoItemListBox
		{
			idc=4001;
			x="1 * safezoneW / 40 + safezoneX";
			y="2.9 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="7 * safezoneH / 25";
			onLBSelChanged="_this call Extremo_fnc_gui_vehicleCustomsDialog_event_onSkinListBoxSelectionChanged";
		};
		class ButtonPurchase: RscButtonMenuOK
		{
			idc=4002;
			text="Purchase now";
			x="1 * safezoneW / 40 + safezoneX";
			y="10.5 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="1 * safezoneH / 25";
			sizeEx="0.75 * safezoneH / 25";
			onMouseButtonClick="_this call Extremo_fnc_gui_vehicleCustomsDialog_event_onPurchaseButtonClick";
			class Attributes: Attributes
			{
				align="center";
				valign="middle";
			};
		};
		class CancelButton: RscButtonMenuCancel
		{
			idc=4003;
			x="1 * safezoneW / 40 + safezoneX";
			y="23.5 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.5 * safezoneH / 25";
			action="closeDialog 0";
			class Attributes: Attributes
			{
				align="center";
			};
		};
	};
};
class RscExtremoVirtualGarageDialog
{
	idd=24036;
	onLoad="uiNamespace setVariable ['RscExtremoVirtualGarageDialog', _this select 0]";
	onUnload="call Extremo_fnc_gui_virtualGarageDialog_event_onUnload; uiNamespace setVariable ['RscExtremoVirtualGarageDialog', displayNull]";
	class controlsBackground
	{
		class DialogBackground: RscText
		{
			idc=4000;
			x="0.5 * safezoneW / 40 + safezoneX";
			y="0.5 * safezoneH / 25 + safezoneY";
			w="8 * safezoneW / 40";
			h="16.5 * safezoneH / 25";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
		class DialogTitle: RscText
		{
			idc=4003;
			text="Virtual Garage";
			x="1 * safezoneW / 40 + safezoneX";
			y="1 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="1 * safezoneH / 25";
			sizeEx="1 * safezoneH / 25";
		};
		class CancelBackground: RscText
		{
			idc=4004;
			x="0.5 * safezoneW / 40 + safezoneX";
			y="23 * safezoneH / 25 + safezoneY";
			w="8 * safezoneW / 40";
			h="1.5 * safezoneH / 25";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
	};
	class controls
	{
		class LocationDropDown: RscCombo
		{
			idc=4005;
			x="1 * safezoneW / 40 + safezoneX";
			y="2.1 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.7 * safezoneH / 25";
			onLBSelChanged="_this call Extremo_fnc_gui_virtualGarageDialog_event_onLocationChanged";
		};
		class VehiclesListBox: RscExtremoItemListBox
		{
			idc=4006;
			x="1 * safezoneW / 40 + safezoneX";
			y="2.9 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="7 * safezoneH / 25";
			onLBSelChanged="_this call Extremo_fnc_gui_virtualGarageDialog_event_onVehicleChanged";
		};
		class ButtonConfirm: RscButtonMenuOK
		{
			idc=4007;
			text="Retrieve Vehicle";
			x="1 * safezoneW / 40 + safezoneX";
			y="15.5 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="1 * safezoneH / 25";
			sizeEx="0.75 * safezoneH / 25";
			onMouseButtonClick="_this spawn Extremo_fnc_gui_virtualGarageDialog_event_onConfirmButtonClicked";
			class Attributes: Attributes
			{
				align="center";
				valign="middle";
			};
		};
		class CancelButton: RscButtonMenuCancel
		{
			idc=4009;
			x="1 * safezoneW / 40 + safezoneX";
			y="23.5 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.5 * safezoneH / 25";
			action="closeDialog 0";
			class Attributes: Attributes
			{
				align="center";
			};
		};
		class NicknameBox: RscEdit
		{
			idc=4010;
			x="1 * safezoneW / 40 + safezoneX";
			y="14.5 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.9 * safezoneH / 25";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
		class PinText: RscStructuredText
		{
			text="Vehicle Nickname";
			x="1 * safezoneW / 40 + safezoneX";
			y="13.8 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.8 * safezoneH / 25";
		};
		class Stat01Background: RscText
		{
			idc=4011;
			x="1 * safezoneW / 40 + safezoneX";
			y="10.5 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.7 * safezoneH / 25";
			colorBackground[]={0,0,0,0.5};
		};
		class Stat01Progress: RscProgress
		{
			idc=4012;
			x="1 * safezoneW / 40 + safezoneX";
			y="10.5 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.7 * safezoneH / 25";
			colorText[]={1,1,1,0.25};
			colorBackground[]={1,1,1,0.25};
		};
		class Stat01Label: RscText
		{
			idc=4013;
			text="";
			x="1 * safezoneW / 40 + safezoneX";
			y="10.5 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.7 * safezoneH / 25";
		};
		class Stat01Value: RscStructuredText
		{
			idc=4014;
			text="";
			style=1;
			x="1 * safezoneW / 40 + safezoneX";
			y="10.5 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.7 * safezoneH / 25";
			class Attributes: Attributes
			{
				align="right";
			};
		};
		class Stat02Background: RscText
		{
			idc=4015;
			x="1 * safezoneW / 40 + safezoneX";
			y="11.3 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.7 * safezoneH / 25";
			colorBackground[]={0,0,0,0.5};
		};
		class Stat02Progress: RscProgress
		{
			idc=4016;
			x="1 * safezoneW / 40 + safezoneX";
			y="11.3 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.7 * safezoneH / 25";
			colorText[]={1,1,1,0.25};
			colorBackground[]={1,1,1,0.25};
		};
		class Stat02Label: RscText
		{
			idc=4017;
			text="";
			x="1 * safezoneW / 40 + safezoneX";
			y="11.3 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.7 * safezoneH / 25";
		};
		class Stat02Value: RscStructuredText
		{
			idc=4018;
			text="";
			style=1;
			x="1 * safezoneW / 40 + safezoneX";
			y="11.3 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.7 * safezoneH / 25";
			class Attributes: Attributes
			{
				align="right";
			};
		};
		class Stat03Background: RscText
		{
			idc=4019;
			x="1 * safezoneW / 40 + safezoneX";
			y="12.1 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.7 * safezoneH / 25";
			colorBackground[]={0,0,0,0.5};
		};
		class Stat03Progress: RscProgress
		{
			idc=4020;
			x="1 * safezoneW / 40 + safezoneX";
			y="12.1 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.7 * safezoneH / 25";
			colorText[]={1,1,1,0.25};
			colorBackground[]={1,1,1,0.25};
		};
		class Stat03Label: RscText
		{
			idc=4021;
			text="";
			x="1 * safezoneW / 40 + safezoneX";
			y="12.1 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.7 * safezoneH / 25";
		};
		class Stat03Value: RscStructuredText
		{
			idc=4022;
			text="";
			style=1;
			x="1 * safezoneW / 40 + safezoneX";
			y="12.1 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.7 * safezoneH / 25";
			class Attributes: Attributes
			{
				align="right";
			};
		};
		class Stat04Background: RscText
		{
			idc=4023;
			x="1 * safezoneW / 40 + safezoneX";
			y="12.9 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.7 * safezoneH / 25";
			colorBackground[]={0,0,0,0.5};
		};
		class Stat04Progress: RscProgress
		{
			idc=4024;
			x="1 * safezoneW / 40 + safezoneX";
			y="12.9 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.7 * safezoneH / 25";
			colorText[]={1,1,1,0.25};
			colorBackground[]={1,1,1,0.25};
		};
		class Stat04Label: RscText
		{
			idc=4025;
			text="";
			x="1 * safezoneW / 40 + safezoneX";
			y="12.9 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.7 * safezoneH / 25";
		};
		class Stat04Value: RscStructuredText
		{
			idc=4026;
			text="";
			style=1;
			x="1 * safezoneW / 40 + safezoneX";
			y="12.9 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.7 * safezoneH / 25";
			class Attributes: Attributes
			{
				align="right";
			};
		};
	};
};
class RscExtremoWasteDumpDialog
{
	idd=24011;
	onLoad="uiNamespace setVariable ['RscExtremoWasteDumpDialog', _this select 0]";
	onUnload="call Extremo_fnc_gui_wasteDumpDialog_event_onUnload; uiNamespace setVariable ['RscExtremoWasteDumpDialog', displayNull]";
	class controlsBackground
	{
		class DialogBackground: RscText
		{
			idc=-1;
			x="10 * (0.025) + (0)";
			y="9 * (0.04) + (0)";
			w="20 * (0.025)";
			h="8 * (0.04)";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
		class DialogCation: RscText
		{
			idc=-1;
			text="Waste Dump";
			x="10 * (0.025) + (0)";
			y="7.9 * (0.04) + (0)";
			w="20 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0.1,0.1,0.1,1};
		};
		class RevenueLabel: RscText
		{
			idc=-1;
			text="Revenue:";
			x="10.5 * (0.025) + (0)";
			y="12 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1 * (0.04)";
		};
		class ModeLabel: RscText
		{
			idc=-1;
			text="What would you like to throw away?";
			x="10.5 * (0.025) + (0)";
			y="9.5 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1 * (0.04)";
		};
	};
	class controls
	{
		class ModeDropDown: RscCombo
		{
			idc=4002;
			x="10.5 * (0.025) + (0)";
			y="10.5 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1 * (0.04)";
			onLBSelChanged="_this call Extremo_fnc_gui_wasteDumpDialog_event_onModeDropDownSelectionChanged";
		};
		class RevenueValue: RscStructuredText
		{
			idc=4001;
			text="<t size='1.4'>0<img image='\Extremo_Assets\texture\ui\poptab_notification_ca.paa' size='1' shadow='true' /></t>";
			x="10.5 * (0.025) + (0)";
			y="13 * (0.04) + (0)";
			w="19 * (0.025)";
			h="1.5 * (0.04)";
			colorBackground[]={0,0,0,0};
		};
		class CancelButton: RscButtonMenuCancel
		{
			idc=-1;
			action="closeDialog 0";
			x="23.5 * (0.025) + (0)";
			y="15.5 * (0.04) + (0)";
			w="6 * (0.025)";
			h="1 * (0.04)";
		};
		class SellButton: RscButtonMenuOK
		{
			idc=4000;
			onMouseButtonClick="_this call Extremo_fnc_gui_wasteDumpDialog_event_onSellButtonClick";
			text="Adios!";
			x="10.5 * (0.025) + (0)";
			y="15.5 * (0.04) + (0)";
			w="6 * (0.025)";
			h="1 * (0.04)";
			colorText[]={1,1,1,1};
		};
	};
};
class RscGearTemplates
{
	class EmbossIcons
	{
		uniformTab="Extremo_Assets\texture\ui\inventory\uniform_ca.paa";
		vestTab="Extremo_Assets\texture\ui\inventory\vest_ca.paa";
		backpackTab="Extremo_Assets\texture\ui\inventory\backpack_ca.paa";
		headGearSlot="Extremo_Assets\texture\ui\inventory\headgear_ca.paa";
		gogglesSlot="Extremo_Assets\texture\ui\inventory\goggles_ca.paa";
		hmdSlot="Extremo_Assets\texture\ui\inventory\nvgs_ca.paa";
		binocSlot="Extremo_Assets\texture\ui\inventory\binoculars_ca.paa";
		primarySlot="Extremo_Assets\texture\ui\inventory\primaryweapon_ca.paa";
		secondarySlot="Extremo_Assets\texture\ui\inventory\secondaryweapon_ca.paa";
		handgunSlot="Extremo_Assets\texture\ui\inventory\handgun_ca.paa";
		muzzleSlot="Extremo_Assets\texture\ui\inventory\itemmuzzle_ca.paa";
		opticsSlot="Extremo_Assets\texture\ui\inventory\itemoptic_ca.paa";
		flashlightSlot="Extremo_Assets\texture\ui\inventory\itemacc_ca.paa";
		magazineSlot="Extremo_Assets\texture\ui\inventory\cargomag_ca.paa";
		magazineGLSlot="Extremo_Assets\texture\ui\inventory\cargoput_ca.paa";
		underBarrelSlot="Extremo_Assets\texture\ui\inventory\itembipod_ca.paa";
		mapSlot="Extremo_Assets\texture\ui\inventory\map_ca.paa";
		compassSlot="Extremo_Assets\texture\ui\inventory\compass_ca.paa";
		watchSlot="Extremo_Assets\texture\ui\inventory\watch_ca.paa";
		radioSlot="Extremo_Assets\texture\ui\inventory\radio_ca.paa";
		gpsSlot="Extremo_Assets\texture\ui\inventory\gps_ca.paa";
	};
};
class RscInGameUI
{
	class RscUnitInfo
	{
		class WeaponInfoControlsGroupLeft: RscControlsGroup
		{
			show=0;
			y=-1;
		};
		class WeaponInfoControlsGroupRight: RscControlsGroup
		{
			show=0;
			y=-1;
		};
		class CA_BackgroundVehicle: RscPicture
		{
			show=0;
			y=-1;
		};
		class CA_BackgroundVehicleTitle: RscText
		{
			show=0;
			y=-1;
		};
		class CA_BackgroundVehicleTitleDark: RscText
		{
			show=0;
			y=-1;
		};
		class CA_BackgroundFuel: RscPicture
		{
			show=0;
			y=-1;
		};
		class CA_Vehicle: RscText
		{
			show=0;
			y=-1;
		};
		class CA_VehicleRole: RscPicture
		{
			show=0;
			y=-1;
		};
		class CA_ValueFuel: RscProgress
		{
			show=0;
			y=-1;
		};
		class CA_SpeedBackground: RscText
		{
			show=0;
			y=-1;
		};
		class CA_Speed: RscText
		{
			show=0;
			y=-1;
		};
		class CA_SpeedUnits: RscText
		{
			show=0;
			y=-1;
		};
		class CA_AltBackground: RscText
		{
			show=0;
			y=-1;
		};
		class CA_Alt: RscText
		{
			show=0;
			y=-1;
		};
		class CA_AltUnits: RscText
		{
			show=0;
			y=-1;
		};
		class CA_Depth: RscText
		{
			show=0;
			y=-1;
		};
		class CA_HitZones: RscHitZones
		{
			show=0;
			y=-1;
		};
		class CA_VehicleTogglesBackground: RscText
		{
			show=0;
			y=-1;
		};
		class CA_VehicleToggles: RscVehicleToggles
		{
			show=0;
			y=-1;
		};
		class CA_Zeroing: RscText
		{
			show=0;
			y=-1;
		};
		class CA_TextFlaresMode: RscIGUIText
		{
			show=0;
			y=-1;
		};
		class CA_TextFlares: RscIGUIValue
		{
			show=0;
			y=-1;
		};
		class CA_Throttle: RscText
		{
			show=0;
			y=-1;
		};
	};
	class RscStanceInfo
	{
		show=0;
		y=-1;
		class StanceIndicatorBackground: RscPicture
		{
			show=0;
			y=-1;
		};
		class StanceIndicator: RscPictureKeepAspect
		{
			show=0;
			y=-1;
		};
	};
	class RscWeaponZeroing: RscUnitInfo
	{
		class CA_Zeroing: RscText
		{
			show=0;
			y=-1;
		};
	};
	class RscWeaponRangeZeroing: RscUnitInfo
	{
		class CA_DistanceText: RscOpticsText
		{
			show=0;
			y=-1;
		};
		class CA_Distance: RscOpticsValue
		{
			show=0;
			y=-1;
		};
	};
	class RscHint
	{
		idd=301;
		movingEnable=0;
		controls[]=
		{
			"Background",
			"BackgroundNew",
			"Hint"
		}; 
		class BackgroundNew: RscPictureKeepAspect
		{
			idc=100;
			x="(safeZoneX + safeZoneW * 0.4484) - 0.125";
			y="safeZoneY + 40 * pixelH";
			w="0.5";
			h="0.10";
			shadow=0;
			show="true";
			colorText[]={1,1,1,1};
			text="\Extremo_Assets\texture\hud\hud_panel_hint_ca.paa";
		};
		class Background: RscText
		{
			idc=101;
			x="-1";y="-1";
			w="0";h="0";
			colorBackground[]={"0","0","0",0};
		};
		class Hint: RscStructuredText
		{
			idc=102;
			x="(safeZoneX + safeZoneW * 0.444)";
			y="safeZoneY + 62 * pixelH";
			w="0.27";
			h="0.05";
			text="";
			colorText[]={1,1,1,1};
			font="RobotoCondensed";
			sizeEx="0.026";
			show="true";
		};
	};
	class RscUnitInfoAirNoWeapon: RscUnitInfo
	{
		class CA_VehicleToggles: RscVehicleToggles
		{
			show=0;
			y=-1;
		};
		class CA_Throttle: RscText
		{
			show=0;
			y=-1;
		};
	};
	class RscUnitInfoAir: RscUnitInfoAirNoWeapon
	{
		class CA_VehicleToggles: RscVehicleToggles
		{
			show=0;
			y=-1;
		};
		class CA_Throttle: RscText
		{
			show=0;
			y=-1;
		};
	};
	class RscUnitInfoAirPlaneNoWeapon: RscUnitInfoAirNoWeapon
	{
		class CA_VehicleToggles: RscVehicleToggles
		{
			show=0;
			y=-1;
		};
		class CA_Throttle: RscText
		{
			show=0;
			y=-1;
		};
	};
	class RscUnitInfoAirPlane: RscUnitInfoAirPlaneNoWeapon
	{
		class CA_VehicleToggles: RscVehicleToggles
		{
			show=0;
			y=-1;
		};
		class CA_Throttle: RscText
		{
			show=0;
			y=-1;
		};
	};
};
class RscExtremoMostWantedDialog
{
	idd="IDD_Extremo_MOST_WANTED_DIALOG";
	onLoad="uiNamespace setVariable ['RscExtremoMostWantedDialog', _this select 0]";
	onUnload="call Extremo_fnc_gui_mostWantedDialog_event_onUnload; uiNamespace setVariable ['RscExtremoMostWantedDialog', displayNull]";
	class controlsBackground
	{
		class DialogBackgroundRight: RscText
		{
			idc=1002;
			x="0 * (0.025) + (0)";
			y="1 * (0.04) + (0)";
			w="40 * (0.025)";
			h="24 * (0.04)";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
		class DialogCaptionRight: RscText
		{
			idc=1003;
			text="MOST WANTED";
			x="0 * (0.025) + (0)";
			y="-0.1 * (0.04) + (0)";
			w="40 * (0.025)";
			h="1 * (0.04)";
			colorBackground[]={0.1,0.1,0.1,1};
		};
	};
	class controls
	{
		class CloseCross: RscActiveText
		{
			idc=3032;
			x="42.8 * (0.025) + (0)";
			y="0.2 * (0.04) + (0)";
			w="1 * (0.025)";
			h="0.5 * (0.04)";
			action="closeDialog 0;";
			style=2096;
			color[]={1,1,1,0.69999999};
			colorText[]={1,1,1,0.69999999};
			colorActive[]={1,1,1,1};
			tooltip="Close";
			text="\A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
		};
		class CancelButton: RscButtonMenuCancel
		{
			x="28.5 * (0.025) + (0)";
			y="23.5 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
			action="closeDialog 0";
		};
		class BountyListBox: RscListBox
		{
			idc=1500;
			x="0.5 * (0.025) + (0)";
			y="1.5 * (0.04) + (0)";
			w="27.5 * (0.025)";
			h="23 * (0.04)";
		};
		class PlayerLabel: RscText
		{
			idc=1004;
			text="Player Name:";
			x="28.5 * (0.025) + (0)";
			y="1.5 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
		};
		class PlayerDropdown: RscCombo
		{
			idc=2100;
			x="28.5 * (0.025) + (0)";
			y="2.5 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
		};
		class BountyDropdown: RscCombo
		{
			idc=2101;
			x="28.5 * (0.025) + (0)";
			y="5 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
		};
		class BountyLabel: RscText
		{
			idc=1005;
			text="Bounty:";
			x="28.5 * (0.025) + (0)";
			y="4 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
		};
		class AddBountyButton: RscButtonMenu
		{
			idc=2400;
			text="ADD BOUNTY";
			x="28.5 * (0.025) + (0)";
			y="7 * (0.04) + (0)";
			w="11 * (0.025)";
			h="1 * (0.04)";
		};
	};
};
class RscPendingInvitation
{
	textureConnectionQualityPoor="\Extremo_Assets\texture\hud\hud_icon_connection_yellow_ca.paa";
	textureConnectionQualityBad="\Extremo_Assets\texture\hud\hud_icon_connection_red_ca.paa";
	textureDesyncLow="\Extremo_Assets\texture\hud\hud_icon_connection_yellow_ca.paa";
	textureDesyncHigh="\Extremo_Assets\texture\hud\hud_icon_connection_red_ca.paa";
	color[]={1,1,1,1};
	x="(safeZoneX + safeZoneW) - 60 * pixelW - 64 * pixelW";
	y="(safeZoneY + safeZoneH) - 455 * pixelH - 64 * pixelH";
	w="64 * pixelW";
	h="64 * pixelH";
	shadow=0;
	timeout=10;
	blinkingPeriod=2;
};
class RscPendingInvitationInGame
{
	textureConnectionQualityPoor="\Extremo_Assets\texture\hud\hud_icon_connection_yellow_ca.paa";
	textureConnectionQualityBad="\Extremo_Assets\texture\hud\hud_icon_connection_red_ca.paa";
	textureDesyncLow="\Extremo_Assets\texture\hud\hud_icon_connection_yellow_ca.paa";
	textureDesyncHigh="\Extremo_Assets\texture\hud\hud_icon_connection_red_ca.paa";
	color[]={1,1,1,1};
	x="(safeZoneX + safeZoneW) - 60 * pixelW - 64 * pixelW";
	y="(safeZoneY + safeZoneH) - 540 * pixelH - 64 * pixelH";
	w="64 * pixelW";
	h="64 * pixelH";
	shadow=0;
	timeout=10;
	blinkingPeriod=2;
};

//--- Extremo NEW
class RscExtremo_LockScreen
{
	idd = 1100;
	movingEnabled = 0;
	enableSimulation = 1;
    
    //https://community.bistudio.com/wiki/User_Interface_Event_Handlers#onLoad
	onLoad="[_this,'onLoad'] call Extremo_fnc_gui_lockScreenEH";
	onUnload="[_this,'onUnload'] call Extremo_fnc_gui_lockScreenEH";
	onKeyUp="[_this,'onKeyUp'] call Extremo_fnc_gui_lockScreenEH";
	onKeyDown="[_this,'onKeyDown'] call Extremo_fnc_gui_lockScreenEH";
	class controlsBackground
	{
		class Background: RscPicture
		{
			text="\Extremo_Assets\texture\ui\codeLock\code_background.paa";
			x="0.322396 * safezoneW + safezoneX";
			y="0.225 * safezoneH + safezoneY";
			w="0.355208 * safezoneW";
			h="0.55 * safezoneH";
		};
	};
	class controls
	{
		class NumFake: RscButton
		{
			idc=4013;
			x="1 * safezoneW + safezoneX";
			y="1 * safezoneH + safezoneY";
			w="0 * safezoneW";
			h="0 * safezoneH";
		};
		class Num0: RscButton
		{
			idc=4003;
			x="0.399167 * safezoneW + safezoneX";
			y="0.6694 * safezoneH + safezoneY";
			w="0.0378126 * safezoneW";
			h="0.0572 * safezoneH";
			colorBackground[]={0.098039202,0.098039202,0.098039202,0};
			colorBackgroundActive[]={0.098039202,0.098039202,0.098039202,0.60000002};
            colorFocused[]= {0, 0, 0, 0};
			onMouseButtonClick="[_this,'onMouseButtonClick',0] call Extremo_fnc_gui_lockScreenEH";
		};
		class Num1: RscButton
		{
			idc=4004;
			x="0.351042 * safezoneW + safezoneX";
			y="0.4494 * safezoneH + safezoneY";
			w="0.0378126 * safezoneW";
			h="0.0572 * safezoneH";
			colorBackground[]={0.098039202,0.098039202,0.098039202,0};
			colorBackgroundActive[]={0.098039202,0.098039202,0.098039202,0.60000002};
            colorFocused[]= {0, 0, 0, 0};
			onMouseButtonClick="[_this,'onMouseButtonClick',1] call Extremo_fnc_gui_lockScreenEH";
		};
		class Num2: RscButton
		{
			idc=4005;
			x="0.399167 * safezoneW + safezoneX";
			y="0.4494 * safezoneH + safezoneY";
			w="0.0378126 * safezoneW";
			h="0.0572 * safezoneH";
			colorBackground[]={0.098039202,0.098039202,0.098039202,0};
			colorBackgroundActive[]={0.098039202,0.098039202,0.098039202,0.60000002};
            colorFocused[]= {0, 0, 0, 0};
			onMouseButtonClick="[_this,'onMouseButtonClick',2] call Extremo_fnc_gui_lockScreenEH";
		};
		class Num3: RscButton
		{
			idc=4006;
			x="0.447291 * safezoneW + safezoneX";
			y="0.4494 * safezoneH + safezoneY";
			w="0.0378126 * safezoneW";
			h="0.0572 * safezoneH";
			colorBackground[]={0.098039202,0.098039202,0.098039202,0};
			colorBackgroundActive[]={0.098039202,0.098039202,0.098039202,0.60000002};
            colorFocused[]= {0, 0, 0, 0};
			onMouseButtonClick="[_this,'onMouseButtonClick',3] call Extremo_fnc_gui_lockScreenEH";
		};
		class Num4: RscButton
		{
			idc=4007;
			x="0.351042 * safezoneW + safezoneX";
			y="0.5242 * safezoneH + safezoneY";
			w="0.0378126 * safezoneW";
			h="0.0572 * safezoneH";
			colorBackground[]={0.098039202,0.098039202,0.098039202,0};
			colorBackgroundActive[]={0.098039202,0.098039202,0.098039202,0.60000002};
            colorFocused[]= {0, 0, 0, 0};
			onMouseButtonClick="[_this,'onMouseButtonClick',4] call Extremo_fnc_gui_lockScreenEH";
		};
		class Num5: RscButton
		{
			idc=4008;
			x="0.399167 * safezoneW + safezoneX";
			y="0.5242 * safezoneH + safezoneY";
			w="0.0378126 * safezoneW";
			h="0.0572 * safezoneH";
			colorBackground[]={0.098039202,0.098039202,0.098039202,0};
			colorBackgroundActive[]={0.098039202,0.098039202,0.098039202,0.60000002};
            colorFocused[]= {0, 0, 0, 0};
			onMouseButtonClick="[_this,'onMouseButtonClick',5] call Extremo_fnc_gui_lockScreenEH";
		};
		class Num6: RscButton
		{
			idc=4009;
			x="0.446145 * safezoneW + safezoneX";
			y="0.5242 * safezoneH + safezoneY";
			w="0.0378126 * safezoneW";
			h="0.0572 * safezoneH";
			colorBackground[]={0.098039202,0.098039202,0.098039202,0};
			colorBackgroundActive[]={0.098039202,0.098039202,0.098039202,0.60000002};
            colorFocused[]= {0, 0, 0, 0};
			onMouseButtonClick="[_this,'onMouseButtonClick',6] call Extremo_fnc_gui_lockScreenEH";
		};
		class Num7: RscButton
		{
			idc=4010;
			x="0.351042 * safezoneW + safezoneX";
			y="0.5968 * safezoneH + safezoneY";
			w="0.0378126 * safezoneW";
			h="0.0572 * safezoneH";
			colorBackground[]={0.098039202,0.098039202,0.098039202,0};
			colorBackgroundActive[]={0.098039202,0.098039202,0.098039202,0.60000002};
            colorFocused[]= {0, 0, 0, 0};
			onMouseButtonClick="[_this,'onMouseButtonClick',7] call Extremo_fnc_gui_lockScreenEH";
		};
		class Num8: RscButton
		{
			idc=4011;
			x="0.399167 * safezoneW + safezoneX";
			y="0.5968 * safezoneH + safezoneY";
			w="0.0378126 * safezoneW";
			h="0.0572 * safezoneH";
			colorBackground[]={0.098039202,0.098039202,0.098039202,0};
			colorBackgroundActive[]={0.098039202,0.098039202,0.098039202,0.60000002};
            colorFocused[]= {0, 0, 0, 0};
			onMouseButtonClick="[_this,'onMouseButtonClick',8] call Extremo_fnc_gui_lockScreenEH";
		};
		class Num9: RscButton
		{
			idc=4012;
			x="0.446145 * safezoneW + safezoneX";
			y="0.5968 * safezoneH + safezoneY";
			w="0.0378126 * safezoneW";
			h="0.0572 * safezoneH";
			colorBackground[]={0.098039202,0.098039202,0.098039202,0};
			colorBackgroundActive[]={0.098039202,0.098039202,0.098039202,0.60000002};
            colorFocused[]= {0, 0, 0, 0};
			onMouseButtonClick="[_this,'onMouseButtonClick',9] call Extremo_fnc_gui_lockScreenEH";
		};
		class Confirm: RscButton
		{
			idc=4000;
			x="0.351042 * safezoneW + safezoneX";
			y="0.6694 * safezoneH + safezoneY";
			w="0.0378126 * safezoneW";
			h="0.0572 * safezoneH";
			colorBackground[]={0.098039202,0.098039202,0.098039202,0};
			colorBackgroundActive[]={0.098039202,0.098039202,0.098039202,0.60000002};
            colorFocused[]= {0, 0, 0, 0};
			colorDisabled[]={1,1,1,0.40000001};
			onMouseButtonClick="[_this,'onMouseButtonClick',true] call Extremo_fnc_gui_lockScreenEH";
		};
		class Cancel: RscButton
		{
			idc=4002;
			x="0.446145 * safezoneW + safezoneX";
			y="0.6694 * safezoneH + safezoneY";
			w="0.0378126 * safezoneW";
			h="0.0572 * safezoneH";
			colorBackground[]={0.098039202,0.098039202,0.098039202,0};
			colorBackgroundActive[]={0.098039202,0.098039202,0.098039202,0.60000002};
            colorFocused[]= {0, 0, 0, 0};
			onMouseButtonClick="[_this,'onMouseButtonClick',false] call Extremo_fnc_gui_lockScreenEH";
		};
		class Screen: RscText
		{
			idc=4001;
			text="";
			colorText[]={0.070588201,0.133333,0.094117597,0.80000001};
			font="RobotoCondensed";
			style=2;
			x="0 * (0.025) + (0)";
			y="1.5 * (0.04) + (0)";
			w="40 * (0.025)";
			h="6 * (0.04)";
			sizeEx="2 * (0.04)";
			shadow=0;
		};
	};
};
class RscExtremo_LockScreenScan
{
	idd=1110;
	onLoad="uiNamespace setVariable ['RscExtremoKeypadScanDialog', _this select 0]";
	onUnload="call Extremo_fnc_gui_keypadScanDialog_event_onUnload; uiNamespace setVariable ['RscExtremoKeypadScanDialog', displayNull]";
	class controlsBackground
	{ 
		class backgroundCold: RscPicture
		{
			idc=4000;
			text="\Extremo_Assets\texture\ui\codeLock\background_cold_co.paa";
			x="0.322396 * safezoneW + safezoneX";
			y="0.225 * safezoneH + safezoneY";
			w="0.355208 * safezoneW";
			h="0.55 * safezoneH";
		};
		class backgroundHot: RscPicture
		{
			idc=4001;
			text="\Extremo_Assets\texture\ui\codeLock\background_hot_co.paa";
			x="0.322396 * safezoneW + safezoneX";
			y="0.225 * safezoneH + safezoneY";
			w="0.355208 * safezoneW";
			h="0.55 * safezoneH";
		};
	};
	class controls
	{
		class finger0: RscPictureKeepAspect
		{
			idc=4011;
			text="\Extremo_Assets\texture\ui\codeLock\finger_ca.paa";
			x="0.399167 * safezoneW + safezoneX";
			y="0.6694 * safezoneH + safezoneY";
			w="0.0378126 * safezoneW";
			h="0.0572 * safezoneH";
		};
		class finger1: RscPictureKeepAspect
		{
			idc=4002;
			text="\Extremo_Assets\texture\ui\codeLock\finger_ca.paa";
			x="0.351042 * safezoneW + safezoneX";
			y="0.4494 * safezoneH + safezoneY";
			w="0.0378126 * safezoneW";
			h="0.0572 * safezoneH";
		};
		class finger2: RscPictureKeepAspect
		{
			idc=4003;
			text="\Extremo_Assets\texture\ui\codeLock\finger_ca.paa";
			x="0.399167 * safezoneW + safezoneX";
			y="0.4494 * safezoneH + safezoneY";
			w="0.0378126 * safezoneW";
			h="0.0572 * safezoneH";
		};
		class finger3: RscPictureKeepAspect
		{
			idc=4004;
			text="\Extremo_Assets\texture\ui\codeLock\finger_ca.paa";
			x="0.447291 * safezoneW + safezoneX";
			y="0.4494 * safezoneH + safezoneY";
			w="0.0378126 * safezoneW";
			h="0.0572 * safezoneH";
		};
		class finger4: RscPictureKeepAspect
		{
			idc=4005;
			text="\Extremo_Assets\texture\ui\codeLock\finger_ca.paa";
			x="0.351042 * safezoneW + safezoneX";
			y="0.5242 * safezoneH + safezoneY";
			w="0.0378126 * safezoneW";
			h="0.0572 * safezoneH";
		};
		class finger5: RscPictureKeepAspect
		{
			idc=4006;
			text="\Extremo_Assets\texture\ui\codeLock\finger_ca.paa";
			x="0.399167 * safezoneW + safezoneX";
			y="0.5242 * safezoneH + safezoneY";
			w="0.0378126 * safezoneW";
			h="0.0572 * safezoneH";
		};
		class finger6: RscPictureKeepAspect
		{
			idc=4007;
			text="\Extremo_Assets\texture\ui\codeLock\finger_ca.paa";
			x="0.446145 * safezoneW + safezoneX";
			y="0.5242 * safezoneH + safezoneY";
			w="0.0378126 * safezoneW";
			h="0.0572 * safezoneH";
		};
		class finger7: RscPictureKeepAspect
		{
			idc=4008;
			text="\Extremo_Assets\texture\ui\codeLock\finger_ca.paa";
			x="0.351042 * safezoneW + safezoneX";
			y="0.5968 * safezoneH + safezoneY";
			w="0.0378126 * safezoneW";
			h="0.0572 * safezoneH";
		};
		class finger8: RscPictureKeepAspect
		{
			idc=4009;
			text="\Extremo_Assets\texture\ui\codeLock\finger_ca.paa";
			x="0.399167 * safezoneW + safezoneX";
			y="0.5968 * safezoneH + safezoneY";
			w="0.0378126 * safezoneW";
			h="0.0572 * safezoneH";
		};
		class finger9: RscPictureKeepAspect
		{
			idc=4010;
			text="\Extremo_Assets\texture\ui\codeLock\finger_ca.paa";
			x="0.446145 * safezoneW + safezoneX";
			y="0.5968 * safezoneH + safezoneY";
			w="0.0378126 * safezoneW";
			h="0.0572 * safezoneH";
		};
	};
};
class RscExtremo_VehicleTraderScreen
{
	idd=24008;
	onLoad="['onLoad',_this] spawn Extremo_fnc_gui_vehicleTraderScreenEH";
	onUnload="['onUnload',_this] spawn Extremo_fnc_gui_vehicleTraderScreenEH";
	class controlsBackground
	{
		class DialogBackground: RscText
		{
			idc=1000;
			x="0.5 * safezoneW / 40 + safezoneX";
			y="0.5 * safezoneH / 25 + safezoneY";
			w="8 * safezoneW / 40";
			h="16.5 * safezoneH / 25";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
		class DialogTitle: RscText
		{
			idc=1001;
			text="Purchase Vehicle";
			x="1 * safezoneW / 40 + safezoneX";
			y="1 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="1 * safezoneH / 25";
			sizeEx="1 * safezoneH / 25";
		};
		class CancelBackground: RscText
		{
			idc=1006;
			x="0.5 * safezoneW / 40 + safezoneX";
			y="23 * safezoneH / 25 + safezoneY";
			w="8 * safezoneW / 40";
			h="1.5 * safezoneH / 25";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
	};
	class controls
	{
		class CategoryDropDown: RscCombo
		{
			idc=4000;
			x="1 * safezoneW / 40 + safezoneX";
			y="2.1 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.7 * safezoneH / 25";
			onLBSelChanged="['onCategoryDropDownSelectionChanged',_this] spawn Extremo_fnc_gui_vehicleTraderScreenEH";
		};
		class VehiclesListBox: RscExtremoItemListBox
		{
			idc=4001;
			x="1 * safezoneW / 40 + safezoneX";
			y="2.9 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="7 * safezoneH / 25";
			onLBSelChanged="['onVehicleListBoxSelectionChanged',_this] spawn Extremo_fnc_gui_vehicleTraderScreenEH";
		};
		class ButtonPurchase: RscButtonMenuOK
		{
			idc=4002;
			text="Purchase now";
			x="1 * safezoneW / 40 + safezoneX";
			y="15.5 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="1 * safezoneH / 25";
			sizeEx="0.75 * safezoneH / 25";
			onMouseButtonClick="['onPurchaseButtonClick',_this] spawn Extremo_fnc_gui_vehicleTraderScreenEH";
			class Attributes: Attributes
			{
				align="center";
				valign="middle";
			};
		};
		class CancelButton: RscButtonMenuCancel
		{
			idc=4006;
			x="1 * safezoneW / 40 + safezoneX";
			y="23.5 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.5 * safezoneH / 25";
			action="closeDialog 0";
			class Attributes: Attributes
			{
				align="center";
			};
		};
		class PinBox: RscEdit
		{
			idc=4008;
			x="1 * safezoneW / 40 + safezoneX";
			y="14.5 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.9 * safezoneH / 25";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
			onChar="['onPinBoxChar',_this] spawn Extremo_fnc_gui_vehicleTraderScreenEH";
		};
		class PinText: RscStructuredText
		{
			text="Pin Code:";
			x="1 * safezoneW / 40 + safezoneX";
			y="13.8 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.8 * safezoneH / 25";
		};
		class Stat01Background: RscText
		{
			idc=6000;
			x="1 * safezoneW / 40 + safezoneX";
			y="10.5 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.7 * safezoneH / 25";
			colorBackground[]={0,0,0,0.5};
		};
		class Stat01Progress: RscProgress
		{
			idc=6001;
			x="1 * safezoneW / 40 + safezoneX";
			y="10.5 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.7 * safezoneH / 25";
			colorText[]={1,1,1,0.25};
			colorBackground[]={1,1,1,0.25};
		};
		class Stat01Label: RscText
		{
			idc=6002;
			text="";
			x="1 * safezoneW / 40 + safezoneX";
			y="10.5 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.7 * safezoneH / 25";
		};
		class Stat01Value: RscStructuredText
		{
			idc=6003;
			text="";
			style=1;
			x="1 * safezoneW / 40 + safezoneX";
			y="10.5 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.7 * safezoneH / 25";
			class Attributes: Attributes
			{
				align="right";
			};
		};
		class Stat02Background: RscText
		{
			idc=6004;
			x="1 * safezoneW / 40 + safezoneX";
			y="11.3 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.7 * safezoneH / 25";
			colorBackground[]={0,0,0,0.5};
		};
		class Stat02Progress: RscProgress
		{
			idc=6005;
			x="1 * safezoneW / 40 + safezoneX";
			y="11.3 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.7 * safezoneH / 25";
			colorText[]={1,1,1,0.25};
			colorBackground[]={1,1,1,0.25};
		};
		class Stat02Label: RscText
		{
			idc=6006;
			text="";
			x="1 * safezoneW / 40 + safezoneX";
			y="11.3 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.7 * safezoneH / 25";
		};
		class Stat02Value: RscStructuredText
		{
			idc=6007;
			text="";
			style=1;
			x="1 * safezoneW / 40 + safezoneX";
			y="11.3 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.7 * safezoneH / 25";
			class Attributes: Attributes
			{
				align="right";
			};
		};
		class Stat03Background: RscText
		{
			idc=6008;
			x="1 * safezoneW / 40 + safezoneX";
			y="12.1 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.7 * safezoneH / 25";
			colorBackground[]={0,0,0,0.5};
		};
		class Stat03Progress: RscProgress
		{
			idc=6009;
			x="1 * safezoneW / 40 + safezoneX";
			y="12.1 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.7 * safezoneH / 25";
			colorText[]={1,1,1,0.25};
			colorBackground[]={1,1,1,0.25};
		};
		class Stat03Label: RscText
		{
			idc=6010;
			text="";
			x="1 * safezoneW / 40 + safezoneX";
			y="12.1 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.7 * safezoneH / 25";
		};
		class Stat03Value: RscStructuredText
		{
			idc=6011;
			text="";
			style=1;
			x="1 * safezoneW / 40 + safezoneX";
			y="12.1 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.7 * safezoneH / 25";
			class Attributes: Attributes
			{
				align="right";
			};
		};
		class Stat04Background: RscText
		{
			idc=6012;
			x="1 * safezoneW / 40 + safezoneX";
			y="12.9 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.7 * safezoneH / 25";
			colorBackground[]={0,0,0,0.5};
		};
		class Stat04Progress: RscProgress
		{
			idc=6013;
			x="1 * safezoneW / 40 + safezoneX";
			y="12.9 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.7 * safezoneH / 25";
			colorText[]={1,1,1,0.25};
			colorBackground[]={1,1,1,0.25};
		};
		class Stat04Label: RscText
		{
			idc=6014;
			text="";
			x="1 * safezoneW / 40 + safezoneX";
			y="12.9 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.7 * safezoneH / 25";
		};
		class Stat04Value: RscStructuredText
		{
			idc=6015;
			text="";
			style=1;
			x="1 * safezoneW / 40 + safezoneX";
			y="12.9 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.7 * safezoneH / 25";
			class Attributes: Attributes
			{
				align="right";
			};
		};
	};
};


//--- Titles
class RscTitles
{
	class RscExtremoRussianRoulette
	{
		idd=24031;
		duration=999999;
		fadein=1;
		fadeout=1;
		onLoad="uiNamespace setVariable ['RscExtremoRussianRoulette', _this select 0];";
		onUnload="uiNamespace setVariable ['RscExtremoRussianRoulette', displayNull]";
		class controls
		{
			class PotBackground: RscText
			{
				idc=4000;
				x="safeZoneX + 30 * pixelW";
				y="safeZoneY + 30 * pixelH";
				w="250 * pixelW";
				h="70 * pixelH";
				colorBackground[]={0.074509799,0.086274497,0.105882,0.80000001};
			};
			class PotValue: RscStructuredText
			{
				idc=4007;
				text="<t size='1.6' font='RobotoCondensed' align='center' shadow='false'>10,000<t color='#3fd4fc'><img image='\Extremo_Assets\texture\ui\poptab_notification_ca.paa' size='1' shadow='false' /></t></t>";
				x="safeZoneX + 30 * pixelW";
				y="safeZoneY + (30+17) * pixelH";
				w="250 * pixelW";
				h="70 * pixelH";
				colorBackground[]={0,0,0,0};
			};
			class InfoWindow: RscText
			{
				idc=4001;
				x="safeZoneX + 30 * pixelW";
				y="safeZoneY + (30+70+5) * pixelH";
				w="250 * pixelW";
				h="180 * pixelH";
				colorBackground[]={0.074509799,0.086274497,0.105882,0.80000001};
			};
			class PlayerList: RscStructuredText
			{
				idc=4006;
				text="<t shadow='false'><t color='#3fd4fc'>Player 1</t><br/><t>Player 2</t><br/><t color='#808080'>Player 2</t><br/><t>Player 4</t><br/><t color='#808080'>(open)</t><br/><t color='#808080'>(open)</t></t>";
				x="safeZoneX + (30+2) * pixelW";
				y="safeZoneY + (30+70+5+5) * pixelH";
				w="(250-2) * pixelW";
				h="(180-5) * pixelH";
				colorBackground[]={0,0,0,0};
			};
			class ShotBackground: RscText
			{
				idc=4002;
				x="safeZoneX + safeZoneW * 0.5 - 45 * pixelW";
				y="safezoneY + 30 * pixelH";
				w="90 * pixelW";
				h="70 * pixelH";
				colorBackground[]={0.074509799,0.086274497,0.105882,0.80000001};
			};
			class ShotValue: RscStructuredText
			{
				idc=4008;
				text="<t align='center' size='2' color='#ffffff' shadow='false' font='RobotoCondensed'>1</t>";
				x="safeZoneX + safeZoneW * 0.5 - 45 * pixelW";
				y="safeZoneY + 30 * pixelH";
				w="90 * pixelW";
				h="70 * pixelH";
				colorBackground[]={0,0,0,0};
			};
			class ShotLabel: RscStructuredText
			{
				idc=4005;
				text="<t align='center' size='0.75' color='#3fd4fc' font='RobotoCondensed' shadow='false'>SHOT</t>";
				x="safeZoneX + safeZoneW * 0.5 - 45 * pixelW";
				y="safezoneY + (30+45) * pixelH";
				w="90 * pixelW";
				h="25 * pixelH";
				colorBackground[]={0,0,0,0};
			};
			class TimeBackground: RscText
			{
				idc=4004;
				x="safeZoneX + safeZoneW * 0.5 - 45 * pixelW";
				y="safezoneY + (30+70+5) * pixelH";
				w="90 * pixelW";
				h="25 * pixelH";
				colorBackground[]={0.074509799,0.086274497,0.105882,0.80000001};
			};
			class TimeValue: RscStructuredText
			{
				idc=4009;
				text="<t align='center' size='0.7' color='#ffffff' shadow='false' font='RobotoCondensed'>00.000</t>";
				x="safeZoneX + safeZoneW * 0.5 - 45 * pixelW";
				y="safezoneY + (30+70+5+5) * pixelH";
				w="90 * pixelW";
				h="25 * pixelH";
				colorBackground[]={0,0,0,0};
			};
			class PressSpaceHint: RscStructuredText
			{
				idc=4003;
				text="<t align='center' size='2' color='#ffffff' shadow='false'>Press <t color='#3fd4fc'>SPACE</t> to fire</t>";
				x="safeZoneX + safeZoneW * 0.5 - 225 * pixelW";
				y="safeZoneY + safeZoneH - (60+49) * pixelH";
				w="550 * pixelW";
				h="49 * pixelH";
				colorBackground[]={0.074509799,0.086274497,0.105882,0.80000001};
			};
		};
	};
	class RscExtremoGasMask
	{
		idd=24000;
		duration=999999;
		fadein=1;
		fadeout=1;
		onLoad="uiNamespace setVariable ['RscExtremoGasMask', _this select 0];";
		onUnload="uiNamespace setVariable ['RscExtremoGasMask', displayNull]";
		class controls
		{
			class Overlay: RscPicture
			{
				idc=-1;
				x="safezoneX";
				y="safezoneY";
				w="safezoneW";
				h="safezoneH";
				text="\Extremo_Assets\texture\ui\Extremo_GasMask_ca.paa";
			};
		};
	};
	class RscExtremoIntoxicated
	{
		idd=32975;
		duration=999999;
		fadein=1;
		fadeout=1;
		onLoad="uiNamespace setVariable ['RscExtremoDrunk', _this select 0];";
		onUnload="uiNamespace setVariable ['RscExtremoDrunk', displayNull]";
		class controls
		{
			class Overlay: RscPicture
			{
				idc=-1;
				x="safezoneX";
				y="safezoneY";
				w="safezoneW";
				h="safezoneH";
				text="\Extremo_Assets\texture\ui\Extremo_intoxicatedVision_ca.paa";
			};
		};
	};
	class RscExtremoConstructionMode
	{
		idd=24006;
		onLoad="uiNamespace setVariable ['RscExtremoConstructionMode', _this select 0];";
		onUnload="uiNamespace setVariable ['RscExtremoConstructionMode', displayNull]";
		duration=999999;
		fadein=1;
		fadeout=1;
		class controls
		{
			class Mode: RscText
			{
				idc=1000;
				text="FREE MODE, NO PHYSICS";
				x="(safeZoneX + safeZoneW) - 60 * pixelW - 250 * pixelW";
				y="safeZoneY + 60 * pixelH";
				w="250 * pixelW";
				h="40 * pixelH";
				style=2;
				colorBackground[]=
				{
					"19/255",
					"22/255",
					"27/255",
					0.80000001
				};
			};
			class DescriptionBackground: RscText
			{
				idc=1002;
				x="(safeZoneX + safeZoneW) - 60 * pixelW - 250 * pixelW";
				y="safeZoneY + 60 * pixelH + 40 * pixelH + 10 * pixelH";
				w="250 * pixelW";
				h="350 * pixelH";
				colorBackground[]=
				{
					"19/255",
					"22/255",
					"27/255",
					0.80000001
				};
			};
			class Description: RscStructuredText
			{
				idc=1001;
				text="<t align='left'>Free Mode</t><t align='right' color='#3fd4fc'>1</t><br/><t align='left'>Grid Mode</t><t align='right' color='#3fd4fc'>2</t><br/><t align='left'>Snap Mode</t><t align='right' color='#3fd4fc'>3</t><br/><br/><t align='left'>Toggle Physics</t><t align='right' color='#3fd4fc'>4</t><br/><t align='left'>Toggle Assistant</t><t align='right' color='#3fd4fc'>5</t><br/><t align='left'>Freeze Object</t><t align='right' color='#3fd4fc'>6</t><br/><br/><t align='left'>Rotation</t><t align='right' color='#3fd4fc'>Q/E</t><br/><t align='left'>Elevation</t><t align='right' color='#3fd4fc'>PAGE UP/DOWN</t><br/><t align='left'>Distance</t><t align='right' color='#3fd4fc'>HOME/END</t><br/><br/><t align='left'>Larger Steps</t><t align='right' color='#3fd4fc'>SHIFT</t><br/><t align='left'>Smaller Steps</t><t align='right' color='#3fd4fc'>CONTROL</t><br/><br/><t align='left'>Place</t><t align='right' color='#3fd4fc'>SPACE</t><br/><t align='left'>Abort</t><t align='right' color='#3fd4fc'>ESCAPE</t>";
				x="(safeZoneX + safeZoneW) - 60 * pixelW - 250 * pixelW + 10 * pixelW";
				y="safeZoneY + 60 * pixelH + 40 * pixelH + 10 * pixelH + 10 * pixelH";
				w="(250 - 20) * pixelW";
				h="(450 - 20) * pixelH";
				size="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
				colorBackground[]={0,0,0,0};
			};
		};
	};
	class RscExtremoHUD
	{
		idd=24014;
		duration=999999;
		fadein=1;
		fadeout=1;
		onLoad="uiNamespace setVariable ['RscExtremoHUD', _this select 0];";
		onUnload="uiNamespace setVariable ['RscExtremoHUD', displayNull]";
		class controls
		{
			class BulletCamera: RscControlsGroup
			{
				idc=1500;
				x="(safezoneX + safezoneW) - 60 * pixelW - 512 * pixelW";
				y="safezoneY + 60 * pixelH";
				w="512 * pixelW";
				h="256 * pixelH";
				duration=999999;
				fadein=1;
				fadeout=1;
				show=0;
				class controls
				{
					class Background: RscText
					{
						idc=1501;
						x=0;
						y=0;
						w="512 * pixelW";
						h="256 * pixelH";
						text="";
						colorBackground[]={0,0,0,1};
					};
					class RenderSurface: RscPicture
					{
						idc=1502;
						x=0;
						y=0;
						w="512 * pixelW";
						h="256 * pixelH";
						text="#(argb,512,256,1)r2t(ExtremoBulletCameraRenderSurface,1.0)";
					};
					class Noise01: RscPicture
					{
						idc=1505;
						x=0;
						y=0;
						w="512 * pixelW";
						h="256 * pixelH";
						text="\Extremo_Assets\texture\hud\hud_bulletcam_noise01_ca.paa";
						blinkingPeriod=0.050000001;
					};
					class Noise02: RscPicture
					{
						idc=1506;
						x=0;
						y=0;
						w="512 * pixelW";
						h="256 * pixelH";
						text="\Extremo_Assets\texture\hud\hud_bulletcam_noise02_ca.paa";
						blinkingPeriod=0.2;
					};
					class Noise03: RscPicture
					{
						idc=1507;
						x=0;
						y=0;
						w="512 * pixelW";
						h="256 * pixelH";
						text="\Extremo_Assets\texture\hud\hud_bulletcam_noise03_ca.paa";
						blinkingPeriod=0.15000001;
					};
					class Overlay: RscPicture
					{
						idc=1503;
						x=0;
						y=0;
						w="512 * pixelW";
						h="256 * pixelH";
						text="\Extremo_Assets\texture\hud\hud_bulletcam_overlay_ca.paa";
					};
					class Status: RscText
					{
						idc=1504;
						x=0;
						y=0;
						w="512 * pixelW";
						h="30 * pixelH";
						colorText[]={1,1,1,1};
						text="NO SIGNAL";
						font="RobotoCondensed";
						shadow=0;
						fixedWidth=0;
						linespacing=0;
						style=1;
						sizeEx="11 * pixelH";
					};
				};
			};
			class Grenade: RscControlsGroup
			{
				idc=1400;
				x="(safezoneX + safezoneW) - 256 * pixelW - 60 * pixelW";
				y="(safezoneY + safezoneH) - 128 * pixelH - 60 * pixelH";
				w="256 * pixelW";
				h="128 * pixelH";
				show="false";
				class controls
				{
					class WeaponBackground: RscPictureKeepAspect
					{
						idc=1401;
						x=0;
						y=0;
						w="256 * pixelW";
						h="128 * pixelH";
						colorText[]={1,1,1,1};
						text="\Extremo_Assets\texture\hud\hud_panel_grenade_ca.paa";
					};
					class Ammo: RscText
					{
						idc=1402;
						x="256 * pixelW - 55 * pixelW";
						y="128 * pixelH - 95 * pixelH";
						w="45 * pixelW";
						h="35 * pixelH";
						colorText[]={1,1,1,1};
						text="";
						font="RobotoCondensed";
						shadow=0;
						fixedWidth=0;
						linespacing=0;
						style=1;
						sizeEx="29 * pixelH";
					};
					class TypeSingleLine: RscText
					{
						idc=1403;
						x="256 * pixelW - 115 * pixelW";
						y="128 * pixelH - 95 * pixelH";
						w="60 * pixelW";
						h="35 * pixelH";
						colorText[]=
						{
							"63/255",
							"212/255",
							"252/255",
							1
						};
						text="RGO";
						font="RobotoCondensed";
						shadow=0;
						fixedWidth=0;
						linespacing=1;
						style=1;
						sizeEx="11 * pixelH";
						show="false";
					};
					class TypeDoubleLine1: RscText
					{
						idc=1404;
						x="256 * pixelW - 115 * pixelW";
						y="128 * pixelH - 90 * pixelH";
						w="60 * pixelW";
						h="15 * pixelH";
						colorText[]=
						{
							"63/255",
							"212/255",
							"252/255",
							1
						};
						text="RGO";
						font="RobotoCondensed";
						shadow=0;
						fixedWidth=0;
						linespacing=1;
						style=1;
						sizeEx="11 * pixelH";
						show="false";
					};
					class TypeDoubleLine2: RscText
					{
						idc=1405;
						x="256 * pixelW - 115 * pixelW";
						y="128 * pixelH - 80 * pixelH";
						w="60 * pixelW";
						h="15 * pixelH";
						colorText[]=
						{
							"63/255",
							"212/255",
							"252/255",
							1
						};
						text="RGO";
						font="RobotoCondensed";
						shadow=0;
						fixedWidth=0;
						linespacing=1;
						style=1;
						sizeEx="11 * pixelH";
						show="false";
					};
				};
			};
			class Weapon: RscControlsGroup
			{
				idc=1100;
				x="(safezoneX + safezoneW) - 256 * pixelW - 60 * pixelW";
				y="(safezoneY + safezoneH) - 128 * pixelH - 60 * pixelH";
				w="256 * pixelW";
				h="128 * pixelH";
				class controls
				{
					class WeaponBackground: RscPictureKeepAspect
					{
						idc=1101;
						x=0;
						y=0;
						w="256 * pixelW";
						h="128 * pixelH";
						colorText[]={1,1,1,1};
						text="\Extremo_Assets\texture\hud\hud_panel_weapon_ca.paa";
					};
					class Ammo: RscText
					{
						idc=1102;
						x="256 * pixelW - 235 * pixelW";
						y="128 * pixelH - 50 * pixelH";
						w="125 * pixelW";
						h="50 * pixelH";
						colorText[]={1,1,1,1};
						text="30";
						font="RobotoCondensed";
						shadow=0;
						fixedWidth=0;
						linespacing=0;
						style=1;
						sizeEx="50 * pixelH";
					};
					class Magazines: RscText
					{
						idc=1104;
						x="256 * pixelW - 115 * pixelW";
						y="128 * pixelH - 40 * pixelH";
						w="55 * pixelW";
						h="30 * pixelH";
						colorText[]={1,1,1,1};
						text="2";
						font="RobotoCondensed";
						shadow=0;
						fixedWidth=0;
						linespacing=0;
						style=0;
						sizeEx="30 * pixelH";
					};
					class Zeroing: RscText
					{
						idc=1105;
						x="256 * pixelW - 55 * pixelW - 10 * pixelW";
						y="128 * pixelH - 45 * pixelH";
						w="55 * pixelW";
						h="20 * pixelH";
						colorText[]=
						{
							"111/255",
							"113/255",
							"122/255",
							1
						};
						text="100m";
						font="RobotoCondensed";
						shadow=0;
						fixedWidth=0;
						linespacing=0;
						style=1;
						sizeEx="18 * pixelH";
					};
					class FireMode: RscText
					{
						idc=1103;
						x="256 * pixelW - 60 * pixelW - 10 * pixelW";
						y="128 * pixelH - 25 * pixelH";
						w="60 * pixelW";
						h="20 * pixelH";
						colorText[]=
						{
							"111/255",
							"113/255",
							"122/255",
							1
						};
						text="SEMI";
						font="RobotoCondensed";
						shadow=0;
						fixedWidth=0;
						linespacing=0;
						style=1;
						sizeEx="18 * pixelH";
					};
				};
			};
			class Vehicle: RscControlsGroup
			{
				idc=1200;
				x="(safezoneX + safezoneW) - 256 * pixelW - 60 * pixelW";
				y="(safezoneY + safezoneH) - 128 * pixelH - 60 * pixelH";
				w="256 * pixelW";
				h="128 * pixelH";
				class controls
				{
					class VehicleBackground: RscPictureKeepAspect
					{
						idc=1201;
						x=0;
						y=0;
						w="256 * pixelW";
						h="128 * pixelH";
						colorText[]={1,1,1,1};
						text="\Extremo_Assets\texture\hud\hud_panel_weapon_ca.paa";
					};
					class Speed: RscText
					{
						idc=1202;
						x="256 * pixelW - 235 * pixelW";
						y="128 * pixelH - 50 * pixelH";
						w="125 * pixelW";
						h="50 * pixelH";
						colorText[]={1,1,1,1};
						text="30";
						font="RobotoCondensed";
						shadow=0;
						fixedWidth=0;
						linespacing=0;
						style=1;
						sizeEx="50 * pixelH";
					};
					class Height: RscText
					{
						idc=1203;
						x="256 * pixelW - 55 * pixelW - 10 * pixelW";
						y="128 * pixelH - 45 * pixelH";
						w="55 * pixelW";
						h="20 * pixelH";
						colorText[]=
						{
							"111/255",
							"113/255",
							"122/255",
							1
						};
						text="100m";
						font="RobotoCondensed";
						shadow=0;
						fixedWidth=0;
						linespacing=0;
						style=1;
						sizeEx="18 * pixelH";
						show="false";
					};
					class Fuel: RscText
					{
						idc=1204;
						x="256 * pixelW - 100 * pixelW - 10 * pixelW";
						y="128 * pixelH - 25 * pixelH";
						w="100 * pixelW";
						h="20 * pixelH";
						colorText[]=
						{
							"111/255",
							"113/255",
							"122/255",
							1
						};
						text="";
						font="RobotoCondensed";
						shadow=0;
						fixedWidth=0;
						linespacing=0;
						style=1;
						sizeEx="18 * pixelH";
					};
				};
			};
			class Stats: RscControlsGroup
			{
				idc=1300;
				x="safeZoneX + 60 * pixelW";
				y="(safeZoneY + safeZoneH) - 60 * pixelH - 64 * pixelH";
				w="256 * pixelW";
				h="64 * pixelH";
				class controls
				{
					class StatsBackground: RscPictureKeepAspect
					{
						idc=1301;
						x=0;
						y=0;
						w="256 * pixelW";
						h="64 * pixelH";
						colorText[]={1,1,1,1};
						text="\Extremo_Assets\texture\hud\hud_panel_player_ca.paa";
					};
					class HungerLabel: RscText
					{
						idc=1303;
						x="10 * pixelW";
						y="64 * pixelH - 35 * pixelH";
						w="70 * pixelW";
						h="20 * pixelH";
						colorText[]=
						{
							"63/255",
							"212/255",
							"252/255",
							1
						};
						text="HUNGER";
						font="RobotoCondensed";
						shadow=0;
						fixedWidth=0;
						linespacing=0;
						style=0;
						sizeEx="11 * pixelH";
					}; 
					class Hunger: RscText
					{
						idc=1302;
						x="85 * pixelW";
						y="64 * pixelH - 35 * pixelH"; 
						w="50 * pixelW";
						h="20 * pixelH";
						colorText[]={1,1,1,1};
						text="";
						font="RobotoCondensed";
						shadow=0;
						fixedWidth=0;
						linespacing=0;
						style=1;
						sizeEx="14 * pixelH";
					};
					class HealthLabel: RscText
					{
						idc=1307;
						x="10 * pixelW";
						y="64 * pixelH - 45 * pixelH";
						w="70 * pixelW";
						h="20 * pixelH"; 
						colorText[]=
						{
							"63/255",
							"212/255",
							"252/255",
							1
						};
						text="HEALTH";
						font="RobotoCondensed";
						shadow=0;
						fixedWidth=0;
						linespacing=0;
						style=0;
						sizeEx="11 * pixelH";
						show="false";
					};
					class Health: RscText
					{
						idc=1306;
						x="85 * pixelW";
						y="64 * pixelH - 45 * pixelH";
						w="50 * pixelW";
						h="20 * pixelH"; 
						colorText[]={1,1,1,1};
						text="";
						font="RobotoCondensed";
						shadow=0;
						fixedWidth=0;
						linespacing=0;
						style=1;
						sizeEx="14 * pixelH"; 
					};
					class ThirstLabel: RscText
					{
						idc=1305;
						x="10 * pixelW";
						y="64 * pixelH - 25 * pixelH";
						w="70 * pixelW";
						h="20 * pixelH";
						colorText[]=
						{
							"63/255",
							"212/255",
							"252/255",
							1
						};
						text="THIRST";
						font="RobotoCondensed";
						shadow=0;
						fixedWidth=0;
						linespacing=0;
						style=0;
						sizeEx="11 * pixelH";
					}; 
					class Thirst: RscText
					{
						idc=1304;
						x="85 * pixelW";
						y="64 * pixelH - 25 * pixelH";
						w="50 * pixelW";
						h="20 * pixelH";
						colorText[]={1,1,1,1};
						text="";
						font="RobotoCondensed";
						shadow=0;
						fixedWidth=0;
						linespacing=0;
						style=1;
						sizeEx="14 * pixelH";
					}; 
					
					class EnvironmentTemperatureLabel: RscText
					{
						idc=1309;
						x="10 * pixelW";
						y="64 * pixelH - 45 * pixelH";
						w="70 * pixelW";
						h="20 * pixelH";
						colorText[]=
						{
							"63/255",
							"212/255",
							"252/255",
							1
						};
						text="CLIMATE";
						font="RobotoCondensed";
						shadow=0;
						fixedWidth=0;
						linespacing=0;
						style=0;
						sizeEx="11 * pixelH";
						show="false";
					};
					class BodyTemperatureLabel: RscText
					{
						idc=1311;
						x="10 * pixelW";
						y="64 * pixelH - 25 * pixelH";
						w="70 * pixelW";
						h="20 * pixelH";
						colorText[]=
						{
							"63/255",
							"212/255",
							"252/255",
							1
						};
						text="BODY";
						font="RobotoCondensed";
						shadow=0;
						fixedWidth=0;
						linespacing=0;
						style=0;
						sizeEx="11 * pixelH";
						show="false";
					};
					class EnvironmentTemperature: RscText
					{
						idc=1308;
						x="65 * pixelW";
						y="64 * pixelH - 45 * pixelH";
						w="70 * pixelW";
						h="20 * pixelH";
						colorText[]={1,1,1,1};
						text="0°C";
						font="RobotoCondensed";
						shadow=0;
						fixedWidth=0;
						linespacing=0;
						style=1;
						sizeEx="18 * pixelH";
						show="false";
					};
					class BodyTemperature: RscText
					{
						idc=1310;
						x="65 * pixelW";
						y="64 * pixelH - 25 * pixelH";
						w="70 * pixelW";
						h="20 * pixelH";
						colorText[]={1,1,1,1};
						text="37°C";
						font="RobotoCondensed";
						shadow=0;
						fixedWidth=0;
						linespacing=0;
						style=1;
						sizeEx="18 * pixelH";
						show="false";
					};
				};
			};
			class MuzzleDisplay: RscText
			{
				idc=1005;
				x="(safeZoneX + safeZoneW) - 280 * pixelW";
				y="(safeZoneY + safeZoneH) - 50 * pixelH";
				w="220 * pixelW";
				h="30 * pixelH";
				colorText[]={1,1,1,1};
				colorBackground[]=
				{
					"19/255",
					"22/255",
					"27/255",
					0.80000001
				};
				text="";
				shadow=0;
				fixedWidth=0;
				sizeEx="18 * pixelH";
				fade=1;
				style=1;
			};
			class GroupMembers: RscStructuredText
			{
				idc=1000;
				x="safeZoneX + 60 * pixelW";
				y="safeZoneY + 60 * pixelH";
				w="400 * pixelW";
				h="500 * pixelH";
				colorBackground[]={0,0,0,0};
				lineSpacing=2;
				text="";
				shadow=2;
			};
			class HungerIcon: RscPictureKeepAspect
			{
				idc=1002;
				x="(safeZoneX + safeZoneW) - 60 * pixelW - 64 * pixelW";
				y="(safeZoneY + safeZoneH) - 630 * pixelH - 64 * pixelH";
				w="64 * pixelW";
				h="64 * pixelH";
				text="\Extremo_Assets\texture\hud\hud_icon_hunger_ca.paa";
				shadow=0;
				show="false";
				colorText[]={1,1,1,1};
				blinkingPeriod=0.75;
			};
			class ThirstIcon: RscPictureKeepAspect
			{
				idc=1007;
				x="(safeZoneX + safeZoneW) - 60 * pixelW - 64 * pixelW";
				y="(safeZoneY + safeZoneH) - 720 * pixelH - 64 * pixelH";
				w="64 * pixelW";
				h="64 * pixelH";
				text="\Extremo_Assets\texture\hud\hud_icon_thirst_ca.paa";
				shadow=0;
				show="false";
				colorText[]={1,1,1,1};
				blinkingPeriod=0.75;
			};
			class CombatIcon: RscPictureKeepAspect
			{
				idc=1008;
				x="(safeZoneX + safeZoneW) - 60 * pixelW - 64 * pixelW";
				y="(safeZoneY + safeZoneH) - 810 * pixelH - 64 * pixelH";
				w="64 * pixelW";
				h="64 * pixelH";
				text="\Extremo_Assets\texture\hud\hud_icon_combat_ca.paa";
				shadow=0;
				show="false";
				colorText[]={1,1,1,1};
				blinkingPeriod=0.75;
			};
			class BambiIcon: RscPictureKeepAspect
			{
				idc=1003;
				x="(safeZoneX + safeZoneW) - 60 * pixelW - 64 * pixelW";
				y="(safeZoneY + safeZoneH) - 455 * pixelH - 64 * pixelH";
				w="64 * pixelW";
				h="64 * pixelH";
				text="\Extremo_Assets\texture\hud\hud_icon_bambi_ca.paa";
				shadow=0;
				show="false";
				colorText[]={1,1,1,1};
			};
			class EarPlugsIcon: RscPictureKeepAspect
			{
				idc=1004;
				x="(safeZoneX + safeZoneW) - 60 * pixelW - 64 * pixelW";
				y="(safeZoneY + safeZoneH) - 365 * pixelH - 64 * pixelH";
				w="64 * pixelW";
				h="64 * pixelH";
				text="\Extremo_Assets\texture\hud\hud_icon_earplugs_ca.paa";
				shadow=0;
				show="false";
				colorText[]={1,1,1,1};
			};
			class AutoRunIcon: RscPictureKeepAspect
			{
				idc=1006;
				x="(safeZoneX + safeZoneW) - 60 * pixelW - 64 * pixelW";
				y="(safeZoneY + safeZoneH) - 275 * pixelH - 64 * pixelH";
				w="64 * pixelW";
				h="64 * pixelH";
				text="\Extremo_Assets\texture\hud\hud_icon_autorun_ca.paa";
				shadow=0;
				show="false";
				colorText[]={1,1,1,1};
			};
		};
	};
	class RscExtremoToastArea
	{
		idd=24034;
		onLoad="uiNamespace setVariable ['RscExtremoToastArea', _this select 0];";
		onUnload="uiNamespace setVariable ['RscExtremoToastArea', displayNull]";
		duration=999999;
		class controls
		{
		};
	};
	class RscExtremoBaguetteArea
	{
		idd=24035;
		onLoad="uiNamespace setVariable ['RscExtremoBaguetteArea', _this select 0];";
		onUnload="uiNamespace setVariable ['RscExtremoBaguetteArea', displayNull]";
		duration=999999;
		class controls
		{
		};
	};
	class RscExtremoNotification
	{
		idd=20020;
		onLoad="uiNamespace setVariable ['RscExtremoExtremoNotification', _this select 0];";
		onUnload="uiNamespace setVariable ['RscExtremoExtremoNotification', displayNull]";
		duration=999999;
		class controls
		{
			class Background: RscText
			{
				idc=4000;
				x="1.004167 * safezoneW + safezoneX";
				y="0.786 * safezoneH + safezoneY";
				w="0.166146 * safezoneW";
				h="0.077 * safezoneH";
				colorBackground[]=
				{
					"19/255",
					"22/255",
					"27/255",
					0.80000001
				};
			};
			class Icon: RscPictureKeepAspect
			{
				idc=4002;
				text="";
				x="1.009896 * safezoneW + safezoneX";
				y="0.797 * safezoneH + safezoneY";
				w="0.034375 * safezoneW";
				h="0.055 * safezoneH";
			};
			class Message: RscStructuredText
			{
				idc=4001;
				x="1.05 * safezoneW + safezoneX";
				y="0.797 * safezoneH + safezoneY";
				w="0.120313 * safezoneW";
				h="0.055 * safezoneH";
			};
			class Background1: Background
			{
				idc="4000 + 10";
			};
			class Icon1: Icon
			{
				idc="4002 + 10";
			};
			class Message1: Message
			{
				idc="4001 + 10";
			};
			class Background2: Background
			{
				idc="4000 + 20";
			};
			class Icon2: Icon
			{
				idc="4002 + 20";
			};
			class Message2: Message
			{
				idc="4001 + 20";
			};
			class Background3: Background
			{
				idc="4000 + 30";
			};
			class Icon3: Icon
			{
				idc="4002 + 30";
			};
			class Message3: Message
			{
				idc="4001 + 30";
			};
			class Background4: Background
			{
				idc="4000 + 40";
			};
			class Icon4: Icon
			{
				idc="4002 + 40";
			};
			class Message4: Message
			{
				idc="4001 + 40";
			};
			class Background5: Background
			{
				idc="4000 + 50";
			};
			class Icon5: Icon
			{
				idc="4002 + 50";
			};
			class Message5: Message
			{
				idc="4001 + 50";
			};
			class Background6: Background
			{
				idc="4000 + 60";
			};
			class Icon6: Icon
			{
				idc="4002 + 60";
			};
			class Message6: Message
			{
				idc="4001 + 60";
			};
			class Background7: Background
			{
				idc="4000 + 70";
			};
			class Icon7: Icon
			{
				idc="4002 + 70";
			};
			class Message7: Message
			{
				idc="4001 + 70";
			};
			class Background8: Background
			{
				idc="4000 + 80";
			};
			class Icon8: Icon
			{
				idc="4002 + 80";
			};
			class Message8: Message
			{
				idc="4001 + 80";
			};
			class Background9: Background
			{
				idc="4000 + 90";
			};
			class Icon9: Icon
			{
				idc="4002 + 90";
			};
			class Message9: Message
			{
				idc="4001 + 90";
			};
		};
	};
	class RscExtremoActionProgress
	{
		idd=24026;
		onLoad="uiNamespace setVariable ['RscExtremoActionProgress', _this select 0];";
		onUnload="uiNamespace setVariable ['RscExtremoActionProgress', displayNull]";
		duration=999999;
		class controls
		{
			class Background: RscText
			{
				idc=-1;
				x="0 * (0.025) + (0)";
				y="0 * (0.04) + (0)";
				w="40 * (0.025)";
				h="25 * pixelH";
				colorBackground[]=
				{
					"19/255",
					"22/255",
					"27/255",
					0.80000001
				};
			};
			class ProgressBackground: RscText
			{
				idc=4001;
				x="0 * (0.025) + (0)    + 10 * pixelW";
				y="0 * (0.04) + (0)    + 10 * pixelH";
				w="40 * (0.025)    - 60 * pixelW";
				h="5 * pixelH";
				colorBackground[]=
				{
					"19/255",
					"22/255",
					"27/255",
					1
				};
			};
			class Progress: RscText
			{
				idc=4000;
				x="0 * (0.025) + (0)    + 10 * pixelW";
				y="0 * (0.04) + (0)    + 10 * pixelH";
				w="40 * (0.025)    - 60 * pixelW";
				h="5 * pixelH";
				colorBackground[]={0,0.77999997,0.93000001,1};
			};
			class Label: RscText
			{
				idc=4002;
				x="40 * (0.025) + (0)   - 110 * pixelW";
				y="0 * (0.04) + (0)";
				w="110 * pixelW";
				h="25 * pixelH";
				colorBackground[]={0,0,0,0};
				style=1;
				sizeEx="18 * pixelH";
				colorText[]={1,1,1,1};
				text="100%";
				font="RobotoCondensed";
			};
		};
	};
	class RscExtremoEscapeStats
	{
		idd=36000;
		duration=9.9999998e+010;
		fadein=0;
		fadeout=0;
		movingEnable=0;
		onLoad="uiNamespace setVariable ['RscExtremoEscapeStats', _this select 0];";
		onUnload="uiNamespace setVariable ['RscExtremoEscapeStats', displayNull]";
		class controlsBackground
		{
			class Background: RscText
			{
				idc=36001;
				x="0 * (0.025) + (0)";
				y="0 * (0.04) + (0)";
				w="40 * (0.025)";
				h="25 * (0.04)";
				colorBackground[]={0.074509799,0.086274497,0.105882,0.80000001};
			};
		};
		class controls
		{
			class escapeLogo: RscPictureKeepAspect
			{
				idc=36002;
				text="Extremo_Assets\texture\mod\icon_escape.paa";
				x="1 * (0.025) + (0)";
				y="1 * (0.04) + (0)";
				w="4 * (0.025)";
				h="3 * (0.04)";
			};
			class playerName: RscStructuredText
			{
				idc=36003;
				text="";
				x="6 * (0.025) + (0)";
				y="2 * (0.04) + (0)";
				w="20 * (0.025)";
				h="3 * (0.04)";
				colorText[]={0.81999999,0.81999999,0.81999999,1};
				font="RobotoCondensed";
				class Attributes
				{
					align="left";
					color="#ffca12";
					font="RobotoCondensed";
					shadow=0;
				};
			};
			class statsHeader: RscStructuredText
			{
				idc=36004;
				text="STATS SUMMARY";
				x="1 * (0.025) + (0)";
				y="5 * (0.04) + (0)";
				w="26 * (0.025)";
				h="2 * (0.04)";
				font="RobotoCondensed";
				class Attributes
				{
					align="left";
					color="#ffffff";
					font="RobotoCondensed";
					shadow=0;
				};
			};
			class winPctTitle: RscStructuredText
			{
				idc=36005;
				text="W/L";
				x="1 * (0.025) + (0)";
				y="8 * (0.04) + (0)";
				w="5 * (0.025)";
				h="1 * (0.04)";
				font="RobotoCondensed";
				class Attributes
				{
					align="left";
					color="#ffffff";
					font="RobotoCondensed";
					shadow=0;
				};
			};
			class winPctAmount: RscStructuredText
			{
				idc=36006;
				text="50%";
				x="7 * (0.025) + (0)";
				y="8 * (0.04) + (0)";
				w="4 * (0.025)";
				h="1 * (0.04)";
				font="RobotoCondensed";
				class Attributes
				{
					align="right";
					color="#00c8ec";
					font="RobotoCondensed";
					shadow=0;
				};
			};
			class winsTitle: RscStructuredText
			{
				idc=36007;
				text="Wins";
				x="1 * (0.025) + (0)";
				y="9.5 * (0.04) + (0)";
				w="5 * (0.025)";
				h="1 * (0.04)";
				font="RobotoCondensed";
				class Attributes
				{
					align="left";
					color="#b2ec00";
					font="RobotoCondensed";
					shadow=0;
				};
			};
			class winsAmount: RscStructuredText
			{
				idc=36008;
				text="1";
				x="7 * (0.025) + (0)";
				y="9.5 * (0.04) + (0)";
				w="4 * (0.025)";
				h="1 * (0.04)";
				font="RobotoCondensed";
				class Attributes
				{
					align="right";
					color="#ffffff";
					font="RobotoCondensed";
					shadow=0;
				};
			};
			class lossesTitle: RscStructuredText
			{
				idc=36009;
				text="Losses";
				x="1 * (0.025) + (0)";
				y="11 * (0.04) + (0)";
				w="5 * (0.025)";
				h="1 * (0.04)";
				font="RobotoCondensed";
				class Attributes
				{
					align="left";
					color="#ea0000";
					font="RobotoCondensed";
					shadow=0;
				};
			};
			class lossesAmount: RscStructuredText
			{
				idc=36010;
				text="1";
				x="7 * (0.025) + (0)";
				y="11 * (0.04) + (0)";
				w="4 * (0.025)";
				h="1 * (0.04)";
				font="RobotoCondensed";
				class Attributes
				{
					align="right";
					color="#ffffff";
					font="RobotoCondensed";
					shadow=0;
				};
			};
			class kdTitle: RscStructuredText
			{
				idc=36011;
				text="K/D";
				x="14 * (0.025) + (0)";
				y="8 * (0.04) + (0)";
				w="5 * (0.025)";
				h="1 * (0.04)";
				font="RobotoCondensed";
				class Attributes
				{
					align="left";
					color="#ffffff";
					font="RobotoCondensed";
					shadow=0;
				};
			};
			class kdRatio: RscStructuredText
			{
				idc=36012;
				text="0.80";
				x="19 * (0.025) + (0)";
				y="8 * (0.04) + (0)";
				w="4 * (0.025)";
				h="1 * (0.04)";
				font="RobotoCondensed";
				class Attributes
				{
					align="right";
					color="#00c8ec";
					font="RobotoCondensed";
					shadow=0;
				};
			};
			class killsTitle: RscStructuredText
			{
				idc=36013;
				text="Kills";
				x="14 * (0.025) + (0)";
				y="9.5 * (0.04) + (0)";
				w="5 * (0.025)";
				h="1 * (0.04)";
				font="RobotoCondensed";
				class Attributes
				{
					align="left";
					color="#b2ec00";
					font="RobotoCondensed";
					shadow=0;
				};
			};
			class killsAmount: RscStructuredText
			{
				idc=36014;
				text="4";
				x="19 * (0.025) + (0)";
				y="9.5 * (0.04) + (0)";
				w="4 * (0.025)";
				h="1 * (0.04)";
				font="RobotoCondensed";
				class Attributes
				{
					align="right";
					color="#ffffff";
					font="RobotoCondensed";
					shadow=0;
				};
			};
			class deathsTitle: RscStructuredText
			{
				idc=36015;
				text="Deaths";
				x="14 * (0.025) + (0)";
				y="11 * (0.04) + (0)";
				w="5 * (0.025)";
				h="1 * (0.04)";
				font="RobotoCondensed";
				class Attributes
				{
					align="left";
					color="#ea0000";
					font="RobotoCondensed";
					shadow=0;
				};
			};
			class deathsAmount: RscStructuredText
			{
				idc=36016;
				text="5";
				x="19 * (0.025) + (0)";
				y="11 * (0.04) + (0)";
				w="4 * (0.025)";
				h="1 * (0.04)";
				font="RobotoCondensed";
				class Attributes
				{
					align="right";
					color="#ffffff";
					font="RobotoCondensed";
					shadow=0;
				};
			};
			class respectTitle: RscStructuredText
			{
				idc=36017;
				text="RESPECT";
				x="27 * (0.025) + (0)";
				y="8 * (0.04) + (0)";
				w="5 * (0.025)";
				h="1 * (0.04)";
				font="RobotoCondensed";
				class Attributes
				{
					align="left";
					color="#ffffff";
					font="RobotoCondensed";
					shadow=0;
				};
			};
			class respectAmount: RscStructuredText
			{
				idc=36018;
				text="1050";
				x="33 * (0.025) + (0)";
				y="8 * (0.04) + (0)";
				w="4 * (0.025)";
				h="1 * (0.04)";
				font="RobotoCondensed";
				class Attributes
				{
					align="right";
					color="#00c8ec";
					font="RobotoCondensed";
					shadow=0;
				};
			};
			class avgResTitle: RscStructuredText
			{
				idc=36019;
				text="Avg. Res";
				x="27 * (0.025) + (0)";
				y="9.5 * (0.04) + (0)";
				w="5 * (0.025)";
				h="1 * (0.04)";
				font="RobotoCondensed";
				class Attributes
				{
					align="left";
					color="#b2ec00";
					font="RobotoCondensed";
					shadow=0;
				};
			};
			class avgResAmount: RscStructuredText
			{
				idc=36020;
				text="175";
				x="33 * (0.025) + (0)";
				y="9.5 * (0.04) + (0)";
				w="4 * (0.025)";
				h="1 * (0.04)";
				font="RobotoCondensed";
				class Attributes
				{
					align="right";
					color="#ffffff";
					font="RobotoCondensed";
					shadow=0;
				};
			};
			class ttlMatchesTitle: RscStructuredText
			{
				idc=36021;
				text="Matches";
				x="27 * (0.025) + (0)";
				y="11 * (0.04) + (0)";
				w="5 * (0.025)";
				h="1 * (0.04)";
				font="RobotoCondensed";
				class Attributes
				{
					align="left";
					color="#b2ec00";
					font="RobotoCondensed";
					shadow=0;
				};
			};
			class ttlMatchesAmount: RscStructuredText
			{
				idc=36022;
				text="6";
				x="33 * (0.025) + (0)";
				y="11 * (0.04) + (0)";
				w="4 * (0.025)";
				h="1 * (0.04)";
				font="RobotoCondensed";
				class Attributes
				{
					align="right";
					color="#ffffff";
					font="RobotoCondensed";
					shadow=0;
				};
			};
		};
	};
	class RscExtremoEscapeHUD
	{
		idd=35000;
		duration=9.9999998e+010;
		fadein=0;
		fadeout=0;
		movingEnable=0;
		onLoad="uiNamespace setVariable ['RscExtremoEscapeHUD', _this select 0];";
		onUnload="uiNamespace setVariable ['RscExtremoEscapeHUD', displayNull]";
		class controlsBackground
		{
			class Background: RscText
			{
				idc=35001;
				x="safeZoneX + 60 * pixelW";
				y="safezoneY + 60 * pixelH";
				w="90 * pixelW";
				h="70 * pixelH";
				colorBackground[]={0.074509799,0.086274497,0.105882,0.80000001};
			};
			class TimeBackground: RscText
			{
				idc=35004;
				x="safeZoneX + 60 * pixelW";
				y="safezoneY + (60+70+5) * pixelH";
				w="90 * pixelW";
				h="25 * pixelH";
				colorBackground[]={0.074509799,0.086274497,0.105882,0.80000001};
			};
		};
		class controls
		{
			class PlayerCount: RscStructuredText
			{
				idc=35002;
				x="safeZoneX + 60 * pixelW";
				y="safeZoneY + (60+5) * pixelH";
				w="90 * pixelW";
				h="70 * pixelH";
				size="50 * pixelH";
				sizeEx="50 * pixelH";
				class Attributes
				{
					align="center";
					color="#ffffff";
					font="RobotoCondensed";
					shadow=0;
				};
			};
			class PlayerLabel: RscStructuredText
			{
				idc=35003;
				text="PLAYERS";
				x="safeZoneX + 60 * pixelW";
				y="safezoneY + (60+50) * pixelH";
				w="90 * pixelW";
				h="25 * pixelH";
				size="11 * pixelH";
				sizeEx="11 * pixelH";
				class Attributes
				{
					align="center";
					color="#3fd4fc";
					font="RobotoCondensed";
					shadow=0;
				};
			};
			class TimeValue: RscStructuredText
			{
				idc=35005;
				text="00:00";
				x="safeZoneX + 60 * pixelW";
				y="safezoneY + (60+70+5+5) * pixelH";
				w="90 * pixelW";
				h="25 * pixelH";
				size="18 * pixelH";
				sizeEx="18 * pixelH";
				class Attributes
				{
					align="center";
					color="#ffffff";
					font="RobotoCondensed";
					shadow=0;
				};
			};
		};
	};
	class RscExtremo_ProgressScreen 
	{
		name = "RscExtremo_ProgressScreen";
		idd = 11;
		fadein = 1;
		duration = 99999999999;
		fadeout = 1;
		movingEnable = 0;
		onLoad="uiNamespace setVariable ['RscExtremo_ProgressScreen',_this select 0]";
		
		class controls {
			class actionTitle: RscStructuredText
			{
				idc = 3391;
				text = "<t align='center'>Loading...</t>";
				x = 0.360781 * safezoneW + safezoneX;
				y = 0.687 * safezoneH + safezoneY;
				w = 0.283594 * safezoneW;
				h = 0.022 * safezoneH;
			};
			class progress: RscProgress
			{
				idc = 3390;
				x = 0.350469 * safezoneW + safezoneX;
				y = 0.709 * safezoneH + safezoneY;
				w = 0.304219 * safezoneW;
				h = 0.022 * safezoneH;
				colorFrame[] = {0, 0, 0, 0};
			};
			class progressTextBackground: RscStructuredText
			{
				idc = 3393;
				x = 0.350469 * safezoneW + safezoneX;
				y = 0.709 * safezoneH + safezoneY;
				w = 0.304219 * safezoneW;
				h = 0.022 * safezoneH;
				//colorBackground[] = {0, 0, 0, 0.3};
			};
			class actionTitleProgress: RscStructuredText
			{
				idc = 3392;
				text = "<t align='center'>100%</t>";
				x = 0.350469 * safezoneW + safezoneX;
				y = 0.709 * safezoneH + safezoneY;
				w = 0.304219 * safezoneW;
				h = 0.022 * safezoneH;
			};
			class cancelInfo: RscStructuredText
			{
				idc = 1102;
				text = "<t align='center'>Press </t><t color='#C478DB' align='center'> [SPACE] </t><t align='center'> to cancel</t>";
				x = 0.360781 * safezoneW + safezoneX;
				y = 0.731 * safezoneH + safezoneY;
				w = 0.283594 * safezoneW;
				h = 0.022 * safezoneH;
			};
		};
	};
	class RscExtremo_BleedoutScreen 
	{
		idd = 10;
		fadein = 1;
		fadeout = 1;
		name = "RscExtremo_BleedoutScreen";
		onLoad = "uiNameSpace setVariable ['RscExtremo_BleedoutScreen', _this select 0]";
		onUnLoad = "uiNameSpace setVariable ['RscExtremo_BleedoutScreen', displayNull]";
		duration = 10e100;

		class controls 
		{
			class progressbar: RscProgress
			{
				idc = 1;
				x = GUI_GRID_X(7);
				y = GUI_GRID_Y(30.5);
				w = GUI_GRID_W(25.5);
				h = GUI_GRID_H(1.5);
				colorBackground[] = {0,0,0,0.5};
			};
			class title: RscStructuredText
			{
				idc = 2;
				x = GUI_GRID_X(5.5);
				y = GUI_GRID_Y(28.5);
				w = GUI_GRID_W(28.5);
				h = GUI_GRID_H(1.5);
			};
			class medic: RscStructuredText
			{
				idc = 3;
				x = GUI_GRID_X(42.5);
				y = GUI_GRID_Y(-10);
				w = GUI_GRID_W(25.5);
				h = GUI_GRID_H(1.5);
			};
		};

		class controlsBackground 
		{
			class background: RscGuiBack
			{
				idc = -1;
				x = GUI_GRID_X(-28.5);
				y = GUI_GRID_Y(27);
				w = GUI_GRID_W(97);
				h = GUI_GRID_H(6.5);
				colorBackground[] = {0.3, 0.3, 0.3, 0.3};
			};
		};
	};
	
	class SplashNoise
	{
		idd=-1;
		movingEnable=0;
		duration=9.9999998e+010;
		fadein=0;
		fadeout=0;
		onLoad="uiNamespace setVariable ['SplashNoise',_this#0]; ((_this#0) displayCtrl 66000) ctrlSetText (selectRandom(getArray(configFile >> 'CfgMods' >> 'Extremo' >> 'LoadingScreen' >> 'pictures')));"; 
		onUnload="uiNamespace setVariable ['SplashNoise',displayNull];";
		class BackgroundNoise: RscPicture
		{
			idc=66000;
			x="safezoneX";
			y="safezoneY";
			w="safezoneW";
			h="safezoneW * 4/3";
			text="\Extremo_Assets\texture\loading\loading_flag_co.paa";
		};
	};
	class RscExtremo_SplashScreen 
	{
		idd = 2500;
		onLoad = "uiNameSpace setVariable ['RscExtremo_SplashScreen', _this select 0]";
		onUnLoad = "uiNameSpace setVariable ['RscExtremo_SplashScreen', displayNull]";
		duration = 10e10;
		class controls {
			class Title: RscStructuredText {
				idc            = 1;
				text           = "";
				x              = "safezoneX";
				y              = "0.881986 * safezoneH + safezoneY";
				w              = "safezoneW";
				h              = "0.0506 * safezoneH";
				font           = "RobotoCondensedBold";
				sizeEx         = "0.04 * safezoneH";
				class Attributes
				{
					font           = "RobotoCondensedBold";
				};
			};
			class Subtitle: Title {
				idc            = 2;
				y              = "0.911941 * safezoneH + safezoneY";
				h              = "0.0418 * safezoneH";
				font           = "RobotoCondensed";
				sizeEx         = "0.025 * safezoneH";
			};
		};
		class controlsBackground {};
	};

	class RscSplashBase
	{
		idd=-1;
		movingEnable=0;
		duration=1;
		fadein=1;
		fadeout=1;
		class controlsbackground
		{
			/*class ExtremoBackgroundPicture: RscPicture
			{
				idc=66000;
				x="safezoneX";
				y="safezoneY";
				w="safezoneW";
				h="safezoneW * 4/3";
				text="\Extremo_Assets\texture\loading\loading_cheathas_co.paa";
			};*/
			class ExtremoSpinnerTitle: RscStructuredText
			{
				idc=66002;
				text="Loading...";
				x="(safeZoneX + 60 * pixelW) + 0.10";
				y="safeZoneY + safeZoneH - (60 + 64 - 10) * pixelH";
				w="safeZoneW - (60 + 64 + 15) * pixelW";
				h="64 * pixelH";
				size="44 * pixelH";
				sizeEx="44 * pixelH";
				colorText[]={1,1,1,1}; 
				shadow=0;
				class Attributes
				{
					font="RobotoCondensed";
					color="#ffffff";
					colorLink="#ffffff";
					align="left";
					shadow=0;
				};
			};
		};
	};
	class SplashBohemia : RscSplashBase
	{
		idd=-1;  
		duration=3;
		fadein=1;
		fadeout=1;
		name="$STR_A3_SplashBohemia_0"; 
		onLoad="uiNamespace setVariable ['SplashBohemia', _this select 0]; with uiNameSpace do { [_this select 0, 'SplashBohemia'] call Extremo_fnc_gui_loadingScreen_load; };";
		onUnload="with uiNameSpace do { (_this select 0) call Extremo_fnc_gui_loadingScreen_unload; }; uiNamespace setVariable ['SplashBohemia', displayNull]";
		class Picture: RscPicture
		{ 
			idc=-1;
			text="";
			x="0";
			y="0";
			w="0";
			h="0";
		};
		class TextPresents: RscText
		{
			idc=1000;
			text="";
			style=2;
			sizeEx="0.00";
			shadow=0;
			x="0";
			y="0";
			w="0";
			h="0";
		};
	};
	class SplashArma3 : RscSplashBase
	{
		idd=-1;
		movingEnable=0;
		duration=3;
		fadein=0;
		fadeout=0;
		class Picture: RscPicture
		{
			idc=-1; 
			text="";
			x="0";
			y="0";
			w="0";
			h="0";
		};
	};
	class SplashCopyright : RscSplashBase
	{
		idd=-1;
		movingEnable=0;
		duration=6;
		fadein=2;
		fadeout=2;
		name="$STR_A3_SplashCopyright_0";
		class PictureA3Logo: RscPicture
		{
			idc=66032;
			text="\Extremo_assets\texture\mod\logo.paa";
			x="0.5 - 10 * 		(0.01875 * SafezoneH)";
			y="0.5 - 6 * 		(0.025 * SafezoneH)";
			w="20 * 		(0.01875 * SafezoneH)";
			h="12 * 		(0.025 * SafezoneH)";
		};
		class PictureBIlogo: RscPicture
		{
			idc=1201;
			text="";
			x="0";
			y="0";
			w="0";
			h="0";
		};
		class PicturePhysXLogo: RscPicture
		{
			idc=1202;
			text="";
			x="0";
			y="0";
			w="0";
			h="0";
		};
		class LegalText: RscStructuredText
		{
			idc=-1;
			text="";
			size="0.00";
			shadow=0;
			x="0";
			y="0";
			w="0";
			h="0";
			class Attributes
			{
				align="center";
				shadow=0;
			};
		};
	}; 
	class SplashArma3Apex : RscSplashBase
	{
		idd=-1;
		movingEnable=0;
		duration=3;
		fadein=0;
		fadeout=0;
		class Picture: RscPicture
		{ 
			idc=-1;
			text="";
			x="0";
			y="0";
			w="0";
			h="0";
		};
	};
	class SplashArma3Lite : RscSplashBase
	{
		idd=-1;
		movingEnable=0;
		duration=3;
		fadein=0;
		fadeout=0;
		class Picture: RscPicture
		{
			idc=-1;
			text="";
			x="0";
			y="0";
			w="0";
			h="0";
		};
		class Tagline: RscPicture
		{
			idc=1201;
			text="";
			x="0";
			y="0";
			w="0";
			h="0";
		};
	};
	class SplashTagline : RscSplashBase
	{
		idd=-1;
		movingEnable=0;
		duration=3;
		fadein=0;
		fadeout=0;
		class Picture: RscPicture
		{
			idc=-1;
			text="";
			x="0";
			y="0";
			w="0";
			h="0";
		};
	};
	class SplashESRB : RscSplashBase
	{
		idd=-1;
		movingEnable=0;
		duration=4;
		fadein=0;
		fadeout=0;
		class Picture: RscPicture
		{
			idc=-1;
			text="";
			x="0";
			y="0";
			w="0";
			h="0";
		};
	}; 
	class RscDisplayMainMenuBackground
	{
		scriptName="RscDisplayMainMenuBackground";
		scriptPath="GUI";
		onLoad="[""onLoad"",_this,""RscDisplayMainMenuBackground"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay'); ((_this#0) displayCtrl 66000) ctrlSetText (selectRandom(getArray(configFile >> 'CfgMods' >> 'Extremo' >> 'LoadingScreen' >> 'pictures')));";
		onUnload="[""onUnload"",_this,""RscDisplayMainMenuBackground"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		idd=-1;
		fadein=0;
		fadeout=0;
		duration=1e+010;
		class Controls
		{
			class Background: RscText
			{
				idc=101;
				colorBackground[]={0.1,0.1,0.1,1};
				x="safezoneXAbs";
				y="-	10";
				w="safezoneWAbs";
				h="2 * 	10";
			};
			class BackgroundLeft: Background
			{
				x="-	10";
				w="safezoneX + 	10";
			};
			class BackgroundRight: Background
			{
				x="safezoneX + safezoneW";
				w=10;
			};
			class Picture: RscPicture
			{
				idc=66000;
				x="safezoneX";
				y="safezoneY";
				w="safezoneW";
				h="safezoneW * 4/3";
				text="";
			};
		};
	};

	class RscDebugText
	{
		idd=-1;
		movingEnable=0;
		duration=1e+010;
		fadein=0;
		fadeout=0;
		onLoad="uinamespace setvariable ['RscDebugText',_this # 0];";
		class Controls
		{
			class Text: RscListbox
			{
				idc=1001;
				x="safezoneX";
				y="safezoneY + 26 * pixelH";
				w="(300 * pixelW)";
				h="safezoneH - 26 * pixelH";
				colorText[]={1,1,0,1};
				colorTextRight[]={1,1,0,1};
				colorBackground[]={0,0,0,0};
				colorShadow[]={0,0,0,1};
				shadow=2;
				font="LucidaConsoleB";
				sizeEx="(11 * pixelH)";
			};
		};
	};
	class RscCompass
	{
		idd=-1;
		movingEnable=0;
		duration=1e+010;
		fadein=0;
		fadeout=0;
		class Controls
		{
			class Compass: RscHorizontalCompass
			{
				x="0.5 - 	(12 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) / 2";
				y="safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				w="(12 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
				h="(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
		};
	};
};

class CfgWrapperUi
{
	class Cursors
	{
		class Scroll
		{
			texture="\A3\ui_f\data\gui\cfg\cursors\arrow_gs.paa";
			width=32;
			height=32;
			hotspotX=0.1875;
			hotspotY=0.03125;
			color[]={1,1,1,1};
		};
		class Track
		{
			texture="\A3\ui_f\data\gui\cfg\cursors\arrow_gs.paa";
			width=32;
			height=32;
			hotspotX=0.1875;
			hotspotY=0.03125;
			color[]={1,1,1,1};
		};
	};
};

class CfgInGameUI
{
	class Actions
	{
		align="0x00 + 0x08";
		shadow=0;
		x="(safeZoneX + safeZoneW * 0.5)";
		y="(safeZoneY + safeZoneH * 0.6)";
		w="300 * pixelW";
		font="PuristaMedium";
		size="18 * pixelH";
		rows="5*SafeZoneH";
		arrowWidth=0.015;
		arrowHeight=0.02;
		iconArrowUp="\A3\ui_f\data\igui\cfg\actions\arrow_up_gs.paa";
		iconArrowDown="\A3\ui_f\data\igui\cfg\actions\arrow_down_gs.paa";
		background="\A3\ui_f\data\igui\cfg\imageCornerElement_ca.paa";
		underlineSelected=0;
		colorBackground[]=
		{
			"19/255",
			"22/255",
			"27/255",
			0.89999998
		};
		colorText[]=
		{
			"111/255",
			"113/255",
			"122/255",
			1
		};
		colorSelect[]={1,1,1,1};
		colorBackgroundSelected[]=
		{
			"63/255",
			"212/255",
			"252/255",
			0.60000002
		};
	};
	class DefaultAction
	{
		font="PuristaMedium";
		size="18 * pixelH";
		colorText[]=
		{
			"255/255",
			"180/255",
			"24/255",
			1
		};
		shadow=2;
		showHint=0;
		showNext=0;
		showLine=0;
		relativeToCursor=1;
		offsetX=0;
		offsetY=0.045000002;
		hotspotX=0;
		hotspotY=0;
		textTipFade=0.40000001;
		textTipDelay=0.40000001;
	};
	class CommandBar
	{
		left=-1;
		top=-1;
		show=0;
	};
	class Cursor
	{
		customMark="\Extremo_assets\texture\hud\hud_waypoint_ca.paa";
		customMarkColor[]={0,0,0,0};
		customMarkColorBG[]={0,0,0,0};
	};
	class IslandMap
	{
		cursorLineWidth=0;
		colorCivilian[]=
		{
			"(missionnamespace getvariable ['Map_BLUFOR_R',profilenamespace getvariable ['Map_BLUFOR_R',0]])",
			"(missionnamespace getvariable ['Map_BLUFOR_G',profilenamespace getvariable ['Map_BLUFOR_G',0]])",
			"(missionnamespace getvariable ['Map_BLUFOR_B',profilenamespace getvariable ['Map_BLUFOR_B',1]])",
			"(missionnamespace getvariable ['Map_BLUFOR_A',profilenamespace getvariable ['Map_BLUFOR_A',1]])"
		};
		colorEnemy[]=
		{
			"(missionnamespace getvariable ['Map_OPFOR_R',profilenamespace getvariable ['Map_OPFOR_R',1]])",
			"(missionnamespace getvariable ['Map_OPFOR_G',profilenamespace getvariable ['Map_OPFOR_G',0]])",
			"(missionnamespace getvariable ['Map_OPFOR_B',profilenamespace getvariable ['Map_OPFOR_B',0]])",
			"(missionnamespace getvariable ['Map_OPFOR_A',profilenamespace getvariable ['Map_OPFOR_A',1]])"
		};
		colorFriendly[]=
		{
			"(missionnamespace getvariable ['Map_Independent_R',profilenamespace getvariable ['Map_Independent_R',0]])",
			"(missionnamespace getvariable ['Map_Independent_G',profilenamespace getvariable ['Map_Independent_G',1]])",
			"(missionnamespace getvariable ['Map_Independent_B',profilenamespace getvariable ['Map_Independent_B',0]])",
			"(missionnamespace getvariable ['Map_Independent_A',profilenamespace getvariable ['Map_Independent_A',1]])"
		};
		colorNeutral[]=
		{
			"(missionnamespace getvariable ['Map_Civilian_R',profilenamespace getvariable ['Map_Civilian_R',1]])",
			"(missionnamespace getvariable ['Map_Civilian_G',profilenamespace getvariable ['Map_Civilian_G',1]])",
			"(missionnamespace getvariable ['Map_Civilian_B',profilenamespace getvariable ['Map_Civilian_B',1]])",
			"(missionnamespace getvariable ['Map_Civilian_A',profilenamespace getvariable ['Map_Civilian_A',1]])"
		};
		colorUnknown[]=
		{
			"(missionnamespace getvariable ['Map_Unknown_R',profilenamespace getvariable ['Map_Unknown_R',1]])",
			"(missionnamespace getvariable ['Map_Unknown_G',profilenamespace getvariable ['Map_Unknown_G',1]])",
			"(missionnamespace getvariable ['Map_Unknown_B',profilenamespace getvariable ['Map_Unknown_B',0]])",
			"(missionnamespace getvariable ['Map_Unknown_A',profilenamespace getvariable ['Map_Unknown_A',1]])"
		};
		iconPlayer="\Extremo_assets\texture\hud\hud_iconPlayer_ca.paa";
		shadow=0;
	};
};