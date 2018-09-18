params ["_caller", "_target"];

if (!((secondaryWeapon _caller) == 'twc_fieldTent') || !((secondaryWeapon _caller) == 'twc_ww2_fieldTent')) exitWith { };

_tentItemClass = secondaryWeapon _caller;
_tentClass = getText (configFile >> "CfgWeapons" >> _tentItemClass >> "TWC_TentClass");

[_caller, _tentClass] call twc_construct_fnc_startBuilding;