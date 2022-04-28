/*
	## EXTREMO
	## Nikko Renolds
*/

//--- BASE
#include "\a3\ui_f\hpp\definedikcodes.inc"

//--- SYSTEM
#define true 1
#define false 0
#define disabled -1

#define IDC_OK 1 //emulate "Ok" button 
#define IDC_CANCEL 2 //emulate "Cancel" button

//--- UI (Fonts)
#define FONT_LIGHT    			"PuristaLight"
#define FONT_HEAVY    			"RobotoCondensed"
#define FONT_BOLD     			"RobotoCondensed"
#define FONT_ALT_LIGHT			"RobotoCondensed"
#define FONT_ALT_NORMAL 		"RobotoCondensed"
#define FONT_ALT_BOLD 			"RobotoCondensed"
#define FontM         			"Zeppelin32"

//--- UI (Helpers)
#define GUI_GRID_X(GRID) 				(GRID * 0.0103125 + 0.29375) * safeZoneW + safeZoneX
#define GUI_GRID_Y(GRID) 				(GRID * 0.022 + 0.225) * safeZoneH + safeZoneY
#define GUI_GRID_W(GRID) 				(GRID * 0.0103125) * safeZoneW
#define GUI_GRID_H(GRID) 				(GRID * 0.022) * safeZoneH

//--- Config (Helpers)
#define DBRIEF(CLASSNAME, TITLE, SUBTITLE, DESC)\
class CLASSNAME { \
	title = TITLE; \
	subtitle = SUBTITLE; \
	description = DESC; \
	pictureBackground = "\Extremo_assets\texture\logo_debriefing.paa"; \
	picture = ""; \
	pictureColor[] = {0, 0.3, 0.6, 1}; \
}

//--- RemoteExec (Helpers)
#define ExtremoRE_Setup(MODE,JIP) mode = MODE; jip = JIP
#define ExtremoRE_Class(RECLASS,TARGET,JIP) class RECLASS { allowedTargets = TARGET; jip = JIP; }
#define ExtremoRE_Global(RECLASS) ExtremoRE_Class(RECLASS,0,false)
#define ExtremoRE_Client(RECLASS) ExtremoRE_Class(RECLASS,1,false)
#define ExtremoRE_Server(RECLASS) ExtremoRE_Class(RECLASS,2,false)
#define ExtremoRE_GlobalJIP(RECLASS) ExtremoRE_Class(RECLASS,0,true)
#define ExtremoRE_ClientJIP(RECLASS) ExtremoRE_Class(RECLASS,1,true)
#define ExtremoRE_ServerJIP(RECLASS) ExtremoRE_Class(RECLASS,2,true)