if (isServer) then {
	addMissionEventHandler ["HandleDisconnect", {_this call twc_construct_fnc_handleKilled}];
};

if (!hasInterface) exitWith {};

buildingID = 0;
buildingObj = objNull;

["ace_unconscious", {_this call twc_construct_fnc_handleUnconscious}] call CBA_fnc_addEventHandler;

["loadout", {
	_backItem = (secondaryWeapon _unit);
	_backCache = player getVariable ["TWC_BackCache", ""];
	
	if (_backItem != _backCache) then {
		player setVariable ["TWC_BackCache", _backItem];
		_tentClass = getText (configFile >> "CfgWeapons" >> _tentItemClass >> "TWC_TentClass");
		
		if (_tentClass != "") then {
			player setVariable ["TWC_HasTent", true, true];
		} else {
			player setVariable ["TWC_HasTent", false, true];
		};
	};
}] call CBA_fnc_addPlayerEventHandler;