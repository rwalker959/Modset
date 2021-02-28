/* // Cold War
"TWC_AmmoBox_ColdWar_Base",
"TWC_AmmoBox_ColdWar_Section_Portable",

"TWC_AmmoBox_ColdWar_Sniper_Portable",
"TWC_AmmoBox_ColdWar_Blowpipe_Portable", */

class TWC_AmmoBox_ColdWar_Base: TWC_AmmoBox_Base {
	scope = 2;
	scopeCurator = 2;
	displayName = "Base Resupply (Immobile)";
	
	editorSubcategory = "TWC_Crates_ColdWar";
	
	class TransportItems {
		item_nc(DemoCharge_Remote_Mag, 5);
		item_nc(ACE_Clacker, 5);
		
		item_nc(ACE_fieldDressing, 32);
		item_nc(ACE_elasticBandage, 32);
		item_nc(ACE_quikclot, 32);
		item_nc(ACE_packingBandage, 32);
		
		item_nc(ACE_morphine, 16);
		item_nc(ACE_epinephrine, 16);
		item_nc(ACE_tourniquet, 16);
	};
	
	class TransportMagazines {
		maga_nc(SP_30Rnd_9x19_L2A3_Sterling, 20);

		// L1A1 SLR
		maga_nc(UK3CB_BAF_762_20Rnd, 110);
		maga_nc(UK3CB_BAF_762_20Rnd_T, 20);

		// L7A1 GPMG
		maga_nc(UK3CB_BAF_762_100Rnd, 16);
		maga_nc(UK3CB_BAF_762_100Rnd_T, 4);
		
		maga_nc(ACE_HandFlare_White, 10);

		// Smoke Grenades
		maga_nc(SmokeShell, 30);
		maga_nc(SmokeShellRed, 10);
		maga_nc(SmokeShellGreen, 10);
		maga_nc(SmokeShellBlue, 10);
		maga_nc(SmokeShellYellow, 10);
		
		// Hand Grenade HE
		maga_nc(CUP_HandGrenade_L109A2_HE, 30);
	};
};

class TWC_AmmoBox_ColdWar_Section_Portable: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "Section Resupply (Portable)";
	
	editorSubcategory = "TWC_Crates_ColdWar";
	
	class TransportItems {
		item_nc(ACE_fieldDressing, 12);
		item_nc(ACE_elasticBandage, 12);
		item_nc(ACE_quikclot, 12);
		item_nc(ACE_packingBandage, 12);
		
		item_nc(ACE_morphine, 12);
		item_nc(ACE_epinephrine, 12);
		item_nc(ACE_tourniquet, 6);
	};
	
	class TransportMagazines {
		maga_nc(SP_30Rnd_9x19_L2A3_Sterling, 6);

		// L1A1 SLR
		maga_nc(UK3CB_BAF_762_20Rnd, 20);
		maga_nc(UK3CB_BAF_762_20Rnd_T, 5);

		// L7A1 GPMG
		maga_nc(UK3CB_BAF_762_100Rnd, 6);
		maga_nc(UK3CB_BAF_762_100Rnd_T, 2);

		maga_nc(ACE_HandFlare_White, 2);

		// Smoke Grenades
		maga_nc(SmokeShell, 10);
		maga_nc(SmokeShellRed, 2);
		maga_nc(SmokeShellGreen, 2);
		maga_nc(SmokeShellBlue, 2);
		maga_nc(SmokeShellYellow, 2);
		
		// Hand Grenade HE
		maga_nc(CUP_HandGrenade_L109A2_HE, 5);
	};
};

class TWC_AmmoBox_ColdWar_Section_Portable_COIN: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "Section Resupply (COIN, Portable)";
	
	editorSubcategory = "TWC_Crates_ColdWar";
	
	class TransportItems {
		item_nc(ACE_fieldDressing, 12);
		item_nc(ACE_elasticBandage, 12);
		item_nc(ACE_quikclot, 12);
		item_nc(ACE_packingBandage, 12);
		
		item_nc(ACE_morphine, 12);
		item_nc(ACE_epinephrine, 12);
		item_nc(ACE_tourniquet, 6);
	};
	
	class TransportMagazines {
		maga_nc(SP_30Rnd_9x19_L2A3_Sterling, 6);

		// L1A1 SLR
		maga_nc(UK3CB_BAF_762_20Rnd, 20);
		maga_nc(UK3CB_BAF_762_20Rnd_T, 5);

		// L7A1 GPMG
		maga_nc(SP_30Rnd_762_L4, 16);

		maga_nc(ACE_HandFlare_White, 2);

		// Smoke Grenades
		maga_nc(SmokeShell, 10);
		maga_nc(SmokeShellRed, 2);
		maga_nc(SmokeShellGreen, 2);
		maga_nc(SmokeShellBlue, 2);
		maga_nc(SmokeShellYellow, 2);
		
		// Hand Grenade HE
		maga_nc(CUP_HandGrenade_L109A2_HE, 5);
	};
};

class TWC_AmmoBox_ColdWar_Sniper_Portable: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "Sniper Resupply (Portable)";
	
	editorSubcategory = "TWC_Crates_ColdWar";
	
	class TransportItems {
		item_nc(ACE_fieldDressing, 4);
		item_nc(ACE_elasticBandage, 4);
		item_nc(ACE_quikclot, 4);
		item_nc(ACE_packingBandage, 4);
		
		item_nc(ACE_morphine, 2);
		item_nc(ACE_epinephrine, 2);
		item_nc(ACE_tourniquet, 2);
	};
	
	// TODO: Waiting on UKCW to release L33 3nfi3ld Sn1p0r
	class TransportMagazines {
		maga_nc(SP_10Rnd_762_L42, 6);
	};
};

class TWC_AmmoBox_ColdWar_Blowpipe_Portable: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "Blowpipe Resupply (Portable)";
	
	editorSubcategory = "TWC_Crates_ColdWar";
	
	class TransportItems {
		item_nc(ACE_fieldDressing, 4);
		item_nc(ACE_elasticBandage, 4);
		item_nc(ACE_quikclot, 4);
		item_nc(ACE_packingBandage, 4);
		
		item_nc(ACE_morphine, 2);
		item_nc(ACE_epinephrine, 2);
		item_nc(ACE_tourniquet, 2);
	};
	
	class TransportMagazines {
		maga_nc(SP_Blowpipe_round, 4);
	};
};