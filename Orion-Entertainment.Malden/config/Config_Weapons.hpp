class WeaponShops {
    class gun {
        name = "Gun Shop";
        side = "civ";
        conditions = "license_civ_gun";
        items[] = {
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
			{ "NVGoggles_OPFOR", "", 5000, 75, ""}, //Black NightVision
            { "Binocular", "", 150, 75, "" },      //Binocular
            { "ItemGPS", "", 100, 50, "" },       //GPS
			{ "hgun_Rook40_F", "", 5000, -1, "" }, //Rook
            { "hgun_Pistol_heavy_02_F", "", 7500, -1, "" }, //Zubr
            { "hgun_ACPC2_F", "", 15000, -1, "" }, //45 ACP
			{ "hgun_PDW2000_F", "", 20000, -1, "" }, //PDW
			{ "SMG_05_F", "", 25000, -1, "" }, //Protector
			{ "SMG_01_F", "", 30000, -1, "" }, //vermin
			{ "arifle_AKS_F", "", 40000, -1, "" }, //AKS
            { "arifle_SDAR_F", "", 45000, -1, "" }, //sdar
            { "arifle_Mk20_plain_F", "", 50000, -1, "" }, //mk20
            { "arifle_TRG21_F", "", 50000, -1, "" }, //TRG21
            { "arifle_SPAR_01_khk_F", "", 65000, -1, "" }, //spar16	
            { "arifle_Katiba_F", "", 80000, -1, "" }, //katibia
			{ "arifle_ARX_blk_F", "", 90000, -1, "" }, //type115
            { "srifle_DMR_07_ghex_F", "", 100000, -1, "" }, //CMR
			{ "arifle_AKM_F", "", 120000, -1, "" }, //AKM
			{ "srifle_DMR_01_DMS_BI_F", "", 120000, -1, "" }, //rahim
			{ "arifle_SPAR_03_khk_F", "", 175000, -1, "" }, //spar17
            { "srifle_DMR_06_olive_F", "", 175000, -1, "" }, //mk14
            { "srifle_EBR_F", "", 175000, -1, "" }, //mk18
			{ "srifle_DMR_03_khaki_F", "", 185000, -1 "" } //mk1
        };
        mags[] = {
            { "20Rnd_556x45_UW_mag", "", 100, 50, "" }, //sdar
            { "30Rnd_556x45_Stanag", "", 100, 50, "" }, //sdar,mk20,trg21,spar16 
			{ "30Rnd_762x39_Mag_F", "", 200, 100, "" }, //akm
            { "20Rnd_762x51_Mag", "", 200, 100, "" }, //mk1, mk14, mk18, spar17
			{ "10Rnd_762x54_Mag", "", 150, 75, "" }, //rahim
            { "20Rnd_650x39_Cased_Mag_F", "", 100, 50, "" }, //cmr
			{ "30Rnd_45ACP_Mag_SMG_01", "", 100, 50, "" }, //vermin
            { "30Rnd_65x39_caseless_green", "", 100, 50, "" }, //type115, katibia
			{ "30Rnd_545x39_Mag_F", "", 200, 100, "" }, //aks
			{ "30Rnd_9x21_Mag", "", 100, 50, "" }, //9mm
			{ "30Rnd_9x21_Mag_SMG_02", "", 100, 50, "" }, //9mm
            { "6Rnd_45ACP_Cylinder", "", 100, 50, "" }, //zubr
            { "9Rnd_45ACP_Mag", "", 100, 50, "" }, //acp
			{ "30Rnd_580x42_Mag_F", "", 100, 50, "" } //car95
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
			{ "bipod_01_F_blk", "", 2000, -1, "" } //bipod
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
			{ "hgun_Rook40_F", "", 5000, -1, "" }, //Rook
            { "hgun_Pistol_heavy_02_F", "", 7500, -1, "" }, //Zubr
            { "hgun_ACPC2_F", "", 15000, -1, "" }, //45 ACP
			{ "hgun_PDW2000_F", "", 20000, -1, "" }, //PDW
			{ "SMG_05_F", "", 25000, -1, "" }, //Protector
			{ "SMG_01_F", "", 30000, -1, "" }, //vermin
			{ "arifle_AKS_F", "", 40000, -1, "" }, //AKS
            { "arifle_SDAR_F", "", 45000, -1, "" }, //sdar
            { "arifle_Mk20_plain_F", "", 50000, -1, "" }, //mk20
            { "arifle_TRG21_F", "", 50000, -1, "" }, //TRG21
			{ "arifle_CTAR_hex_F", "", 55000, -1, "" } //car95
        };
        mags[] = {
            { "20Rnd_556x45_UW_mag", "", 100, 50, "" }, //sdar
            { "30Rnd_556x45_Stanag", "", 100, 50, "" }, //sdar,mk20,trg21,spar16 
			{ "30Rnd_45ACP_Mag_SMG_01", "", 100, 50, "" }, //vermin
			{ "30Rnd_545x39_Mag_F", "", 200, 100, "" }, //aks
			{ "30Rnd_9x21_Mag", "", 100, 50, "" }, //9mm
			{ "30Rnd_9x21_Mag_SMG_02", "", 100, 50, "" }, //9mm
            { "6Rnd_45ACP_Cylinder", "", 100, 50, "" }, //zubr
            { "9Rnd_45ACP_Mag", "", 100, 50, "" }, //acp
			{ "30Rnd_580x42_Mag_F", "", 100, 50, "" } //car95
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

	
    class donator {
        name = "Donator Weapon Shop";
        side = "civ";
        conditions = "call life_donorlevel >= 1";
        items[] = {
			{ "NVGoggles_OPFOR", "", 5000, 75, ""}, //Black NightVision
            { "Binocular", "", 150, 75, "" },      //Binocular
            { "ItemGPS", "", 100, 50, "" },       //GPS
			{ "hgun_Rook40_F", "", 5000, -1, "" }, //Rook
            { "hgun_Pistol_heavy_02_F", "", 7500, -1, "" }, //Zubr
            { "hgun_ACPC2_F", "", 15000, -1, "" }, //45 ACP
			{ "hgun_PDW2000_F", "", 20000, -1, "" }, //PDW
			{ "SMG_05_F", "", 25000, -1, "" }, //Protector
			{ "SMG_01_F", "", 30000, -1, "" }, //vermin
			{ "arifle_AKS_F", "", 40000, -1, "" }, //AKS
            { "arifle_SDAR_F", "", 45000, -1, "" }, //sdar
            { "arifle_Mk20_plain_F", "", 50000, -1, "" }, //mk20
            { "arifle_TRG21_F", "", 55000, -1, "" }, //TRG21
            { "arifle_SPAR_01_khk_F", "", 65000, -1, "" }, //spar16	
            { "arifle_Katiba_F", "", 80000, -1, "" }, //katibia
			{ "arifle_ARX_blk_F", "", 90000, -1, "" }, //type115
            { "srifle_DMR_07_ghex_F", "", 100000, -1, "" }, //CMR
			{ "arifle_AKM_F", "", 120000, -1, "" }, //AKM
			{ "srifle_DMR_01_DMS_BI_F", "", 150000, -1, "" }, //rahim
			{ "arifle_SPAR_03_khk_F", "", 175000, -1, "" }, //spar17
            { "srifle_DMR_06_olive_F", "", 175000, -1, "" }, //mk14
            { "srifle_EBR_F", "", 175000, -1, "" }, //mk18
			{ "srifle_DMR_03_khaki_F", "", 185000, -1 "" } //mk1
        };
        mags[] = {
            { "20Rnd_556x45_UW_mag", "", 100, 50, "" }, //sdar
            { "30Rnd_556x45_Stanag", "", 100, 50, "" }, //sdar,mk20,trg21,spar16 
			{ "30Rnd_762x39_Mag_F", "", 200, 100, "" }, //akm
            { "20Rnd_762x51_Mag", "", 200, 100, "" }, //mk1, mk14, mk18, spar17
			{ "10Rnd_762x54_Mag", "", 150, 75, "" }, //rahim
            { "20Rnd_650x39_Cased_Mag_F", "", 100, 50, "" }, //cmr
			{ "30Rnd_45ACP_Mag_SMG_01", "", 100, 50, "" }, //vermin
            { "30Rnd_65x39_caseless_green", "", 100, 50, "" }, //type115, katibia
			{ "30Rnd_545x39_Mag_F", "", 200, 100, "" }, //aks
			{ "30Rnd_9x21_Mag", "", 100, 50, "" }, //9mm
			{ "30Rnd_9x21_Mag_SMG_02", "", 100, 50, "" }, //9mm
            { "6Rnd_45ACP_Cylinder", "", 100, 50, "" }, //zubr
            { "9Rnd_45ACP_Mag", "", 100, 50, "" }, //acp
			{ "30Rnd_580x42_Mag_F", "", 100, 50, "" } //car95
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
            { "NVGoggles_OPFOR", "", 5000, 75, ""}, //Black NightVision
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
            { "NVGoggles_OPFOR", "", 5000, 75, ""}, //Black NightVision
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
			{ "SmokeShellGreen", "Tear Gas", 2500, 50, "call life_coplevel >= 5" },        //TearGas
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
			{ "10Rnd_338_Mag", "", 40, -1, "call life_coplevel >= 6" } // mar10
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
			{ "optic_Holosight_blk_F", "", 2500, -1, "" }, //black holo
			{ "optic_Holosight_smg_blk_F", "", 2500, -1, "" }, //black holo smg
			{ "optic_MRCO", "", 2500, -1, "" }, //mrco
            { "optic_Hamr", "", 2500, -1, "" }, //rco
			{ "optic_DMS", "", 5000, -1, "" }, //dms
			{ "bipod_01_F_blk", "", 2500, -1, "" } //bipod
        };
    };

    class cop_advanced {
        name = "Malden Advanced Cop Shop";
        side = "cop";
        conditions = "mav_ttm_var_advCop == 1;";
        items[] = {
			{ "NVGoggles_OPFOR", "", 5000, 75, ""}, //Black NightVision
            { "Binocular", "", 150, 75, "" },      //Binocular
            { "ItemGPS", "", 100, 50, "" },        //GPS
			{ "HandGrenade_Stone", $STR_W_items_Flashbang, 1700, -1, "call life_coplevel >= 2" }, //flashbang
			{ "arifle_ARX_blk_F", "", 20000, -1, "call life_coplevel >= 6" }, //type115
            { "launch_B_Titan_short_F", "Anti-Fuel launcher", 25000, -1, "call life_coplevel >= 3" } //short titan
        };
        mags[] = {
			{ "30Rnd_65x39_caseless_green", "", 50, 50, "call life_coplevel >= 6" }, //type115
			{ "10Rnd_50BW_Mag_F", "", 500, 250, "call life_coplevel >= 6" } //type115 50cal
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
			{ "optic_Holosight_blk_F", "", 2500, -1, "" }, //black holo
			{ "optic_Holosight_smg_blk_F", "", 2500, -1, "" }, //black holo smg
			{ "optic_MRCO", "", 2500, -1, "" }, //mrco
            { "optic_Hamr", "", 2500, -1, "" }, //rco
			{ "optic_DMS", "", 5000, -1, "" }, //dms
			{ "bipod_01_F_blk", "", 2500, -1, "" } //bipod
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
	
	//DTU
	class dtu_gun {
        name = "DTU Weapon Shop";
        side = "cop";
        conditions = "";
        items[] = {
			{ "NVGoggles_OPFOR", "", 5000, 75, ""}, //Black NightVision
            { "Binocular", "", 150, 75, "" },      //Binocular
            { "ItemGPS", "", 100, 50, "" },        //GPS
			{ "arifle_Katiba_F", "DTU ONLY Katibia", 12000, -1, "call life_coplevel >= 4" }, //katibia
			{ "arifle_AKM_F", "DTU ONLY AKM", 17500, -1, "call life_coplevel >= 4" }, //AKM
			{ "srifle_DMR_07_ghex_F", "DTU ONLY CMR", 17500, -1, "call life_coplevel >= 4" }, //AKM
        };
        mags[] = {
			{ "30Rnd_762x39_Mag_F", "7.62 RubberBullets", 200, 100, "call life_coplevel >= 4" }, //akm
			{ "30Rnd_65x39_caseless_green", "6.5 RubberBullets", 50, 50, "call life_coplevel >= 4" }, //katibia
			{ "20Rnd_650x39_Cased_Mag_F", "6.5 RubberBullets", 50, 50, "call life_coplevel >= 4" }, //cmr
        };
        accs[] = {
			{ "acc_flashlight", "", 750, 375, "call life_coplevel >= 1" }, //flashlight
			{ "acc_flashlight_pistol", "", 750, 375, "call life_coplevel >= 1" }, //flashlight
			{ "optic_ACO_grn_smg", "", 2500, 1250, "" }, //aco
			{ "optic_Arco", "", 2500, -1, "" }, //arco
			{ "muzzle_snds_H", "", 750, 375, "" }, //6.5 Supressor
			{ "muzzle_snds_B", "", 750, 375, "" }, //7.62 Supressor
			{ "optic_Arco_blk_F", "", 2500, -1, "" }, //black arco
			{ "optic_ERCO_blk_F", "", 2500, -1, "" }, //black erco
			{ "optic_AMS", "", 2500, -1, "" }, //black AMS
			{ "optic_Holosight_blk_F", "", 2500, -1, "" }, //black holo
			{ "optic_Holosight_smg_blk_F", "", 2500, -1, "" }, //black holo smg
			{ "optic_MRCO", "", 2500, -1, "" }, //mrco
            { "optic_Hamr", "", 2500, -1, "" }, //rco
			{ "optic_DMS", "", 10000, -1, "" }, //dms
			{ "bipod_01_F_blk", "", 2500, -1, "" } //bipod
        };
    };
	//DTU
};
