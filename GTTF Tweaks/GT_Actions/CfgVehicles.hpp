class CfgVehicles{
    class Man;
    class CAManBase{
        class ACE_SelfActions{
            class GTTF_Actions{
                class Unpack_Medical{
                    displayName="Unpack Medical";
                    icon="\ACE_medical_gui\ui\cross.paa";
                    class 4R_open_MRE_Menu_1{
                        displayName="Unpack MRE menu 1";
                        condition="('4R_MRE_Menu_1' in (items player))";
                        exceptions[]={};
                        statement="{_player addItem _x;} forEach getArray (configFile >> 'CfgWeapons' >> '4R_MRE_Menu_1' >> 'MRE_Menu_contents');_player removeItem '4R_MRE_Menu_1';";
                        icon="\fourRBG_MRE_menu\img\MRE1.paa";
                    };
                    class 4R_open_MRE_Menu_2{
                        displayName="Unpack MRE menu 2";
                        condition="('4R_MRE_Menu_2' in (items player))";
                        exceptions[]={};
                        statement="{_player addItem _x;} forEach getArray (configFile >> 'CfgWeapons' >> '4R_MRE_Menu_2' >> 'MRE_Menu_contents');_player removeItem '4R_MRE_Menu_2';";
                        icon="\fourRBG_MRE_menu\img\MRE2.paa";
                    };
                    class 4R_open_MRE_Menu_3{
                        displayName="Unpack MRE menu 3";
                        condition="('4R_MRE_Menu_3' in (items player))";
                        exceptions[]={};
                        statement="{_player addItem _x;} forEach getArray (configFile >> 'CfgWeapons' >> '4R_MRE_Menu_3' >> 'MRE_Menu_contents');_player removeItem '4R_MRE_Menu_3';";
                        icon="\fourRBG_MRE_menu\img\MRE3.paa";
                    };
                    class 4R_open_MRE_Menu_4{
                        displayName="Unpack MRE menu 4";
                        condition="('4R_MRE_Menu_4' in (items player))";
                        exceptions[]={};
                        statement="{_player addItem _x;} forEach getArray (configFile >> 'CfgWeapons' >> '4R_MRE_Menu_4' >> 'MRE_Menu_contents');_player removeItem '4R_MRE_Menu_4';";
                        icon="\fourRBG_MRE_menu\img\MRE4.paa";
                    };
                    class 4R_open_MRE_Menu_5{
                        displayName="Unpack MRE menu 5";
                        condition="('4R_MRE_Menu_5' in (items player))";
                        exceptions[]={};
                        statement="{_player addItem _x;} forEach getArray (configFile >> 'CfgWeapons' >> '4R_MRE_Menu_5' >> 'MRE_Menu_contents');_player removeItem '4R_MRE_Menu_5';";
                        icon="\fourRBG_MRE_menu\img\MRE5.paa";
                        };
                };
            };
        };
    };
};