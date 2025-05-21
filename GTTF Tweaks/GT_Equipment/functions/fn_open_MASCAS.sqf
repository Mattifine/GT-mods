[5,
	[],
	{
		player removeWeaponGlobal (secondaryWeapon player);
		createVehicle ["FourRBG_MASCAS", getPos player, [], 0, "CAN_COLLIDE"]
	},
	{
		hint "Action Cancelled!"
	},
	"Placing MASCAS kit"
] call ace_common_fnc_progressBar;