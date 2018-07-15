/*
    File: fn_logData.sqf
    Author: +Flabby

    Example:
    #include "script_macros.hpp"
    ["Log",[Data]] remoteExec ["DB_fnc_logData",RSERV];
*/
params [
    "_option",
    "_data"
];
if (_option isEqualTo "" || _data isEqualTo "") exitWith {};

private _ext = "Orion-Entertainment" callExtension ["post", [_option,_data]];