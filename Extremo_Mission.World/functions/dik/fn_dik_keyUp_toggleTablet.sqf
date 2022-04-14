/*
	## EXTREMO
	## Nikko Renolds
*/

private _displayClass = "RscExtremo_Tablet";
private _display = uinamespace getvariable [_displayClass,displayNull];

if(isNull _display)then{
	_display = createDialog [_displayClass,true];
}else{
	_display closeDisplay 2;  
};

true