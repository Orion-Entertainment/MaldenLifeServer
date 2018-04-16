/*
    File: fn_saveVehicle.sqf
    Author: Flabby "http://steamcommunity.com/id/FlabbyButt/"

    Description:
    Adds Var so its does not get deleted by server
*/
if (!isServer) then {
	_veh = vehicle player;
	_veh setVariable["CurrentTime",serverTime];
	};