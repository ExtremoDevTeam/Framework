/*
	## EXTREMO Survival
	## Nikko Renolds
*/
 
params [
	["_lootTableName","",[""]]
];

//---
private _lootTableConfig = configFile >> "CfgExtremoLoot" >> "Tables" >> _lootTableName;
private _sum = getNumber(_lootTableConfig >> "sum");
private _count = getNumber(_lootTableConfig >> "count");
private _half = getNumber(_lootTableConfig >> "half");
private _halfIndex = getNumber(_lootTableConfig >> "halfIndex");
private _lootTableEntries = getArray(_lootTableConfig >> "items");

//---
private _return = "";
private _maxPossible = (count _lootTableEntries)-1;	
private _chance = random(_sum);
private _startIndex = 0;
private _endIndex = _halfIndex + 1;

//---
if (_chance >= _half) then {
	_startIndex = _halfIndex;
	_endIndex = _count - 1;
};

//---
for "_i" from _startIndex to (if(_endIndex > _maxPossible)then{_maxPossible}else{_endIndex}) do 
{
	(_lootTableEntries # _i)params [
		["_itemChance",0,[0]],
		["_itemName","",[""]]
	];

	if (_chance <= _itemChance) exitWith {
		_return = _itemName;
	};
};

//---
_return