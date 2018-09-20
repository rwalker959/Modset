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