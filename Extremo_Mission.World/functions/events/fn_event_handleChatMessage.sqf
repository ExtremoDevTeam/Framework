/*
	## EXTREMO
	## Nikko Renolds

	https://community.bistudio.com/wiki/Arma_3:_Mission_Event_Handlers#HandleChatMessage
	https://community.bistudio.com/wiki/Category:Command_Group:_Radio_and_Chat
	https://community.bistudio.com/wiki/Channel_IDs
*/

params [
	["_channel",-99],
	["_owner",-99],
	["_from",""],
	["_text",""],
	["_person",objNull],
	["_name",""],
	["_strID",""],
	["_forcedDisplay",false],
	["_isPlayerMessage",false], 
	["_sentenceType",-99], 
	["_chatMessageType",-99]
];

//hint str (_this joinString "\n"); 

//--- Handle player sent messeages
if(!isNull _person AND isPlayer _person)then
{ 
	private _senderName = "";
	private _senderS64 = getPlayerUID _person;

	if(_person isEqualTo player)then{
		//_name = "%SteamName% - %SteamIDShort%";
		//_name = "%SteamName%  (%SteamID%)"; 
		private _a = ({ _x isEqualTo 37 } count toArray(profileName));
		private _isCustomCallback = _a > 0 AND _a MOD 2 isEqualTo 0;
		if !_isCustomCallback then {
			_senderName = "%SteamName%";
		};
	}else{
		/*
			private _personSteam64ID = getPlayerUID _person;
			private _personSteamName = missionNamespace getVariable [format["extremo_var_player_%1_steamName",_personSteam64ID],""];
			_name = (if(_personSteamName isNotEqualTo "")then{_personSteamName}else{""});
			if(_name isNotEqualTo "")then{
				_name = format["%1 - %2",_name, _personSteam64ID select [12,5]];
			};
		*/
		//_name = format ["Survivor (%1)",getPlayerUID _person];
		_senderName = "Survivor";
	};

	_name = format ["%1 (%2)",_senderName,_senderS64];
};

//--- Handle other sent messeages
switch _channel do 
{
	case -1://--- None (when a marker is created with createMarker and the channelID parameter was not defined. Markers in "none" channel are visible in all other channels as well)
	{ };
	case 0: //--- Global (all players)
	{ };
	case 1: //--- Side (only visible to the playerSide of the player)
	{ };
	case 2: //--- Command
	{ };
	case 3: //--- Group (only visible for the players in the group of the player who created it)
	{ };
	case 4: //--- Vehicle (only visible to the vehicle's crew)
	{ };
	case 5: //--- Direct (To players in close proximity)
	{};
	case 6;  
	case 7;  
	case 8;
	case 9;  
	case 10; 
	case 11; 
	case 12; 
	case 13; 
	case 14;
	case 15: //--- CustomChat (only be available for players which have been assigned to this channel)
	{ 
		if !(isNull _person)then
		{ 
			private _personSteam64ID = getPlayerUID _person;
			private _personSteamName = missionNamespace getVariable [format["extremo_var_player_%1_steamName",_personSteam64ID],""];
			_name = format ["%1 (%2)",_personSteamName,_personSteam64ID];
		};
	};
	case 16: //--- SystemChat
	{ 
		_name = "%FrameworkVersion%";
	};
};

//--- Failsafe
if (_name isEqualTo "" AND _from isNotEqualTo "") then {
	_name = _from;
};

//--- Handle callbacks
["_name"] call Extremo_fnc_system_replacmentCallback;
["_text"] call Extremo_fnc_system_replacmentCallback;

//--- Output
[_name, _text]