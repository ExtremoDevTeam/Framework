/*
	## EXTREMO
	## Nikko Renolds
*/

params [
    ["_character",objNull,[objNull]],	// Object - is the object of the leaving player.
    ["_characterOwnerID",-100,[0]],	    // Number - is owner id of the leaving player. Can be used for kick or ban purposes or just for publicVariableClient. (since Arma 3 v1.49)
    ["_characterSteamID","",[""]],		// String - is getPlayerUID of the leaving player. In Arma 3 it is also the same as Steam ID.
    ["_characterName","",[""]]		    // String - is profileName of the leaving player.
];

private _BEGuid = ExtremoBeGuidHashmap getOrDefault [_characterSteamID,'BEGuid' callExtension ("get:"+_characterSteamID)]; 
private _Wallet = _character getVariable ["ExtremoWallet", 0];
private _loadout = getUnitLoadout [_character, false];
private _position = getPosATL _character;
 
[
    "UPDATE", "characters", 
    [
        [
            ["LastPosition",["DB","ARRAY", _position] call Extremo_fnc_database_parse],
            ["LastLoadout",["DB","ARRAY", _loadout] call Extremo_fnc_database_parse],
            ["Wallet",["DB","A2NET", _Wallet] call Extremo_fnc_database_parse]
        ],
        [
            ["BEGuid",str(ExtremoBeGuidHashmap getOrDefault [_characterSteamID,'BEGuid' callExtension ("get:"+_characterSteamID)])]
        ]
    ]
]call Extremo_fnc_database_request;

//-- Delete the body left behind
deleteVehicle _character;