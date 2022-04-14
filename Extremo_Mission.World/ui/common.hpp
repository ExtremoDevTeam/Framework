/*
	## EXTREMO
	## Nikko Renolds
*/

///////////////////////////////////////////////////////////////////////////
/// Base Classes
///////////////////////////////////////////////////////////////////////////
/*
	## EXTREMO
	## Nikko Renolds
*/

class Scrollbar
{
  width = 0;
  height = 0;
  scrollSpeed = 0.06;
  autoScrollDelay = 5;
  autoScrollEnabled = 0;
  autoScrollRewind = 0;
  autoScrollSpeed = -1;
  arrowEmpty = "\a3\3DEN\Data\Controls\ctrlDefault\arrowEmpty_ca.paa";
  arrowFull = "\a3\3DEN\Data\Controls\ctrlDefault\arrowFull_ca.paa";
  border = "\a3\3DEN\Data\Controls\ctrlDefault\border_ca.paa";
  thumb = "\a3\3DEN\Data\Controls\ctrlDefault\thumb_ca.paa";
  color[] = {1,1,1,1};
  colorActive[] = {1,1,1,1};
  colorDisabled[] = {1,1,1,0.25};
};

class RscDefault
{
	access = 0;
	idc = -1;
	type = 0;
	style = 0x00;
	default = 0;
	show = 1;
	fade = 0;
	blinkingPeriod = 0;
	deletable = 0;
	text = "";
	font = "RobotoCondensed";
	sizeEx = 0.5 * (safezoneH / 25);
	x = 0; // Horizontal coordinates
	y = 0; // Vertical coordinates
	w = 0; // Width
	h = 0; // Height
	tooltip = "";
	tooltipMaxWidth = 0.5;
	tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
	tooltipColorText[] = {1,1,1,1}; // Tooltip text color
	tooltipColorBox[] = {0,0,0,0}; // Tooltip frame color
	class ScrollBar : Scrollbar {};
};

class RscTree : RscDefault
{
  type = CT_TREE; // Type
	colorBorder[] = {1,1,1,0.5};
	colorLines[] = {0,0,0,0};
	colorBackground[] = {0,0,0,0.2}; // Fill color
	colorSelect[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
	colorMarked[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
	colorMarkedSelected[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
	colorText[] = {1,1,1,1};
	colorSelectText[] = {1,1,1,1};
	colorMarkedText[] = {1,1,1,1};
	colorSearch[] = {1,1,1,1};
	colorPicture[] = {1,1,1,1};
	colorPictureSelected[] = {1,1,1,1};
	colorPictureDisabled[] = {1,1,1,0.25};
	colorPictureRight[] = {1,1,1,1};
	colorPictureRightSelected[] = {1,1,1,1};
	colorPictureRightDisabled[] = {1,1,1,0.25};
	multiselectEnabled = 0;
	expandOnDoubleclick = 1;
	hiddenTexture = "\a3\3DEN\Data\Controls\ctrlTree\hiddenTexture_ca.paa";
	expandedTexture = "\a3\3DEN\Data\Controls\ctrlTree\expandedTexture_ca.paa";
	maxHistoryDelay = 1;
	disableKeyboardSearch = 0;
	class ScrollBar: ScrollBar {};
	colorDisabled[] = {0,0,0,0}; // Does nothing, but must be present, otherwise an error is shown
	colorArrow[] = {0,0,0,0}; // Does nothing, but must be present, otherwise an error is shown
};

class RscControlsGroup : RscDefault
{
	type = 15;
	style = 0x10;
	class Controls
	{ 
	};
	// Scrollbar configuration (applied only when LB_TEXTURES style is used)
	class VScrollBar : Scrollbar
	{
		width = 0.021;
		height = 0;
	};
	class HScrollBar : Scrollbar
	{
		width = 0;
		height = 0.028;
	};
};

class RscControlsGroupNoScrollbar : RscControlsGroup
{
	class VScrollBar : Scrollbar
	{
		width = 0;
		height = 0;
	};
	class HScrollbar : Scrollbar
	{
		width = 0;
		height = 0;
	};
};

class RscControlsGroupNoHScrollbar : RscControlsGroupNoScrollbar
{
	class VScrollBar : Scrollbar
	{
		width = 0.021;
		height = 0;
	};
};

class RscControlsGroupNoVScrollbar : RscControlsGroupNoScrollbar
{
	class HScrollBar : Scrollbar
	{
		width = 0;
		height = 0.028;
	};
};

class RscText : RscDefault
{
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	fixedWidth = 0;
}; 

class RscTextCentered : RscDefault
{
    colorBackground[] = {0,0,0,0};
    colorText[] = {1,1,1,1};
    style = 0x02;
    sizeEx = 0.04;
};

class RscStructuredText : RscDefault
{
	type = 13;
	colorBackground[] = {0,0,0,0};
	size = 0.5 * (safezoneH / 25);
	class Attributes
	{
		font = "RobotoCondensed";
		color = "#FFFFFF";
		align = "left";
		valign = "middle";
		shadow = 0;
		shadowColor = "#000000";
		size = "1";
	};
};

class RscActiveText : RscDefault
{
	type = 11;
	style = 0x00;
	text = "";
	sizeEx = 0.5 * (safezoneH / 25);
	font = "RobotoCondensed";
	shadow = 0;
	color[] = {1,1,1,1};
	colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
	colorDisabled[] = {1,1,1,0.25};
	tooltip = "";
	tooltipColorShade[] = {0,0,0,1};
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	soundClick[] = {"",1,1};
	soundEnter[] = {"",1,1};
	soundPush[] = {"",1,1};
	soundEscape[] = {"",1,1};
};

class RscDefaultText: RscDefault 
{
    sizeEx = "4.32 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
    font = "RobotoCondensed";
    shadow = 1;
};

class RscStatic: RscDefaultText 
{
    idc                     = -1;
    type                    = 0;
    colorBackground[]       = {0, 0, 0, 0};
    text                    = "";
    lineSpacing             = 1;
    fixedWidth              = 0;
    colorText[]             = {1, 1, 1, 1};
    colorShadow[]           = {0, 0, 0, 1};
    moving                  = 0;
    autoplay                = 0;
    loops                   = 0;
    tileW                   = 1;
    tileH                   = 1;
    onCanDestroy            = "";
    onDestroy               = "";
    onMouseEnter            = "";
    onMouseExit             = "";
    onSetFocus              = "";
    onKillFocus             = "";
    onKeyDown               = "";
    onKeyUp                 = "";
    onMouseButtonDown       = "";
    onMouseButtonUp         = "";
    onMouseButtonClick      = "";
    onMouseButtonDblClick   = "";
    onMouseZChanged         = "";
    onMouseMoving           = "";
    onMouseHolding          = "";
    onVideoStopped          = "";
    shadow                  = 0;
};

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

class RscActivePicture : RscActiveText
{
	style = 0x30;
	color[] = {0.8,0.8,0.8,1};
	colorActive[] = {1,1,1,1};
	soundClick[] = {"A3\missions_f\data\sounds\click.wss",0.15,1};
	soundEnter[] = {"",0.891251,1};
	soundPush[] = {"",0.891251,1};
	soundEscape[] = {"",0.891251,1};
};

class RscActivePictureKeepAspect : RscActivePicture
{
	style = 0x30 + 0x800;
};

class RscPicture : RscDefault
{
	style = 0x30;
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	lineSpacing = 0;
	fixedWidth = 0;
	shadow = 0;
};

class RscPictureKeepAspect : RscPicture
{
	style = 0x30 + 0x800;
};

class RscVideo : RscPicture
{
	autoPlay = 0;
	loops = 1;
};

class RscApplication: RscControlsGroupNoScrollbar
{
	idc = -1;
	x = 0.1 * (safezoneW / 40);
	y = 1 * (safezoneH / 25);
	w = 4.26 * (safezoneW / 40);
	h = 1.05 * (safezoneH / 25);
	class controls
	{
		class Back: RscText
		{
			idc = -1;
			x = 0 * (safezoneW / 40);
			y = 0 * (safezoneH / 25);
			w = 4.26 * (safezoneW / 40);
			h = 1 * (safezoneH / 25);
			colorBackground[] = {0,0,0,0.5};
		};
		class IconBack: RscText
		{
			idc = -1;
			x = 0.1 * (safezoneW / 40);
			y = 0.1 * (safezoneH / 25);
			w = 0.75 * (safezoneW / 40);
			h = 0.775 * (safezoneH / 25);
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
		};
		class Title: RscText
		{
			idc = -1;
			text = "Application";
			x = 1 * (safezoneW / 40);
			y = 0.1 * (safezoneH / 25);
			w = 4.26 * (safezoneW / 40);
			h = 0.775 * (safezoneH / 25);
		};
		class Icon: RscActivePicture
		{
			idc = -1;
			text = "#argb(8,8,3)color(1,1,1,1)";
			x = 0.2 * (safezoneW / 40);
			y = 0.2 * (safezoneH / 25);
			w = 0.55 * (safezoneW / 40);
			h = 0.575 * (safezoneH / 25);
		}; 
	};
};

class RscCombo
{
	access = 0;
	type = 4;
	style = "0x00 + 0x10 + 0x200";
	idc = -1;
	blinkingPeriod = 0;
	w = 0;
	h = 0;
	x = 0;
	y = 0;
	font = "RobotoCondensed";
	sizeEx = 0.5 * (safezoneH / 25);
	text = "";
	fixedWidth = 0;
	shadow = 0;
	tooltip = "";
	tooltipColorShade[] = {0,0,0,1};
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	colorText[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.5};
	colorSelect[] = {0,0,0,1};
	colorBackground[] = {0,0,0,1};
	colorSelectBackground[] = {1,1,1,1};
	pictureColor[] = {1,1,1,1};
	pictureColorSelect[] = {1,1,1,1};
	pictureColorDisabled[] = {1,1,1,0.5};
	arrowEmpty = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_ca.paa";
	arrowFull = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_active_ca.paa";
	wholeheight = 5 * (safezoneH / 25);
	maxHistoryDelay = 1;
	soundExpand[] = {"\A3\ui_f\data\sound\RscCombo\soundExpand",0.1,1};
	soundCollapse[] = {"\A3\ui_f\data\sound\RscCombo\soundCollapse",0.1,1};
	soundSelect[] = {"\A3\ui_f\data\sound\RscCombo\soundSelect",0.1,1};
	class ComboScrollbar : Scrollbar {};
};

class RscSlider : RscDefault
{
  type = 3;
  style = 0x400;
  color[] = {0,0,0,1};
  colorDisabled[] = {1,1,1,0.5};
  colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",0.5};
  // Control Links
  class Title
  {
    idc = -1;
    colorBase[] = {1,1,1,1};
    colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",0.75};
  };
  class Value
  {
    idc = -1;
    format = "%.f"; // %g (float) or %.f (integer)
    type = SPTPlain; // SPTPlain or SPTPercents
    colorBase[] = {1,1,1,1};
    colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",0.75};
  };
};

class RscXSlider : RscDefault
{
	type = 43;
	style = 0x400;
	color[] = {1,1,1,0.7};
	colorActive[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.25};
	sliderRange[] = {0,1};
	sliderPosition = 0;
	lineSize = 0.1;
	arrowEmpty = "\a3\3DEN\Data\Controls\CtrlXSlider\arrowEmpty_ca.paa"; // Arrow
	arrowFull = "\a3\3DEN\Data\Controls\CtrlXSlider\arrowFull_ca.paa"; // Arrow when clicked on
	border = "\a3\3DEN\Data\Controls\CtrlXSlider\border_ca.paa"; // Slider background (stretched vertically)
	thumb = "\a3\3DEN\Data\Controls\CtrlXSlider\thumb_ca.paa"; // Dragging element (stretched vertically)
};

class RscXSliderV : RscXSlider
{
	style = 0x01;
};

class RscProgress : RscDefault
{
  type = 8;
  texture = "#(argb,8,8,3)color(1,1,1,1)";
  colorBar[] = {1,1,1,1};
  colorFrame[] = {1,1,1,1};
};

class RscButton : RscDefault
{
  type = 1;
  style = 0x02 + 0xC0;
  colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
  colorBackgroundDisabled[] = {0,0,0,0.5};
  colorBackgroundActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
  colorFocused[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
  sizeEx = 0.5 * (safezoneH / 25);
  font = "PuristaLight";
  shadow = 0;
  colorText[] = {1,1,1,1};
  colorDisabled[] = {1,1,1,0.5};
  borderSize = 0;
  colorBorder[] = {1,1,1,1};
  colorShadow[] = {0,0,0,0.2};
  offsetX = 0;
  offsetY = 0;
  offsetPressedX = 0;
  offsetPressedY = 0;
  period = 1;
  periodFocus = 2;
  periodOver = 0.5;
  soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1};
  soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1};
  soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1};
  soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1};
};

class RscButtonBlack : RscButton
{
  colorBackground[] = {0,0,0,1};
  colorBackgroundDisabled[] = {0,0,0,0.2};
  colorBackgroundActive[] = {0,0,0,1};
  colorFocused[] = {0,0,0,1};
};

class RscButtonRed : RscButton
{
  colorBackground[] = {0.5,0.1,0.1,1};
  colorBackgroundDisabled[] = {0.3,0.05,0.05,1};
  colorBackgroundActive[] = {0.3,0.05,0.05,1};
  colorFocused[] = {0.5,0.1,0.1,1};
};

class RscButtonGreen : RscButton
{
  colorBackground[] = {0.13,0.54,0.21,1};
  colorBackgroundDisabled[] = {0.13,0.54,0.21,0.25};
  colorBackgroundActive[] = {0.10,0.43,0.17,1};
  colorFocused[] = {0.13,0.54,0.21,1};
};

class RscButtonShop : RscButton
{
    colorBackground[] = {0.0,0.0,0.0,0.8};
    font = "PuristaLight";
    style = 0x02;
    period = 0;
    periodFocus = 1;
    periodOver = 0;
    soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1};
    fade = 1;
};

class RscShortcutButton : RscDefault
{
  type = 16;
  colorBackground[] = {0,0,0,0.8};
  colorBackground2[] = {0,0,0,1};
  colorBackgroundFocused[] = {0,0,0,0.8};
  colorBackgroundActive[] = {0,0,0,1};
  color[] = {1,1,1,1};
  color2[] = {1,1,1,1};
  colorFocused[] = {1,1,1,1};
  colorDisabled[] = {1,1,1,0.5};
  animTextureNormal = "#(argb,8,8,3)color(1,1,1,1)";
  animTextureOver = "#(argb,8,8,3)color(1,1,1,1)";
  animTexturePressed = "#(argb,8,8,3)color(1,1,1,1)";
  animTextureFocused = "#(argb,8,8,3)color(1,1,1,1)";
  animTextureDisabled = "#(argb,8,8,3)color(1,1,1,1)";
  animTextureDefault = "#(argb,8,8,3)color(1,1,1,1)";
  period = 0.5;
  periodFocus = 0.5;
  periodOver = 0.5;
  shortcuts[] = {};
  textureNoShortcut = "#(argb,8,8,3)color(1,1,1,1)";
  soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1}; // Sound played after control is activated in format {file, volume, pitch}
  soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1}; // Sound played when mouse cursor enters the control
  soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1}; // Sound played when the control is pushed down
  soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1}; // Sound played when the control is released after pushing down
  class Attributes
  {
    align = "left";
    color = "#ffffff";
    font = "RobotoCondensed";
    shadow = 0;
  };
  class HitZone
  {
    left = 0;
    top = 0;
    right = 0;
    bottom = 0;
  };
  class TextPos
  {
    left = 0;
    top = 0;
    right = 0;
    bottom = 0;
  };
  class ShortcutPos
  {
    left = 0;
    top = 0;
    w = 0;
    h = 0;
  };
};

class RscEdit : RscDefault
{
  type = 2;
  style = 0x00;
  canModify = 1;
  autoComplete = "general"; // can be "scripting" or "general"
  colorText[] = {1,1,1,1};
  colorDisabled[] = {1,1,1,0.5};
  colorSelection[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
};

class RscListbox : RscDefault
{
  type = 5;
  style = 0x00 + 0x10;
  fixedWidth = 0;
  shadow = 0;
  colorText[] = {1,1,1,1};
  colorDisabled[] = {1,1,1,0.5};
  colorSelect[] = {1,1,1,1};
  colorSelect2[] = {1,1,1,1};
  colorShadow[] = {0,0,0,0.5};
  colorBackground[] = {0,0,0,1};
  colorSelectBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
  colorSelectBackground2[] = {0,0,0,1};
  pictureColor[] = {1,1,1,1};
  pictureColorSelect[] = {1,1,1,1};
  pictureColorDisabled[] = {1,1,1,0.5};
  arrowEmpty = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_ca.paa";
  arrowFull = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_active_ca.paa";
  rowHeight = 0.5 * (safezoneH / 25);
  itemSpacing = 0;
  maxHistoryDelay = 1;
  canDrag = 0;
  period = 0;
  soundExpand[] = {"\A3\ui_f\data\sound\RscCombo\soundExpand",0.1,1};
  soundCollapse[] = {"\A3\ui_f\data\sound\RscCombo\soundCollapse",0.1,1};
  soundSelect[] = {"\A3\ui_f\data\sound\RscCombo\soundSelect",0.1,1};
  class ListScrollbar : Scrollbar {};
};

class RscListNBox : RscDefault
{
  style = 0x00 + 0x10;
  type = 102;
  idcLeft = -1;
  idcRight = -1;
  columns[] = {0};
  colorText[] = {1,1,1,1};
  colorDisabled[] = {1,1,1,0.5};
  colorSelect[] = {1,1,1,1};
  colorSelect2[] = {1,1,1,1};
  colorShadow[] = {0,0,0,0.5};
  colorSelectBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
  colorSelectBackground2[] = {0,0,0,0.5};
  colorPicture[] = {1,1,1,1};
  colorPictureSelected[] = {1,1,1,1};
  colorPictureDisabled[] = {1,1,1,1};
  shadow = 0;
  disableOverflow = 0;
  drawSideArrows = 0;
  maxHistoryDelay = 0;
  rowHeight = 0.5 * (safezoneH / 25);
  arrowEmpty = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_ca.paa";
  arrowFull = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_active_ca.paa";
  soundExpand[] = {"\A3\ui_f\data\sound\RscCombo\soundExpand",0.1,1};
  soundCollapse[] = {"\A3\ui_f\data\sound\RscCombo\soundCollapse",0.1,1};
  soundSelect[] = {"\A3\ui_f\data\sound\RscCombo\soundSelect",0.1,1};
  class ListScrollBar : Scrollbar {};
};

class RcsLine : RscDefault
{
  style = 0xB0;
  idc = -1;
  colorBackground[] = {0,0,0,0};
  colorText[] = {1,1,1,1};
};

class RscCheckbox : RscDefault
{
  type = 77;
  style = 0x00 + 0x10;
  color[] = {1,1,1,0.7};
  colorText[] = {1,1,1,0.7};
  colorFocused[] = {1,1,1,1};
  colorHover[] = {1,1,1,1};
  colorPressed[] = {1,1,1,1};
  colorDisabled[] = {1,1,1,0.25};
  colorBackground[] = {0,0,0,0};
  colorBackgroundFocused[] = {0,0,0,0};
  colorBackgroundHover[] = {0,0,0,0};
  colorBackgroundPressed[] = {0,0,0,0};
  colorBackgroundDisabled[] = {0,0,0,0};
  textureChecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
  textureUnchecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
  textureFocusedChecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
  textureFocusedUnchecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
  textureHoverChecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
  textureHoverUnchecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
  texturePressedChecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
  texturePressedUnchecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
  textureDisabledChecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
  textureDisabledUnchecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
  soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1};
  soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1};
  soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1};
  soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1};
};

class RscToolbox : RscDefault
{
  type = 6;
	style = 0x02 + 0xC0;
	colorBackground[] = {0,0,0,0.8};
	colorText[] = {1,1,1,1};
	colorTextSelect[] = {1,1,1,1};
  	font = "PuristaMedium";
	rows = 1;
	columns = 1;
	strings[] = {};
	values[] = {};
	color[] = {1,1,1,0};
	colorSelect[] = {1,1,1,0};
	colorTextDisable[] = {1,1,1,0};
	colorDisable[] = {1,1,1,0};
	colorSelectedBg[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
};

class RscMapControl : RscDefault
{
  type = 101;
  style = 0x30;
  colorText[] = {1,1,1,1};
  moveOnEdges = 1;
  ptsPerSquareSea =	5;
  ptsPerSquareTxt =	20;
  ptsPerSquareCLn =	10;
  ptsPerSquareExp =	10;
  ptsPerSquareCost =	10;
  ptsPerSquareFor =	9;
  ptsPerSquareForEdge =	9;
  ptsPerSquareRoad =	6;
  ptsPerSquareObj =	9;
  scaleMin = 0.001;
  scaleMax = 1.0;
  scaleDefault = 0.16;
  alphaFadeStartScale = 0.5;
  alphaFadeEndScale = 0.5;
  maxSatelliteAlpha = 0.85;
  text = "#(argb,8,8,3)color(1,1,1,1)";
  colorBackground[] = {1,1,1,1};
  colorOutside[] = {0,0,0,1};
  colorSea[] = {0.4,0.6,0.8,0.5}; // Sea color
  colorForest[] = {0.6,0.8,0.4,0.5}; // Forest color
  colorForestBorder[] = {0.6,0.8,0.4,1}; // Forest border color
  colorRocks[] = {0,0,0,0.2}; // Rocks color
  colorRocksBorder[] = {0,0,0,1}; // Rocks border color
  colorLevels[] = {0.3,0.2,0.1,0.5}; // Elevation number color
  colorMainCountlines[] = {0.6,0.4,0.2,0.5}; // Main countline color (every 5th)
  colorCountlines[] = {0.6,0.4,0.2,0.3}; // Countline color
  colorMainCountlinesWater[] = {0.5,0.6,0.7,0.6}; // Main water countline color (every 5th)
  colorCountlinesWater[] = {0.5,0.6,0.7,0.3}; // Water countline color
  colorPowerLines[] = {0.1,0.1,0.1,1}; // Power lines color
  colorRailWay[] = {0.8,0.2,0,1}; // Railway color
  colorNames[] = {1.1,0.1,1.1,0.9}; // Unknown?
  colorInactive[] = {1,1,0,0.5}; // Unknown?
  colorTracks[] = {0.8,0.8,0.7,0.2}; // Small road border color
  colorTracksFill[] = {0.8,0.7,0.7,1}; // Small road color
  colorRoads[] = {0.7,0.7,0.7,1}; // Medium road border color
  colorRoadsFill[] = {1,1,1,1}; // Medium road color
  colorMainRoads[] = {0.9,0.5,0.3,1}; // Large road border color
  colorMainRoadsFill[] = {1,0.6,0.4,1}; // Large road color
  colorGrid[] = {0.1,0.1,0.1,0.6}; // Grid coordinate color
  colorGridMap[] = {0.1,0.1,0.1,0.6}; // Grid line color
  fontLabel = "RobotoCondensed"; // Tooltip font from CfgFontFamilies
  sizeExLabel = (safezoneH / 25) * 0.3;
  fontGrid = "TahomaB"; // Grid coordinate font from CfgFontFamilies
  sizeExGrid = (safezoneH / 25) * 0.3; // Grid coordinate font size
  fontUnits = "TahomaB"; // Selected group member font from CfgFontFamilies
  sizeExUnits = (safezoneH / 25) * 0.3; // Selected group member font size
  fontNames = "EtelkaNarrowMediumPro"; // Marker font from CfgFontFamilies
  sizeExNames = (safezoneH / 25) * 0.8; // Marker font size
  fontInfo = "RobotoCondensed"; // Unknown?
  sizeExInfo = (safezoneH / 25) * 0.3; // Unknown?
  fontLevel = "TahomaB"; // Elevation number font
  sizeExLevel = (safezoneH / 25) * 0.3; // Elevation number font size
  showCountourInterval = 0; // Show Legend
  class ActiveMarker
  {
    color[] = {0.30, 0.10, 0.90, 1.00};
    size = 50;
  };
  class Legend
	{
		x = "SafeZoneX + 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		y = "SafeZoneY + safezoneH - 4.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		h = "3.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		font = "RobotoCondensed";
		sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
		colorBackground[] = {1,1,1,0.5};
		color[] = {0,0,0,1};
	};
	class Task
	{
		icon = "\A3\ui_f\data\map\mapcontrol\taskIcon_CA.paa";
		iconCreated = "\A3\ui_f\data\map\mapcontrol\taskIconCreated_CA.paa";
		iconCanceled = "\A3\ui_f\data\map\mapcontrol\taskIconCanceled_CA.paa";
		iconDone = "\A3\ui_f\data\map\mapcontrol\taskIconDone_CA.paa";
		iconFailed = "\A3\ui_f\data\map\mapcontrol\taskIconFailed_CA.paa";
		color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		colorCreated[] = {1,1,1,1};
		colorCanceled[] = {0.7,0.7,0.7,1};
		colorDone[] = {0.7,1,0.3,1};
		colorFailed[] = {1,0.3,0.2,1};
		size = 27;
		importance = 1;
		coefMin = 1;
		coefMax = 1;
	};
  class Waypoint {
    icon = "\A3\ui_f\data\map\mapcontrol\waypoint_ca.paa";
    color[] = {0.00, 0.00, 0.00, 1.00};
    size = 24;
    importance = 1.00;
    coefMin = 1.00;
    coefMax = 1.00;
  };
  class WaypointCompleted {
    icon = "\A3\ui_f\data\map\mapcontrol\waypointCompleted_ca.paa";
    color[] = {0.00, 0.00, 0.00, 1.00};
    size = 24;
    importance = 1.00;
    coefMin = 1.00;
    coefMax = 1.00;
  };
	class CustomMark
	{
		icon = "\A3\ui_f\data\map\mapcontrol\custommark_ca.paa";
		size = 24;
		importance = 1;
		coefMin = 1;
		coefMax = 1;
		color[] = {0,0,0,1};
	};
	class Command
	{
		icon = "\A3\ui_f\data\map\mapcontrol\waypoint_ca.paa";
		size = 18;
		importance = 1;
		coefMin = 1;
		coefMax = 1;
		color[] = {1,1,1,1};
	};
	class Bush
	{
		icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
		color[] = {0.45,0.64,0.33,0.4};
		size = "14/2";
		importance = "0.2 * 14 * 0.05 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class Rock
	{
		icon = "\A3\ui_f\data\map\mapcontrol\rock_ca.paa";
		color[] = {0.1,0.1,0.1,0.8};
		size = 12;
		importance = "0.5 * 12 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class SmallTree
	{
		icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
		color[] = {0.45,0.64,0.33,0.4};
		size = 12;
		importance = "0.6 * 12 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class Tree
	{
		icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
		color[] = {0.45,0.64,0.33,0.4};
		size = 12;
		importance = "0.9 * 16 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class busstop
	{
		icon = "\A3\ui_f\data\map\mapcontrol\busstop_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {1,1,1,1};
	};
	class fuelstation
	{
		icon = "\A3\ui_f\data\map\mapcontrol\fuelstation_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {1,1,1,1};
	};
	class hospital
	{
		icon = "\A3\ui_f\data\map\mapcontrol\hospital_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {1,1,1,1};
	};
	class church
	{
		icon = "\A3\ui_f\data\map\mapcontrol\church_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {1,1,1,1};
	};
	class lighthouse
	{
		icon = "\A3\ui_f\data\map\mapcontrol\lighthouse_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {1,1,1,1};
	};
	class power
	{
		icon = "\A3\ui_f\data\map\mapcontrol\power_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {1,1,1,1};
	};
	class powersolar
	{
		icon = "\A3\ui_f\data\map\mapcontrol\powersolar_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {1,1,1,1};
	};
	class powerwave
	{
		icon = "\A3\ui_f\data\map\mapcontrol\powerwave_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {1,1,1,1};
	};
	class powerwind
	{
		icon = "\A3\ui_f\data\map\mapcontrol\powerwind_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {1,1,1,1};
	};
	class quay
	{
		icon = "\A3\ui_f\data\map\mapcontrol\quay_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {1,1,1,1};
	};
	class transmitter
	{
		icon = "\A3\ui_f\data\map\mapcontrol\transmitter_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {1,1,1,1};
	};
	class watertower
	{
		icon = "\A3\ui_f\data\map\mapcontrol\watertower_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {1,1,1,1};
	};
	class Cross
	{
		icon = "\A3\ui_f\data\map\mapcontrol\Cross_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {0,0,0,1};
	};
	class Chapel
	{
		icon = "\A3\ui_f\data\map\mapcontrol\Chapel_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {0,0,0,1};
	};
	class Shipwreck
	{
		icon = "\A3\ui_f\data\map\mapcontrol\Shipwreck_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {0,0,0,1};
	};
	class Bunker
	{
		icon = "\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";
		size = 14;
		importance = "1.5 * 14 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
		color[] = {0,0,0,1};
	};
	class Fortress
	{
		icon = "\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";
		size = 16;
		importance = "2 * 16 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
		color[] = {0,0,0,1};
	};
	class Fountain
	{
		icon = "\A3\ui_f\data\map\mapcontrol\fountain_ca.paa";
		size = 11;
		importance = "1 * 12 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
		color[] = {0,0,0,1};
	};
	class Ruin
	{
		icon = "\A3\ui_f\data\map\mapcontrol\ruin_ca.paa";
		size = 16;
		importance = "1.2 * 16 * 0.05";
		coefMin = 1;
		coefMax = 4;
		color[] = {0,0,0,1};
	};
	class Stack
	{
		icon = "\A3\ui_f\data\map\mapcontrol\stack_ca.paa";
		size = 20;
		importance = "2 * 16 * 0.05";
		coefMin = 0.9;
		coefMax = 4;
		color[] = {0,0,0,1};
	};
	class Tourism
	{
		icon = "\A3\ui_f\data\map\mapcontrol\tourism_ca.paa";
		size = 16;
		importance = "1 * 16 * 0.05";
		coefMin = 0.7;
		coefMax = 4;
		color[] = {0,0,0,1};
	};
	class ViewTower
	{
		icon = "\A3\ui_f\data\map\mapcontrol\viewtower_ca.paa";
		size = 16;
		importance = "2.5 * 16 * 0.05";
		coefMin = 0.5;
		coefMax = 4;
		color[] = {0,0,0,1};
	};
	class LineMarker
	{
		lineDistanceMin = 3e-005;
		lineLengthMin = 5;
		lineWidthThick = 0.014;
		lineWidthThin = 0.008;
		textureComboBoxColor = "#(argb,8,8,3)color(1,1,1,1)";
	};
};

#include "displays.hpp"