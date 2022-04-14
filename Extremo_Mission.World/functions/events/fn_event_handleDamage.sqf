/*
	## EXTREMO
	## Nikko Renolds
*/

params [
	["_player",objNull,[objNull]],
	["_selectionName","",[""]],
	["_damage",0,[0]],
	["_source",objNull,[objNull]],
	["_projectile","",[""]],
	["_hitPartIndex",-1,[-1]],
	["_instigator",objNull,[objNull]]
];

private _exit = false;
private _vehicle = vehicle _source;
private _isVehicle = ((_vehicle isKindOf "Air" OR _vehicle isKindOf "Car" OR _vehicle isKindOf "Ship") AND _projectile isEqualTo "");
private _currentDamage = [_player getHit _selectionName,damage _player] select (_selectionName isEqualTo "");
private _incapacitated = _player getVariable ["extremo_var_incapacitated", false];

//---
if (!isNull _source && {_source isNotEqualTo _player}) then 
{
	//--- Already Incapacitated and something executed our player
	if _incapacitated exitWith {
		_exit = true; 
		Extremo_var_medical_healthState = 2;
		Extremo_var_medical_executer = _source; 
	};

	//--- We dont handle damage to these part in this scope
	if !(_selectionName in ["","body", "head"]) exitWith {_currentDamage};

	//--- Handle player being ran over
	if (_isVehicle AND count(getPlayerUID(driver(_vehicle))) isEqualTo 17) then 
	{
		private _playerName = name _player;
		private _playerUID = getPlayerUID _player;
		private _playerNET = netID _player;
		private _playerLocation = getPosATL _player;

		private _driver = driver _vehicle;
		private _driverName = name _driver;
		private _driverUID = getPlayerUID _driver;
		private _driverNET = netID _driver;
		
		private _vehicleCrew = ((crew _vehicle) - [_driver]) apply { 
			private _crewName = name _x;
			private _crewUID = getPlayerUID _x;
			private _crewNET = netID _x;
			[_crewNET,_crewName,_crewUID]
		};
		private _vehicleType = typeOf _vehicle;
		private _vehicleNET = netID _vehicle;
		private _vehiclePlate = getPlateNumber _vehicle;
		private _vehicleReports = _vehicle getVariable ["ExtremoIncidents",[]];
	 
		_vehicleReports pushBack [
			_vehicleNET, 
			_vehiclePlate,
			_vehicleType,
			_driverName,
			_driverUID,
			_driverNET,
			_vehicleCrew,
			_playerName,
			_playerUID,
			_playerNET,
			_playerLocation,
			format (["%1:%2"] + (systemTimeUTC select [3,3])),
			format (["%3/%2/%1"] + (systemTimeUTC select [0,3]))
		];
		
		_vehicle setVariable ["ExtremoIncidents", _vehicleReports, true];
	
		private _message = parseText (if(_playerUID isNotEqualTo _driverUID)then { 
		 	format["
				<t color='#ff0000' size='1.5' align='center'>VDM Report</t>
				<br/>
				<br/>
				<t size='1' align='center'>You have just been ran over by: %1</t> 
			", _driverName];
		}else{
			"
				<t color='#ff0000' size='1.5' align='center'>VDM Report</t>
				<br/>
				<br/>
				<t size='1' align='center'>You have just been arma`d</t> 
			"
		});

		//hint _message;
		systemChat (((str(_message)regexReplace["\ ", "^"])splitString"^")joinString" ");
		 
		_damage = _currentDamage;
	};
};

//--- Handled in other system
if _exit exitWith {};

//--- Incapacitate if our player can die
if (_this call extremo_fnc_medical_canDie) then { 
	[_source,_player] spawn extremo_fnc_medical_incapacitated;
};

//--- Adjust damage to prevent death but so they still take damage
_damage min 0.99
