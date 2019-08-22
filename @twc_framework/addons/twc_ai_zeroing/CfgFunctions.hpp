class CfgFunctions {
	class TWC_AI_Zeroing {
		tag = "TWC_AI_Zeroing";
		
		class functions {
			file = "TWC_AI_Zeroing\functions";

			/** INIT **/
			class init {};
			class settings {};

			/** ZEROING FUNCTIONS **/
			class firedEH {};
			class missileInFlight {};
		};
	};
	
	class TWC {
		tag = "TWC";
		
		/** Supports the old style of being called **/
		class functions {
			class gunwalk {
				file = "TWC_AI_Zeroing\functions\fn_gunWalk.sqf";
			};
		};
	};
};