class Extended_PreInit_EventHandlers {
	class TWC_AI_Zeroing {
		init = "_this call TWC_AI_Zeroing_fnc_settings;";
	};
};

/** CORE FIRED EH ONLY - UNIT SPECIFICS SHOULD BE DEFINED IN THE APPROPRIATE CONFIG **/
/** THEN BLACKLIST THE SPECIFICS HERE, USING EXCLUDE ARRAY **/
/** exclude[] = {""}; **/
class Extended_FiredBIS_Eventhandlers {
	class Car {
		class TWC_AI_Zeroing {
			FiredBIS = "[_this] call TWC_AI_Zeroing_fnc_firedEH;";
		};
	};
	
	class Helicopter {
		class TWC_AI_Zeroing {
			FiredBIS = "[_this] call TWC_AI_Zeroing_fnc_firedEH;";
		};
	};
	
	class Tank {
		class TWC_AI_Zeroing {
			FiredBIS = "[_this, 2] call TWC_AI_Zeroing_fnc_firedEH;";
		};
	};
	
	class StaticMGWeapon {
		class TWC_AI_Zeroing {
			FiredBIS = "[_this] call TWC_AI_Zeroing_fnc_firedEH;";
		};
	};
	
	class StaticGrenadeLauncher {
		class TWC_AI_Zeroing {
			FiredBIS = "[_this] call TWC_AI_Zeroing_fnc_firedEH;";
		};
	};
	
	class StaticATWeapon {
		class TWC_AI_Zeroing {
			FiredBIS = "[_this] call TWC_AI_Zeroing_fnc_firedEH;";
		};
	};
};
