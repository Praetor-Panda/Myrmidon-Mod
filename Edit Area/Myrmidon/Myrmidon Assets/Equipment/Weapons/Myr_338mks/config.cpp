class CfgPatches
{
    class Myr_338_mksrifle
    {
        units[] = {};
        weapons[] = {"Myr_mks338_F"};
        requiredVersion = 1.0;
        requiredAddons[] = {"A3_Weapons_F"};
    };
};
class Mode_SemiAuto;
class CfgWeapons
{
	class srifle_DMR_02_F;
	class Myr_mks338_F: srifle_DMR_02_F
	{
		author = "Biwwy";
		scope = 2;
		displayName = "[Myr] .338";
		magazines[] = {"Myr_Mks_338_mag","Myr_Mks_338_AP_mag","Myr_Mks_338_SLAP_mag","Myr_Mks_338_HE_mag"};
		// hiddenSelections[] = {"Camo1","Camo2"};
		// hiddenSelectionsTextures[] = {"1","2"};
    };
};