/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        3: STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_C_Scientist", "Radiation Suit", 4250, "" },
            { "NONE", "Remove Uniform", 0, "" },
			{ "U_C_IDAP_Man_cargo_F", "", 2500, "" },//LOW
			{ "U_C_IDAP_Man_Jeans_F", "", 2500, "" },
			{ "U_C_IDAP_Man_casual_F", "", 2500, "" },
			{ "U_C_IDAP_Man_shorts_F", "", 2500, "" },
			{ "U_C_IDAP_Man_Tee_F", "", 2500, "" },
			{ "U_C_IDAP_Man_TeeShorts_F", "", 2500, "" },
			{ "U_C_ConstructionCoverall_Black_F", "", 2500, "" },
			{ "U_C_ConstructionCoverall_Blue_F", "", 2500, "" },
			{ "U_C_ConstructionCoverall_Red_F", "", 2500, "" },
			{ "U_C_ConstructionCoverall_Vrana_F", "", 2500, "" },
			{ "U_C_Mechanic_01_F", "", 2500, "" }, //LOW
            { "U_C_Poloshirt_stripped", "Poloshirt stripped", 125, "" },
            { "U_C_Poloshirt_redwhite", "Poloshirt Red/White", 150, "" },
            { "U_C_Poloshirt_salmon", "Poloshirt Salmon", 175, "" },
            { "U_C_Poloshirt_blue", "Poloshirt Blue / Monster", 250, "" },
            { "U_C_Poor_2", "Rag tagged clothes", 250, "" },
            { "U_C_Poloshirt_burgundy", "Poloshirt Burgundy", 275, "" },
            { "U_C_Poloshirt_tricolour", "Poloshirt Tricolor", 350, "" },
            { "U_IG_Guerilla2_2", "Green stripped shirt & Pants", 650, "" },
            { "U_IG_Guerilla3_1", "Brown Jacket & Pants", 735, "" },
            { "U_OrestesBody", "Surfing On Land", 1100, "" },
            { "U_IG_Guerilla2_3", "The Outback Rangler", 1200, "" },
            { "U_C_HunterBody_grn", "The Hunters Look", 1500, "" },
            { "U_C_Man_casual_1_F", "Casual Wears", 5000, "" },
            { "U_C_Man_casual_2_F", "Casual Wears", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_3_F", "Casual Wears", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_4_F", "Casual Wears", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_5_F", "Casual Wears", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_6_F", "Casual Wears", 5000, "" }, //Apex DLC
            { "U_C_man_sport_1_F", "Casual Wears", 5000, "" }, //Apex DLC
            { "U_C_man_sport_2_F", "Casual Wears", 5000, "" }, //Apex DLC
            { "U_C_man_sport_3_F", "Casual Wears", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_4_F", "", 175, "" },
            { "U_C_Man_casual_2_F", "", 175, "" },
            { "U_C_Man_casual_3_F", "", 175, "" },
            { "U_C_Man_casual_1_F", "", 175, "" },
            { "U_C_Man_casual_5_F", "", 175, "" },
            { "U_C_Man_casual_6_F", "", 175, "" },
            { "U_I_C_Soldier_Bandit_4_F", "Slumdog Polo (Checkered)", 100, "" },
            { "U_I_C_Soldier_Bandit_1_F", "Slumdog Polo (Brown)", 100, "" },
            { "U_I_C_Soldier_Bandit_2_F", "", 2500, "" },
            { "U_C_Poor_1", "Begger tagged clothes", 175, "" },
            { "U_C_Poor_2", "Worn tagged clothes", 175, "" },
            { "U_OrestesBody", "Surfing On Land", 550, "" },
            { "U_C_man_sport_1_F", "", 75, "" },
            { "U_NikosBody", "Nikos", 2500, "" },
            { "U_NikosAgedBody", "Casual Wears", 2500, "" },
            { "U_I_Soldier_VR", "Admin Suit - Mod", 0, "call life_adminlevel >= 1" },
            { "U_B_Soldier_VR", "Admin Suit - Admin", 0, "call life_adminlevel >= 1" },
            { "U_C_Soldier_VR", "Admin Suit - Senior Admin", 0, "call life_adminlevel >= 1" },
            { "U_O_Soldier_VR", "Founder", 0, "call life_adminlevel >= 1" }

        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_CrewHelmetHeli_B", "Hazmat Breather", 6000, "" },
            { "H_Bandanna_blu", "Blue Bandanna", 60, "" },
			{ "H_PASGT_neckprot_blue_press_F", "Press Helmet", 60, "" },
            { "H_Bandanna_surfer", "Surfer Bandanna", 65, "" },
            { "H_Bandanna_gry", "Grey Bandanna", 75, "" },
            { "H_Bandanna_cbr", "", 80, "" },
            { "H_Bandanna_surfer_grn", "", 65, "" },
            { "H_Bandanna_khk", "Khaki Bandanna", 70, "" },
            { "H_Bandanna_sgg", "Sage Bandanna", 80, "" },
            { "H_StrawHat", "Straw Fedora", 115, "" },
            { "H_BandMask_blk", "Hat & Bandanna", 150, "" },
            { "H_Booniehat_tan", "", 215, "" },
            { "H_Booniehat_oli", "", 215, "" },
            { "H_Booniehat_grn", "", 215, "" },
            { "H_Booniehat_dirty", "", 215, "" },
            { "H_Booniehat_khk_hs", "", 215, "" },
            { "H_H_MilCap_gry", "", 75, "" },
            { "H_MilCap_blue", "", 75, "" },
            { "H_Hat_blue", "", 140, "" },
            { "H_Hat_brown", "", 140, "" },
            { "H_Hat_checker", "", 170, "" },
            { "H_Hat_grey", "", 140, "" },
            { "H_Hat_tan", "", 130, "" },
            { "H_Cap_blu", "", 75, "" },
            { "H_Cap_blk", "", 75, "" },
            { "H_Cap_blk_CMMG", "", 75, "" },
            { "H_Cap_grn", "", 75, "" },
            { "H_Cap_grn_BI", "", 75, "" },
            { "H_Cap_blk_ION", "", 75, "" },
            { "H_Cap_usblack", "", 75, "" },
            { "H_Cap_surfer", "", 75, "" },
            { "H_Cap_oli", "", 75, "" },
            { "H_Cap_tan", "", 75, "" },
            { "H_Helmet_Skate", "", 300, "" },
            { "H_Watchcap_sgg", "", 425, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Shades_Green", "", 20, "" },
            { "G_Shades_Red", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Greenblack", "", 25, "" },
            { "G_Sport_Red", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Aviator", "", 100, "" },
            { "G_Combat", "", 125, "" },
            { "G_Lady_Mirror", "", 150, "" },
            { "G_Lady_Dark", "", 150, "" },
            { "G_Lady_Blue", "", 150, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
			{ "V_Press_F", "", 2500, "" },
            { "V_DeckCrew_blue_F", "", 4500, "" }, //Apex
            { "V_DeckCrew_brown_F", "", 4500, "" },
            { "V_DeckCrew_green_F", "", 4500, "" },
            { "V_DeckCrew_red_F", "", 4500, "" },
            { "V_DeckCrew_violet_F", "", 4500, "" },
            { "V_DeckCrew_yellow_F", "", 4500, "" },
            { "V_DeckCrew_white_F", "", 4500, "" },
			{ "B_LegStrapBag_black_F", "", 4500, "" }, //LoW
			{ "B_LegStrapBag_coyote_F", "", 4500, "" }, //LoW
			{ "B_LegStrapBag_olive_F", "", 4500, "" }, //LoW
			{ "V_Pocketed_black_F", "", 4500, "" }, //LoW
			{ "V_Pocketed_coyote_F", "", 4500, "" }, //LoW
			{ "V_Pocketed_olive_F", "", 4500, "" } //LoW
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_AssaultPack_tna_f", "", 2000, "" }, //Apex DLC
			{ "B_LegStrapBag_black_F", "", 2000, "" }, //LoW
			{ "B_LegStrapBag_coyote_F", "", 2000, "" }, //LoW
			{ "B_LegStrapBag_olive_F", "", 2000, "" }, //LoW
			{ "B_Messenger_Black_F", "", 2000, "" }, //LoW
			{ "B_Messenger_Coyote_F", "", 2000, "" }, //LoW
			{ "B_Messenger_Gray_F", "", 2000, "" }, //LoW
			{ "B_Messenger_Olive_F", "", 2000, "" }, //LoW
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_FieldPack_ghex_f", "", 5000, "" }, //Apex DLC
            { "B_Bergen_sgg", "", 6500, "" },
            { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_Bergen_blk", "", 6500, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" },
            { "B_Carryall_ghex_f", "", 7500, "" }, //Apex DLC
            { "B_Bergen_dgtl_f", "", 6500, "" }, //Apex DLC
            { "B_Bergen_tna_f", "", 6500, "" } //Apex DLC
        };
    };

	class black {
        title = "Black Market";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_C_Scientist", "Radiation Suit", 4250, "" },
            { "NONE", "Remove Uniform", 0, "" },
			{ "U_C_IDAP_Man_cargo_F", "", 2500, "" },
			{ "U_C_IDAP_Man_Jeans_F", "", 2500, "" },
			{ "U_C_IDAP_Man_casual_F", "", 2500, "" },
			{ "U_C_IDAP_Man_shorts_F", "", 2500, "" },
			{ "U_C_IDAP_Man_Tee_F", "", 2500, "" },
			{ "U_C_IDAP_Man_TeeShorts_F", "", 2500, "" },
			{ "U_C_ConstructionCoverall_Black_F", "", 2500, "" },
			{ "U_C_ConstructionCoverall_Blue_F", "", 2500, "" },
			{ "U_C_ConstructionCoverall_Red_F", "", 2500, "" },
			{ "U_C_ConstructionCoverall_Vrana_F", "", 2500, "" },
			{ "U_C_Mechanic_01_F", "", 2500, "" },
            { "U_C_Poloshirt_stripped", "Poloshirt stripped", 125, "" },
            { "U_C_Poloshirt_redwhite", "Poloshirt Red/White", 150, "" },
            { "U_C_Poloshirt_salmon", "Poloshirt Salmon", 175, "" },
            { "U_C_Poloshirt_blue", "Poloshirt Blue / Monster", 250, "" },
            { "U_C_Poor_2", "Rag tagged clothes", 250, "" },
            { "U_C_Poloshirt_burgundy", "Poloshirt Burgundy", 275, "" },
            { "U_C_Poloshirt_tricolour", "Poloshirt Tricolor", 350, "" },
			{ "U_BG_Guerilla1_2_F", "", 2500, "" },
            { "U_IG_Guerilla2_2", "Green stripped shirt & Pants", 650, "" },
            { "U_IG_Guerilla3_1", "Brown Jacket & Pants", 735, "" },
            { "U_OrestesBody", "Surfing On Land", 1100, "" },
            { "U_IG_Guerilla2_3", "The Outback Rangler", 1200, "" },
            { "U_C_HunterBody_grn", "The Hunters Look", 1500, "" },
            { "U_C_Man_casual_1_F", "Casual Wears", 5000, "" },
            { "U_C_Man_casual_2_F", "Casual Wears", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_3_F", "Casual Wears", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_4_F", "Casual Wears", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_5_F", "Casual Wears", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_6_F", "Casual Wears", 5000, "" }, //Apex DLC
            { "U_C_man_sport_1_F", "Casual Wears", 5000, "" }, //Apex DLC
            { "U_C_man_sport_2_F", "Casual Wears", 5000, "" }, //Apex DLC
            { "U_C_man_sport_3_F", "Casual Wears", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_4_F", "", 175, "" },
            { "U_C_Man_casual_2_F", "", 175, "" },
            { "U_C_Man_casual_3_F", "", 175, "" },
            { "U_C_Man_casual_1_F", "", 175, "" },
            { "U_C_Man_casual_5_F", "", 175, "" },
            { "U_C_Man_casual_6_F", "", 175, "" },
            { "U_I_C_Soldier_Bandit_4_F", "Slumdog Polo (Checkered)", 100, "" },
            { "U_I_C_Soldier_Bandit_1_F", "Slumdog Polo (Brown)", 100, "" },
            { "U_I_C_Soldier_Bandit_2_F", "", 2500, "" },
            { "U_C_Poor_1", "Begger tagged clothes", 175, "" },
            { "U_C_Poor_2", "Worn tagged clothes", 175, "" },
            { "U_OrestesBody", "Surfing On Land", 550, "" },
            { "U_C_man_sport_1_F", "", 75, "" },
            { "U_NikosBody", "Nikos", 2500, "" },
            { "U_NikosAgedBody", "Casual Wears", 2500, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_CrewHelmetHeli_B", "Hazmat Breather", 3750, "" },
            { "H_Bandanna_blu", "Blue Bandanna", 60, "" },
            { "H_Bandanna_surfer", "Surfer Bandanna", 65, "" },
            { "H_Bandanna_gry", "Grey Bandanna", 75, "" },
            { "H_Bandanna_cbr", "", 80, "" },
            { "H_Bandanna_surfer_grn", "", 65, "" },
            { "H_Bandanna_khk", "Khaki Bandanna", 70, "" },
            { "H_Bandanna_sgg", "Sage Bandanna", 80, "" },
            { "H_StrawHat", "Straw Fedora", 115, "" },
            { "H_BandMask_blk", "Hat & Bandanna", 150, "" },
            { "H_Booniehat_tan", "", 215, "" },
            { "H_Booniehat_oli", "", 215, "" },
            { "H_Booniehat_grn", "", 215, "" },
            { "H_Booniehat_dirty", "", 215, "" },
            { "H_Booniehat_khk_hs", "", 215, "" },
            { "H_H_MilCap_gry", "", 75, "" },
            { "H_MilCap_blue", "", 75, "" },
            { "H_Hat_blue", "", 140, "" },
            { "H_Hat_brown", "", 140, "" },
            { "H_Hat_checker", "", 170, "" },
            { "H_Hat_grey", "", 140, "" },
            { "H_Hat_tan", "", 130, "" },
            { "H_Cap_blu", "", 75, "" },
            { "H_Cap_blk", "", 75, "" },
            { "H_Cap_blk_CMMG", "", 75, "" },
            { "H_Cap_grn", "", 75, "" },
            { "H_Cap_grn_BI", "", 75, "" },
            { "H_Cap_blk_ION", "", 75, "" },
            { "H_Cap_usblack", "", 75, "" },
            { "H_Cap_surfer", "", 75, "" },
            { "H_Cap_oli", "", 75, "" },
            { "H_Cap_tan", "", 75, "" },
            { "H_Helmet_Skate", "", 300, "" },
            { "H_Watchcap_sgg", "", 425, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Shades_Green", "", 20, "" },
            { "G_Shades_Red", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Greenblack", "", 25, "" },
            { "G_Sport_Red", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Aviator", "", 100, "" },
            { "G_Combat", "", 125, "" },
            { "G_Lady_Mirror", "", 150, "" },
            { "G_Lady_Dark", "", 150, "" },
            { "G_Lady_Blue", "", 150, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_DeckCrew_blue_F", "", 4500, "" },
            { "V_DeckCrew_brown_F", "", 4500, "" },
            { "V_DeckCrew_green_F", "", 4500, "" },
            { "V_DeckCrew_red_F", "", 4500, "" },
            { "V_DeckCrew_violet_F", "", 4500, "" },
            { "V_DeckCrew_yellow_F", "", 4500, "" },
            { "V_DeckCrew_white_F", "", 4500, "" },
			{ "V_TacVest_khk", "", 4500, "" },
			{ "V_TacVest_brn", "", 4500, "" },
			{ "V_TacVest_oli", "", 4500, "" },
			{ "V_TacVest_blk", "", 4500, "" },
			{ "V_TacVest_camo", "", 4500, "" },
			{ "V_TacVestIR_blk", "", 4500, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_AssaultPack_tna_f", "", 2000, "" }, //Apex DLC
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_FieldPack_ghex_f", "", 5000, "" }, //Apex DLC
            { "B_Bergen_sgg", "", 6500, "" },
            { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_Bergen_blk", "", 6500, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" },
            { "B_Carryall_ghex_f", "", 7500, "" }, //Apex DLC
            { "B_Bergen_dgtl_f", "", 6500, "" }, //Apex DLC
            { "B_Bergen_tna_f", "", 6500, "" } //Apex DLC
        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        conditions = "";
        side = "cop";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_B_CombatUniform_mcam", $STR_C_Cop_uniforms, 200, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Cap_police", "", 25, "" },
			{ "H_CrewHelmetHeli_B", "Gas Mask", 1000, "" },
			{ "H_Beret_blk_POLICE", "", 25, "call life_coplevel >= 6" },
			{ "H_Beret_Colonel", "", 25, "call life_coplevel >= 6" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Aviator", "", 100, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_TacVest_blk_POLICE", "", 1000, "" },
			{ "V_PlateCarrier2_blk", "", 1000, "call life_coplevel >= 5" },
            { "V_PlateCarrier1_blk", "", 2500, "call life_coplevel >= 2" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_Carryall_cbr", "", 3500, "" },
			{ "B_Parachute", "", 1500, "" }
        };
    };

    class swat {
        title = "Marshal Clothing Shop";
        conditions = "license_cop_swat";
        side = "cop";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_Marshal", "Marshal Uniform", 200, "" },
            { "U_B_T_Soldier_F", "Marshal Tactical Uniform", 200, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Cap_police", "", 25, "" },
            { "H_Cap_marshal", "", 25, "" },
			{ "H_CrewHelmetHeli_B", "Gas Mask", 1000, "" },
			{ "H_Beret_blk_POLICE", "", 25, "" },
			{ "H_Beret_Colonel", "", 25, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Aviator", "", 100, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_TacVest_blk_POLICE", "", 1000, "" },
			{ "V_PlateCarrier2_blk", "", 1000, "" },
            { "V_PlateCarrier1_blk", "", 2500, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_Carryall_cbr", "", 3500, "" },
			{ "B_Parachute", "", 1500, "" }
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        conditions = "license_civ_dive";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_B_Wetsuit", "", 2000, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Diving", "", 500, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_RebreatherB", "", 5000, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class cop_boat {
        title = "STR_Shops_C_Diving";
        conditions = "";
        side = "cop";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_B_Wetsuit", "", 2000, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Diving", "", 100, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_RebreatherB", "", 1000, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_ViperHarness_blk_F", "", 1000, "" }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        conditions = "license_civ_gun";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 2900, "" },
            { "V_DeckCrew_blue_F", "", 4500, "" },
            { "V_DeckCrew_brown_F", "", 4500, "" },
            { "V_DeckCrew_green_F", "", 4500, "" },
            { "V_DeckCrew_red_F", "", 4500, "" },
            { "V_DeckCrew_violet_F", "", 4500, "" },
            { "V_DeckCrew_yellow_F", "", 4500, "" },
            { "V_DeckCrew_white_F", "", 4500, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 1900, "" },
            { "V_DeckCrew_blue_F", "", 4500, "" },
            { "V_DeckCrew_brown_F", "", 4500, "" },
            { "V_DeckCrew_green_F", "", 4500, "" },
            { "V_DeckCrew_red_F", "", 4500, "" },
            { "V_DeckCrew_violet_F", "", 4500, "" },
            { "V_DeckCrew_yellow_F", "", 4500, "" },
            { "V_DeckCrew_white_F", "", 4500, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        conditions = "";
        side = "med";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_Rangemaster", $STR_C_EMS_uniforms, 50, "" },
			{ "U_B_CombatUniform_mcam", $STR_C_EMS_uniforms, 50, "call life_mediclevel >= 2" },
			{ "U_O_wetsuit", $STR_C_EMS_uniforms, 50, "call life_mediclevel >= 4" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Cap_marshal", "", 10, "" },
			{ "H_CrewHelmetHeli_B", "", 25, "call life_mediclevel >= 5" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Blue", "", 10, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_Carryall_cbr", $STR_C_EMS_backpacks, 3000, "" },
			{ "B_Parachute", "", 3000, "call life_mediclevel >= 2" }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        conditions = "mav_ttm_var_rebel > 0";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_I_C_Soldier_Bandit_5_F", "", 100, "" },
			{ "U_I_Wetsuit", "", 100, "" },
            { "U_I_C_Soldier_Bandit_3_F", "", 100, "" },
			{ "U_C_ConstructionCoverall_Red_F", "", 100, "" },
            { "U_IG_Guerilla1_1", "", 4500, "" },
            { "U_I_G_Story_Protagonist_F", "", 8750, "" },
            { "U_I_G_resistanceLeader_F", "", 4750, "" },
            { "U_IG_leader", "Guerilla Leader", 7670, "" },
            { "U_I_CombatUniform", "", 4750, "" },
            { "U_B_T_Soldier_AR_F", "", 5500, "" },
            { "U_B_T_Soldier_F", "", 4500, "" },
            { "U_B_survival_uniform", "", 5000, "" },
            { "U_I_C_Soldier_Para_2_F", "", 5500, "" },
            { "U_I_C_Soldier_Para_3_F", "", 3500, "" },
            { "U_I_C_Soldier_Para_5_F", "", 3000, "" },
            { "U_I_C_Soldier_Para_4_F", "", 3000, "" },
            { "U_I_C_Soldier_Para_1_F", "", 3500, "" },
            { "U_I_C_Soldier_Camo_F", "Syndikat Uniform", 6000, "" },
            { "U_B_CTRG_Soldier_F", "Stealth Uniform (Tropic)", 13000, "" },
            { "U_Marshal", "", 2500, "" },
            { "U_B_CombatUniform_mcam_vest", "", 4500, "" },
            { "U_B_T_Soldier_SL_F", "", 3500, "" },
			{ "U_BG_Guerilla1_2_F", "", 2500, "" },
            { "U_B_CTRG_Soldier_urb_2_F", "", 2500, "" },
            { "U_B_CTRG_Soldier_urb_3_F", "", 2500, "" },
            { "U_B_CTRG_Soldier_urb_1_F", "", 2500, "" },
            { "U_B_CTRG_Soldier_2_F", "", 2500, "" },
            { "U_I_OfficerUniform", "", 2500, "" },
            { "U_B_CombatUniform_mcam_tshirt", "", 2500, "" },
            { "U_B_CombatUniform_mcam", "", 2500, "" },
            { "U_I_CombatUniform_shortsleeve", "", 2500, "" },
			{ "U_C_Scientist", "", 2500, "" },
            { "U_B_GEN_Soldier_F", "", 3500, "" },
            { "U_BG_Guerilla1_1", "", 2500, "" },
            { "U_BG_Guerilla2_2", "", 2500, "" },
            { "U_BG_Guerilla2_1", "", 2500, "" },
            { "U_BG_Guerilla2_3", "", 2500, "" },
			{ "U_O_Wetsuit", "", 25000, "" },
			{ "U_O_CombatUniform_oucamo", "", 20000, "" },
			{ "U_O_CombatUniform_ocamo", "", 20000, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_ShemagOpen_khk", "", 800, "" },
            { "H_MilCap_oucamo", "", 500, "" },
            { "H_MilCap_gen_F", "", 400, "" },
            { "H_MilCap_tna_F", "", 400, "" },
			{ "H_Construction_basic_red_F", "", 400, "" },
            { "H_Beret_gen_F", "", 2000, "" },
            { "H_Bandanna_mcamo", "", 250, "" },
            { "H_Bandanna_camo", "", 250, "" },
            { "H_Booniehat_mcamo", "Booniehat (MTP)", 500, "" },
            { "H_Booniehat_indp", " Booniehat (Khaki)", 500, "" },
            { "H_Booniehat_tna_F", "Booniehat (Tropic)", 500, "" },
            { "H_TurbanO_blk", "Black Turban", 500, "" },
			{ "H_Beret_red", "Red Beret", 500, "" },
            { "H_Hat_camo", "", 500, "" },
            { "H_HelmetO_ocamo", "", 1000, "" },
            { "H_HelmetO_ghex_F", "", 1000, "" },
            { "H_HelmetB_light", "", 1000, "" },
            { "H_HelmetB_light_desert", "", 1000, "" },
            { "H_HelmetB_light_grass", "", 1000, "" },
            { "H_HelmetB_light_sand", "", 1000, "" },
            { "H_HelmetB_light_snakeskin", "", 1000, "" },
            { "H_HelmetB_Light_tna_F", "", 1000, "" },
            { "H_HelmetB_Enh_tna_F", "", 2000, "" },
            { "H_HelmetB_paint", "", 2000, "" },
            { "H_HelmetB_plain_mcamo", "", 2000, "" },
            { "H_HelmetB_tna_F", "", 2000, "" },
            { "H_HelmetIA_net", "", 2000, "" },
            { "H_Shemag_tan", "", 4000 "" },
            { "H_Shemag_olive_hs", "", 4000 "" },
			{ "H_Cap_red", "", 100, "" },
		    { "H_Cap_blu", "", 100, "" },
            { "H_ShemagOpen_tan", "", 4250 "" },
            { "H_Shemag_olive", "", 4250 "" },
            { "H_HelmetCrew_O_ghex_F", "", 5000 "" },
			{ "H_HelmetSpecB_blk", "", 7500 "" },
			{ "H_HelmetLeaderO_ghex_F", "", 50000, "" },
			{ "H_HelmetSpecO_ghex_F", "", 75000, "" },
			{ "H_PilotHelmetFighter_O", "", 100000, "" },
			{ "H_CrewHelmetHeli_B", "Gas Mask", 80000, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Combat", "", 125, "" },
            { "G_Balaclava_blk", "", 150, "" },
            { "G_Balaclava_combat", "", 150, "" },
            { "G_Balaclava_lowprofile", "", 150, "" },
            { "G_Balaclava_oli", "", 150, "" },
            { "G_Bandanna_blk", "", 150, "" },
            { "G_Bandanna_khk", "", 150, "" },
            { "G_Bandanna_oli", "", 150, "" },
            { "G_Bandanna_shades", "", 150, "" },
            { "G_Bandanna_sport", "", 150, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
			{ "V_DeckCrew_red_F", "", 1500, "" },
			{ "V_Plain_crystal_F", "", 1500, "" },
            { "V_TacVest_camo", "", 3250, "" },
            { "V_TacVest_khk", "", 3250, "" },
			{ "V_PlateCarrier1_rgr", "", 12000, "" },
            { "V_PlateCarrier2_rgr", "", 14500, "" },
			{ "V_PlateCarrierIA1_dgtl", "", 25000, "" },
			{ "V_PlateCarrierL_CTRG", "", 30000, "" },
			{ "V_PlateCarrierIAGL_dgtl", "", 75000, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_OutdoorPack_blk", "", 200, "" },
            { "B_AssaultPack_khk", "", 1000, "" },
            { "B_AssaultPack_dgtl", "", 1000, "" },
            { "B_AssaultPack_rgr", "", 1000, "" },
            { "B_AssaultPack_sgg", "", 1000, "" },
            { "B_AssaultPack_blk", "", 1000, "" },
            { "B_AssaultPack_cbr", "", 1000, "" },
            { "B_AssaultPack_mcamo", "", 1000, "" },
            { "B_TacticalPack_oli", "", 500, "" },
            { "B_Kitbag_mcamo", "", 1500, "" },
            { "B_Kitbag_sgg", "", 31500, "" },
            { "B_Kitbag_cbr", "", 1500, "" },
            { "B_FieldPack_blk", "", 2000, "" },
            { "B_FieldPack_ocamo", "", 2000, "" },
            { "B_FieldPack_oucamo", "", 2000, "" },
            { "B_Bergen_sgg", "", 2500, "" },
            { "B_Bergen_mcamo", "", 2500, "" },
            { "B_Bergen_rgr", "", 2500, "" },
            { "B_Bergen_blk", "", 2500, "" },
            { "B_Carryall_ocamo", "", 3500, "" },
            { "B_Carryall_oucamo", "", 3500, "" },
            { "B_Carryall_mcamo", "", 3500, "" },
            { "B_Carryall_oli", "", 3500, "" },
            { "B_Carryall_khk", "", 3500, "" },
            { "B_Carryall_cbr", "", 3500, "" },
            { "B_Bergen_dgtl_f", "", 9500, "" },
            { "B_Bergen_tna_f", "", 9500, "" },
			{ "B_Parachute", "", 10000, "" },
			{ "B_ViperLightHarness_ghex_F", "", 10000, "" },
			{ "B_ViperLightHarness_hex_F", "", 10000, "" },
			{ "B_ViperLightHarness_khk_F", "", 10000, "" },
			{ "B_ViperLightHarness_oli_F", "", 10000, "" },
			{ "B_ViperHarness_ghex_F", "", 15000, "" },
			{ "B_ViperHarness_hex_F", "", 15000, "" },
			{ "B_ViperHarness_khk_F", "", 15000, "" },
			{ "B_ViperHarness_oli_F", "", 15000, "" }
        };
    };

    class donator_clothing {
        title = "STR_Shops_C_Donator";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_I_C_Soldier_Bandit_5_F", "", 100, "call life_donorlevel >= 1" },
			{ "U_I_Wetsuit", "", 100, "call life_donorlevel >= 1" },
            { "U_I_C_Soldier_Bandit_3_F", "", 100, "call life_donorlevel >= 1" },
            { "U_IG_Guerilla1_1", "", 4500, "call life_donorlevel >= 1" },
            { "U_I_G_Story_Protagonist_F", "", 8750, "call life_donorlevel >= 1" },
            { "U_I_G_resistanceLeader_F", "", 4750, "call life_donorlevel >= 1" },
            { "U_IG_leader", "Guerilla Leader", 7670, "call life_donorlevel >= 1" },
            { "U_I_CombatUniform", "", 4750, "call life_donorlevel >= 1" },
            { "U_B_T_Soldier_AR_F", "", 5500, "call life_donorlevel >= 1" },
            { "U_B_T_Soldier_F", "", 4500, "call life_donorlevel >= 1" },
            { "U_B_survival_uniform", "", 5000, "call life_donorlevel >= 1" },
            { "U_I_C_Soldier_Para_2_F", "", 5500, "call life_donorlevel >= 1" },
            { "U_I_C_Soldier_Para_3_F", "", 3500, "call life_donorlevel >= 1" },
            { "U_I_C_Soldier_Para_5_F", "", 3000, "call life_donorlevel >= 1" },
            { "U_I_C_Soldier_Para_4_F", "", 3000, "call life_donorlevel >= 1" },
            { "U_I_C_Soldier_Para_1_F", "", 3500, "call life_donorlevel >= 1" },
            { "U_I_C_Soldier_Camo_F", "Syndikat Uniform", 6000, "call life_donorlevel >= 1" },
            { "U_B_CTRG_Soldier_F", "Stealth Uniform (Tropic)", 13000, "call life_donorlevel >= 1" },
            { "U_Marshal", "", 2500, "call life_donorlevel >= 1" },
            { "U_B_CombatUniform_mcam_vest", "", 4500, "call life_donorlevel >= 1" },
            { "U_B_T_Soldier_SL_F", "", 3500, "call life_donorlevel >= 1" },
			{ "U_BG_Guerilla1_2_F", "", 2500, "call life_donorlevel >= 1" },
            { "U_B_CTRG_Soldier_urb_2_F", "", 2500, "call life_donorlevel >= 1" },
            { "U_B_CTRG_Soldier_urb_3_F", "", 2500, "call life_donorlevel >= 1" },
            { "U_B_CTRG_Soldier_urb_1_F", "", 2500, "call life_donorlevel >= 1" },
            { "U_B_CTRG_Soldier_2_F", "", 2500, "call life_donorlevel >= 1" },
            { "U_I_OfficerUniform", "", 2500, "call life_donorlevel >= 1" },
            { "U_B_CombatUniform_mcam_tshirt", "", 2500, "call life_donorlevel >= 1" },
            { "U_B_CombatUniform_mcam", "", 2500, "call life_donorlevel >= 1" },
            { "U_I_CombatUniform_shortsleeve", "", 2500, "call life_donorlevel >= 1" },
            { "U_B_GEN_Soldier_F", "", 3500, "call life_donorlevel >= 1" },
            { "U_BG_Guerilla1_1", "", 2500, "call life_donorlevel >= 1" },
            { "U_BG_Guerilla2_2", "", 2500, "call life_donorlevel >= 1" },
            { "U_BG_Guerilla2_1", "", 2500, "call life_donorlevel >= 1" },
            { "U_BG_Guerilla2_3", "", 2500, "call life_donorlevel >= 1" },
			{ "U_O_Wetsuit", "", 25000, "call life_donorlevel >= 1" },
			{ "U_O_CombatUniform_oucamo", "", 20000, "call life_donorlevel >= 1" },
			{ "U_I_pilotCoveralls", "", 3000, "call life_donorlevel >= 1" },
			{ "U_I_HeliPilotCoveralls", "", 3000, "call life_donorlevel >= 1" },
			{ "U_Competitor", "", 3000, "call life_donorlevel >= 1" },
			{ "U_MillerBody", "", 3000, "call life_donorlevel >= 1" },
			{ "U_KerryBody", "", 3000, "call life_donorlevel >= 1" },
			{ "U_IG_Guerilla2_1	", "", 3000, "call life_donorlevel >= 1" },
			{ "U_IG_Guerilla3_2", "", 3000, "call life_donorlevel >= 1" },
			{ "U_C_Journalist", "", 3000, "call life_donorlevel >= 1" },
			//Tier 2
			{ "U_B_CTRG_1", "", 5000, "call life_donorlevel >= 2" },
			{ "U_B_CTRG_2", "", 5000, "call life_donorlevel >= 2" },
			{ "U_B_CTRG_3", "", 5000, "call life_donorlevel >= 2" },
			{ "U_B_CTRG_Soldier_3_F", "", 5000, "call life_donorlevel >= 2" },
			{ "U_B_CTRG_Soldier_F", "", 5000, "call life_donorlevel >= 2" },
			{ "U_B_CTRG_Soldier_2_F", "", 5000, "call life_donorlevel >= 2" },
			{ "U_B_CTRG_Soldier_urb_1_F", "", 5000, "call life_donorlevel >= 2" },
			{ "U_B_CTRG_Soldier_urb_2_F", "", 5000, "call life_donorlevel >= 2" },
			{ "U_B_CTRG_Soldier_urb_3_F", "", 5000, "call life_donorlevel >= 2" },
			//Tier 3
			{ "U_O_T_Soldier_F", "", 35000, "call life_donorlevel >= 3" },
			{ "U_O_T_Sniper_F", "", 35000, "call life_donorlevel >= 3" },
			{ "U_O_T_Officer_F", "", 35000, "call life_donorlevel >= 3" },
			{ "U_O_GhillieSuit", "", 35000, "call life_donorlevel >= 3" },
			{ "U_O_FullGhillie_sard", "", 35000, "call life_donorlevel >= 3" },
			{ "U_O_FullGhillie_lsh", "", 35000, "call life_donorlevel >= 3" },
			{ "U_O_T_FullGhillie_tna_F", "", 35000, "call life_donorlevel >= 3" },
			{ "U_O_FullGhillie_ard", "", 35000, "call life_donorlevel >= 3" },
			{ "U_I_GhillieSuit", "", 35000, "call life_donorlevel >= 3" },
			{ "U_B_FullGhillie_lsh", "", 35000, "call life_donorlevel >= 3" },
			{ "U_B_FullGhillie_sard", "", 35000, "call life_donorlevel >= 3" },
			{ "U_B_FullGhillie_ard", "", 35000, "call life_donorlevel >= 3" },
			{ "U_I_FullGhillie_lsh", "", 35000, "call life_donorlevel >= 3" },
			{ "U_I_FullGhillie_sard", "", 35000, "call life_donorlevel >= 3" },
			{ "U_I_FullGhillie_ard", "", 35000, "call life_donorlevel >= 3" },
			{ "U_B_T_Sniper_F", "", 35000, "call life_donorlevel >= 3" },
			{ "U_B_T_FullGhillie_tna_F", "", 35000, "call life_donorlevel >= 3" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_ShemagOpen_khk", "", 800, "call life_donorlevel >= 1" },
            { "H_MilCap_oucamo", "", 500, "call life_donorlevel >= 1" },
            { "H_MilCap_gen_F", "", 400, "call life_donorlevel >= 1" },
            { "H_MilCap_tna_F", "", 400, "call life_donorlevel >= 1" },
            { "H_Beret_gen_F", "", 2000, "call life_donorlevel >= 1" },
            { "H_Bandanna_mcamo", "", 250, "call life_donorlevel >= 1" },
            { "H_Bandanna_camo", "", 250, "call life_donorlevel >= 1" },
            { "H_Booniehat_mcamo", "Booniehat (MTP)", 500, "call life_donorlevel >= 1" },
            { "H_Booniehat_indp", " Booniehat (Khaki)", 500, "call life_donorlevel >= 1" },
            { "H_Booniehat_tna_F", "Booniehat (Tropic)", 500, "call life_donorlevel >= 1" },
            { "H_TurbanO_blk", "Black Turban", 500, "call life_donorlevel >= 1" },
            { "H_Hat_camo", "", 500, "call life_donorlevel >= 1" },
            { "H_HelmetO_ocamo", "", 1000, "call life_donorlevel >= 1" },
            { "H_HelmetO_ghex_F", "", 1000, "call life_donorlevel >= 1" },
            { "H_HelmetB_light", "", 1000, "call life_donorlevel >= 1" },
            { "H_HelmetB_light_desert", "", 1000, "call life_donorlevel >= 1" },
            { "H_HelmetB_light_grass", "", 1000, "call life_donorlevel >= 1" },
            { "H_HelmetB_light_sand", "", 1000, "call life_donorlevel >= 1" },
            { "H_HelmetB_light_snakeskin", "", 1000, "call life_donorlevel >= 1" },
            { "H_HelmetB_Light_tna_F", "", 1000, "call life_donorlevel >= 1" },
            { "H_HelmetB_Enh_tna_F", "", 2000, "call life_donorlevel >= 1" },
            { "H_HelmetB_paint", "", 2000, "call life_donorlevel >= 1" },
            { "H_HelmetB_plain_mcamo", "", 2000, "call life_donorlevel >= 1" },
            { "H_HelmetB_tna_F", "", 2000, "call life_donorlevel >= 1" },
            { "H_HelmetIA_net", "", 2000, "call life_donorlevel >= 1" },
            { "H_Shemag_tan", "", 4000 "call life_donorlevel >= 1" },
            { "H_Shemag_olive_hs", "", 4000 "call life_donorlevel >= 1" },
			{ "H_Cap_red", "", 100, "call life_donorlevel >= 1" },
		    { "H_Cap_blu", "", 100, "call life_donorlevel >= 1" },
            { "H_ShemagOpen_tan", "", 4250 "call life_donorlevel >= 1" },
            { "H_Shemag_olive", "", 4250 "call life_donorlevel >= 1" },
            { "H_HelmetCrew_O_ghex_F", "", 5000 "call life_donorlevel >= 1" },
			{ "H_HelmetSpecB_blk", "", 7500 "call life_donorlevel >= 1" },
			{ "H_HelmetLeaderO_ghex_F", "", 50000, "call life_donorlevel >= 1" },
			{ "H_HelmetSpecO_ghex_F", "", 75000, "call life_donorlevel >= 1" },
			{ "H_PilotHelmetFighter_O", "", 20000, "call life_donorlevel >= 1" },
			{ "H_CrewHelmetHeli_B", "Gas Mask", 40000, "call life_donorlevel >= 1" },
			{ "H_PilotHelmetHeli_B", "Gas Mask", 10000, "call life_donorlevel >= 1" },
			{ "H_PilotHelmetHeli_O", "Gas Mask", 10000, "call life_donorlevel >= 1" },
			{ "H_PilotHelmetHeli_I", "Gas Mask", 10000, "call life_donorlevel >= 1" },
			{ "H_HelmetLeaderO_oucamo", "Gas Mask", 10000, "call life_donorlevel >= 1" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Black", "", 20, "call life_donorlevel >= 1" },
            { "G_Shades_Blue", "", 20, "call life_donorlevel >= 1" },
            { "G_Sport_Blackred", "", 25, "call life_donorlevel >= 1" },
            { "G_Sport_Checkered", "", 25, "call life_donorlevel >= 1" },
            { "G_Sport_Blackyellow", "", 25, "call life_donorlevel >= 1" },
            { "G_Sport_BlackWhite", "", 25, "call life_donorlevel >= 1" },
            { "G_Lowprofile", "", 30, "call life_donorlevel >= 1" },
            { "G_Squares", "", 50, "call life_donorlevel >= 1" },
            { "G_Combat", "", 125, "call life_donorlevel >= 1" },
            { "G_Balaclava_blk", "", 150, "call life_donorlevel >= 1" },
            { "G_Balaclava_combat", "", 150, "call life_donorlevel >= 1" },
            { "G_Balaclava_lowprofile", "", 150, "call life_donorlevel >= 1" },
            { "G_Balaclava_oli", "", 150, "call life_donorlevel >= 1" },
            { "G_Bandanna_blk", "", 150, "call life_donorlevel >= 1" },
            { "G_Bandanna_khk", "", 150, "call life_donorlevel >= 1" },
            { "G_Bandanna_oli", "", 150, "call life_donorlevel >= 1" },
            { "G_Bandanna_shades", "", 150, "call life_donorlevel >= 1" },
            { "G_Bandanna_sport", "", 150, "call life_donorlevel >= 1" },
            { "G_Bandanna_tan", "", 150, "call life_donorlevel >= 1" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_TacVest_camo", "", 3250, "call life_donorlevel >= 1" },
            { "V_TacVest_khk", "", 3250, "call life_donorlevel >= 1" },
			{ "V_PlateCarrier1_rgr", "", 12000, "call life_donorlevel >= 1" },
            { "V_PlateCarrier2_rgr", "", 14500, "call life_donorlevel >= 1" },
			{ "V_PlateCarrierIA1_dgtl", "", 25000, "call life_donorlevel >= 1" },
			{ "V_PlateCarrierL_CTRG", "", 30000, "call life_donorlevel >= 1" },
			{ "V_PlateCarrierIAGL_dgtl", "", 75000, "call life_donorlevel >= 1" },
			{ "V_RebreatherIR", "", 5000, "call life_donorlevel >= 1" },
			{ "V_RebreatherIA", "", 5000, "call life_donorlevel >= 1" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "call life_donorlevel >= 1" },
            { "B_OutdoorPack_blk", "", 200, "call life_donorlevel >= 1" },
            { "B_AssaultPack_khk", "", 1000, "call life_donorlevel >= 1" },
            { "B_AssaultPack_dgtl", "", 1000, "call life_donorlevel >= 1" },
            { "B_AssaultPack_rgr", "", 1000, "call life_donorlevel >= 1" },
            { "B_AssaultPack_sgg", "", 1000, "call life_donorlevel >= 1" },
            { "B_AssaultPack_blk", "", 1000, "call life_donorlevel >= 1" },
            { "B_AssaultPack_cbr", "", 1000, "call life_donorlevel >= 1" },
            { "B_AssaultPack_mcamo", "", 1000, "call life_donorlevel >= 1" },
            { "B_TacticalPack_oli", "", 500, "call life_donorlevel >= 1" },
            { "B_Kitbag_mcamo", "", 1500, "call life_donorlevel >= 1" },
            { "B_Kitbag_sgg", "", 31500, "call life_donorlevel >= 1" },
            { "B_Kitbag_cbr", "", 1500, "call life_donorlevel >= 1" },
            { "B_FieldPack_blk", "", 2000, "call life_donorlevel >= 1" },
            { "B_FieldPack_ocamo", "", 2000, "call life_donorlevel >= 1" },
            { "B_FieldPack_oucamo", "", 2000, "call life_donorlevel >= 1" },
            { "B_Bergen_sgg", "", 2500, "call life_donorlevel >= 1" },
            { "B_Bergen_mcamo", "", 2500, "call life_donorlevel >= 1" },
            { "B_Bergen_rgr", "", 2500, "call life_donorlevel >= 1" },
            { "B_Bergen_blk", "", 2500, "call life_donorlevel >= 1" },
            { "B_Carryall_ocamo", "", 3500, "call life_donorlevel >= 1" },
            { "B_Carryall_oucamo", "", 3500, "call life_donorlevel >= 1" },
            { "B_Carryall_mcamo", "", 3500, "call life_donorlevel >= 1" },
            { "B_Carryall_oli", "", 3500, "call life_donorlevel >= 1" },
            { "B_Carryall_khk", "", 3500, "call life_donorlevel >= 1" },
            { "B_Carryall_cbr", "", 3500, "call life_donorlevel >= 1" },
            { "B_Bergen_dgtl_f", "", 9500, "call life_donorlevel >= 1" },
            { "B_Bergen_tna_f", "", 9500, "call life_donorlevel >= 1" },
			{ "B_Parachute", "", 10000, "call life_donorlevel >= 1" },
			{ "B_ViperLightHarness_ghex_F", "", 10000, "call life_donorlevel >= 1" },
			{ "B_ViperLightHarness_hex_F", "", 10000, "call life_donorlevel >= 1" },
			{ "B_ViperLightHarness_khk_F", "", 10000, "call life_donorlevel >= 1" },
			{ "B_ViperLightHarness_oli_F", "", 10000, "call life_donorlevel >= 1" },
			{ "B_ViperHarness_ghex_F", "", 15000, "call life_donorlevel >= 1" },
			{ "B_ViperHarness_hex_F", "", 15000, "call life_donorlevel >= 1" },
			{ "B_ViperHarness_khk_F", "", 15000, "call life_donorlevel >= 1" },
			{ "B_ViperHarness_oli_F", "", 15000, "call life_donorlevel >= 1" }
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_C_Driver_1_black", "", 1500, "" },
            { "U_C_Driver_1_blue", "", 1500, "" },
            { "U_C_Driver_1_red", "", 1500, "" },
            { "U_C_Driver_1_orange", "", 1500, "" },
            { "U_C_Driver_1_green", "", 1500, "" },
            { "U_C_Driver_1_white", "", 1500, "" },
            { "U_C_Driver_1_yellow", "", 1500, "" },
            { "U_C_Driver_2", "", 3500, "" },
            { "U_C_Driver_1", "", 3600, "" },
            { "U_C_Driver_3", "", 3700, "" },
            { "U_C_Driver_4", "", 3700, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_RacingHelmet_1_black_F", "", 1000, "" },
            { "H_RacingHelmet_1_red_F", "", 1000, "" },
            { "H_RacingHelmet_1_white_F", "", 1000, "" },
            { "H_RacingHelmet_1_blue_F", "", 1000, "" },
            { "H_RacingHelmet_1_yellow_F", "", 1000, "" },
            { "H_RacingHelmet_1_green_F", "", 1000, "" },
            { "H_RacingHelmet_1_F", "", 2500, "" },
            { "H_RacingHelmet_2_F", "", 2500, "" },
            { "H_RacingHelmet_3_F", "", 2500, "" },
            { "H_RacingHelmet_4_F", "", 2500, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };
};
