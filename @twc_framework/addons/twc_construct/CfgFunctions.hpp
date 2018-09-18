class cfgFunctions {
	class TWC_Construct {
		class Functions {
			tag = "twc_construct";
			file = "twc_construct\functions";
			
			// legacy
			class build {};
			class buildConfirm {};
			
			// new construct system
			class init {};
			class canBuildTent {};
			class buildTent {};
			class canContinueBuilding {};
			class startBuilding {};
			class setBuildingPlacement {};
			
			class handleKilled {};
			class handleUnconscious {};
		};
	};
};