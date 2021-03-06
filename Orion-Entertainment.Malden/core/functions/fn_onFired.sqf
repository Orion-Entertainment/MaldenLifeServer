#include "..\..\script_macros.hpp"
/*
    File: fn_onFired.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Handles various different ammo types being fired.
*/
private ["_ammoType","_projectile","_curGun","_holder"];
_ammoType = _this select 4;
_projectile = _this select 6;

if (_ammoType isEqualTo "GrenadeHand_stone") then {
    _projectile spawn {
        while {!isNull _this} do {
            private _position = ASLtoATL (visiblePositionASL _this);
            sleep 0.1;
        };
        [_position] remoteExec ["life_fnc_flashbang",RCLIENT];
    };
};


if (playerSide isEqualTo civilian) then {
	// Check if player is aiming at safezone
	_removed = false;
	_cont = true;

	if (!(isNull cursorTarget) && _cont && !_removed) then {
		if ([cursorTarget] call life_fnc_asddfg5) then {
			// Cursortarget is in safezone
			_cont = false;
			_removed = true;
			deleteVehicle _projectile;
		} else {
			// Cursortarget is not in safezone
			_cont = false;
		};
	};

	if (!_removed && [screenToWorld [0.5,0.5]] call life_fnc_asddfg5) then {
		deleteVehicle _projectile;
		[] spawn life_fnc_forceHolster;
		_projectile = nil;
		_removed = true;
	};
	
};

if((playerside isEqualTo civilian) && safeZone) then {
	deleteVehicle _projectile;
	[] spawn life_fnc_forceHolster;
	[localize "STR_SafezoneShooting",false,"fast"] call life_fnc_notificationSystem;
};

//Teargas
if(_ammoType in ["SmokeShellGreen","G_40mm_SmokeGreen"]) then {
	[_projectile] remoteExec ["life_fnc_teargas",0];
};