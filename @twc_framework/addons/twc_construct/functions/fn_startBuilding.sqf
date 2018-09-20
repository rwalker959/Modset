params ["_caller", "_buildingClass", "_itemClass"];

private _buildingDirOffset = [(configFile >> "CfgWeapons" >> _itemClass, "TWC_dirOffset", 0] call BIS_fnc_returnConfigEntry;
private _buildingDisOffset = [(configFile >> "CfgWeapons" >> _itemClass, "TWC_disOffset", 0] call BIS_fnc_returnConfigEntry;
private _buildingRadialCheck = [(configFile >> "CfgWeapons" >> _itemClass, "TWC_radius", 1] call BIS_fnc_returnConfigEntry;

private _buildingPos = (_caller modelToWorld [0, _buildingDisOffset, 0]);
private _isEmpty = !(_buildingPos isFlatEmpty  [_buildingRadialCheck, -1, -1, 1, 0, false, _caller] isEqualTo []);

if (_isEmpty) then {
	_building = createVehicle [_buildingClass, [0, 0, 0], [], 0, "CAN_COLLIDE"];
	
	private _angle = (getDir _caller) + _buildingDirOffset;
	
	private _v3 = surfaceNormal _buildingPos;
	private _v2 = [sin _angle, +cos _angle, 0] vectorCrossProduct _v3;
	private _v1 = _v3 vectorCrossProduct _v2;
	
	private _bbr = boundingBoxReal _building;
	private _p1 = _bbr select 0;
	private _p2 = _bbr select 1;
	private _Height = abs ((_p2 select 2) - (_p1 select 2));
	
	_buildingPos set [2, (getTerrainHeightASL _buildingPos - _Height)];
	private _vecDirAndUp = [_v1, _v3];
	_building setDir (getDir _caller) - _buildingDirOffset;
	_building setPos _buildingPos;
	
	_building setVariable ["twc_building_placeData", [_buildingPos, _vecDirAndUp], true];
	
	[_building, _caller] call twc_construct_fnc_continueBuilding;
} else {
	// some form of feedback, hint for the moe 
	hint format ["Error placing, not empty or flat enough!"];
};

// will be for start build, put here temporarily
// _isEmpty = !(_buildingPos isFlatEmpty  [1, -1, -1, 1, 0, false, _caller] isEqualTo []);

// if (_isEmpty) then { 
	// _building = createVehicle ["camp", [0, 0, -100], [], 0, "CAN_COLLIDE"];
	// _building setDir (getDir _caller) - _buildingDirOffset;
	// _building setPos _buildingPos;
// };