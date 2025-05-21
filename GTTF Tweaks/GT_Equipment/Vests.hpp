class CfgWeapons
{
	class ItemCore;
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};
	class V_PlateCarrierL_NoFlag: Vest_Camo_Base
	{
		author="BI & Mattifine";
		_generalMacro="S";
		scope=2;
		displayName="GT SPCS Light (Black)";
		picture="\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
		model="\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
		descriptionShort="$STR_A3_SP_AL_III";
		hiddenSelectionsTextures[]=
		{
			"CTRG_Vest_No_Flag\Vest\Data\vest_ctrg_noflag.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass="Supply140";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
};