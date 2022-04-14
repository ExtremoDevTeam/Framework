/*
	## EXTREMO
	## Nikko Renolds
*/

params [
	["_player",objNull,[objNull]],
	["_className","",[""]],
	["_lockCode","",[""]]
];

private _position = [0,0,0];
private _salesPrice = getNumber(configFile >> "CfgExtremoArsenal" >> _className >> "price");
private _quality = getNumber(configFile >> "CfgExtremoArsenal" >> _className >> "quality");
private _requiredRespect = getNumber(configFile >> "CfgTrading" >> "requiredRespect" >> format["Level%1",_quality]);
private _playerMoney = (_player getVariable ["ExtremoWallet", 0]);
private _playerRespect = (_player getVariable ["ExtremoScore", 0]);
private _playerOwnerID = owner _player;

if (_className isKindOf "Ship") then {
	//_position = [(getPosATL _playerObject), 100, 20] call Extremo_fnc_world_findWaterPosition; 
} else {
	_position = (getPos _player) findEmptyPosition [10, 250, _className]; 
};

if (count _Lockcode < 4) exitWith {["ErrorTitleAndText",["Whoops!","Not a valid pincode to purchase this vehicle"]] remoteExecCall ["Extremo_fnc_gui_toasterScreen",_playerOwnerID]}; 
if (_salesPrice > _playerMoney) exitWith {["ErrorTitleAndText",["Whoops!","Not enough poptabs to purchase this vehicle"]] remoteExecCall ["Extremo_fnc_gui_toasterScreen",_playerOwnerID]};
if (_requiredRespect > _playerRespect) exitWith {["ErrorTitleAndText",["Whoops!","Not enough respect to purchase this vehicle"]] remoteExecCall ["Extremo_fnc_gui_toasterScreen",_playerOwnerID]};

private _vehicle = [_className, _position, (random 360), true, _Lockcode] call Extremo_fnc_vehicles_createPersistentVehicle;

if(!isNull _vehicle)then{ 
	
	//Add it to db
	private _data = ["vehicles", "add", _player, _vehicle, _Lockcode] call extremo_fnc_database_server;

	if(count _data isEqualTo 0)exitWith{ 
		["ErrorTitleAndText",["Whoops!","Something went really wrong. Please tell a server admin that you have having issues purchasing this vehicle due to a vin error"]] remoteExecCall ["Extremo_fnc_gui_toasterScreen",_playerOwnerID]
	};

	//Charge them
	_player setVariable ["ExtremoWallet", (_playerMoney - _salesPrice), true];
	 
	//update db records
	["characters", "update", _player] call extremo_fnc_database_server;
	["vehicles",   "update", _vehicle, [true]] call extremo_fnc_database_server;
	
	//finish on clientside
	[[_player,_vehicle,_salesPrice],{
		params [
			["_player",objNull],
			["_vehicle",objNull],
			["_price",0]
		];
		["SuccessTitleAndText", ["Vehicle purchased!", format ["-%1<img image='\Extremo_assets\texture\ui\poptab_inline_ca.paa' size='24'/>", _price]]] call Extremo_fnc_gui_toasterScreen;
		_player moveInDriver _vehicle;
	}]remoteExecCall ["call", _playerOwnerID];
}else{
	["ErrorTitleAndText",["Whoops!","Something went really wrong. Please tell a server admin that you have having issues purchasing this vehicle "]] remoteExecCall ["Extremo_fnc_gui_toasterScreen",_playerOwnerID];
};