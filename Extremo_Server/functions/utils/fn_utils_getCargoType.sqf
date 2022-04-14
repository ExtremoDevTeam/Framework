/*
	## EXTREMO Survival
	## Nikko Renolds
*/

params [
	["_itemName","",[""]]
];
 
private _itemType = [_itemName] call BIS_fnc_itemType;
private _cargoType = 4; 
switch(_itemType#0) do 
{
	case "Weapon": 		{ _cargoType = 2; };
	case "Mine": 		{ _cargoType = 1; };
	case "Magazine": 	{ _cargoType = 1; };
	case "Item":		{ _cargoType = 4; };
	case "Equipment": 
	{
		_cargoType = if((_itemType#1) == "Backpack")then {3}else{4};
	};
};
_cargoType
