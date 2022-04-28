/*
	## EXTREMO
	## Nikko Renolds
*/

params [
    ["_directPlayID",-100,[0]],		    // Number - is the unique DirectPlay ID. Quite useless as the number is too big for in-built string representation and gets rounded. It is also the same id used for user placed markers.
    ["_characterSteamID","",[""]],		// String - is getPlayerUID of the joining player. In Arma 3 it is also the same as Steam ID.
    ["_characterName","",[""]],		    // String - is profileName of the joining player.
    ["_characterDidJIP",false,[false]], // Boolean - is a flag that indicates whether or not the player joined after the mission has started (Joined In Progress). true when the player is JIP, otherwise false. (since Arma 3 v1.49)
    ["_characterOwnerID",-100,[0]],	    // Number - is owner id of the joining player. Can be used for kick or ban purposes or just for publicVariableClient. (since Arma 3 v1.49) 
    ["_directPlayIDStr","",[""]],		// String - same as _id but in string format, so could be exactly compared to user marker ids. (since Arma 3 v1.95) 
    ["_customArgs",[]] 		            // User-Defined - custom passed args (since Arma 3 v2.03) 
];

private _client = ((count _characterSteamID) isEqualTo 17 AND _characterOwnerID > 3);
private _server = ((_characterSteamID isEqualTo "__SERVER__" OR _characterOwnerID isEqualTo 2) AND not(_client));

switch (true) do 
{
    //--- Load Server
    case _server: 
    { 
        finishMissionInit;
        try (extremo_fnc_server_init) catch {_exception call Extremo_fnc_server_log};
    };
    
    //--- Load Client
    case _client:
    {
        private _BEGuid = ExtremoBeGuidHashmap getOrDefault [_characterSteamID,'BEGuid' callExtension ("get:"+_characterSteamID)]; 
        private _BEGuidNotCached = not(_characterSteamID in keys ExtremoBeGuidHashmap);
        private _BEGuidNotCalculated = _BEGuid isEqualTo "";

        if _BEGuidNotCalculated exitWith{[_characterOwnerID,"<extremo_fnc_event_player_connected> Error calculating players BEGuid"] call Extremo_fnc_system_kick};
        if _BEGuidNotCached then{ExtremoBeGuidHashmap set [_characterSteamID, _BEGuid]};
         
        //[0,"LOADING",_BEGuid] remoteExec ['Extremo_fnc_gui_splashScreen', _characterOwnerID]; 
        [_BEGuid] remoteExec ['extremo_fnc_client_init', _characterOwnerID];
    };
};
