
while {true} do {
	{
		if (!side _X == WEST) then{
			_x setskill ["aimingAccuracy",0.35];
			_x setskill ["aimingShake",0.35];
			_x setskill ["aimingSpeed",0.35];
		}
	}foreach allunits;
_Count = count allunits;
waituntil {!((count allunits) ==_Count)};
hint str count allunits;
};
