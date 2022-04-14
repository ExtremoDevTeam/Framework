/*
#include "\a3\UI_F_Contact\UI\resincl.inc"
#include "\a3\Functions_F_Contact\EM_Core\defines.inc"

#define REFRESH		0.08
#define FADE		0.20
#define WIDTH_COEF	1.25

params ["_mode","_params"];

if (_mode == "onDraw") exitwith {

	PROFILING_START("RscHorizontalCompass");

	_params params ["_ctrlGroup","_skipFrame"];
	if (_skipFrame && {time < (_ctrlGroup getvariable "t")}) exitwith {
		PROFILING_STOP("RscHorizontalCompass");
	};
	_ctrlGroup setvariable ["t",time + REFRESH];

	//_ctrlGroup = ctrlparentcontrolsgroup _ctrlMap;
	_ctrlCompass = _ctrlGroup controlsgroupctrl IDC_RSCHORIZONTALCOMPASS_COMPASS;
	_diff = difficultyOption "waypoints";
	if (visiblemap || {!(shownhud # 0) || {vehicle player != cameraon || {_diff == 0 && {!isnull (_ctrlGroup controlsgroupctrl IDC_RSCHORIZONTALCOMPASS_MAP)}}}}) exitwith {
		_ctrlCompass ctrlsetfade 1;
		_ctrlCompass ctrlcommit 0;
		PROFILING_STOP("RscHorizontalCompass");
	};
	_ctrlCompass ctrlsetfade (if (_diff == 1) then {0.75} else {0});
	_ctrlCompass ctrlcommit 0;

	PROFILING_START("RscHorizontalCompass: Rotate");

	(_ctrlGroup getvariable "vars") params [
		"_posCompassBarWView",
		"_posCompassBarWViewHalf",
		"_posCompassBarWViewOneHalf",
		"_posOffsetW"
	];

	_dir = positionCameraToWorld [0,0,0] getdir positionCameraToWorld [0,0,10];
	_ctrlGroupBar1 = _ctrlGroup controlsgroupctrl IDC_RSCHORIZONTALCOMPASS_BAR_1;
	_ctrlGroupBar2 = _ctrlGroup controlsgroupctrl IDC_RSCHORIZONTALCOMPASS_BAR_2;

	//---- Get current positions
	_ctrlGroupBar1PosX = ctrlposition _ctrlGroupBar1 # 0;

	//--- Convert direction to UI position
	_posCompassBarX1 = linearconversion [360,0,_dir,-_posCompassBarWViewHalf,_posCompassBarWViewHalf] - _posOffsetW;

	//--- Determine where to place the secondary bar
	_shifted = _posCompassBarX1 > 0;
	_shiftedPrev = _ctrlGroup getvariable ["bin_shifted",false];
	if (_shifted) then {_posCompassBarX1 = _posCompassBarX1 - _posCompassBarWView;};
	if (!(_shifted isequalto _shiftedPrev) && {abs (_dir - 180) < 90}) then {
		_ctrlGroupBar1PosX = if (_shifted && !_shiftedPrev) then {_ctrlGroupBar1PosX - _posCompassBarWView} else {_ctrlGroupBar1PosX + _posCompassBarWView};
		_ctrlGroupBar1 ctrlsetpositionX _ctrlGroupBar1PosX;
		_ctrlGroupBar2 ctrlsetpositionX (_ctrlGroupBar1PosX - _posCompassBarWView);
		_ctrlGroupBar1 ctrlcommit 0;
		_ctrlGroupBar2 ctrlcommit 0;
	};

	//--- Smooth transition
	_posCompassBarX2 = linearconversion [0,1,0.55,_ctrlGroupBar1PosX,_posCompassBarX1];
	_ctrlGroupBar1 ctrlsetpositionX _posCompassBarX2;
	_ctrlGroupBar2 ctrlsetpositionX (_posCompassBarX2 - _posCompassBarWView);
	_ctrlGroupBar1 ctrlcommit REFRESH;
	_ctrlGroupBar2 ctrlcommit REFRESH;
	_ctrlGroup setvariable ["bin_shifted",_shifted];

	PROFILING_STOP("RscHorizontalCompass: Rotate");

	PROFILING_START("RscHorizontalCompass: Current Task");

	//--- Get position of the current task
	_taskPosition = [];
	_taskIn = false;
	if !(isnil "BIN_fnc_setTaskLocal_current") then {
		BIN_fnc_setTaskLocal_current params ["_taskDataType","_taskData","_taskAntenna"];
		if (_taskAntenna != "" && {_taskAntenna call bin_fnc_isAntennaRevealed}) then {
			//--- Antenna
			_draw = GET_SCAN_DRAW(_taskAntenna call bin_fnc_getAntennaScans);
			_taskPosition = GET_DRAW_ICON_POS(_draw);
			if (GET_DRAW_TYPE(_draw) == 0) then {_taskIn = position cameraon inpolygon GET_DRAW_POLYGON(_draw);}; //--- Use area only when not tracked
		} else {
			//--- Position
			if (_taskDataType == 0) exitwith {
				_taskPosition = _taskData;
			};
			//--- Area
			if (_taskDataType == 2) exitwith {
				_taskPosition = _taskData # 0;
				_taskIn = cameraon inarea _taskData;
			};
			//--- Object
			if (_taskDataType == 1) exitwith {
				_taskPosition = position _taskData;
			};
		};
	};

	if !(_taskIn isequalto (_ctrlGroup getvariable ["taskIn",0])) then {
		_ctrlGroup setvariable ["taskIn",_taskIn];

		_ctrlCurrentTaskIn = _ctrlGroup controlsgroupctrl IDC_RSCHORIZONTALCOMPASS_CURRENT_TASK_IN;
		_ctrlCurrentTaskArea = _ctrlGroup controlsgroupctrl IDC_RSCHORIZONTALCOMPASS_CURRENT_TASK_AREA;
		_inFade = [1,0] select _taskIn;//linearconversion [0,1,0.42,ctrlfade _ctrlCurrentTaskArea,[1,0] select _taskIn];
		{
			_x ctrlsetfade _inFade;
			_x ctrlcommit FADE;
		} foreach [_ctrlCurrentTaskIn,_ctrlCurrentTaskArea];
	};

	PROFILING_STOP("RscHorizontalCompass: Current Task");

	PROFILING_START("RscHorizontalCompass: Danger Zone");

	//--- Danger zone
	_dangerIn = missionnamespace getvariable ["bin_inDangerZone",false];
	if !(_dangerIn isequalto (_ctrlGroup getvariable ["dangerIn",0])) then {
		_ctrlGroup setvariable ["dangerIn",_dangerIn];

		_ctrlDangerZone = _ctrlGroup controlsgroupctrl IDC_RSCHORIZONTALCOMPASS_DANGER_ZONE;
		_ctrlDangerZone ctrlsetfade ([1,0] select _dangerIn);
		_ctrlDangerZone ctrlcommit FADE;
	};

	PROFILING_STOP("RscHorizontalCompass: Danger Zone");

	PROFILING_START("RscHorizontalCompass: Icons");

	_hq = missionnamespace getvariable ["bin_hq",objnull];
	#define SHOW_ICON(CONDITION,POSITION,IDC)\
		if (CONDITION) then {\
			_pos = linearconversion [-180,+180,player getdir POSITION,_posCompassBarWViewHalf,_posCompassBarWViewOneHalf];\
			{\
				_ctrl = _x controlsgroupctrl IDC;\
				_ctrl ctrlshow true;\
				_ctrl ctrlsetpositionX _pos;\
				_ctrl ctrlcommit (if (abs ((ctrlposition _ctrl select 0) - _pos) > 0.5) then {0} else {ANALYZER_REFRESH});\
			} foreach [_ctrlGroupBar1,_ctrlGroupBar2];\
		} else {\
			{\
				(_x controlsgroupctrl IDC) ctrlshow false;\
			} foreach [_ctrlGroupBar1,_ctrlGroupBar2];\
		};

	SHOW_ICON(!(_taskPosition isequalto []) && !_taskIn,	_taskPosition,			IDC_RSCHORIZONTALCOMPASS_CURRENT_TASK)
	SHOW_ICON(!isnull _hq && {GET_ANTENNA == "Antenna_01"},	position _hq,			IDC_RSCHORIZONTALCOMPASS_HQ)
	SHOW_ICON(!(customWaypointPosition isequalto []),		customWaypointPosition,	IDC_RSCHORIZONTALCOMPASS_CUSTOM_MARK)

	PROFILING_STOP("RscHorizontalCompass: Icons");

	PROFILING_STOP("RscHorizontalCompass");
};

if (_mode == "onLoad") exitwith {
	_params params ["_ctrlGroup"];

	ctrlposition _ctrlGroup params ["_posX","_posY","_posW","_posH"];
	_posWBar = _posW * WIDTH_COEF;
	_posWIcon = _posh * 3/4;

	//--- Resize to fit current position
	{
		_ctrlBar = _ctrlGroup controlsgroupctrl _x;
		_ctrlBar ctrlsetposition [0,0,_posWBar * 3,_posH];
		_ctrlBar ctrlcommit 0;
		{
			_ctrl = _ctrlBar controlsgroupctrl (_x # 0);
			_ctrl ctrlsetposition [_posWBar * (_x # 1),0,_posWIcon,_posH];
			_ctrl ctrlsetfontHeight (_posH * 0.75);
			_ctrl ctrlcommit 0;
		} foreach [
			[IDC_RSCHORIZONTALCOMPASS_N,				1.00],
			[IDC_RSCHORIZONTALCOMPASS_E,				1.25],
			[IDC_RSCHORIZONTALCOMPASS_S,				1.50],
			[IDC_RSCHORIZONTALCOMPASS_W,				1.75],
			[IDC_RSCHORIZONTALCOMPASS_HQ,				0.00],
			[IDC_RSCHORIZONTALCOMPASS_CURRENT_TASK,		0.00],
			[IDC_RSCHORIZONTALCOMPASS_CUSTOM_MARK,		0.00]
		];
	} foreach [
		IDC_RSCHORIZONTALCOMPASS_BAR_1,
		IDC_RSCHORIZONTALCOMPASS_BAR_2
	];

	{
		_ctrlTaskArea = _ctrlGroup controlsgroupctrl _x;
		_ctrlTaskArea ctrlsetposition [0,0,_posW,_posH];
		_ctrlTaskArea ctrlcommit 0;
	} foreach [
		IDC_RSCHORIZONTALCOMPASS_COMPASS,
		IDC_RSCHORIZONTALCOMPASS_BACKGROUND,
		IDC_RSCHORIZONTALCOMPASS_DANGER_ZONE,
		IDC_RSCHORIZONTALCOMPASS_CURRENT_TASK_AREA
	];

	_ctrlTaskArea = _ctrlGroup controlsgroupctrl IDC_RSCHORIZONTALCOMPASS_CURRENT_TASK_IN;
	_ctrlTaskArea ctrlsetposition [_posW / 2 - _posWIcon / 2,0,_posWIcon,_posH];
	_ctrlTaskArea ctrlcommit 0;

	_ctrlTaskArea = _ctrlGroup controlsgroupctrl IDC_RSCHORIZONTALCOMPASS_CENTER;
	_ctrlTaskArea ctrlsetposition [_posW / 2 - _posWIcon / 2,0,_posWIcon,_posH];
	_ctrlTaskArea ctrlcommit 0;

	//--- Pre-calculate variables
	_ctrlGroupBar1 = _ctrlGroup controlsgroupctrl IDC_RSCHORIZONTALCOMPASS_BAR_1;
	_ctrlGroupBar2 = _ctrlGroup controlsgroupctrl IDC_RSCHORIZONTALCOMPASS_BAR_2;
	ctrlposition _ctrlGroupBar1 params ["","_posCompassBarY","_posCompassBarW","_posCompassBarH"];
	_posCompassBarWView = _posCompassBarW / 3;
	_posCompassBarWViewHalf = _posCompassBarWView * 0.5;
	_posCompassBarWViewOneHalf = _posCompassBarWView * 1.5;
	_posOffsetW = (_posCompassBarWView - _posW) / 2 + _posCompassBarH * 3/8;
	_ctrlGroup setvariable [
		"vars",
		[
			_posCompassBarWView,
			_posCompassBarWViewHalf,
			_posCompassBarWViewOneHalf,
			_posOffsetW
		]
	];

	_ctrlMap = ctrlparent _ctrlGroup displayctrl IDC_RSCHORIZONTALCOMPASS_MAP;
	if (isnull _ctrlMap) exitwith {};

	_posCompassBarX1 = 0;
	["onDraw",[_ctrlMap],""] call (uinamespace getvariable 'RscHorizontalCompass_script');
	_ctrlGroupBar1 ctrlsetpositionX _posCompassBarX1;
	_ctrlGroupBar2 ctrlsetpositionX (_posCompassBarX1 - _posCompassBarWView);
	_ctrlGroupBar1 ctrlcommit 0;
	_ctrlGroupBar2 ctrlcommit 0;
};
*/