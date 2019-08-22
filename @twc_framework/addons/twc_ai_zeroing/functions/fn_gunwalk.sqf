params [["_weapon", ""], "_ammo", "_projectile", "_gunner", ["_type", 1], ["_additionalTimeToLearn", 0], ["_dispersionCoefficient", 1]];

if !(local _gunner) exitWith {};
if (isPlayer _gunner) exitWith {};

private _vehicle = (vehicle _gunner);

if ((_vehicle getVariable ["twc_dontwalk", 0]) == 1) exitWith {};

if (isNull _projectile) then { _projectile = nearestObject [_gunner, _ammo]; };
private _disperseOnly = (_vehicle getvariable ["twc_walk_onlydisperse", 0]);

if (_disperseOnly > 0) exitWith {
	_disperseModifier = _disperseOnly * _dispersionCoefficient;
	
	_projectile setvelocity [
		(velocity _projectile select 0) + (((random 24) - 12) * _disperseModifier),
		(velocity _projectile select 1) + (((random 24) - 12) * _disperseModifier),
		(velocity _projectile select 2) + (((random 4) - 2) * _disperseModifier)
	];
};

if ((typeOf _projectile) isKindOf ["MissileCore", configFile >> "CfgAmmo"]) exitWith {
	[_projectile, _gunner, _dispersionCoefficient] call TWC_AI_Zeroing_fnc_missileInFlight;
};

private _lastFired = _gunner getVariable ["twc_gunwalk_lastfired", 0];
_gunner setVariable ["twc_gunwalk_lastfired", time];

_skill = (0.5 + (skill _gunner));

// Per Hobbs recommendation
if (_dispersionCoefficient != 1) then {
	_skill = 0.5 * _dispersionCoefficient;
};

private _missionModifier = missionnamespace getVariable ["walkvar", 20];

_startdev = _missionModifier / _type;
_natdev = _missionModifier / _type;

_twc_mortar_acc1 = "twc_mortar_acc1" + _weapon;
_twc_mortar_acc2 = "twc_mortar_acc2" + _weapon;
_twc_mortar_acc3 = "twc_mortar_acc3" + _weapon;

_nataccmult = _type;
_biggun = 1;

//exempting the 20mm grenade because an insurgency weapon uses it and needs to be inaccurate
if (!((typeof _projectile) == "G_20mm_HE")) then {
	if ((_weapon isKindOf ["cannon_120mm", configFile >> "CfgWeapons"]) || ((typeof _projectile) isKindOf ["RocketCore", configFile >> "CfgAmmo"])) then {
		_nataccmult = 0.2;
		_biggun = 4; // was originally 2, but only other time it was called, it was multiplied by itself
	} else {
		if (_weapon isKindOf ["Mgun", configFile >> "CfgWeapons"]) then {
			_nataccmult = 0.6;
		};
	};
};

_nataccinit = (4 / (0.5 + (_skill / 2))) * 31) * _nataccmult;
_natacc = ((random _nataccinit) - (_nataccinit / 2));
_natacc2 = ((random _nataccinit) - (_nataccinit / 2));
_natacc3 = ((random _nataccinit) - (_nataccinit / 1.7));

_mod1 = _gunner getvariable [_twc_mortar_acc1, ((_startdev) / _skill)];
_mod2 = _gunner getvariable [_twc_mortar_acc2, ((_startdev) / _skill)];
_mod3 = _gunner getvariable [_twc_mortar_acc3, ((_startdev) / _skill)];

_learnCoef = 0.15 * _skill * ((_type - 0.5) * 2) * _biggun;

private _margin = _gunner getvariable ["twc_firerate", 0.3];

if (((time - _lastFired) < 0.3) && (_margin == 0.3)) then {
	_gunner setVariable ["twc_firerate", (time - _lastFired)];
};

private _bursttime = (_gunner getvariable ["twc_firerate", 0.3]) * 2;

if (_margin < 0.1) then { _bursttime = 0.3; };

// if it's more than a burst time (+ additional learning time) since last firing, it's enough time for correction, with a small chance of overcorrection
if ((time - _lastFired) > (_bursttime + _additionalTimeToLearn)) then {
	_ranmult = 1;
	if ((random 1) < 0.2) then { _ranmult = -1; };
	
	_gunner setVariable [_twc_mortar_acc1, (_mod1 / (1.3 + (random _learncoef))) * _ranmult];
	_ranmult = 1;
	
	_flipchance = 0.2;
	if ((_gunner getVariable [_twc_mortar_acc3, 0]) < 0) then { _flipchance = 0.5; };
	
	if ((random 1) < _flipchance) then { _ranmult = -1; };
	
	_gunner setVariable [_twc_mortar_acc2, (_mod1 / (1.3 + (random _learncoef))) * _ranmult];
	
	_ranmult = 1;
	if ((random 1) < 0.2) then { _ranmult = -1; };
	
	_gunner setVariable [_twc_mortar_acc3, (_mod1 / (1.3 + (random _learncoef))) * _ranmult];
};

// if it's more than 3 minutes since last firing, it's too much time and the modifier needs a reset
if ((time - _lastFired) > 200) then {
	_gunner setVariable [_twc_mortar_acc1, ((_startdev) / _skill)];
	_gunner setVariable [_twc_mortar_acc2, ((_startdev) / _skill)];
	_gunner setVariable [_twc_mortar_acc3, ((_startdev) / _skill)];
};

_mod1 = _gunner getVariable [_twc_mortar_acc1, (((random _natdev) / _skill) min _natdev) max (_natdev * -1)];
_mod2 = _gunner getVariable [_twc_mortar_acc2, (((random _natdev) / _skill) min _natdev) max (_natdev * -1)];
_mod3 = _gunner getVariable [_twc_mortar_acc3, (((random _natdev) / _skill) min _natdev) max (_natdev * -1)];

private _speedmod = 1 - (0.5 / (((speed _projectile) + 1) / 500));

_v1 = (velocity _projectile select 0) + ((_natacc + _mod1) / (0.7 * (_type)));
_v2 = (velocity _projectile select 1) + ((_natacc2 + _mod2) / (0.7 * (_type)));
_v3 = (velocity _projectile select 2) + (((_natacc3 / 1) + _mod3)/ _speedmod);

if ((isnil "_v1") || (isnil "_v2") || (isnil "_v3")) exitWith {
	[format ["Encountered a nill velocity vector in gunWalk, on projectile: %1", _projectile, true], "AI_Zeroing"] call TWC_Debug_fnc_logGlobal;
};

_projectile setVelocity [_v1, _v2, _v3];