params ["_building", "_unit"];

if ((_building getVariable ["build_progress", 0]) >= 1) exitWith {false};
if (_building getVariable ["build_progressing", false]) exitWith {false};

true