Code and files for the GT mods.

The code for the addons goes in the "Mod Name\Addon name" this is where code is changed and edited. Plz follow the struckture listed below: 
\GT_Addon 
  \data (For imiges and textures) 
  \functions (Where the .sqf for the addons functions are stored, make sure the file follows the naming convetions fn_functionName.sqf) 
  config.cpp 
  XEH_preInit.sqf (Code to run befor missions are intialsed) 
  XEH_postInit.sqf (Code to run after missions are intialsed) 
  CfgEventHandlers.hpp 
  CfgFunctions.hpp 
  CfgWeapons.hpp 
  CfgVehciels.hpp 
  (Etc. try to split out the code to .hpp files, dont for get to put #include "Filename.hpp" in the config.cpp)

The tags used in the mods should be GT or GTTF. 
When packing the mods this is the curnt list that the pbo packer shloud copy directly (Se addon bulider options): 
  .p3d;.paa;.ogg;.sqf;.rvmat;.xml;.h;.json;.wss;.bisurf;.jpg;.rtm;*.lst;

For big changes, plz create a branch so that they can be merged at a later date.
