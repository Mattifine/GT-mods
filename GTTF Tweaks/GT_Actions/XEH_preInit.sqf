["GT/TFs Mod",
"Map_marker_cleard",
["Mark building as cleared", "Creates a green dot on your positon to mark a cleared building"],
{[player] call GTTF_fnc_markClear;},
{},
[50, [false, true, false]],
False,
0,
true] call CBA_fnc_addKeybind;
#include "\a3\ui_f\hpp\defineDIKCodes.inc"