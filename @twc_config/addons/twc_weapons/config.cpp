class CfgPatches {
	class twc_weapons {
		units[]= { };
		weapons[]= { };
		requiredVersion=0.1;
		
		requiredAddons[]= {
			"A3_Weapons_F",
			"uk3cb_baf_weapons",
			"uk3cb_baf_equipment",
			"cba_xeh",
			"ace_medical",
			"twc_disposable"
		};

		version="1";
		projectName="TWC";
		author="jayman";
	};
};

class CfgWeapons {
	class Launcher;
	class Launcher_Base_F: Launcher {
		class WeaponsSlotsInfo;
	};

	class twc_fieldTent: Launcher_Base_F {
		author = "jayman";
		_generalMacro = "Launch_NLAW_F";
		scope = 2;
		displayname = "Field Tent";
		model = "\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_Static\uk3cb_static_tripod_bag_equipped.p3d";
		picture = "\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_Static\data\gear_L16_tripod_ca.paa";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_at_CA.paa";
		handAnim[] = {};

		TWC_dirOffset = -180; // the directional offset, to make it face the player when placed
		TWC_disOffset = 4.5; // the distance offset, how far away from player when placed
		TWC_radius = 1.5; // the radial distance for isFlat check from centre
		TWC_baseTime = 120; // the base time it takes to set up the building
		TWC_isMedical = true; // it's a medical building, and the medic is better at setting it up
		TWC_isEngineer = false; // it's not an engineering emplacement
		TWC_maxReplace = 3; // how many times can it be torn down before being unable to?

		class weaponSlotsInfo: WeaponsSlotsInfo {
			mass = 220;
		};
	};

	class UK3CB_BAF_L115A3;
	class UK3CB_BAF_L115A3_DE;
	class twc_l96_w: UK3CB_BAF_L115A3 {
		scope = 1;
		displayname = "L96A1";
		magazines[] = {"UK3CB_BAF_762_L42A1_10Rnd"};

		class LinkedItems {
			class LinkedItemsOptic {
				slot="CowsSlot";
				item="CUP_optic_Leupold_VX3";
			};
		};
	};

	class twc_l96_d: UK3CB_BAF_L115A3_DE {
		scope = 1;
		displayname = "L96A1";
		magazines[] = {"UK3CB_BAF_762_L42A1_10Rnd"};
		
		class LinkedItems {
			class LinkedItemsOptic {
				slot="CowsSlot";
				item="CUP_optic_Leupold_VX3";
			};
		};
	};
};