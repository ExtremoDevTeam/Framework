/*
	## EXTREMO
	## Nikko Renolds
*/

disableSerialization;

params [
	["_trader",objNull,[objNull]]
];

private _displayClass = "RscExtremo_VehicleTraderScreen";
private _display = uiNameSpace getVariable [_displayClass,displayNull];
if(isNull _display)then{
	_display = createDialog [_displayClass,true];
};

private _controls = [ 
	["controlsBackground","DialogTitle"],
	["controlsBackground","DialogBackground"],
	["controlsBackground","CancelBackground"],
	["controls","CategoryDropDown"],
	["controls","VehiclesListBox"],
	["controls","ButtonPurchase"],
	["controls","PinText"],
	["controls","PinBox"],
	["controls","CancelButton"],
	["controls","Stat01Background"],
	["controls","Stat01Progress"],
	["controls","Stat01Label"],
	["controls","Stat01Value"],
	["controls","Stat02Background"],
	["controls","Stat02Progress"],
	["controls","Stat02Label"],
	["controls","Stat02Value"],
	["controls","Stat03Background"],
	["controls","Stat03Progress"],
	["controls","Stat03Label"],
	["controls","Stat03Value"],
	["controls","Stat04Background"],
	["controls","Stat04Progress"],
	["controls","Stat04Label"],
	["controls","Stat04Value"]
];

(
	_controls apply {_display displayCtrl getNumber(configFile >> _displayClass >> _x#0 >> _x#1 >> "idc")}
) params [
	["_controlDialogTitle",controlNull,[controlNull]],
	["_controlDialogBackground",controlNull,[controlNull]],
	["_controlCancelBackground",controlNull,[controlNull]],
	["_controlCategoryDropDown",controlNull,[controlNull]],
	["_controlVehiclesListBox",controlNull,[controlNull]],
	["_controlButtonPurchase",controlNull,[controlNull]],
	["_controlPinText",controlNull,[controlNull]],
	["_controlPinBox",controlNull,[controlNull]],
	["_controlCancelButton",controlNull,[controlNull]],
	["_controlStat01Background",controlNull,[controlNull]],
	["_controlStat01Progress",controlNull,[controlNull]],
	["_controlStat01Label",controlNull,[controlNull]],
	["_controlStat01Value",controlNull,[controlNull]],
	["_controlStat02Background",controlNull,[controlNull]],
	["_controlStat02Progress",controlNull,[controlNull]],
	["_controlStat02Label",controlNull,[controlNull]],
	["_controlStat02Value",controlNull,[controlNull]],
	["_controlStat03Background",controlNull,[controlNull]],
	["_controlStat03Progress",controlNull,[controlNull]],
	["_controlStat03Label",controlNull,[controlNull]],
	["_controlStat03Value",controlNull,[controlNull]],
	["_controlStat04Background",controlNull,[controlNull]],
	["_controlStat04Progress",controlNull,[controlNull]],
	["_controlStat04Label",controlNull,[controlNull]],
	["_controlStat04Value",controlNull,[controlNull]]
];

private _traderType = typeOf _trader;
private _traderCategories = getArray(configFile >> "CfgTraders" >> _traderType >> "categories");
if(count _traderCategories isEqualTo 0)exitWith{systemChat 'Trader not setup'};

private _allCategoryIndex = _controlCategoryDropDown lbAdd "ALL";
_controlCategoryDropDown lbSetData [_categoryIndex, "ALL"];

_controlButtonPurchase ctrlEnable false;

{  
	private _categoryConfig = configFile >> "CfgTraderCategories" >> _x; 
	private _categoryIndex = _controlCategoryDropDown lbAdd getText(_categoryConfig >> "name");

	_controlCategoryDropDown lbSetData [_categoryIndex, _x];
	_controlCategoryDropDown lbSetPicture [_categoryIndex, getText(_categoryConfig >> "icon")];
}forEach _traderCategories;

_controlCategoryDropDown lbSetCurSel _allCategoryIndex;