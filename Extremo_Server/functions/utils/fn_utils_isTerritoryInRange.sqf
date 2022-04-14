/*
	## EXTREMO Survival
	## Nikko Renolds
*/

params [
	["_position",[],[[]]],
	["_range",0,[0]]
];

private _flags = _position nearObjects ["Extremo_Construction_Flag_Static", _range];
private _inRange = not(_flags isEqualTo []);

//--- Return
_inRange
