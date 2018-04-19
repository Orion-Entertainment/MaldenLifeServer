#include "script_macros.hpp"
/*
    File: initPlayerLocal.sqf
    Author:

    Description:
    Starts the initialization of the player.
*/
if (!hasInterface && !isServer) exitWith {
    [] call compile preprocessFileLineNumbers "\life_hc\initHC.sqf";
}; //This is a headless client.

#define CONST(var1,var2) var1 = compileFinal (if (var2 isEqualType "") then {var2} else {str(var2)})
#define LIFE_SETTINGS(TYPE,SETTING) TYPE(missionConfigFile >> "Life_Settings" >> SETTING)

CONST(BIS_fnc_endMission,BIS_fnc_endMission);

if (hasInterface) then {
    player addEventHandler ["GetOutMan", {
        life_seatbelt = false;
        [] call life_fnc_hudUpdate; //--Enable if you are putting a hud option to display when your seatbelt is on
    }];
};

if (hasInterface) then {
    player addEventHandler ["GetInMan", {
        life_seatbelt = false;
        [] call life_fnc_hudUpdate; //--Enable if you are putting a hud option to display when your seatbelt is on
    }];
};

//disables removal of static launchers
if (hasInterface) then {
    inGameUISetEventHandler ["Action", "
        if (_this select 3 == 'DisAssemble') then {
            hint 'You are not allowed to do this'; 
            true
        }
    "];
};

//Server Watermark - Add when we have one :P
/*
_pic = "\a3\ui_f\data\map\MapControl\watertower_ca.paa"; 
[ 
    '<img align=''left'' size=''1.0'' shadow=''1'' image='+(str(_pic))+' />', 
    safeZoneX+2.325, 
    safeZoneY+safeZoneH-0.1, 
    99999, 
    0, 
    0, 
    3090 
] spawn bis_fnc_dynamicText;
*/

//ColorCorrection to make it look bootyfull
"ColorCorrections" ppEffectEnable true; 
"ColorCorrections" ppEffectAdjust [0.88, 0.88, 0, [0.2, 0.29, 0.4, -0.22], [1, 1, 1, 1.3], [0.15, 0.09, 0.09, 0.0]];
"ColorCorrections" ppEffectCommit 0;

[] execVM "core\init.sqf";
