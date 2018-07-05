class WeaponShops {
    class gun {
        name = "Gun Shop";
        side = "civ";
        conditions = "";
        items[] = {
			{ "hgun_Rook40_F", "", 5000, -1, "license_civ_gun1" }, //Rook
            { "hgun_Pistol_heavy_02_F", "", 7500, -1, "license_civ_gun1" }, //Zubr
            { "hgun_ACPC2_F", "", 15000, -1, "license_civ_gun1" }, //45 ACP
			{ "hgun_PDW2000_F", "", 20000, -1, "license_civ_gun2" }, //PDW
			{ "SMG_05_F", "", 25000, -1, "license_civ_gun2" }, //Protector
			{ "SMG_01_F", "", 30000, -1, "license_civ_gun2" }, //Vermin
			{ "arifle_TRG21_F", "", 45000, -1, "license_civ_gun3" }, //TRG
			{ "arifle_Mk20_F", "", 45000, -1, "license_civ_gun3" }, //Mk-20
			{ "arifle_SPAR_01_blk_F", "", 140000, -1, "license_civ_gun3" } //Spar16
        };
        mags[] = {
			{ "30Rnd_9x21_Mag", "", 100, 50, "" }, //9mm
			{ "30Rnd_9x21_Mag_SMG_02", "", 100, 50, "" }, //9mm
            { "6Rnd_45ACP_Cylinder", "", 100, 50, "" }, //zubr
            { "9Rnd_45ACP_Mag", "", 100, 50, "" }, //acp
			{ "30Rnd_45ACP_Mag_SMG_01", "", 100, 50, "" }, //vermin
			{ "30Rnd_556x45_Stanag", "", 100, 50, "" }, //MK20
			{ "30Rnd_556x45_Stanag", "", 100, 50, "" }, //TRG
			{ "30Rnd_556x45_Stanag", "", 100, 50, "" } //spar16
        };
        accs[] = {
			{ "optic_Arco", "", 2500, -1, "" }, //arco
			{ "optic_Arco_blk_F", "", 2500, -1, "" }, //black arco
			{ "optic_ERCO_blk_F", "", 2500, -1, "" }, //black erco
			{ "optic_Holosight_blk_F", "", 2500, -1, "" }, //black holo
			{ "optic_Holosight_smg_blk_F", "", 2500, -1, "" }, //black holo smg
			{ "optic_MRCO", "", 2500, -1, "" }, //mrco
			{ "optic_DMS", "", 10000, -1, "" }, //dms
			{ "acc_flashlight", "", 750, 375, "" }, //flashlight
			{ "acc_flashlight_pistol", "", 750, 375, "" }, //flashlight
			{ "bipod_01_F_blk", "", 2500, -1, "" } //bipod
        };
    };

    class rebel {
        name = "Rebel Weapon Shop";
        side = "civ";
        conditions = "mav_ttm_var_rebel > 0";
        items[] = {
			{ "NVGoggles_OPFOR", "", 5000, 75, "mav_ttm_var_rebel > 0"}, //Black NightVision
            { "Binocular", "", 150, 75, "mav_ttm_var_rebel > 0" },      //Binocular
            { "ItemGPS", "", 100, 50, "mav_ttm_var_rebel > 0" },       //GPS
			{ "hgun_Rook40_F", "", 5000, -1, "mav_ttm_var_rebel > 0" }, //Rook
            { "hgun_Pistol_heavy_02_F", "", 7500, -1, "mav_ttm_var_rebel > 0" }, //Zubr
            { "hgun_ACPC2_F", "", 15000, -1, "mav_ttm_var_rebel > 0" }, //45 ACP
			{ "hgun_PDW2000_F", "", 20000, -1, "mav_ttm_var_rebel > 0" }, //PDW
			{ "SMG_05_F", "", 25000, -1, "mav_ttm_var_rebel > 0" }, //Protector
			{ "SMG_01_F", "", 30000, -1, "mav_ttm_var_rebel > 0" }, //vermin
			{ "arifle_Mk20_F", "", 40000, -1, "mav_ttm_var_rebel > 0" }, //MK20
			{ "arifle_TRG21_F", "", 35000, -1, "mav_ttm_var_rebel > 0" }, //TRG21
			{ "arifle_SPAR_01_blk_F", "", 45000, -1, "mav_ttm_var_rebel > 0" }, //SPAR16
			{ "arifle_SDAR_F", "", 30000, -1, "mav_ttm_var_rebel > 0" }, //SDAR
			{ "arifle_MXC_khk_F", "", 55000, -1, "mav_ttm_var_rebel >= 2" }, //MXC
			{ "arifle_MX_F", "", 65000, -1, "mav_ttm_var_rebel > =2" }, //MX
			{ "arifle_CTAR_blk_F", "", 60000, -1, "mav_ttm_var_rebel >= 2" }, //Car-95
			{ "arifle_Katiba_F", "", 70000, -1, "mav_ttm_var_rebel >= 2" }, //Katiba
			{ "srifle_DMR_07_blk_F", "", 80000, -1, "mav_ttm_var_rebel >= 2" }, //CMR-76
			{ "arifle_ARX_blk_F", "", 80000, -1, "mav_ttm_var_rebel >= 3" }, //Type 115
			{ "arifle_SPAR_02_blk_F", "", 120000, -1, "mav_ttm_var_rebel >= 3" }, //Spar-16s
			{ "LMG_03_F", "", 150000, -1, "mav_ttm_var_rebel >= 3" }, //Lim-85
			{ "arifle_AKM_F", "", 100000, -1, "mav_ttm_var_rebel >= 3" }, //AKM
			{ "srifle_DMR_01_F", "", 150000, -1, "mav_ttm_var_rebel >= 3" }, //Rahim
			{ "arifle_MXM_F", "", 90000, -1, "mav_ttm_var_rebel >= 4" }, //MXM
			{ "srifle_DMR_03_F", "", 200000, -1, "mav_ttm_var_rebel >= 4" }, //Mk-1 EMR
			{ "srifle_DMR_06_olive_F", "", 170000, -1, "mav_ttm_var_rebel >= 4" }, //MK14
			{ "arifle_SPAR_03_blk_F", "", 175000, -1, "mav_ttm_var_rebel >= 4" }, //Spar-17
			{ "arifle_CTARS_blk_F", "", 150000, -1, "mav_ttm_var_rebel >= 4" }, //Car-95-1
			{ "arifle_AK12_F", "", 175000, -1, "mav_ttm_var_rebel >= 4" }, //AK-12
			{ "LMG_Mk200_F", "", 300000, -1, "mav_ttm_var_rebel >= 4" }, //MK200
			{ "arifle_MX_SW_F", "", 200000, -1, "mav_ttm_var_rebel >= 4" }, //MX SW
			{ "srifle_EBR_F", "", 180000, -1, "mav_ttm_var_rebel >= 5" }, //Mk18 ABR
			{ "srifle_DMR_05_tan_F", "", 600000, -1, "mav_ttm_var_rebel >= 5" }, //Cyrus
			{ "srifle_DMR_02_sniper_F", "", 500000, -1, "mav_ttm_var_rebel >= 5" }, //MAR-10
			{ "LMG_Zafir_F", "", 800000, -1, "mav_ttm_var_rebel >= 5" } //Zafir	
        };
        mags[] = {
            { "20Rnd_556x45_UW_mag", "", 100, 50, "" }, //sdar
            { "20Rnd_650x39_Cased_Mag_F", "", 100, 50, "" }, //cmr
			{ "30Rnd_45ACP_Mag_SMG_01", "", 100, 50, "" }, //vermin
			{ "30Rnd_9x21_Mag", "", 100, 50, "" }, //9mm
			{ "30Rnd_9x21_Mag_SMG_02", "", 100, 50, "" }, //9mm
            { "6Rnd_45ACP_Cylinder", "", 100, 50, "" }, //zubr
            { "9Rnd_45ACP_Mag", "", 100, 50, "" }, //acp
			{ "30Rnd_556x45_Stanag", "", 100, 50, "" }, //MK20
			{ "30Rnd_556x45_Stanag", "", 100, 50, "" }, //TRG
			{ "30Rnd_556x45_Stanag", "", 100, 50, "" }, //spar16
			{ "20Rnd_556x45_UW_mag", "", 100, 50, "" }, //acp
			{ "30Rnd_580x42_Mag_F", "", 100, 50, "" }, //MXC
			{ "30Rnd_65x39_caseless_mag", "", 100, 50, "" }, //MX
			{ "30Rnd_65x39_caseless_mag", "", 100, 50, "" }, //Black MX
			{ "30Rnd_580x42_Mag_F", "", 100, 50, "" }, //Car-95
			{ "30Rnd_65x39_caseless_green", "", 100, 50, "" }, //Katiba
			{ "20Rnd_650x39_Cased_Mag_F", "", 100, 50, "" }, //CMR-78
			{ "30Rnd_65x39_caseless_green", "", 100, 50, "" }, //Type 115
			{ "10Rnd_50BW_Mag_F", "", 50000, 50, "" }, //50 Cal Mag
			{ "30Rnd_65x39_caseless_mag", "", 100, 50, "" }, // MXM 
			{ "150Rnd_556x45_Drum_Mag_F", "", 100, 50, "" }, //Spar-16s
			{ "200Rnd_556x45_Box_F", "", 1000, 50, "" }, //Lim-85
			{ "100Rnd_580x42_Mag_F", "", 100, 50, "" }, //Car-95-1
			{ "30Rnd_762x39_Mag_F", "", 100, 50, "" }, //AKM
			{ "10Rnd_762x54_Mag", "", 100, 50, "" }, //Rahim
			{ "20Rnd_762x51_Mag", "", 100, 50, "" }, //Mk-1
			{ "20Rnd_762x51_Mag", "", 100, 50, "" }, //Mk18 ABR
			{ "20Rnd_762x51_Mag", "", 100, 50, "" }, //Mk14
			{ "20Rnd_762x51_Mag", "", 100, 50, "" }, //Spar-17
			{ "30Rnd_762x39_Mag_F", "", 100, 50, "" }, //AK-12
			{ "200Rnd_65x39_cased_Box", "", 1000, 50, "" }, //MK200
			{ "100Rnd_65x39_caseless_mag", "", 100, 50, "" }, //MX SW
			{ "10Rnd_93x64_DMR_05_Mag", "", 100, 50, "" }, //Cyrus
			{ "10Rnd_338_Mag", "", 100, 50, "" }, //MAR-10
			{ "150Rnd_762x54_Box", "", 1000, 50, "" } //Zafir
        };
        accs[] = {
			{ "optic_ACO_grn_smg", "", 1500, -1, "" }, //aco
			{ "optic_Arco", "", 1500, -1, "" }, //arco
			{ "optic_Arco_blk_F", "", 1500, -1, "" }, //black arco
			{ "optic_ERCO_blk_F", "", 1500, -1, "" }, //black erco
			{ "optic_Holosight_blk_F", "", 1500, -1, "" }, //black holo
			{ "optic_Holosight_smg_blk_F", "", 1500, -1, "" }, //black holo smg
			{ "optic_MRCO", "", 1500, -1, "" }, //mrco
            { "optic_Hamr", "", 1500, -1, "" }, //rco
			{ "optic_DMS", "", 3000, -1, "" }, //dms
			{ "acc_flashlight", "", 750, -1, "" }, //flashlight
			{ "acc_flashlight_pistol", "", 750, -1, "" }, //flashlight
			{ "bipod_01_F_blk", "", 2000, -1, "" }, //bipod
			{ "optic_AMS_snd", "", 700000, -1, "mav_ttm_var_rebel >= 5" }, //AMS
			{ "optic_LRPS_tna_F", "", 1000000, -1, "mav_ttm_var_rebel >= 5" } //LRPS
        };
    };

	
	class black {
        name = "Black Market Weapon Shop";
        side = "civ";
        conditions = "";
        items[] = {
			{ "NVGoggles_OPFOR", "", 5000, 75, ""}, //Black NightVision
            { "Binocular", "", 150, 75, "" },      //Binocular
            { "ItemGPS", "", 100, 50, "" },       //GPS
			{ "MMG_01_tan_F", "", 1300000, 50, "mav_ttm_var_rebel >= 5" },       //Navid
			{ "MMG_02_sand_F", "", 1500000, 50, "mav_ttm_var_rebel >= 5" },       //GPS
			{ "launch_RPG7_F", "", 700000, 50, "mav_ttm_var_rebel >= 5" },       //RPG-7
			{ "muzzle_snds_H", "", 1000, 375, "" }, //Suppressor
			{ "muzzle_snds_L", "", 1000, 375, "" }, //Suppressor
			{ "muzzle_snds_M", "", 1000, 375, "" }, //Suppressor
			{ "muzzle_snds_B", "", 1000, 375, "" }, //Suppressor
			{ "muzzle_snds_H_MG", "", 1000, 375, "" }, //Suppressor
			{ "muzzle_snds_338_sand", "", 1000, 375, "" }, //Suppressor
			{ "muzzle_snds_58_blk_F", "", 1000, 375, "" }, //Suppressor
			{ "muzzle_snds_65_TI_blk_F", "", 1000, 375, "" }, //Suppressor
			{ "muzzle_snds_93mmg_tan", "", 1000, 375, "" } //Suppressor
        };
        mags[] = {
            { "150Rnd_93x64_Mag", "", 50000, 50, "" }, //Navid
            { "130Rnd_338_Mag", "", 50000, 50, "" }, //SPMG
			{ "RPG7_F", "", 250000, 50, "" } //RPG-7
        };
        accs[] = {
			{ "optic_ACO_grn_smg", "", 2500, 1250, "" }, //aco
			{ "optic_Arco", "", 2500, -1, "" }, //arco
			{ "optic_Arco_blk_F", "", 2500, -1, "" }, //black arco			
			{ "optic_ERCO_blk_F", "", 2500, -1, "" }, //black erco
			{ "optic_Holosight_blk_F", "", 2500, -1, "" }, //black holo
			{ "optic_Holosight_smg_blk_F", "", 2500, -1, "" }, //black holo smg
			{ "optic_MRCO", "", 2500, -1, "" }, //mrco
            { "optic_Hamr", "", 2500, -1, "" }, //rco
			{ "optic_DMS", "", 10000, -1, "" }, //dms
			{ "acc_flashlight", "", 750, 375, "" }, //flashlight
			{ "acc_flashlight_pistol", "", 750, 375, "" }, //flashlight
			{ "muzzle_snds_H", "", 1000, 375, "" }, //Suppressor
			{ "muzzle_snds_L", "", 1000, 375, "" }, //Suppressor
			{ "muzzle_snds_M", "", 1000, 375, "" }, //Suppressor
			{ "muzzle_snds_B", "", 1000, 375, "" }, //Suppressor
			{ "muzzle_snds_H_MG", "", 1000, 375, "" }, //Suppressor
			{ "muzzle_snds_338_sand", "", 1000, 375, "" }, //Suppressor
			{ "muzzle_snds_58_blk_F", "", 1000, 375, "" }, //Suppressor
			{ "muzzle_snds_65_TI_blk_F", "", 1000, 375, "" }, //Suppressor
			{ "muzzle_snds_93mmg_tan", "", 1000, 375, "" }, //Suppressor
			{ "bipod_01_F_blk", "", 2500, -1, "" } //bipod
        };
    };
	
    class gang {
        name = "Hideout Armament";
        side = "civ";
        conditions = "";
        items[] = {
			{ "NVGoggles_OPFOR", "", 5000, 75, ""}, //Black NightVision
            { "Binocular", "", 150, 75, "" },      //Binocular
            { "ItemGPS", "", 100, 50, "" },       //GPS
			{ "hgun_Rook40_F", "", 5000, -1, "" }, //Rook
            { "hgun_Pistol_heavy_02_F", "", 7500, -1, "" }, //Zubr
            { "hgun_ACPC2_F", "", 15000, -1, "" }, //45 ACP
			{ "hgun_PDW2000_F", "", 20000, -1, "" } //PDW
        };
        mags[] = {
			{ "30Rnd_9x21_Mag", "", 100, 50, "" }, //9mm
			{ "30Rnd_9x21_Mag_SMG_02", "", 100, 50, "" }, //9mm
            { "6Rnd_45ACP_Cylinder", "", 100, 50, "" }, //zubr
            { "9Rnd_45ACP_Mag", "", 100, 50, "" } //acp
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 2500, 1250, "" }, //aco
			{ "optic_Arco", "", 2500, -1, "" }, //arco
			{ "optic_Arco_blk_F", "", 2500, -1, "" }, //black arco
			{ "optic_ERCO_blk_F", "", 2500, -1, "" }, //black erco
			{ "optic_Holosight_blk_F", "", 2500, -1, "" }, //black holo
			{ "optic_Holosight_smg_blk_F", "", 2500, -1, "" }, //black holo smg
			{ "optic_MRCO", "", 2500, -1, "" }, //mrco
            { "optic_Hamr", "", 2500, -1, "" }, //rco
			{ "optic_DMS", "", 10000, -1, "" }, //dms
			{ "acc_flashlight", "", 750, 375, "" }, //flashlight
			{ "acc_flashlight_pistol", "", 750, 375, "" }, //flashlight
			{ "bipod_01_F_blk", "", 2500, -1, "" } //bipod
        };
    };

    class genstore {
        name = "Malden General Store";
        side = "civ";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, 75, "" },      //Binocular
            { "ItemGPS", "", 100, 50, "" }       //GPS
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Malden Fuel Station Store";
        side = "";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, 75, "" },      //Binocular
            { "ItemGPS", "", 100, 50, "" }       //GPS
        };
        mags[] = {};
        accs[] = {};
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        conditions = "";
        items[] = {
			{ "NVGoggles_OPFOR", "", 5000, 75, ""}, //Black NightVision
            { "Binocular", "", 150, 75, "" },      //Binocular
            { "ItemGPS", "", 100, 50, "" },       //GPS
			{ "FirstAidKit", "", 25, 10, "" }    //FirstaidKit
        };
        mags[] = {};
        accs[] = {};
    };
	
///////////////////////////////////////////////////
//                    Cop Shops
///////////////////////////////////////////////////

  class cop_basic {
        name = "Malden Cop Shop";
        side = "cop";
        conditions = "";
        items[] = {
			{ "NVGoggles_OPFOR", "", 5000, 75, ""}, //Black NightVision
            { "Binocular", "", 150, 75, "" },      //Binocular
            { "ItemGPS", "", 100, 50, "" },        //GPS
			{ "SmokeShellGreen", "Tear Gas", 2500, 50, "call life_coplevel >= 5" },//TearGas
            { "hgun_Pistol_heavy_01_F", $STR_W_items_StunPistol, 4000, -1, "" }, //TASER
            { "SMG_02_F", "Sting Tazer", 3000, -1, "call life_coplevel >= 1" }, //sting
            { "arifle_SPAR_01_blk_F", "", 6000, -1, "call life_coplevel >= 2" }, //spar16
			{ "arifle_MXC_Black_F", "", 7000, -1, "call life_coplevel >= 2" }, //mxc
            { "arifle_MX_Black_F", "", 8000, -1, "call life_coplevel >= 3" }, //mx
			{ "arifle_CTAR_blk_F", "", 8000, -1, "call life_coplevel >= 3" }, //car95
            { "arifle_MXM_Black_F", "", 12000, -1, "call life_coplevel >= 4" }, //mxm
			{ "SMG_01_F", "", 12000, -1, "call life_coplevel >= 4" }, //vermin
			{ "arifle_MX_SW_Black_F", "", 15000, -1, "call life_coplevel >= 8" }, //mxsw
            { "srifle_DMR_07_blk_F", "", 14000, -1, "call life_coplevel >= 4" }, //cmr
            { "arifle_SPAR_03_blk_F", "", 14000, -1, "call life_coplevel >= 5" }, //spar17
            { "arifle_AK12_F", "", 14000, -1, "call life_coplevel >= 5" },//AK-12
			{ "srifle_DMR_02_F", "", 18000, -1, "call life_coplevel >= 6" }, //mar10
            { "srifle_DMR_03_F", "", 18000, -1, "call life_coplevel >= 6" } //mk1
        };
        mags[] = {
			{ "11Rnd_45ACP_Mag", "Rubber Bullets", 20, -1, "call life_coplevel >= 1" }, //4five
			{ "30Rnd_65x39_caseless_mag_Tracer", "Rubber Bullets", 20, -1, "call life_coplevel >= 2" }, //MXC/MX/MXM RUBBERS
			{ "30Rnd_9x21_Mag_SMG_02", "Rubber Bullets", 13, -1, "call life_coplevel >= 1" }, //sting
			{ "30Rnd_556x45_Stanag", "", 13, -1, "call life_coplevel >= 2" }, //sdar,mk20c,trg21,spar16
			{ "30Rnd_580x42_Mag_F", "", 13, -1, "call life_coplevel >= 3" }, //car95
            { "30Rnd_65x39_caseless_mag", "", 20, -1, "call life_coplevel >= 2" }, //mxc, mx, mxm
            { "20Rnd_650x39_Cased_Mag_F", "", 20, -1, "call life_coplevel >= 4" }, //cmr
			{ "30Rnd_45ACP_Mag_SMG_01", "", 20, -1, "call life_coplevel >= 4" }, //vermin
			{ "100Rnd_65x39_caseless_mag", "", 300, 150, "call life_coplevel >= 8" }, //mxsw
            { "20Rnd_762x51_Mag", "", 30, -1, "call life_coplevel >= 5" }, //mk1, mk14, mk18, spar17
			{ "10Rnd_338_Mag", "", 40, -1, "call life_coplevel >= 6" }, // mar10
            { "30Rnd_762x39_Mag_F", "", 40, -1, "call life_coplevel >= 5" } //Ak-12
        };
        accs[] = {
            { "muzzle_snds_acp", "", 750, 375, "call life_coplevel >= 1" }, //45 supresser
			{ "optic_MRD", "", 2750, 1375, "call life_coplevel >= 1" }, //mrd
			{ "acc_flashlight", "", 750, 375, "call life_coplevel >= 1" }, //flashlight
			{ "acc_flashlight_pistol", "", 750, 375, "call life_coplevel >= 1" }, //flashlight
			{ "optic_ACO_grn_smg", "", 2500, 1250, "" }, //aco
			{ "optic_Arco", "", 2500, -1, "" }, //arco
			{ "optic_Arco_blk_F", "", 2500, -1, "" }, //black arco
			{ "optic_ERCO_blk_F", "", 2500, -1, "" }, //black erco
			{ "optic_AMS", "", 2500, -1, "call life_coplevel >= 8" }, //black AMS
			{ "optic_Holosight_blk_F", "", 2500, -1, "" }, //black holov9re
			{ "optic_Holosight_smg_blk_F", "", 2500, -1, "" }, //black holo smg
			{ "optic_MRCO", "", 2500, -1, "" }, //mrco
            { "optic_Hamr", "", 2500, -1, "" }, //rco
			{ "optic_DMS", "", 5000, -1, "" }, //dms
			{ "bipod_01_F_blk", "", 2500, -1, "" } //bipod
        };
    };

	class cop_ucu {
        name = "Malden Cop Shop";
        side = "cop";
        conditions = "call life_coplevel >= 1";
        items[] = {
			{ "NVGoggles_OPFOR", "", 5000, 75, ""}, //Black NightVision
            { "Binocular", "", 150, 75, "" },      //Binocular
            { "ItemGPS", "", 100, 50, "" },        //GPS
			{ "SmokeShellGreen", "Tear Gas", 2500, 50, "" },//TearGas
            { "hgun_Pistol_heavy_01_F", $STR_W_items_StunPistol, 4000, -1, "" }, //TASER
            { "hgun_PDW2000_F", "", 5000, -1, "" }, //PDW
			{ "SMG_05_F", "", 5000, -1, "" }, //Protector
			{ "SMG_01_F", "", 5000, -1, "" }, //Vermin
			{ "arifle_TRG21_F", "", 5000, -1, "" }, //TRG
			{ "arifle_Mk20_F", "", 5000, -1, "" }, //Mk-20
			{ "arifle_SPAR_01_blk_F", "", 5000, -1, "" }, //Spar16
			{ "arifle_MXC_khk_F", "", 5000, -1, "" }, //MXC
			{ "arifle_MX_F", "", 5000, -1, "" }, //MX
			{ "srifle_DMR_07_blk_F", "", 5000, -1, "" }, //CMR-76
            { "arifle_Katiba_F", "", 5000, -1, "" }, //Katiba
			{ "arifle_AKM_F", "", 5000, -1, "" }, //AKM
			{ "srifle_DMR_01_F", "", 5000, -1, "" } //Rahim
        };
        mags[] = {
			{ "11Rnd_45ACP_Mag", "Rubber Bullets", 20, -1, "call life_coplevel >= 1" }, //4five
			{ "30Rnd_65x39_caseless_mag_Tracer", "Rubber Bullets", 20, -1, "" }, //MXC/MX/MXM RUBBERS
			{ "30Rnd_9x21_Mag_SMG_02", "Rubber Bullets", 13, -1, "" }, //sting
			{ "30Rnd_556x45_Stanag", "", 13, -1, "" }, //sdar,mk20c,trg21,spar16
			{ "30Rnd_580x42_Mag_F", "", 13, -1, "" }, //car95
            { "30Rnd_65x39_caseless_mag", "", 20, -1, "" }, //mxc, mx, mxm
            { "20Rnd_650x39_Cased_Mag_F", "", 20, -1, "" }, //cmr
			{ "30Rnd_45ACP_Mag_SMG_01", "", 20, -1, "" }, //vermin
			{ "100Rnd_65x39_caseless_mag", "", 300, 150, "" }, //mxsw
            { "20Rnd_762x51_Mag", "", 30, -1, "" }, //mk1, mk14, mk18, spar17
			{ "10Rnd_338_Mag", "", 40, -1, "" }, // mar10
            { "30Rnd_762x39_Mag_F", "", 40, -1, "" }, //Ak-12
			{ "20Rnd_556x45_UW_mag", "", 100, 50, "" }, //sdar
            { "20Rnd_650x39_Cased_Mag_F", "", 100, 50, "" }, //cmr
			{ "30Rnd_45ACP_Mag_SMG_01", "", 100, 50, "" }, //vermin
			{ "30Rnd_9x21_Mag", "", 100, 50, "" }, //9mm
			{ "30Rnd_9x21_Mag_SMG_02", "", 100, 50, "" }, //9mm
            { "6Rnd_45ACP_Cylinder", "", 100, 50, "" }, //zubr
            { "9Rnd_45ACP_Mag", "", 100, 50, "" }, //acp
			{ "30Rnd_556x45_Stanag", "", 100, 50, "" }, //MK20
			{ "30Rnd_556x45_Stanag", "", 100, 50, "" }, //TRG
			{ "30Rnd_556x45_Stanag", "", 100, 50, "" }, //spar16
			{ "20Rnd_556x45_UW_mag", "", 100, 50, "" }, //acp
			{ "30Rnd_580x42_Mag_F", "", 100, 50, "" }, //MXC
			{ "30Rnd_65x39_caseless_mag", "", 100, 50, "" }, //MX
			{ "30Rnd_65x39_caseless_mag", "", 100, 50, "" }, //Black MX
			{ "30Rnd_580x42_Mag_F", "", 100, 50, "" }, //Car-95
			{ "30Rnd_65x39_caseless_green", "", 100, 50, "" }, //Katiba
			{ "20Rnd_650x39_Cased_Mag_F", "", 100, 50, "" }, //CMR-78
			{ "30Rnd_65x39_caseless_green", "", 100, 50, "" }, //Type 115
			{ "10Rnd_50BW_Mag_F", "", 50000, 50, "" }, //50 Cal Mag
			{ "30Rnd_65x39_caseless_mag", "", 100, 50, "" }, // MXM 
			{ "150Rnd_556x45_Drum_Mag_F", "", 100, 50, "" }, //Spar-16s
			{ "200Rnd_556x45_Box_F", "", 1000, 50, "" }, //Lim-85
			{ "100Rnd_580x42_Mag_F", "", 100, 50, "" }, //Car-95-1
			{ "30Rnd_762x39_Mag_F", "", 100, 50, "" }, //AKM
			{ "10Rnd_762x54_Mag", "", 100, 50, "" }, //Rahim
			{ "20Rnd_762x51_Mag", "", 100, 50, "" }, //Mk-1
			{ "20Rnd_762x51_Mag", "", 100, 50, "" }, //Mk18 ABR
			{ "20Rnd_762x51_Mag", "", 100, 50, "" }, //Mk14
			{ "20Rnd_762x51_Mag", "", 100, 50, "" }, //Spar-17
			{ "30Rnd_762x39_Mag_F", "", 100, 50, "" }, //AK-12
			{ "200Rnd_65x39_cased_Box", "", 1000, 50, "" }, //MK200
			{ "100Rnd_65x39_caseless_mag", "", 100, 50, "" }, //MX SW
			{ "10Rnd_93x64_DMR_05_Mag", "", 100, 50, "" }, //Cyrus
			{ "10Rnd_338_Mag", "", 100, 50, "" }, //MAR-10
			{ "150Rnd_762x54_Box", "", 1000, 50, "" } //Zafir
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 1500, -1, "" }, //aco
			{ "optic_Arco", "", 1500, -1, "" }, //arco
			{ "optic_Arco_blk_F", "", 1500, -1, "" }, //black arco
			{ "optic_ERCO_blk_F", "", 1500, -1, "" }, //black erco
			{ "optic_Holosight_blk_F", "", 1500, -1, "" }, //black holo
			{ "optic_Holosight_smg_blk_F", "", 1500, -1, "" }, //black holo smg
			{ "optic_MRCO", "", 1500, -1, "" }, //mrco
            { "optic_Hamr", "", 1500, -1, "" }, //rco
			{ "optic_DMS", "", 3000, -1, "" }, //dms
			{ "acc_flashlight", "", 750, -1, "" }, //flashlight
			{ "acc_flashlight_pistol", "", 750, -1, "" }, //flashlight
			{ "bipod_01_F_blk", "", 2000, -1, "" }, //bipod
			{ "optic_AMS_snd", "", 1000, -1, "" }, //AMS
			{ "optic_LRPS_tna_F", "", 1000, -1, "" } //LRPS
        };
    };

	class cop_swat {
        name = "Marshal Armory";
        side = "cop";
		conditions = "license_cop_swat";
        items[] = { 
			{ "Binocular", "", 50 },
			{ "Rangefinder", "", 100 },
            { "ItemGPS", "", 10 },
            { "ItemMap", "", 1 },
            { "ItemCompass", "", 5 },
            { "ItemWatch", "", 5 },
            { "FirstAidKit", "", 5 },
            { "NVGoggles_OPFOR", "", 500 },
			{ "arifle_SPAR_01_blk_F", "", 500, -1 },
			{ "arifle_SPAR_01_khk_F", "", 500, -1 },
			{ "arifle_SPAR_01_snd_F", "", 500, -1 },
			{ "arifle_SPAR_01_GL_snd_F", "", 500, -1 },
			{ "arifle_SPAR_01_GL_khk_F", "", 500, -1 },
			{ "arifle_SPAR_01_GL_blk_F", "", 500, -1 },
			{ "arifle_SPAR_02_blk_F", "", 500, -1 },
			{ "arifle_SPAR_02_khk_F", "", 500, -1 },
			{ "arifle_SPAR_02_snd_F", "", 500, -1 },
			{ "arifle_SPAR_03_blk_F", "", 500, -1 },
			{ "arifle_SPAR_03_khk_F", "", 500, -1 },
			{ "arifle_SPAR_03_snd_F", "", 500, -1 },
			{ "arifle_CTAR_blk_F", "", 500, -1 },
			{ "arifle_CTAR_hex_F", "", 500, -1 },
			{ "arifle_CTAR_ghex_F", "", 500, -1 },
			{ "arifle_CTAR_GL_blk_F", "", 500, -1 },
			{ "arifle_CTAR_GL_ghex_F", "", 500, -1 },
			{ "arifle_CTAR_GL_hex_F", "", 500, -1 },
			{ "arifle_AKM_F", "", 500, -1 },
			{ "arifle_AKS_F", "", 500, -1 },
			{ "arifle_AK12_F", "", 500, -1 },
			{ "arifle_AK12_GL_F", "", 500, -1 },
            { "arifle_MXC_F", "", 500 },
			{ "arifle_MX_Black_F", "", 500 },
			{ "arifle_MXC_Black_F", "", 500 },
			{ "arifle_MX_GL_Black_F", "", 500 },
			{ "arifle_MX_SW_Black_F", "", 500 },
			{ "arifle_MXM_Black_F", "", 500 },
			{ "srifle_EBR_F", "", 500, -1 },
			{ "arifle_ARX_blk_F", "", 500, -1 },
			{ "arifle_ARX_ghex_F", "", 500, -1 },
			{ "arifle_ARX_hex_F", "", 500, -1 },
			{ "srifle_DMR_07_blk_F", "", 500 },
			{ "srifle_DMR_07_ghex_F", "", 500 },
			{ "srifle_DMR_07_hex_F", "", 500 },
			{ "LMG_03_F", "", 500, -1 },
			{ "srifle_DMR_02_F", "", 500 },
			{ "srifle_DMR_02_camo_F", "", 500 },
			{ "srifle_DMR_02_sniper_F", "", 500 },
			{ "srifle_DMR_03_F", "", 500 },
			{ "srifle_DMR_03_khaki_F", "", 500 },
			{ "srifle_DMR_03_tan_F", "", 500 },
			{ "srifle_DMR_03_multicam_F", "", 500 },
			{ "srifle_DMR_03_woodland_F", "", 500 },
			{ "srifle_DMR_04_F", "", 500 },
			{ "srifle_DMR_04_Tan_F", "", 500 },
			{ "srifle_DMR_05_blk_F", "", 500 },
			{ "srifle_DMR_05_hex_F", "", 500 },
			{ "srifle_DMR_05_tan_f", "", 500 },
			{ "srifle_DMR_06_camo_F", "", 500 },
			{ "srifle_DMR_06_olive_F", "", 500 },
			{ "LMG_Mk200_F", "", 500 },
			{ "LMG_Zafir_F", "", 500 },
			{ "MMG_01_hex_F", "", 500 },
			{ "MMG_01_tan_F", "", 500 },
			{ "MMG_02_camo_F", "", 500 },
			{ "MMG_02_black_F", "", 500 },
			{ "MMG_02_sand_F", "", 500 },
			{ "srifle_LRR_F", "", 500 },
			{ "srifle_LRR_camo_F", "", 500 },
			{ "launch_MRAWS_sand_F", "", 500 },
			{ "HandGrenade_Stone", "Flashbang", 500 },
			{ "SmokeShellGreen", "Tear Gas", 500, -1 }
            
        };
        mags[] = {
            { "30Rnd_9x21_Mag", "", 1 },
			{ "6Rnd_45ACP_Cylinder", "", 1 },
			{ "30Rnd_45ACP_Mag_SMG_01_tracer_green", "", 25 },
			{ "30Rnd_556x45_Stanag", "", 250 },
			{ "30Rnd_556x45_Stanag_green", "", 250 },
			{ "30Rnd_556x45_Stanag_red", "", 250 },
			{ "30Rnd_556x45_Stanag_Tracer_Yellow", "", 250 },
			{ "100Rnd_580x42_Mag_F", "", 250 },
			{ "100Rnd_580x42_Mag_Tracer_F", "", 250 },
			{ "150Rnd_556x45_Drum_Mag_F", "", 250 },
			{ "150Rnd_556x45_Drum_Mag_Tracer_F", "", 250 },
			{ "200Rnd_556x45_Box_F", "", 250 },
			{ "200Rnd_556x45_Box_Red_F", "", 250 },
			{ "200Rnd_556x45_Box_Tracer_F", "", 250 },
			{ "200Rnd_556x45_Box_Tracer_Red_F", "", 250 },
			{ "20Rnd_650x39_Cased_Mag_F", "", 250 },
			{ "30Rnd_545x39_Mag_F", "", 250 },
			{ "30Rnd_545x39_Mag_Green_F", "", 250 },
			{ "30Rnd_545x39_Mag_Tracer_F", "", 250 },
			{ "30Rnd_545x39_Mag_Tracer_Green_F", "", 250 },
			{ "30Rnd_580x42_Mag_F", "", 250 },
			{ "30Rnd_580x42_Mag_Tracer_F", "", 250 },
			{ "30Rnd_65x39_caseless_green", "", 250 },
			{ "30Rnd_65x39_caseless_green_mag_Tracer", "", 250 },
			{ "30Rnd_65x39_caseless_mag", "", 250 },
			{ "100Rnd_65x39_caseless_mag", "", 250 },
			{ "30Rnd_762x39_Mag_F", "", 250 },
			{ "30Rnd_762x39_Mag_Green_F", "", 250 },
			{ "30Rnd_762x39_Mag_Tracer_F", "", 250 },
			{ "30Rnd_762x39_Mag_Tracer_Green_F", "", 250 },
			{ "30Rnd_9x21_Mag_SMG_02", "", 250 },
			{ "30Rnd_9x21_Mag_SMG_02_Tracer_Green", "", 250 },
			{ "30Rnd_9x21_Mag_SMG_02_Tracer_Red", "", 250 },
			{ "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow", "", 250 },
            { "30Rnd_65x39_caseless_mag_Tracer", "", 50 },
			{ "100Rnd_65x39_caseless_mag_Tracer", "", 50 },
			{ "200Rnd_65x39_cased_Box", "", 75 },
			{ "200Rnd_65x39_cased_Box_Tracer", "", 100 },
			{ "20Rnd_762x51_Mag", "", 25 },
			{ "30Rnd_556x45_Stanag", "", 5 },
			{ "150Rnd_762x54_Box", "", 75 },
			{ "150Rnd_762x54_Box_Tracer", "", 100 },
			{ "10Rnd_338_Mag", "", 50 },
			{ "130Rnd_338_Mag", "", 150 },
			{ "10Rnd_93x64_DMR_05_Mag", "", 75 },
			{ "150Rnd_93x64_Mag", "", 150 },
			{ "7Rnd_408_Mag", "", 75, 50 }, 	
			{ "10Rnd_127x54_Mag", "", 50 },			
			{ "5Rnd_127x108_Mag", "", 100 },
			{ "5Rnd_127x108_APDS_Mag", "", 150 },
			{ "10Rnd_50BW_Mag_F", "", 150 },
			{ "11Rnd_45ACP_Mag", "", 75 },
			{ "MRAWS_HE_F", "", 5000 },
			{ "MRAWS_HEAT_F", "", 5000 }
        };
		accs[] = {
            { "optic_Arco", "Advanced Rifle Combat Optics", 25 },
			{ "optic_Nightstalker", "Night Stalker", 25 },
			{ "optic_Hamr", "Rifle Combat Optics", 25 },
			{ "optic_Aco", "Advanced Collimator Optics Red", 25 },
			{ "optic_ACO_grn", "Advanced Collimator Optics Green", 25 },
			{ "optic_Aco_smg", "Advanced Collimator Optics Red", 25 },
			{ "optic_ACO_grn_smg", "Advanced Collimator Optics Green", 25 },
			{ "optic_Holosight", "MK17 Holosight", 25 },
			{ "optic_Holosight_blk_F","", 100, -1 },
			{ "optic_Holosight_smg", "Mk17 Holosight SMG", 25 },
			{ "optic_SOS", "Marksman Optical Sights", 25 },
			{ "acc_flashlight", "Flashlight", 25 },
			{ "acc_pointer_IR", "IR Laser Pointer", 25 },
			{ "optic_MRCO", "MRCO", 25 },
			{ "muzzle_snds_acp", "Sound Suppressor 45 ACP", 25 },
			{ "optic_DMS", "Designated Marksman Sight", 25 },
			{ "optic_Yorris", "Yorris J2", 25 },
			{ "optic_MRD", "MRD", 25 },
			{ "optic_LRPS_ghex_F", "Long-Range Precision Scope", 500},
			{ "optic_LRPS_tna_F", "Long-Range Precision Scope", 500},
			{ "optic_SOS_khk_F", "Long-Range Precision Scope", 500},
			{ "muzzle_snds_H", "Sound Suppressor 6.5 mm", 50 },
			{ "muzzle_snds_B", "Sound Suppressor 7.62 mm", 50 },
			{ "muzzle_snds_338_black", "Sound Suppressor 338 Black", 50 },
			{ "muzzle_snds_338_green", "Sound Suppressor 338 Green", 50 },
			{ "muzzle_snds_338_sand", "Sound Suppressor 338 Sand", 50 },
			{ "muzzle_snds_93mmg", "Sound Suppressor 9.3mm Black", 50 },
			{ "muzzle_snds_93mmg_tan", "Sound Suppressor 9.3mm Tan", 50 },
			{ "muzzle_snds_65_TI_blk_F", "", 50 },
			{ "muzzle_snds_58_wdm_F", "", 50 },
			{ "muzzle_snds_B_khk_F", "", 50 },
			{ "muzzle_snds_B_snd_F", "", 50 },
			{ "muzzle_snds_H_MG_khk_F", "", 50 },
			{ "muzzle_snds_H_MG_blk_F", "", 50 },
			{ "muzzle_snds_65_TI_ghex_F", "", 50 },
			{ "muzzle_snds_65_TI_hex_F", "", 50 },
			{ "optic_AMS", "Advanced Marksman Scope Black", 50 },
			{ "optic_AMS_khk", "Advanced Marksman Scope Khaki", 50 },
			{ "optic_AMS_snd", "Advanced Marksman Scope Sand", 50 },
			{ "optic_KHS_blk", "Kahlia Black", 50,},
			{ "optic_KHS_hex", "Kahlia Hex", 50,},
			{ "optic_KHS_old", "Kahlia Old", 50,},
			{ "optic_KHS_tan", "Kahlia Tan", 50,},
			{ "bipod_01_F_snd", "Bipod Sand", 50,},
			{ "bipod_01_F_blk", "Bipod Black", 50,},
			{ "bipod_01_F_mtp", "Bipod MTP", 50,},
			{ "bipod_02_F_blk", "Bipod Black", 50,},
			{ "bipod_02_F_tan", "Bipod Tan", 50,},
			{ "bipod_02_F_hex", "Bipod Hex", 50,},
			{ "bipod_03_F_blk", "Bipod Black", 50,},
			{ "bipod_03_F_oli", "Bipod Olive-1", 50,},
			{ "bipod_01_F_khk", "", 50,}
		};
    };	

    class cop_boat {
        name = "store";
        side = "cop";
        conditions = "";
        items[] = {
            { "arifle_SDAR_F", "", 3000, 50, "call life_coplevel >= 1" } //sdar
        };
        mags[] = {
            { "20Rnd_556x45_UW_mag", "", 20, -1, "call life_coplevel >= 1" } //sdar
        };
    };
};