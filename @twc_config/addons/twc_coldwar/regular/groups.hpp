#define REGULAR_GROUPS(CAMO) \
class TWC_Groups_ColdWar_Regular_##CAMO \
{ \
	name = __EVAL("Infantry (" + #CAMO + ")"); \
	class Section \
	{ \
		name = "Section"; \
		faction = "TWC_ColdWar"; \
		side = 1; \
		class Unit0 \
		{ \
				side = 1; \
				vehicle = TWC_Infantry_ColdWar_Regular_##CAMO##_SectionCommander; \
				rank = "SERGEANT"; \
				position[] = {0,0,0}; \
		}; \
		class Unit1 \
		{ \
				side = 1; \
				vehicle = TWC_Infantry_ColdWar_Regular_##CAMO##_Rifleman; \
				rank = "PRIVATE"; \
				position[] = {2,0,0}; \
		}; \
		class Unit2 \
		{ \
				side = 1; \
				vehicle = TWC_Infantry_ColdWar_Regular_##CAMO##_Rifleman_SUIT; \
				rank = "PRIVATE"; \
				position[] = {4,0,0}; \
		}; \
		class Unit3 \
		{ \
				side = 1; \
				vehicle = TWC_Infantry_ColdWar_Regular_##CAMO##_AT; \
				rank = "PRIVATE"; \
				position[] = {6,0,0}; \
		}; \
		class Unit4 \
		{ \
				side = 1; \
				vehicle = TWC_Infantry_ColdWar_Regular_##CAMO##_ASSAT; \
				rank = "PRIVATE"; \
				position[] = {8,0,0}; \
		}; \
		class Unit5 \
		{ \
				side = 1; \
				vehicle = TWC_Infantry_ColdWar_Regular_##CAMO##_2iC; \
				rank = "CORPORAL"; \
				position[] = {10,0,0}; \
		}; \
		class Unit6 \
		{ \
				side = 1; \
				vehicle = TWC_Infantry_ColdWar_Regular_##CAMO##_MG; \
				rank = "PRIVATE"; \
				position[] = {12,0,0}; \
		}; \
		class Unit7 \
		{ \
				side = 1; \
				vehicle = TWC_Infantry_ColdWar_Regular_##CAMO##_ASSMG; \
				rank = "PRIVATE"; \
				position[] = {14,0,0}; \
		}; \
	}; \
	class Section_Mechanised \
	{ \
		name = "Section (Mechanised)"; \
		faction = "TWC_ColdWar"; \
		side = 1; \
		class Unit0 \
		{ \
				side = 1; \
				vehicle = TWC_Infantry_ColdWar_Regular_##CAMO##_SectionCommander; \
				rank = "SERGEANT"; \
				position[] = {0,0,0}; \
		}; \
		class Unit1 \
		{ \
				side = 1; \
				vehicle = TWC_Infantry_ColdWar_Regular_##CAMO##_Rifleman; \
				rank = "PRIVATE"; \
				position[] = {2,0,0}; \
		}; \
		class Unit2 \
		{ \
				side = 1; \
				vehicle = TWC_Infantry_ColdWar_Regular_##CAMO##_Rifleman_SUIT; \
				rank = "PRIVATE"; \
				position[] = {4,0,0}; \
		}; \
		class Unit3 \
		{ \
				side = 1; \
				vehicle = TWC_Infantry_ColdWar_Regular_##CAMO##_AT; \
				rank = "PRIVATE"; \
				position[] = {6,0,0}; \
		}; \
		class Unit4 \
		{ \
				side = 1; \
				vehicle = TWC_Infantry_ColdWar_Regular_##CAMO##_ASSAT; \
				rank = "PRIVATE"; \
				position[] = {8,0,0}; \
		}; \
		class Unit5 \
		{ \
				side = 1; \
				vehicle = TWC_Infantry_ColdWar_Regular_##CAMO##_2iC; \
				rank = "CORPORAL"; \
				position[] = {10,0,0}; \
		}; \
		class Unit6 \
		{ \
				side = 1; \
				vehicle = TWC_Infantry_ColdWar_Regular_##CAMO##_MG; \
				rank = "PRIVATE"; \
				position[] = {12,0,0}; \
		}; \
		class Unit7 \
		{ \
				side = 1; \
				vehicle = TWC_Infantry_ColdWar_Regular_##CAMO##_ASSMG; \
				rank = "PRIVATE"; \
				position[] = {14,0,0}; \
		}; \
		class Unit8 \
		{ \
				side = 1; \
				vehicle = TWC_Infantry_ColdWar_Regular_##CAMO##_Vehicle_Commander; \
				rank = "CORPORAL"; \
				position[] = {16,0,0}; \
		}; \
		class Unit9 \
		{ \
				side = 1; \
				vehicle = TWC_Infantry_ColdWar_Regular_##CAMO##_Vehicle_Crew; \
				rank = "CORPORAL"; \
				position[] = {18,0,0}; \
		}; \
	}; \
	class Platoon_Command \
	{ \
		name = "Platoon Command"; \
		faction = "TWC_ColdWar"; \
		side = 1; \
		class Unit0 \
		{ \
				side = 1; \
				vehicle = TWC_Infantry_ColdWar_Regular_##CAMO##_Platoon_Commander; \
				rank = "MAJOR"; \
				position[] = {0,0,0}; \
		}; \
		class Unit1 \
		{ \
				side = 1; \
				vehicle = TWC_Infantry_ColdWar_Regular_##CAMO##_Platoon_Sergeant; \
				rank = "LIEUTENANT"; \
				position[] = {2,0,0}; \
		}; \
		class Unit2 \
		{ \
				side = 1; \
				vehicle = TWC_Infantry_ColdWar_Regular_##CAMO##_Platoon_Medic; \
				rank = "PRIVATE"; \
				position[] = {4,0,0}; \
		}; \
		class Unit3 \
		{ \
				side = 1; \
				vehicle = TWC_Infantry_ColdWar_Regular_##CAMO##_CSM; \
				rank = "CAPTAIN"; \
				position[] = {6,0,0}; \
		}; \
	}; \
	class AT_Team \
	{ \
		name = "AT Team"; \
		faction = "TWC_ColdWar"; \
		side = 1; \
		class Unit0 \
		{ \
				side = 1; \
				vehicle = TWC_Infantry_ColdWar_Regular_##CAMO##_SectionCommander; \
				rank = "SERGEANT"; \
				position[] = {0,0,0}; \
		}; \
		class Unit1 \
		{ \
				side = 1; \
				vehicle = TWC_Infantry_ColdWar_Regular_##CAMO##_MILAN_Gunner; \
				rank = "PRIVATE"; \
				position[] = {2,0,0}; \
		}; \
		class Unit2 \
		{ \
				side = 1; \
				vehicle = TWC_Infantry_ColdWar_Regular_##CAMO##_MILAN_Ass; \
				rank = "PRIVATE"; \
				position[] = {4,0,0}; \
		}; \
	}; \
	class AA_Team \
	{ \
		name = "AA Team"; \
		faction = "TWC_ColdWar"; \
		side = 1; \
		class Unit0 \
		{ \
				side = 1; \
				vehicle = TWC_Infantry_ColdWar_Regular_##CAMO##_SectionCommander; \
				rank = "SERGEANT"; \
				position[] = {0,0,0}; \
		}; \
		class Unit1 \
		{ \
				side = 1; \
				vehicle = TWC_Infantry_ColdWar_Regular_##CAMO##_Blowpipe_Gunner; \
				rank = "PRIVATE"; \
				position[] = {2,0,0}; \
		}; \
		class Unit2 \
		{ \
				side = 1; \
				vehicle = TWC_Infantry_ColdWar_Regular_##CAMO##_Blowpipe_Ass; \
				rank = "PRIVATE"; \
				position[] = {4,0,0}; \
		}; \
	}; \
	class Sniper_Team \
	{ \
		name = "Sniper Team"; \
		faction = "TWC_ColdWar"; \
		side = 1; \
		class Unit0 \
		{ \
				side = 1; \
				vehicle = TWC_Infantry_ColdWar_Regular_##CAMO##_Spotter; \
				rank = "SERGEANT"; \
				position[] = {0,0,0}; \
		}; \
		class Unit1 \
		{ \
				side = 1; \
				vehicle = TWC_Infantry_ColdWar_Regular_##CAMO##_Sniper; \
				rank = "CORPORAL"; \
				position[] = {2,0,0}; \
		}; \
	}; \
	class Artillery_Crew \
	{ \
		name = "Artillery Crew"; \
		faction = "TWC_ColdWar"; \
		side = 1; \
		class Unit0 \
		{ \
				side = 1; \
				vehicle = TWC_Infantry_ColdWar_Regular_##CAMO##_Artillery_Commander; \
				rank = "SERGEANT"; \
				position[] = {0,0,0}; \
		}; \
		class Unit1 \
		{ \
				side = 1; \
				vehicle = TWC_Infantry_ColdWar_Regular_##CAMO##_Artillery_Crew; \
				rank = "PRIVATE"; \
				position[] = {2,0,0}; \
		}; \
	}; \
	class Vehicle_Crew \
	{ \
		name = "Vehicle Crew"; \
		faction = "TWC_ColdWar"; \
		side = 1; \
		class Unit0 \
		{ \
				side = 1; \
				vehicle = TWC_Infantry_ColdWar_Regular_##CAMO##_Vehicle_Commander; \
				rank = "SERGEANT"; \
				position[] = {0,0,0}; \
		}; \
		class Unit1 \
		{ \
				side = 1; \
				vehicle = TWC_Infantry_ColdWar_Regular_##CAMO##_Vehicle_Crew; \
				rank = "PRIVATE"; \
				position[] = {2,0,0}; \
		}; \
		class Unit2 \
		{ \
				side = 1; \
				vehicle = TWC_Infantry_ColdWar_Regular_##CAMO##_Vehicle_Crew; \
				rank = "PRIVATE"; \
				position[] = {4,0,0}; \
		}; \
	}; \
}; \
class TWC_Groups_ColdWar_Regular_Dismounted_##CAMO \
{ \
	name = __EVAL("Infantry (Dismounted, " + #CAMO + ")"); \
	class Section \
	{ \
		name = "Section"; \
		faction = "TWC_ColdWar"; \
		side = 1; \
		class Unit0 \
		{ \
				side = 1; \
				vehicle = TWC_Infantry_ColdWar_Regular_Dismounted_##CAMO##_SectionCommander; \
				rank = "SERGEANT"; \
				position[] = {0,0,0}; \
		}; \
		class Unit1 \
		{ \
				side = 1; \
				vehicle = TWC_Infantry_ColdWar_Regular_Dismounted_##CAMO##_Rifleman; \
				rank = "PRIVATE"; \
				position[] = {2,0,0}; \
		}; \
		class Unit2 \
		{ \
				side = 1; \
				vehicle = TWC_Infantry_ColdWar_Regular_Dismounted_##CAMO##_Rifleman_SUIT; \
				rank = "PRIVATE"; \
				position[] = {4,0,0}; \
		}; \
		class Unit3 \
		{ \
				side = 1; \
				vehicle = TWC_Infantry_ColdWar_Regular_Dismounted_##CAMO##_AT; \
				rank = "PRIVATE"; \
				position[] = {6,0,0}; \
		}; \
		class Unit4 \
		{ \
				side = 1; \
				vehicle = TWC_Infantry_ColdWar_Regular_Dismounted_##CAMO##_ASSAT; \
				rank = "PRIVATE"; \
				position[] = {8,0,0}; \
		}; \
		class Unit5 \
		{ \
				side = 1; \
				vehicle = TWC_Infantry_ColdWar_Regular_Dismounted_##CAMO##_2iC; \
				rank = "CORPORAL"; \
				position[] = {10,0,0}; \
		}; \
		class Unit6 \
		{ \
				side = 1; \
				vehicle = TWC_Infantry_ColdWar_Regular_Dismounted_##CAMO##_MG; \
				rank = "PRIVATE"; \
				position[] = {12,0,0}; \
		}; \
		class Unit7 \
		{ \
				side = 1; \
				vehicle = TWC_Infantry_ColdWar_Regular_Dismounted_##CAMO##_ASSMG; \
				rank = "PRIVATE"; \
				position[] = {14,0,0}; \
		}; \
	}; \
	class Platoon_Command \
	{ \
		name = "Platoon Command"; \
		faction = "TWC_ColdWar"; \
		side = 1; \
		class Unit0 \
		{ \
				side = 1; \
				vehicle = TWC_Infantry_ColdWar_Regular_Dismounted_##CAMO##_Platoon_Commander; \
				rank = "MAJOR"; \
				position[] = {0,0,0}; \
		}; \
		class Unit1 \
		{ \
				side = 1; \
				vehicle = TWC_Infantry_ColdWar_Regular_Dismounted_##CAMO##_Platoon_Sergeant; \
				rank = "LIEUTENANT"; \
				position[] = {2,0,0}; \
		}; \
		class Unit2 \
		{ \
				side = 1; \
				vehicle = TWC_Infantry_ColdWar_Regular_Dismounted_##CAMO##_Platoon_Medic; \
				rank = "PRIVATE"; \
				position[] = {4,0,0}; \
		}; \
		class Unit3 \
		{ \
				side = 1; \
				vehicle = TWC_Infantry_ColdWar_Regular_Dismounted_##CAMO##_CSM; \
				rank = "CAPTAIN"; \
				position[] = {6,0,0}; \
		}; \
	}; \
};

REGULAR_GROUPS(Woodland)
REGULAR_GROUPS(Desert)
REGULAR_GROUPS(Tropic)
REGULAR_GROUPS(Arctic)
REGULAR_GROUPS(NBC)