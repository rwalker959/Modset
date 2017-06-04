	class ColdWar_Base: B_Soldier_base_F
	{
		scope=1;
		displayName="Base";
		faction="TWC_ColdWar";
		editorSubcategory = "Men_ColdWar_Mounted";
		vehicleClass="Men_ColdWar_Mounted";
		icon="iconMan";
		nakedUniform="U_BasicBody";
		uniformClass="ukcw_p60_uniform";
		backpack="";
		linkedItems[]=
		{
			"ukcw_1958_webbing",
			"ukcw_helmet_mk3",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ukcw_1958_webbing",
			"ukcw_helmet_mk3",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		Items[]=
		{
			"ACE_EarPlugs",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_morphine",
			"ACE_epinephrine",
			"ACE_tourniquet",
			"ACE_tourniquet"
		};
		respawntems[]=
		{
			"ACE_EarPlugs",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_morphine",
			"ACE_epinephrine",
			"ACE_tourniquet",
			"ACE_tourniquet"		
		};		
	};
	class ColdWar_Rifleman: ColdWar_Base
	{
		scope=2;
		displayName="Rifleman";
		class EventHandlers: EventHandlers
		{
			init = "if(local (_this select 0)) then{(_this select 0) setVariable [""twc_deleteMap"",true]};";
		};
		weapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L1A1_Wood",
			"ukcw_L1A1_law"		
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L1A1_Wood",
			"ukcw_L1A1_law"	
		};
		magazines[]=
		{
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell"
		};
	};
	class ColdWar_Rifleman_SUIT: ColdWar_Rifleman
	{
		displayName="Rifleman SUIT";
		class EventHandlers: EventHandlers
		{
			init = "if(local (_this select 0)) then{(_this select 0) setVariable [""twc_deleteMap"",true]};";
		};
		weapons[]=
		{
			"Throw",
			"Put",	
			"twc_L1A1_SUIT",
			"ukcw_L1A1_law"		
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"twc_L1A1_SUIT",
			"ukcw_L1A1_law"	
		};
	};
	class ColdWar_AT: ColdWar_Rifleman
	{
		scope=2;
		displayName="AT Rifleman";
		icon="iconManAT";
		backpack="";
		class EventHandlers: EventHandlers
		{
			init = "if(local (_this select 0)) then{(_this select 0) setVariable [""twc_deleteMap"",true]};";
		};
		linkedItems[]=
		{
			"ukcw_1958_webbing",
			"ukcw_helmet_mk3",
			"CUP_optic_MAAWS_Scope",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ukcw_1958_webbing",
			"ukcw_helmet_mk3",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"ukcw_sterling_sub",
			"ukcw_l14a1"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"ukcw_sterling_sub",
			"ukcw_l14a1"
		};
		magazines[]=
		{
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_l14a1_HEAT",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_l14a1_HEAT",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell"
		};
	};
	class ColdWar_AT_Ass: ColdWar_Rifleman
	{
		displayName="AT Assistant Rifleman";
		backpack="TWC_Backpack_Cold_War_AT_Ass";
		class EventHandlers: EventHandlers
		{
			init = "if(local (_this select 0)) then{(_this select 0) setVariable [""twc_deleteMap"",true]};";
		};
		weapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L1A1_Wood"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L1A1_Wood"
		};
	};
	class ColdWar_2IC: ColdWar_Rifleman
	{
		displayName="2IC";
		backpack="TWC_Backpack_Cold_War_2IC";
		class EventHandlers: EventHandlers
		{
			init = "if(local (_this select 0)) then{(_this select 0) setVariable [""twc_deleteMap"",true]};";
		};
		weapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L1A1_Wood"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L1A1_Wood"
		};
	};
	class ColdWar_MG: ColdWar_Base
	{
		scope=2;
		displayName="Machine Gunner";
		icon="iconManMG";
		backpack="";
		class EventHandlers: EventHandlers
		{
			init = "if(local (_this select 0)) then{(_this select 0) setVariable [""twc_deleteMap"",true]};";
		};
		weapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L7A2"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L7A2"
		};
		magazines[]=
		{
			"UK3CB_BAF_762_100Rnd",	
			"UK3CB_BAF_762_100Rnd",
			"UK3CB_BAF_762_100Rnd_T",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_762_100Rnd",	
			"UK3CB_BAF_762_100Rnd",
			"UK3CB_BAF_762_100Rnd",
			"SmokeShell",
			"SmokeShell"
		};		
	};
	class ColdWar_MG_AS: ColdWar_Rifleman
	{
		displayName="Machine Gunner Assistant";
		backpack="TWC_Backpack_Cold_War_MG";
		class EventHandlers: EventHandlers
		{
			init = "if(local (_this select 0)) then{(_this select 0) setVariable [""twc_deleteMap"",true]};";
		};
		weapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L1A1_Wood"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L1A1_Wood"
		};
	};
	class ColdWar_Section_Leader: ColdWar_Rifleman
	{
		displayName="Section Leader";
		icon="iconManLeader";
		backpack="TWC_Backpack_Cold_War_Section";
		linkedItems[]=
		{
			"Binocular",		
			"ukcw_1958_webbing",
			"ukcw_helmet_mk3",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"Binocular",		
			"ukcw_1958_webbing",
			"ukcw_helmet_mk3",
			"ItemMap",	
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"Binocular",
			"UK3CB_BAF_L1A1_Wood"			
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"Binocular",
			"UK3CB_BAF_L1A1_Wood"			
		};
		magazines[]=
		{
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd_T",
			"UK3CB_BAF_762_20Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd_T",
			"UK3CB_BAF_762_20Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE"
		};	
	};
	class ColdWar_Platoon_Commander: ColdWar_Section_Leader
	{
		displayName="Platoon Commander";
		weapons[]=
		{
			"Throw",
			"Put",
			"Binocular",
			"ukcw_sterling_sub"		
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"Binocular",
			"ukcw_sterling_sub"			
		};
		magazines[]=
		{
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE"
		};
		Respawnmagazines[]=
		{
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE"
		};
	};
	class ColdWar_Sergeant: ColdWar_Platoon_Commander
	{
		displayName="Platoon Sergeant";
		backpack="TWC_Backpack_Cold_War_Platoon_Sergeant";
	};
	class ColdWar_CSM: ColdWar_Platoon_Commander
	{
		displayName="Company Sergeant Major";
		class EventHandlers: EventHandlers
		{
			init = "if(local (_this select 0)) then{(_this select 0) setVariable [""twc_isMolar"",true]};";
		};
	};
	class ColdWar_Medic: ColdWar_Base
	{
		scope=2;
		displayName="Platoon Medic";
		icon="iconManMedic";
		backpack="TWC_Backpack_Cold_Medic";
		weapons[]=
		{
			"Throw",
			"Put",
			"ukcw_sterling_sub"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"ukcw_sterling_sub"
		};
		magazines[]=
		{
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
		};
		class EventHandlers: EventHandlers
		{
			init = "init = if(local (_this select 0))then{(_this select 0) setVariable [""ace_medical_medicClass"",1]; (_this select 0) setVariable [""twc_deleteMap"",true]};";
		};
	};
	class ColdWar_FAC: ColdWar_Section_Leader
	{
		displayName="Platoon FAC";
		backpack="TWC_Backpack_Cold_War_FAC";
	};
	class ColdWar_HeliPilot: ColdWar_Base
	{
		scope=2;
		displayName="Helicopter Pilot";
		uniformClass="UK3CB_BAF_B_Carryall_OLI";
		backpack="B_AssaultPack_blk";
		linkedItems[]=
		{
			"UK3CB_BAF_H_PilotHelmetHeli_A",
			"UK3CB_BAF_V_Pilot_DPMW",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_H_PilotHelmetHeli_A",
			"UK3CB_BAF_V_Pilot_DPMW",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"ukcw_sterling_sub"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"ukcw_sterling_sub"
		};
		magazines[]=
		{
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"SmokeShell",
			"SmokeShell"
		};
	};
	class ColdWar_JetPilot: ColdWar_HeliPilot
	{
		displayName="Jet Pilot";
		uniformClass="UK3CB_BAF_U_HeliPilotCoveralls_RAF";
		backpack="B_AssaultPack_blk";
		linkedItems[]=
		{
			"UK3CB_BAF_H_PilotHelmetHeli_A",
			"CUP_V_B_PilotVest",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_H_PilotHelmetHeli_A",
			"CUP_V_B_PilotVest",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put"		
		};
		respawnweapons[]=
		{
			"Throw",
			"Put"		
		};
		magazines[]=
		{
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"SmokeShell",
			"SmokeShell"
		};
	};
	class ColdWar_AA_Gunner: ColdWar_AT
	{
		displayName="AA Gunner";
		faction="TWC_ColdWar";
		editorSubcategory = "Men_ColdWar_Dismounted";
		vehicleClass="Men_ColdWar_Dismounted";
		icon="iconManExplosive";
		backpack="TWC_Backpack_Cold_War_AA";
		class EventHandlers: EventHandlers
		{
			init = "if(local (_this select 0)) then{(_this select 0) setVariable [""twc_deleteMap"",true]};";
		};
		linkedItems[]=
		{
			"ukcw_1958_webbing",
			"ukcw_helmet_mk3",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ukcw_1958_webbing",
			"ukcw_helmet_mk3",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put",	
			"ukcw_sterling_sub",
			"ukcw_blowpipe"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"ukcw_sterling_sub",
			"ukcw_blowpipe"
		};	
	};
	class ColdWar_AA_Assistant: ColdWar_AA_Gunner
	{
		displayName="AA Assistant";
		class EventHandlers: EventHandlers
		{
			init = "if(local (_this select 0)) then{(_this select 0) setVariable [""twc_deleteMap"",true]};";
		};
		weapons[]=
		{
			"Throw",
			"Put",	
			"ukcw_sterling_sub"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"ukcw_sterling_sub"
		};
	};
	class ColdWar_MilanGunner: ColdWar_AT
	{
		displayName="Milan Gunner";
		editorSubcategory = "Men_ColdWar_Dismounted";
		vehicleClass="Men_ColdWar_Dismounted";
		backpack="TWC_Backpack_Cold_War_Milan";
		class EventHandlers: EventHandlers
		{
			init = "if(local (_this select 0)) then{(_this select 0) setVariable [""twc_deleteMap"",true]};";
		};
		weapons[]=
		{
			"Throw",
			"Put",	
			"ukcw_sterling_sub",
			"TWC_Milan_Tripod_Disassemabled"	
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"ukcw_sterling_sub",
			"TWC_Milan_Tripod_Disassemabled"
		};
	};
	class ColdWar_MilanAssistant: ColdWar_MilanGunner
	{
		displayName="Milan Assistant";
		class EventHandlers: EventHandlers
		{
			init = "if(local (_this select 0)) then{(_this select 0) setVariable [""twc_deleteMap"",true]};";
		};
		weapons[]=
		{
			"Throw",
			"Put",	
			"ukcw_sterling_sub",
			"TWC_Milan_Launcher_Disassemabled"	
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"ukcw_sterling_sub",
			"TWC_Milan_Launcher_Disassemabled"
		};
	};
	class ColdWar_Tank_Commander: ColdWar_Base
	{
		scope=2;
		displayName="Tank Commander";
		icon="iconManLeader";
		uniformClass="UK3CB_BAF_U_CrewmanCoveralls_RTR";
		backpack="B_AssaultPack_blk";
		linkedItems[]=
		{
			"CUP_V_C_Police_Holster",
			"UK3CB_BAF_H_Beret_RTR_PRR_Over",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
       		"CUP_V_C_Police_Holster",
			"UK3CB_BAF_H_Beret_RTR_PRR_Over",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put",	
			"ukcw_sterling_sub"	
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"ukcw_sterling_sub"
		};
		magazines[]=
		{
		"ukcw_34_rnd_sterling_mag",
		"ukcw_34_rnd_sterling_mag",
		"ukcw_34_rnd_sterling_mag",
		"ukcw_34_rnd_sterling_mag",
		"SmokeShell",
		"SmokeShell"
		};
		Respawnmagazines[]=
		{
		"ukcw_34_rnd_sterling_mag",
		"ukcw_34_rnd_sterling_mag",
		"ukcw_34_rnd_sterling_mag",
		"ukcw_34_rnd_sterling_mag",
		"SmokeShell",
		"SmokeShell"
		};
	};
	class ColdWar_Tank_Crewman: ColdWar_Tank_Commander
	{
		displayName="Tank Crew";
		icon="iconMan";
		backpack="";
		linkedItems[]=
		{
			"CUP_V_C_Police_Holster",
			"UK3CB_BAF_H_Beret_RTR",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_C_Police_Holster",
			"UK3CB_BAF_H_Beret_RTR",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
	};
	class ColdWar_Vehicle_Commander: ColdWar_Tank_Commander
	{
		displayName="Vehicle Commander";
		uniformClass="ukcw_p60_uniform";
		linkedItems[]=
		{
			"CUP_V_C_Police_Holster",
			"CUP_H_BAF_Officer_Beret",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
       		"CUP_V_C_Police_Holster",
			"CUP_H_BAF_Officer_Beret",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
	};
	class ColdWar_Vehicle_Crewman: ColdWar_Vehicle_Commander
	{
		displayName="Vehicle Crew";
		icon="iconMan";
		backpack="";
		linkedItems[]=
		{
			"CUP_V_C_Police_Holster",
			"CUP_H_BAF_Officer_Beret",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_C_Police_Holster",
			"CUP_H_BAF_Officer_Beret",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};		
	};
	////////////////////// DISMOUNTED ////////////////////
	class ColdWar_Rifleman_Dismounted: ColdWar_Rifleman
	{
		displayName="Rifleman (Dismounted)";
		editorSubcategory = "Men_ColdWar_Dismounted";
		vehicleClass="Men_ColdWar_Dismounted";
		backpack="TWC_Backpack_Cold_War_Rifleman";
		class EventHandlers: EventHandlers
		{
			init = "if(local (_this select 0)) then{(_this select 0) setVariable [""twc_deleteMap"",true]};";
		};
	};
	class ColdWar_Rifleman_SUIT_Dismounted: ColdWar_Rifleman_SUIT
	{
		displayName="Rifleman (Dismounted)";
		editorSubcategory = "Men_ColdWar_Dismounted";
		vehicleClass="Men_ColdWar_Dismounted";
		backpack="TWC_Backpack_Cold_War_Rifleman";
		class EventHandlers: EventHandlers
		{
			init = "if(local (_this select 0)) then{(_this select 0) setVariable [""twc_deleteMap"",true]};";
		};
	};
	class ColdWar_AT_Dismounted: ColdWar_AT
	{
		displayName="AT Rifleman (Dismounted)";
		editorSubcategory = "Men_ColdWar_Dismounted";
		vehicleClass="Men_ColdWar_Dismounted";
		backpack="TWC_Backpack_Cold_War_AT";
		class EventHandlers: EventHandlers
		{
			init = "if(local (_this select 0)) then{(_this select 0) setVariable [""twc_deleteMap"",true]};";
		};
	};
	class ColdWar_AT_Ass_Dismounted: ColdWar_AT_Ass
	{
		displayName="AT Assistant (Dismounted)";
		editorSubcategory = "Men_ColdWar_Dismounted";
		vehicleClass="Men_ColdWar_Dismounted";
		backpack="TWC_Backpack_Cold_War_AT_Ass_Dismounted";
		class EventHandlers: EventHandlers
		{
			init = "if(local (_this select 0)) then{(_this select 0) setVariable [""twc_deleteMap"",true]};";
		};
	};
	class ColdWar_2IC_Dismounted: ColdWar_2IC
	{
		displayName="2IC (Dismounted)";
		editorSubcategory = "Men_ColdWar_Dismounted";
		vehicleClass="Men_ColdWar_Dismounted";
		backpack="TWC_Backpack_Cold_War_2IC_Dismounted";
		class EventHandlers: EventHandlers
		{
			init = "if(local (_this select 0)) then{(_this select 0) setVariable [""twc_deleteMap"",true]};";
		};
	};
	class ColdWar_MG_Dismounted: ColdWar_MG
	{
		displayName="Machine Gunner (Dismounted)";
		editorSubcategory = "Men_ColdWar_Dismounted";
		vehicleClass="Men_ColdWar_Dismounted";
		backpack="TWC_Backpack_Cold_War_MG";
		class EventHandlers: EventHandlers
		{
			init = "if(local (_this select 0)) then{(_this select 0) setVariable [""twc_deleteMap"",true]};";
		};
	};
	class ColdWar_MG_Ass_Dismounted: ColdWar_MG_AS
	{
		displayName="MG Assistant (Dismounted)";
		editorSubcategory = "Men_ColdWar_Dismounted";
		vehicleClass="Men_ColdWar_Dismounted";
		backpack="TWC_Backpack_Cold_War_MGAss";
		class EventHandlers: EventHandlers
		{
			init = "if(local (_this select 0)) then{(_this select 0) setVariable [""twc_deleteMap"",true]};";
		};
	};