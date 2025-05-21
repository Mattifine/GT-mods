class CfgPatches
{
	class ACRE_Changes
	{
		name = "GT/TFs ACRE";
		author = "Mattifine";
		url = "https://units.arma3.com/unit/ghosttroopers";
		requiredAddons[] = 
		{	
			"A3_Functions_F",
			"acre_sys_prc117f",
			"acre_sys_radio",
			"acre_sys_fonts"
		};
		requiredVersion=2.04;
		units[] = {};
		weapons[]= {"ACRE_PRC117F"};
	};
};

#include "CfgEventHandlers.hpp"
#include "CfgFunctions.hpp"
#include "CfgWeapons.hpp"