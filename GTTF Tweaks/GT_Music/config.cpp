class CfgPatches
{
	class GT_Music
	{
		name = "GT/TFs Music";
		author = "Mattifine";
		url = "https://units.arma3.com/unit/ghosttroopers";
		requiredVersion = 2.00;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
      	worlds[] = {};
	};
};
class CfgMusic
{
	tracks[]=	{SevenNationArmy, Astronaut, Werenotgonnatakeit, LondonCalling, HotStuff, 
				Kickstartmyheart, VARTJAGMIGIVARLDENVANDER, genomeldochvatten , Lifeisahighway, 
				Americanride, Detvarengångenfågel, Dontstopmenow, Whistle,LoveMeAgain, RIDMIGSOMENDALAHAST,
				RocketFuel, CantHoldUs, Kombat, IminChechnya, WishMeLuck, PackOfCigarettes, RedAlert};
	#include "Mattifine.hpp"
	#include "Oliva.hpp"
};
class CfgMusicClasses
{
	class Mattifine
	{
		displayName = "GT- Mattifine";
	};
	class Olivia
	{
		displayName = "GT- Olivia";
	};
};