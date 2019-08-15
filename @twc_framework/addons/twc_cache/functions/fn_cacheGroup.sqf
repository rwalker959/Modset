params ["_group", ["_cacheRange", -1]];

private _isDefending = _group getVariable ["TWC_Cache_Defending", false];

if (_isDefending) then {
	[
		{
			({unitReady _x} count units (_this select 1) == (count units (_this select 1)))
		}, {
			params ["_group", "_cacheRange"];

			{
				_x disableAI "path";
				_x enableSimulationGlobal false;
				_x hideObjectGlobal true;
			} forEach (units _group);
		}, 
		[_group, _cacheRange],
		60,
		{
			params ["_group", "_cacheRange"];

			{
				_x disableAI "path";
				_x enableSimulationGlobal false;
				_x hideObjectGlobal true;
			} forEach (units _group);
		}
	] call CBA_fnc_waitUntilAndExecute;
} else {
	{
		if (leader _x != _x && !("Driver" in (assignedVehicleRole _x))) then {
			_x enableSimulationGlobal false;
			_x hideObjectGlobal true;
		};
	} forEach (units _group);
};