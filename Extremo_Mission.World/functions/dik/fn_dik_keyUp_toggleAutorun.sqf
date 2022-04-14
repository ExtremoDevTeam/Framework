/*
	## EXTREMO
	## Nikko Renolds
*/

if(player getVariable ["extremo_var_player_autorunToggled",false])then{
	player setVariable ["extremo_var_player_autorunToggled",false,true];
}else{
	player setVariable ["extremo_var_player_autorunToggled",true,true];
	if(call extremo_fnc_player_canAutorun)then{
		Extremo_var_playerAutorunNextUpdate = diag_tickTime + 1;
		Extremo_var_playerAutorunEVH = addMissionEventHandler ["EachFrame",{_thisArgs call extremo_fnc_player_autorunEH},[]];
	}else{
		player setVariable ["extremo_var_player_autorunToggled",false,true];
	};
};

true