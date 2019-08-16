params [["_group", grpNull], ["_isCached", false], ["_cacheDistance", 1500]];

if (isNull _group) exitWith {
	["Exiting an infantry loop, nullGroup encountered", "Cache"] call TWC_Debug_fnc_logGlobal;
};

private _cacheBlacklist = _group getVariable ["TWC_Cache_Blacklist", false];

if (_cacheBlacklist) exitWith {
	["Exiting an infantry loop, blacklisted group encountered", "Cache"] call TWC_Debug_fnc_logGlobal;
};

/* private _temporaryIgnoreCaching = _group getVariable ["TWC_Cache_TempIgnore", false];

if (_temporaryIgnoreCaching) exitWith {
	Keep checking every second until flag is lifted
	[{ _this call TWC_Cache_fnc_infantryLoop; }, _this, 1] call CBA_fnc_waitAndExecute;
}; */

if ({alive _x} count (units _group) == 0) exitWith {
	["Exiting an infantry loop, all units within group dead", "Cache"] call TWC_Debug_fnc_logGlobal;
};

private _leader = leader _group;
private _continue = true;

// Most performant check possible, tested against CBA_fnc_nearPlayer etc.
if ({_x distance _leader < _cacheDistance} count allPlayers == 0) then {
	if !(_isCached) then {
		/* If there's no players in range, and it's not yet cached */
		[_group, _cacheDistance] call TWC_Cache_fnc_cacheGroup;
		_continue = false;
	};
} else {
	if !(_isCached) then {
		/* If there's players in range, and it's not uncached */
		[_group, _cacheDistance] call TWC_Cache_fnc_unCacheGroup;
		_continue = false;
	};
};

// Reloop, if all other conditions are fine
if (_continue) then {
	[{ _this call TWC_Cache_fnc_infantryLoop; }, _this, 1] call CBA_fnc_waitAndExecute;
};