[] spawn {
	// ["Running"] remoteExec ["systemChat", 0];
	_isHC = !hasInterface && !isDedicated;
	if (_isHC) exitWith {};
	
	_weightCheck = {
		//Checks weight.
		_weight = LoadAbs player;
		_weight = _weight / 10;
		_backpackonchest = [player] call bocr_main_fnc_chestpack;
		
		if (_weight > parseNumber (GTTF_medWeight)) then {
			[player,false] remoteExec ["allowSprint",player];
		};
		if (_weight > parseNumber (GTTF_maxWeight)) then {		
			[player, true] remoteExec ["forceWalk",player];
		};
		if ((_weight < parseNumber (GTTF_maxWeight)) and (_backpackonchest == "")) then{
			[player, false] remoteExec ["forceWalk",player];
		};
		if ((_weight < parseNumber (GTTF_medWeight)) and (_backpackonchest == "")) then{
			[player,true] remoteExec ["allowSprint",player];
		};
	};

	while {true} do{
		//Check the weight every 2 seconds.
		sleep 2;
		[] call _weightCheck;
	};
};