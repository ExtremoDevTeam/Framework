/*
	## EXTREMO
	## Nikko Renolds
	
	[player, vehicle player, "7233"] call extremo_fnc_vehicles_updateVinPin;
	[player, vehicle player, "7233"] remoteExec ["extremo_fnc_vehicles_updateVinPin",2];
*/

params [ 
	["_player",objNull,[objNull]],
	["_vehicle",objNull,[objNull]],
	["_lockCode","",[""]]
];

if(isNull _player OR isNull _vehicle)exitWith{false};

private _vinOld = _vehicle getVariable ["ExtremoVIN","<error>"];
private _steamID = getPlayerUID _player;

//Get ID and class for given VIN from database (ID is used to update VIN after modifing)
private _vehiclesDB = ["READ","vehicles",
	[
		["ID","Class"],
		[
			["VIN", ["DB","STRING", _vinOld] call Extremo_fnc_database_parse]
		]
	],
	true
]call Extremo_fnc_database_request;
if (typeName _vehiclesDB isNotEqualTo "ARRAY") exitWith {false};

_vehiclesDB params [
	["_vehicleID",-1],
	["_vehicleClass",""]
];
 
//Generate New VIN
private _vinNew = [_vehicleClass,_lockCode,_steamID] call extremo_fnc_vehicles_generateVIN;

//Update VIN in database
private _updateRequest = ["UPDATE","vehicles",
	[
		[
			["VIN",  ["DB","STRING", _vinNew] call Extremo_fnc_database_parse]
		],
		[
			["ID",   _vehicleID],
			["VIN",  ["DB","STRING", _vinOld] call Extremo_fnc_database_parse]
		]
	]
]call Extremo_fnc_database_request;
   
if(_updateRequest isEqualTo "DB:Update:Task-success")then{
	//Set VIN on object
	[_vehicle,_vinNew] call extremo_fnc_vehicles_setObjectVin;
};

