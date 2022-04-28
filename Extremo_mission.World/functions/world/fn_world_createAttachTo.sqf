/*
	## EXTREMO
	## Nikko Renolds
*/

params [
	["_class","",[""]],
	["_position",[],[[]]],
	["_direction",0,[0]],
	["_objects",[]]
];

private _mainObject = _class createVehicleLocal [0,0,0];
_mainObject setDir _direction;    
_mainObject setPosATL _position;

if(count _objects > 0)then{
	{
		_x params [
			["_class","",[""]],
			["_position",[],[[]]]
		];
		private _anotherObject = _class createVehicleLocal [0,0,0];
		_mainObject disableCollisionWith _anotherObject;         
		_anotherObject disableCollisionWith _mainObject; 
		_anotherObject attachTo [_mainObject, _position];
	}forEach _objects;
};

_mainObject