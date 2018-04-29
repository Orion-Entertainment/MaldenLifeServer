/*
    File: fn_civLoadout.sqf
    Author: Tobias 'Xetoxyc' Sittenauer

    Description:
    Loads the civs out with the default gear, with randomized clothing / Edited by Jeriah to add custom clothing
*/
private ["_handle"];
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

_clothings = ["U_C_Poloshirt_blue"];
/* Start Jeriah */
_jeriahHG = ["H_Booniehat_dirty","H_Booniehat_grn","H_Cap_blu","H_Cap_red"];
_jeriahBP = ["B_TacticalPack_blk","B_Kitbag_rgr"];
_jeriahNV = ["NVGoggles","NVGoggles_INDEP","NVGoggles_OPFOR"];

player addHeadgear (selectRandom _jeriahHG);
player addBackpack (selectRandom _jeriahBP);
player addItem (selectRandom _jeirahNV);
/* End Jeriah */
player addUniform (selectRandom _clothings);


/* ITEMS */
player linkItem "ItemMap";
player linkItem "ItemCompass";

[] call life_fnc_playerSkins;
[] call life_fnc_saveGear;
