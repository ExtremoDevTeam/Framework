if ((missionNamespace getVariable ["Extremo_handicapRevived_threadHandle", scriptNull]) isEqualTo scriptNull) then {
	Extremo_handicapRevived_threadHandle = [] spawn {
		for "_i" from 0 to 1 step 0 do {
			addCamShake [6, 4, 6];
			uiSleep 3;
		};
	};
};