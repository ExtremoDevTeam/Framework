/*
	## EXTREMO
	## Nikko Renolds
*/

private _Traders = [
	//Trader 1
	["Extremo_Trader_VehicleCustoms",		[8951.92,2040.71,0.00146484],	318.854, 	["AidlPercMstpSnonWnonDnon_G01","AidlPercMstpSnonWnonDnon_G02","AidlPercMstpSnonWnonDnon_G03","AidlPercMstpSnonWnonDnon_G04","AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"]],
	["Extremo_Trader_Equipment", 			[8957.92,2052.39,0.687286],		321.594, 	["HubStanding_idle1","HubStanding_idle2","HubStanding_idle3"]],
	["Extremo_Trader_SpecialOperations", 	[8957.53,2058.62,5.0123],		136.44, 	["HubStanding_idle1","HubStanding_idle2","HubStanding_idle3"]],
	["Extremo_Trader_Office", 				[8948.95,2060.72,4.75497],		140.253, 	["HubBriefing_scratch","HubBriefing_stretch","HubBriefing_think","HubBriefing_lookAround1","HubBriefing_lookAround2"]],
	["Extremo_Trader_WasteDump", 			[8912.24,2035.32,0.00140381], 	6.75853, 	["HubStandingUA_move1","HubStandingUA_move2","HubStandingUA_idle1","HubStandingUA_idle2","HubStandingUA_idle3"]],
	["Extremo_Trader_Vehicle",				[8936.88,2062.25,0.109528],		312.28,		["InBaseMoves_repairVehicleKnl", "InBaseMoves_repairVehiclePne"]],
	["Extremo_Trader_Armory", 				[0, -0.15, -0.45], 				180,  		["InBaseMoves_SittingRifle1"], 	(["Land_CampingChair_V2_F", 	[8958.26,2052.27,4.75943], 		157.126] call Extremo_fnc_world_createAttachTo)],
	["Extremo_Trader_Food", 				[0.1, 0.5, 0.2], 				199.554,  	["InBaseMoves_table1"], 		(["Land_CashDesk_F", 			[8938.66,2041.21,0], 			199.554, [["Land_Microwave_01_F",[-0.6, 0.2, 1.1]],["Land_Ketchup_01_F",[-0.6, 0, 1.1]],["Land_Mustard_01_F",[-0.5, -0.05, 1.1]]]] call Extremo_fnc_world_createAttachTo)],
	["Extremo_Trader_Hardware", 			[0,	0,	   -0.5], 				170, 		["InBaseMoves_sitHighUp1"], 	(["Land_Workbench_01_F", 		[8959.19,2058.34,0.957733], 	45.4546] call Extremo_fnc_world_createAttachTo)]
];

{
	_x params [
		["_class","",[""]],
		["_position",[],[[]]],
		["_direction",0,[0]],
		["_animations",[],[[]]],
		["_attachToObject",objNull]
	];

	//--- Create trader
	private _trader = _class createVehicleLocal [0,0,0];
	_trader setVariable ["BIS_enableRandomization", false];
	_trader setVariable ["BIS_fnc_animalBehaviour_disable", true];
	_trader disableAI "ANIM";
	_trader disableAI "MOVE";
	_trader disableAI "FSM";
	_trader disableAI "AUTOTARGET";
	_trader disableAI "TARGET";
	_trader disableAI "CHECKVISIBLE";
	_trader enableSimulation true;

	//--- Change traders face
	_trader setFace (selectRandom [
		"PersianHead_A3_02",
		"AfricanHead_02",
		"WhiteHead_11",
		"GreekHead_A3_01",
		"GreekHead_A3_04",
		"WhiteHead_17"
	]);

	//--- Prevent trader taking damage
	_trader allowDamage false;
	_trader removeAllEventHandlers "HandleDamage";
	_trader addEventHandler["HandleDamage", {false}];
	 
	//--- Create attach to object
	if (isNull _attachToObject) then {
		_attachToObject = "Logic" createVehicleLocal [0, 0, 0];
		_attachToObject setPosATL _position;
		_position = [0, 0, 0];
	}; 
	
	//--- Prevent attach to object taking damage
	_attachToObject allowDamage false;
	_attachToObject removeAllEventHandlers "HandleDamage";
	_attachToObject addEventHandler["HandleDamage", {false}];
	
	//--- Attach trader to object
	_trader reveal _attachToObject;
	_attachToObject disableCollisionWith _trader;         
	_trader disableCollisionWith _attachToObject; 
	_trader attachTo [_attachToObject, _position];

	//--- Set trader direction
	_trader setDir _direction;
	
	//--- Set trader animations
	_trader switchMove (_animations#0);
	if (count _animations > 1) then {
		_trader call compile ("_this addEventHandler ['AnimDone', {(param[0,objNull]) switchMove (selectRandom "+str _animations+"); true}]");
	};
}forEach _Traders;

true