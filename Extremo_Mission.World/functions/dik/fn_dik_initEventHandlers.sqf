params [
	["_display",displayNull,[displayNull]],
	["_events",[],[[]]],
	["_blockOnly",false]
];

private _cfgKeyHandler = missionConfigFile >> "CfgKeyHandler";

if (isNil "extremo_var_dik_eventhandlers") then {extremo_var_dik_eventhandlers = []};
if (isNull _display) exitWith { false };
if (!isClass(_cfgKeyHandler >> "Extremo")) exitWith {
	diag_log "CfgKeyHandler >> Extremo is missing...";
	false
};

// Undefined event
if !(true in (_events apply {isClass(_cfgKeyHandler >> "Extremo" >> _x)})) exitWith { false };

{
	_x params [ 
		["_event","",[""]]
	];

	private _keyHandlerFunctions = getArray(_cfgKeyHandler >> "Extremo" >> _event >> "functions") apply {
		disableSerialization;
		_x params [
			["_function","",[""]],
			["_functionData",["",0,0,0],[[]]],
			["_type","call",[""]]
		];
		_functionData params [
			["_dik","",[""]],
			["_shift",0,[0]],
			["_ctrl",0,[0]],
			["_alt",0,[0]]
		];
		[
			_function,
			[
				switch (toUpper _dik) do {
					case "DIK_ESCAPE": {0x01};
					case "DIK_1": {0x02};
					case "DIK_2": {0x03};
					case "DIK_3": {0x04};
					case "DIK_4": {0x05};
					case "DIK_5": {0x06};
					case "DIK_6": {0x07};
					case "DIK_7": {0x08};
					case "DIK_8": {0x09};
					case "DIK_9": {0x0A};
					case "DIK_0": {0x0B};
					case "DIK_MINUS": {0x0C};
					case "DIK_EQUALS": {0x0D};
					case "DIK_BACK": {0x0E};
					case "DIK_BACKSPACE": {0x0E};
					case "DIK_TAB": {0x0F};
					case "DIK_Q": {0x10};
					case "DIK_W": {0x11};
					case "DIK_E": {0x12};
					case "DIK_R": {0x13};
					case "DIK_T": {0x14};
					case "DIK_Y": {0x15};
					case "DIK_U": {0x16};
					case "DIK_I": {0x17};
					case "DIK_O": {0x18};
					case "DIK_P": {0x19};
					case "DIK_LBRACKET": {0x1A};
					case "DIK_RBRACKET": {0x1B};
					case "DIK_RETURN": {0x1C};
					case "DIK_LCONTROL": {0x1D};
					case "DIK_A": {0x1E};
					case "DIK_S": {0x1F};
					case "DIK_D": {0x20};
					case "DIK_F": {0x21};
					case "DIK_G": {0x22};
					case "DIK_H": {0x23};
					case "DIK_J": {0x24};
					case "DIK_K": {0x25};
					case "DIK_L": {0x26};
					case "DIK_SEMICOLON": {0x27};
					case "DIK_APOSTROPHE": {0x28};
					case "DIK_GRAVE": {0x29};
					case "DIK_LSHIFT": {0x2A};
					case "DIK_BACKSLASH": {0x2B};
					case "DIK_Z": {0x2C};
					case "DIK_X": {0x2D};
					case "DIK_C": {0x2E};
					case "DIK_V": {0x2F};
					case "DIK_B": {0x30};
					case "DIK_N": {0x31};
					case "DIK_M": {0x32};
					case "DIK_COMMA": {0x33};
					case "DIK_PERIOD": {0x34};
					case "DIK_SLASH": {0x35};
					case "DIK_RSHIFT": {0x36};
					case "DIK_MULTIPLY": {0x37};
					case "DIK_NUMPADSTAR": {0x37};
					case "DIK_LMENU": {0x38};
					case "DIK_LALT": {0x38};
					case "DIK_SPACE": {0x39};
					case "DIK_CAPITAL": {0x3A};
					case "DIK_CAPSLOCK": {0x3A};
					case "DIK_F1": {0x3B};
					case "DIK_F2": {0x3C};
					case "DIK_F3": {0x3D};
					case "DIK_F4": {0x3E};
					case "DIK_F5": {0x3F};
					case "DIK_F6": {0x40};
					case "DIK_F7": {0x41};
					case "DIK_F8": {0x42};
					case "DIK_F9": {0x43};
					case "DIK_F10": {0x44}; 
					case "DIK_NUMLOCK": {0x45};
					case "DIK_SCROLL": {0x46};
					case "DIK_NUMPAD7": {0x47};
					case "DIK_NUMPAD8": {0x48};
					case "DIK_NUMPAD9": {0x49};
					case "DIK_SUBTRACT": {0x4A};
					case "DIK_NUMPADMINUS": {0x4A};
					case "DIK_NUMPAD4": {0x4B};
					case "DIK_NUMPAD5": {0x4C};
					case "DIK_NUMPAD6": {0x4D};
					case "DIK_ADD": {0x4E};
					case "DIK_NUMPADPLUS": {0x4E};
					case "DIK_NUMPAD1": {0x4F};
					case "DIK_NUMPAD2": {0x50};
					case "DIK_NUMPAD3": {0x51};
					case "DIK_NUMPAD0": {0x52};
					case "DIK_DECIMAL": {0x53};
					case "DIK_NUMPADPERIOD": {0x53};
					case "DIK_OEM_102": {0x56};
					case "DIK_F11": {0x57};
					case "DIK_F12": {0x58};
					case "DIK_F13": {0x64};
					case "DIK_F14": {0x65};
					case "DIK_F15": {0x66};
					case "DIK_KANA": {0x70};
					case "DIK_ABNT_C1": {0x73};
					case "DIK_CONVERT": {0x79};
					case "DIK_NOCONVERT": {0x7B};
					case "DIK_YEN": {0x7D};
					case "DIK_ABNT_C2": {0x7E};
					case "DIK_NUMPADEQUALS": {0x8D};
					case "DIK_PREVTRACK": {0x90};
					case "DIK_CIRCUMFLEX": {0x90};
					case "DIK_AT": {0x91};
					case "DIK_COLON": {0x92};
					case "DIK_UNDERLINE": {0x93};
					case "DIK_KANJI": {0x94};
					case "DIK_STOP": {0x95};
					case "DIK_AX": {0x96};
					case "DIK_UNLABELED": {0x97};
					case "DIK_NEXTTRACK": {0x99};
					case "DIK_NUMPADENTER": {0x9C};
					case "DIK_RCONTROL": {0x9D};
					case "DIK_MUTE": {0xA0};
					case "DIK_CALCULATOR": {0xA1};
					case "DIK_PLAYPAUSE": {0xA2};
					case "DIK_MEDIASTOP": {0xA4};
					case "DIK_VOLUMEDOWN": {0xAE};
					case "DIK_VOLUMEUP": {0xB0};
					case "DIK_WEBHOME": {0xB2};
					case "DIK_NUMPADCOMMA": {0xB3};
					case "DIK_DIVIDE": {0xB5};
					case "DIK_NUMPADSLASH": {0xB5};
					case "DIK_SYSRQ": {0xB7};
					case "DIK_RMENU": {0xB8};
					case "DIK_RALT": {0xB8};
					case "DIK_PAUSE": {0xC5};
					case "DIK_HOME": {0xC7};
					case "DIK_UP": {0xC8};
					case "DIK_UPARROW": {0xC8};
					case "DIK_PRIOR": {0xC9};
					case "DIK_PGUP": {0xC9};
					case "DIK_LEFT": {0xCB};
					case "DIK_LEFTARROW": {0xCB};
					case "DIK_RIGHT": {0xCD};
					case "DIK_RIGHTARROW": {0xCD};
					case "DIK_END": {0xCF};
					case "DIK_DOWN": {0xD0};
					case "DIK_DOWNARROW": {0xD0};
					case "DIK_NEXT": {0xD1};
					case "DIK_PGDN": {0xD1};
					case "DIK_INSERT": {0xD2};
					case "DIK_DELETE": {0xD3};
					case "DIK_LWIN": {0xDB};
					case "DIK_RWIN": {0xDC};
					case "DIK_APPS": {0xDD};
					case "DIK_POWER": {0xDE};
					case "DIK_SLEEP": {0xDF};
					case "DIK_WAKE": {0xE3};
					case "DIK_WEBSEARCH": {0xE5};
					case "DIK_WEBFAVORITES": {0xE6};
					case "DIK_WEBREFRESH": {0xE7};
					case "DIK_WEBSTOP": {0xE8};
					case "DIK_WEBFORWARD": {0xE9};
					case "DIK_WEBBACK": {0xEA};
					case "DIK_MYCOMPUTER": {0xEB};
					case "DIK_MAIL": {0xEC};
					case "DIK_MEDIASELECT": {0xED};
					default {nil};
				},
				_shift isEqualTo 1,
				_ctrl isEqualTo 1,
				_alt isEqualTo 1
			],
			toUpper _type
		]
	};

	if(count _keyHandlerFunctions > 0)then
	{
		private _keyEVH = _display displayAddEventHandler [_event," 
			if(((_x#1) isEqualTo 0x01) AND extremo_var_dik_blockESC)exitWith{true};
			if("+str _blockOnly+")exitWith{false};
			
			private _functionIndex = "+str _keyHandlerFunctions+" findIf {_x#1 isEqualTo (_this select [1, 4])};
 
			if(_functionIndex isNotEqualTo -1) exitWith { 
				private _function = "+str _keyHandlerFunctions+"#_functionIndex;
				private _code = missionNamespace getVariable [_function#0,{}]; 
				private _handled = switch (_function#2) do {
					case 'CALL': {[] call _code};
					case 'SPAWN': {[] spawn _code;true};
					default {false};
				};
				if(isNil '_handled' OR {typeName _handled isNotEqualTo 'BOOL'})then{
					_handled = false;
				};
				_handled
			};

			false
		"];
		
		if(_keyEVH isNotEqualTo -1)then{
			extremo_var_dik_eventhandlers pushBackUnique [_event,_keyEVH];
		};
	};
}forEach _events;

true