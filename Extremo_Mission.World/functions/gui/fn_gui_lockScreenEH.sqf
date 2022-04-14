#include "..\script_defines.hpp"

/*
	## EXTREMO
	## Nikko Renolds
*/

disableSerialization;

params [
	["_data",[],[[]]], 
	["_event","",[""]], 
	["_keypadInput",-1,[0,false,""]]
];

//--- Display
private _displayClass = "RscExtremo_LockScreen";
private _object = _data param [0,displayNull,[displayNull,controlNull]];
private _display = (if(typeName _object isEqualTo "CONTROL")then{ctrlParent _object}else{_object});
private _lockCode = "";

//--- Fail-safe
if(isNull _display)then{
	_display = uiNameSpace getVariable [_displayClass,_display];
};

//--- 
private _controls = [
	["controlsBackground","Background"],		//-- _controlBackground
	["controls","NumFake"],						//-- _controlNumFake
	["controls","Num0"],						//-- _controlNum0
	["controls","Num1"],						//-- _controlNum1
	["controls","Num2"],						//-- _controlNum2
	["controls","Num3"],						//-- _controlNum3
	["controls","Num4"],						//-- _controlNum4
	["controls","Num5"],						//-- _controlNum5
	["controls","Num6"],						//-- _controlNum6
	["controls","Num7"],						//-- _controlNum7
	["controls","Num8"],						//-- _controlNum8
	["controls","Num9"],						//-- _controlNum9
	["controls","Confirm"],						//-- _controlConfirm
	["controls","Cancel"],						//-- _controlCancel
	["controls","Screen"]						//-- _controlScreen
];

private _controlsParams = _controls apply {[format["_control%1",_x#1],controlNull,[controlNull]]};

//--
private _fnc_updateLockCode = {
	params [["_number",-1,[0]]];
	if(_number < 0 OR _number > 9)exitWith{ false }; 
	if(extremo_var_gui_inputBusy)exitWith{ false };
	extremo_var_gui_inputString = format["%1%2",extremo_var_gui_inputString,_number];
	true
}; 

//--- Buttons are used with mouse and keyboard
private _fnc_updateScreen = {
	params [
		["_number",-1,[0]]
	];
	
	private _updated = [_number] call _fnc_updateLockCode;
	private _streamFriendly = profileNameSpace getVariable ["ExtremoStreamFriendlyUI", false];
	 
	if !_updated exitWith { false }; 
	ctrlSetFocus _controlNumFake;
	_controlScreen ctrlSetText (if _streamFriendly then {toString (toArray extremo_var_gui_inputString apply {42})}else{extremo_var_gui_inputString});
	_controlConfirm ctrlEnable (count extremo_var_gui_inputString >= 4);
	_controlCancel ctrlEnable not(extremo_var_gui_inputESCLock);

	true
};

private _fnc_deleteButton = {
	params [	
		["_singleNum",true],
		["_override",false]
	];

	if(isNull _display OR (extremo_var_gui_inputBusy AND !_override))exitWith{false};

	if _override then {
		extremo_var_gui_inputStringAnim = if(_singleNum AND count extremo_var_gui_inputStringAnim >= 1)then{extremo_var_gui_inputStringAnim select [0,(count extremo_var_gui_inputStringAnim) -1]}else{""};
	}else{
		extremo_var_gui_inputString = if(_singleNum AND count extremo_var_gui_inputString >= 1)then{extremo_var_gui_inputString select [0,(count extremo_var_gui_inputString) -1]}else{""};
	};
	
	ctrlSetFocus _controlNumFake;
	_controlScreen ctrlSetText ([extremo_var_gui_inputString,extremo_var_gui_inputStringAnim] select _override);
	_controlConfirm ctrlEnable (count extremo_var_gui_inputString >= 4);

	true
};

private _fnc_confirmAnim = compile (
	"
		private _display = uiNameSpace getVariable ['"+_displayClass+"',displayNull];
		("+str _controls+" apply {_display displayCtrl getNumber(missionConfigFile >> '"+_displayClass+"' >> _x#0 >> _x#1 >> 'idc')}) params [
			['_controlBackground',controlNull,[controlNull]],
			['_controlNumFake',controlNull,[controlNull]],
			['_controlNum0',controlNull,[controlNull]],
			['_controlNum1',controlNull,[controlNull]],
			['_controlNum2',controlNull,[controlNull]],
			['_controlNum3',controlNull,[controlNull]],
			['_controlNum4',controlNull,[controlNull]],
			['_controlNum5',controlNull,[controlNull]],
			['_controlNum6',controlNull,[controlNull]],
			['_controlNum7',controlNull,[controlNull]],
			['_controlNum8',controlNull,[controlNull]],
			['_controlNum9',controlNull,[controlNull]],
			['_controlConfirm',controlNull,[controlNull]],
			['_controlCancel',controlNull,[controlNull]],
			['_controlScreen',controlNull,[controlNull]]
		];
				
		extremo_var_gui_inputBusy = true;
		extremo_var_gui_inputStringAnim = ctrlText _controlScreen;
		ctrlSetFocus _controlNumFake;

		for '_i' from 0 to 3 do { 
			uiSleep 0.70;
			_controlScreen ctrlSetText '';
			uiSleep 0.70;
			_controlScreen ctrlSetText extremo_var_gui_inputStringAnim;
		};

		waitUntil {
			uiSleep 0.30;
			if(not([true,true] call "+str _fnc_deleteButton+"))exitWith{true};
			if(count extremo_var_gui_inputStringAnim isEqualTo 0)exitWith{true};
			false
		};

		uiSleep 0.20;	
		extremo_var_gui_inputBusy = false;
		_display closeDisplay 1;
	"
);

private _fnc_confirmButton = { 
	if(extremo_var_gui_inputBusy)exitWith{false};
	private _validCode = count extremo_var_gui_inputString >= 4;
	extremo_var_gui_inputLockCodeCorrect = (_validCode AND extremo_var_gui_inputString isEqualTo extremo_var_gui_inputLockCode);
	extremo_var_gui_inputString = ["",extremo_var_gui_inputString] select extremo_var_gui_inputLockCodeCorrect;
	_controlScreen ctrlSetText toUpper([["Invalid","Denied"] select _validCode,"Authorised"] select extremo_var_gui_inputLockCodeCorrect);
	[] spawn _fnc_confirmAnim;
};

private _fnc_cancelButton = { 
	if(extremo_var_gui_inputBusy || extremo_var_gui_inputESCLock)exitWith{false};
	extremo_var_gui_inputString = "";
	_display closeDisplay 2;
	true
};

//--- Handle  input
switch (typeName _keypadInput) do {
	case "BOOL": 
	{
		_keypadInput = (if(_event isEqualTo "onMouseButtonClick")then{
			[
				-999,//cancel
				999  //confirm
			] select _keypadInput;
		}else{
			-1//undefined
		});
	}; 
	case "STRING":
	{
		if(_event isEqualTo "onSetPin")then{ 
			_lockCode = _keypadInput;//switch vars
		};
		_keypadInput = -1;//undefined
	};
};
	
//--- Handle events
switch _event do {
	case "onLoad":
	{ 
		//register display into uiNamespace
		uiNameSpace setVariable [_displayClass,_display];
		
		//update controls
		_controlScreen ctrlSetText "ENTER LOCKCODE";
		_controlConfirm ctrlEnable false; 
		_controlCancel ctrlEnable not(extremo_var_gui_inputESCLock);
		ctrlSetFocus _controlNumFake;
		setMousePosition [0.5,0.5];
		
		//clear capture var
		extremo_var_gui_inputString = "";
		extremo_var_gui_inputLockCodeCorrect = false;
	};
	case "onUnLoad":
	{  
		//un-register display from uiNamespace
		uiNameSpace setVariable [_displayClass,displayNull];
		[[_display],'onUnsetPin',""] call Extremo_fnc_gui_lockScreenEH;
		
		//reset input vars
		extremo_var_gui_inputESCLock = false;
		extremo_var_gui_inputBusy = false;
		extremo_var_gui_inputESCLock = false; 
	};
	case "onSetPin":
	{
		extremo_var_gui_inputLockCode = _lockCode;
	};
	case "onKeyUp":	
	{ 
		_data params [
			["_control",displayNull,[displayNull,controlNull]], 
			["_dik",0,[0]],
			["_shift",false,[false]],  
			["_ctrl",false,[false]], 
			["_alt",false,[false]]
		];

		private _stopPropagation = false;
		switch _dik do  
		{ 
			//Add (keyboard\numpad)
			case DIK_0; case DIK_NUMPAD0: { [0] call _fnc_updateScreen; _stopPropagation = true; };
			case DIK_1; case DIK_NUMPAD1: { [1] call _fnc_updateScreen; _stopPropagation = true; };
			case DIK_2; case DIK_NUMPAD2: { [2] call _fnc_updateScreen; _stopPropagation = true; };
			case DIK_3; case DIK_NUMPAD3: { [3] call _fnc_updateScreen; _stopPropagation = true; };
			case DIK_4; case DIK_NUMPAD4: { [4] call _fnc_updateScreen; _stopPropagation = true; };
			case DIK_5; case DIK_NUMPAD5: { [5] call _fnc_updateScreen; _stopPropagation = true; };
			case DIK_6; case DIK_NUMPAD6: { [6] call _fnc_updateScreen; _stopPropagation = true; };
			case DIK_7; case DIK_NUMPAD7: { [7] call _fnc_updateScreen; _stopPropagation = true; };
			case DIK_8; case DIK_NUMPAD8: { [8] call _fnc_updateScreen; _stopPropagation = true; };
			case DIK_9; case DIK_NUMPAD9: { [9] call _fnc_updateScreen; _stopPropagation = true; };
			//Delete
			case DIK_BACKSPACE:
			{
				[] call _fnc_deleteButton;
				_stopPropagation = true;	
			};
			//Confirm
			case DIK_RETURN; case DIK_NUMPADENTER:
			{
				[] call _fnc_confirmButton;
				_stopPropagation = true;
			};
			//Cancel
			case DIK_ESCAPE: 
			{  
				_stopPropagation = [] call _fnc_cancelButton;
			}; 
		};
		_stopPropagation 
	};
	case "onKeyDown":	
	{ 
		_data params [
			["_control",displayNull,[displayNull,controlNull]], 
			["_dik",0,[0]],
			["_shift",false,[false]],  
			["_ctrl",false,[false]], 
			["_alt",false,[false]]
		];

		extremo_var_gui_inputESCLock
	};
	case "onMouseButtonClick":
	{ 
		_data params [
			["_control",displayNull,[displayNull,controlNull]], 
			["_dib",0,[0]], 
			["_xPos",0,[0]], 
			["_yPos",0,[0]],  
			["_shift",false,[false]],  
			["_ctrl",false,[false]], 
			["_alt",false,[false]]
		];

		private _mouseClickLeft = (_dib isEqualTo 0);
		private _mouseClickRight = (_dib isEqualTo 1);

		if _mouseClickLeft then
		{
			switch _keypadInput do 
			{
				//Numpad
				case 0;
				case 1;
				case 2;
				case 3;
				case 4;
				case 5;
				case 6;
				case 7;
				case 8;
				case 9:{[_keypadInput] call _fnc_updateScreen};
				//Confirm
				case 999:{[] call _fnc_confirmButton};
				//Cancel
				case -999;
				default {[] call _fnc_cancelButton};
			};
		}else{
			switch _keypadInput do 
			{
				//Confirm
				case 999:   {[false] call _fnc_deleteButton};
				//Cancel
				case -999: 	{[true] call _fnc_deleteButton};
			};
		};
	};
};