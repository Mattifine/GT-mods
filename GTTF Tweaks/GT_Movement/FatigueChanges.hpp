class CfgMovesFatigue
{
	staminaDuration = "60";	// Default = 60
	staminaRestoration = "25";	// Default = 30
	staminaCooldown = 0;
	terrainDrainSprint = -0.2;
	terrainDrainRun = -0.8;
	terrainSpeedCoef = 0.8;
};


class CfgInventoryGlobalVariable
{
	maxSoldierLoad="99999";		// Default = 1000  (1500 to 1800 frees up the stamina bar, gives loadout freedom, but still keeps light loadouts desirable)
};


class CfgImprecision
{
	class Primary
	{
		verticalRadius = 0.25;		// Default = 0.5
		horizontalRadius = 0.05;	// Default = 0.1
	};
	class Secondary
	{
		verticalRadius = 0.05;		// Default = 0.1
		horizontalRadius = 0.25;	// Default = 0.5
	};
};