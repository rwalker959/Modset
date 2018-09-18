params ["_caller", "_target"];

_tentItemClass = secondaryWeapon _caller;
_tentClass = [(configFile >> "CfgWeapons" >> _tentItemClass), "TWC_TentClass", ""] call BIS_fnc_returnConfigEntry;

if (_tentClass == "") exitWith { systemChat format ["Error: Cannot find TWC_TentClass entry for: %1.", _tentItemClass]; };

[_caller, _tentClass] call twc_construct_fnc_startBuilding;