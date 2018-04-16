#include "..\..\script_macros.hpp"
/*
    File: fn_robReceive.sqf
    Author: Bryan "Tonic" Boardwine

    Description:

*/
params [
    ["_cash",0,[0]],
    ["_victim",objNull,[objNull]],
    ["_robber",objNull,[objNull]]
];

if (_robber == _victim) exitWith {};
if (_cash isEqualTo 0) exitWith {titleText[localize "STR_Civ_RobFail","PLAIN"]};

findNearestPerson = findNearestPerson + _cash;
[0] call SOCK_fnc_updatePartial;
titleText[format [localize "STR_Civ_Robbed",[_cash] call life_fnc_numberText],"PLAIN"];
//[format["%1 - %2 robbed $%3 from %4. Bank Balance: $%5  On Hand Balance: $%6",profileName,(getPlayerUID player),[_cash] call life_fnc_numberText,_victim,[goToShopView] call life_fnc_numberText,[findNearestPerson] call life_fnc_numberText], "MoneyLogs"] remoteExecCall ["A3Log", 2];
