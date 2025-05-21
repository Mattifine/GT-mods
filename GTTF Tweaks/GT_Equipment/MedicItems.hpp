class ace_medical_replacementItems { 
    ItemType_401[] = { 
        {"ACE_packingBandage", 16}, 
    	{"ACE_tourniquet", 4}, 
        {"ACE_splint", 3},
		{"ACE_morphine", 2}, 
        {"ACE_epinephrine", 1} 
    }; 
    ItemType_619[] = {  
        {"ACE_elasticBandage", 60},
		{"ACE_suture", 40},
        {"ACE_epinephrine", 20}, 
        {"ACE_morphine", 16},
		{"ACE_salineIV", 6},
        {"ACE_salineIV_500", 8}, 
        {"ACE_tourniquet", 12}, 
        {"ACE_splint", 16} 
    }; 
};

class CfgWeapons
{
	class Default;
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryFirstAidKitItem_Base_F;
	class MedikitItem;
	class FirstAidKit: ItemCore
	{
		class ItemInfo: InventoryFirstAidKitItem_Base_F
		{
			mass=21.1;
		};
	};
	class Medikit: ItemCore
	{
		class ItemInfo: MedikitItem
		{
			mass=279.8;
		};
	};
};