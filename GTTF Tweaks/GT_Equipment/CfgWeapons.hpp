class CfgWeapons
{
	class ACE_ItemCore
	class GTTF_AidKit_blank: ACE_ItemCore
	{
		scope=0;
		author="Mattifine";
		//picture="\GT_Equipment\data\inventory\Aid_Kit.paa";
		displayName="Aid Kit";
		descriptionShort="";
		class ItemInfo:CBA_MiscItem_ItemInfo
		{
			mass=1; // 1 lbs = 10 mass
		};
	};
	class GTTF_Rifleman_AidKit: GTTF_AidKit_blank
	{
		scope=2;
		picture="\GT_Equipment\data\inventory\Aid_Kit.paa";
		displayName="Rifleman_AidKit";
		descriptionShort="This is a resupply kit for Team Medics or CMTs. /nContains: 25x Pressure Bandage, 10x Emergency Trauma Dressing, 25x Elastic Wrap and 4x SAM Splint.";
		class ItemInfo:CBA_MiscItem_ItemInfo
		{
			mass=44.5;
		};
	};
	class 4R_MASCAS: Launcher_Base_F
	{
		scope=2;
		author="StagWerks";
		picture="\FourRBG\data\inventory\MASCAS.paa";
		displayName="Mass Casualty Kit";
		descriptionShort="For those situations where you need a lot of medical supplies, and quickly!";
		descriptionUse="";
		model="\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_Static\uk3cb_static_tripod_bag_equipped.p3d";
        reversed = false;
		modes[]={};
		class WeaponSlotsInfo:WeaponSlotsInfo
		{
			mass=250;
		};
	};
	// Hide Ace and Kat Kits
	class Kat_AFAK
	{
		scope=1;
	};
	class kat_basicDiagnostic
	{
		scope=1;
	};
	class kat_IFAK
	{
		scope=1;
	};
	class kat_MFAK
	{
		scope=1;
	};
	class FirstAidKit
	{
		scope=1;
	};
	class MediKit
	{
		scope=1;
	};
};