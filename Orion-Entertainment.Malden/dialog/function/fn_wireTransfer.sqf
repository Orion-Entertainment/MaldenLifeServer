#include "..\..\script_macros.hpp"
/*
    File: fn_wireTransfer.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Initiates the wire-transfer
*/
params [
    ["_value",0,[0]],
    ["_from","",[""]],
    ["_fromsteamid","",[""]]
];

if (_value isEqualTo 0 || _from isEqualTo "" || _from isEqualTo profileName) exitWith {}; //No
goToShopView = goToShopView + _value;
[1] call SOCK_fnc_updatePartial;
hint format [localize "STR_ATM_WireTransfer",_from,[_value] call life_fnc_numberText];

/* Log Data */
private _LogData = [
	"Transfer",
	getPlayerUID player,
    _fromsteamid,
	[_value] call life_fnc_numberText
];
["Log",_LogData] remoteExec ["DB_fnc_logData",RSERV];