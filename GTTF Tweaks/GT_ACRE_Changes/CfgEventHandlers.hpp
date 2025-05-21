class Extended_PreInit_EventHandlers {
    class GT_ACRE_changes_preInit {
        init = "call compile preprocessFileLineNumbers '\GT_ACRE_Changes\XEH_preInit.sqf'";
    };
};

class Extended_PostInit_EventHandlers {
    class GT_ACRE_changes_postInit {
        init = "call compile preprocessFileLineNumbers '\GT_ACRE_Changes\XEH_postInit.sqf'";
    };
};