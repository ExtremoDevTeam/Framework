params [
	["_title","",[""]],
	["_titleColor",[],[[1,1,1,1]]],
	["_subtitle","",[""]],
	["_background",false,[false]],
	["_keepOpen",false]
];

private _display = uiNamespace getVariable ["RscExtremo_SplashScreen",displayNull];
private _displayCtrlTitle = _display displayCtrl 1;
private _displayCtrlSubtitle = _display displayCtrl 2;
private _layer1 = ["RscExtremo_SplashScreenBlackoutLayer"] call BIS_fnc_rscLayer;
private _layer2 = ["RscExtremo_SplashScreenNoiseLayer"] call BIS_fnc_rscLayer;
private _layer3 = ["RscExtremo_SplashScreenLayer"] call BIS_fnc_rscLayer;
private _staticBGActive = not(false in ([_layer1,_layer2] apply {_x in allActiveTitleEffects}));
private _dynamicTextCallback = "%Loading%";

//--- Handle callbacks
["_title"] call Extremo_fnc_system_replacmentCallback; 
["_subtitle"] call Extremo_fnc_system_replacmentCallback;
["_dynamicTextCallback"] call Extremo_fnc_system_replacmentCallback;

//--- Get controls
_displayCtrlTitle ctrlSetText toUpper _title;
_displayCtrlTitle ctrlSetTextColor _titleColor;

//--- Setup dynamic subtitle
if(_subtitle isEqualTo _dynamicTextCallback)then{
	if(isNil "Extremo_var_splash_dynamicTextTimer")then{Extremo_var_splash_dynamicTextTimer = diag_tickTime + 1.5};
	if(isNil "Extremo_var_splash_dynamicText")then{Extremo_var_splash_dynamicText = 0};
	
	if (Extremo_var_splash_dynamicTextTimer - diag_ticktime < 0) then 
	{
		if(Extremo_var_splash_dynamicText > 3)then{
			Extremo_var_splash_dynamicText = 0;
		};

		_displayCtrlSubtitle ctrlSetText format[switch (Extremo_var_splash_dynamicText) do {
			case 3: {"%1..."};
			case 2: {"%1.."};
			case 1: {"%1."};
			default {"%1"};
		},"please wait"];

		Extremo_var_splash_dynamicText = Extremo_var_splash_dynamicText + 1;
		Extremo_var_splash_dynamicTextTimer = nil;
	};
}else{
	_displayCtrlSubtitle ctrlSetText _subtitle;
};

//-- Toggle background overlay
if !_staticBGActive then{
	if _background then{
		_layer1 cutText ["", "BLACK OUT", 0.00001];
		_layer2 cutRsc ["SPLASHNOISE", "PLAIN",3];
	};
};

//--- Timer
if (Extremo_var_splashTimer - diag_ticktime < 0 || isNull _display || isNil "Extremo_var_splashTimer") then 
{
	removeMissionEventHandler ["EachFrame", Extremo_var_splashTimerEVH];
	
	if _keepOpen then{
		_displayCtrlTitle ctrlSetText ""; 
		_displayCtrlSubtitle ctrlSetText "";
	}else{
		if _background then { 
			[_layer1, "", "BLACK IN", 3] call Extremo_fnc_system_destroyLayer;
			[_layer2, "", "BLACK IN", 0.00001] call Extremo_fnc_system_destroyLayer; 
		};
		
		[_layer3, 2] call Extremo_fnc_system_destroyLayer;
	};

	Extremo_var_splashTimer = nil;
	Extremo_var_splashTimerEVH = nil;
};

//--- 
true