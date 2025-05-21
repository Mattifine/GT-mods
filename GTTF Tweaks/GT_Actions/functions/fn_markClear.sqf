params ["_player"];
private _marker = createMarker ["_USER_DEFINED " + str (getPosWorld _player), _player, 1, _player]; 
if (_marker == "") exitWith {}; 
_marker setMarkerType "hd_dot"; 
_marker setMarkerColor "ColorGreen";