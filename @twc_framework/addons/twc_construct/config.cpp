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

class CfgWeapons {
	class Launcher;
	class Launcher_Base_F: Launcher {
		class WeaponsSlotsInfo;
	};
	
	class TWC_Item_FieldTent: Launcher_Base_F {
		author = "jayman";
		_generalMacro = "Launch_NLAW_F";
		scope = 2;
		displayname = "Field Tent (No Spare Peg)";
		model = "\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_Static\uk3cb_static_tripod_bag_equipped.p3d";
		picture = "\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_Static\data\gear_L16_tripod_ca.paa";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_at_CA.paa";
		handAnim[] = {};

		TWC_dirOffset = -180; // the directional offset, to make it face the player when placed
		TWC_disOffset = 4.5; // the distance offset, how far away from player when placed
		TWC_radius = 1; // the radial distance for isFlat check from centre
		TWC_baseTime = 120; // the base time it takes to set up the building
		TWC_isMedical = true; // it's a medical building, and the medic is better at setting it up
		TWC_isEngineer = false; // it's not an engineering emplacement
		TWC_isReconnectPoint = true; // it's a reconnect point
		TWC_replacedWith = ""; // what item is put on the floor, when torn down? "" for nothing

		class weaponSlotsInfo: WeaponsSlotsInfo {
			mass = 220;
		};
	};

	class TWC_Item_FieldTent_1: TWC_Item_FieldTent {
		displayname = "Field Tent (1 Spare Peg)";
		TWC_replacedWith = "TWC_Item_FieldTent";
	};

	class TWC_Item_FieldTent_2: TWC_Item_FieldTent {
		displayname = "Field Tent (2 Spare Pegs)";
		TWC_replacedWith = "TWC_Item_FieldTent_1";
	};
};