/*
	## EXTREMO Survival
	## Nikko Renolds
*/
if !(hasInterFace) exitWith {false};


if (missionName isEqualTo "ExtremoIntro") then {
	diag_log "Intro PreInit...";
	if (uiNameSpace getVariable ["ExtremoNeedsPreloading", true]) then { 
		[] spawn  {
			diag_log "Preloading materials...";
			waitUntil {10 preloadObject "Extremo_Preloader"};
			uiNameSpace setVariable ["ExtremoNeedsPreloading", false];
			diag_log "Preloading completed!";
		};
	};
} else {
	diag_log "Mission PreInit...";
	ExtremoClientIsWaitingForInventoryMoneyTransaction = false;
	ExtremoClientLastDiedPlayerObject = objNull;
	ExtremoClientSafeZoneVehicle = objNull;
	ExtremoClientIsWaitingForServerTradeResponse = false;
	ExtremoClientPlayerLastSafeZoneCheckAt = 0;
	ExtremoClientPartyMapMarkers = [];
	ExtremoPartyEspMode = 0;
	ExtremoClientPlayerIsInSecurityCamera = false;
	ExtremoClientBush = objNull;
	ExtremoClientIsInBush = false;
	ExtremoClientIsHandcuffed = false;
	ExtremoClientBreakFreeActionHandle = -1;
	ExtremoClientHostageTaker = objNull;
	ExtremoClientAllowPartyMarkers = (getNumber (configFile >> "CfgExtremoParty" >> "showESP")) isEqualTo 1;
	ExtremoIsPlayingRussianRoulette = false;
	ExtremoRussianRouletteHudVisible = false;
	ExtremoRussianRouletteChair = objNull;
	ExtremoRussianRouletteCountDownThread = -1;
	ExtremoRussianRouletteCanEscape = false;
	ExtremoRussianRouletteNextShotIsFatal = false;
	ExtremoClientEnvironmentTemperature = 20;
	ExtremoClientLastTemperatureUpdateAt = diag_tickTime;
	ExtremoClientCurrentAnimal = objNull;
	ExtremoClientToasts = [];
	ExtremoClientToastAreaVisible = false;
	ExtremoClientLastToastTickAt = diag_tickTime;
	ExtremoBaguetteIsVisible = false;
	ExtremoClientBaguetteAreaVisible = false;
	ExtremoClientLoginHasPlayerResponse = nil;
	ExtremoClientSkipNextRespawnEvent = true;
	ExtremoClientBleedOutThread = -1;
	ExtremoClientLastLocation = ""; 
	ExtremoClientLastTakeAllAt = diag_tickTime;
	ExtremoClientPartyID = -1;
	ExtremoClientPendingPartyInvitionGroup = objNull;
	ExtremoClientPendingClanInvite = [];
	ExtremoClientClanInfo = [];
	ExtremoClinetInClan = 0;
	ExtremoClientCurrentInventoryContainer = objNull;
	ExtremoClientCurrentInventorySecondaryContainer = objNull;
	ExtremoPlayerInSafezone = false;
	ExtremoClientLastVehicle = objNull;
	ExtremoClientEndBambiStateThread = -1;
	ExtremoClientDeliriumThread = -1;
	ExtremoClientServerIsInitializing = false;
	ExtremoClientSelectedInventoryItem = nil;
	ExtremoClientPlayerIsSpawned = false;
	ExtremoClientLastStatusIconBlinkAt = diag_tickTime;
	ExtremoClientStatusIconsVisible = false;
	ExtremoClientInventoryOpened = false;
	ExtremoClientShowHUDDetails = false;
	ExtremoClientPlayerIsInjured = false;
	ExtremoClientEarplugsInserted = false;
	ExtremoClientBulletCamShouldBeVisible = false;
	ExtremoClientBulletCamIsVisible = false;
	ExtremoClientBulletCamera = nil;
	ExtremoClientBulletCameraThread = nil;
	ExtremoClientInteractionObject = objNull;
	ExtremoClientInteractionHandles = [];
	ExtremoClientInteractionLastHookTime = 0;
	ExtremoClientConstructionMode = 1;
	ExtremoClientConstructionConfig = objNull;
	ExtremoClientConstructionShowHint = true;
	ExtremoClientIsInConstructionMode = false; 
	ExtremoClientConstructionOffset = [0, 5, 1];
	ExtremoClientConstructionPosition = [0, 0, 0];
	ExtremoClientConstructionRotation = 0;
	ExtremoClientConstructionStartPosition = [0, 0, 0];
	ExtremoClientConstructionObject = objNull; 
	ExtremoClientConstructionKitClassName = ""; 
	ExtremoClientConstructionObjectDisplayName = ""; 
	ExtremoClientConstructionResult = 0;
	ExtremoClientConstructionProcess = 0;
	ExtremoClientConstructionBoundingRadius = 0;
	ExtremoClientConstructionPossibleSnapPositions = [];
	ExtremoClientConstructionSnapToObjectClassNames = [];
	ExtremoClientConstructionSupportSnapMode = false;
	ExtremoClientConstructionIsSnapped = false;
	ExtremoClientConstructionCanPlaceObject = false;
	ExtremoClientConstructionCurrentSnapToObject = objNull;
	ExtremoClientConstructionIsInSelectSnapObjectMode = false;
	ExtremoClientConstructionModePhysx = false;
	ExtremoClientConstructionLock = false;
	ExtremoClientConstructionGrid = [1, 1, 0.25];
	ExtremoClientNotificationQueue = [];
	ExtremoClientNotificationSlides = [0,1,2,3,4,5,6,7,8,9];
	ExtremoClientNotificationIsShown = false;
	ExtremoClientNotificationRun = diag_tickTime;
	ExtremoLockIsShown = false;
	ExtremoClientLastDeathMarker = "";
	ExtremoDisplayCurrentLimits = [];
	ExtremoClientHungerDecay = (getNumber(configFile >> "CfgPlayer" >> "hungerDecay") * 60);
	ExtremoClientThirstDecay = (getNumber(configFile >> "CfgPlayer" >> "thirstDecay") * 60);
	ExtremoClientHealthDecay = getNumber(configFile >> "CfgPlayer" >> "healthDecay");
	ExtremoClientThirstRegen = getNumber(configFile >> "CfgPlayer" >> "thirstRegen");
	ExtremoClientHungerRegen = getNumber(configFile >> "CfgPlayer" >> "hungerRegen");
	ExtremoClientRecoveryAmmount = (getNumber(configFile >> "CfgPlayer" >> "recoveryPerMinute") / 100);
	ExtremoCameraSystemBase = objNull;
	ExtremoCameraRightClickDown = false;
	ExtremoClientCameraObject = objNull;
	ExtremoClientCameraParrentObject = objNull;
	ExtremoClientCameraNVG = false;
	ExtremoGuiControlClick = false;
	ExtremoClientActionDelayShown = false;
	ExtremoClientActionDelayAbort = false;
	ExtremoClientClanInfo = [];
	ExtremoClientMapKeyUpEH = -1;
	ExtremoClientMapPositionClick = [0,0];
	ExtremoClientBreachingChargePlanted = false;
	ExtremoCurrentBreachingObject = objNull;
	ExtremoClientLastBreach = 0;
	ExtremoClientWaypoints = [];
	ExtremoClientAllowedSpectate = [];
	ExtremoClientCanSpectate = [];
	ExtremoClientPlayerIsSpectating = false;
	//[] call Extremo_fnc_object_player_stats_reset;
	[] call Extremo_fnc_gui_postProcessing_initialize;
	//[] call Extremo_fnc_gui_hud_event_hook;
	//[] call Extremo_fnc_system_thread_initialize;
	if (isMultiplayer) then {
		if !(getRemoteSensorsDisabled) then
		{
			disableRemoteSensors true;
		}; 
	};
};

Extremo_fnc_object_zombie_handler = { 
	params [
		["_zombie",objNull,[objNull]],
		["_mode","",[""]]
	];

	//--- 
	private _distanceToInteract = 1.8;
	private _player = player;
	private _return = true;
	private _type = if(toLower(_mode select [0,3]) isEqualTo "con")then{_mode=toLower(_mode select [3]);"condition"}else{"statement"};

	//--- Object Type Checks
	if((_zombie isKindOf "Extremo_Zombie_Abstract") isEqualTo false)exitWith {
		if(_type isEqualTo "condition")then{false}else{
			diag_log format ["Extremo_fnc_object_zombie_handler: Zombie Object Type Error: (%1) Should Be Kind Of (Extremo_Zombie_Abstract)",typeOf _zombie];
		};
	};
	if((_player isKindOf "Extremo_Zombie_Abstract") isEqualTo true)exitWith {
		if(_type isEqualTo "condition")then{false}else{
			diag_log format ["Extremo_fnc_object_zombie_handler: Player Object Type Error: (%1) Should Not Be Kind Of (Extremo_Zombie_Abstract)",_player];
		};
	};

	//--- Handler
	switch _type do
	{
		//--- Conditions
		case "condition": 
		{
			switch _mode do {
				case "grab": {
					try{
						if(isNull _zombie) throw false;
						if(alive _zombie isEqualTo false) throw false;
						if(_zombie distance2D _player > _distanceToInteract) throw false;
						if((_zombie in attachedObjects _player) isEqualTo true) throw false;
					}catch{
						_return = _exception;
					};
				};
				case "drop": {
					try{
						if(isNull _zombie) throw false;
						if(_zombie distance2D _player > _distanceToInteract) throw false;
						if((_zombie in attachedObjects _player) isEqualTo false) throw false;
					}catch{
						_return = _exception;
					};
				};
				case "kill": {
					try{
						if(isNull _zombie) throw false;
						if(alive _zombie isEqualTo false) throw false;
						if(_zombie distance2D _player > _distanceToInteract) throw false;
						if((_zombie in attachedObjects _player) isEqualTo false) throw false;
					}catch{
						_return = _exception;
					};
				};
				case "bury": {
					try{
						if(isNull _zombie) throw false;
						if(alive _zombie isEqualTo true) throw false;
						if(_zombie distance2D _player > (_distanceToInteract + 0.2)) throw false;
						if((_zombie in attachedObjects _player) isEqualTo true) throw false;
					}catch{
						_return = _exception;
					};
				};
				case "push": {
					try{
						if(isNull _zombie) throw false;
						if(alive _zombie isEqualTo false) throw false;
						if(_zombie distance2D _player > _distanceToInteract) throw false;
						if((_zombie in attachedObjects _player) isEqualTo true) throw false;
					}catch{
						_return = _exception;
					};
				};
			};
		};
		//--- Statements
		case "statement": 
		{
			private _animation = getText(configFile >> "CfgVehicles" >> typeOf _zombie >> "UserActions" >> _mode >> "animation"); 
			if(_animation isEqualTo "")then{//non found search abstract actions
				_animation = getText(configFile >> "CfgVehicles" >> "Extremo_Zombie_Abstract" >> "UserActions" >> _mode >> "animation");
			};

			diag_log format ["Extremo_fnc_object_zombie_handler: _type = 'statement'; _this = %1",_this];

			switch _mode do {
				case "init": {systemChat "Zombie created"};
				case "killed": {systemChat "Zombie killed"};
				case "damaged": {systemChat "Zombie damaged"};
				case "grab": {systemChat "Zombie grab"}; 
				case "drop": {systemChat "Zombie drop"}; 
				case "kill": {systemChat "Zombie kill";
					[_zombie,'drop'] call Extremo_fnc_object_zombie_handler;
					_zombie setDamage 1;
				};
				case "bury": {systemChat "Zombie bury"}; 
				case "push": {systemChat "Zombie push"}; 
			};
		};
	};
	
	_return
};

{
	private _var = _x#0;
	private _arr = toArray str(_x#1);
	if(isNil{uiNameSpace getVariable _var})then{
		uiNameSpace setVariable [_var,compileFinal(if(([_arr] call BIS_fnc_arrayShift) == 123 AND (_arr call BIS_fnc_arrayPop) == 125)then{toString _arr}else{""})];
	};
}forEach[
	["Extremo_fnc_gui_loadingScreen_load",{
		disableSerialization; 
		params ["_display", "_displayType"];

		diag_log format ["_displayType = '%1';",_displayType];
 
		private _isCutScenes = true;  
		private _cfgMod = configFile >> "CfgMods" >> "Extremo";
		private _loadingTextTemplate = selectRandom getArray(_cfgMod >> "LoadingScreen" >> "templates");
		private _loadingTextTemplateDefault = getText(_cfgMod >> "LoadingScreen" >> "templateDefault");
		
		//--- Seems to be required so the core engine functions work
		uiNameSpace setVariable ["RscDisplayLoading_display", _display];

		//--- So BIS_fnc_progressLoadingScreen works
		RscDisplayLoading_progress = (_display displayCtrl 104);
		 
		//--- Background
		(_display displayCtrl 66000) ctrlSetText(selectRandom(getArray(configFile >> "CfgMods" >> "Extremo" >> "LoadingScreen" >> "pictures")));

		//--- Cutscenes
		private _cutscenes = [];
		private _cutscenesTemp = getArray (configFile >> "CfgWorlds" >> worldName >> "cutscenes"); 
		{_cutscenesTemp pushBackUnique _x} forEach ["tempmissionsp","introOrange","Enoch_intro1",""];
		{_cutscenesTemp pushBackUnique _x} forEach getArray(configFile >> "CfgWorlds" >> worldName >> "cutscenes");
		{_cutscenes pushBackUnique (toLower _x)} forEach _cutscenesTemp; 
		if (worldName in ["","VR"]) then {_cutscenes pushBackUnique missionName};
		_isCutScenes = (toLower missionName in _cutscenes) isEqualTo true;

		//--- Spinner
		uiNameSpace setVariable ["ExtremoLoadingScreenSpinnerThread", [_display] spawn (uiNamespace getVariable ["Extremo_fnc_gui_loadingScreen_animate",{}])];

		//--- Message
		(_display displayCtrl 66002) ctrlShow true; 
		(_display displayCtrl 66002) ctrlSetStructuredText (parseText(switch (_displayType) do {
			case "RscDisplayNotFreeze":{selectRandom["<t>Loading Next Stage, Don't Freeze</t> <t size='0.5' color='#00c8ec' valign='bottom'>Submitted by Ni1kko</t>",_loadingTextTemplateDefault]};
			case "RscDisplayMultiplayer":{"<t>Loading...</t>"};
			case "RscDisplayMultiplayerSetup":{"<t>Joining...</t>"}; 
			case "RscDisplayClient":{"<t>Connecting...</t>"}; 
			case "RscMPSetupMessage":{"<t>Downloading...</t>"};  
			case "RscDisplayLoadMission":{if(_isCutScenes)then{"<t>Loading...</t>"}else{"<t>Loading Mission...</t>"}};
			case "RscExtremoClientInitScreen":{"<t>Mission Loaded...</t>"};
			case "RscExtremoLoginScreen":{"<t>Starting Login...</t>"};
			case "RscExtremoLogoutScreen":{"<t>Starting Logout...</t>"};
			case "RscExtremoRespawnScreen":{"<t>Respawning...</t>"};
			case "RscExtremoLoadingScreen":{"<t>Loading...</t>"};
			case "RscExtremoSelectSpawnLocationDialog":{"<t>Spawning...</t>"};
			default {(if((floor (random 10)) < 1) then {_loadingTextTemplateDefault}else{format ["<t>%1</t> <t size='0.5' color='#00c8ec' valign='bottom'>Submitted by %2</t>", _loadingTextTemplate#0, _loadingTextTemplate#1]})};
		})); 

		//--- For every loading screen
		private _loadingDisplays = uiNameSpace getVariable ["ExtremoClientLoadingScreenDisplays", []];
		_loadingDisplays pushBackUnique _display;
		{
			if !(isNull _x) then  { 
				private _worldControlBox = _x displayCtrl 66003;
				private _missionControl = _x displayCtrl 66007;
				private _bannerControl = _x displayCtrl 66015;

				//--- Banner
				if (_isCutScenes) then { 
					_bannerControl ctrlShow false;
				} else {
					_bannerControl ctrlShow true;
					private _modIconControl = _x displayCtrl 66011;
					private _modNameControl = _x displayCtrl 66012;
					private _modUrlControl = _x displayCtrl 66013;
					private _modBGControl = _x displayCtrl 66014; 
					private _modName = getText(_cfgMod >> "name");
					private _modIcon = getText(_cfgMod >> "logoSmall");
					private _modUrl = getText(_cfgMod >> "action"); 
					{
						_x params ["_control","_data"];  
						_control ctrlShow true;
						_control ctrlSetText _data;
						_control ctrlCommit 0; 
					}forEach [
						[_modBGControl,""],
						[_modIconControl,_modIcon],
						[_modNameControl,_modName],
						[_modUrlControl,_modUrl]
					];
				};

				//--- World
				if (_isCutScenes) then { 
					_worldControlBox ctrlShow false;
				} else { 
					_worldControlBox ctrlShow true;

					private _worldAuthorControl = _x displayCtrl 66006;
					private _worldNameControl = _x displayCtrl 66005;
					private _worldPictureControl = _x displayCtrl 66004;

					private _worldConfig = configFile >> "CfgWorlds" >> worldName; 
					private _worldName = getText (_worldConfig >> "description");
					private _worldAuthor = getText (_worldConfig >> "author"); 
					private _worldPicture = getText (_worldConfig >> "pictureShot");

					if (_worldName isEqualTo "") then {_worldName = worldName};
					if (_worldAuthor isEqualTo "") then {_worldAuthor = localize "STR_AUTHOR_UNKNOWN"};
					if (_worldPicture isEqualTo "A3\Map_VR\data\ui_VR_ca.paa") then {_worldPicture = ""};
					if (_worldPicture in ["Extremo_Assets\texture\mod\logo.paa",""])then{
						_worldPicture = format["Extremo_Assets\texture\map\%1_co.paa",(
							if (_worldPicture isEqualTo "") then {
								selectRandom["altis","livonia","malden","stratis","tanoa","vr"]
							}else{
								toLower worldName
							}
						)];
					};

					_worldNameControl ctrlSetText _worldName;
					_worldAuthorControl ctrlSetText _worldAuthor;
					_worldPictureControl ctrlSetText _worldPicture;
				};

				//--- Mission
				if (_isCutScenes) then {
					_missionControl ctrlShow false;
				} else { 
					_missionControl ctrlShow true;

					private _missionPictureControl = _x displayCtrl 66008;
					private _missionNameControl = _x displayCtrl 66009;
					private _missionAuthorControl = _x displayCtrl 66010;

					private _missionName = getMissionConfigValue ["onLoadName", briefingName];
					private _missionAuthor = getMissionConfigValue ["author", localize "STR_AUTHOR_UNKNOWN"]; 
					private _missionPicture = getText (missionConfigFile >> "loadScreen");

					if (_missionName isEqualTo "") then { _missionName = localize "STR_a3_rscdisplay_loading_noname"};
					if (_missionAuthor isEqualTo "") then { _missionName = localize "STR_AUTHOR_UNKNOWN"};
					if (_missionPicture isEqualTo "") then {_missionPicture = getText (missionConfigFile >> "overviewPicture")};
					if (_missionPicture isEqualTo "") then {_missionPicture = "Extremo_Assets\texture\mod\logo.paa"};

					_missionPictureControl ctrlSetText _missionPicture;
					_missionNameControl ctrlSetText _missionName; 
					_missionAuthorControl ctrlSetText _missionAuthor;
				};
			};
		} forEach _loadingDisplays;

		uiNameSpace setVariable ["ExtremoClientLoadingScreenDisplays", _loadingDisplays];
	}],
	["Extremo_fnc_gui_loadingScreen_animate",{
		disableSerialization;
		params ["_display"];
		private _spinner = _display displayCtrl 66001;
		private _startTime = diag_tickTime;

		while {!isNull _display} do // until terminate on unload fires
		{
			if((floor (random 1000)) < 100) then { 
				private _sleep = random [0.3,1,3];
				_spinner ctrlShow false;
				_spinner ctrlCommit _sleep;
				uiSleep _sleep;
			}else{
				_spinner ctrlShow true;
				_spinner ctrlSetAngle [(diag_tickTime - _startTime) * 360, 0.5, 0.5];
				// 1/60 results in underflow = the spinner lags
				// minimum in Arma is 3ms, but this works:
				uiSleep 0.016; 
			};
		};
	}],
	["Extremo_fnc_gui_loadingScreen_unload",{
		disableSerialization;

		private ["_animationThread"];

		_animationThread = uiNameSpace getVariable ["ExtremoLoadingScreenSpinnerThread", scriptNull];

		if !(isNull _animationThread) then 
		{
			terminate _animationThread;
			uiNameSpace setVariable ["ExtremoLoadingScreenSpinnerThread", scriptNull]
		};
	}],
	["Extremo_fnc_gui_loadingScreen_reset",{
		uiNameSpace setVariable ["ExtremoLoadingScreenBackgroundPicture", nil];
		uiNameSpace setVariable ["ExtremoLoadingScreenMapData", nil];
		uiNameSpace setVariable ["ExtremoLoadingScreenMissionData", nil];
		uiNameSpace setVariable ["ExtremoClientLoadingScreenDisplays", nil];
		uiNameSpace setVariable ["RscDisplayLoading_display", nil];
	}]
];
 
true