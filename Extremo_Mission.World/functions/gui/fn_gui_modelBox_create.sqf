/*
	## EXTREMO
	## Nikko Renolds
*/

//Position
ExtremoClientModelBoxPosition = [(getPosATL player)#0, (getPosATL player)#1, ((getPosATL player)#2) + 1000];

//Background
ExtremoClientModelBoxVehicle = objNull; 
ExtremoClientModelBoxBackgroundObject = "Extremo_Helper_50mBox" createVehicleLocal ExtremoClientModelBoxPosition;
ExtremoClientModelBoxBackgroundObject setPosATL ExtremoClientModelBoxPosition;
ExtremoClientModelBoxBackgroundObject setDir 270;
ExtremoClientModelBoxBackgroundObject setObjectTexture [0, "#(rgb,8,8,3)color(0.5,0.5,0.5,1)"]; 

//Focus point for camera
ExtremoClientModelBoxCameraFocusObject = "LOGIC" createVehicleLocal ExtremoClientModelBoxPosition;
ExtremoClientModelBoxCameraFocusObject setPosATL ExtremoClientModelBoxPosition;

//Camera
ExtremoClientModelBoxCameraPosition = [(ExtremoClientModelBoxPosition#0) - 25, ExtremoClientModelBoxPosition#1, ExtremoClientModelBoxPosition#2];
ExtremoClientModelBoxCamera = "camera" camCreate ExtremoClientModelBoxCameraPosition;
ExtremoClientModelBoxCamera cameraEffect ["internal", "back"];
ExtremoClientModelBoxCamera camPrepareFOV 0.7; 
ExtremoClientModelBoxCamera camPrepareTarget ExtremoClientModelBoxCameraFocusObject;
ExtremoClientModelBoxCamera setPosATL ExtremoClientModelBoxCameraPosition;

//
showCinemaBorder false;
ExtremoClientModelBoxCamera camCommitPrepared 0;

//
ExtremoClientModelThreadHandle = [] spawn {
	private["_direction"];
	waituntil { !(IsNull ExtremoClientModelBoxVehicle) };
	_direction = 0;
	while {true} do 
	{
		_direction = _direction + 0.5;
		if (_direction >= 360) then 
		{
			_direction = 0;
		};
		ExtremoClientModelBoxVehicle setDir _direction;
		uiSleep 0.01;
	}; 
};