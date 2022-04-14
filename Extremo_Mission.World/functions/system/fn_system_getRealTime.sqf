
/*
	## EXTREMO
	## Nikko Renolds
*/

params [
	["_seconds",false]
];

(((systemTime select [3,[2,3] select _seconds]) apply {if(_x < 10)then {"0" + str _x}else{str _x}}) joinString ":")