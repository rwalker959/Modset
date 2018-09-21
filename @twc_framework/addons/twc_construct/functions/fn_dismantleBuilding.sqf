params ["_caller", "_target"];

private _isReconnectPoint = _building getVariable ["twc_building_isReconnectPoint", false];
private _itemClass = _building getVariable ["twc_building_newItem", ""];

if (_isReconnectPoint) then {
	ForwardBasePos = nil;
	publicVariable "ForwardBasePos";
};

[_caller, _target, _itemClass] call TWC_Construct_fnc_continueDismantlingBuilding;