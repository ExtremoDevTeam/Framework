/*
	## EXTREMO
	## Nikko Renolds

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
*/

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