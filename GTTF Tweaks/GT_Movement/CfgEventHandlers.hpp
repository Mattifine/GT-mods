class Extended_PreInit_EventHandlers {
    class GT_Movement_preInit {
        init = "call compile preprocessFileLineNumbers '\GT_Movement\XEH_preInit.sqf'";
    };
};

class Extended_PostInit_EventHandlers {
    class GT_Movement_postInit {
        // init = "call compile preprocessFileLineNumbers '\GT_Movement\XEH_postInit.sqf'";
		clientInit = "call compile preprocessFileLineNumbers '\GT_Movement\functions\fn_weightLimit.sqf'";
    };
};