/*
    File: fn_KilledPlayer.sqf
    Author: Flabby "flabby@orionlife.net"

    Description:
    Creates a notification when you kill someone
*/
params [
    ["_unit",objNull,[objNull]],
	["_killer",objNull,[objNull]]
];
private _PlayerKilled = _unit getVariable["realname",""];
private _PlayerKilledPID = getPlayerUID _unit;
[format [localize "STR_KilledPlayer",_PlayerKilled,_PlayerKilledPID],true,"slow"] call life_fnc_notificationSystem;