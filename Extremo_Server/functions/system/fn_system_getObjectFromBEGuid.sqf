/*
	## EXTREMO
	## Nikko Renolds
*/

params [
	["_BEGuid","",[""]]
];

private _object = objnull;

{
	private _TempSteamID = getPlayerUID _x;
	private _TempBEGuid = ExtremoBeGuidHashmap getOrDefault [_TempSteamID,'BEGuid' callExtension ("get:"+_TempSteamID),true];
	if(_TempBEGuid isEqualTo _BEGuid)exitWith{
		_object = _x;
	};
}forEach allPlayers;

_object