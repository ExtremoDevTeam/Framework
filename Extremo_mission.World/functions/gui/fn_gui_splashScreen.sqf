/*
	## EXTREMO
	## Nikko Renolds
*/

disableSerialization;

params [
	["_displayTime",0,[0]],
	["_title","",["",[]]],
	["_subtitle","",[""]],
	["_background",true],
	["_blockEscapeKey",true],
	["_keepOpen",false]
];

extremo_var_dik_blockESC = _blockEscapeKey;

private _titleColor = [
	0, //Red
	1, //Green
	0, //Blue
	1  //Alpha
];

if(typeName _title isEqualTo "ARRAY")then{
	_title params [
		["_text","",[""]],
		["_color",[],[_titleColor]]
	];
	_title = _text;
	_titleColor = _color;
};

if (_title isEqualTo "ERROR") then {
	_titleColor = [
		1, //Red
		0, //Green
		0, //Blue
		1  //Alpha
	];
	if (_subtitle isNotEqualTo "") then {
		diag_log format["Extremo Error: %1",_subtitle];	
	};
};

private _display = compile 'uiNamespace getVariable ["RscExtremo_SplashScreen",displayNull]';
private _layer1 = ["RscExtremo_SplashScreenBlackoutLayer"] call BIS_fnc_rscLayer;
private _layer2 = ["RscExtremo_SplashScreenNoiseLayer"] call BIS_fnc_rscLayer;
private _layer3 = ["RscExtremo_SplashScreenLayer"] call BIS_fnc_rscLayer;
private _staticBGActive = not(false in ([_layer1,_layer2] apply {_x in allActiveTitleEffects}));
private _backgrounds = getArray(configFile >> 'CfgMods' >> 'Extremo' >> 'LoadingScreen' >> 'pictures');

//--- toggle background overlay
if _staticBGActive then{
	if !_background then{
		[_layer1, "", "BLACK IN", 0.00001] call Extremo_fnc_system_destroyLayer;
		[_layer2, "", "BLACK IN", 3] call Extremo_fnc_system_destroyLayer;
	};
}else{
	if _background then{
		_layer1 cutText ["", "BLACK OUT", 0.00001];
		_layer2 cutRsc ["SplashNoise", "PLAIN",3];
		private _layer2Display = uiNamespace getVariable ['SplashNoise',displayNull];
		private _layer2DisplayBGCrtl = _layer2Display displayCtrl 66000;
		_layer2DisplayBGCrtl ctrlSetText (selectRandom _backgrounds);
	};
};

//--- create overlay
if(isNull(call _display))then{
	_layer3 cutRsc ["RscExtremo_SplashScreen", "PLAIN"];
};

//--- terminate any running events 
if(!isNil "Extremo_var_splashTimerEVH")then{ 
	removeMissionEventHandler ["EachFrame", Extremo_var_splashTimerEVH];
	Extremo_var_splashTimerEVH = nil;
};

//--- call\register update event
if(_displayTime <= 0)then{ 
	Extremo_var_splashTimer = diag_tickTime + 99999;
	[_title,_titleColor,_subtitle,false] call Extremo_fnc_gui_splashScreenEH;
}else{
	Extremo_var_splashTimer = diag_tickTime + _displayTime;
	Extremo_var_splashTimerEVH = addMissionEventHandler [
		"EachFrame",
		{_thisArgs call Extremo_fnc_gui_splashScreenEH},
		[_title,_titleColor,_subtitle,_background,_keepOpen]
	];
};

true