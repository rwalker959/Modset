class CfgPatches {
	class TWC_Cache {
		units[] = {
			"TWC_Cache_Module"
		};
		
		weapons[] = {};
		requiredVersion = 1.7;

		requiredAddons[] = {
			"TWC_Core"
		};

		author[]={};
		authorUrl="";
		version="1";
		versionStr="1";
		versionAr[]={1};
	};
};

class cfgFactionClasses {
	class NO_CATEGORY;
	
	class TWC_Cache_Modules: NO_CATEGORY {
		displayName = "TWC - Cache Modules";
	};
};

class Extended_PreInit_EventHandlers {
	class TWC_Cache {
		init = "_this call TWC_Cache_fnc_settings;";
	};
};

class Extended_InitPost_EventHandlers {
	class CAManBase {
		class TWC_Cache_initEH {
			init = "_this call TWC_Cache_fnc_handleInitMan;";
			local = "_this call TWC_Cache_fnc_handleLocal;";
		};
	};
	
	class AllVehicles {
		class TWC_Cache_initEH {
			init = "_this call TWC_Cache_fnc_handleInitVehicle;";
			local = "_this call TWC_Cache_fnc_handleLocal;";
		};
	};
};

#include "CfgFunctions.hpp"
#include "CfgVehicles.hpp"