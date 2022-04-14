/*
	## EXTREMO
	## Nikko Renolds
*/
private _input = param [0,player,[[],objNull]];
private _dir = if(typeName _input isEqualTo "OBJECT")then{getDir _input}else{_input getDir [worldSize / 2,worldSize / 2, 0]};

[
	switch (_dir % 360 / 45)  do {
		case 1: {"NE"};
		case 2: {"E"};
		case 3: {"SE"};
		case 4: {"S"};
		case 5: {"SW"};
		case 6: {"W"};
		case 7: {"NW"};
		default {"N"};
	},
	_dir
]