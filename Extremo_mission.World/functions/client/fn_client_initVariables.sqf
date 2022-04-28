/*
	## EXTREMO
	## Nikko Renolds
*/

extremo_var_dik_eventhandlers = [];						//--- Conatins array of added eventhandlers [['onKeyDown'123],[onKeyUp'345]]
extremo_var_dik_blockESC = false;				    	//--- DIK bock for `RscDisplayMission`
Extremo_var_event_mapEH = -1;							//--- ID of registered map event handler
Extremo_var_event_handleChatMessageEH = -1;				//--- ID of registered handlechat message event handler
Extremo_var_event_preloadFinishedEH = -1;				//--- ID of registered map event handler
extremo_var_gui_inputBusy = false;				    	//--- Cancel block for `input ui's` (don't use in other scripts)
extremo_var_gui_inputESCLock = false;					//--- DIK block for `input ui's` (don't use in other scripts)
extremo_var_gui_inputString = "";						//--- Text holder for `input ui's` (don't use in other scripts)
extremo_var_gui_inputStringAnim = "";					//--- See above ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
extremo_var_gui_inputLockCode = "";						//--- Contains last correctly entered password from `extremo_var_gui_inputString`
extremo_var_gui_inputLockCodeCorrect = false;			//--- Simlar to above but `true` if last password was correct
extremo_var_gui_playerSpawned = compile str(false);		//--- Has player spawned, `{true}` once confirm spawn (reset's on death in `fn_player_login.sqf`)	
extremo_var_gui_playerSpawnThread = scriptNull;			//--- Contians Thread to keep player protected during spawns
Extremo_var_medical_healthState = 0;					//--- Current health state of player [0 = 'normal', 1 = 'bleeding', 2 = 'executed', 3 = 'suicide'] (reset's on death in `fn_player_login.sqf`)
Extremo_var_medical_executer = objNull;					//--- Contians object of the killer when the player is killed (reset's on death in `fn_player_login.sqf`)
extremo_var_player_beguid = compile str('');  			//--- Conatins players battleEye Guid

true