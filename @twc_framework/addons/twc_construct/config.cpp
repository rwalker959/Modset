class CfgPatches {
	class twc_construct {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.7;
		author[] = {};
		authorUrl = "";
		version = "1";
		versionStr = "1";
		versionAr[] = {1};

		requiredAddons[] = {
			"ace_common"
		};
	};
};

#include "CfgFunctions.hpp"

class Extended_PostInit_EventHandlers {
	class twc_construct {
		init = "call twc_construct_fnc_init";
	};
};

class Extended_Killed_EventHandlers {
	class CAManBase {
		class twc_construct {
			killed = "_this call twc_construct_fnc_handleKilled";
		};
	};
};

class CfgVehicles {
	class Man;
	class CAManBase: Man {
		class ACE_SelfActions {
			class ACE_Equipment {
				class TWC_AssembleTent {
					displayname = "Assemble Field Tent";
					condition = "[_player] call twc_construct_fnc_canBuildTent";
					statement = "[_target, _player] call twc_construct_fnc_buildTent";
					showDisabled = 0;
					priority = 1;
					icon = "";
				};
			};
		};
	};
};