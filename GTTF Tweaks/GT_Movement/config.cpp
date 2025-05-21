class CfgPatches
{
	class GT_Stammina
	{
		name = "GT/TFs movement changes";
		author = "Mattifine";
		url = "https://units.arma3.com/unit/ghosttroopers";
		requiredVersion = 2.00;
		requiredAddons[] = {
			"A3_Data_F_AoW_Loadorder",
			"cba_main"
		};
		units[] = {};
		weapons[] = {};
      	worlds[] = {};
	};
};

#include "CfgEventHandlers.hpp"
#include "CfgFunctions.hpp"
#include "FatigueChanges.hpp"