#include "..\..\script_macros.hpp"
/*
    File: fn_receiveMoney.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Receives money
*/

params [
    ["_unit",objNull,[objNull]],
    ["_val","",[""]],
    ["_from",objNull,[objNull]],
    ["_fromsteamid","",[""]]
];

if (isNull _unit || isNull _from || _val isEqualTo "") exitWith {};
if !(player isEqualTo _unit) exitWith {};
if (!([_val] call TON_fnc_isnumber)) exitWith {};
if (_unit == _from) exitWith {}; //Bad boy, trying to exploit his way to riches.

hint format [localize "STR_NOTF_GivenMoney",_from getVariable ["realname",name _from],[(parseNumber (_val))] call life_fnc_numberText];
findNearestPerson = findNearestPerson + parseNumber(_val);
[0] call SOCK_fnc_updatePartial;

/* Log Data */
private _LogData = [
    "Hand",
    getPlayerUID player,
    _fromsteamid,
    [(parseNumber (_val))] call life_fnc_numberText
];
["Log",_LogData] remoteExec ["DB_fnc_logData",RSERV];