/*
	## EXTREMO Survival
	## Nikko Renolds
*/

private _table = [_this] call BIS_fnc_arrayShift;
private _action = [_this] call BIS_fnc_arrayShift;
private _rexecID = remoteExecutedOwner;
private _output = [];
private _updates = [];
private _whereClause = [
	["WorldName", ["DB","STRING", WorldName] call Extremo_fnc_database_parse]
];
		
switch _table do {
	case "characters": 
	{
		private _object = [_this] call BIS_fnc_arrayShift;
		if(typeName _object isEqualTo "OBJECT")then
		{
			private _steamID = getPlayerUID _object;
			private _name = name _object;
			private _uniqueVar = format["extdb_var_database_%1error",_steamID];
			private _attempts = missionNamespace getVariable [_uniqueVar,0];
			private _BEGuid = ExtremoBeGuidHashmap getOrDefault [_steamID,'BEGuid' callExtension ("get:"+_steamID)]; 
			private _BEGuidNotCached = not(_steamID in keys ExtremoBeGuidHashmap); 
			private _BEGuidNotCalculated = _BEGuid isEqualTo "";
			 
			_whereClause  pushBack ["BEGuid", ["DB","STRING", _BEGuid] call Extremo_fnc_database_parse];

			if _BEGuidNotCalculated exitWith{[_rexecID,"<extremo_fnc_event_databse_server2client> Error calculating players BEGuid"] call Extremo_fnc_system_kick};
			if _BEGuidNotCached then {
				ExtremoBeGuidHashmap set [_steamID, _BEGuid];
				_whereClause pushBackUnique ["S64ID", ["DB","STRING", _steamID] call Extremo_fnc_database_parse];
			};

			switch _action do 
			{
				//["characters","load",player] remoteExec ["extremo_fnc_database_server", 2];
				case "load": 
				{ 
					private _spawnIsland = [missionConfigFile >> "CfgSpawn" >> "Extremo" >> worldName, "spawnIsland", ""] call BIS_fnc_returnConfigEntry;
					private _startcash = [missionConfigFile >> "CfgPlayer" >> "Extremo", "startCash", 0] call BIS_fnc_returnConfigEntry;
					private _forbiddenPositions = [missionConfigFile >> "CfgPlayer" >> "Extremo", "forbiddenPositions", []] call BIS_fnc_returnConfigEntry;
					private _useLatestRecord = true;

					if(_attempts > 5) exitWith {
						[_rexecID, format["Warning unable to load database records for BEGuid: %1", _BEGuid]] call Extremo_fnc_system_kick;
					};

					format["Reading database records for BEGuid: %1", _BEGuid] call Extremo_fnc_database_systemlog;
					private _request = ["READ",_table,[["BEGuid","S64ID","LastKnownName","LastLoadout","LastPosition","Wallet"],_whereClause]]call Extremo_fnc_database_request;

					//--- Bad.. fail safe
					if (typeName _request isNotEqualTo "ARRAY") exitWith {
						missionNamespace setVariable [_uniqueVar, (_attempts + 1), true];
						[_this,{_this remoteExec ["extremo_fnc_database_server", 2]}] remoteExec ['call', _rexecID];
					};

					//--- Check for insert 
					if (count _request isEqualTo 0) exitWith {
						missionNamespace setVariable [_uniqueVar, (_attempts + 1), true];

						format["Inserting database records for BEGuid: %1", _BEGuid] call Extremo_fnc_database_systemlog;

						_request = ["CREATE", _table, 
							[//What
								["BEGuid", 			["DB","STRING", _BEGuid] call Extremo_fnc_database_parse],
								["S64ID", 			["DB","STRING", _steamID] call Extremo_fnc_database_parse],
								["LastKnownName", 	["DB","STRING", _name] call Extremo_fnc_database_parse],
								["Wallet", 			["DB","A2NET", _startcash] call Extremo_fnc_database_parse],
								["WorldName", 		["DB","STRING", WorldName] call Extremo_fnc_database_parse]
							]
						]call Extremo_fnc_database_request;

						if (typeName _request isNotEqualTo "ARRAY") exitWith {
							[_rexecID, "Warning error occured with database"] call Extremo_fnc_system_kick;
						};
						
						format["Inserted database records for BEGuid: %1", _BEGuid] call Extremo_fnc_database_systemlog;
						[[_table,_action,_object],{_this remoteExec ["extremo_fnc_database_server", 2]}] remoteExec ['call', _rexecID];
					};

					//--- 
					if(count _request > 1)then{
						format["Warning multiple database records for BEGuid: %1, using %2 record!", _BEGuid,["first","latest"] select _useLatestRecord] call Extremo_fnc_database_systemlog;
					};

					//--- Select database record
					_request = if(_useLatestRecord)then{_request call BIS_fnc_arrayPop}else{[_request] call BIS_fnc_arrayShift};

					//--- 
					if(_BEGuid isNotEqualTo ([_request] call BIS_fnc_arrayShift))exitWith{
						[_rexecID, format["Warning unable to load database records for BEGuid: %1", _BEGuid]] call Extremo_fnc_system_kick;
					};

					//--- 
					format["Loaded database records for BEGuid: %1", _BEGuid] call Extremo_fnc_database_systemlog;

					//--- Parse request values
					{_request set [_x#0,["GAME",_x#1, _request#(_x#0)] call Extremo_fnc_database_parse]}forEach [
						[1,"STRING"],	//Parse LastKnownName
						[2,"ARRAY"],	//Parse LastLoadout
						[3,"ARRAY"],	//Parse LastPosition
						[4,"A2NET"]		//Parse Wallet
					];

					//--- Parse values into local vars with defaults 
					if !(_request params [
						["_S64ID","",[""]],//0
						["_LastKnownName","",[""]],//1
						["_LastLoadout",[],[[]]],//2
						["_LastPosition",[],[[]]],//3
						["_Wallet",0,[0]]//4
					])exitWith{
						[_rexecID, format["Warning unable parse database record for BEGuid: %1", _BEGuid]] call Extremo_fnc_system_kick;
					};

					//--- Update name
					if(_name isNotEqualTo _LastKnownName)then{
						_LastKnownName = _name;
						_updates pushBackUnique ["LastKnownName",["DB","STRING", _LastKnownName] call Extremo_fnc_database_parse]; 
					};

					//--- Reset broken\forbidden positions
					if(count _LastPosition isEqualTo 3)then
					{
						if(_LastPosition isEqualTo [0,0,0])then{
							_LastPosition = nil;
						}else{
							_LastPosition params [
								["_posX",0,[0]],
								["_posY",0,[0]],
								["_posZ",0,[0]]
							];
							
							//Push scripted respawn position into forbidden positions
							_forbiddenPositions pushback [_spawnIsland,1000];

							
							//Check Last position is not within any forbidden positions
							if(true in (_forbiddenPositions apply {_LastPosition distance2D (if(typeName(_x#0) isEqualTo "STRING")then{getMarkerPos(_x#0)}else{_x#0}) <= (_x#1)}))then{
								_LastPosition = nil;
							};
 
							//Last position Not on land, so reset Z axis so they don't freefall from Last position to land. (mostly occurs if player was flying whilst server was restarted)
							if(_posZ > 0) then {
								_posZ = 0.00001;
								_LastPosition set [2, _posZ];
							};
						};
					}else{
						if(_LastPosition isNotEqualTo [])then{
							_LastPosition = nil;
						};
					};

					if(isNil "_LastPosition")then{
						_LastPosition = [];
						_updates pushBackUnique ["LastPosition",["DB","ARRAY", _LastPosition] call Extremo_fnc_database_parse];	
					};

					//--- Send result to client
					[_table,_action,_BEGuid,_LastLoadout,_LastPosition,_Wallet] remoteExec ["extremo_fnc_database_client",_rexecID];
				};
				//["characters","update",player] remoteExec ["extremo_fnc_database_server", 2];
				case "update": 
				{
					private _LastPosition = getPosATL _object;
					private _LastLoadout = getUnitLoadout _object;
					private _Wallet = _object getVariable ["ExtremoWallet", 0];

					//--- Parse data
					{
						if((typeName (_x#1)) isEqualTo _x#2)then{
							_updates pushBackUnique [_x#0,["DB",_x#3,_x#1] call Extremo_fnc_database_parse];
						};
					}forEach [
						["Wallet",_Wallet,"SCALAR","A2NET"],
						["LastPosition",_LastPosition,"ARRAY","ARRAY"],
						["LastLoadout",_LastLoadout,"ARRAY","ARRAY"]
					];
				};
			};
		};
	};
	case "vehicles": 
	{ 
		switch _action do 
		{
			//["vehicles","add", player, vehicle player, "2411"] remoteExec ["extremo_fnc_database_server", 2];
			case "add": 
			{
				private _playerobject = [_this] call BIS_fnc_arrayShift;
				private _vehicleobject = [_this] call BIS_fnc_arrayShift;
				private _lockCode = [_this] call BIS_fnc_arrayShift;

				if(typeName _playerobject isEqualTo "OBJECT" AND typeName _vehicleobject isEqualTo "OBJECT")then
				{
					private _steamID = getPlayerUID _playerobject;
					private _BEGuid = ExtremoBeGuidHashmap get _steamID;

					private _vehiclePosition = [
						getPosATL _vehicleobject,
						vectorDir _vehicleobject,
						vectorUp _vehicleobject
					];

					private _class = typeOf _vehicleobject;
					private _vin = [_class,_lockCode,_steamID] call extremo_fnc_vehicles_generateVIN;

					private _request = ["CREATE", _table, 
						[//What
							["BEGuid", 		["DB","STRING", _BEGuid] call Extremo_fnc_database_parse],
							["Class", 		["DB","STRING", _class] call Extremo_fnc_database_parse],
							["Position", 	["DB","ARRAY", _vehiclePosition] call Extremo_fnc_database_parse],
							["WorldName", 	["DB","STRING", WorldName] call Extremo_fnc_database_parse],
							["VIN",			["DB","STRING", _vin] call Extremo_fnc_database_parse]  
						]
					]call Extremo_fnc_database_request;

					if (typeName _request isNotEqualTo "ARRAY") exitWith {
						[_rexecID, "Warning error occured with database"] call Extremo_fnc_system_kick;
					};
					
					if([_vehicleobject,_Vin] call extremo_fnc_vehicles_setObjectVin)then{
						_output = [_vin];
					};
				};
			};
			//["vehicles","load", 3, vehicle player] remoteExec ["extremo_fnc_database_server", 2];
			case "load": 
			{
				private _vehicleID = [_this] call BIS_fnc_arrayShift;
				private _vehicleobject = [_this] call BIS_fnc_arrayShift;

				if(typeName _vehicleID isEqualTo "STRING")then{
					_whereClause pushBack ["VIN", ["DB","STRING", _vehicleID] call Extremo_fnc_database_parse];
				}else{
					_whereClause pushBack ["ID", _vehicleID];
				};

				private _request = ["READ",_table,
					[
						["ID","BEGuid","Class","VIN","Wallet","LockState","Position","Fuel","Damage","HitPoints"],
						_whereClause
					],true
				]call Extremo_fnc_database_request;

				if (typeName _request isNotEqualTo "ARRAY") exitWith {
					[_rexecID, "Warning error occured with database"] call Extremo_fnc_system_kick;
				};

				_request params [
					["_ID",-1,[0]],
					["_BEGuid","",[""]],
					["_Class","",[""]],
					["_Vin","",[""]],
					["_Wallet",0,[0]],
					["_LockState",0,[0]],
					["_Position","[]",[""]],
					["_Fuel",0,[0]],
					["_Damage",0,[0]],
					["_HitPoints","[]",[""]]
				];

				(["GAME","ARRAY", _Position] call Extremo_fnc_database_parse) params [
					["_posATL",[]],
					["_vectorDir",[]],
					["_vectorUp",[]]
				];

				if([_vehicleobject,_Vin] call extremo_fnc_vehicles_setObjectVin)then
				{
					//--- Vehicle Info 
					_vehicleobject setVariable ["ExtremoOwner",_BEGuid,true];

					//--- Money
					_vehicleobject setVariable ["ExtremoWallet",_Wallet,true];

					//--- Lock
					private _lockCode = [_Vin] call extremo_fnc_vehicles_getPinFromVin;
					private _isLocked = (_LockState isEqualTo -1);
					/*if (_isLocked AND _unlockInSafeZonesAfterRestart AND (_posATL call Extremo_fnc_util_world_isInTraderZone)) then {
						_isLocked = false;
					};*/

					if (_isLocked) then{
						_vehicleobject setVariable ["ExtremoIsLocked", -1];
						_vehicleobject lock 2;
						_vehicleobject enableRopeAttach false;
					}else{
						_vehicleobject setVariable ["ExtremoIsLocked", 0];
						_vehicleobject lock 0;
						_vehicleobject enableRopeAttach true;
					};

					//--- Fuel
					_vehicleobject setFuel _Fuel;
	
					//--- Damage
					_vehicleobject setDamage _Damage;
					{_vehicleobject setHitPointDamage _x} forEach (["GAME","ARRAY", _HitPoints] call Extremo_fnc_database_parse);

					//--- Return
					_output = [_vehicleobject,_request];
				};
			};
			//["vehicles","update", vehicle player,[]] remoteExec ["extremo_fnc_database_server", 2];
			case "update": 
			{  
				private _vehicleobject = [_this] call BIS_fnc_arrayShift;
				private _vehicleData = [_this] call BIS_fnc_arrayShift;
	
				if(typeName _vehicleobject isEqualTo "OBJECT" )then
				{ 
					private _vehicleID = _vehicleobject getVariable ["ExtremoVIN",-1]; 
					if(_vehicleID in [-1,""])exitWith{}; 
					if(typeName _vehicleID isEqualTo "STRING")then{
						_whereClause pushBack ["VIN", ["DB","STRING", _vehicleID] call Extremo_fnc_database_parse];
					}else{
						_whereClause pushBack ["ID", _vehicleID];
					};
 
					(getAllHitPointsDamage _vehicleObject) params [
						["_hitPointNames",[]],
						["_hitSelectionNames",[]],
						["_hitDamageValues",[]]
					];
							
					private _vehicleHitpoints = _hitPointNames apply {[_x,_vehicleObject getHitPointDamage _x]};
					private _vehiclePosition = [
						getPosATL _vehicleobject,
						vectorDir _vehicleobject,
						vectorUp _vehicleobject
					];

					_vehicleData params [
						["_spawned",true] 
					];

					private _wallet = _vehicleobject getVariable ["ExtremoWallet",0]; 
					private _lockState = _vehicleObject getVariable ["ExtremoIsLocked",-1];
					
					private _dead = false;
					private _damage = damage _vehicleobject;

					if(_damage >= 1)then{
						_dead = true;
					};

					//--- Parse data
					{
						if((typeName (_x#1)) isEqualTo _x#2)then{
							_updates pushBackUnique [_x#0,["DB",_x#3,_x#1] call Extremo_fnc_database_parse];
						};
					}forEach [
						["Position",_vehiclePosition,"ARRAY","ARRAY"],
						["Fuel",fuel _vehicleobject,"SCALAR","SCALAR"],
						["Wallet",_wallet,"SCALAR","A2NET"],
						["Damage",_damage,"SCALAR","SCALAR"],
						["LockState",_lockState,"SCALAR","SCALAR"],
						["Spawned",_spawned,"BOOL","BOOL"],
						["Dead",_dead,"BOOL","BOOL"],
						["Hitpoints",_vehicleHitpoints,"ARRAY","ARRAY"]
					];
				};
			};
		};
	};
};

//--- Any updates?
if(count _updates > 0)then{ 
	_request = ["UPDATE",_table,[_updates,_whereClause]]call Extremo_fnc_database_request;
	if(_request isEqualTo "DB:Update:Task-success")then {
		format["Updated Database table: %1", _table] call Extremo_fnc_database_systemlog;
	};
};

_output