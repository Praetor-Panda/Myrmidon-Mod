class CfgPatches
{
    class Myr_Contractor
    {
        units[] = {"Myr_Contractor", "Myrmidon_BreacherShotgun", "Myrmidon_BreacherSMG", "Myrmidon_EOD", "Myrmidon_Medic", "Myrmidon_Contractor", "Myrmidon_Grenadier", "Myrmidon_Marksman", "Myrmidon_Sniper", "Myrmidon_Autorifleman", "Myrmidon_AT", "Myrmidon_JTAC", "Myrmidon_Pilot", "Myrmidon_TeamLeader"}; // Class name of the unit
        weapons[] = {"Myrmidon_sgun_M4_F_E22_optic_ROS_black_SMG", "Myrmidon_JCA_hgun_P320_black_F_JCA_acc_LightModule_Pistol_blackJCA_optic_PRO_black", "Myrmidon_JCA_smg_MP5_VFG_black_F_JCA_acc_LaserModule_black_PointerJCA_optic_AHO_black", "Myrmidon_JCA_arifle_M4A4_VFG_black_F_JCA_acc_DualMount_black_PointerJCA_optic_AHO_black", "Myrmidon_tf47_at4_heat", "Myrmidon_JCA_arifle_M4A4_GL_black_F_JCA_acc_DualMount_black_PointerJCA_optic_AHO_black", "Myrmidon_JCA_arifle_SR10_VFG_black_F_JCA_acc_DualMount_black_PointerJCA_optic_AICO_blackJCA_bipod_04_black", "Myrmidon_JCA_srifle_AWM_black_F_JCA_muzzle_snds_AWM_tactical_blackJCA_optic_HPPO_RAD_blackJCA_bipod_AWM_black", "Myrmidon_LMG_Mk200_black_F_JCA_acc_LaserModule_black_PointerJCA_optic_AHO_blackJCA_bipod_04_black", "Myrmidon_JCA_arifle_M4A4_VFG_black_F_JCA_acc_DualMount_black_PointerJCA_optic_AICO_black", "Myrmidon_launch_Titan_short_blk_F", "Myrmidon_JCA_arifle_M4A4_GL_black_F_JCA_acc_DualMount_black_PointerJCA_optic_AICO_black"};
        requiredVersion = 1.0;
        requiredAddons[] = {"A3_Characters_F"}; // Dependencies
    };
    /*class Myr_Pilot
    {
        units[] = {"Myr_Pilot"}; // Class name of the unit
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"A3_Characters_F"}; // Dependencies
    };*/
};

class CfgVehicles
{
    class B_Soldier_F; // Base class (Rifleman)
    class Myr_Contractor : B_Soldier_F
    {
        author = "Biwwy";
        scope = 1;
        scopeCurator = 1;
        displayName = "Contractor";
        side = 2;
        faction = "Myr_Faction";
        uniformClass = "Myr_Blue_Long";
        linkedItems[] = {"Myr_Grey_Combat", "Myr_Helmet_Tan", "ItemMap", "ItemGPS", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        respawnlinkedItems[] = {"Myr_Grey_Combat", "Myr_Helmet_Tan", "ItemMap", "ItemGPS", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        weapons[] = {"JCA_arifle_M4A4_AFG_black_F", "JCA_hgun_P320_black_F", "Laserdesignator"};
        respawnWeapons[] = {"JCA_arifle_M4A4_AFG_black_F", "JCA_hgun_P320_black_F", "Laserdesignator"};
        magazines[] = {"JCA_30Rnd_556x45_Green_PMAG", "JCA_17Rnd_9x21_P320_Mag", "Laserbatteries", "JCA_30Rnd_556x45_Green_PMAG", "JCA_17Rnd_9x21_P320_Mag", "Laserbatteries"};
        respawnMagazines[] = {"JCA_30Rnd_556x45_Green_PMAG", "JCA_17Rnd_9x21_P320_Mag", "Laserbatteries", "JCA_30Rnd_556x45_Green_PMAG", "JCA_17Rnd_9x21_P320_Mag", "Laserbatteries"};
    };
    /*class Myr_Pilot: B_Soldier_F
    {
        displayName = "Pilot";                                                                                           // Name in the game
        faction = "Myr_Faction";                                                                                         // Link to your custom faction
        editorSubcategory = "EdSubcat_Personnel";                                                                   // Optional: Custom subcategory for better organization in the editor
        vehicleClass = "Men";                                                                                            // Optional: Class for grouping in the editor
        side = 2;
        uniformClass = "U_B_CombatUniform_mcam";                                                                         // Uniform class name
        weapons[] = {"arifle_MX_F", "Throw", "Put"};                                                                     // Primary weapon and additional equipment
        respawnWeapons[] = {"arifle_MX_F", "Throw", "Put"};                                                              // Weapons on respawn
        magazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};                                          // Magazines in loadout
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};                                   // Magazines on respawn
        linkedItems[] = {"V_PlateCarrier1_rgr", "H_HelmetB", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};        // Linked items like vest, helmet, etc.
        respawnLinkedItems[] = {"V_PlateCarrier1_rgr", "H_HelmetB", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Linked items on respawn
        backpack = "";                                                                                                   // Optional: Backpack class name
    };*/
    class Myr_Fastbag_Blk;
    class Myr_Radiobag_Blk;
    class Myr_M9_Grey;

    class Myrmidon_BreacherShotgun : Myr_Contractor
    {
        faction = "Myr_Faction";
        side = 2;
        scope = 2;
        scopeCurator = 2;
        displayName = "BreacherShotgun";
        uniformClass = "Myr_Grey_Rolled";
        weapons[] = {"Rangefinder", "Myrmidon_sgun_M4_F_E22_optic_ROS_black_SMG", "Myrmidon_JCA_hgun_P320_black_F_JCA_acc_LightModule_Pistol_blackJCA_optic_PRO_black", "Put", "Throw"};
        respawnWeapons[] = {"Rangefinder", "Myrmidon_sgun_M4_F_E22_optic_ROS_black_SMG", "Myrmidon_JCA_hgun_P320_black_F_JCA_acc_LightModule_Pistol_blackJCA_optic_PRO_black", "Put", "Throw"};
        items[] = {"ACE_wirecutter", "ItemAndroid", "ACE_EntrenchingTool", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_Flashlight_MX991", "ACE_adenosine", "ACE_adenosine", "ACE_adenosine", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_bodyBag_blue", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_splint", "ACE_splint", "kat_bloodIV_O_N_250", "kat_guedel", "kat_chestSeal", "kat_chestSeal", "kat_Pulseoximeter", "ACE_morphine", "ACE_epinephrine", "ACE_epinephrine"};
        respawnItems[] = {"ACE_wirecutter", "ItemAndroid", "ACE_EntrenchingTool", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_Flashlight_MX991", "ACE_adenosine", "ACE_adenosine", "ACE_adenosine", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_bodyBag_blue", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_splint", "ACE_splint", "kat_bloodIV_O_N_250", "kat_guedel", "kat_chestSeal", "kat_chestSeal", "kat_Pulseoximeter", "ACE_morphine", "ACE_epinephrine", "ACE_epinephrine"};
        magazines[] = {"JCA_17Rnd_9x21_P320_Green_Mag", "JCA_17Rnd_9x21_P320_Green_Mag", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "JCA_SignalFlare_Green", "HandGrenade", "HandGrenade", "ACE_M84", "ACE_M84", "8Rnd_12Gauge_Pellets", "8Rnd_12Gauge_Pellets", "8Rnd_12Gauge_Pellets", "8Rnd_12Gauge_Pellets", "8Rnd_12Gauge_Pellets", "kat_Painkiller", "kat_Painkiller", "8Rnd_12Gauge_Slug", "8Rnd_12Gauge_Slug", "8Rnd_12Gauge_Slug", "8Rnd_12Gauge_Slug", "8Rnd_12Gauge_Slug", "8Rnd_12Gauge_Slug", "8Rnd_12Gauge_Slug", "Aegis_8Rnd_12Gauge_Smoke", "Aegis_8Rnd_12Gauge_Smoke", "8Rnd_12Gauge_Pellets", "8Rnd_12Gauge_Pellets"};
        respawnMagazines[] = {"JCA_17Rnd_9x21_P320_Green_Mag", "JCA_17Rnd_9x21_P320_Green_Mag", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "JCA_SignalFlare_Green", "HandGrenade", "HandGrenade", "ACE_M84", "ACE_M84", "8Rnd_12Gauge_Pellets", "8Rnd_12Gauge_Pellets", "8Rnd_12Gauge_Pellets", "8Rnd_12Gauge_Pellets", "8Rnd_12Gauge_Pellets", "kat_Painkiller", "kat_Painkiller", "8Rnd_12Gauge_Slug", "8Rnd_12Gauge_Slug", "8Rnd_12Gauge_Slug", "8Rnd_12Gauge_Slug", "8Rnd_12Gauge_Slug", "8Rnd_12Gauge_Slug", "8Rnd_12Gauge_Slug", "Aegis_8Rnd_12Gauge_Smoke", "Aegis_8Rnd_12Gauge_Smoke", "8Rnd_12Gauge_Pellets", "8Rnd_12Gauge_Pellets"};
        linkedItems[] = {"ItemMap", "ItemCompass", "ACE_Altimeter", "TFAR_anprc152", "ItemGPS", "Rangefinder", "Myr_Helmet_Tan", "Myr_Grey_Heavy", "E22_G_Shemagh_light_black_F"};
        respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ACE_Altimeter", "TFAR_anprc152", "ItemGPS", "Rangefinder", "Myr_Helmet_Tan", "Myr_Grey_Heavy", "E22_G_Shemagh_light_black_F"};
        backpack = "Myrmidon_BreacherShotgun_pack";
    };

    class Myrmidon_BreacherSMG : Myr_Contractor
    {
        faction = "Myr_Faction";
        side = 2;
        scope = 2;
        scopeCurator = 2;
        displayName = "BreacherSMG";
        uniformClass = "Myr_Grey_Rolled";
        weapons[] = {"Rangefinder", "Myrmidon_JCA_smg_MP5_VFG_black_F_JCA_acc_LaserModule_black_PointerJCA_optic_AHO_black", "Myrmidon_JCA_hgun_P320_black_F_JCA_acc_LightModule_Pistol_blackJCA_optic_PRO_black", "Put", "Throw"};
        respawnWeapons[] = {"Rangefinder", "Myrmidon_JCA_smg_MP5_VFG_black_F_JCA_acc_LaserModule_black_PointerJCA_optic_AHO_black", "Myrmidon_JCA_hgun_P320_black_F_JCA_acc_LightModule_Pistol_blackJCA_optic_PRO_black", "Put", "Throw"};
        items[] = {"ACE_wirecutter", "ItemAndroid", "ACE_EntrenchingTool", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_Flashlight_MX991", "ACE_adenosine", "ACE_adenosine", "ACE_adenosine", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_bodyBag_blue", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_splint", "ACE_splint", "kat_bloodIV_O_N_250", "kat_guedel", "kat_chestSeal", "kat_chestSeal", "kat_Pulseoximeter", "ACE_morphine", "ACE_epinephrine", "ACE_epinephrine"};
        respawnItems[] = {"ACE_wirecutter", "ItemAndroid", "ACE_EntrenchingTool", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_Flashlight_MX991", "ACE_adenosine", "ACE_adenosine", "ACE_adenosine", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_bodyBag_blue", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_splint", "ACE_splint", "kat_bloodIV_O_N_250", "kat_guedel", "kat_chestSeal", "kat_chestSeal", "kat_Pulseoximeter", "ACE_morphine", "ACE_epinephrine", "ACE_epinephrine"};
        magazines[] = {"JCA_17Rnd_9x21_P320_Green_Mag", "JCA_17Rnd_9x21_P320_Green_Mag", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "JCA_SignalFlare_Green", "HandGrenade", "HandGrenade", "ACE_M84", "ACE_M84", "JCA_30Rnd_9x21_MP5_Tracer_Green_Mag", "JCA_30Rnd_9x21_MP5_Tracer_Green_Mag", "JCA_30Rnd_9x21_MP5_Tracer_Green_Mag", "JCA_30Rnd_9x21_MP5_Tracer_Green_Mag", "JCA_30Rnd_9x21_MP5_Tracer_Green_Mag", "JCA_30Rnd_9x21_MP5_Tracer_Green_Mag", "kat_Painkiller", "kat_Painkiller", "JCA_30Rnd_9x21_MP5_Tracer_Green_Mag", "JCA_30Rnd_9x21_MP5_Tracer_Green_Mag", "JCA_30Rnd_9x21_MP5_Tracer_Green_Mag", "JCA_30Rnd_9x21_MP5_Tracer_Green_Mag", "JCA_30Rnd_9x21_MP5_Tracer_Green_Mag", "JCA_30Rnd_9x21_MP5_Tracer_Green_Mag"};
        respawnMagazines[] = {"JCA_17Rnd_9x21_P320_Green_Mag", "JCA_17Rnd_9x21_P320_Green_Mag", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "JCA_SignalFlare_Green", "HandGrenade", "HandGrenade", "ACE_M84", "ACE_M84", "JCA_30Rnd_9x21_MP5_Tracer_Green_Mag", "JCA_30Rnd_9x21_MP5_Tracer_Green_Mag", "JCA_30Rnd_9x21_MP5_Tracer_Green_Mag", "JCA_30Rnd_9x21_MP5_Tracer_Green_Mag", "JCA_30Rnd_9x21_MP5_Tracer_Green_Mag", "JCA_30Rnd_9x21_MP5_Tracer_Green_Mag", "kat_Painkiller", "kat_Painkiller", "JCA_30Rnd_9x21_MP5_Tracer_Green_Mag", "JCA_30Rnd_9x21_MP5_Tracer_Green_Mag", "JCA_30Rnd_9x21_MP5_Tracer_Green_Mag", "JCA_30Rnd_9x21_MP5_Tracer_Green_Mag", "JCA_30Rnd_9x21_MP5_Tracer_Green_Mag", "JCA_30Rnd_9x21_MP5_Tracer_Green_Mag"};
        linkedItems[] = {"ItemMap", "ItemCompass", "ACE_Altimeter", "TFAR_anprc152", "ItemGPS", "Rangefinder", "Myr_Helmet_Tan", "Myr_Grey_Heavy", "E22_G_Shemagh_light_black_F"};
        respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ACE_Altimeter", "TFAR_anprc152", "ItemGPS", "Rangefinder", "Myr_Helmet_Tan", "Myr_Grey_Heavy", "E22_G_Shemagh_light_black_F"};
        backpack = "Myrmidon_BreacherSMG_pack";
    };

    class Myrmidon_EOD : Myr_Contractor
    {
        faction = "Myr_Faction";
        side = 2;
        scope = 2;
        scopeCurator = 2;
        displayName = "EOD";
        uniformClass = "Myr_Grey_Rolled";
        weapons[] = {"Rangefinder", "Myrmidon_JCA_arifle_M4A4_VFG_black_F_JCA_acc_DualMount_black_PointerJCA_optic_AHO_black", "Myrmidon_JCA_hgun_P320_black_F_JCA_acc_LightModule_Pistol_blackJCA_optic_PRO_black", "Put", "Throw"};
        respawnWeapons[] = {"Rangefinder", "Myrmidon_JCA_arifle_M4A4_VFG_black_F_JCA_acc_DualMount_black_PointerJCA_optic_AHO_black", "Myrmidon_JCA_hgun_P320_black_F_JCA_acc_LightModule_Pistol_blackJCA_optic_PRO_black", "Put", "Throw"};
        items[] = {"ItemAndroid", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_Flashlight_MX991", "MineDetector", "ACE_M26_Clacker", "ACE_DefusalKit", "ACE_EntrenchingTool", "ACE_wirecutter", "ACE_adenosine", "ACE_adenosine", "ACE_adenosine", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_bodyBag_blue", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_splint", "ACE_splint", "kat_bloodIV_O_N_250", "kat_guedel", "kat_chestSeal", "kat_chestSeal", "kat_Pulseoximeter", "ACE_morphine", "ACE_epinephrine", "ACE_epinephrine", "ToolKit"};
        respawnItems[] = {"ItemAndroid", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_Flashlight_MX991", "MineDetector", "ACE_M26_Clacker", "ACE_DefusalKit", "ACE_EntrenchingTool", "ACE_wirecutter", "ACE_adenosine", "ACE_adenosine", "ACE_adenosine", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_bodyBag_blue", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_splint", "ACE_splint", "kat_bloodIV_O_N_250", "kat_guedel", "kat_chestSeal", "kat_chestSeal", "kat_Pulseoximeter", "ACE_morphine", "ACE_epinephrine", "ACE_epinephrine", "ToolKit"};
        magazines[] = {"JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_17Rnd_9x21_P320_Green_Mag", "JCA_17Rnd_9x21_P320_Green_Mag", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "JCA_SignalFlare_Green", "HandGrenade", "HandGrenade", "ACE_M84", "ACE_M84", "kat_Painkiller", "kat_Painkiller", "SatchelCharge_Remote_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "SLAMDirectionalMine_Wire_Mag", "SLAMDirectionalMine_Wire_Mag"};
        respawnMagazines[] = {"JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_17Rnd_9x21_P320_Green_Mag", "JCA_17Rnd_9x21_P320_Green_Mag", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "JCA_SignalFlare_Green", "HandGrenade", "HandGrenade", "ACE_M84", "ACE_M84", "kat_Painkiller", "kat_Painkiller", "SatchelCharge_Remote_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "SLAMDirectionalMine_Wire_Mag", "SLAMDirectionalMine_Wire_Mag"};
        linkedItems[] = {"ItemMap", "ItemCompass", "ACE_Altimeter", "TFAR_anprc152", "ItemGPS", "Rangefinder", "Myr_Helmet_Tan", "Myr_Grey_Combat", "E22_G_Shemagh_light_black_F"};
        respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ACE_Altimeter", "TFAR_anprc152", "ItemGPS", "Rangefinder", "Myr_Helmet_Tan", "Myr_Grey_Combat", "E22_G_Shemagh_light_black_F"};
        backpack = "Myrmidon_EOD_pack";
    };

    class Myrmidon_Medic : Myr_Contractor
    {
        faction = "Myr_Faction";
        side = 2;
        scope = 2;
        scopeCurator = 2;
        displayName = "Medic";
        uniformClass = "Myr_Grey_Rolled";
        weapons[] = {"Rangefinder", "Myrmidon_JCA_arifle_M4A4_VFG_black_F_JCA_acc_DualMount_black_PointerJCA_optic_AHO_black", "Myrmidon_JCA_hgun_P320_black_F_JCA_acc_LightModule_Pistol_blackJCA_optic_PRO_black", "Put", "Throw"};
        respawnWeapons[] = {"Rangefinder", "Myrmidon_JCA_arifle_M4A4_VFG_black_F_JCA_acc_DualMount_black_PointerJCA_optic_AHO_black", "Myrmidon_JCA_hgun_P320_black_F_JCA_acc_LightModule_Pistol_blackJCA_optic_PRO_black", "Put", "Throw"};
        items[] = {"ACE_wirecutter", "ItemAndroid", "ACE_EntrenchingTool", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_Flashlight_MX991", "ACE_adenosine", "ACE_adenosine", "ACE_adenosine", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_bodyBag_blue", "kat_chestSeal", "kat_chestSeal", "kat_chestSeal", "kat_chestSeal", "kat_chestSeal", "kat_chestSeal", "kat_chestSeal", "kat_chestSeal", "kat_chestSeal", "kat_chestSeal", "kat_accuvac", "kat_X_AED", "kat_IV_16", "kat_IV_16", "kat_IV_16", "kat_IV_16", "kat_IV_16", "kat_IV_16", "kat_IV_16", "kat_IV_16", "kat_IV_16", "kat_IV_16", "kat_IV_16", "kat_IV_16", "kat_IV_16", "kat_IV_16", "kat_IV_16", "kat_atropine", "kat_atropine", "kat_amiodarone", "kat_amiodarone", "kat_amiodarone", "kat_amiodarone", "kat_amiodarone", "kat_bloodIV_O_N", "kat_bloodIV_O_N", "kat_bloodIV_O_N", "kat_bloodIV_O_N", "kat_bloodIV_O_N_500", "kat_bloodIV_O_N_500", "kat_bloodIV_O_N_500", "kat_bloodIV_O_N_500", "kat_bloodIV_O_N_500", "kat_bloodIV_O_N_500", "kat_bloodIV_O_N_250", "kat_bloodIV_O_N_250", "kat_bloodIV_O_N_250", "kat_bloodIV_O_N_250", "kat_IO_FAST", "kat_IO_FAST", "kat_IO_FAST", "kat_IO_FAST", "kat_fentanyl", "kat_fentanyl", "kat_fentanyl", "kat_fentanyl", "kat_fentanyl", "KAT_Empty_bloodIV_500", "KAT_Empty_bloodIV_500", "kat_larynx", "kat_larynx", "kat_larynx", "kat_larynx", "kat_larynx", "kat_larynx", "kat_larynx", "kat_larynx", "kat_larynx", "kat_larynx", "kat_naloxone", "kat_naloxone", "kat_ncdKit", "kat_ncdKit", "kat_ncdKit", "kat_ncdKit", "kat_ncdKit", "kat_norepinephrine", "kat_norepinephrine", "kat_norepinephrine", "kat_norepinephrine", "kat_norepinephrine", "kat_Pulseoximeter", "ACE_splint", "ACE_splint", "ACE_splint", "ACE_splint", "ACE_splint", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "kat_TXA", "kat_TXA", "kat_TXA", "kat_TXA", "kat_TXA", "kat_TXA", "kat_TXA", "kat_TXA", "kat_TXA", "kat_TXA", "kat_stethoscope", "kat_BVM"};
        respawnItems[] = {"ACE_wirecutter", "ItemAndroid", "ACE_EntrenchingTool", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_Flashlight_MX991", "ACE_adenosine", "ACE_adenosine", "ACE_adenosine", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_bodyBag_blue", "kat_chestSeal", "kat_chestSeal", "kat_chestSeal", "kat_chestSeal", "kat_chestSeal", "kat_chestSeal", "kat_chestSeal", "kat_chestSeal", "kat_chestSeal", "kat_chestSeal", "kat_accuvac", "kat_X_AED", "kat_IV_16", "kat_IV_16", "kat_IV_16", "kat_IV_16", "kat_IV_16", "kat_IV_16", "kat_IV_16", "kat_IV_16", "kat_IV_16", "kat_IV_16", "kat_IV_16", "kat_IV_16", "kat_IV_16", "kat_IV_16", "kat_IV_16", "kat_atropine", "kat_atropine", "kat_amiodarone", "kat_amiodarone", "kat_amiodarone", "kat_amiodarone", "kat_amiodarone", "kat_bloodIV_O_N", "kat_bloodIV_O_N", "kat_bloodIV_O_N", "kat_bloodIV_O_N", "kat_bloodIV_O_N_500", "kat_bloodIV_O_N_500", "kat_bloodIV_O_N_500", "kat_bloodIV_O_N_500", "kat_bloodIV_O_N_500", "kat_bloodIV_O_N_500", "kat_bloodIV_O_N_250", "kat_bloodIV_O_N_250", "kat_bloodIV_O_N_250", "kat_bloodIV_O_N_250", "kat_IO_FAST", "kat_IO_FAST", "kat_IO_FAST", "kat_IO_FAST", "kat_fentanyl", "kat_fentanyl", "kat_fentanyl", "kat_fentanyl", "kat_fentanyl", "KAT_Empty_bloodIV_500", "KAT_Empty_bloodIV_500", "kat_larynx", "kat_larynx", "kat_larynx", "kat_larynx", "kat_larynx", "kat_larynx", "kat_larynx", "kat_larynx", "kat_larynx", "kat_larynx", "kat_naloxone", "kat_naloxone", "kat_ncdKit", "kat_ncdKit", "kat_ncdKit", "kat_ncdKit", "kat_ncdKit", "kat_norepinephrine", "kat_norepinephrine", "kat_norepinephrine", "kat_norepinephrine", "kat_norepinephrine", "kat_Pulseoximeter", "ACE_splint", "ACE_splint", "ACE_splint", "ACE_splint", "ACE_splint", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "kat_TXA", "kat_TXA", "kat_TXA", "kat_TXA", "kat_TXA", "kat_TXA", "kat_TXA", "kat_TXA", "kat_TXA", "kat_TXA", "kat_stethoscope", "kat_BVM"};
        magazines[] = {"JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_17Rnd_9x21_P320_Green_Mag", "JCA_17Rnd_9x21_P320_Green_Mag", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "JCA_SignalFlare_Green", "HandGrenade", "HandGrenade", "ACE_M84", "ACE_M84", "kat_oxygenTank_150"};
        respawnMagazines[] = {"JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_17Rnd_9x21_P320_Green_Mag", "JCA_17Rnd_9x21_P320_Green_Mag", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "JCA_SignalFlare_Green", "HandGrenade", "HandGrenade", "ACE_M84", "ACE_M84", "kat_oxygenTank_150"};
        linkedItems[] = {"ItemMap", "ItemCompass", "ACE_Altimeter", "TFAR_anprc152", "ItemGPS", "Rangefinder", "Myr_Helmet_Tan", "Myr_Grey_Combat", "E22_G_Shemagh_light_black_F"};
        respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ACE_Altimeter", "TFAR_anprc152", "ItemGPS", "Rangefinder", "Myr_Helmet_Tan", "Myr_Grey_Combat", "E22_G_Shemagh_light_black_F"};
        backpack = "Myrmidon_Medic_pack";
    };

    class Myrmidon_Contractor : Myr_Contractor
    {
        faction = "Myr_Faction";
        side = 2;
        scope = 2;
        scopeCurator = 2;
        displayName = "Contractor";
        uniformClass = "Myr_Grey_Rolled";
        weapons[] = {"Rangefinder", "Myrmidon_JCA_arifle_M4A4_VFG_black_F_JCA_acc_DualMount_black_PointerJCA_optic_AHO_black", "Myrmidon_tf47_at4_heat", "Myrmidon_JCA_hgun_P320_black_F_JCA_acc_LightModule_Pistol_blackJCA_optic_PRO_black", "Put", "Throw"};
        respawnWeapons[] = {"Rangefinder", "Myrmidon_JCA_arifle_M4A4_VFG_black_F_JCA_acc_DualMount_black_PointerJCA_optic_AHO_black", "Myrmidon_tf47_at4_heat", "Myrmidon_JCA_hgun_P320_black_F_JCA_acc_LightModule_Pistol_blackJCA_optic_PRO_black", "Put", "Throw"};
        items[] = {"ACE_wirecutter", "ItemAndroid", "ACE_EntrenchingTool", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_Flashlight_MX991", "ACE_adenosine", "ACE_adenosine", "ACE_adenosine", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_bodyBag_blue", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_splint", "ACE_splint", "kat_bloodIV_O_N_250", "kat_guedel", "kat_chestSeal", "kat_chestSeal", "kat_Pulseoximeter", "ACE_morphine", "ACE_epinephrine", "ACE_epinephrine"};
        respawnItems[] = {"ACE_wirecutter", "ItemAndroid", "ACE_EntrenchingTool", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_Flashlight_MX991", "ACE_adenosine", "ACE_adenosine", "ACE_adenosine", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_bodyBag_blue", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_splint", "ACE_splint", "kat_bloodIV_O_N_250", "kat_guedel", "kat_chestSeal", "kat_chestSeal", "kat_Pulseoximeter", "ACE_morphine", "ACE_epinephrine", "ACE_epinephrine"};
        magazines[] = {"JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_17Rnd_9x21_P320_Green_Mag", "JCA_17Rnd_9x21_P320_Green_Mag", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "JCA_SignalFlare_Green", "HandGrenade", "HandGrenade", "ACE_M84", "ACE_M84", "kat_Painkiller", "kat_Painkiller", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "HandGrenade", "HandGrenade", "HandGrenade", "HandGrenade", "HandGrenade", "ACE_M84", "ACE_M84", "ACE_M84", "ACE_M84", "ACE_M84", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_17Rnd_9x21_P320_Green_Mag", "JCA_17Rnd_9x21_P320_Green_Mag", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "JCA_SignalFlare_Green", "HandGrenade", "HandGrenade", "ACE_M84", "ACE_M84", "kat_Painkiller", "kat_Painkiller", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "HandGrenade", "HandGrenade", "HandGrenade", "HandGrenade", "HandGrenade", "ACE_M84", "ACE_M84", "ACE_M84", "ACE_M84", "ACE_M84", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell"};
        linkedItems[] = {"ItemMap", "ItemCompass", "ACE_Altimeter", "TFAR_anprc152", "ItemGPS", "Rangefinder", "Myr_Helmet_Tan", "Myr_Grey_Combat", "E22_G_Shemagh_light_black_F"};
        respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ACE_Altimeter", "TFAR_anprc152", "ItemGPS", "Rangefinder", "Myr_Helmet_Tan", "Myr_Grey_Combat", "E22_G_Shemagh_light_black_F"};
        backpack = "Myrmidon_Contractor_pack";
    };

    class Myrmidon_Grenadier : Myr_Contractor
    {
        faction = "Myr_Faction";
        side = 2;
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        uniformClass = "Myr_Grey_Rolled";
        weapons[] = {"Rangefinder", "Myrmidon_JCA_arifle_M4A4_GL_black_F_JCA_acc_DualMount_black_PointerJCA_optic_AHO_black", "Myrmidon_JCA_hgun_P320_black_F_JCA_acc_LightModule_Pistol_blackJCA_optic_PRO_black", "Put", "Throw"};
        respawnWeapons[] = {"Rangefinder", "Myrmidon_JCA_arifle_M4A4_GL_black_F_JCA_acc_DualMount_black_PointerJCA_optic_AHO_black", "Myrmidon_JCA_hgun_P320_black_F_JCA_acc_LightModule_Pistol_blackJCA_optic_PRO_black", "Put", "Throw"};
        items[] = {"ACE_wirecutter", "ItemAndroid", "ACE_EntrenchingTool", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_Flashlight_MX991", "ACE_HuntIR_monitor", "ACE_adenosine", "ACE_adenosine", "ACE_adenosine", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_bodyBag_blue", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_splint", "ACE_splint", "kat_bloodIV_O_N_250", "kat_guedel", "kat_chestSeal", "kat_chestSeal", "kat_Pulseoximeter", "ACE_morphine", "ACE_epinephrine", "ACE_epinephrine"};
        respawnItems[] = {"ACE_wirecutter", "ItemAndroid", "ACE_EntrenchingTool", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_Flashlight_MX991", "ACE_HuntIR_monitor", "ACE_adenosine", "ACE_adenosine", "ACE_adenosine", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_bodyBag_blue", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_splint", "ACE_splint", "kat_bloodIV_O_N_250", "kat_guedel", "kat_chestSeal", "kat_chestSeal", "kat_Pulseoximeter", "ACE_morphine", "ACE_epinephrine", "ACE_epinephrine"};
        magazines[] = {"JCA_17Rnd_9x21_P320_Green_Mag", "JCA_17Rnd_9x21_P320_Green_Mag", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "JCA_SignalFlare_Green", "HandGrenade", "HandGrenade", "ACE_M84", "ACE_M84", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "kat_Painkiller", "kat_Painkiller", "1Rnd_HEDP_Grenade_shell", "1Rnd_HEDP_Grenade_shell", "1Rnd_HEDP_Grenade_shell", "1Rnd_HEDP_Grenade_shell", "1Rnd_HEDP_Grenade_shell", "1Rnd_HEDP_Grenade_shell", "1Rnd_HEDP_Grenade_shell", "1Rnd_HEDP_Grenade_shell", "1Rnd_HEDP_Grenade_shell", "1Rnd_HEDP_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "ACE_HuntIR_M203", "ACE_HuntIR_M203", "ACE_HuntIR_M203", "ACE_HuntIR_M203", "ACE_HuntIR_M203", "UGL_FlareRed_F", "UGL_FlareRed_F", "UGL_FlareRed_F", "UGL_FlareRed_F", "UGL_FlareRed_F", "UGL_FlareWhite_F", "UGL_FlareWhite_F", "UGL_FlareWhite_F", "UGL_FlareWhite_F", "UGL_FlareWhite_F", "UGL_FlareWhite_F", "UGL_FlareWhite_F", "UGL_FlareWhite_F", "UGL_FlareWhite_F", "UGL_FlareWhite_F", "UGL_FlareWhite_F", "UGL_FlareWhite_F", "UGL_FlareWhite_F", "UGL_FlareWhite_F", "UGL_FlareWhite_F", "ACE_40mm_Flare_white", "ACE_40mm_Flare_white", "ACE_40mm_Flare_white", "ACE_40mm_Flare_white", "ACE_40mm_Flare_white"};
        respawnMagazines[] = {"JCA_17Rnd_9x21_P320_Green_Mag", "JCA_17Rnd_9x21_P320_Green_Mag", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "JCA_SignalFlare_Green", "HandGrenade", "HandGrenade", "ACE_M84", "ACE_M84", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "kat_Painkiller", "kat_Painkiller", "1Rnd_HEDP_Grenade_shell", "1Rnd_HEDP_Grenade_shell", "1Rnd_HEDP_Grenade_shell", "1Rnd_HEDP_Grenade_shell", "1Rnd_HEDP_Grenade_shell", "1Rnd_HEDP_Grenade_shell", "1Rnd_HEDP_Grenade_shell", "1Rnd_HEDP_Grenade_shell", "1Rnd_HEDP_Grenade_shell", "1Rnd_HEDP_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "ACE_HuntIR_M203", "ACE_HuntIR_M203", "ACE_HuntIR_M203", "ACE_HuntIR_M203", "ACE_HuntIR_M203", "UGL_FlareRed_F", "UGL_FlareRed_F", "UGL_FlareRed_F", "UGL_FlareRed_F", "UGL_FlareRed_F", "UGL_FlareWhite_F", "UGL_FlareWhite_F", "UGL_FlareWhite_F", "UGL_FlareWhite_F", "UGL_FlareWhite_F", "UGL_FlareWhite_F", "UGL_FlareWhite_F", "UGL_FlareWhite_F", "UGL_FlareWhite_F", "UGL_FlareWhite_F", "UGL_FlareWhite_F", "UGL_FlareWhite_F", "UGL_FlareWhite_F", "UGL_FlareWhite_F", "UGL_FlareWhite_F", "ACE_40mm_Flare_white", "ACE_40mm_Flare_white", "ACE_40mm_Flare_white", "ACE_40mm_Flare_white", "ACE_40mm_Flare_white"};
        linkedItems[] = {"ItemMap", "ItemCompass", "ACE_Altimeter", "TFAR_anprc152", "ItemGPS", "Rangefinder", "Myr_Helmet_Tan", "Myr_Grey_Combat", "E22_G_Shemagh_light_black_F"};
        respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ACE_Altimeter", "TFAR_anprc152", "ItemGPS", "Rangefinder", "Myr_Helmet_Tan", "Myr_Grey_Combat", "E22_G_Shemagh_light_black_F"};
        backpack = "Myrmidon_Grenadier_pack";
    };

    class Myrmidon_Marksman : Myr_Contractor
    {
        faction = "Myr_Faction";
        side = 2;
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        uniformClass = "Myr_Grey_Rolled";
        weapons[] = {"Rangefinder", "Myrmidon_JCA_arifle_SR10_VFG_black_F_JCA_acc_DualMount_black_PointerJCA_optic_AICO_blackJCA_bipod_04_black", "Myrmidon_JCA_hgun_P320_black_F_JCA_acc_LightModule_Pistol_blackJCA_optic_PRO_black", "Put", "Throw"};
        respawnWeapons[] = {"Rangefinder", "Myrmidon_JCA_arifle_SR10_VFG_black_F_JCA_acc_DualMount_black_PointerJCA_optic_AICO_blackJCA_bipod_04_black", "Myrmidon_JCA_hgun_P320_black_F_JCA_acc_LightModule_Pistol_blackJCA_optic_PRO_black", "Put", "Throw"};
        items[] = {"ACE_wirecutter", "ItemAndroid", "ACE_EntrenchingTool", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_Flashlight_MX991", "ACE_adenosine", "ACE_adenosine", "ACE_adenosine", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_bodyBag_blue", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_splint", "ACE_splint", "kat_bloodIV_O_N_250", "kat_guedel", "kat_chestSeal", "kat_chestSeal", "kat_Pulseoximeter", "ACE_morphine", "ACE_epinephrine", "ACE_epinephrine", "ACE_Tripod", "ACE_SpottingScope", "ACE_RangeCard"};
        respawnItems[] = {"ACE_wirecutter", "ItemAndroid", "ACE_EntrenchingTool", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_Flashlight_MX991", "ACE_adenosine", "ACE_adenosine", "ACE_adenosine", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_bodyBag_blue", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_splint", "ACE_splint", "kat_bloodIV_O_N_250", "kat_guedel", "kat_chestSeal", "kat_chestSeal", "kat_Pulseoximeter", "ACE_morphine", "ACE_epinephrine", "ACE_epinephrine", "ACE_Tripod", "ACE_SpottingScope", "ACE_RangeCard"};
        magazines[] = {"JCA_17Rnd_9x21_P320_Green_Mag", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "JCA_SignalFlare_Green", "HandGrenade", "HandGrenade", "ACE_M84", "ACE_M84", "JCA_20Rnd_762x51_Green_PMAG", "JCA_20Rnd_762x51_Green_PMAG", "JCA_20Rnd_762x51_Green_PMAG", "JCA_20Rnd_762x51_Green_PMAG", "JCA_20Rnd_762x51_Green_PMAG", "JCA_20Rnd_762x51_Green_PMAG", "JCA_20Rnd_762x51_Green_PMAG", "kat_Painkiller", "kat_Painkiller", "JCA_20Rnd_762x51_Green_PMAG", "JCA_20Rnd_762x51_Green_PMAG"};
        respawnMagazines[] = {"JCA_17Rnd_9x21_P320_Green_Mag", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "JCA_SignalFlare_Green", "HandGrenade", "HandGrenade", "ACE_M84", "ACE_M84", "JCA_20Rnd_762x51_Green_PMAG", "JCA_20Rnd_762x51_Green_PMAG", "JCA_20Rnd_762x51_Green_PMAG", "JCA_20Rnd_762x51_Green_PMAG", "JCA_20Rnd_762x51_Green_PMAG", "JCA_20Rnd_762x51_Green_PMAG", "JCA_20Rnd_762x51_Green_PMAG", "kat_Painkiller", "kat_Painkiller", "JCA_20Rnd_762x51_Green_PMAG", "JCA_20Rnd_762x51_Green_PMAG"};
        linkedItems[] = {"ItemMap", "ItemCompass", "ACE_Altimeter", "TFAR_anprc152", "ItemGPS", "Rangefinder", "Myr_Helmet_Tan", "Myr_Grey_Recon", "E22_G_Shemagh_light_black_F"};
        respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ACE_Altimeter", "TFAR_anprc152", "ItemGPS", "Rangefinder", "Myr_Helmet_Tan", "Myr_Grey_Recon", "E22_G_Shemagh_light_black_F"};
        backpack = "Myrmidon_Marksman_pack";
    };

    class Myrmidon_Sniper : Myr_Contractor
    {
        faction = "Myr_Faction";
        side = 2;
        scope = 2;
        scopeCurator = 2;
        displayName = "Sniper";
        uniformClass = "Myr_Grey_Rolled";
        weapons[] = {"Rangefinder", "Myrmidon_JCA_srifle_AWM_black_F_JCA_muzzle_snds_AWM_tactical_blackJCA_optic_HPPO_RAD_blackJCA_bipod_AWM_black", "Myrmidon_JCA_hgun_P320_black_F_JCA_acc_LightModule_Pistol_blackJCA_optic_PRO_black", "Put", "Throw"};
        respawnWeapons[] = {"Rangefinder", "Myrmidon_JCA_srifle_AWM_black_F_JCA_muzzle_snds_AWM_tactical_blackJCA_optic_HPPO_RAD_blackJCA_bipod_AWM_black", "Myrmidon_JCA_hgun_P320_black_F_JCA_acc_LightModule_Pistol_blackJCA_optic_PRO_black", "Put", "Throw"};
        items[] = {"ACE_wirecutter", "ItemAndroid", "ACE_EntrenchingTool", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_Flashlight_MX991", "ACE_adenosine", "ACE_adenosine", "ACE_adenosine", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_bodyBag_blue", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_splint", "ACE_splint", "kat_bloodIV_O_N_250", "kat_guedel", "kat_chestSeal", "kat_chestSeal", "kat_Pulseoximeter", "ACE_morphine", "ACE_epinephrine", "ACE_epinephrine", "ACE_Tripod", "ACE_SpottingScope", "ACE_RangeCard"};
        respawnItems[] = {"ACE_wirecutter", "ItemAndroid", "ACE_EntrenchingTool", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_Flashlight_MX991", "ACE_adenosine", "ACE_adenosine", "ACE_adenosine", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_bodyBag_blue", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_splint", "ACE_splint", "kat_bloodIV_O_N_250", "kat_guedel", "kat_chestSeal", "kat_chestSeal", "kat_Pulseoximeter", "ACE_morphine", "ACE_epinephrine", "ACE_epinephrine", "ACE_Tripod", "ACE_SpottingScope", "ACE_RangeCard"};
        magazines[] = {"JCA_17Rnd_9x21_P320_Green_Mag", "JCA_17Rnd_9x21_P320_Green_Mag", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "JCA_SignalFlare_Green", "HandGrenade", "HandGrenade", "ACE_M84", "ACE_M84", "JCA_5Rnd_338LM_Mag", "JCA_5Rnd_338LM_Mag", "JCA_5Rnd_338LM_Mag", "JCA_5Rnd_338LM_Mag", "JCA_5Rnd_338LM_Mag", "JCA_5Rnd_338LM_Mag", "JCA_5Rnd_338LM_Mag", "kat_Painkiller", "kat_Painkiller", "JCA_5Rnd_338LM_Mag", "JCA_5Rnd_338LM_Mag"};
        respawnMagazines[] = {"JCA_17Rnd_9x21_P320_Green_Mag", "JCA_17Rnd_9x21_P320_Green_Mag", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "JCA_SignalFlare_Green", "HandGrenade", "HandGrenade", "ACE_M84", "ACE_M84", "JCA_5Rnd_338LM_Mag", "JCA_5Rnd_338LM_Mag", "JCA_5Rnd_338LM_Mag", "JCA_5Rnd_338LM_Mag", "JCA_5Rnd_338LM_Mag", "JCA_5Rnd_338LM_Mag", "JCA_5Rnd_338LM_Mag", "kat_Painkiller", "kat_Painkiller", "JCA_5Rnd_338LM_Mag", "JCA_5Rnd_338LM_Mag"};
        linkedItems[] = {"ItemMap", "ItemCompass", "ACE_Altimeter", "TFAR_anprc152", "ItemGPS", "Rangefinder", "Myr_Helmet_Tan", "Myr_Grey_Recon", "E22_G_Shemagh_light_black_F"};
        respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ACE_Altimeter", "TFAR_anprc152", "ItemGPS", "Rangefinder", "Myr_Helmet_Tan", "Myr_Grey_Recon", "E22_G_Shemagh_light_black_F"};
        backpack = "Myrmidon_Sniper_pack";
    };

    class Myrmidon_Autorifleman : Myr_Contractor
    {
        faction = "Myr_Faction";
        side = 2;
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        uniformClass = "Myr_Grey_Rolled";
        weapons[] = {"Rangefinder", "Myrmidon_LMG_Mk200_black_F_JCA_acc_LaserModule_black_PointerJCA_optic_AHO_blackJCA_bipod_04_black", "Myrmidon_JCA_hgun_P320_black_F_JCA_acc_LightModule_Pistol_blackJCA_optic_PRO_black", "Put", "Throw"};
        respawnWeapons[] = {"Rangefinder", "Myrmidon_LMG_Mk200_black_F_JCA_acc_LaserModule_black_PointerJCA_optic_AHO_blackJCA_bipod_04_black", "Myrmidon_JCA_hgun_P320_black_F_JCA_acc_LightModule_Pistol_blackJCA_optic_PRO_black", "Put", "Throw"};
        items[] = {"ACE_wirecutter", "ItemAndroid", "ACE_EntrenchingTool", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_Flashlight_MX991", "ACE_adenosine", "ACE_adenosine", "ACE_adenosine", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_bodyBag_blue", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_splint", "ACE_splint", "kat_bloodIV_O_N_250", "kat_guedel", "kat_chestSeal", "kat_chestSeal", "kat_Pulseoximeter", "ACE_morphine", "ACE_epinephrine", "ACE_epinephrine"};
        respawnItems[] = {"ACE_wirecutter", "ItemAndroid", "ACE_EntrenchingTool", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_Flashlight_MX991", "ACE_adenosine", "ACE_adenosine", "ACE_adenosine", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_bodyBag_blue", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_splint", "ACE_splint", "kat_bloodIV_O_N_250", "kat_guedel", "kat_chestSeal", "kat_chestSeal", "kat_Pulseoximeter", "ACE_morphine", "ACE_epinephrine", "ACE_epinephrine"};
        magazines[] = {"JCA_17Rnd_9x21_P320_Green_Mag", "JCA_17Rnd_9x21_P320_Green_Mag", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "JCA_SignalFlare_Green", "HandGrenade", "HandGrenade", "ACE_M84", "ACE_M84", "200Rnd_65x39_cased_Box", "kat_Painkiller", "kat_Painkiller", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box"};
        respawnMagazines[] = {"JCA_17Rnd_9x21_P320_Green_Mag", "JCA_17Rnd_9x21_P320_Green_Mag", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "JCA_SignalFlare_Green", "HandGrenade", "HandGrenade", "ACE_M84", "ACE_M84", "200Rnd_65x39_cased_Box", "kat_Painkiller", "kat_Painkiller", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box"};
        linkedItems[] = {"ItemMap", "ItemCompass", "ACE_Altimeter", "TFAR_anprc152", "ItemGPS", "Rangefinder", "Myr_Helmet_Tan", "Myr_Grey_Tactical", "E22_G_Shemagh_light_black_F"};
        respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ACE_Altimeter", "TFAR_anprc152", "ItemGPS", "Rangefinder", "Myr_Helmet_Tan", "Myr_Grey_Tactical", "E22_G_Shemagh_light_black_F"};
        backpack = "Myrmidon_Autorifleman_pack";
    };

    class Myrmidon_AT : Myr_Contractor
    {
        faction = "Myr_Faction";
        side = 2;
        scope = 2;
        scopeCurator = 2;
        displayName = "AT";
        uniformClass = "Myr_Grey_Rolled";
        weapons[] = {"Rangefinder", "Myrmidon_JCA_arifle_M4A4_VFG_black_F_JCA_acc_DualMount_black_PointerJCA_optic_AICO_black", "Myrmidon_launch_Titan_short_blk_F", "Myrmidon_JCA_hgun_P320_black_F_JCA_acc_LightModule_Pistol_blackJCA_optic_PRO_black", "Put", "Throw"};
        respawnWeapons[] = {"Rangefinder", "Myrmidon_JCA_arifle_M4A4_VFG_black_F_JCA_acc_DualMount_black_PointerJCA_optic_AICO_black", "Myrmidon_launch_Titan_short_blk_F", "Myrmidon_JCA_hgun_P320_black_F_JCA_acc_LightModule_Pistol_blackJCA_optic_PRO_black", "Put", "Throw"};
        items[] = {"ACE_wirecutter", "ItemAndroid", "ACE_EntrenchingTool", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_Flashlight_MX991", "ACE_adenosine", "ACE_adenosine", "ACE_adenosine", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_bodyBag_blue", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_splint", "ACE_splint", "kat_bloodIV_O_N_250", "kat_guedel", "kat_chestSeal", "kat_chestSeal", "kat_Pulseoximeter", "ACE_morphine", "ACE_epinephrine", "ACE_epinephrine"};
        respawnItems[] = {"ACE_wirecutter", "ItemAndroid", "ACE_EntrenchingTool", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_Flashlight_MX991", "ACE_adenosine", "ACE_adenosine", "ACE_adenosine", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_bodyBag_blue", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_splint", "ACE_splint", "kat_bloodIV_O_N_250", "kat_guedel", "kat_chestSeal", "kat_chestSeal", "kat_Pulseoximeter", "ACE_morphine", "ACE_epinephrine", "ACE_epinephrine"};
        magazines[] = {"JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_17Rnd_9x21_P320_Green_Mag", "JCA_17Rnd_9x21_P320_Green_Mag", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "JCA_SignalFlare_Green", "HandGrenade", "HandGrenade", "ACE_M84", "ACE_M84", "kat_Painkiller", "kat_Painkiller", "Titan_AT", "Titan_AT"};
        respawnMagazines[] = {"JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_17Rnd_9x21_P320_Green_Mag", "JCA_17Rnd_9x21_P320_Green_Mag", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "JCA_SignalFlare_Green", "HandGrenade", "HandGrenade", "ACE_M84", "ACE_M84", "kat_Painkiller", "kat_Painkiller", "Titan_AT", "Titan_AT"};
        linkedItems[] = {"ItemMap", "ItemCompass", "ACE_Altimeter", "TFAR_anprc152", "ItemGPS", "Rangefinder", "Myr_Helmet_Tan", "Myr_Grey_Combat", "E22_G_Shemagh_light_black_F"};
        respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ACE_Altimeter", "TFAR_anprc152", "ItemGPS", "Rangefinder", "Myr_Helmet_Tan", "Myr_Grey_Combat", "E22_G_Shemagh_light_black_F"};
        backpack = "Myrmidon_AT_pack";
    };

    class Myrmidon_JTAC : Myr_Contractor
    {
        faction = "Myr_Faction";
        side = 2;
        scope = 2;
        scopeCurator = 2;
        displayName = "JTAC";
        uniformClass = "Myr_Grey_Rolled";
        weapons[] = {"Rangefinder", "Myrmidon_JCA_arifle_M4A4_GL_black_F_JCA_acc_DualMount_black_PointerJCA_optic_AICO_black", "Myrmidon_JCA_hgun_P320_black_F_JCA_acc_LightModule_Pistol_blackJCA_optic_PRO_black", "Put", "Throw"};
        respawnWeapons[] = {"Rangefinder", "Myrmidon_JCA_arifle_M4A4_GL_black_F_JCA_acc_DualMount_black_PointerJCA_optic_AICO_black", "Myrmidon_JCA_hgun_P320_black_F_JCA_acc_LightModule_Pistol_blackJCA_optic_PRO_black", "Put", "Throw"};
        items[] = {"ACE_wirecutter", "ItemAndroid", "ACE_EntrenchingTool", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_Flashlight_MX991", "ACE_adenosine", "ACE_adenosine", "ACE_adenosine", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_bodyBag_blue", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_splint", "ACE_splint", "kat_bloodIV_O_N_250", "kat_guedel", "kat_chestSeal", "kat_chestSeal", "kat_Pulseoximeter", "ACE_morphine", "ACE_epinephrine", "ACE_epinephrine", "MRH_FoldedSatcomAntenna", "MRH_TacticalDisplay"};
        respawnItems[] = {"ACE_wirecutter", "ItemAndroid", "ACE_EntrenchingTool", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_Flashlight_MX991", "ACE_adenosine", "ACE_adenosine", "ACE_adenosine", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_bodyBag_blue", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_splint", "ACE_splint", "kat_bloodIV_O_N_250", "kat_guedel", "kat_chestSeal", "kat_chestSeal", "kat_Pulseoximeter", "ACE_morphine", "ACE_epinephrine", "ACE_epinephrine", "MRH_FoldedSatcomAntenna", "MRH_TacticalDisplay"};
        magazines[] = {"JCA_17Rnd_9x21_P320_Green_Mag", "JCA_17Rnd_9x21_P320_Green_Mag", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "JCA_SignalFlare_Green", "HandGrenade", "HandGrenade", "ACE_M84", "ACE_M84", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "kat_Painkiller", "kat_Painkiller", "1Rnd_RC40_HE_shell_RF", "1Rnd_RC40_HE_shell_RF", "1Rnd_RC40_HE_shell_RF", "1Rnd_RC40_HE_shell_RF", "1Rnd_RC40_HE_shell_RF", "1Rnd_RC40_HE_shell_RF", "1Rnd_RC40_HE_shell_RF", "1Rnd_RC40_HE_shell_RF", "1Rnd_RC40_HE_shell_RF", "1Rnd_RC40_HE_shell_RF", "1Rnd_RC40_shell_RF", "1Rnd_RC40_shell_RF", "1Rnd_RC40_shell_RF", "1Rnd_RC40_shell_RF", "1Rnd_RC40_shell_RF"};
        respawnMagazines[] = {"JCA_17Rnd_9x21_P320_Green_Mag", "JCA_17Rnd_9x21_P320_Green_Mag", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "JCA_SignalFlare_Green", "HandGrenade", "HandGrenade", "ACE_M84", "ACE_M84", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "kat_Painkiller", "kat_Painkiller", "1Rnd_RC40_HE_shell_RF", "1Rnd_RC40_HE_shell_RF", "1Rnd_RC40_HE_shell_RF", "1Rnd_RC40_HE_shell_RF", "1Rnd_RC40_HE_shell_RF", "1Rnd_RC40_HE_shell_RF", "1Rnd_RC40_HE_shell_RF", "1Rnd_RC40_HE_shell_RF", "1Rnd_RC40_HE_shell_RF", "1Rnd_RC40_HE_shell_RF", "1Rnd_RC40_shell_RF", "1Rnd_RC40_shell_RF", "1Rnd_RC40_shell_RF", "1Rnd_RC40_shell_RF", "1Rnd_RC40_shell_RF"};
        linkedItems[] = {"ItemMap", "ItemCompass", "ACE_Altimeter", "TFAR_anprc152", "B_UavTerminal", "Rangefinder", "Myr_Helmet_Tan", "Myr_Grey_Command", "E22_G_Shemagh_light_black_F"};
        respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ACE_Altimeter", "TFAR_anprc152", "B_UavTerminal", "Rangefinder", "Myr_Helmet_Tan", "Myr_Grey_Command", "E22_G_Shemagh_light_black_F"};
        backpack = "Myrmidon_JTAC_pack";
    };

    class Myrmidon_Pilot : Myr_Contractor
    {
        faction = "Myr_Faction";
        side = 2;
        scope = 2;
        scopeCurator = 2;
        displayName = "Pilot";
        uniformClass = "Myr_Pilot_Coveralls";
        weapons[] = {"Rangefinder", "Myrmidon_JCA_smg_MP5_VFG_black_F_JCA_acc_LaserModule_black_PointerJCA_optic_AHO_black", "Myrmidon_JCA_hgun_P320_black_F_JCA_acc_LightModule_Pistol_blackJCA_optic_PRO_black", "Put", "Throw"};
        respawnWeapons[] = {"Rangefinder", "Myrmidon_JCA_smg_MP5_VFG_black_F_JCA_acc_LaserModule_black_PointerJCA_optic_AHO_black", "Myrmidon_JCA_hgun_P320_black_F_JCA_acc_LightModule_Pistol_blackJCA_optic_PRO_black", "Put", "Throw"};
        items[] = {"ACE_wirecutter", "ItemAndroid", "ACE_EntrenchingTool", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_Flashlight_MX991", "ACE_adenosine", "ACE_adenosine", "ACE_adenosine", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_bodyBag_blue", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_splint", "ACE_splint", "kat_bloodIV_O_N_250", "kat_guedel", "kat_chestSeal", "kat_chestSeal", "kat_Pulseoximeter", "ACE_morphine", "ACE_epinephrine", "ACE_epinephrine", "ToolKit"};
        respawnItems[] = {"ACE_wirecutter", "ItemAndroid", "ACE_EntrenchingTool", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_Flashlight_MX991", "ACE_adenosine", "ACE_adenosine", "ACE_adenosine", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_bodyBag_blue", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_splint", "ACE_splint", "kat_bloodIV_O_N_250", "kat_guedel", "kat_chestSeal", "kat_chestSeal", "kat_Pulseoximeter", "ACE_morphine", "ACE_epinephrine", "ACE_epinephrine", "ToolKit"};
        magazines[] = {"JCA_17Rnd_9x21_P320_Green_Mag", "JCA_17Rnd_9x21_P320_Green_Mag", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "JCA_SignalFlare_Green", "HandGrenade", "HandGrenade", "ACE_M84", "ACE_M84", "JCA_30Rnd_9x21_MP5_Tracer_Green_Mag", "JCA_30Rnd_9x21_MP5_Tracer_Green_Mag", "JCA_30Rnd_9x21_MP5_Tracer_Green_Mag", "JCA_30Rnd_9x21_MP5_Tracer_Green_Mag", "JCA_30Rnd_9x21_MP5_Tracer_Green_Mag", "JCA_30Rnd_9x21_MP5_Tracer_Green_Mag", "kat_Painkiller", "kat_Painkiller", "JCA_30Rnd_9x21_MP5_Tracer_Green_Mag", "JCA_30Rnd_9x21_MP5_Tracer_Green_Mag", "JCA_30Rnd_9x21_MP5_Tracer_Green_Mag", "JCA_30Rnd_9x21_MP5_Tracer_Green_Mag", "JCA_30Rnd_9x21_MP5_Tracer_Green_Mag", "JCA_30Rnd_9x21_MP5_Tracer_Green_Mag"};
        respawnMagazines[] = {"JCA_17Rnd_9x21_P320_Green_Mag", "JCA_17Rnd_9x21_P320_Green_Mag", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "JCA_SignalFlare_Green", "HandGrenade", "HandGrenade", "ACE_M84", "ACE_M84", "JCA_30Rnd_9x21_MP5_Tracer_Green_Mag", "JCA_30Rnd_9x21_MP5_Tracer_Green_Mag", "JCA_30Rnd_9x21_MP5_Tracer_Green_Mag", "JCA_30Rnd_9x21_MP5_Tracer_Green_Mag", "JCA_30Rnd_9x21_MP5_Tracer_Green_Mag", "JCA_30Rnd_9x21_MP5_Tracer_Green_Mag", "kat_Painkiller", "kat_Painkiller", "JCA_30Rnd_9x21_MP5_Tracer_Green_Mag", "JCA_30Rnd_9x21_MP5_Tracer_Green_Mag", "JCA_30Rnd_9x21_MP5_Tracer_Green_Mag", "JCA_30Rnd_9x21_MP5_Tracer_Green_Mag", "JCA_30Rnd_9x21_MP5_Tracer_Green_Mag", "JCA_30Rnd_9x21_MP5_Tracer_Green_Mag"};
        linkedItems[] = {"ItemMap", "ItemCompass", "ACE_Altimeter", "TFAR_anprc152", "ItemGPS", "Rangefinder", "Myr_Pilot_Helmet_Up", "Myr_Grey_Compact", "E22_G_Shemagh_light_black_F"};
        respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ACE_Altimeter", "TFAR_anprc152", "ItemGPS", "Rangefinder", "Myr_Pilot_Helmet_Up", "Myr_Grey_Compact", "E22_G_Shemagh_light_black_F"};
        backpack = "Myrmidon_Pilot_pack";
    };

    class Myrmidon_TeamLeader : Myr_Contractor
    {
        faction = "Myr_Faction";
        side = 2;
        scope = 2;
        scopeCurator = 2;
        displayName = "TeamLeader";
        uniformClass = "Myr_Grey_Rolled";
        weapons[] = {"Rangefinder", "Myrmidon_JCA_arifle_M4A4_VFG_black_F_JCA_acc_DualMount_black_PointerJCA_optic_AICO_black", "Myrmidon_JCA_hgun_P320_black_F_JCA_acc_LightModule_Pistol_blackJCA_optic_PRO_black", "Put", "Throw"};
        respawnWeapons[] = {"Rangefinder", "Myrmidon_JCA_arifle_M4A4_VFG_black_F_JCA_acc_DualMount_black_PointerJCA_optic_AICO_black", "Myrmidon_JCA_hgun_P320_black_F_JCA_acc_LightModule_Pistol_blackJCA_optic_PRO_black", "Put", "Throw"};
        items[] = {"ACE_wirecutter", "ItemAndroid", "ACE_EntrenchingTool", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_Flashlight_MX991", "ACE_DefusalKit", "MineDetector", "ACE_adenosine", "ACE_adenosine", "ACE_adenosine", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_bodyBag_blue", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_splint", "ACE_splint", "kat_bloodIV_O_N_250", "kat_guedel", "kat_chestSeal", "kat_chestSeal", "kat_Pulseoximeter", "ACE_morphine", "ACE_epinephrine", "ACE_epinephrine", "kat_AED"};
        respawnItems[] = {"ACE_wirecutter", "ItemAndroid", "ACE_EntrenchingTool", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_Flashlight_MX991", "ACE_DefusalKit", "MineDetector", "ACE_adenosine", "ACE_adenosine", "ACE_adenosine", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_bodyBag_blue", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_splint", "ACE_splint", "kat_bloodIV_O_N_250", "kat_guedel", "kat_chestSeal", "kat_chestSeal", "kat_Pulseoximeter", "ACE_morphine", "ACE_epinephrine", "ACE_epinephrine", "kat_AED"};
        magazines[] = {"JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_17Rnd_9x21_P320_Green_Mag", "JCA_17Rnd_9x21_P320_Green_Mag", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "JCA_SignalFlare_Green", "HandGrenade", "HandGrenade", "ACE_M84", "ACE_M84", "kat_Painkiller", "kat_Painkiller"};
        respawnMagazines[] = {"JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_30Rnd_556x45_Tracer_Green_PMAG", "JCA_17Rnd_9x21_P320_Green_Mag", "JCA_17Rnd_9x21_P320_Green_Mag", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "JCA_SignalFlare_Green", "HandGrenade", "HandGrenade", "ACE_M84", "ACE_M84", "kat_Painkiller", "kat_Painkiller"};
        linkedItems[] = {"ItemMap", "ItemCompass", "ACE_Altimeter", "TFAR_anprc152", "ItemGPS", "Rangefinder", "Myr_Helmet_Tan", "Myr_Grey_Command", "E22_G_Shemagh_light_black_F"};
        respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ACE_Altimeter", "TFAR_anprc152", "ItemGPS", "Rangefinder", "Myr_Helmet_Tan", "Myr_Grey_Command", "E22_G_Shemagh_light_black_F"};
        backpack = "Myrmidon_TeamLeader_pack";
    };

    class Myrmidon_BreacherShotgun_pack : Myr_Fastbag_Blk
    {
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        class TransportMagazines
        {
            class _xx_kat_Painkiller
            {
                count = 2;
                magazine = "kat_Painkiller";
            };
            class _xx_8Rnd_12Gauge_Slug
            {
                count = 7;
                magazine = "8Rnd_12Gauge_Slug";
            };
            class _xx_Aegis_8Rnd_12Gauge_Smoke
            {
                count = 2;
                magazine = "Aegis_8Rnd_12Gauge_Smoke";
            };
            class _xx_8Rnd_12Gauge_Pellets
            {
                count = 2;
                magazine = "8Rnd_12Gauge_Pellets";
            };
        };
        class TransportItems
        {
            class _xx_ACE_adenosine
            {
                count = 3;
                name = "ACE_adenosine";
            };
            class _xx_ACE_elasticBandage
            {
                count = 10;
                name = "ACE_elasticBandage";
            };
            class _xx_ACE_packingBandage
            {
                count = 10;
                name = "ACE_packingBandage";
            };
            class _xx_ACE_bodyBag_blue
            {
                count = 1;
                name = "ACE_bodyBag_blue";
            };
            class _xx_ACE_tourniquet
            {
                count = 4;
                name = "ACE_tourniquet";
            };
            class _xx_ACE_splint
            {
                count = 2;
                name = "ACE_splint";
            };
            class _xx_kat_bloodIV_O_N_250
            {
                count = 1;
                name = "kat_bloodIV_O_N_250";
            };
            class _xx_kat_guedel
            {
                count = 1;
                name = "kat_guedel";
            };
            class _xx_kat_chestSeal
            {
                count = 2;
                name = "kat_chestSeal";
            };
            class _xx_kat_Pulseoximeter
            {
                count = 1;
                name = "kat_Pulseoximeter";
            };
            class _xx_ACE_morphine
            {
                count = 1;
                name = "ACE_morphine";
            };
            class _xx_ACE_epinephrine
            {
                count = 2;
                name = "ACE_epinephrine";
            };
        };
        class TransportWeapons
        {
        };
    };

    class Myrmidon_BreacherSMG_pack : Myr_Fastbag_Blk
    {
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        class TransportMagazines
        {
            class _xx_kat_Painkiller
            {
                count = 2;
                magazine = "kat_Painkiller";
            };
            class _xx_JCA_30Rnd_9x21_MP5_Tracer_Green_Mag
            {
                count = 6;
                magazine = "JCA_30Rnd_9x21_MP5_Tracer_Green_Mag";
            };
        };
        class TransportItems
        {
            class _xx_ACE_adenosine
            {
                count = 3;
                name = "ACE_adenosine";
            };
            class _xx_ACE_elasticBandage
            {
                count = 10;
                name = "ACE_elasticBandage";
            };
            class _xx_ACE_packingBandage
            {
                count = 10;
                name = "ACE_packingBandage";
            };
            class _xx_ACE_bodyBag_blue
            {
                count = 1;
                name = "ACE_bodyBag_blue";
            };
            class _xx_ACE_tourniquet
            {
                count = 4;
                name = "ACE_tourniquet";
            };
            class _xx_ACE_splint
            {
                count = 2;
                name = "ACE_splint";
            };
            class _xx_kat_bloodIV_O_N_250
            {
                count = 1;
                name = "kat_bloodIV_O_N_250";
            };
            class _xx_kat_guedel
            {
                count = 1;
                name = "kat_guedel";
            };
            class _xx_kat_chestSeal
            {
                count = 2;
                name = "kat_chestSeal";
            };
            class _xx_kat_Pulseoximeter
            {
                count = 1;
                name = "kat_Pulseoximeter";
            };
            class _xx_ACE_morphine
            {
                count = 1;
                name = "ACE_morphine";
            };
            class _xx_ACE_epinephrine
            {
                count = 2;
                name = "ACE_epinephrine";
            };
        };
        class TransportWeapons
        {
        };
    };

    class Myrmidon_EOD_pack : Myr_Fastbag_Blk
    {
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        class TransportMagazines
        {
            class _xx_kat_Painkiller
            {
                count = 2;
                magazine = "kat_Painkiller";
            };
            class _xx_SatchelCharge_Remote_Mag
            {
                count = 1;
                magazine = "SatchelCharge_Remote_Mag";
            };
            class _xx_DemoCharge_Remote_Mag
            {
                count = 2;
                magazine = "DemoCharge_Remote_Mag";
            };
            class _xx_SLAMDirectionalMine_Wire_Mag
            {
                count = 2;
                magazine = "SLAMDirectionalMine_Wire_Mag";
            };
        };
        class TransportItems
        {
            class _xx_ACE_adenosine
            {
                count = 3;
                name = "ACE_adenosine";
            };
            class _xx_ACE_elasticBandage
            {
                count = 10;
                name = "ACE_elasticBandage";
            };
            class _xx_ACE_packingBandage
            {
                count = 10;
                name = "ACE_packingBandage";
            };
            class _xx_ACE_bodyBag_blue
            {
                count = 1;
                name = "ACE_bodyBag_blue";
            };
            class _xx_ACE_tourniquet
            {
                count = 4;
                name = "ACE_tourniquet";
            };
            class _xx_ACE_splint
            {
                count = 2;
                name = "ACE_splint";
            };
            class _xx_kat_bloodIV_O_N_250
            {
                count = 1;
                name = "kat_bloodIV_O_N_250";
            };
            class _xx_kat_guedel
            {
                count = 1;
                name = "kat_guedel";
            };
            class _xx_kat_chestSeal
            {
                count = 2;
                name = "kat_chestSeal";
            };
            class _xx_kat_Pulseoximeter
            {
                count = 1;
                name = "kat_Pulseoximeter";
            };
            class _xx_ACE_morphine
            {
                count = 1;
                name = "ACE_morphine";
            };
            class _xx_ACE_epinephrine
            {
                count = 2;
                name = "ACE_epinephrine";
            };
            class _xx_ToolKit
            {
                count = 1;
                name = "ToolKit";
            };
        };
        class TransportWeapons
        {
        };
    };

    class Myrmidon_Medic_pack : Myr_M9_Grey
    {
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        class TransportMagazines
        {
            class _xx_kat_oxygenTank_150
            {
                count = 1;
                magazine = "kat_oxygenTank_150";
            };
        };
        class TransportItems
        {
            class _xx_ACE_adenosine
            {
                count = 3;
                name = "ACE_adenosine";
            };
            class _xx_ACE_elasticBandage
            {
                count = 40;
                name = "ACE_elasticBandage";
            };
            class _xx_ACE_packingBandage
            {
                count = 40;
                name = "ACE_packingBandage";
            };
            class _xx_ACE_bodyBag_blue
            {
                count = 1;
                name = "ACE_bodyBag_blue";
            };
            class _xx_kat_chestSeal
            {
                count = 10;
                name = "kat_chestSeal";
            };
            class _xx_kat_accuvac
            {
                count = 1;
                name = "kat_accuvac";
            };
            class _xx_kat_X_AED
            {
                count = 1;
                name = "kat_X_AED";
            };
            class _xx_kat_IV_16
            {
                count = 15;
                name = "kat_IV_16";
            };
            class _xx_kat_atropine
            {
                count = 2;
                name = "kat_atropine";
            };
            class _xx_kat_amiodarone
            {
                count = 5;
                name = "kat_amiodarone";
            };
            class _xx_kat_bloodIV_O_N
            {
                count = 4;
                name = "kat_bloodIV_O_N";
            };
            class _xx_kat_bloodIV_O_N_500
            {
                count = 6;
                name = "kat_bloodIV_O_N_500";
            };
            class _xx_kat_bloodIV_O_N_250
            {
                count = 4;
                name = "kat_bloodIV_O_N_250";
            };
            class _xx_kat_IO_FAST
            {
                count = 4;
                name = "kat_IO_FAST";
            };
            class _xx_kat_fentanyl
            {
                count = 5;
                name = "kat_fentanyl";
            };
            class _xx_KAT_Empty_bloodIV_500
            {
                count = 2;
                name = "KAT_Empty_bloodIV_500";
            };
            class _xx_kat_larynx
            {
                count = 10;
                name = "kat_larynx";
            };
            class _xx_kat_naloxone
            {
                count = 2;
                name = "kat_naloxone";
            };
            class _xx_kat_ncdKit
            {
                count = 5;
                name = "kat_ncdKit";
            };
            class _xx_kat_norepinephrine
            {
                count = 5;
                name = "kat_norepinephrine";
            };
            class _xx_kat_Pulseoximeter
            {
                count = 1;
                name = "kat_Pulseoximeter";
            };
            class _xx_ACE_splint
            {
                count = 5;
                name = "ACE_splint";
            };
            class _xx_ACE_tourniquet
            {
                count = 6;
                name = "ACE_tourniquet";
            };
            class _xx_kat_TXA
            {
                count = 10;
                name = "kat_TXA";
            };
            class _xx_kat_stethoscope
            {
                count = 1;
                name = "kat_stethoscope";
            };
            class _xx_kat_BVM
            {
                count = 1;
                name = "kat_BVM";
            };
        };
        class TransportWeapons
        {
        };
    };

    class Myrmidon_Contractor_pack : Myr_Fastbag_Blk
    {
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        class TransportMagazines
        {
            class _xx_kat_Painkiller
            {
                count = 2;
                magazine = "kat_Painkiller";
            };
            class _xx_JCA_30Rnd_556x45_Tracer_Green_PMAG
            {
                count = 10;
                magazine = "JCA_30Rnd_556x45_Tracer_Green_PMAG";
            };
            class _xx_HandGrenade
            {
                count = 5;
                magazine = "HandGrenade";
            };
            class _xx_ACE_M84
            {
                count = 5;
                magazine = "ACE_M84";
            };
            class _xx_SmokeShell
            {
                count = 10;
                magazine = "SmokeShell";
            };
        };
        class TransportItems
        {
            class _xx_ACE_adenosine
            {
                count = 3;
                name = "ACE_adenosine";
            };
            class _xx_ACE_elasticBandage
            {
                count = 10;
                name = "ACE_elasticBandage";
            };
            class _xx_ACE_packingBandage
            {
                count = 10;
                name = "ACE_packingBandage";
            };
            class _xx_ACE_bodyBag_blue
            {
                count = 1;
                name = "ACE_bodyBag_blue";
            };
            class _xx_ACE_tourniquet
            {
                count = 4;
                name = "ACE_tourniquet";
            };
            class _xx_ACE_splint
            {
                count = 2;
                name = "ACE_splint";
            };
            class _xx_kat_bloodIV_O_N_250
            {
                count = 1;
                name = "kat_bloodIV_O_N_250";
            };
            class _xx_kat_guedel
            {
                count = 1;
                name = "kat_guedel";
            };
            class _xx_kat_chestSeal
            {
                count = 2;
                name = "kat_chestSeal";
            };
            class _xx_kat_Pulseoximeter
            {
                count = 1;
                name = "kat_Pulseoximeter";
            };
            class _xx_ACE_morphine
            {
                count = 1;
                name = "ACE_morphine";
            };
            class _xx_ACE_epinephrine
            {
                count = 2;
                name = "ACE_epinephrine";
            };
        };
        class TransportWeapons
        {
        };
    };

    class Myrmidon_Grenadier_pack : Myr_Fastbag_Blk
    {
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        class TransportMagazines
        {
            class _xx_kat_Painkiller
            {
                count = 2;
                magazine = "kat_Painkiller";
            };
            class _xx_1Rnd_HEDP_Grenade_shell
            {
                count = 10;
                magazine = "1Rnd_HEDP_Grenade_shell";
            };
            class _xx_1Rnd_HE_Grenade_shell
            {
                count = 15;
                magazine = "1Rnd_HE_Grenade_shell";
            };
            class _xx_ACE_HuntIR_M203
            {
                count = 5;
                magazine = "ACE_HuntIR_M203";
            };
            class _xx_UGL_FlareRed_F
            {
                count = 5;
                magazine = "UGL_FlareRed_F";
            };
            class _xx_UGL_FlareWhite_F
            {
                count = 15;
                magazine = "UGL_FlareWhite_F";
            };
            class _xx_ACE_40mm_Flare_white
            {
                count = 5;
                magazine = "ACE_40mm_Flare_white";
            };
        };
        class TransportItems
        {
            class _xx_ACE_adenosine
            {
                count = 3;
                name = "ACE_adenosine";
            };
            class _xx_ACE_elasticBandage
            {
                count = 10;
                name = "ACE_elasticBandage";
            };
            class _xx_ACE_packingBandage
            {
                count = 10;
                name = "ACE_packingBandage";
            };
            class _xx_ACE_bodyBag_blue
            {
                count = 1;
                name = "ACE_bodyBag_blue";
            };
            class _xx_ACE_tourniquet
            {
                count = 4;
                name = "ACE_tourniquet";
            };
            class _xx_ACE_splint
            {
                count = 2;
                name = "ACE_splint";
            };
            class _xx_kat_bloodIV_O_N_250
            {
                count = 1;
                name = "kat_bloodIV_O_N_250";
            };
            class _xx_kat_guedel
            {
                count = 1;
                name = "kat_guedel";
            };
            class _xx_kat_chestSeal
            {
                count = 2;
                name = "kat_chestSeal";
            };
            class _xx_kat_Pulseoximeter
            {
                count = 1;
                name = "kat_Pulseoximeter";
            };
            class _xx_ACE_morphine
            {
                count = 1;
                name = "ACE_morphine";
            };
            class _xx_ACE_epinephrine
            {
                count = 2;
                name = "ACE_epinephrine";
            };
        };
        class TransportWeapons
        {
        };
    };

    class Myrmidon_Marksman_pack : Myr_Fastbag_Blk
    {
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        class TransportMagazines
        {
            class _xx_kat_Painkiller
            {
                count = 2;
                magazine = "kat_Painkiller";
            };
            class _xx_JCA_20Rnd_762x51_Green_PMAG
            {
                count = 2;
                magazine = "JCA_20Rnd_762x51_Green_PMAG";
            };
        };
        class TransportItems
        {
            class _xx_ACE_adenosine
            {
                count = 3;
                name = "ACE_adenosine";
            };
            class _xx_ACE_elasticBandage
            {
                count = 10;
                name = "ACE_elasticBandage";
            };
            class _xx_ACE_packingBandage
            {
                count = 10;
                name = "ACE_packingBandage";
            };
            class _xx_ACE_bodyBag_blue
            {
                count = 1;
                name = "ACE_bodyBag_blue";
            };
            class _xx_ACE_tourniquet
            {
                count = 4;
                name = "ACE_tourniquet";
            };
            class _xx_ACE_splint
            {
                count = 2;
                name = "ACE_splint";
            };
            class _xx_kat_bloodIV_O_N_250
            {
                count = 1;
                name = "kat_bloodIV_O_N_250";
            };
            class _xx_kat_guedel
            {
                count = 1;
                name = "kat_guedel";
            };
            class _xx_kat_chestSeal
            {
                count = 2;
                name = "kat_chestSeal";
            };
            class _xx_kat_Pulseoximeter
            {
                count = 1;
                name = "kat_Pulseoximeter";
            };
            class _xx_ACE_morphine
            {
                count = 1;
                name = "ACE_morphine";
            };
            class _xx_ACE_epinephrine
            {
                count = 2;
                name = "ACE_epinephrine";
            };
            class _xx_ACE_Tripod
            {
                count = 1;
                name = "ACE_Tripod";
            };
            class _xx_ACE_SpottingScope
            {
                count = 1;
                name = "ACE_SpottingScope";
            };
            class _xx_ACE_RangeCard
            {
                count = 1;
                name = "ACE_RangeCard";
            };
        };
        class TransportWeapons
        {
        };
    };

    class Myrmidon_Sniper_pack : Myr_Fastbag_Blk
    {
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        class TransportMagazines
        {
            class _xx_kat_Painkiller
            {
                count = 2;
                magazine = "kat_Painkiller";
            };
            class _xx_JCA_5Rnd_338LM_Mag
            {
                count = 2;
                magazine = "JCA_5Rnd_338LM_Mag";
            };
        };
        class TransportItems
        {
            class _xx_ACE_adenosine
            {
                count = 3;
                name = "ACE_adenosine";
            };
            class _xx_ACE_elasticBandage
            {
                count = 10;
                name = "ACE_elasticBandage";
            };
            class _xx_ACE_packingBandage
            {
                count = 10;
                name = "ACE_packingBandage";
            };
            class _xx_ACE_bodyBag_blue
            {
                count = 1;
                name = "ACE_bodyBag_blue";
            };
            class _xx_ACE_tourniquet
            {
                count = 4;
                name = "ACE_tourniquet";
            };
            class _xx_ACE_splint
            {
                count = 2;
                name = "ACE_splint";
            };
            class _xx_kat_bloodIV_O_N_250
            {
                count = 1;
                name = "kat_bloodIV_O_N_250";
            };
            class _xx_kat_guedel
            {
                count = 1;
                name = "kat_guedel";
            };
            class _xx_kat_chestSeal
            {
                count = 2;
                name = "kat_chestSeal";
            };
            class _xx_kat_Pulseoximeter
            {
                count = 1;
                name = "kat_Pulseoximeter";
            };
            class _xx_ACE_morphine
            {
                count = 1;
                name = "ACE_morphine";
            };
            class _xx_ACE_epinephrine
            {
                count = 2;
                name = "ACE_epinephrine";
            };
            class _xx_ACE_Tripod
            {
                count = 1;
                name = "ACE_Tripod";
            };
            class _xx_ACE_SpottingScope
            {
                count = 1;
                name = "ACE_SpottingScope";
            };
            class _xx_ACE_RangeCard
            {
                count = 1;
                name = "ACE_RangeCard";
            };
        };
        class TransportWeapons
        {
        };
    };

    class Myrmidon_Autorifleman_pack : Myr_Fastbag_Blk
    {
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        class TransportMagazines
        {
            class _xx_kat_Painkiller
            {
                count = 2;
                magazine = "kat_Painkiller";
            };
            class _xx_200Rnd_65x39_cased_Box
            {
                count = 2;
                magazine = "200Rnd_65x39_cased_Box";
            };
        };
        class TransportItems
        {
            class _xx_ACE_adenosine
            {
                count = 3;
                name = "ACE_adenosine";
            };
            class _xx_ACE_elasticBandage
            {
                count = 10;
                name = "ACE_elasticBandage";
            };
            class _xx_ACE_packingBandage
            {
                count = 10;
                name = "ACE_packingBandage";
            };
            class _xx_ACE_bodyBag_blue
            {
                count = 1;
                name = "ACE_bodyBag_blue";
            };
            class _xx_ACE_tourniquet
            {
                count = 4;
                name = "ACE_tourniquet";
            };
            class _xx_ACE_splint
            {
                count = 2;
                name = "ACE_splint";
            };
            class _xx_kat_bloodIV_O_N_250
            {
                count = 1;
                name = "kat_bloodIV_O_N_250";
            };
            class _xx_kat_guedel
            {
                count = 1;
                name = "kat_guedel";
            };
            class _xx_kat_chestSeal
            {
                count = 2;
                name = "kat_chestSeal";
            };
            class _xx_kat_Pulseoximeter
            {
                count = 1;
                name = "kat_Pulseoximeter";
            };
            class _xx_ACE_morphine
            {
                count = 1;
                name = "ACE_morphine";
            };
            class _xx_ACE_epinephrine
            {
                count = 2;
                name = "ACE_epinephrine";
            };
        };
        class TransportWeapons
        {
        };
    };

    class Myrmidon_AT_pack : Myr_Fastbag_Blk
    {
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        class TransportMagazines
        {
            class _xx_kat_Painkiller
            {
                count = 2;
                magazine = "kat_Painkiller";
            };
            class _xx_Titan_AT
            {
                count = 2;
                magazine = "Titan_AT";
            };
        };
        class TransportItems
        {
            class _xx_ACE_adenosine
            {
                count = 3;
                name = "ACE_adenosine";
            };
            class _xx_ACE_elasticBandage
            {
                count = 10;
                name = "ACE_elasticBandage";
            };
            class _xx_ACE_packingBandage
            {
                count = 10;
                name = "ACE_packingBandage";
            };
            class _xx_ACE_bodyBag_blue
            {
                count = 1;
                name = "ACE_bodyBag_blue";
            };
            class _xx_ACE_tourniquet
            {
                count = 4;
                name = "ACE_tourniquet";
            };
            class _xx_ACE_splint
            {
                count = 2;
                name = "ACE_splint";
            };
            class _xx_kat_bloodIV_O_N_250
            {
                count = 1;
                name = "kat_bloodIV_O_N_250";
            };
            class _xx_kat_guedel
            {
                count = 1;
                name = "kat_guedel";
            };
            class _xx_kat_chestSeal
            {
                count = 2;
                name = "kat_chestSeal";
            };
            class _xx_kat_Pulseoximeter
            {
                count = 1;
                name = "kat_Pulseoximeter";
            };
            class _xx_ACE_morphine
            {
                count = 1;
                name = "ACE_morphine";
            };
            class _xx_ACE_epinephrine
            {
                count = 2;
                name = "ACE_epinephrine";
            };
        };
        class TransportWeapons
        {
        };
    };

    class Myrmidon_JTAC_pack : Myr_Radiobag_Blk
    {
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        class TransportMagazines
        {
            class _xx_kat_Painkiller
            {
                count = 2;
                magazine = "kat_Painkiller";
            };
            class _xx_1Rnd_RC40_HE_shell_RF
            {
                count = 10;
                magazine = "1Rnd_RC40_HE_shell_RF";
            };
            class _xx_1Rnd_RC40_shell_RF
            {
                count = 5;
                magazine = "1Rnd_RC40_shell_RF";
            };
        };
        class TransportItems
        {
            class _xx_ACE_adenosine
            {
                count = 3;
                name = "ACE_adenosine";
            };
            class _xx_ACE_elasticBandage
            {
                count = 10;
                name = "ACE_elasticBandage";
            };
            class _xx_ACE_packingBandage
            {
                count = 10;
                name = "ACE_packingBandage";
            };
            class _xx_ACE_bodyBag_blue
            {
                count = 1;
                name = "ACE_bodyBag_blue";
            };
            class _xx_ACE_tourniquet
            {
                count = 4;
                name = "ACE_tourniquet";
            };
            class _xx_ACE_splint
            {
                count = 2;
                name = "ACE_splint";
            };
            class _xx_kat_bloodIV_O_N_250
            {
                count = 1;
                name = "kat_bloodIV_O_N_250";
            };
            class _xx_kat_guedel
            {
                count = 1;
                name = "kat_guedel";
            };
            class _xx_kat_chestSeal
            {
                count = 2;
                name = "kat_chestSeal";
            };
            class _xx_kat_Pulseoximeter
            {
                count = 1;
                name = "kat_Pulseoximeter";
            };
            class _xx_ACE_morphine
            {
                count = 1;
                name = "ACE_morphine";
            };
            class _xx_ACE_epinephrine
            {
                count = 2;
                name = "ACE_epinephrine";
            };
            class _xx_MRH_FoldedSatcomAntenna
            {
                count = 1;
                name = "MRH_FoldedSatcomAntenna";
            };
            class _xx_MRH_TacticalDisplay
            {
                count = 1;
                name = "MRH_TacticalDisplay";
            };
        };
        class TransportWeapons
        {
        };
    };

    class Myrmidon_Pilot_pack : Myr_Radiobag_Blk
    {
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        class TransportMagazines
        {
            class _xx_kat_Painkiller
            {
                count = 2;
                magazine = "kat_Painkiller";
            };
            class _xx_JCA_30Rnd_9x21_MP5_Tracer_Green_Mag
            {
                count = 6;
                magazine = "JCA_30Rnd_9x21_MP5_Tracer_Green_Mag";
            };
        };
        class TransportItems
        {
            class _xx_ACE_adenosine
            {
                count = 3;
                name = "ACE_adenosine";
            };
            class _xx_ACE_elasticBandage
            {
                count = 10;
                name = "ACE_elasticBandage";
            };
            class _xx_ACE_packingBandage
            {
                count = 10;
                name = "ACE_packingBandage";
            };
            class _xx_ACE_bodyBag_blue
            {
                count = 1;
                name = "ACE_bodyBag_blue";
            };
            class _xx_ACE_tourniquet
            {
                count = 4;
                name = "ACE_tourniquet";
            };
            class _xx_ACE_splint
            {
                count = 2;
                name = "ACE_splint";
            };
            class _xx_kat_bloodIV_O_N_250
            {
                count = 1;
                name = "kat_bloodIV_O_N_250";
            };
            class _xx_kat_guedel
            {
                count = 1;
                name = "kat_guedel";
            };
            class _xx_kat_chestSeal
            {
                count = 2;
                name = "kat_chestSeal";
            };
            class _xx_kat_Pulseoximeter
            {
                count = 1;
                name = "kat_Pulseoximeter";
            };
            class _xx_ACE_morphine
            {
                count = 1;
                name = "ACE_morphine";
            };
            class _xx_ACE_epinephrine
            {
                count = 2;
                name = "ACE_epinephrine";
            };
            class _xx_ToolKit
            {
                count = 1;
                name = "ToolKit";
            };
        };
        class TransportWeapons
        {
        };
    };

    class Myrmidon_TeamLeader_pack : Myr_Fastbag_Blk
    {
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        class TransportMagazines
        {
            class _xx_kat_Painkiller
            {
                count = 2;
                magazine = "kat_Painkiller";
            };
        };
        class TransportItems
        {
            class _xx_ACE_adenosine
            {
                count = 3;
                name = "ACE_adenosine";
            };
            class _xx_ACE_elasticBandage
            {
                count = 10;
                name = "ACE_elasticBandage";
            };
            class _xx_ACE_packingBandage
            {
                count = 10;
                name = "ACE_packingBandage";
            };
            class _xx_ACE_bodyBag_blue
            {
                count = 1;
                name = "ACE_bodyBag_blue";
            };
            class _xx_ACE_tourniquet
            {
                count = 4;
                name = "ACE_tourniquet";
            };
            class _xx_ACE_splint
            {
                count = 2;
                name = "ACE_splint";
            };
            class _xx_kat_bloodIV_O_N_250
            {
                count = 1;
                name = "kat_bloodIV_O_N_250";
            };
            class _xx_kat_guedel
            {
                count = 1;
                name = "kat_guedel";
            };
            class _xx_kat_chestSeal
            {
                count = 2;
                name = "kat_chestSeal";
            };
            class _xx_kat_Pulseoximeter
            {
                count = 1;
                name = "kat_Pulseoximeter";
            };
            class _xx_ACE_morphine
            {
                count = 1;
                name = "ACE_morphine";
            };
            class _xx_ACE_epinephrine
            {
                count = 2;
                name = "ACE_epinephrine";
            };
            class _xx_kat_AED
            {
                count = 1;
                name = "kat_AED";
            };
        };
        class TransportWeapons
        {
        };
    };
};

class cfgWeapons
{
    class sgun_M4_F;
    class JCA_hgun_P320_black_F;
    class JCA_smg_MP5_VFG_black_F;
    class JCA_arifle_M4A4_VFG_black_F;
    class tf47_at4_heat;
    class JCA_arifle_M4A4_GL_black_F;
    class JCA_arifle_SR10_VFG_black_F;
    class JCA_srifle_AWM_black_F;
    class LMG_Mk200_black_F;
    class launch_Titan_short_blk_F;

    class Myrmidon_sgun_M4_F_E22_optic_ROS_black_SMG : sgun_M4_F
    {
        displayName = "M4 SSAS 12G";
        scope = 1;
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "E22_optic_ROS_black_SMG";
            };
        };
    };

    class Myrmidon_JCA_hgun_P320_black_F_JCA_acc_LightModule_Pistol_blackJCA_optic_PRO_black : JCA_hgun_P320_black_F
    {
        displayName = "P320 9 mm (Black)";
        scope = 1;
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "JCA_optic_PRO_black";
            };
            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "JCA_acc_LightModule_Pistol_black";
            };
        };
    };

    class Myrmidon_JCA_smg_MP5_VFG_black_F_JCA_acc_LaserModule_black_PointerJCA_optic_AHO_black : JCA_smg_MP5_VFG_black_F
    {
        displayName = "MP5A5 9 mm VFG (Black)";
        scope = 1;
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "JCA_optic_AHO_black";
            };
            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "JCA_acc_LaserModule_black_Pointer";
            };
        };
    };

    class Myrmidon_JCA_arifle_M4A4_VFG_black_F_JCA_acc_DualMount_black_PointerJCA_optic_AHO_black : JCA_arifle_M4A4_VFG_black_F
    {
        displayName = "M4A4 5.56 mm VFG (Black)";
        scope = 1;
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "JCA_optic_AHO_black";
            };
            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "JCA_acc_DualMount_black_Pointer";
            };
        };
    };

    class Myrmidon_tf47_at4_heat : tf47_at4_heat
    {
        displayName = "M136 AT4 HEAT CS";
        scope = 1;
        class LinkedItems
        {
        };
    };

    class Myrmidon_JCA_arifle_M4A4_GL_black_F_JCA_acc_DualMount_black_PointerJCA_optic_AHO_black : JCA_arifle_M4A4_GL_black_F
    {
        displayName = "M4A4 5.56 mm EGLM (Black)";
        scope = 1;
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "JCA_optic_AHO_black";
            };
            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "JCA_acc_DualMount_black_Pointer";
            };
        };
    };

    class Myrmidon_JCA_arifle_SR10_VFG_black_F_JCA_acc_DualMount_black_PointerJCA_optic_AICO_blackJCA_bipod_04_black : JCA_arifle_SR10_VFG_black_F
    {
        displayName = "SR10 7.62 mm VFG (Black)";
        scope = 1;
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "JCA_optic_AICO_black";
            };
            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "JCA_acc_DualMount_black_Pointer";
            };
            class LinkedItemsUnder
            {
                slot = "UnderBarrelSlot";
                item = "JCA_bipod_04_black";
            };
        };
    };

    class Myrmidon_JCA_srifle_AWM_black_F_JCA_muzzle_snds_AWM_tactical_blackJCA_optic_HPPO_RAD_blackJCA_bipod_AWM_black : JCA_srifle_AWM_black_F
    {
        displayName = "M115A3 .338 LM (Black)";
        scope = 1;
        class LinkedItems
        {
            class LinkedItemsMuzzle
            {
                slot = "MuzzleSlot";
                item = "JCA_muzzle_snds_AWM_tactical_black";
            };
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "JCA_optic_HPPO_RAD_black";
            };
            class LinkedItemsUnder
            {
                slot = "UnderBarrelSlot";
                item = "JCA_bipod_AWM_black";
            };
        };
    };

    class Myrmidon_LMG_Mk200_black_F_JCA_acc_LaserModule_black_PointerJCA_optic_AHO_blackJCA_bipod_04_black : LMG_Mk200_black_F
    {
        displayName = "Stoner 99 LMG (Black)";
        scope = 1;
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "JCA_optic_AHO_black";
            };
            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "JCA_acc_LaserModule_black_Pointer";
            };
            class LinkedItemsUnder
            {
                slot = "UnderBarrelSlot";
                item = "JCA_bipod_04_black";
            };
        };
    };

    class Myrmidon_JCA_arifle_M4A4_VFG_black_F_JCA_acc_DualMount_black_PointerJCA_optic_AICO_black : JCA_arifle_M4A4_VFG_black_F
    {
        displayName = "M4A4 5.56 mm VFG (Black)";
        scope = 1;
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "JCA_optic_AICO_black";
            };
            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "JCA_acc_DualMount_black_Pointer";
            };
        };
    };

    class Myrmidon_launch_Titan_short_blk_F : launch_Titan_short_blk_F
    {
        displayName = "Titan MPRL Compact (Black)";
        scope = 1;
        class LinkedItems
        {
        };
    };

    class Myrmidon_JCA_arifle_M4A4_GL_black_F_JCA_acc_DualMount_black_PointerJCA_optic_AICO_black : JCA_arifle_M4A4_GL_black_F
    {
        displayName = "M4A4 5.56 mm EGLM (Black)";
        scope = 1;
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "JCA_optic_AICO_black";
            };
            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "JCA_acc_DualMount_black_Pointer";
            };
        };
    };
};
