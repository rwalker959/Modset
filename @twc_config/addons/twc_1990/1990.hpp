	class 1990_British_Base: B_Soldier_base_F
	{
		scope=1;
		displayName="Base (90`s Woodland)";
		faction="twc_faction";
		editorSubcategory = "Men_1990W";
		vehicleClass="Men_1990W";
		icon="iconMan";
		nakedUniform="U_BasicBody";
		uniformClass="TWC_Smock_Temperate";
		linkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DPMT",
			"UK3CB_BAF_H_Mk6_DPMT_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DPMT",
			"UK3CB_BAF_H_Mk6_DPMT_A",
			"ItemMap",
			"ItemCompass",
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
			"ACE_tourniquet",
			"ACE_MapTools",
			"ACRE_PRC343"	
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
			"ACE_tourniquet",
			"ACRE_PRC343"	
		};		
	};
	class 1990_British_SectionCommander: 1990_British_Base
	{
		scope=2;
		displayName="Section Leader (90`s Woodland)";
		icon="iconManLeader";
		backpack="TWC_Backpack_1990_Sectionlead";
		weapons[]=
		{
			"Throw",
			"Put",
			"ACE_Vector",
			"UK3CB_BAF_L85A1_SUSAT3D_Lazer"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"ACE_Vector",
			"UK3CB_BAF_L85A1_SUSAT3D_Lazer"
		};
		magazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell"
		};
	};
	class 1990_British_Rifleman: 1990_British_Base
	{
		scope=2;
		displayName="RifleMan(90`s Woodland)";
		backpack="TWC_Backpack_1990_Rifleman";
		weapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A1_SUSAT3D"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A1_SUSAT3D"
		};
		magazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell"
		};	
	};
	class 1990_British_Rifleman_AT: 1990_British_Base
	{
		scope=2;
		displayName="RifleMan AT(90`s Woodland)";
		backpack="";
		weapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A1_SUSAT3D",
			"ukf_law80launcher"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A1_SUSAT3D",
			"ukf_law80launcher"
		};
		magazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell"
		};	
	};
	class 1990_British_Gunner: 1990_British_Base
	{
		scope=2;
		displayName="Gunner (90`s Woodland)";
		icon="iconManMG";
		backpack="TWC_Backpack_1990_Gunner";
		weapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L86A1_SUSAT3D"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L86A1_SUSAT3D"
		};
		magazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell"
		};
	};
	class 1990_British_2IC: 1990_British_Rifleman
	{
		displayName="2IC(90`s Woodland)";
		backpack="TWC_Backpack_1990_2IC";
	};
	class 1990_British_Platoon_Commander: 1990_British_Base
	{
		scope=2;
		displayName="Platoon Commander(90`s Woodland)";
		backpack="TWC_Backpack_1990_Platoon_Command";
		weapons[]=
		{
			"Throw",
			"Put",
			"Binocular",
			"UK3CB_BAF_L85A1_SUSAT3D"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"Binocular",
			"UK3CB_BAF_L85A1_SUSAT3D"
		};
		magazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE"
		};
	};
	class 1990_British_Platoon_Sergeant: 1990_British_Platoon_Commander
	{
		displayName="Platoon Sergeant(90`s Woodland)";
		backpack="TWC_Backpack_1990_Platoon_Sergeant";
	};
	class 1990_British_Platoon_CSM: 1990_British_Platoon_Commander
	{
		displayName="Company Sergeant Major(90`s Woodland)";
		class EventHandlers: EventHandlers
		{
			init = "if(local (_this select 0)) then{(_this select 0) setVariable [""twc_isMolar"",true]};";
		};
	};
	class 1990_British_Medic: 1990_British_Base
	{
		scope=2;
		displayName="Medic(90`s Woodland)";
		backpack="TWC_Backpack_1990_Medic";
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
			init = "init = if(local (_this select 0))then{(_this select 0) setVariable [""ace_medical_medicClass"",1]};";
		};
	};
	class 1990_British_HeliPilot: 1990_British_Base
	{
		scope=2;
		displayName="Helicopter Pilot (90`s Woodland)";
		backpack="B_AssaultPack_blk";
		linkedItems[]=
		{
			"UK3CB_BAF_H_PilotHelmetHeli_A",
			"UK3CB_BAF_V_Pilot_DPMT",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_H_PilotHelmetHeli_A",
			"UK3CB_BAF_V_Pilot_DPMT",
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
			"ukcw_34_rnd_sterling_mag",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"SmokeShell",
			"SmokeShell"

		};
	};
	class 1990_British_JetPilot: 1990_British_HeliPilot
	{
		displayName="Jet Pilot (90`s Woodland)";
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
	class 1990_British_MilanGunner: 1990_British_Base
	{
		scope=2;
		displayName="Milan Gunner (90`s Woodland)";
		backpack="TWC_Backpack_1990_Milan";
		weapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A1_SUSAT3D",
			"TWC_Milan_Tripod_Disassemabled"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"ukcw_sterling_sub",
			"TWC_Milan_Tripod_Disassemabled"
		};
		magazines[]=
		{
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"SmokeShell"
		};
	};
	class 1990_British_MilanAssistant: 1990_British_MilanGunner
	{
		displayName="Milan Assistant(90`s Woodland)";
		backpack="TWC_Backpack_1990_Milan";
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
			"UK3CB_BAF_L85A1_SUSAT3D",
			"TWC_Milan_Launcher_Disassemabled"
		};
	};
	class 1990_British_MortarGunner: 1990_British_Rifleman
	{
		displayName="Mortar Gunner(90`s Woodland)";
		backpack="TWC_Backpack_1990_Mortar";
		weapons[]=
		{
			"Throw",
			"Put",
			"ukcw_sterling_sub",
			"UK3CB_BAF_M6"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"ukcw_sterling_sub",
			"UK3CB_BAF_M6"
		};
		magazines[]=
		{
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"SmokeShell",
			"UK3CB_BAF_1Rnd_60mm_Mo_Smoke_White",
			"UK3CB_BAF_1Rnd_60mm_Mo_Smoke_White"
		};
		Respawnmagazines[]=
		{
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"SmokeShell",
			"UK3CB_BAF_1Rnd_60mm_Mo_Smoke_White",
			"UK3CB_BAF_1Rnd_60mm_Mo_Smoke_White"
		};	
	};
	class 1990_British_CGG: 1990_British_Rifleman
	{
		displayName="Carl-Gustaf Gunner (90`s Woodland)";
		backpack="TWC_Backpack_1990_CG";
		weapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A1_SUSAT3D",
			"TWC_Carl_Gustav"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A1_SUSAT3D",
			"TWC_Carl_Gustav"
		};
	};
	class 1990_British_CGAss: 1990_British_Rifleman
	{
		displayName="Carl-Gustaf Assistant(90`s Woodland)";
		backpack="TWC_Backpack_1990_CGAss";
	};
	
//////////////////////////////  Mounted  //////////////////////////////
	class 1990_British_Rifleman_Mounted: 1990_British_Rifleman
	{
		displayName="Rifleman (90's Mounted)";
		backpack="";
	};
	class 1990_British_Rifleman_AT_Mounted: 1990_British_Rifleman_AT
	{
		displayName="Rifleman AT (90's Mounted)";
		backpack="";
	};
	class 1990_British_Gunner_Mounted: 1990_British_Gunner
	{
		displayName="Gunner (90's Mounted)";
		backpack="";
	};
	class 1990_British_2IC_Mounted: 1990_British_Gunner
	{
		displayName="2IC (90's Mounted)";
		backpack="TWC_Backpack_1990_2IC_Mounted";
	};
	class 1990_British_Vehicle_Commander: 1990_British_Base
	{
		displayName="Vehicle Commander(90`s Woodland)";
		uniformClass="UK3CB_BAF_U_CombatUniform_DPMT";
		backpack="B_AssaultPack_blk";
		linkedItems[]=
		{
			"UK3CB_BAF_V_Pilot_DPMT",
			"UK3CB_BAF_H_CrewHelmet_DPMT",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_Pilot_DPMT",
			"UK3CB_BAF_H_CrewHelmet_DPMT",
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
			"ukcw_34_rnd_sterling_mag",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"SmokeShell",
			"SmokeShell"
		};
	};
    class 1990_British_Vehicle_Crew: 1990_British_Vehicle_Commander
	{
		displayName="Vehicle Crew(90`s Woodland)";
		backpack="";
	};
//////////////////////////////////////////////////////////////////
//                                                              //
//                    1990 Desert British                       //
//                                                              //
//////////////////////////////////////////////////////////////////

	class 1990_British_SectionCommander_Desert: 1990_British_SectionCommander
	{
		displayName="Section Leader(90`s Desert)";
		editorSubcategory = "Men_1990D";
		vehicleClass="Men_1990D";
		uniformClass="TWC_Smock_Desert";
		backpack="TWC_Backpack_1990_Sectionlead_Desert";
		linkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 1990_British_Rifleman_Desert: 1990_British_Rifleman
	{
		displayName="RifleMan(90`s Desert)";
		editorSubcategory = "Men_1990D";
		vehicleClass="Men_1990D";
		uniformClass="TWC_Smock_Desert";
		backpack="";
		linkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 1990_British_Rifleman_AT_Desert: 1990_British_Rifleman
	{
		displayName="RifleMan AT(90`s Desert)";
		editorSubcategory = "Men_1990D";
		vehicleClass="Men_1990D";
		uniformClass="TWC_Smock_Desert";
		backpack="";
		linkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 1990_British_Gunner_Desert: 1990_British_Gunner
	{
		displayName="Gunner(90`s Desert)";
		editorSubcategory = "Men_1990D";
		vehicleClass="Men_1990D";
		uniformClass="TWC_Smock_Desert";
		backpack="TWC_Backpack_1990_Gunner_Desert";
		linkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 1990_British_2IC_Desert: 1990_British_2IC
	{
		displayName="2IC (90`s Desert)";
		editorSubcategory = "Men_1990D";
		vehicleClass="Men_1990D";
		uniformClass="TWC_Smock_Desert";
		backpack="TWC_Backpack_1990_2IC_Desert";
		linkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 1990_British_Platoon_Commander_Desert: 1990_British_Platoon_Commander
	{
		displayName="Platoon Commander(90`s Desert)";
		editorSubcategory = "Men_1990D";
		vehicleClass="Men_1990D";
		uniformClass="TWC_Smock_Desert";
		backpack="TWC_Backpack_1990_Platoon_Command_Desert";
		linkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 1990_British_Platoon_Sergeant_Desert: 1990_British_Platoon_Sergeant
	{
		scope=2;
		displayName="Platoon Sergeant(90`s Desert)";
		editorSubcategory = "Men_1990D";
		vehicleClass="Men_1990D";
		uniformClass="TWC_Smock_Desert";
		backpack="TWC_Backpack_1990_Platoon_Sergeant_Desert";
		linkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 1990_British_Platoon_CSM_Desert: 1990_British_Platoon_Commander_Desert
	{
		displayName="Company Sergeant Major(90`s Desert)";
		class EventHandlers: EventHandlers
		{
			init = "if(local (_this select 0)) then{(_this select 0) setVariable [""twc_isMolar"",true]};";
		};
	};
	class 1990_British_Medic_Desert: 1990_British_Medic
	{
		displayName="Medic(90`s Desert)";
		editorSubcategory = "Men_1990D";
		vehicleClass="Men_1990D";
		uniformClass="TWC_Smock_Desert";
		backpack="TWC_Backpack_1990_Medic_Desert";
		linkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		class EventHandlers: EventHandlers
		{
			init = "init = if(local (_this select 0))then{(_this select 0) setVariable [""ace_medical_medicClass"",1]};";
		};
	};
    class 1990_British_HeliPilot_Desert: 1990_British_HeliPilot
	{
		displayName="Helicopter Pilot(90`s Desert)";
		editorSubcategory = "Men_1990D";
		vehicleClass="Men_1990D";
		uniformClass="TWC_Smock_Desert";
		linkedItems[]=
		{
			"UK3CB_BAF_H_PilotHelmetHeli_A",
			"UK3CB_BAF_V_Pilot_DDPM",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_H_PilotHelmetHeli_A",
			"UK3CB_BAF_V_Pilot_DDPM",
			"ItemMap",		
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 1990_British_MilanGunner_Desert: 1990_British_MilanGunner
	{
		displayName="Milan Gunner(90`s Desert)";
		editorSubcategory = "Men_1990D";
		vehicleClass="Men_1990D";
		uniformClass="TWC_Smock_Desert";
		backpack="TWC_Backpack_1990_Milan_Desert";
		linkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 1990_British_MilanAssistant_Desert: 1990_British_MilanAssistant
	{
		displayName="Milan Assistant(90`s Desert)";
		editorSubcategory = "Men_1990D";
		vehicleClass="Men_1990D";
		uniformClass="TWC_Smock_Desert";
		backpack="TWC_Backpack_1990_Milan_Desert";
		linkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 1990_British_MortarGunner_Desert: 1990_British_MortarGunner
	{
		displayName="Mortar Gunner(90`s Desert)";
		editorSubcategory = "Men_1990D";
		vehicleClass="Men_1990D";
		uniformClass="TWC_Smock_Desert";
		backpack="TWC_Backpack_1990_Mortar_Desert";
		linkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};	
	};
	class 1990_British_CGG_Desert: 1990_British_CGG
	{
		displayName="Carl-Gustaf Gunner (90`s Desert)";
		backpack="TWC_Backpack_1990_CG_Desert";
		weapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A1_SUSAT3D",
			"TWC_Carl_Gustav"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A1_SUSAT3D",
			"TWC_Carl_Gustav"
		};
	};
	class 1990_British_CGAss_Desert: 1990_British_CGAss
	{
		displayName="Carl-Gustaf Assistant(90`s Desert)";
		backpack="TWC_Backpack_1990_CGAss_Desert";
	};
//////////////////////////////  Mounted  //////////////////////////////
	class 1990_British_Rifleman_Mounted_Desert: 1990_British_Rifleman_Desert
	{
		displayName="Rifleman (90's Mounted Desert)";
		backpack="";
	};
	class 1990_British_Rifleman_AT_Mounted_Desert: 1990_British_Rifleman_AT_Desert
	{
		displayName="Rifleman AT (90's Mounted Desert)";
		backpack="";
	};
	class 1990_British_Gunner_Mounted_Desert: 1990_British_Gunner_Desert
	{
		displayName="Gunner (90's Mounted Desert)";
		backpack="";
	};
	class 1990_British_2IC_Mounted_Desert: 1990_British_Gunner_Desert
	{
		displayName="2IC (90's Mounted Desert)";
		backpack="TWC_Backpack_1990_2IC_Desert_Mounted";
	};
    class 1990_British_Vehicle_Commander_Desert: 1990_British_Vehicle_Commander
	{
		displayName="Vehicle Commander (90`s Desert)";
		editorSubcategory = "Men_1990D";
		vehicleClass="Men_1990D";
		uniformClass="TWC_Smock_Desert";
		linkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_CrewHelmet_DDPM_ESS_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_CrewHelmet_DDPM_ESS_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
	};
    class 1990_British_Vehicle_Crew_Desert: 1990_British_Vehicle_Crew
	{
		displayName="Vehicle Crew (90`s Desert)";
		editorSubcategory = "Men_1990D";
		vehicleClass="Men_1990D";
		uniformClass="TWC_Smock_Desert";
		linkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_CrewHelmet_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_CrewHelmet_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
	};
	class 1990_British_Tank_Commander_Desert: B_Soldier_base_F
	{
		_generalMacro="1990_Desert_British_Tank Commander";
		scope=2;
		displayName="Vehicle Commander(90`s Desert)";
		faction="twc_faction";
		editorSubcategory = "Men_1990D";
		vehicleClass="Men_1990D";
		icon="iconMan";
		nakedUniform="U_BasicBody";
		uniformClass="TWC_Smock_Desert";
		backpack="TWC_Backpack_1990_Platoon_Command";
		linkedItems[]=
		{
        "UK3CB_BAF_V_PLCE_Webbing_DDPM",
		"UK3CB_BAF_H_CrewHelmet_DDPM_ESS_A",
		"ItemMap",
		"ItemCompass",
		"ItemWatch"
		};
		respawnLinkedItems[]=
		{
        "UK3CB_BAF_V_PLCE_Webbing_DDPM",
		"UK3CB_BAF_H_CrewHelmet_DDPM_ESS_A",
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
		"SmokeShell",
		"SmokeShell"
		};
		Respawnmagazines[]=
		{
		"ukcw_34_rnd_sterling_mag",
		"ukcw_34_rnd_sterling_mag",
		"SmokeShell",
		"SmokeShell",
		"SmokeShell"
		};
		Items[]=
		{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_packingBandage",
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
		"ACE_elasticBandage",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_morphine",
		"ACE_morphine",
		"ACE_tourniquet",
		"ACE_EarPlugs",
		"UK3CB_BAF_HMNVS"
		};
		respawntems[]=
		{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_morphine",
		"ACE_morphine",
		"ACE_Flashlight_KSF1",
		"ACE_IR_Strobe_Item",
	    "ACE_MapTools",
		"UK3CB_BAF_HMNVS",
		"ACRE_PRC148",
		"ACE_EarPlugs"
		};
	};
    class 1990_British_Tank_Crew_Desert: B_Soldier_base_F
	{
		_generalMacro="1990_Desert_Tank_Crew";
		scope=2;
		displayName="Vehicle Crew(90`s Desert)";
		faction="twc_faction";
		editorSubcategory = "Men_1990D";
		vehicleClass="Men_1990D";
		icon="iconMan";
		nakedUniform="U_BasicBody";
		uniformClass="TWC_Smock_Desert";
		linkedItems[]=
		{
        "UK3CB_BAF_V_PLCE_Webbing_DDPM",
		"UK3CB_BAF_H_CrewHelmet_DDPM_A",
		"ItemMap",
		"ItemCompass",
		"ItemWatch"
		};
		respawnLinkedItems[]=
		{
        "UK3CB_BAF_V_PLCE_Webbing_DDPM",
		"UK3CB_BAF_H_CrewHelmet_DDPM_A",
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
		"SmokeShell",
		"SmokeShell"
		};
		Respawnmagazines[]=
		{
		"ukcw_34_rnd_sterling_mag",
		"ukcw_34_rnd_sterling_mag",
		"SmokeShell",
		"SmokeShell",
		"SmokeShell"
		};
		Items[]=
		{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_packingBandage",
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
		"ACE_elasticBandage",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_morphine",
		"ACE_morphine",
		"ACE_tourniquet",
		"ACE_EarPlugs",
		"UK3CB_BAF_HMNVS"
		};
		respawntems[]=
		{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_morphine",
		"ACE_morphine",
		"ACE_EarPlugs",
		"ACRE_PRC148",
		"UK3CB_BAF_HMNVS"		
		};
	};