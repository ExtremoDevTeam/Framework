/*
	## EXTREMO
	## Nikko Renolds

	("1.1.200-alpha.1+test" call extremo_fnc_system_versionInfo)params[
		["_versionFull",""],
		["_versionShort",""],
		["_verMajor",0],
		["_verMinor",0],
		["_verPatch","0"],
		["_preReleaseFull",""], 
		["_preReleaseShort",""],
		["_preReleaseBuild",0],
		["_meta",""]
	];
 
*/
private _defaultFormat = "0.0.0-error.0+bad input";
private _systemVersion = missionNamespace getVariable ["Extremo_var_system_versionInfo",_defaultFormat];

params [
	["_version",_systemVersion,["",{}]]
];

//--- Input was compiled
if(typeName _version isEqualTo "CODE")then{
	private _temp = call _version;
	_version = if(typeName _temp isEqualTo "STRING")then{_temp}else{_defaultFormat};
};

private _verArray = toArray _version;
private _verError = (false in ([[43,1],[45,1],[46,3]] apply {_x params ["_char","_count"];({_x isEqualTo _char} count _verArray) isEqualTo _count}));
private _verReturn = ["v0.0.0","v0.0",0,0,"0","","",0,""];

if _verError exitWith { _verReturn };

//--- Meta
(_version splitString "+") params [
	["_versionRelease","0.0.0",[""]],
	["_meta",""]
];

//--- Release
(_versionRelease splitString "-") params [
	["_versionString","0.0.0",[""]],
	["_releaseString","error.0+bad input"]
];

//--- Build
(_releaseString splitString ".") params [
	["_verRelease","error",[""]],
	["_verReleaseBuild","0"]
];

//--- Version
(_versionString splitString ".") params [
	["_verMajor","0",[""]],
	["_verMinor","0"],
	["_verPatch","0"]
];

//--- Update return array
{_verReturn set [_forEachIndex,_x]}forEach [
	format["v%1",_version],					//--- Full
	format["v%1.%2",_verMajor,_verMinor],	//--- Short
	parseNumber _verMajor,					//--- Major
	parseNumber _verMinor,					//--- Minor
	_verPatch,								//--- Patch
	_releaseString,							//--- Pre-Release Full
	_verRelease,							//--- Pre-Release Short
	parseNumber _verReleaseBuild,			//--- Pre-Release Build
	_meta									//--- Meta
];

//--- Return
_verReturn