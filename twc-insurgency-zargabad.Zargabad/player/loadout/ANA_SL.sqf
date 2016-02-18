comment "Exported from Arsenal by jayman";

comment "Remove existing items";
removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;

comment "Add containers";
player forceAddUniform "REV1_uniform_da";
player addItemToUniform "ACRE_PRC148_ID_1";
player addItemToUniform "ACE_EarPlugs";
for "_i" from 1 to 10 do {player addItemToUniform "ACE_fieldDressing";};
player addVest "REV1_vest_de";
for "_i" from 1 to 5 do {player addItemToVest "ACE_morphine";};
for "_i" from 1 to 8 do {player addItemToVest "R3F_30Rnd_556x45_FAMAS";};
for "_i" from 1 to 2 do {player addItemToVest "R3F_30Rnd_556x45_TRACER_FAMAS";};
player addBackpack "B_Kitbag_cbr";
player addItemToBackpack "ACRE_PRC117F_ID_1";
for "_i" from 1 to 2 do {player addItemToBackpack "HandGrenade";};
for "_i" from 1 to 3 do {player addItemToBackpack "SmokeShell";};
player addHeadgear "REV1_spectra_da_glass";

comment "Add weapons";
player addWeapon "R3F_Famas_G2_DES";
player addPrimaryWeaponItem "R3F_AIMPOINT_DES";
player addWeapon "ACE_Vector";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "rhsusf_ANPVS_14";