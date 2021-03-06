//vitalhit system. rifle hits to chest kill, unless there's armour (basic calibre vs range system here). pistol doubletaps to chest kill. hits to player fire a function, but that function is blank by default and can be defined per-mission. In public PVE modes it's used for instakill on headshots, and in ops it can be used for CBRN scenarios where getting shot in the head could break the gas mask
//hobbsnote: spine1 is lower abdomen, spine3 is ribcage
class Extended_HitPart_EventHandlers {
	class man {
		class twc_vitalhit {
			HitPart = "(_this select 0) params ['_target', '_shooter', '_projectile', '_position', '_velocity', '_selection', '_ammo', '_vector', '_radius', '_surfaceType', '_isDirect'];if (isplayer _target) exitwith {_this call twc_fnc_playerheadshot};if (!alive _target) exitwith {};if (!_isdirect) exitwith {}; _value = (_ammo select 0); if (_value > 20) exitwith {[_target, {if (isDamageAllowed _this) then {_this setdamage 1;};}] remoteExec ['call', _target];}; if (('head' in _selection) || (('neck' in _selection) && ((random 1) > 0.5))) exitwith {[_target, {if (isDamageAllowed _this) then {_this setdamage 1;};}] remoteExec ['call', _target];}; if (!(('spine1' in _selection) || ('spine2' in _selection) || ('spine3' in _selection))) exitwith {};_armour = (getNumber (configFile >> 'CfgWeapons' >> vest _target >> 'iteminfo' >> 'HitpointsProtectionInfo' >> 'Chest' >> 'armor')); _hit = (((((_value) - 4) max 3) + ((vectorMagnitude _velocity) * 0.01) - (((_armour) max 0) * 0.1)) + (random 1));if ('spine3' in _selection) exitwith {if ((_hit > 10) || ((_hit > 6) && ((lifeState _target) != 'HEALTHY'))) then {[_target, {if (isDamageAllowed _this) then {_this setdamage 1;};}] remoteExec ['call', _target];};};if (('spine1' in _selection) || ('spine2' in _selection)) exitwith {if ((_hit > 12) || ((_hit > 6) && ((lifeState _target) != 'HEALTHY'))) then {[_target, {if (isDamageAllowed _this) then {_this setdamage 1;};}] remoteExec ['call', _target];};};";
		};

	};
};

class Extended_EpeContactStart_EventHandlers
{
	class landvehicle
	{
		class flipdamage
		{
			EpeContactStart = "params ['_vehicle', '_object2', '_selection1', '_selection2', '_force']; if (_force < 5) exitwith {}; if (((vectorUp _vehicle) vectorDistance (surfaceNormal getPosATL _vehicle)) < 1) exitwith {};{if (isplayer _x) then {[_x, _force] remoteexec ['twc_pubfixes_fnc_flipdamage', _x];};} foreach (crew _vehicle);";
		};
	};
};

//center of gravity improvements
class Extended_Init_EventHandlers
{
	class LandVehicle
	{
		//CBA's XEH for epecontact start doesn't work unless something else runs off it beforehand, doesn't matter what
		class flipdmg
		{
			serverinit = "params ['_car']; _car addeventhandler ['EpeContactStart', {}]";
		};
	};
};

class Extended_FiredBIS_EventHandlers {
	class Car {
		class twc_gunwalk {
			FiredBIS = "[_this select 1, _this select 4, _this select 6, _this select 7] call twc_fnc_gunwalk;";
		};
	};
	class Helicopter {
		class twc_gunwalk {
			FiredBIS = "[_this select 1, _this select 4, _this select 6, _this select 7] call twc_fnc_gunwalk;";
		};
	};
	class Tank {
		class twc_gunwalk {
			FiredBIS = "[_this select 1, _this select 4, _this select 6, _this select 7, 2] call twc_fnc_gunwalk;";
		};
	};
};


