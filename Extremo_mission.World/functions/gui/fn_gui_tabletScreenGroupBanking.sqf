/*
	## EXTREMO
	## Nikko Renolds
*/

hint str _this; //debug

params [
	["_mode","",[""]],
	["_params",[],[[]]]
];

disableSerialization; 
if (_mode isEqualTo "") exitWith {
	["extremo_fnc_gui_tabletScreenGroupBanking: <MODE> was passed empty. Function Terminated!"] call BIS_fnc_error;
};

switch (_mode) do 
{
	case "onScreenShow" : 
	{
		_params params [
			["_screenBankingCtrl",controlNull,[controlNull]]
		];
	};
	case "onScreenHide" : 
	{
		_params params [
			["_screenBankingCtrl",controlNull,[controlNull]]
		];
	};
	case "onAccountChanged":
	{
		_params params [
			["_control", controlNull,[controlNull]],
			["_index",0,[0]]
		];
	};
	case "onTargetChanged":
	{
		_params params [
			["_control", controlNull,[controlNull]],
			["_index",0,[0]]
		];
	};
	case "onAmountChar":
	{
		_params params [
			["_editCtrl", controlNull,[controlNull]],
			["_keyCode",0,[0]]
		];
	};
	case "onSliderAmount":
	{
		_params params [
			["_sliderAmountCtrl",controlNull,[controlNull]],
			["_position",0,[0]]
		];
	};
	case "onConfirm":
	{
		_params params [
			["_control",controlNull,[controlNull]]
		];
	};
};