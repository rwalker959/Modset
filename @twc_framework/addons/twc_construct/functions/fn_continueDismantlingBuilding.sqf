params ["_caller", "_building", "_itemClass"];

private _dismantleTime = _building getVariable ["TWC_dismantleTime", 150];

private _fnc_onFinish = {
	(_this select 0) params ["_caller", "_building", "_newItemClass"];
	_caller setVariable ["buildingID", -1, true];

	deleteVehicle _building;

	if (_newItemClass != "") then {
		_ground = "groundWeaponHolder" createVehicle (position _caller);
		_ground addWeaponCargoGlobal [_newItemClass, 1];
	};

	[_caller, "", 1] call ace_common_fnc_doAnimation;
};

private _fnc_onFailure = {
	(_this select 0) params ["_caller", "_building"];
	_caller setVariable ["buildingID", -1, true];
	_building setVariable ["twc_build_progressing", false, true];
	
	private _progress = _building getVariable ["twc_build_progress", 0];
	_building setVariable ["twc_build_progress", _progress, true];
	
	[_caller, "", 1] call ace_common_fnc_doAnimation;
};

[(_dismantleTime + 0.5), [_caller, _building, _newItemClass], _fnc_onFinish, _fnc_onFailure, "Dismantling " + _buildingDisplayName + "..."] call ace_common_fnc_progressBar;