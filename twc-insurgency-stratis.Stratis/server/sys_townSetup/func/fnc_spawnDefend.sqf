/*
* Details:
* 
* Creates a enemy squad to defend around a given marker
*
* Required parameters:
*
* 0 - String     Marker name
*
* Example:
*
*["bastam"] spawn twc_SpawnDefend
*
* Author: [TWC] Fakematty / [TWC] Jayman
*/

params["_marker"];
_random = random 100;
if (_random < 50) then {
	if (isServer) then {
		_groupSpawn = [getMarkerPos _marker, East, townSpawn,[],[],[],[],[],180] call BIS_fnc_spawnGroup;
		[_groupSpawn] call CBA_fnc_TaskDefend;
		{
			_x addMPEventHandler ["MPKilled",{
				if (side (_this select 1) == WEST) then{
					InsP_enemyMorale = InsP_enemyMorale + 0.05; publicVariable "InsP_enemyMorale";
				};
			}];
		}forEach units _groupSpawn;
	};
};

