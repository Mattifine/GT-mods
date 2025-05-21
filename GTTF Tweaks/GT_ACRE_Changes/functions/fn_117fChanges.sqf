LR_boost = {
    params ["_f", "_mW", "_receiverClass", "_transmitterClass"];
    
    private _coreSignal = _this call acre_sys_signal_fnc_getSignalCore;
    _coreSignal params ["_Px", "_signal"];
    
    _ret = [_transmitterClass, "ACRE_PRC117F"] call acre_api_fnc_isKindOf;
    
    if _ret then {
        _Px = 1;
        _signal = -70;
    };
    [_Px, _signal]
};
[LR_boost] call acre_api_fnc_setCustomSignalFunc;

/*
LR_boost = {
    params ["_f", "_mW", "_receiverClass", "_transmitterClass"];
    
    private _coreSignal = _this call acre_sys_signal_fnc_getSignalCore;
    _coreSignal params ["_Px", "_signal"];
    
    _retTransmitter = [_transmitterClass, "ACRE_PRC117F"] call acre_api_fnc_isKindOf;
    _retReceiver = [_receiverClass, "ACRE_PRC117F"] call acre_api_fnc_isKindOf;
    
    if _retTransmitter then {
        _Px = 1;
        _signal = -70;
        ["It worked"] remoteExec ["hint", 0];
    };
    if _retReceiver then {
        _Px = 1;
        _signal = -70;
        ["It worked"] remoteExec ["hint", 0];
    };
    [_Px, _signal]
};
[LR_boost] call acre_api_fnc_setCustomSignalFunc;
*/

