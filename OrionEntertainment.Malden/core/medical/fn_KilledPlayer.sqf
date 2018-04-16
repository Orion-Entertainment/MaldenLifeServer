/*
    File: fn_KilledPlayer.sqf
    Author: Flabby "flabby@orionlife.net"

    Description:
    Creates a notification when you kill someone
*/
private["_PlayerKilled","_PlayerKilledPID","_unit","_killer"];
params [
    ["_unit",objNull,[objNull]],
	["_killer",objNull,[objNull]]
];
_PlayerKilled = _unit getVariable["realname",""];
_PlayerKilledPID = getPlayerUID _unit;
playSound "HintExpand";
hint format ["You just killed %1(%2)",_PlayerKilled,_PlayerKilledPID];