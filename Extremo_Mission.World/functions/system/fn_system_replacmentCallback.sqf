/*
	## EXTREMO Survival
	## Nikko Renolds

	_text = "%ProfileName% your steamid is: %SteamID% and steam name is %<U>SteamName%. Visit %Website%"; 
	["_text"] call Extremo_fnc_system_replacmentCallback; 
	_text
*/

params[
	["_variable","",[""]]
];

(getText(missionConfigFile >> "CfgPatches" >> "Extremo_Mission" >> "frameworkVersion") call extremo_fnc_system_versionInfo)params[
	["_clientVersionFull",""],
	["_clientVersionShort",""],
	["_clientVerMajor",0],
	["_clientVerMinor",0],
	["_clientVerPatch","0"],
	["_clientPreReleaseFull",""], 
	["_clientPreReleaseShort",""],
	["_clientPreReleaseBuild",0],
	["_clientMeta",""]
];

private _frameworkName = "Extremo";

private _callbacks = [
	//--- System
	["%SplashTimer%", str(round((missionNamespace getVariable ["Extremo_var_splashTimer",diag_tickTime]) - diag_ticktime))],
	["%RespawnTimer%", str(round((missionNamespace getVariable ["Extremo_var_respawnTimer",diag_tickTime]) - diag_ticktime))],
	["%FrameworkName%", _frameworkName],
	["%FrameworkVersion%", format["%1 %2",_frameworkName,_clientVersionShort]],
	["%FrameworkGithub%", "github.com/Ni1kko/A3Extremo"],
	["%Website%", "www.extremo.co.uk"],
	["%Loading%", "please wait..."],

	//--- player
	["%SteamID%", getPlayerUID player],
	["%SteamIDShort%",(getPlayerUID player) select [12,5]],
	["%SteamName%", profileNameSteam],
	["%ProfileName%", profileName]
];

private _string = call compile _variable;

{
	_x params[
		["_pattern",""],
		["_replacement",""]
	];

	if(toLower ("%<U>" + (_pattern select [1])) in toLower _string)then{
		_string = _string regexReplace ["<U>",""];
		_replacement = toUpper _replacement; 
	};
	if(toLower ("%<L>" + (_pattern select [1])) in toLower _string)then{
		_string = _string regexReplace ["<L>",""];
		_replacement = toLower _replacement; 
	};
	if(toLower ("%<C>" + (_pattern select [1])) in toLower _string)then{
		_string = _string regexReplace ["<C>",""];
		_replacement = toUpper (_replacement select [0,1]) + toLower (_replacement select [1]); 
	};
	if(toLower _pattern in toLower _string)then{ 
		_string = _string regexReplace [_pattern,_replacement];
	};
}forEach _callbacks;

call compile (_variable + " = '" + _string + "';")