if (isServer) then {
	addMissionEventHandler ["HandleDisconnect", {_this call twc_construct_fnc_handleKilled}];
};

if (!hasInterface) exitWith {};

["ace_unconscious", {_this call twc_construct_fnc_handleUnconscious}] call CBA_fnc_addEventHandler;