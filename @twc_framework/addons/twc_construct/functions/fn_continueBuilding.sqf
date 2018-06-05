params ["_building", "_caller"];

private _actualProgress = _building getVariable ["twc_build_progress", 0];
if(_actualProgress == 1) exitWith {};

_building setVariable ["twc_build_progressing", true, true];

private _callerIsMedical = _caller getVariable ["ACE_medical_medicClass", 0];
private _callerIsEngineer = [_caller] call ace_common_fnc_isEngineer;

private _buildingIsMedical = [(configFile >> "CfgVehicles" >> (typeof _building)), "TWC_isMedical", false] call BIS_fnc_returnConfigEntry;
private _buildingIsEngineer = [(configFile >> "CfgVehicles" >> (typeof _building)), "TWC_isEngineer", false] call BIS_fnc_returnConfigEntry;

private _callerMod = 1; // don't divide by default
if (_buildingIsMedical && _callerIsMedical) then { _callerMod = 8; };
if (_buildingIsEngineer && _callerIsEngineer) then { _callerMod = 8; };

private _buildTime = [(configFile >> "CfgVehicles" >> (typeof _building)), "TWC_baseTime", 120] call BIS_fnc_returnConfigEntry;
private _buildTimeMod = (_buildTime / _callerMod);
private _buildTimeLeft = (_buildTime - _buildTimeMod) * (1 - _actualProgress);

private _placementData = _building getVariable ["twc_building_placeData", [[], []]];
_placementData params ["_buildingBasePos", "_buildingVecDirAndUp"];

private _fnc_onFinish = {
	(_this select 0) params ["_caller", "_building", "_buildingIsMedical"];
	
	_building setVariable ["twc_build_progressing", false, true];
	
	private _progress = _building getVariable ["twc_build_progress", 0];
	_building setVariable ["twc_build_progress", _progress, true];
	
	_building setVariable ["ace_medical_isMedicalFacility", _buildingIsMedical, true];
	
	[_caller, "", 1] call ace_common_fnc_doAnimation;
};

private _fnc_onFailure = {
	(_this select 0) params ["_caller", "_building"];
	
	_building setVariable ["twc_build_progressing", false, true];
	
	private _progress = _building getVariable ["twc_build_progress", 0];
	_building setVariable ["twc_build_progress", _progress, true];
	
	[_caller, "", 1] call ace_common_fnc_doAnimation;
};

[(_buildTimeLeft + 0.5), [_caller, _building, _buildingIsMedical], _fnc_onFinish, _fnc_onFailure, "Erecting Building..."] call ace_common_fnc_progressBar;

// will be for start build, put here temporarily
// _buildingPos = (_caller modelToWorld [0, 4.5, 0]);
// _buildingDirOffset = -180;
// _isEmpty = !(_buildingPos isFlatEmpty  [1, -1, -1, 1, 0, false, _caller] isEqualTo []);

// if (_isEmpty) then { 
	// _building = createVehicle ["camp", [0, 0, -100], [], 0, "CAN_COLLIDE"];
	// _building setDir (getDir _caller) - _buildingDirOffset;
	// _building setPos _buildingPos;
// };