/*
	## EXTREMO
	## Nikko Renolds
*/

 
params [
	["_date",systemTimeUTC select [0,5],[[]]]
];

private _days = 0; 

for "_year" from 1970 to ((_date#0) - 1) do 
{
	_days = _days + round (linearConversion [0, 1, (dateToNumber [_year, 12, 31, 23, 59]), 0, 365, false]);
};

_days = _days + (linearConversion [0, 1, dateToNumber _date, 0, 365, false]);

private _day = round (_days % 7) min 6;
private _d = _date#2;
private _dd = ["Thursday","Friday","Saturday","Sunday","Monday","Tuesday","Wednesday"]#_day;
private _m = (_date#1)-1;
private _mm = ["January","February","March","April","May","June","July","August","September","October","November","December"]#_m;
private _yy = str(_date#0)select[2,2];
private _yyyy = _date#0;

private _format = format ["%1 %2 %3 %4",_dd,_d,_mm,_yyyy];

_format
