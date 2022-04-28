/*
	## EXTREMO Survival
	## Nikko Renolds
*/

params [
	["_playerObject",objnull,[objnull]]
];

private _spawnedLoot = false;
private _config = configFile >> "CfgExtremoLoot";
private _spawnRadius = getNumber (_config >> "spawnRadius");
private _spawnChancePerPosition = (getNumber (_config >> "spawnChancePerPosition") max 0) min 99; 
private _spawnChancePerBuilding = (getNumber (_config >> "spawnChancePerBuilding") max 0) min 99; 
private _maximumNumberOfLootSpotsPerBuilding = getNumber (_config >> "maximumNumberOfLootSpotsPerBuilding");
private _maximumNumberOfItemsPerLootSpot = getNumber (_config >> "maximumNumberOfItemsPerLootSpot");
private _minimumDistanceToTraderZones = getNumber (_config >> "minimumDistanceToTraderZones");
private _minimumDistanceToTerritories = getNumber (_config >> "minimumDistanceToTerritories");

try 
{
	if !(alive _playerObject)  throw false; 
	if !(vehicle _playerObject isEqualTo _playerObject) throw false;
		
	private _playerPosition = getPosATL _playerObject;
	private _lastKnownPlayerPosition = _playerObject getVariable["ExtremoPositionAtLastLootSpawnCircle", [0,0,0]]; 
	if (_lastKnownPlayerPosition distance2D _playerPosition < 11) throw false; 
	_playerObject setVariable["ExtremoPositionAtLastLootSpawnCircle", _playerPosition];	
	private _buildings = _playerObject nearObjects ["House", _spawnRadius];
	
	{
		private _building = _x;
		if !(isObjectHidden _building) then 
		{
			private _buildingType = typeOf _building;
			if (isClass(_config >> "Buildings" >> _buildingType)) then
			{
				if !(_building getVariable ["ExtremoHasLoot", false]) then
				{
					if ((floor (random 100)) <= _spawnChancePerBuilding) then {
						if (_minimumDistanceToTraderZones > 0) then {
							if ([_building, _minimumDistanceToTraderZones] call Extremo_fnc_utils_isTraderZoneInRange) throw false; 
						};
						if (_minimumDistanceToTerritories > 0) then {
							if ([_building, _minimumDistanceToTerritories] call Extremo_fnc_utils_isTerritoryInRange) throw false;
						};

						private _buildingConfig = _config >> "Buildings" >> _buildingType;
						private _lootTableName = getText (_buildingConfig >> "table");
						private _localPositions = getArray (_buildingConfig >> "positions");
						private _spawnedItemClassNames = [];
						private _lootWeaponHolderNetIDs = [];
						private _spawnedLootInThisBuilding = false;
						_localPositions = _localPositions call BIS_fnc_arrayShuffle;

						{	
							if (_forEachIndex isEqualTo (_maximumNumberOfLootSpotsPerBuilding - 1)) exitWith {};
							if ((floor (random 100)) <= _spawnChancePerPosition) then
							{
								private _lootPosition = ASLToATL (AGLToASL (_building modelToWorld _x));
								if (_lootPosition select 2 < 0.05) then {
									_lootPosition set [2, 0.05];
								};
								private _numberOfItemsToSpawn = (floor (random _maximumNumberOfItemsPerLootSpot)) + 1;
								private _lootHolder = objNull;
								for "_n" from 1 to _numberOfItemsToSpawn do  {
									private _itemClassName = _lootTableName call Extremo_fnc_loot_addItem;
									if !(_itemClassName in _spawnedItemClassNames) then {
										private _cargoType = _itemClassName call Extremo_fnc_utils_getCargoType;

										if (isNull _lootHolder) then  { 
											_lootHolder = createVehicle ["LootWeaponHolder", _lootPosition, [], 0, "CAN_COLLIDE"]; 
											_lootHolder setDir (random 360);
											_lootHolder setPosATL _lootPosition;
											_lootHolder setVariable ["ExtremoSpawnedAt", time];
											_lootWeaponHolderNetIDs pushBack (netId _lootHolder);											
										};

										switch (_cargoType) do
										{
											case 1: { 
												if (_itemClassName isEqualTo "Extremo_Item_MountainDupe") then{
													_lootHolder addMagazineCargoGlobal [_itemClassName, 2]; 
												} else  {
													_lootHolder addMagazineCargoGlobal [_itemClassName, 1]; 
												};
											};
											case 3: {_lootHolder addBackpackCargoGlobal [_itemClassName, 1]; };
											case 2: {_lootHolder addWeaponCargoGlobal [_itemClassName, 1]; 
												if !("_Melee_" in _itemClassName) then 
												{//add mags
													private _magazineClassNames = getArray(configFile >> "CfgWeapons" >> _itemClassName >> "magazines");
													if (count(_magazineClassNames) > 0) then {
														_magazineClassName = _magazineClassNames select (floor(random (count _magazineClassNames)));
														private _numberOfMagazines = 2 + floor(random 3); 
														_lootHolder addMagazineCargoGlobal [_magazineClassName, _numberOfMagazines];
													};
												};
											};
											default { _lootHolder addItemCargoGlobal [_itemClassName,1]; };
										};
										_spawnedItemClassNames pushBack _itemClassName;
										_spawnedLoot = true;
										_spawnedLootInThisBuilding = true;
									};
								};
							};
						} forEach _localPositions;

						if (_spawnedLootInThisBuilding) then {
							ExtremoServerBuildingNetIdsWithLoot pushBack (netId _building);
							_building setVariable ["ExtremoLootSpawnedAt", time];
							_building setVariable ["ExtremoHasLoot", true];
							_building setVariable ["ExtremoLootWeaponHolderNetIDs", _lootWeaponHolderNetIDs];
						};
					};
				};
			};
		};
	} forEach _buildings;
}
catch 
{
};

_spawnedLoot