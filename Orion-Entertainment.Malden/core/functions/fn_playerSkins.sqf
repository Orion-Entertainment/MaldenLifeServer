#include "..\..\script_macros.hpp"
/*
    File: fn_playerSkins.sqf
    Author: Daniel Stuart

    Description:
    Sets skins for players by their side and uniform.
*/

switch (playerSide) do {
    case civilian: {
	    if (uniform player isEqualTo "U_C_Poloshirt_blue") then {
            player setObjectTextureGlobal [0, "images\textures\Uniform\Civ\civ.paa"];
        };
        if (uniform player isEqualTo "U_C_WorkerCoveralls") then {
            player setObjectTextureGlobal [0, "images\textures\Uniform\Civ\jail_uniform.paa"];
        };
    };

    case west: {
        if (uniform player isEqualTo "U_B_CombatUniform_mcam" && FETCH_CONST(life_coplevel) >= 1) then {
            player setObjectTextureGlobal [0, "images\Textures\Uniform\Cop\Rank1.paa"];
        };
        if (uniform player isEqualTo "U_B_T_Soldier_F" && FETCH_CONST(life_coplevel) >= 1) then {
            player setObjectTextureGlobal [0, "images\Textures\Uniform\Cop\marshalt.jpg"];
        };
        if (uniform player isEqualTo "U_Marshal" && FETCH_CONST(life_coplevel) >= 1) then {
            player setObjectTextureGlobal [0, "images\Textures\Uniform\Cop\marshal.jpg"];
        };
        if (uniform player isEqualTo "U_B_CombatUniform_mcam" && FETCH_CONST(life_coplevel) >= 2) then {
            player setObjectTextureGlobal [0, "images\Textures\Uniform\Cop\Rank2.paa"];
        };
        if (uniform player isEqualTo "U_B_CombatUniform_mcam" && FETCH_CONST(life_coplevel) >= 3) then {
            player setObjectTextureGlobal [0, "images\Textures\Uniform\Cop\Rank3.paa"];
        };
        if (uniform player isEqualTo "U_B_CombatUniform_mcam" && FETCH_CONST(life_coplevel) >= 4) then {
            player setObjectTextureGlobal [0, "images\Textures\Uniform\Cop\Rank4.paa"];
        };
        if (uniform player isEqualTo "U_B_CombatUniform_mcam" && FETCH_CONST(life_coplevel) >= 5) then {
            player setObjectTextureGlobal [0, "images\Textures\Uniform\Cop\Rank5.paa"];
        };
        if (uniform player isEqualTo "U_B_CombatUniform_mcam" && FETCH_CONST(life_coplevel) >= 6) then {
            player setObjectTextureGlobal [0, "images\Textures\Uniform\Cop\Rank6.paa"];
        };
        if (uniform player isEqualTo "U_B_CombatUniform_mcam" && FETCH_CONST(life_coplevel) >= 7) then {
            player setObjectTextureGlobal [0, "images\Textures\Uniform\Cop\Rank7.paa"];
        };
        if (uniform player isEqualTo "U_B_CombatUniform_mcam" && FETCH_CONST(life_coplevel) >= 8) then {
            player setObjectTextureGlobal [0, "images\Textures\Uniform\Cop\Rank8.paa"];
        };
        if (uniform player isEqualTo "U_B_CombatUniform_mcam" && FETCH_CONST(life_coplevel) >= 9) then {
            player setObjectTextureGlobal [0, "images\Textures\Uniform\Cop\Rank9.paa"];
        };
        if (backpack player == "B_Carryall_cbr") then {
            (backpackContainer player) setObjectTextureGlobal [0,""];
        };
    };

	case independent: {
		if (uniform player isEqualTo "U_Rangemaster" && FETCH_CONST(life_mediclevel) >= 1) then {
            player setObjectTextureGlobal [0, "images\Textures\Uniform\med\volunteer.paa"];
        };
        if (uniform player isEqualTo "U_Rangemaster" && FETCH_CONST(life_mediclevel) >= 2) then {
            player setObjectTextureGlobal [0, "images\Textures\Uniform\med\trainee.paa"];
        };
        if (uniform player isEqualTo "U_Rangemaster" && FETCH_CONST(life_mediclevel) >= 3) then {
            player setObjectTextureGlobal [0, "images\Textures\Uniform\med\emt.paa"];
        };
        if (uniform player isEqualTo "U_Rangemaster" && FETCH_CONST(life_mediclevel) >= 4) then {
            player setObjectTextureGlobal [0, "images\Textures\Uniform\med\paramedic.paa"];
        };
        if (uniform player isEqualTo "U_Rangemaster" && FETCH_CONST(life_mediclevel) >= 5) then {
            player setObjectTextureGlobal [0, "images\Textures\Uniform\med\sparamedic.paa"];
        };
        if (uniform player isEqualTo "U_Rangemaster" && FETCH_CONST(life_mediclevel) >= 6) then {
            player setObjectTextureGlobal [0, "images\Textures\Uniform\med\HC.paa"];
        };
        if (uniform player isEqualTo "U_Rangemaster" && FETCH_CONST(life_mediclevel) >= 7) then {
            player setObjectTextureGlobal [0, "images\Textures\Uniform\med\HC.paa"];
        };
        if (uniform player isEqualTo "U_Rangemaster" && FETCH_CONST(life_mediclevel) >= 8) then {
            player setObjectTextureGlobal [0, "images\Textures\Uniform\med\HC.paa"];
        };
        if (uniform player isEqualTo "U_Rangemaster" && FETCH_CONST(life_mediclevel) >= 9) then {
            player setObjectTextureGlobal [0, "images\Textures\Uniform\med\HC.paa"];
        };
        if (backpack player == "B_Carryall_cbr") then {
            (backpackContainer player) setObjectTextureGlobal [0,""];
        };
    };
};
