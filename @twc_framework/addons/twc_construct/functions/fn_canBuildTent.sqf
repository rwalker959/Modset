params ["_unit"];

if ((secondaryWeapon _unit) == 'twc_fieldTent') exitWith { true };
if ((secondaryWeapon _unit) == 'twc_ww2_fieldTent') exitWith { true };

false