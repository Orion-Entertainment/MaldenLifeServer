#include "..\..\script_macros.hpp"
/*
    File: fn_clearVehicleAmmo.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Clears the vehicle of ammo types that we don't want.

    Syntax: _vehicle removeMagazinesTurret [magazineName, turretPath]
    Documentation: https://community.bistudio.com/wiki/removeMagazinesTurret
*/
private ["_vehicle","_veh"];
_vehicle = [_this,0,objNull,[objNull]] call BIS_fnc_param;
if (isNull _vehicle) exitWith {};
_veh = typeOf _vehicle;

if (_veh isEqualTo "B_Boat_Armed_01_minigun_F") then {
    _vehicle removeMagazinesTurret ["200Rnd_40mm_G_belt",[0]];
};

if (_veh isEqualTo "B_APC_Wheeled_01_cannon_F") then {
    _vehicle removeMagazinesTurret ["60Rnd_40mm_GPR_Tracer_Red_shells",[0]];
    _vehicle removeMagazinesTurret ["40Rnd_40mm_APFSDS_Tracer_Red_shells",[0]];
};

if (_veh isEqualTo "O_Heli_Attack_02_black_F") then {
    _vehicle removeMagazinesTurret ["250Rnd_30mm_APDS_shells",[0]];
    _vehicle removeMagazinesTurret ["8Rnd_LG_scalpel",[0]];
    _vehicle removeMagazinesTurret ["38Rnd_80mm_rockets",[0]];
};

if (_veh isEqualTo "B_Heli_Light_01_armed_F") then {
    _vehicle removeWeapon "missiles_DAR";
    _vehicle removeMagazine "24Rnd_missiles";
};

if (_veh isEqualTo "O_T_VTOL_02_infantry_grey_F") then {
    _vehicle removeWeapon "gatling_30mm_VTOL_02";
    _vehicle removeWeapon "missiles_SCALPEL";
    _vehicle removeWeapon "rockets_Skyfire";
};

if (_veh isEqualTo "O_T_VTOL_02_vehicle_grey_F") then {
    _vehicle removeWeapon "gatling_30mm_VTOL_02";
    _vehicle removeWeapon "missiles_SCALPEL";
    _vehicle removeWeapon "rockets_Skyfire";
};
clearWeaponCargoGlobal _vehicle;
clearMagazineCargoGlobal _vehicle;
clearItemCargoGlobal _vehicle;
clearBackpackCargoGlobal _vehicle;