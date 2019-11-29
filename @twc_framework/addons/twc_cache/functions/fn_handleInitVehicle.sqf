params ["_man"];

if (hasInterface) exitWith {};
if !(local _man) exitWith {};

// if this unit is the leader, and there's no players in the group...
if (leader _man == _man && {isPlayer _x} count Units (group _man) == 0) then {
	// TODO: get debug status (cba setting)
	_debug = false;
	
	_cacheRange = (group _man) getVariable [
		"TWC_Cache_Group_Range",
		(missionNameSpace getVariable ["twc_cachingAiRange", 1500])
	];
	
	[_debug, (group _man), _cacheRange] call TWC_Cache_fnc_infantryLoop;
};