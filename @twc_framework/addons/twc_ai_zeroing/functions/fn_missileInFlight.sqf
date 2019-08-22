params ["_projectile", "_gunner", "_dispersionCoefficient"];

if !(alive _projectile) exitWith {};

private _mult = (((_projectile distance _gunner) / 260) min 5) * _dispersionCoefficient;

_projectile setVelocity [
	(velocity _projectile select 0) + (((random 24) - 12) * _mult),
	(velocity _projectile select 1) + (((random 24) - 12) * _mult),
	(velocity _projectile select 2) + (((random 4) - 2) * _mult)
];

[{ _this call TWC_AI_Zeroing_fnc_missileInFlight; }, _this, (random 1)] call CBA_fnc_waitAndExecute;