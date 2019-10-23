// Start an effects loop, until unit stops talking, at which point cancel it.
// Therefore breaths should form for duration of conversation.

["acre_startedSpeaking", {
	params ["_unit", "_onRadio", "_radioID"];
	
	[_unit] call TWC_Cold_Weather_fnc_breathEffect;
}] call CBA_fnc_addEventHandler;

["acre_startedSpeaking", {
	params ["_unit", "_onRadio", "_radioID"];

	
}] call CBA_fnc_addEventHandler;