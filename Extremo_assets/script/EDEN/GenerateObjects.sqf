#include "\a3\3DEN\UI\resincl.inc"

all3DENEntities spawn { 
	
	params [
		"_objects", 
		"_groups", 
		"_triggers", 
		"_systems", 
		"_waypoints", 
		"_markers", 
		"_layers", 
		"_comments"
	];
 
	{_objects pushBackUnique _x}forEach (get3DENSelected "object");
	 
	_objects = _objects apply {[typeOf _x, getPosASL _x, [vectorUp _x, vectorDir _x], simulationEnabled _x]};
	
	private _outputString = "";
	{_outputString = if(_forEachIndex == (count _objects-1)) then{_outputString+(str(_x))}else{_outputString+(str(_x)+","+toString[10])}} forEach _objects;

	if(count _objects >= 1) then {
		copyToClipboard ("["+ toString[10] + _outputString + toString[10] + "]");
		[(format["Generated Code for %1 Objects, Saved to Clipboard.", (count _objects)]), [0, 0.30, 0.80, 0.40], "#BBCCDD", "ReadoutClick", 2] call Extremo3DEN_fnc_DisplayCustom3DENNotification;
	} else {
		["Failed to Generate Code, No Objects Found!", [0.60, 0, 0, 0.40], "#FFFFFF", 2, 2] call Extremo3DEN_fnc_DisplayCustom3DENNotification;
	};
};