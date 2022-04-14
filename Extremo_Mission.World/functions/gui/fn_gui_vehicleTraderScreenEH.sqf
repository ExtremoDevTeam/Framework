/*
	## EXTREMO
	## Nikko Renolds
*/

disableSerialization;

params [
	["_event","",[""]],
	["_data",[],[[]]]
];

//systemChat str _this;

private _displayClass = "RscExtremo_VehicleTraderScreen";
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

private _controlsParams = _controls apply {[format["_control%1",_x#1],controlNull,[controlNull]]};

switch _event do {
	case "onLoad": 
	{ 
		_data params [
			["_display",displayNull,[displayNull]] 
		];
		uiNamespace setVariable [_displayClass,_display];
		[] call Extremo_fnc_gui_modelBox_create;
	};
	case "onUnload": 
	{ 
		_data params [
			["_display",displayNull,[displayNull]] 
		];
		uiNamespace setVariable [_displayClass,displayNull];
		[] call Extremo_fnc_gui_modelBox_destroy;
	};
	case "onCategoryDropDownSelectionChanged": 
	{ 
		_data params [
			["_control",controlNull,[controlNull]],
			["_selectedIndex",-1,[0]] 
		];

		//Get display
		private _display = ctrlParent _control;

		//Get all controls
		(_controls apply {_display displayCtrl getNumber(configFile >> _displayClass >> _x#0 >> _x#1 >> "idc")}) params _controlsParams;

		//Get current category
		private _categoryClass = _controlCategoryDropDown lbData _selectedIndex;
		private _categoryClasses = [_categoryClass];

		//Get all added categorys
		if(_categoryClass isEqualTo "ALL")then{
			_categoryClasses = [];
			private _totalCategorys = (lbSize _controlCategoryDropDown)-1;
			for "_index" from 1 to _totalCategorys do {
				_categoryClasses pushBack (_controlCategoryDropDown lbData _index)
			};
		};

		//Populate listbox
		lbClear _controlVehiclesListBox;
		{
			private _items = getArray(configFile >> "CfgTraderCategories" >> _x >> "items");
			{
				private _className = _x;
				private _salesPrice = getNumber(configFile >> "CfgExtremoArsenal" >> _className >> "price");
				private _indexEntryIndex = _controlVehiclesListBox lbAdd getText(configFile >> "CfgVehicles" >> _className >> "displayName");
				private _playerMoney = (player getVariable ["ExtremoWallet", 0]);
				private _playerRespect = (player getVariable ["ExtremoScore", 0]);
				private _quality = getNumber(configFile >> "CfgExtremoArsenal" >> _className >> "quality");
				private _requiredRespect = getNumber(configFile >> "CfgTrading" >> "requiredRespect" >> format["Level%1",_quality]);
				private _qualityColor = [1, 1, 1, 1];
				private _popTabColor = [1, 1, 1, 1];
				
				switch (_quality) do {
					case 2: 	 { _qualityColor = [0.62, 0.87 ,0.23, 1]; };
					case 3:		 { _qualityColor = [0, 0.78, 0.92, 1]; };
					case 4:		 { _qualityColor = [0.62, 0.27, 0.58, 1]; };
					case 5:		 { _qualityColor = [1, 0.7, 0.09, 1]; };
					case 6:		 { _qualityColor = [0.93, 0, 0.48, 1]; };
				};

				if (_salesPrice > _playerMoney) then{
					_popTabColor = [0.91, 0, 0, 0.6];
					_missingPopTabs = _salesPrice - _playerMoney;
					_controlVehiclesListBox lbSetTooltip [_indexEntryIndex, format["Missing %1 Pop Tabs", _missingPopTabs call Extremo_fnc_system_exponentToString]];
				};

				if (_requiredRespect > _playerRespect) then{
					_qualityColor set [3, 0.3];
					_popTabColor set [3, 0.3];
					_missingRespect = _requiredRespect - _playerRespect;
					_controlVehiclesListBox lbSetTooltip [_indexEntryIndex, format["Missing %1 Respect", _missingRespect]];
				};

				if ((_salesPrice > _playerMoney) && (_requiredRespect > _playerRespect)) then {
					_controlVehiclesListBox lbSetTooltip [_indexEntryIndex, format["Missing %1 Pop Tabs & %2 Respect", _missingPopTabs call Extremo_fnc_system_exponentToString, _missingRespect]];
				};
				_controlVehiclesListBox lbSetData [_indexEntryIndex, _className];
				_controlVehiclesListBox lbSetTextRight [_indexEntryIndex, _salesPrice call Extremo_fnc_system_exponentToString];
				_controlVehiclesListBox lbSetPictureRight [_indexEntryIndex, "Extremo_assets\texture\ui\poptab_trader_ca.paa"];
				_controlVehiclesListBox lbSetColor [_indexEntryIndex, _qualityColor];
				_controlVehiclesListBox lbSetColorRight [_indexEntryIndex, _popTabColor];
				_controlVehiclesListBox lbSetPictureRightColor [_indexEntryIndex, _popTabColor];
				_controlVehiclesListBox lbSetValue [_indexEntryIndex, _quality * 100000 + _salesPrice];
			}forEach _items;
		}forEach _categoryClasses;
		lbSortByValue _controlVehiclesListBox;
	};
	case "onVehicleListBoxSelectionChanged": 
	{ 
		_data params [
			["_control",controlNull,[controlNull]],
			["_selectedIndex",-1,[0]] 
		];

		//Get display
		private _display = ctrlParent _control;

		//Get all controls
		(_controls apply {_display displayCtrl getNumber(configFile >> _displayClass >> _x#0 >> _x#1 >> "idc")}) params _controlsParams;

		//Get current category
		private _currentItem = _controlVehiclesListBox lbData _selectedIndex;
		private _salesPrice = getNumber(configFile >> "CfgExtremoArsenal" >> _currentItem >> "price");
		
		private _pin = ctrlText _controlPinBox;
		private _playerMoney = (player getVariable ["ExtremoWallet", 0]);
		private _playerRespect = (player getVariable ["ExtremoScore", 0]);

		//Can Purchase
		if(count _pin >= 4)then
		{
			private _quality = getNumber(configFile >> "CfgExtremoArsenal" >> _currentItem >> "quality");
			private _requiredRespect = getNumber(configFile >> "CfgTrading" >> "requiredRespect" >> format["Level%1",_quality]);
	
			if(_requiredRespect <= _playerRespect)then {
				_controlButtonPurchase ctrlEnable (_salesPrice <= _playerMoney);
			} else {
				_controlButtonPurchase ctrlEnable false;
			};
		};

		// Vehicle stats
		private _vehicleConfig = configFile >> "CfgVehicles" >> _currentItem;
		private _armor = getNumber(_vehicleConfig >> "armor");
		private _fuelCapacity = getNumber(_vehicleConfig >> "fuelCapacity"); 
		private _maximumLoad = getNumber(_vehicleConfig >> "maximumLoad");
		private _maximumSpeed = getNumber(_vehicleConfig >> "maxSpeed"); 
			
		{
			private _ctrlBackground = call compile format ["_controlStat0%1Background",_forEachIndex+1];
			_ctrlBackground ctrlShow true;

			private _ctrlLabel = call compile format ["_controlStat0%1Label",_forEachIndex+1];
			_ctrlLabel ctrlSetText (_x select 0);
			_ctrlLabel ctrlShow true;

			private _ctrlValue = call compile format ["_controlStat0%1Value",_forEachIndex+1];
			_ctrlValue ctrlSetStructuredText parseText (_x select 1);
			_ctrlValue ctrlShow true;
			
			private _ctrlProgress = call compile format ["_controlStat0%1Progress",_forEachIndex+1];
			_ctrlProgress progressSetPosition (_x select 2);
			_ctrlProgress ctrlShow true;
			_ctrlProgress ctrlCommit 1; 
		} forEach [
			["Speed", 		format["%1km/h", 	_maximumSpeed], 	_maximumSpeed/1059 	],
			["Capacity", 	format["%1", 		_maximumLoad], 		_maximumLoad/6000 	],
			["Armor", 		format["%1", 		_armor], 			_armor/5000 		],
			["Fuel Tank", 	format["%1l", 		_fuelCapacity], 	_fuelCapacity/4500 	]
		];
					
		_currentItem call Extremo_fnc_gui_modelBox_update;
	};
	case "onPinBoxChar": 
	{ 
		_data params [
			["_control",controlNull,[controlNull]],
			["_charID",-1,[0]]
		];

		//Get display
		private _display = ctrlParent _control;

		//Get all controls
		(_controls apply {_display displayCtrl getNumber(configFile >> _displayClass >> _x#0 >> _x#1 >> "idc")}) params _controlsParams;

		//Get current item
		private _selectedIndex = lbCurSel _controlVehiclesListBox;
		private _currentItem = _controlVehiclesListBox lbData _selectedIndex;
		private _salesPrice = getNumber(configFile >> "CfgExtremoArsenal" >> _currentItem >> "price");
		private _quality = getNumber(configFile >> "CfgExtremoArsenal" >> _currentItem >> "quality");
		private _requiredRespect = getNumber(configFile >> "CfgTrading" >> "requiredRespect" >> format["Level%1",_quality]);
		private _playerMoney = (player getVariable ["ExtremoWallet", 0]);
		private _playerRespect = (player getVariable ["ExtremoScore", 0]);

		//Remove any non numric chars
		private _pin = toString((toArray(ctrlText _controlPinBox)) apply {(if (_x in [48, 49, 50, 51, 52, 53, 54, 55, 56, 57]) then {_x} else {""})});
		_controlPinBox ctrlSetText _pin;

		//Enable purchase button
		try 
		{ 
			if (_salesPrice > _playerMoney) throw false;
			if (_requiredRespect > _playerRespect) throw false;
			if (count _pin < 4) throw false;
			if (count _pin >= 4) throw true; 
		}
		catch 
		{ 
			_controlButtonPurchase ctrlEnable _exception;
		}; 
	};
	case "onPurchaseButtonClick": 
	{ 
		_data params [
			["_control",controlNull,[controlNull]],
			["_buttonClick",-1,[0]],
			["_mousePosX",-1,[0]],
			["_mousePosY",-1,[0]],
			["_shift",false,[false]],
			["_ctrl",false,[false]],
			["_alt",false,[false]]
		];
		
		//Get display
		private _display = ctrlParent _control;

		//Get all controls
		(_controls apply {_display displayCtrl getNumber(configFile >> _displayClass >> _x#0 >> _x#1 >> "idc")}) params _controlsParams;
		
		//Get current item
		private _selectedIndex = lbCurSel _controlVehiclesListBox;
		private _currentItem = _controlVehiclesListBox lbData _selectedIndex;
		private _currentPin = ctrlText _controlPinBox;

		[player,_currentItem,_currentPin] remoteExec ["extremo_fnc_vehicles_purchase",2];

		_display closeDisplay 1;
	};
}; 