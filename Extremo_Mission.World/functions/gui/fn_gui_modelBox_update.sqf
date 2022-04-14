/*
	## EXTREMO
	## Nikko Renolds
*/
params [
	["_vehicleClassName","",[""]]
];

if !(isNull ExtremoClientModelBoxVehicle) then{
	deleteVehicle ExtremoClientModelBoxVehicle;
};

ExtremoClientModelBoxVehicle = _vehicleClassName createVehicleLocal ExtremoClientModelBoxPosition;
ExtremoClientModelBoxVehicle setPosATL ExtremoClientModelBoxPosition;
ExtremoClientModelBoxVehicle setDir 0;
ExtremoClientModelBoxVehicle enableSimulation false;

private _modelBoundingDimensions = ExtremoClientModelBoxVehicle call BIS_fnc_boundingBoxDimensions;
private _modelBoundingRadius = ExtremoClientModelBoxVehicle call BIS_fnc_boundingCircle;
if ((_vehicleClassName isEqualTo "Extremo_Bike_OldBike") || (_vehicleClassName isEqualTo "Extremo_Bike_MountainBike")) then{
	_modelBoundingDimensions set [2, 1];
};

ExtremoClientModelBoxCameraFocusPosition = [ExtremoClientModelBoxPosition#0,ExtremoClientModelBoxPosition#1, (ExtremoClientModelBoxPosition#2) + ((_modelBoundingDimensions#2) * 0.5)];
ExtremoClientModelBoxCameraFocusObject setPosATL ExtremoClientModelBoxCameraFocusPosition;
ExtremoClientModelBoxCameraPosition = [(ExtremoClientModelBoxCameraFocusPosition#0) - _modelBoundingRadius, ExtremoClientModelBoxCameraFocusPosition#1, (ExtremoClientModelBoxPosition#2) + (_modelBoundingDimensions#2) ];
ExtremoClientModelBoxCamera camPrepareTarget ExtremoClientModelBoxCameraFocusObject;
ExtremoClientModelBoxCamera setPosATL ExtremoClientModelBoxCameraPosition;
ExtremoClientModelBoxCamera camCommitPrepared 0;