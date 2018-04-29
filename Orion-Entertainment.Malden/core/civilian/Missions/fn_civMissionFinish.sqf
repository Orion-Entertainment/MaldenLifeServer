#include "..\..\..\script_macros.hpp"
/*
 Created by repentz
*/

params [
    ["_vehicle",objNull,[objNull]]
];

private ["_payCheck"];

_payCheck = floor random [15000, 30000, 55000]; //$15000-55000

findNearestPerson = findNearestPerson + _payCheck;
hint format ["Congratulations, you have completed the transportation mission and recived the reward of $%1. Enjoy!", [_payCheck] call life_fnc_numberText];

["civMission"] spawn mav_ttm_fnc_addExp;
player removeAction life_collectMoneys;
player setVariable ["taskStartCiv",false,true];