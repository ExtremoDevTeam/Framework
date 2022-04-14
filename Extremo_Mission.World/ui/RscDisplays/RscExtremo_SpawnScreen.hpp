/*
	## EXTREMO
	## Nikko Renolds
*/

class RscExtremo_SpawnScreen 
{
	idd = 1000;
	movingEnabled = 0;
	enableSimulation = 1;
    onLoad = "[_this#0,'onLoad'] call extremo_fnc_gui_spawnScreenEH";
    onUnLoad = "[_this#0,'onUnLoad'] call extremo_fnc_gui_spawnScreenEH";
    
	class controlsBackground
	{
		class Background: RscText
		{
			idc = 1;
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.165 * safezoneW;
			h = 0.308 * safezoneH;
			colorBackground[] = {0, 0, 0, 0.8};
		};
		class Header: Background
		{
            idc = 2;
			text = "Available Spawns";
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,1};
		};
  	};
    
	class controls
	{ 
		class Info: RscText
		{
			idc = 3;
			text = "";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.165 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class Selection: RscListNBox
		{
			idc = 4;
			text = "";
			sizeEx = 0.041;
			coloumns[] = {0,0,0.9};
			drawSideArrows = false;
			idcLeft = -1;
			idcRight = -1;
			rowHeight = 0.050;
			x = 0.422657 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.154687 * safezoneW;
			h = 0.22 * safezoneH;
			onLBSelChanged = "[_this#0,'onLBSelChanged',_this select [1, count _this]] spawn extremo_fnc_gui_spawnScreenEH";
		};
		class Confirm: RscButton
		{
			idc = 5;
			text = "Spawn";
			x = 0.45875 * safezoneW + safezoneX;
			y = 0.654 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.022 * safezoneH;
			onButtonClick = "[_this#0,'onConfirmClick'] spawn extremo_fnc_gui_spawnScreenEH";
			class Attributes
			{
				align = "center";
			};
		};
	};
};