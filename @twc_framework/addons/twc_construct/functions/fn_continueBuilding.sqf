params ["_building", "_caller", "_itemClass"];

private _actualProgress = _building getVariable ["twc_build_progress", 0];
if(_actualProgress == 1) exitWith {};

_building setVariable ["twc_build_progressing", true, true];

private _callerIsMedical = if ((_caller getVariable ["ACE_medical_medicClass", 0]) > 0) then { true } else { false };
private _callerIsEngineer = [_caller] call ace_common_fnc_isEngineer;

private _buildingIsMedical = [(configFile >> "CfgWeapons" >> _itemClass), "TWC_isMedical", false] call BIS_fnc_returnConfigEntry;
private _buildingIsEngineer = [(configFile >> "CfgWeapons" >> _itemClass), "TWC_isEngineer", false] call BIS_fnc_returnConfigEntry;
private _isReconnectPoint = [(configFile >> "CfgWeapons" >> _itemClass), "TWC_isReconnectPoint", false] call BIS_fnc_returnConfigEntry;

private _buildingDisplayName = [(configFile >> "CfgVehicles" >> (typeof _building)), "displayName", "Building"] call BIS_fnc_returnConfigEntry;

private _callerMod = 1; // don't divide by default
if (_buildingIsMedical && _callerIsMedical) then { _callerMod = 8; };
if (_buildingIsEngineer && _callerIsEngineer) then { _callerMod = 8; };

private _buildTime = [(configFile >> "CfgWeapons" >> _itemClass), "TWC_baseTime", 120] call BIS_fnc_returnConfigEntry;
private _buildTimeMod = (_buildTime / _callerMod);
private _buildTimeLeft = (_buildTime - _buildTimeMod) * (1 - _actualProgress);

private _placementData = _building getVariable ["twc_building_placeData", [[], []]];
_placementData params ["_buildingBasePos", "_buildingVecDirAndUp"];

private _buildingID = _caller getVariable ["isBuildingID", -1];

if(_buildingID < 0) then {
	_buildingID = buildingID;
	_caller setVariable ["isBuildingID", _buildingID, true];
	buildingID = buildingID + 1;
};

private _fnc_onFinish = {
	(_this select 0) params ["_caller", "_building", "_buildingIsMedical", "_buildingIsEngineer", "_isReconnectPoint"];
	_caller setVariable ["buildingID", -1, true];
	_building setVariable ["twc_build_progressing", false, true];
	
	private _progress = _building getVariable ["twc_build_progress", 0];
	_building setVariable ["twc_build_progress", _progress, true];
	
	_building setVariable ["ace_medical_isMedicalFacility", _buildingIsMedical, true];
	
	if (_isReconnectPoint) then {
		// reconnect position
		ForwardBasePos = (getPos _caller);
		publicVariable "ForwardBasePos";
	};
	
	[_caller, "", 1] call ace_common_fnc_doAnimation;
};

private _fnc_onFailure = {
	(_this select 0) params ["_caller", "_building", "_buildingIsMedical"];
	_caller setVariable ["buildingID", -1, true];
	_building setVariable ["twc_build_progressing", false, true];
	
	private _progress = _building getVariable ["twc_build_progress", 0];
	_building setVariable ["twc_build_progress", _progress, true];
	
	[_caller, "", 1] call ace_common_fnc_doAnimation;
};

[(_buildTimeLeft + 0.5), [_caller, _building, _buildingIsMedical, _buildingIsEngineer], _fnc_onFinish, _fnc_onFailure, "Erecting " + _buildingDisplayName + "..."] call ace_common_fnc_progressBar;

if (_actualProgress == 0) then {
	[_caller, _building, _buildingID, _buildingBasePos vectorDiff [0, 0, 1.0], _buildingVecDirAndUp, _actualProgress] call twc_construct_fnc_setBuildingPlacement;
	
	// might want to cut grass here in future!
};

private _progressLeft = (_actualProgress * 10) + 1;

for "_i" from _progressLeft to 10 do {
	private _vectorDiffZ = 1 - (_i / 10);
	private _delay = (_buildTime - _buildTimeMod) * ((_i / 10) - _actualProgress);
	private _progress = _i / 10;

	[twc_construct_fnc_setBuildingPlacement, [_caller, _building, _buildingID, _buildingBasePos vectorDiff [0, 0, _vectorDiffZ], _buildingVecDirAndUp, _progress], _delay] call CBA_fnc_waitAndExecute;
};

[_caller, "AinvPknlMstpSnonWnonDnon_medic4"] call ace_common_fnc_doAnimation;