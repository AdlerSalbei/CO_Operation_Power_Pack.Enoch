# CO_Operation_Power_Pack.Lenova

class newFaction {
    class AllUnits {
        uniform = "";
        backpack = "";
        vest = "";
        primaryWeapon = "";
        primaryWeaponMagazine = "";
        primaryWeaponMuzzle = "";
        primaryWeaponOptics = "";
        primaryWeaponPointer = "";
        primaryWeaponUnderbarrel = "";
        primaryWeaponUnderbarrelMagazine = "";
        secondaryWeapon = "";
        secondaryWeaponMagazine = "";
        secondaryWeaponMuzzle = "";
        secondaryWeaponOptics = "";
        secondaryWeaponPointer = "";
        secondaryWeaponUnderbarrel = "";
        secondaryWeaponUnderbarrelMagazine = "";
        handgunWeapon = "";
        handgunWeaponMagazine = "";
        handgunWeaponMuzzle = "";
        handgunWeaponOptics = "";
        handgunWeaponPointer = "";
        handgunWeaponUnderbarrel = "";
        handgunWeaponUnderbarrelMagazine = "";
        headgear = "";
        goggles = "";
        nvgoggles = "";
        binoculars = "";
        map = "";
        gps = "";
        compass = "";
        watch = "";
        radio = "";
    };
    class Type {
	
		//SQL
        class usmc_marpat_wd_squadleader {
            uniform = "rhs_uniform_FROG01_wd";
            vest = "rhsusf_spc_squadleader";
            backpack = "";
            headgear = "rhsusf_lwh_helmet_marpatwd_headset";
            primaryWeapon = "rhs_weap_m4_carryhandle_grip3";
            primaryWeaponMagazine = "rhs_mag_30Rnd_556x45_M855_Stanag";
            primaryWeaponOptics = "rhsusf_acc_ACOG3_USMC";
            primaryWeaponPointer = "rhsusf_acc_anpeq16a";
            primaryWeaponUnderbarrel = "rhsusf_acc_grip3";
            binoculars = "Binocular";
            map = "ItemMap";
            compass = "ItemCompass";
            watch = "ItemWatch";
            gps = "";
            radio = "ItemRadio";
            nvgoggles = "";
            addItemsToUniform[] = {
                LIST_1("FirstAidKit"),
                LIST_1("rhsusf_ANPVS_14"),
                LIST_2("Chemlight_red"),
                LIST_1("rhs_mag_30Rnd_556x45_M855_Stanag")
            };
            addItemsToVest[] = {
                LIST_6("rhs_mag_30Rnd_556x45_M855_Stanag"),
                LIST_1("rhs_mag_m67"),
                LIST_1("rhs_mag_an_m8hc"),
                LIST_1("rhs_mag_m18_purple"),
                LIST_1("rhs_mag_m18_yellow"),
                LIST_1("rhs_mag_m18_red")
            };
        };
		
		//TL
        class usmc_marpat_wd_teamleader {
            uniform = "rhs_uniform_FROG01_wd";
            vest = "rhsusf_spc_teamleader";
            backpack = "rhsusf_falconii_coy_gr";
            headgear = "rhsusf_lwh_helmet_marpatwd_ess";
            primaryWeapon = "rhs_m4_m203_acog_usmc";
            primaryWeaponMagazine = "rhs_mag_30Rnd_556x45_M855_Stanag";
            primaryWeaponOptics = "rhsusf_acc_ACOG2_USMC";
            primaryWeaponPointer = "rhsusf_acc_anpeq16a";
            primaryWeaponUnderbarrelMagazine = "rhs_mag_M441_HE";
            binoculars = "Binocular";
            map = "ItemMap";
            compass = "ItemCompass";
            watch = "ItemWatch";
            gps = "";
            radio = "ItemRadio";
            nvgoggles = "";
            addItemsToUniform[] = {
                LIST_1("FirstAidKit"),
                LIST_1("rhsusf_ANPVS_14")
            };
            addItemsToVest[] = {
                LIST_8("rhs_mag_30Rnd_556x45_M855_Stanag"),
                LIST_5("rhs_mag_M441_HE"),
                LIST_1("rhs_mag_m18_yellow"),
                LIST_1("rhs_mag_m18_purple"),
                LIST_2("rhs_mag_m67")
            };
            addItemsToBackpack[] = {
                LIST_10("rhs_mag_M441_HE"),
                LIST_5("rhs_mag_M585_white")
            };
        };
		
		//Rifleman
        class usmc_marpat_wd_rifleman_m4 {
            uniform = "rhs_uniform_FROG01_wd";
            vest = "rhsusf_spc_rifleman";
            backpack = "";
            headgear = "rhsusf_lwh_helmet_marpatwd";
            primaryWeapon = "rhs_weap_m4_carryhandle_grip3";
            primaryWeaponMagazine = "rhs_mag_30Rnd_556x45_M855_Stanag";
            primaryWeaponOptics = "rhsusf_acc_ACOG_USMC";
            primaryWeaponPointer = "rhsusf_acc_anpeq16a";
            primaryWeaponUnderbarrel = "rhsusf_acc_grip3";
            binoculars = "";
            map = "ItemMap";
            compass = "ItemCompass";
            watch = "ItemWatch";
            gps = "";
            radio = "ItemRadio";
            nvgoggles = "";
            addItemsToUniform[] = {
                LIST_1("FirstAidKit"),
                LIST_1("rhsusf_ANPVS_14"),
                LIST_1("rhs_mag_30Rnd_556x45_M855_Stanag")
            };
            addItemsToVest[] = {
                LIST_7("rhs_mag_30Rnd_556x45_M855_Stanag"),
                LIST_1("rhs_mag_an_m8hc"),
                LIST_2("rhs_mag_m67")
            };
        };
		
		//SMAW
        class usmc_marpat_wd_smaw {
            uniform = "rhs_uniform_FROG01_wd";
            vest = "rhsusf_spc_light";
            backpack = "rhsusf_assault_eagleaiii_coy_assaultman";
            headgear = "rhsusf_lwh_helmet_marpatwd_ess";
            primaryWeapon = "rhs_m4_acog_usmc";
            primaryWeaponMagazine = "rhs_mag_30Rnd_556x45_M855_Stanag";
            primaryWeaponOptics = "rhsusf_acc_ACOG_USMC";
            primaryWeaponPointer = "rhsusf_acc_anpeq16a_top";
            secondaryWeapon = "rhs_weap_smaw_gr_optic";
            secondaryWeaponMagazine = "rhs_mag_smaw_HEDP";
            secondaryWeaponOptics = "rhs_weap_optic_smaw";
            secondaryWeaponUnderbarrelMagazine = "rhs_mag_smaw_SR";
            binoculars = "";
            map = "ItemMap";
            compass = "ItemCompass";
            watch = "ItemWatch";
            gps = "";
            radio = "ItemRadio";
            nvgoggles = "";
            addItemsToUniform[] = {
                LIST_1("FirstAidKit"),
                LIST_1("rhsusf_ANPVS_14")
            };
            addItemsToVest[] = {
                LIST_6("rhs_mag_30Rnd_556x45_M855_Stanag"),
                LIST_1("rhs_mag_m67")
            };
            addItemsToBackpack[] = {
                LIST_1("rhs_mag_smaw_HEDP"),
                LIST_1("rhsusf_m112_mag")
            };
        };
		
		//Grenadier
        class usmc_marpat_wd_grenadier {
            uniform = "rhs_uniform_FROG01_wd";
            vest = "rhsusf_spc_teamleader";
            backpack = "rhsusf_falconii_coy_gr";
            headgear = "rhsusf_lwh_helmet_marpatwd_ess";
            primaryWeapon = "rhs_weap_m16a4_m203_acog_usmc";
            primaryWeaponMagazine = "rhs_mag_30Rnd_556x45_M855_Stanag";
            primaryWeaponOptics = "rhsusf_acc_ACOG_USMC";
            primaryWeaponPointer = "rhsusf_acc_anpeq16a";
            primaryWeaponUnderbarrelMagazine = "rhs_mag_M441_HE";
            binoculars = "";
            map = "ItemMap";
            compass = "ItemCompass";
            watch = "ItemWatch";
            gps = "";
            radio = "ItemRadio";
            nvgoggles = "";
            addItemsToUniform[] = {
                LIST_1("FirstAidKit"),
                LIST_1("rhsusf_ANPVS_14")
            };
            addItemsToVest[] = {
                LIST_7("rhs_mag_30Rnd_556x45_M855_Stanag"),
                LIST_2("rhs_mag_m67"),
                LIST_8("rhs_mag_M441_HE")
            };
            addItemsToBackpack[] = {
                LIST_10("rhs_mag_M441_HE"),
                LIST_5("rhs_mag_M585_white")
            };
        };
		
		//MG
        class usmc_marpat_wd_machinegunner {
            uniform = "rhs_uniform_FROG01_wd";
            vest = "rhsusf_spc_mg";
            backpack = "rhsusf_assault_eagleaiii_coy_mg";
            headgear = "rhsusf_lwh_helmet_marpatwd_ess";
            primaryWeapon = "rhs_weap_m240b_usmc";
            primaryWeaponMagazine = "rhsusf_50Rnd_762x51";
            primaryWeaponOptics = "rhsusf_acc_ACOG_MDO";
            handgunWeapon = "rhsusf_weap_m9";
            handgunWeaponMagazine = "rhsusf_mag_15Rnd_9x19_FMJ";
            binoculars = "";
            map = "ItemMap";
            compass = "ItemCompass";
            watch = "ItemWatch";
            gps = "";
            radio = "ItemRadio";
            nvgoggles = "";
            addItemsToUniform[] = {
                LIST_1("FirstAidKit"),
                LIST_1("rhsusf_ANPVS_14"),
                LIST_1("rhsusf_mag_15Rnd_9x19_FMJ"),
                LIST_1("rhs_mag_m67")
            };
            addItemsToVest[] = {
                LIST_4("rhsusf_50Rnd_762x51"),
                LIST_2("rhsusf_mag_15Rnd_9x19_FMJ")
            };
            addItemsToBackpack[] = {
                LIST_8("rhsusf_50Rnd_762x51")
            };
        };
		
		//MG Ass
        class usmc_marpat_wd_machinegunner_ass {
            uniform = "rhs_uniform_FROG01_wd";
            vest = "rhsusf_spc_rifleman";
            backpack = "rhsusf_assault_eagleaiii_coy_mg";
            headgear = "rhsusf_lwh_helmet_marpatwd";
            primaryWeapon = "rhs_weap_m16a4_carryhandle_grip2";
            primaryWeaponMagazine = "rhs_mag_30Rnd_556x45_M855_Stanag";
            primaryWeaponOptics = "rhsusf_acc_ACOG_USMC";
            primaryWeaponPointer = "rhsusf_acc_anpeq16a";
            primaryWeaponUnderbarrel = "rhsusf_acc_grip3";
            binoculars = "";
            map = "ItemMap";
            compass = "ItemCompass";
            watch = "ItemWatch";
            gps = "";
            radio = "ItemRadio";
            nvgoggles = "";
            addItemsToUniform[] = {
                LIST_1("FirstAidKit"),
                LIST_1("rhsusf_ANPVS_14"),
                LIST_1("rhs_mag_30Rnd_556x45_M855_Stanag")
            };
            addItemsToVest[] = {
                LIST_7("rhs_mag_30Rnd_556x45_M855_Stanag"),
                LIST_1("rhs_mag_an_m8hc"),
                LIST_2("rhs_mag_m67")
            };
            addItemsToBackpack[] = {
                LIST_8("rhsusf_50Rnd_762x51")
            };
        };
		
		//Heli Pilot
        class usmc_marpat_wd_helipilot {
            uniform = "rhs_uniform_FROG01_wd";
            vest = "rhsusf_spc_crewman";
            backpack = "";
            headgear = "rhsusf_hgu56p";
            primaryWeapon = "rhs_weap_m4_carryhandle";
            primaryWeaponMagazine = "rhs_mag_30Rnd_556x45_M855_Stanag";
            handgunWeapon = "rhsusf_weap_m9";
            handgunWeaponMagazine = "rhsusf_mag_15Rnd_9x19_FMJ";
            binoculars = "";
            map = "ItemMap";
            compass = "ItemCompass";
            watch = "ItemWatch";
            gps = "ItemGPS";
            radio = "ItemRadio";
            nvgoggles = "";
            addItemsToUniform[] = {
                LIST_1("FirstAidKit"),
                LIST_1("rhsusf_ANPVS_15"),
                LIST_1("rhs_mag_m18_red")
            };
            addItemsToVest[] = {
                LIST_6("rhs_mag_30Rnd_556x45_M855_Stanag"),
                LIST_3("rhsusf_mag_15Rnd_9x19_FMJ")
            };
        };
		
		//Recon TL
        class usmc_recon_marpat_wd_teamleader_lite {
            uniform = "rhs_uniform_FROG01_wd";
            vest = "rhsusf_spc_teamleader";
            backpack = "rhsusf_falconii_recon";
            headgear = "rhs_booniehat2_marpatwd";
            primaryWeapon = "rhs_m4a1_m203_acog3_usmc_sup";
            primaryWeaponMagazine = "rhs_mag_30Rnd_556x45_M855_Stanag";
            primaryWeaponOptics = "rhsusf_acc_ACOG3_USMC";
            primaryWeaponPointer = "rhsusf_acc_anpeq16a";
            primaryWeaponMuzzle = "rhsusf_acc_nt4_black";
            primaryWeaponUnderbarrelMagazine = "rhs_mag_M441_HE";
            handgunWeapon = "rhsusf_weap_m1911a1";
            handgunWeaponMagazine = "rhsusf_mag_7x45acp_MHP";
            binoculars = "rhsusf_bino_lerca_1200_black";
            map = "ItemMap";
            compass = "ItemCompass";
            watch = "ItemWatch";
            gps = "";
            radio = "ItemRadio";
            nvgoggles = "";
            addItemsToUniform[] = {
                LIST_1("FirstAidKit"),
                LIST_1("rhsusf_ANPVS_14")
            };
            addItemsToVest[] = {
                LIST_5("rhs_mag_30Rnd_556x45_M855_Stanag"),
                LIST_1("rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red"),
                LIST_3("rhsusf_mag_7x45acp_MHP"),
                LIST_2("rhs_mag_mk3a2"),
                LIST_1("rhs_mag_an_m8hc"),
                LIST_2("Chemlight_green"),
                LIST_2("Chemlight_red")
            };
            addItemsToBackpack[] = {
                LIST_2("FirstAidKit"),
                LIST_5("rhs_mag_M441_HE"),
                LIST_5("rhs_mag_M585_white"),
                LIST_2("rhs_mag_mk84"),
                LIST_2("rhs_mag_m18_red"),
                LIST_2("rhs_mag_m18_green"),
                LIST_2("rhs_mag_m18_purple"),
                LIST_2("rhs_mag_m18_yellow")
            };
        };
		
		//Recon Marksman
        class usmc_recon_marpat_wd_marksman_lite {
            uniform = "rhs_uniform_FROG01_wd";
            vest = "rhsusf_spc_marksman";
            backpack = "";
            headgear = "rhs_booniehat2_marpatwd";
            primaryWeapon = "rhs_weap_sr25_sup_marsoc";
            primaryWeaponMagazine = "rhsusf_20Rnd_762x51_SR25_m118_special_Mag";
            primaryWeaponOptics = "rhsusf_acc_premier";
            primaryWeaponMuzzle = "rhsusf_acc_SR25S";
            primaryWeaponUnderbarrel = "rhsusf_acc_harris_bipod";
            handgunWeapon = "rhsusf_weap_m1911a1";
            handgunWeaponMagazine = "rhsusf_mag_7x45acp_MHP";
            binoculars = "rhsusf_bino_lerca_1200_black";
            map = "ItemMap";
            compass = "ItemCompass";
            watch = "ItemWatch";
            gps = "";
            radio = "ItemRadio";
            nvgoggles = "";
            addItemsToUniform[] = {
                LIST_1("FirstAidKit"),
                LIST_1("rhsusf_ANPVS_14"),
                LIST_2("rhsusf_mag_7x45acp_MHP"),
                LIST_2("Chemlight_green")
            };
            addItemsToVest[] = {
                LIST_4("rhsusf_20Rnd_762x51_SR25_m118_special_Mag"),
                LIST_1("rhsusf_mag_7x45acp_MHP"),
                LIST_1("rhs_mag_mk3a2")
            };
        };
		
		//Recon Rifleman
        class usmc_recon_marpat_wd_rifleman_lite {
            uniform = "rhs_uniform_FROG01_wd";
            vest = "rhsusf_spc_light";
            backpack = "";
            headgear = "rhs_booniehat2_marpatwd";
            primaryWeapon = "rhs_weap_m4a1_carryhandle_grip3";
            primaryWeaponMagazine = "rhs_mag_30Rnd_556x45_M855_Stanag";
            primaryWeaponOptics = "rhsusf_acc_ACOG2_USMC";
            primaryWeaponPointer = "rhsusf_acc_anpeq16a";
            primaryWeaponMuzzle = "rhsusf_acc_nt4_black";
            primaryWeaponUnderbarrel = "rhsusf_acc_grip3";
            handgunWeapon = "rhsusf_weap_m1911a1";
            handgunWeaponMagazine = "rhsusf_mag_7x45acp_MHP";
            binoculars = "Binocular";
            map = "ItemMap";
            compass = "ItemCompass";
            watch = "ItemWatch";
            gps = "";
            radio = "ItemRadio";
            nvgoggles = "";
            addItemsToUniform[] = {
                LIST_1("FirstAidKit"),
                LIST_1("rhsusf_ANPVS_14"),
                LIST_1("Chemlight_green"),
                LIST_2("Chemlight_red"),
                LIST_1("rhs_mag_30Rnd_556x45_M855_Stanag")
            };
            addItemsToVest[] = {
                LIST_4("rhs_mag_30Rnd_556x45_M855_Stanag"),
                LIST_1("rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red"),
                LIST_3("rhsusf_mag_7x45acp_MHP"),
                LIST_2("rhs_mag_mk3a2"),
                LIST_1("rhs_mag_mk84"),
                LIST_1("Chemlight_green")
            };
        };
    };
};
