/*
	## EXTREMO
	## Nikko Renolds
*/

if(count _this == 4)then{
	params [
		["_layer","",["",0]],
		["_text","",[""]],
		["_type","",[""]],
		["_speed",0,[0]]
	];
	
	_layer cutText [_text,_type,_speed];
}else{
	if(count _this == 2)then{
		params [
			["_layer","",["",0]],
			["_speed",0,[0]]
		];

		_layer cutFadeOut _speed; 
	};
};
