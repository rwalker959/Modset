params [["_vehicle", objNull, [objNull]]];

#define UNFLIPPING_UNITS (_vehicle getVariable ["TWC_Unflip_Units", []])

player playActionNow "PlayerStand";

if !(player in UNFLIPPING_UNITS) exitWith {
	["TWC_Unflip_Start", [_vehicle, player]] call CBA_fnc_serverEvent;
};

private _neededUnits = _vehicle call TWC_Unflip_fnc_requiredAmount;

[{
	params ["_vehicle", "_neededUnits"];

	[
		format ["Waiting for a total of %1 push overs...", (_this select 1)],
		10,
		{
			params ["_vehicle"];
			!(UNFLIPPING_UNITS isEqualTo [])
			&& alive player
		},
		{
			params ["_vehicle"];
			["TWC_Unflip_Stop", [_vehicle, player]] call CBA_fnc_serverEvent;
		},
		{
			params ["_vehicle"];
			["TWC_Unflip_Stop", [_vehicle, player]] call CBA_fnc_serverEvent;
		},
		_this
	] call CBA_fnc_progressBar;
}, [_vehicle, _neededUnits]] call CBA_fnc_execNextFrame;

nil