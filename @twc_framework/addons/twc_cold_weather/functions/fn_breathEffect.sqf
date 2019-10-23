params ["_unit", "_duration"];

private _intensity = 0.5; // 0 - 1

// this needs to be done on init, as it only needs to be done once per unit
private _source = createSimpleObject ["CBA_NamespaceDummy", (getPos _unit), true];
_source attachTo [_unit, [0, 0.15, 0], "neck"];

private _breath = "#particlesource" createVehicleLocal (getPos _source);

_breath setParticleParams [
	["\ca\data\particleeffects\universal\universal", 16, 12, 13, 0],
	"",
	"Billboard",
	0.5,
	0.5,
	[0, 0, 0],
	[0, 0.2, -0.2],
	1,
	1.275,
	1, 0.2,
	[0, 0.2,0],
	[
		[1, 1, 1, _int],
		[1, 1, 1, 0.01],
		[1,1,1, 0]
	],
	[1000],
	1,
	0.04,
	"",
	"",
	_source
];

_breath setParticleRandom [2, [0, 0, 0], [0.25, 0.25, 0.25], 0, 0.5, [0, 0, 0, 0.1], 0, 0, 10];
_breath setDropInterval 0.0001;

// delete after _duration
