#include "..\..\script_macros.hpp"
/*
    File: fn_playerSkins.sqf
    Author: Daniel Stuart

    Description:
    Sets skins for players by their side and uniform.
*/
private ["_skinName"];

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
        if (uniform player isEqualTo "U_Rangemaster") then {
                if (FETCH_CONST(life_coplevel) >= 1) then {
                    player setObjectTextureGlobal [0, "images\Textures\Uniform\Cop\1police_uniform_cadet.paa"];
            };
        };
        if (uniform player isEqualTo "U_Rangemaster") then {
                if (FETCH_CONST(life_coplevel) >= 2) then {
                    player setObjectTextureGlobal [0, "images\Textures\Uniform\Cop\2police_uniform_PO.paa"];
            };
        };
         if (uniform player isEqualTo "U_Rangemaster") then {
                if (FETCH_CONST(life_coplevel) >= 3) then {
                    player setObjectTextureGlobal [0, "images\Textures\Uniform\Cop\3police_uniform_SO.paa"];
            };
        };
        if (uniform player isEqualTo "U_Rangemaster") then {
                if (FETCH_CONST(life_coplevel) >= 4) then {
                    player setObjectTextureGlobal [0, "images\Textures\Uniform\Cop\4police_uniform_CPL.paa"];
            };
        };
         if (uniform player isEqualTo "U_Rangemaster") then {
                if (FETCH_CONST(life_coplevel) >= 5) then {
                    player setObjectTextureGlobal [0, "images\Textures\Uniform\Cop\5police_uniform_SGT.paa"];
            };
        };
         if (uniform player isEqualTo "U_Rangemaster") then {
                if (FETCH_CONST(life_coplevel) >= 6) then {
                    player setObjectTextureGlobal [0, "images\Textures\Uniform\Cop\6police_uniform_2LT.paa"];
            };
        };
         if (uniform player isEqualTo "U_Rangemaster") then {
                if (FETCH_CONST(life_coplevel) >= 7) then {
                    player setObjectTextureGlobal [0, "images\Textures\Uniform\Cop\6police_uniform_LT.paa"];
            };
        };
         if (uniform player isEqualTo "U_Rangemaster") then {
                if (FETCH_CONST(life_coplevel) >= 8) then {
                    player setObjectTextureGlobal [0, "images\Textures\Uniform\Cop\7police_uniform_CPT.paa"];
            };
        };
         if (uniform player isEqualTo "U_Rangemaster") then {
                if (FETCH_CONST(life_coplevel) >= 9) then {
                    player setObjectTextureGlobal [0, "images\Textures\Uniform\Cop\8police_uniform_MAJ.paa"];
            };
        };
         if (uniform player isEqualTo "U_Rangemaster") then {
                if (FETCH_CONST(life_coplevel) >= 10) then {
                    player setObjectTextureGlobal [0, "images\Textures\Uniform\Cop\9police_uniform_ASSCHIEF.paa"];
            };
        };
         if (uniform player isEqualTo "U_Rangemaster") then {
                if (FETCH_CONST(life_coplevel) >= 11) then {
                    player setObjectTextureGlobal [0, "images\Textures\Uniform\Cop\10police_uniform_CHIEF.paa"];
            };
        };
         if (uniform player isEqualTo "U_Rangemaster") then {
                if (FETCH_CONST(life_coplevel) >= 12) then {
                    player setObjectTextureGlobal [0, "images\Textures\Uniform\Cop\11police_uniform_COM.paa"];
            };
        };
		if (uniform player isEqualTo "U_I_CombatUniform") then {
            player setObjectTextureGlobal [0, "images\textures\Uniform\MP\mp_uniform1.paa"];
        };
        if( backpack player == "B_Carryall_cbr") then {
            (backpackContainer player) setObjectTextureGlobal [0,""];
        };
    };
	case independent: {
		if (uniform player isEqualTo "U_Rangemaster") then {
                if (FETCH_CONST(life_mediclevel) >= 1) then {
                    player setObjectTextureGlobal [0, "images\Textures\Uniform\med\volunteer.paa"];
            };
        };
        if (uniform player isEqualTo "U_Rangemaster") then {
                if (FETCH_CONST(life_mediclevel) >= 2) then {
                    player setObjectTextureGlobal [0, "images\Textures\Uniform\med\trainee.paa"];
            };
        };
        if (uniform player isEqualTo "U_Rangemaster") then {
                if (FETCH_CONST(life_mediclevel) >= 3) then {
                    player setObjectTextureGlobal [0, "images\Textures\Uniform\med\emt.paa"];
            };
        };
         if (uniform player isEqualTo "U_Rangemaster") then {
                if (FETCH_CONST(life_mediclevel) >= 4) then {
                    player setObjectTextureGlobal [0, "images\Textures\Uniform\med\paramedic.paa"];
            };
        };
        if (uniform player isEqualTo "U_Rangemaster") then {
                if (FETCH_CONST(life_mediclevel) >= 5) then {
                    player setObjectTextureGlobal [0, "images\Textures\Uniform\med\sparamedic.paa"];
            };
        };
         if (uniform player isEqualTo "U_Rangemaster") then {
                if (FETCH_CONST(life_mediclevel) >= 6) then {
                    player setObjectTextureGlobal [0, "images\Textures\Uniform\med\HC.paa"];
            };
        };
         if (uniform player isEqualTo "U_Rangemaster") then {
                if (FETCH_CONST(life_mediclevel) >= 7) then {
                    player setObjectTextureGlobal [0, "images\Textures\Uniform\med\HC.paa"];
            };
        };
         if (uniform player isEqualTo "U_Rangemaster") then {
                if (FETCH_CONST(life_mediclevel) >= 8) then {
                    player setObjectTextureGlobal [0, "images\Textures\Uniform\med\HC.paa"];
            };
        };
         if (uniform player isEqualTo "U_Rangemaster") then {
                if (FETCH_CONST(life_mediclevel) >= 9) then {
                    player setObjectTextureGlobal [0, "images\Textures\Uniform\med\HC.paa"];
            };
        };
        if( backpack player == "B_Carryall_cbr") then {
            (backpackContainer player) setObjectTextureGlobal [0,""];
        };
    };
};
