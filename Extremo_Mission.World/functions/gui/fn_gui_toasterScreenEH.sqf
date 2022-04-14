/*
	## EXTREMO
	## Nikko Renolds
*/

ExtremoClientToasts = [];

while {true} do {
	{
		_toastControl = _x select 0;
		_status = _x select 1;
		_statusChangeAt = _x select 2;
		if (diag_tickTime >= _statusChangeAt) then 
		{
			switch (_status) do 
			{
				case 0: 
				{
					_toastPosition = ctrlPosition _toastControl;
					_toastPosition set [1, (_toastPosition select 1) + 20 * pixelH];
					_toastControl ctrlSetPosition _toastPosition;
					_toastControl ctrlSetFade 1;
					_toastControl ctrlCommit 0.25;
					ExtremoClientToasts set [_forEachIndex, [_toastControl, 1, diag_tickTime + 1]];
				};
				case 1:
				{
					ctrlDelete _toastControl;
					ExtremoClientToasts deleteAt _forEachIndex;
				};
			};
		};
		uiSleep 0.2;
	} forEach ExtremoClientToasts;
};