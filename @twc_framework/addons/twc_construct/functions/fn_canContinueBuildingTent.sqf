params ["_tent", "_unit"];

if ((_tent getVariable ["build_progress", 0]) >= 1) exitWith {false};
if (_tent getVariable ["build_progressing", false]) exitWith {false};

true