/*
Requires #include "script_macros.hpp"
Ex.
["Log",[Data]] remoteExec ["DB_fnc_logData",RSERV];
*/
params [
    "_option",
    "_data"
];

if (_option isEqualTo "" || _data isEqualTo "") exitWith {};

private _ext = "Orion-Entertainment" callExtension ["post", [_option,_data]];