params ["_caller", "_building", "_buildingID", "_pos", "_vecDirAndUp", "_progress"];

// If the progress bar was cancelled, cancel erection Kappa
// We use an uid to avoid any chance of an older building being erected when a new one is built
if (_caller getVariable ["isBuildingID", -1] != _buildingID) exitWith {};

_building setPosASL _pos;
_building setVectorDirAndUp _vecDirAndUp;

// Save progress local
_building setVariable ["twc_build_progress", _progress];