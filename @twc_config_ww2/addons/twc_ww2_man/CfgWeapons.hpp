class Mode_SemiAuto {
	aiRateOfFire = 1;
	aiRateOfFireDistance = 550;
	minRange = 0;
	minRangeProbab = 0.7;
	midRange = 200;
	midRangeProbab = 0.5;
	maxRange = 500;
	maxRangeProbab = 0.1;
};

class Mode_Burst: Mode_SemiAuto {
	aiRateOfFire = 1;
	aiRateOfFireDistance = 200;
	minRange = 0;
	minRangeProbab = 0.8;
	midRange = 150;
	midRangeProbab = 0.7;
	maxRange = 250;
	maxRangeProbab = 0.1;
};

class Mode_FullAuto: Mode_SemiAuto {
	aiRateOfFire = 0.1;
	aiRateOfFireDistance = 50;
	minRange = 0;
	minRangeProbab = 0.9;
	midRange = 60;
	midRangeProbab = 0.7;
	maxRange = 120;
	maxRangeProbab = 0.1;
};

class CfgWeapons {
	class Default;
	class RifleCore;

	class MGunCore: Default {
		aiDispersionCoefX = 20;
		aiDispersionCoefY = 21;
	};

	class GrenadeLauncher: Default {
		aiDispersionCoefX = 25;
		aiDispersionCoefY = 26;
	};

	class Throw: GrenadeLauncher {
		class ThrowMuzzle: GrenadeLauncher {
			aiDispersionCoefX = 25;
			aiDispersionCoefY = 26;
		};
	};
};