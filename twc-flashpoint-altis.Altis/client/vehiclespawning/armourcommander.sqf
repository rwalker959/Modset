SpawnM1A2Action = ["SpawnM1A2","M1A2","",{_oldVeh = nearestObjects [armourSpawnPad, ["Car","Tank","air"],10]; {deleteVehicle _x}forEach _oldVeh; _veh = "rhsusf_m1a2sep1Tuskiwd_usarmy" createVehicle (position armourSpawnPad);_dir = getDir armourSpawnPad; _dir = _dir + 180; _veh setDir _dir;armourSpawned = 1;},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V2_F", 0, ["ACE_MainActions"], SpawnM1A2Action] call ace_interact_menu_fnc_addActionToClass;

SpawnM2A3Action = ["SpawnM2A3","M2A3","",{_oldVeh = nearestObjects [armourSpawnPad, ["Car","Tank","air"],10]; {deleteVehicle _x}forEach _oldVeh; _veh = "RHS_m2A3_BUSKIII_WD" createVehicle (position armourSpawnPad);_dir = getDir armourSpawnPad; _dir = _dir + 180; _veh setDir _dir;armourSpawned = 1;},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V2_F", 0, ["ACE_MainActions"], SpawnM2A3Action] call ace_interact_menu_fnc_addActionToClass;

SpawnFV510Action = ["SpawnFV510","FV510","",{_oldVeh = nearestObjects [armourSpawnPad, ["Car","Tank","air"],10]; {deleteVehicle _x}forEach _oldVeh; _veh = "CUP_B_FV510_GB_D_Slat" createVehicle (position armourSpawnPad);_dir = getDir armourSpawnPad; _dir = _dir + 180; _veh setDir _dir;armourSpawned = 1;},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V2_F", 0, ["ACE_MainActions"], SpawnFV510Action] call ace_interact_menu_fnc_addActionToClass;

SpawnLAV25Action = ["SpawnLAV25","LAV25","",{_oldVeh = nearestObjects [armourSpawnPad, ["Car","Tank","air"],10]; {deleteVehicle _x}forEach _oldVeh; _veh = "CUP_B_LAV25_USMC" createVehicle (position armourSpawnPad);_dir = getDir armourSpawnPad; _dir = _dir + 180; _veh setDir _dir;armourSpawned = 1;},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V2_F", 0, ["ACE_MainActions"], SpawnLAV25Action] call ace_interact_menu_fnc_addActionToClass;

SpawnM6Action = ["SpawnM6","M6","",{_oldVeh = nearestObjects [armourSpawnPad, ["Car","Tank","air"],10]; {deleteVehicle _x}forEach _oldVeh; _veh = "CUP_B_M6LineBacker_USA_D" createVehicle (position armourSpawnPad);_dir = getDir armourSpawnPad; _dir = _dir + 180; _veh setDir _dir;armourSpawned = 1;},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V2_F", 0, ["ACE_MainActions"], SpawnM6Action] call ace_interact_menu_fnc_addActionToClass;

SpawnM1128Action = ["SpawnM1128","M1128","",{_oldVeh = nearestObjects [armourSpawnPad, ["Car","Tank","air"],10]; {deleteVehicle _x}forEach _oldVeh; _veh = "CUP_B_M1128_MGS_Desert_Slat" createVehicle (position armourSpawnPad);_dir = getDir armourSpawnPad; _dir = _dir + 180; _veh setDir _dir;armourSpawned = 1;},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V2_F", 0, ["ACE_MainActions"], SpawnM1128Action] call ace_interact_menu_fnc_addActionToClass;