/*
	## EXTREMO
	## Nikko Renolds
*/
private _string = "";

while {_this >= 10} do 
{
	_this = _this / 10;
	_string = format ["%1%2", round ((_this % floor _this) * 10), _string];
	_this = floor _this;
};

format ["%1%2", _this, _string];