/*
    File: fn_killedPlayer.sqf
    Author: Flabby "flabby@orionlife.net"

    Description:
    Sends kill to db
*/
params [
	["_killer"],
	["_killed"],
	["_killersName"],
	["_killedName"],
	["_killerWeapon"],
	["_killDistance"],
	["_killedSide"]
];

_query = switch(_killedSide) do
{
	case west:
	{
		format["INSERT INTO kills(killerPID, killedPID, killerName, killedName, Weapon, Distance, Side) VALUES ('%1','%2','%3','%4','%5','%6','Police')",_killer,_killed,_killersName,_killedName,_killerWeapon,_killDistance];
	};
	case independent:
	{
		format["INSERT INTO kills(killerPID, killedPID, killerName, killedName, Weapon, Distance, Side) VALUES ('%1','%2','%3','%4','%5','%6','Medic')",_killer,_killed,_killersName,_killedName,_killerWeapon,_killDistance];
	};
	case civilian:
	{
		format["INSERT INTO kills(killerPID, killedPID, killerName, killedName, Weapon, Distance, Side) VALUES ('%1','%2','%3','%4','%5','%6','Civilian')",_killer,_killed,_killersName,_killedName,_killerWeapon,_killDistance];
	};
	case east:
	{
		format["INSERT INTO kills(killerPID, killedPID, killerName, killedName, Weapon, Distance, Side) VALUES ('%1','%2','%3','%4','%5','%6','Other')",_killer,_killed,_killersName,_killedName,_killerWeapon,_killDistance];
	};
};
[_query,1] call DB_fnc_asyncCall;