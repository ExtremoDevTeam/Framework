/*
	## EXTREMO
	## Nikko Renolds
*/

private _itemType = [_this] call BIS_fnc_itemType;
private _isBackpack = (_itemType#1) isEqualTo "Backpack";
private _cargoType = switch(_itemType#0) do
{
	case "Weapon": 	 { 2 };
	case "Mine": 	 { 1 };
	case "Magazine": { 1 };
	case "Item":	 { 4 };
	case "Equipment":{if _isBackpack then {	3 }else{ 4 }};
	default {4};
};

_cargoType