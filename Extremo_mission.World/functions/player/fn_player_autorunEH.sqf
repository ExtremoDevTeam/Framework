/*
	## EXTREMO
	## Nikko Renolds
*/

if (Extremo_var_playerAutorunNextUpdate - diag_ticktime < 0 OR isNil "Extremo_var_playerAutorunNextUpdate") then 
{
	private _stop = not(call extremo_fnc_player_canAutorun);
 
	if _stop then {
		player playActionNow "Stop";
		player playAction "Stop";
		player setVariable ["extremo_var_player_autorunToggled",false,true];
		player setVariable ["Extremo_var_playerAutorunPreviousAction", "Stop"];
		removeMissionEventHandler ["EachFrame", Extremo_var_playerAutorunEVH];
		Extremo_var_playerAutorunEVH = nil;
	}else{
		private _gradient = player call Extremo_fnc_world_getTerrainGradient;
		
		//out of range
		if(_gradient < 0)exitWith{};

		//alter depending on how steep the angle is
		private _newAction = switch (true) do{ 
			case (_gradient < 18): {"FastF"};
			case (_gradient < 30): {"SlowF"};
			case (_gradient < 55): {"WalkF"};
			default {"Stop"};
		};
		private _previousAction = player getvariable ["Extremo_var_playerAutorunPreviousAction",""];

		if !(_newAction isEqualTo _previousAction) then {
			player playActionNow _newAction;
			player playAction _newAction;
			player setVariable ["Extremo_var_playerAutorunPreviousAction", _newAction];
		} else {
			player playAction _newAction;
			player playAction _newAction;
		};

		Extremo_var_playerAutorunNextUpdate = diag_tickTime + 1;
	};
};

//--- 
true