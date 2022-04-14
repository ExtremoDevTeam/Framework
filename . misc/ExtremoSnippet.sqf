

//--- Extremo_fnc_getVariable
if(isNil "Extremo_fnc_getVariable")then
{
	Extremo_fnc_callVariable = compile "
		params [
			['_variable','test',['']],
			['_params',[]],
			['_default',{}]
		];

		private _namespace = currentNamespace;
		private _namespaces = [missionNamespace,uiNamespace,profileNamespace];

		if(isServer)then{
			_namespaces pushBack serverNamespace;
		};

		{
			private _tempnamespace = _namespaces#_forEachIndex; 
			if(!isNil {_tempnamespace getVariable _variable})exitWith{
				_namespace = _tempnamespace;
			};
		}forEach _namespaces;
		
		private _value = (_namespace getVariable [_variable,_default]);
		
		if(typeName _value isEqualTo 'CODE')then{
			_value = _params call _value;
		};

		_value
	";

	//Extremo_test = {};
	//["Extremo_test"] call Extremo_fnc_callVariable;
};

//--- Extremo_fnc_getConfigFunctions
if(isNil "Extremo_fnc_getConfigFunctions")then
{
	//--- every config function is loaded through this function
	Extremo_fnc_getConfigFunctions = {
		params[
			['_config1',configFile,[configFile]]
		];

		//return arrays 	
		private _fnclist = [];
		private _varlist = [];
 
		private _headerNoDebug = "
			private _fnc_scriptNameParent = if (isNil '_fnc_scriptName') then {'%1'} else {_fnc_scriptName};
			private _fnc_scriptName = '%1';
			scriptName _fnc_scriptName;
		";
		private _headerSaveScriptMap = "
			private _fnc_scriptMap = if (isNil '_fnc_scriptMap') then {[_fnc_scriptName]} else {_fnc_scriptMap + [_fnc_scriptName]};
		";
		private _headerLogScriptMap = "
			textLogFormat ['%1 : %2', _fnc_scriptMap joinString ' >> ', _this];
		";
		private _headerSystem = "
			private _fnc_scriptNameParent = if (isNil '_fnc_scriptName') then {'%1'} else {_fnc_scriptName};
			scriptName '%1';
		"; 
		private _headerDefault = switch (uinamespace getvariable ["bis_fnc_initFunctions_debugMode",0]) do {
			//--- 1 - Save script map (order of executed functions) to '_fnc_scriptMap' variable
			case 1: {_headerNoDebug + _headerSaveScriptMap};

			//--- 2 - Save script map and log it
			case 2: {_headerNoDebug + _headerSaveScriptMap + _headerLogScriptMap};

			//--- 0 - Debug mode off
			default {_headerNoDebug};
		};

		private _cfgFunctions = (_x >> "CfgFunctions");
		for "_a" from 0 to (count _cfgFunctions - 1) do 
		{
			private _currentTag = _cfgFunctions select _a; 
			if (isClass _currentTag) then
			{
				private _tag = configname _currentTag;
				if !(tolower _tag in ["missionfile","autocompile"])then{
					private _tagName = gettext (_currentTag >> "tag");
					if (_tagName == "") then {_tagName = configname _currentTag};
					private _itemPathTag = gettext (_currentTag >> "file");
					for "_b" from 0 to (count _currentTag - 1) do 
					{
						private _currentCategory = _currentTag select _b;
						if (isclass _currentCategory) then 
						{
							private _categoryName = configname _currentCategory;
							private _itemPathCat = gettext (_currentCategory >> "file");
							for "_c" from 0 to (count _currentCategory - 1) do
							{
								private _currentFunction = _currentCategory select _c;
								if (isclass _currentFunction) then 
								{
									//read function
									private _itemName = configname _currentFunction;
									private _itemPathItem = gettext (_currentFunction >> "file");
									private _itemExt = gettext (_currentFunction >> "ext");
									private _itemPreInit = getnumber (_currentFunction >> "preInit") == 1;
									private _itemPostInit = getnumber (_currentFunction >> "postInit")== 1;
									private _itemPreStart = getnumber (_currentFunction >> "preStart")== 1;
									private _itemRecompile = getnumber (_currentFunction >> "recompile") == 1;
									private _itemRandomize = getnumber (_currentFunction >> "randomize") == 1;
									private _itemCheatsEnabled = getnumber (_currentFunction >> "cheatsEnabled") == 1;
									private _itemClient = getnumber (_currentFunction >> "client") == 1;
									private _itemServer = getnumber (_currentFunction >> "server") == 1;
									private _itemHeaderType = getnumber (_currentFunction >> "headerType");
									private _itemPath = if (_itemPathItem != "") then {_itemPathItem} else {""};
									private _itemVar = FormatFunction(_tagName,_itemName);
									private _itemType = "server";

									//alter some crap
									if (!_itemClient AND !_itemServer)then{_itemServer=true};
									if (_itemClient)then{_itemType = "client"}else{_itemType = "server"};
									if (_itemExt == "") then {_itemExt = ".sqf"}else{_itemExt = tolower _itemExt};
									if (_itemPath == "") then {_itemPath = if (_itemPathCat != "") then {_itemPathCat + toLower(format["\%1",FilePrefix]) + _itemName + _itemExt} else {(if(_itemPathTag != "") then {_itemPathTag + toLower(format["\%1",FilePrefix]) + _itemName + _itemExt} else {""})};};
									if (_itemPath == "") then {_itemPath = _pathFile + "\" + _categoryName + toLower(format["\%1",FilePrefix]) + _itemName + _itemExt};
									
									//user override
									private _compileFinalScript = (_compileFinal AND !_itemRecompile);

									//fucntion data saved to master array
									private _functionData = [_itemVar,_itemPath,_itemType,_compileFinalScript,_itemExt,_itemHeaderType,_itemPreInit,_itemPostInit,_itemPreStart,_itemRandomize];

									//script or fsm?
									if(_itemExt isEqualTo ".fsm")then
									{
										//construct fsm expression
										_functionData set [1,format ["%1_fsm = _this execFSM '%2'; %1_fsm",_itemVar,_itemPath]];
									}else{
										private _header = switch (_itemHeaderType) do { 
											//--- No header (used in low-level functions, like 'fired' event handlers for every weapon)
											case -1: {""};
											//--- System functions' header (rewrite default header based on debug mode)
											case 1: {_headerSystem};
											//--- Full header
											default {_headerDefault};
										};
										
										_expression = if(_itemCheatsEnabled)then{""}else{(format [_header,_itemVar,"Log: [Functions]%1 | %2"] + preprocessfilelinenumbers _itemPath)};

										if(_itemRandomize)then{
											private _findVar = "grabVariables";
											if(_findVar in _expression)then{
												//Get all variables
												private _variables = [_findVar] call compile preprocessFile _expression;
												//Nil Return
												if(isNil "_variables")then{_variables = [];};
												//Not an array return
												if(typeName _variables != "ARRAY")then{_variables = [];};
												//add to master array
												{_varlist pushBackUnique _x}forEach _variables;
											};
										};

										//load file
										_functionData set [1,_expression]; 
									};

									//add to compile list
									_fnclist pushBackUnique _functionData;
								};
							};
						};
					};
				};
			};
		};

		//return
		[_fnclist,_varlist]
	};

	//["Extremo_fnc_getConfigFunctions",[missionConfigFile]] call Extremo_fnc_callVariable;
};

//--- Extremo_fnc_directionInfo
if(isNil "Extremo_fnc_directionInfo")then
{
	Extremo_fnc_directionInfo = {
		private _position = param [0,player,[[],objNull]];

		if(typeName _position isEqualTo "OBJECT")then{
			_position = position _position; 
		};
		private _position = player call BIS_fnc_position;
		private _worldSize = worldSize / 2;
		private _nearMapMarkers = (allMapMarkers apply {if (getMarkerPos _x distance2D _position <= 1000) then {_x}else{""}}) - [""];
		private _nearPlayers = (allPlayers apply {if (_x distance2D _position <= 1000) then {_x}else{""}}) - [""];
		private _nearVehicles = (vehicles apply {if(_x isKindOf "Air" || _x isKindOf "Car" || _x isKindOf "Ship")then{if (_x distance2D _position <= 1000) then {_x}else{""}}else{""}}) - [""];
		private _nearLocations = (nearestLocations [[_worldSize, _worldSize],["NameVillage", "NameCity", "NameCityCapital", "NameLocal", "NameMarine", "Hill", "HandDrawnCamp"],sqrt (2 * _worldSize ^ 2),_position] apply {if(text _x isEqualTo "")then{""}else{[_x,text _x]}})- [""]; 
		private _nearLocationInfo = [_nearLocations] call BIS_fnc_arrayShift;
		private _nearLocation = [_nearLocationInfo] call BIS_fnc_arrayShift;
		private _nearLocationName = format ["at grid %1", mapGridPosition _position];
		private _nearLocationDirectionInfo = [_position] call Extremo_fnc_directionInfo;

		if (!isNull _nearLocation) then {
			if (_position in _nearLocation) then {
				_nearLocationName = format ["near %1", text _nearLocation]
			}else{
				_nearLocationName = text _nearLocation;
				_nearLocationDirectionInfo = [locationPosition _nearLocation] call Extremo_fnc_directionInfo;
			};
		};

		[_nearLocationDirectionInfo#0,_nearLocationName,format["%1 of %2",_nearLocationDirectionInfo#0,_nearLocationName],_nearLocation,_position,_nearLocationDirectionInfo#1,_nearMapMarkers,_nearPlayers,_nearVehicles]
	};
 
	//["Extremo_fnc_directionInfo",[player]] call Extremo_fnc_callVariable;
	//["Extremo_fnc_directionInfo",[[0,0,0]]] call Extremo_fnc_callVariable;
};

//--- Extremo_fnc_locationInfo 
if(isNil "Extremo_fnc_locationInfo")then
{
	Extremo_fnc_locationInfo = {
		private _position = param [0,player,[[],objNull]];

		if(typeName _position isEqualTo "OBJECT")then{
			_position = position _position; 
		};
		private _position = player call BIS_fnc_position;
		private _worldSize = worldSize / 2;
		private _nearMapMarkers = (allMapMarkers apply {if (getMarkerPos _x distance2D _position <= 1000) then {_x}else{""}}) - [""];
		private _nearPlayers = (allPlayers apply {if (_x distance2D _position <= 1000) then {_x}else{""}}) - [""];
		private _nearVehicles = (vehicles apply {if(_x isKindOf "Air" || _x isKindOf "Car" || _x isKindOf "Ship")then{if (_x distance2D _position <= 1000) then {_x}else{""}}else{""}}) - [""];
		private _nearLocations = (nearestLocations [[_worldSize, _worldSize],["NameVillage", "NameCity", "NameCityCapital", "NameLocal", "NameMarine", "Hill", "HandDrawnCamp"],sqrt (2 * _worldSize ^ 2),_position] apply {if(text _x isEqualTo "")then{""}else{[_x,text _x]}})- [""]; 
		private _nearLocationInfo = [_nearLocations] call BIS_fnc_arrayShift;
		private _nearLocation = [_nearLocationInfo] call BIS_fnc_arrayShift;
		private _nearLocationName = format ["at grid %1", mapGridPosition _position];
		private _nearLocationDirectionInfo = [_position] call Extremo_fnc_directionInfo;

		if (!isNull _nearLocation) then {
			if (_position in _nearLocation) then {
				_nearLocationName = format ["near %1", text _nearLocation]
			}else{
				_nearLocationName = text _nearLocation;
				_nearLocationDirectionInfo = [locationPosition _nearLocation] call Extremo_fnc_directionInfo;
			};
		};

		[
			_nearLocationDirectionInfo#0,
			_nearLocationName,
			format["%1 of %2",_nearLocationDirectionInfo#0,_nearLocationName],
			_nearLocation,
			_position,
			_nearLocationDirectionInfo#1,
			_nearMapMarkers,
			_nearPlayers,
			_nearVehicles
		]
	};

	/*(["Extremo_fnc_locationInfo",[player]] call Extremo_fnc_callVariable) params [
		["_dirName",""],
		["_nearLocationName",""],
		["_nearLocationNameOf",""],
		["_nearLocation",locationNull],
		["_position",[]],
		["_dir",0],
		["_nearMapMarkers",[]],
		["_nearPlayers",[]],
		["_nearVehicles",[]]
	]*/
};

//--- Extremo_fnc_inArray
if(isNil "Extremo_fnc_inArray")then
{
	Extremo_fnc_inArray = {
		params [
			["_query",nil],
			["_array",[],[[]]]
		];
		private _return = "";
		private _found = false;

		if(isNil "_query") exitWith {_return};
		if (typeName _array isNotEqualTo "ARRAY") exitWith {debugLog "Log: [findNestedElement] Array (0) should be an Array!"; _return};

		private _searchArrayFunc = {
			private _array = _this select 0;
			private _query = _this select 1;
			private _find = _array find _query;

			if (_find != -1) exitWith {
				_return = format["%1#%2",_return,_find];
				_found = true;
			};

			[_array, _query] call _searchArrayChildrenFunc;
		};

		private _searchArrayChildrenFunc = {
			private _array = _this select 0;
			private _query = _this select 1;

			for "_i" from 0 to ((count _array) - 1) do {
				private _sub = _array select _i;
				
				if (typeName _sub isEqualTo "ARRAY" && !_found) then {
					_return = format["%1#%2",_return,_i];
					[_sub, _query] call _searchArrayFunc;
				};
			};

			if (!_found && _return != "") then {
				_return = _return select[0, (count _return)-2];
			};
		};

		[_array, _query] call _searchArrayFunc;

		_return
	};

	private _array = [
		[
			[
				[
					[
						[true, false, "test"]
					]
				]
			]
		]
	];

	private _arrayPos = ["test",_array] call Extremo_fnc_inArray;
	private _result = "";

	if(_arrayPos isNotEqualTo "")then{
		_result = call compile("_array" + _arrayPos)
	};

	_result
};

//--- Extremo_fnc_inArray2
if(isNil "Extremo_fnc_inArray2")then
{			
	Extremo_fnc_inArray2 = {
		params [
			["_query",nil],
			["_array",[],[[]]]
		];

		private _result = []; 
		private _tmp = [];
		private _arrayIndex = 0;

		private _fnc = { 
			{
				if (isNil "_x") then {
					if (isNil "_query") then {
						_tmp set [_arrayIndex, _forEachIndex];
						_result pushBack +_tmp;
					};
				} else {
					if (_x isEqualType []) then {
						_tmp set [_arrayIndex, _forEachIndex];
						_arrayIndex = _arrayIndex + 1;
						_x call _fnc;
						_tmp resize _arrayIndex;
						_arrayIndex = _arrayIndex - 1;
					} else {
						if (!isNil "_query") then {
							if (_x isEqualTo _query) then {
								_tmp set [_arrayIndex, _forEachIndex];
								_result pushBack +_tmp;
							};
						};
					};
				};
			} forEach _this;
		};

		_array call _fnc;

		(if(count _result > 0)then{_result apply {format["#%1",_x joinString "#"]}}else{""});
	};

	private _array = [
		[
			[
				"test",
				[
					[
						[true, false, "test",[
							[
								[
									[
										[
											[
												[
													[
														"test",["test","test"]
													]
												]
											]
										]
									]
								]
							]
						]]
					]
				]
			]
		]
	];

	private _arrayPos = ["test",_array] call Extremo_fnc_inArray2;
	private _results = [];

	if(_arrayPos isNotEqualTo "")then{
		{_results pushBack [call compile("_array" + _x),_x]}forEach _arrayPos;
	};

	_results //[["test","#0#0#0"],["test","#0#0#1#0#0#2"],["test","#0#0#1#0#0#3#0#0#0#0#0#0#0#0"],["test","#0#0#1#0#0#3#0#0#0#0#0#0#0#1#0"],["test","#0#0#1#0#0#3#0#0#0#0#0#0#0#1#1"]]
};

//--- Extremo_fnc_inArray3
if(isNil "Extremo_fnc_inArray3")then
{			
	Extremo_fnc_inArray3 = {
		params [
			["_query",nil],
			["_array",[],[[]]]
		];

		private _results = [];
		private _result = [_array,_query] call BIS_fnc_findAllNestedElements;

		_result = (if(count _result > 0)then{_result apply {format["#%1",_x joinString "#"]}}else{""});
		
		if(_result isNotEqualTo "")then{
			{_results pushBack [call compile("_array" + _x),_x]}forEach _result;
		};

		_results
	};

	private _array = [
		[
			"test",
			[
				[
					[
						[true, false, "test"]
					]
				]
			]
		]
	];

	["test",_array] call Extremo_fnc_inArray3;//[["test","#0#0"],["test","#0#1#0#0#0#2"]]
	
};

//--- Extremo_fnc_vehicle_NeturalInit
if(isNil "Extremo_fnc_vehicle_NeturalInit")then
{	
	if(hasInterface)then
	{ 
		extremo_fnc_vehicle_NeturalInit = { 
			//init config var
			Extremo_var_vehicleIsNetural = false;
			Extremo_var_gear = "D";

			//keyhandler
			(uiNamespace getVariable "RscDisplayMission") displayAddEventhandler ["KeyDown", {
				params ["_displayOrControl", "_key", "_shift", "_ctrl", "_alt"];

				if(_key isEqualTo 0x11)exitWith{
					Extremo_var_vehicleIsNetural = false;
					Extremo_var_gear = "D";
					false
				};

				if(_key isEqualTo 0x1F)exitWith{
					Extremo_var_vehicleIsNetural = false;
					Extremo_var_gear = "R";
					false
				};

				false
			}];
					
		};

		extremo_fnc_vehicleNeturalAction = {
			params ["_vehicle", "_caller", "_actionId", "_arguments"];
			Extremo_var_vehicleIsNetural = true;
			Extremo_var_gear = "N";
			hint "Netural Selected";
			_vehicle disableBrakes true;
			_vehicle spawn{
				waitUntil{!Extremo_var_vehicleIsNetural || isNull _this};
				if(isNull _this)exitWith{};
				hint format["%1 Selected", ["Drive","Reverse"] select (Extremo_var_gear isEqualTo "R")];
				_this disableBrakes false;
			}
		};
	};

	if(isServer)then
	{ 
		extremo_fnc_vehicle_Init = { 
			private _vehicle = "C_Offroad_01_F" createVehicle position player;	
			
			[_vehicle, ["Select netural", extremo_fnc_vehicleNeturalAction,nil, 0, false, false, "", "!Extremo_var_vehicleIsNetural AND (player isEqualTo driver(vehicle player))"]] remoteExec ["addAction",-2, "extremo_fnc_vehicle_NeturalActionJIP"];	

			[] remoteExec ["extremo_fnc_vehicle_NeturalInit",-2,"extremo_fnc_vehicle_NeturalInitJIP"];  
		};

		
		[] spawn extremo_fnc_vehicle_Init
	};
};

//--- Extremo_fnc_system_handleEncrypt
if(isNil "Extremo_fnc_system_handleEncrypt")then
{
	extremo_fnc_system_getKey = {
		params[["_index",0],["_key","",[""]]]; 
		((profileNamespace getVariable _key) select (_index % (count(profileNamespace getVariable _key))))
	};

	extremo_fnc_system_setKey = {
		params[["_key","",[""]]]; 
		profileNamespace setVariable [_key,toArray format["wym4%1n5sw",_key]];
		saveProfileNamespace;
	};

	extremo_fnc_system_delKey = {
		params[["_key","",[""]]]; 
		profileNamespace setVariable [_key,nil];
		saveProfileNamespace;
	};

	extremo_fnc_system_handleEncrypt = {
		params[
			["_key","",[""]],
			["_input","",[""]],
			["_encrypt",true]
		];

		private _ret = [];
	
		if _encrypt then{
			_input = toArray _input;
			[_key] call extremo_fnc_system_setKey;
		};

		switch (typeName _input) do {
			case "STRING": {for "_i" from 0 to (count toArray _input)-1 do {_ret pushBack ((toArray _input # _i) + ([_i,_key] call extremo_fnc_system_getKey))}};
			case "ARRAY":{for "_i" from 0 to (count _input)-1 do {_ret pushBack ((_input#_i) - ([_i,_key] call extremo_fnc_system_getKey))}};
		};

		toString _ret
	};

	["handleEncryptKey","5435",true] call extremo_fnc_system_handleEncrypt;
	["handleEncryptKey","ﾾﾻￆ",false] call extremo_fnc_system_handleEncrypt;
};

//--- Extremo_fnc_vehicles_init
if(isNil "Extremo_fnc_vehicles_init")then
{
	extremo_fnc_database_request = {[]};
	extremo_fnc_vehicles_create = {
		params[
			["_className","",[""]],
			["_classType","land",[""]],
			["_ownerSteamID","__SERVER__"],
			["_position",[]]
		];
		
		private _debug = true;
		private _databaseVehicle = not(_ownerSteamID in ["__SERVER__",""]);
		private _lockCode = "";
		private _lockState = true;
		private _fuel = 0;
		private _plate = "";

		//--- Handle random or database vehicle
		if !(_databaseVehicle)then{
			private _positions = uiNamespace getVariable ["ExtremoVehicles_SpawnPositions",[]];
			private _defaultLockCodes = ["0000","1111","2222","3333","4444","5555","6666","7777","8888","9999","1234","2580","2468","7890"];
			private _defaultLockState = false;
			private _defaultFuel = random 1;
			private _defaultPlate = "Extremo";

			//No pos find one
			if(count _position isEqualTo 0 AND _ownerSteamID isEqualTo "__SERVER__")then
			{  
				_position = [];
				private _search = true;  
				while {_search} do 
				{ 
					_position = switch (toLower _classType) do {
						case "water": {[nil, ["ground"]] call BIS_fnc_randomPos};
						case "air";
						case "land";
						default {[nil, ["water"]] call BIS_fnc_randomPos};
					};

					_position set [2,0];

					if (count _position != 0 AND not(_position in _positions))exitWith{
						_search = false;
					};
				};
			};

			//update vehicle data vars
			_positions pushBackUnique _position;
			_lockCode = selectRandom _defaultLockCodes;
			_lockState = _defaultLockState;
			_fuel = _defaultFuel;
			_plate = _defaultPlate;

			//save positions
			uiNamespace setVariable ["ExtremoVehicles_SpawnPositions",_positions];
		}; 

		//---check pos
		if(count _position < 2) exitWith {objNull};
		
		//---create vehicle
		private _vehicle = createVehicle [_className, _position, [], 150, "NONE"];
		
		//--- wait for vehicle to create
		if(isNull _vehicle)exitWith {objNull};

		//--- get vehicles netID and add it to master vehicle array
		private _netID = netId _vehicle;
		with serverNamespace do
		{ 
			if(isNil "extremo_var_vehicles")then{
				extremo_var_vehicles = [];
			};

			extremo_var_vehicles pushBackUnique _netID;
		};

		//--- create map markers
		if (_debug AND not(_databaseVehicle)) then{
			private _markerName = format["ExtremoVehicle_DebugMarker_%1",(_netID splitString ":") joinString "_"];
			private _marker = createMarker [_markerName, getPosATL _vehicle];
			_marker setMarkerType "mil_marker";
			_marker setMarkerText _netID;
			_marker setMarkerColor "ColorRed";
		};

		//--- set vehicle data
		_vehicle setVariable ["ExtremoOwner",_ownerSteamID,true];
		_vehicle setVariable ["ExtremoLocked",_lockState,true];
		_vehicle setVariable ["ExtremoLockCode",_lockCode,true];
		_vehicle lock _lockState;
		_vehicle setFuel _fuel;
		_vehicle setPlateNumber _plate;
		
		//--- return object
		_vehicle
	};
	extremo_fnc_vehicles_init = {

		//--- Get min vehicle config values
		private _minCars = 20;
		private _minHelis = 2;
		private _minPlanes = 1;
		private _minShips = 1;

		//--- Get max vehicle config values
		private _maxCars = 45;
		private _maxHelis = 10;
		private _maxPlanes = 5;
		private _maxShips = 5;

		//--- Get random values based of config values
		private _totalCars = round(random[_minCars, _maxCars - _minCars, _maxCars]);
		private _totalHelis = round(random[_minHelis, _maxHelis - _minHelis, _maxHelis]);
		private _totalPlanes = round(random[_minPlanes, _maxPlanes - _minPlanes, _maxPlanes]);
		private _totalShips = round(random[_minShips, _maxShips - _minShips, _maxShips]);
		
		//--- Get forbidden vehicles config array
		private _forbidden = [""];

		//--- Get all vehicles from config `CfgVehicles`
		private _vehicles = ("getNumber (_x >> 'scope') >= 2" configClasses (configFile >> "CfgVehicles"));
		
		//--- Get all vehicles from database `Vehicles`
		"Reading database records for all spawned vehicles" call Extremo_fnc_database_systemlog; 
		private _vehiclesDB = ["READ","vehicles",[
			["ID","BEGuid","ClassName","Spawned","Dead","Position","Fuel","Damage"],
			[
				["Spawned", 1],	//only spawned vehicles
				["Dead", 0]		//no wrecks
			]
		]]call Extremo_fnc_database_request;

		private _totalVehiclesDB = count _vehiclesDB; 
		format["Loaded (%1) database records for spawned vehicles", _totalVehiclesDB] call Extremo_fnc_database_systemlog;
		
		//--- Sort vehicle category's
		private _cars =  	((_vehicles apply {if(configName _x isKindof 'Car')then{configName _x}else{""}}) - _forbidden);
		private _carsDB = 	(_vehiclesDB apply {});
		private _helis =  	((_vehicles apply {if(configName _x isKindof 'Helicopter')then{configName _x}else{""}}) - _forbidden);
		private _helisDB = 	(_vehiclesDB apply {});
		private _planes =  	((_vehicles apply {if(configName _x isKindof 'Plane')then{configName _x}else{""}}) - _forbidden);
		private _planesDB = (_vehiclesDB apply {});
		private _ships =   	((_vehicles apply {if(configName _x isKindof 'Ship')then{configName _x}else{""}}) - _forbidden);
		private _shipsDB = 	(_vehiclesDB apply {});

		//--- Shuffle config vehicles further sort vehicle category's and choose total vehicles
		_cars = ((_cars - _helis - _planes - _ships) call BIS_fnc_arrayShuffle) select [0,_totalCars];
		_helis = ((_helis - _cars - _planes - _ships) call BIS_fnc_arrayShuffle) select [0,_totalHelis];
		_planes = ((_planes - _cars - _helis - _ships) call BIS_fnc_arrayShuffle) select [0,_totalPlanes];
		_ships = ((_ships - _cars - _helis - _planes) call BIS_fnc_arrayShuffle) select [0,_totalShips];

		//--- Spawn config vehicles
		{[_x,"land"] call extremo_fnc_vehicles_create; uiSleep 1;}forEach _cars;
		{[_x,"air"] call extremo_fnc_vehicles_create; uiSleep 1;}forEach _helis;
		{[_x,"air"] call extremo_fnc_vehicles_create; uiSleep 1;}forEach _planes;
		{[_x,"water"] call extremo_fnc_vehicles_create; uiSleep 1;}forEach _ships;

		//--- Spawn database vehicles
		{}forEach _carsDB;
		{}forEach _helisDB;
		{}forEach _planesDB;
		{}forEach _shipsDB;


	};
	
	//purge any exsiting
	{if("ExtremoVehicle_DebugMarker" in _x)then{deleteMarker _x;}}forEach allMapMarkers;
	{deleteVehicle objectFromNetId _x}forEach (serverNamespace getVariable ["extremo_var_vehicles",[]]);
	 
	with serverNamespace do { 
		if(isNil "extremo_var_vehicles")then{
			extremo_var_vehicles = [];
		};
	};

	[] spawn extremo_fnc_vehicles_init;
};

//--- Extremo_fnc_spawnNearObj
if(isNil "Extremo_fnc_spawnNearObj")then
{ 
	extremo_fnc_spawnNearObj = {
		params [
			["_player",player],
			["_target",selectRandom vehicles]
		];

		private _pos = getPosATL _target;
		_pos set [1,(_pos#1) + 7];
		if !("itemMap" in assignedItems player)then{
			_player addItem "itemMap";
			_player assignItem "itemMap";
		};
		
		private _godMode = not(isDamageAllowed _player);
		if !(_godMode)then{_player allowDamage false};
		_player setPosATL _pos;
		if !(_godMode)then{_player allowDamage true};

		[netID _player,netID _target,_pos]
	};

	[] call extremo_fnc_spawnNearObj
};

//--- Extremo_fnc_system_itemDetails
if(isNil "Extremo_fnc_system_itemDetails")then
{ 
	Extremo_fnc_system_itemDetails = { 
		private _item = param [0,"",[""]];

		if (_item == "") exitWith {[]};//fali safe

		private _cfg = switch (true) do {
			case (isClass (configFile >> "CfgMagazines" >> _item)) : {"CfgMagazines"};
			case (isClass (configFile >> "CfgWeapons" >> _item)) : {"CfgWeapons"};
			case (isClass (configFile >> "CfgVehicles" >> _item)) : {"CfgVehicles"};
			case (isClass (configFile >> "CfgGlasses" >> _item)) : {"CfgGlasses"};
			default {""};
		};

		if (_cfg == "") exitWith {[]};//fali safe
		if !(_cfg isEqualType "") exitWith {[]};//fali safe
		if !(isClass (configFile >> _cfg >> _item)) exitWith {[]};//fali safe

		private _config = configFile >> _cfg >> _item;
		private _displayName = getText (_config >> "displayName");
		private _picture = getText (_config >> "picture");
		private _desc = getText (_config >> "descriptionshort");

		private _bis_ItemType = [_item] call BIS_fnc_itemType;
		private _category = _bis_ItemType#0;
		private _type = _bis_ItemType#1;

		private _weight = switch (_category) do {
			case "Weapon" : {
				switch (_type) do {
					case "AssaultRifle"; 
					case "Shotgun"; 
					case "Rifle";
					case "SniperRifle" : {10};
					case "BombLauncher";
					case "Cannon";
					case "GrenadeLauncher";
					case "Launcher";
					case "Mortar";
					case "RocketLauncher" : {20};
					case "MachineGun";
					case "SubmachineGun" : {15};
					case "Handgun" : {5};
					default {5}; 
				};
			};
			case "Equipment" : {
				switch (_type) do {
					case "Glasses": {1};
					case "Headgear": {2};
					case "Vest";
					case "Uniform": {3};
					case "Backpack": {4};
					default {1};
				};
			};
			case "Magazine": {1};
			case "Item": {1};
			default {1};
		};

		private ["_magazines","_muzzles","_optics","_pointers","_bipods"];
		if (_cfg == "CfgWeapons") then {
			_muzzles = [_item, "muzzle"] call BIS_fnc_compatibleItems;
			_optics = [_item, "optic"] call BIS_fnc_compatibleItems;
			_pointers = [_item, "pointer"] call BIS_fnc_compatibleItems;
			_bipods = [_item, "bipod"] call BIS_fnc_compatibleItems;

			_magazines = getArray (_config >> "magazines");
			private _muzzlesCfg = getArray (_config >> "muzzles");
			if !(_muzzlesCfg isEqualTo []) then {
				private _base = inheritsFrom _config;
				private _tmp = [];
				{
					if !(_x == "this") then {
						_tmp = getArray (_base >> _x >> "magazines");
						{
							_magazines set[count _magazines, _x];
						} foreach (_tmp);
					};
				} foreach _muzzlesCfg;
			};
		} else {
			_magazines = [];
			_muzzles = [];
			_optics = [];
			_pointers = [];
			_bipods = [];
		};

		//return
		[_item,_displayName,_picture,_desc,_category,_type,_weight,_magazines,_muzzles,_optics,_pointers,_bipods];
	};

	(["itemMap"] call Extremo_fnc_system_itemDetails) params [
		["_item","",[""]],
		["_displayName","",[""]],
		["_picture","",[""]],
		["_desc","",[""]],
		["_category","",[""]],
		["_type","",[""]],
		["_weight",0,[0]],
		["_magazines",[],[[]]],
		["_muzzles",[],[[]]],
		["_optics",[],[[]]],
		["_pointers",[],[[]]],
		["_bipods",[],[[]]]
	]; 	
};

//--- Extremo_fnc_player_setupEVH
if(isNil "Extremo_fnc_player_setupEVH")then{
	Extremo_fnc_player_setupEVH = {
		params [
			["_player",player,[objNull]]
		];

		private _evhIds = [];

		if(isNull _player)exitWith { _evhIds };//bad object
		if(isPlayer _player AND !hasInterface)exitWith { _evhIds };//object is headless
		if(!isPlayer _player)exitWith { _evhIds };//object is unknown

		//set cache
		if(count (missionNamespace getVariable ["ExtremoEvents",[]]) isEqualTo 0)then{
			missionNamespace setVariable ["ExtremoEvents",[
				"Fired",
				"FiredNear",
				"Explosion",
				"Hit",
				"Put",
				"Take",
				"InventoryClosed", 
				"InventoryOpened", 
				"handleDamage"
			] apply {
				compile "
					_this addEventHandler ['"+_x+"',{
						_this call (missionNamespace getVariable [format['extremo_fnc_event_%1',tolower '"+_x+"'],{}])
					}];
				"
			}];
		};
		
		//load cache
		{_evhIds pushBack (_player call _x)} forEach (missionNamespace getVariable ["ExtremoEvents",[]]);

		//
		_evhIds
	};

	[player] call Extremo_fnc_player_setupEVH;
};

//--- Extremo_fnc_event_put
if(isNil "Extremo_fnc_event_put")then
{	 
	Extremo_fnc_event_put = {
		params [
			["_unit",objNull,[objNull]],
			["_container",objNull,[objNull]],
			["_item","",[""]]
		];

		([_item] call Extremo_fnc_system_itemDetails) params [
			["_item","",[""]],
			["_displayName","",[""]],
			["_picture","",[""]],
			["_desc","",[""]],
			["_category","",[""]],
			["_type","",[""]],
			["_weight",0,[0]],
			["_magazines",[],[[]]],
			["_muzzles",[],[[]]],
			["_optics",[],[[]]],
			["_pointers",[],[[]]],
			["_bipods",[],[[]]]
		];
		
		private _isPerson = _container isKindOf "Man";
		private _isVehicle = (true in (["Land","Air","Water"] apply {_container isKindOf _x}));
		private _needsSorted = (true in ([_type,_category] apply {_x in ["Weapon","Vest","Uniform","Backpack"]}));
		private _containers = [_container];

		if _needsSorted then
		{
			private _fnc_sortContainer = { 
				private _container = [_this] param [0, objNull, [objNull]];
				if(_container isEqualTo objNull) exitWith {diag_log format["Invalid object passed."]; false};

				_newInventory = [];
				_newInventoryBackpacks = [];
				_newInventoryAmmo = [];
				_newInventoryWeapons = [];
				
				{
					_searchContainer = _x#1;
					//Pushback Magazines as [magazine class,ammo count] if not throwable
					{
						if(_x#0 call BIS_fnc_isThrowable) then {
							_newInventory pushBack [_x#0,1];
						}else{
							_newInventoryAmmo pushBack [_x#0,_x#1];
						};
					}forEach magazinesAmmoCargo _searchContainer;
					{
						//Sets inventory as [class,amount] only good for vests,uniforms,and items
						_newInventory pushBack [_x,((getItemCargo _searchContainer)#1)#_forEachIndex];
					}forEach (getItemCargo _searchContainer)#0;
					//Find all backpacks inside containers
					{
						_newInventoryBackpacks pushBack [_x call BIS_fnc_basicBackpack,1];
					}forEach backpackCargo _searchContainer;
					//Find all weapons and attatchments
					{
						_newInventoryWeapons pushBack _x#0;
						_weaponItems = _x select [1,6];
						_compare = ["","","",[],[],""];
						if!(_weaponItems isEqualTo _compare) then {
							{
								if (typeName _x isEqualTo "ARRAY") then {
									if!(_x isEqualTo [])then {
										_newInventoryAmmo pushBack [_x#0,_x#1];
									};
								}else{
									if!(_x isEqualTo "")then {
										_newInventory pushBack [_x,1];
									};
								};
							}forEach _weaponItems;
						};
					}forEach weaponsItemsCargo _searchContainer;
				}forEach (everyContainer _container);

				//Search all magazines
				{
					if(_x#0 call BIS_fnc_isThrowable) then {
						_newInventory pushBack [_x#0,1];
					}else{
						_newInventoryAmmo pushBack [_x#0,_x#1];
					};
				}forEach magazinesAmmoCargo _container;

				//Search all items,vests, and uniforms
				{
					//Sets inventory as [class,amount] only good for vests,uniforms,and items
					_newInventory pushBack [_x,((getItemCargo _container)#1)#_forEachIndex];
				}forEach (getItemCargo _container)#0;

				//Search for all backpacks
				{
					_newInventoryBackpacks pushBack [_x call BIS_fnc_basicBackpack,1];
				}forEach backpackCargo _container;

				//Search through all weapons
				{
					_newInventoryWeapons pushBack _x#0;
					_weaponItems = _x select [1,6];
					_compare = ["","","",[],[],""];
					if!(_weaponItems isEqualTo _compare) then {
						{
							if (typeName _x isEqualTo "ARRAY") then {
								if!(_x isEqualTo [])then {
									_newInventoryAmmo pushBack [_x#0,_x#1];
								};
							}else{
								if!(_x isEqualTo "")then {
									_newInventory pushBack [_x,1];
								};
							};
						}forEach _weaponItems;
					};
				}forEach weaponsItemsCargo _container;

				clearItemCargoGlobal _container;
				clearMagazineCargoGlobal _container;
				clearWeaponCargoGlobal _container;
				clearBackpackCargoGlobal _container;
				{
					_container addItemCargoGlobal [_x#0,_x#1];
				}forEach _newInventory;
				{
					_container addBackpackCargoGlobal [_x#0,_x#1];
				}forEach _newInventoryBackpacks;
				{
					_container addMagazineAmmoCargo [_x#0,1,_x#1];
				}forEach _newInventoryAmmo;
				{
					_container addWeaponWithAttachmentsCargoGlobal [[_x, "", "", "", [], [], ""], 1];
				}forEach _newInventoryWeapons;

				true
			};
			
			if _isPerson then
			{
				_containers =
				[
					uniformContainer _unit,
					vestContainer _unit,
					backpackContainer _unit
				];
			};

			{_x call _fnc_sortContainer}forEach _containers; 
		};

		switch (true) do {
			case _isPerson: {["characters","update",_unit] remoteExec ["extremo_fnc_database_server", 2]};
			case _isVehicle: {["vehicles","update",_unit] remoteExec ["extremo_fnc_database_server", 2]};
		};
	};
};

//--- Extremo_fnc_event_take
if(isNil "Extremo_fnc_event_take")then
{
	Extremo_fnc_event_take = {
		params ["_unit", "_container", "_item"];

		["characters","update",_unit] remoteExec ["extremo_fnc_database_server", 2];
	};
};

//--- Extremo_fnc_gui_lockScreenEH
if(isNil "Extremo_fnc_gui_lockScreenEH")then
{
	Extremo_fnc_gui_lockScreenEH = {

		disableSerialization;

		params [
			["_data",[],[[]]], 
			["_event","",[""]], 
			["_keypadInput",-1,[0,false,""]]
		];

		//--- Display
		private _displayClass = "RscExtremo_LockScreen";
		private _object = _data param [0,displayNull,[displayNull,controlNull]];
		private _display = (if(typeName _object isEqualTo "CONTROL")then{ctrlParent _object}else{_object});
		private _lockCode = "";

		//--- Fail-safe
		if(isNull _display)then{
			_display = uiNameSpace getVariable [_displayClass,_display];
		};

		//--- 
		private _controls = [
			["controlsBackground","Background"],
			["controls","NumFake"],
			["controls","Num0"],
			["controls","Num1"],
			["controls","Num2"],
            ["controls","Num3"],
			["controls","Num4"],
            ["controls","Num5"],
			["controls","Num6"],
			["controls","Num7"],
			["controls","Num8"],
			["controls","Num9"],
			["controls","Confirm"],
			["controls","Cancel"],
			["controls","Screen"]
		];

		(_controls apply {_display displayCtrl getNumber(missionConfigFile >> _displayClass >> _x#0 >> _x#1 >> "idc")}) params [
			["_controlBackground",controlNull,[controlNull]],
			["_controlNumFake",controlNull,[controlNull]],
			["_controlNum0",controlNull,[controlNull]],
			["_controlNum1",controlNull,[controlNull]],
			["_controlNum2",controlNull,[controlNull]],
			["_controlNum3",controlNull,[controlNull]],
			["_controlNum4",controlNull,[controlNull]],
			["_controlNum5",controlNull,[controlNull]],
			["_controlNum6",controlNull,[controlNull]],
			["_controlNum7",controlNull,[controlNull]],
			["_controlNum8",controlNull,[controlNull]],
			["_controlNum9",controlNull,[controlNull]],
			["_controlConfirm",controlNull,[controlNull]],
			["_controlCancel",controlNull,[controlNull]],
			["_controlScreen",controlNull,[controlNull]]
		];

		//--- Buttons are used with mouse and keyboard
		private _fnc_updateScreen = {
			params [["_number",-1,[0]]];
			ctrlSetFocus _controlNumFake;
			if(_number < 0 OR _number > 9)exitWith{extremo_var_gui_inputString = "";false};
			
			if(isNil "extremo_var_gui_inputBusy")then{extremo_var_gui_inputBusy = false};
			if(extremo_var_gui_inputBusy)exitWith{false};

			if(isNil "extremo_var_gui_inputString")then{extremo_var_gui_inputString = ""};
			extremo_var_gui_inputString = format["%1%2",extremo_var_gui_inputString,_number];

			private _text = (if(profileNameSpace getVariable ["ExtremoStreamFriendlyUI", false]) then {
				toString(toArray extremo_var_gui_inputString apply {42})
			}else{
				extremo_var_gui_inputString
			});
			
			_controlScreen ctrlSetText _text;
			_controlConfirm ctrlEnable (count extremo_var_gui_inputString >= 4);
			
			true
		}; 

		private _fnc_deleteButton = {
			params [	
				["_singleNum",true],
				["_override",false]
			];

			if(isNil "extremo_var_gui_inputString")then{extremo_var_gui_inputString = ""};
			if(isNil "extremo_var_gui_inputStringAnim")then{extremo_var_gui_inputStringAnim = ""};
			if(isNil "extremo_var_gui_inputBusy")then{extremo_var_gui_inputBusy = false};
			if(isNull _display OR (extremo_var_gui_inputBusy AND !_override))exitWith{false};

			if _override then {
				extremo_var_gui_inputStringAnim = if(_singleNum AND count extremo_var_gui_inputStringAnim >= 1)then{extremo_var_gui_inputStringAnim select [0,(count extremo_var_gui_inputStringAnim) -1]}else{""};
			}else{
				extremo_var_gui_inputString = if(_singleNum AND count extremo_var_gui_inputString >= 1)then{extremo_var_gui_inputString select [0,(count extremo_var_gui_inputString) -1]}else{""};
			};
			
			ctrlSetFocus _controlNumFake;
			_controlScreen ctrlSetText ([extremo_var_gui_inputString,extremo_var_gui_inputStringAnim] select _override);
			_controlConfirm ctrlEnable (count extremo_var_gui_inputString >= 4);

			true
		};

		private _fnc_deleteAnim = compile (
			"
				private _display = uiNameSpace getVariable ['"+_displayClass+"',displayNull];
				("+str _controls+" apply {_display displayCtrl getNumber(missionConfigFile >> '"+_displayClass+"' >> _x#0 >> _x#1 >> 'idc')}) params [
					['_controlBackground',controlNull,[controlNull]],
					['_controlNumFake',controlNull,[controlNull]],
					['_controlNum0',controlNull,[controlNull]],
					['_controlNum1',controlNull,[controlNull]],
					['_controlNum2',controlNull,[controlNull]],
					['_controlNum3',controlNull,[controlNull]],
					['_controlNum4',controlNull,[controlNull]],
					['_controlNum5',controlNull,[controlNull]],
					['_controlNum6',controlNull,[controlNull]],
					['_controlNum7',controlNull,[controlNull]],
					['_controlNum8',controlNull,[controlNull]],
					['_controlNum9',controlNull,[controlNull]],
					['_controlConfirm',controlNull,[controlNull]],
					['_controlCancel',controlNull,[controlNull]],
					['_controlScreen',controlNull,[controlNull]]
				];
						
				extremo_var_gui_inputBusy = true;
				extremo_var_gui_inputStringAnim = ctrlText _controlScreen;
				ctrlSetFocus _controlNumFake;

				waitUntil {
					uiSleep 0.45;
					if(not([true,true] call "+str _fnc_deleteButton+"))exitWith{true};
					if(count extremo_var_gui_inputStringAnim isEqualTo 0)exitWith{true};
					false
				};

				uiSleep 0.20;	
				extremo_var_gui_inputBusy = false;
				_display closeDisplay 1;
			"
		);

		private _fnc_confirmButton = { 
			if(isNil "extremo_var_gui_inputLockCode")then{extremo_var_gui_inputLockCode = ""};
			if(isNil "extremo_var_gui_inputString")then{extremo_var_gui_inputString = ""};
			if(isNil "extremo_var_gui_inputBusy")then{extremo_var_gui_inputBusy = false};
			if(extremo_var_gui_inputBusy)exitWith{false};
			private _correctCode = (extremo_var_gui_inputString isEqualTo extremo_var_gui_inputLockCode AND count extremo_var_gui_inputLockCode >= 4);

			if _correctCode then{
				_controlScreen ctrlSetText "Correct";
				[] spawn _fnc_deleteAnim;
			}else{
				extremo_var_gui_inputString = "";
				if(count extremo_var_gui_inputString >= 4)then{ 
					systemChat format["Incorrect Code: %1",extremo_var_gui_inputString];
				};
			};
		};

		private _fnc_cancelButton = {
			if(isNil "extremo_var_gui_inputBusy")then{extremo_var_gui_inputBusy = false};
			if(extremo_var_gui_inputBusy)exitWith{false};
			extremo_var_gui_inputString = "";
			_display closeDisplay 2;
		};

		//--- Handle  input
		switch (typeName _keypadInput) do {
			case "BOOL": 
			{
				if(_event isEqualTo "onMouseButtonClick")then{ 
					_keypadInput = [-999,999] select _keypadInput;//(confirm\cancel)	
				};
			}; 
			case "STRING": 
			{
				if(_event isEqualTo "onSetPin")then{ 
					_lockCode = _keypadInput;
				};
			};
		};
		 
		//--- Handle events
		switch _event do {
			case "onLoad":
			{ 
				uiNameSpace setVariable [_displayClass,_display];
				extremo_var_gui_inputString = "";
				_controlScreen ctrlSetText "ENTER LOCKCODE";
				_controlConfirm ctrlEnable false;
				ctrlSetFocus _controlNumFake;
			};
			case "onUnLoad":
			{  
				uiNameSpace setVariable [_displayClass,displayNull];
			};
			case "onSetPin":
			{
				extremo_var_gui_inputLockCode = _lockCode;
			};
			case "onKeyUp":	
			{ 
				_data params [
					["_control",displayNull,[displayNull,controlNull]], 
					["_dik",0,[0]],
					["_shift",false,[false]],  
					["_ctrl",false,[false]], 
					["_alt",false,[false]]
				];

				private _stopPropagation = false;
				switch _dik do  
				{ 
					//Add (keyboard\numpad)
					case 0x52; case 0x0B: { [0] call _fnc_updateScreen; _stopPropagation = true; };
					case 0x4F; case 0x02: { [1] call _fnc_updateScreen; _stopPropagation = true; };
					case 0x50; case 0x03: { [2] call _fnc_updateScreen; _stopPropagation = true; };
					case 0x51; case 0x04: { [3] call _fnc_updateScreen; _stopPropagation = true; };
					case 0x4B; case 0x05: { [4] call _fnc_updateScreen; _stopPropagation = true; };
					case 0x4C; case 0x06: { [5] call _fnc_updateScreen; _stopPropagation = true; };
					case 0x4D; case 0x07: { [6] call _fnc_updateScreen; _stopPropagation = true; };
					case 0x47; case 0x08: { [7] call _fnc_updateScreen; _stopPropagation = true; };
					case 0x48; case 0x09: { [8] call _fnc_updateScreen; _stopPropagation = true; };
					case 0x49; case 0x0A: { [9] call _fnc_updateScreen; _stopPropagation = true; };
					//Delete
					case 0x0E:
					{
						[] call _fnc_deleteButton;
						_stopPropagation = true;	
					};
					//Confirm
					case 0x1C; case 0x9C:
					{
						[] call _fnc_confirmButton;
						_stopPropagation = true;
					};
					//Cancel
					case 0x01: 
					{ 
						[] call _fnc_cancelButton;
						_stopPropagation = true; 
					}; 
				};
				_stopPropagation 
			};
			case "onMouseButtonClick":
			{ 
				_data params [
					["_control",displayNull,[displayNull,controlNull]], 
					["_dib",0,[0]], 
					["_xPos",0,[0]], 
					["_yPos",0,[0]],  
					["_shift",false,[false]],  
					["_ctrl",false,[false]], 
					["_alt",false,[false]]
				];

				private _mouseClickLeft = (_dib isEqualTo 0);
				private _mouseClickRight = (_dib isEqualTo 1);

				if _mouseClickLeft then
				{
					switch _keypadInput do 
					{
						//Numpad
						case 0;
						case 1;
						case 2;
						case 3;
						case 4;
						case 5;
						case 6;
						case 7;
						case 8;
						case 9:{[_keypadInput] call _fnc_updateScreen};
						//Confirm
						case 999:{[] call _fnc_confirmButton};
						//Cancel
						case -999;
						default {[] call _fnc_cancelButton};
					};
				}else{
					switch _keypadInput do 
					{
						//Confirm
						case 999:   {[false] call _fnc_deleteButton};
						//Cancel
						case -999: 	{[true] call _fnc_deleteButton};
					};
				};
			};
		};
	};
	
	(["7296",true] call Extremo_fnc_gui_lockScreen) params [
		"_display",
		"_lockcode"
	]; 
};

//--- extremo_fnc_system_versionInfo
if(isNil "extremo_fnc_system_versionInfo")then
{
	extremo_fnc_system_versionInfo = { 
		private _defaultFormat = "0.0.0-error.0+bad input";

		params [
			["_version",_defaultFormat,["",{}]]
		];

		//--- Input was compiled
		if(typeName _version isEqualTo "CODE")then{
			private _temp = call _version;
			_version = if(typeName _temp isEqualTo "STRING")then{_temp}else{_defaultFormat};
		};

		private _verArray = toArray _version;
		private _verError = (false in ([[43,1],[45,1],[46,3]] apply {_x params ["_char","_count"];({_x isEqualTo _char} count _verArray) isEqualTo _count}));
		private _verReturn = [format["v%1",_version],"",parseNumber _version,0,"0","","",0,""];
		
		if _verError exitWith { _verReturn };

		//--- Meta
		(_version splitString "+") params [
			["_versionRelease","0.0.0",[""]],
			["_meta",""]
		];

		//--- Release
		(_versionRelease splitString "-") params [
			["_versionString","0.0.0",[""]],
			["_releaseString","error.0+bad input"]
		];

		//--- Build
		(_releaseString splitString ".") params [
			["_verRelease","error",[""]],
			["_verReleaseBuild","0"]
		];

		//--- Version
		(_versionString splitString ".") params [
			["_verMajor","0",[""]],
			["_verMinor","0"],
			["_verPatch","0"]
		];

		//--- Update return array
		{_verReturn set [_forEachIndex,_x]}forEach [
			format["v%1",_version],					//--- Full
			format["v%1.%2",_verMajor,_verMinor],	//--- Short
			parseNumber _verMajor,					//--- Major
			parseNumber _verMinor,					//--- Minor
			_verPatch,								//--- Patch
			_releaseString,							//--- Pre-Release Full
			_verRelease,							//--- Pre-Release Short
			parseNumber _verReleaseBuild,			//--- Pre-Release Build
			_meta									//--- Meta
		];

		//--- Return
		_verReturn
	};
	
	("1.1.200-alpha.1+test" call extremo_fnc_system_versionInfo)params[
		["_versionFull",""],
		["_versionShort",""],
		["_verMajor",""],
		["_verMinor",""],
		["_verPatch",""],
		["_preReleaseFull",""], 
		["_preReleaseShort",""],
		["_preReleaseBuild",""],
		["_meta",""]
	];

};

//--- extremo_fnc_system_changePos
if(isNil "extremo_fnc_system_changePos")then
{
	extremo_fnc_system_changePos = {
		params [
			["_object",cursorObject],
			["_distance",nil],
			["_elevation",nil],
			["_flip",false]
		];
		
		if(isNull _object)exitWith{[0,0,0]};
		if(isNil "_distance")then{_distance = 0};
		if(isNil "_elevation")then{_elevation = 0};

		(getPosATL _object) params [
			["_currentPosX",0],
			["_currentPosY",0],
			["_currentPosZ",0]
		];

		private _newPos = [_currentPosX + (_distance / 2),_currentPosY + (_distance / 2),_currentPosZ + _elevation];
		if _flip then{
			_newPos = [_currentPosX + (_distance / 2),_currentPosY - (_distance / 2),_currentPosZ + _elevation];
		};
		_object SetPosATL _newPos;

		_newPos
	};

	[player,nil,2] call extremo_fnc_system_changePos;
};

//--- extremo_fnc_system_getRealTime
if(isNil "extremo_fnc_system_getRealTime")then{
	extremo_fnc_system_getRealTime = {
		params [
			["_seconds",false]
		];

		// parseNumber(((systemTimeUTC select [3,2]) joinString "."))
		//[parseNumber(((systemTimeUTC select [3,2]) joinString ".") + str(systemTimeUTC#5)),'HH:MM:SS'] call BIS_fnc_timeToString

		(((systemTime select [3,[2,3] select _seconds]) apply {if(_x < 10)then {"0" + str _x}else{str _x}}) joinString ":")
	};

	true call extremo_fnc_system_getRealTime	
}; 

//--- extremo_fnc_vehicles_generateVIN
if(isNil "extremo_fnc_vehicles_generateVIN")then{

	extremo_fnc_vehicles_generateVIN = {
		params [
			["_class","",["",objNull]],
			["_lockcode","",[""]],
			["_steamID","",[""]]
		];

		if(typeName _class isEqualTo "OBJECT")then{
			_class = typeOf _class;
		};
		
		private _vinClass = toArray (_class select [0,5]) joinString "";
		private _vinLockcode = toArray _lockcode joinString "X";

		private _vinUid = _steamID select [12,5]; 
		for "_i" from 1 to 5 do {
			_vinUid = (selectrandom ("9876543210" splitString "")) + _vinUid;
		};
		format ["A3_%1_%2_%3",_vinClass,_vinUid,_vinLockcode];
	};

	extremo_fnc_vehicles_getPinFromVin = {
		params [
			["_vin","",[""]]
		];

		private _lockCodeID = (_vin splitString "_") call BIS_fnc_arrayPop;
		private _lockCode = toString((_lockCodeID splitString "X") apply {parseNumber _x});
		_lockCode
	};

	extremo_fnc_vehicles_updateVinPin = {
		params [
			["_vin","",[""]],
			["_lockCode","",[""]]
		];

		private _vinSections = (_vin splitString "_");

		_vinSections set [3, toArray _lockcode joinString "X"];

		_vin = _vinSections joinString "_";
	
		_vin
	};

	extremo_fnc_vehicles_setObjectVin = {
		params [
			["_object",objNull,[objNull]],
			["_vin","",[""]]
		];

		_object setVehicleVarName _vin;
	
		private _isSet = _object isEqualTo (_vin call extremo_fnc_vehicles_getObjectFromVin);
		
		_isSet
	};

	extremo_fnc_vehicles_getObjectVin = {
		params [
			["_object",objNull,[objNull]]
		];
		
		private _vin = vehicleVarName _object;
		
		if !((_vin select [0,2]) in ["A1","A2","A3"])then{
			_vin = "<BAD-VIN>";
		};
	
		_vin
	};

	extremo_fnc_vehicles_getObjectFromVin = {
		params [
			["_vin","",[""]]
		];

		private _object = objNull;

		{
			if((_x call extremo_fnc_vehicles_getObjectVin) isEqualTo _vin)exitWith{
				_object = _x;
			};
		}forEach vehicles;

		_object
	};

	private _vin = ["I_C_Offroad_02_unarmed_F","2411",getPlayerUID player] call extremo_fnc_vehicles_generateVIN; // "A3_7395679579_723662_50X52X49X49"
	_vin
	private _pin = [_vin] call extremo_fnc_vehicles_getPinFromVin;	// "2411"
	private _vinNew = [_vin,"7233"] call extremo_fnc_vehicles_updateVinPin;	//"A3_7395679579_723662_55X50X51X51"


	/*
	(_vin splitString "_" select [2,2]) params [["_uniqueID",""],["_lockCodeID",""]];
	private _lockCode = toString((_lockCodeID splitString "X") apply {parseNumber _x});

	["A3_7395679579_723662_50X52X49X49"] call extremo_fnc_vehicles_getPinFromVin
	*/

	(_vin splitString "_" select [2,2]) params [
		["_uniqueID",""],
		["_lockCodeID",""]
	];

	private _lockCode = toString((_lockCodeID splitString "X") apply {parseNumber _x});
};

//--- extremo_fnc_3denSP_placeTrader (buggy WIP)
if(isNil "extremo_fnc_3denSP_placeTrader")then{

	extremo_fnc_3denSP_placeTrader = {
		params [
			["_class","",[""]] 
		];

		private _start = eyePos player; 
		private _ins = lineIntersectsSurfaces [_start, _start vectorAdd (getCameraViewDirection player vectorMultiply 1000),player,objNull,true,1,'FIRE','NONE'];
		private _pos = if (count _ins > 0) then [{_ins select 0 select 0},{ _start vectorAdd (getCameraViewDirection player vectorMultiply 1000)}];
		
		extremo_temp_trader = _class createVehicleLocal _pos; 
		extremo_temp_trader setDir (360 - (getDir player));

		private _result = ["Are you sure?", "Confirm Placement", true, true] call BIS_fnc_guiMessage;

		if !_result exitWith {
			deleteVehicle extremo_temp_trader; 
		};

		copyToClipboard str([_class, getPosASL extremo_temp_trader, [vectorUp extremo_temp_trader, vectorDir extremo_temp_trader], simulationEnabled extremo_temp_trader]);
		systemChat "Generated Code for Trader, Saved to Clipboard.";
	};
	
	["Extremo_Trader_Vehicle"]spawn extremo_fnc_3denSP_placeTrader
};

//onMapSingleClick "player setPosATL _pos; true";

 
/*
["Extremo_Trader_Office"]spawn extremo_fnc_3denSP_placeTrader;
[extremo_temp_trader,-0.2,nil,true] call extremo_fnc_system_changePos;
extremo_temp_trader setDir (getDir extremo_temp_trader) + 10;
["Extremo_Trader_Office", getPosASL extremo_temp_trader, [vectorUp extremo_temp_trader, vectorDir extremo_temp_trader], simulationEnabled extremo_temp_trader]
*/

 
