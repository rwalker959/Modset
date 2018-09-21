private _fnc_onFinish = {
	(_this select 0) params ["_caller", "_building", "_buildingIsMedical", "_buildingIsEngineer"];
	_caller setVariable ["buildingID", -1, true];

	deleteVehicle _building;

	if (_newItemClass != "") then {
		_ground = "groundWeaponHolder" createVehicle (position _caller);
		_ground addWeaponCargoGlobal [_newItemClass, 1];
	};

	[_caller, "", 1] call ace_common_fnc_doAnimation;
};