//selectedObject = nil;

_this spawn {
	/* Extremo_SelectTarget, Extremo_ToggleLootPreview, Extremo_GenerateLootCode, Extremo_ClearLoot */
	_ID = _this select 0;
	// Select 'Loot Target'
	if(_ID == 0) then {
		selectedObject = get3DENSelected "object" select 0;
		if!(isNil "selectedObject") then {
			selectedObject call {
				drawHandler = addMissionEventHandler ["Draw3D", {
				private ["_obj","_bb","_bbx","_bby","_bbz","_arr","_y","_z"];
				_obj = selectedObject;
				if(_obj isKindOf "Static") then {
					_bb = {
						_bbx = [_this select 0 select 0, _this select 1 select 0];
						_bby = [_this select 0 select 1, _this select 1 select 1];
						_bbz = [_this select 0 select 2, _this select 1 select 2];
						_arr = [];
						0 = {
							_y = _x;
							0 = {
								_z = _x;
								0 = {
									0 = _arr pushBack (_obj modelToWorld [_x,_y,_z]);
								} count _bbx;
							} count _bbz;
							reverse _bbz;
						} count _bby;
						_arr pushBack (_arr select 0);
						_arr pushBack (_arr select 1);
						_arr
					};
					bbox = boundingBox _obj call _bb;
					bboxr = boundingBoxReal _obj call _bb;
						for "_i" from 0 to 7 step 2 do {
							drawLine3D [
								bboxr select _i,
								bboxr select (_i + 2),
								[0,1,0,1]
							];
							drawLine3D [
								bboxr select (_i + 2),
								bboxr select (_i + 3),
								[0,1,0,1]
							];
							drawLine3D [
								bboxr select (_i + 3),
								bboxr select (_i + 1),
								[0,1,0,1]
							];
						};
					};
				}];
				[format["%1 Selected as Loot Target", (str typeOf selectedObject)], [0, 0.80, 0.20, 0.40], "#BBCCDD", "ReadoutClick", 2] call Extremo3DEN_fnc_DisplayCustom3DENNotification;
			};
		} else {
			["Invalid target, target must be an object!", [0.60, 0, 0, 0.40], "#FFFFFF", 2, 2] call Extremo3DEN_fnc_DisplayCustom3DENNotification;
			selectedObject = nil;
		};
	};
	// Toggle Loot Preview On/Off
	if(_ID == 1) then {
		if(isNil "lootPreviewMode") then {
			{
				if(typeOf _x == "Sign_Sphere25cm_F") then {
					groundHolder = createVehicle ["GroundWeaponHolder", [0, 0, 0], [], 0, "CAN_COLLIDE"];
					groundHolder setPosATL (getPosATL _x);
					groundHolder addWeaponCargo ["arifle_MX_F", 1];
					groundHolder addItemCargo ["optic_ARCO", 1];
					groundHolder addMagazineCargo ["30Rnd_65x39_caseless_mag", 4];
				};
			} forEach (all3DENEntities select 0);
			lootPreviewMode = true;
			["Loot Preview Mode: ON", [0, 0.80, 0.20, 0.40], "#BBCCDD", "ReadoutClick", 2] call Extremo3DEN_fnc_DisplayCustom3DENNotification;
		} else {
			{
				if(typeOf _x == "Sign_Sphere25cm_F") then {
					_groundHolder = (getPosATL _x) nearestObject "GroundWeaponHolder";
					deleteVehicle _groundHolder;
				};
			} forEach (all3DENEntities select 0);
			lootPreviewMode = nil;
			["Loot Preview Mode: OFF", [0, 0.80, 0.20, 0.40], "#BBCCDD", "ReadoutClick", 2] call Extremo3DEN_fnc_DisplayCustom3DENNotification;
		};
	};
	// Generate Code for the Loot
	if(_ID == 2) then {
		if(!isNil "selectedObject") then {
			_stringPrefix = "class "+(typeOf selectedObject)+tostring[10]+"{"+tostring[10, 9]+"table = ""TablenameHere"";"+tostring[10, 9]+"positions[] = {";
			relPos = [];
			{
				numOfLoot = _forEachIndex;
				if(typeOf _x == "Sign_Sphere25cm_F") then {
					relPos pushBack (selectedObject worldToModel getPosATL _x);
					/*	TODO:
						* Confirm if co-ordinates work with Extremo, or if conversion to ConfigPosition needed
					*/
				};
			} forEach (all3DENEntities select 0);
			//
			{
				if(_forEachIndex == count relPos-1) then {
					_stringPrefix = _stringPrefix+"{"+(format["%1, %2, %3", relPos select _forEachIndex select 0, relPos select _forEachIndex select 1, relPos select _forEachIndex select 2])+"}";
				} else {
					_stringPrefix = _stringPrefix+"{"+(format["%1, %2, %3", relPos select _forEachIndex select 0, relPos select _forEachIndex select 1, relPos select _forEachIndex select 2])+"}, ";
				};
			} forEach relPos;
			//
			if(count relPos >= 1) then {
				_stringPrefix = _stringPrefix+"};"+tostring[10]+"};";
				copyToClipboard _stringPrefix;
				[format["Generated Code for %1 Loot Markers, Saved to Clipboard. Remember to change Table name!", (str numOfLoot)], [0, 0.30, 0.80, 0.40], "#BBCCDD", "ReadoutClick", 6] call Extremo3DEN_fnc_DisplayCustom3DENNotification;
			} else {
				["Error, no loot positions were found. Please place at least one! (Sign_Sphere25cm_F)", [0.60, 0, 0, 0.40], "#FFFFFF", 2, 6] call Extremo3DEN_fnc_DisplayCustom3DENNotification;
			};
		} else {
			["Error, target object was not found. Make sure you select a target object!", [0.60, 0, 0, 0.40], "#FFFFFF", 2, 6] call Extremo3DEN_fnc_DisplayCustom3DENNotification;
		};
	};
	if(_ID == 3) then {
		{
			if(typeOf _x == "Sign_Sphere25cm_F") then {
				deleteVehicle _x;
				delete3DENEntities[all3DENEntities select 0, "Sign_Sphere25cm_F"];
			};
		} forEach (all3DENEntities select 0);
		["Deleted all Loot Spheres.", [0, 0.80, 0.20, 0.40], "#BBCCDD", "ReadoutClick", 2] call Extremo3DEN_fnc_DisplayCustom3DENNotification;
	};
};