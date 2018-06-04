class CfgPatches {
	class twc_construct {
		units[]={};
		weapons[]={};
		requiredVersion=1.7;
		requiredAddons[]={};
		author[]={};
		authorUrl="";
		version="1";
		versionStr="1";
		versionAr[]={1};
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
