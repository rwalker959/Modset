/*
 * Alternative FiredEH hook parameters for gunWalk
 */
params ["_firedParams", ["_type", 1], ["_additionalTimeToLearn", 0], ["_dispersionCoefficient", 1]];
_firedParams params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];

[_weapon, _ammo, _projectile, _gunner, _type, _additionalTimeToLearn, _dispersionCoefficient] call TWC_fnc_gunWalk;