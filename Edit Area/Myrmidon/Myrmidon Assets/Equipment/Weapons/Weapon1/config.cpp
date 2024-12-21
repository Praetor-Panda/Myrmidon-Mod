class CfgPatches
{
    class YourMod_Weapon1
    {
        units[] = {};
        weapons[] = {"YourMod_Weapon1"};
        requiredVersion = 1.0;
        requiredAddons[] = {"A3_Weapons_F"};
    };
};

class CfgWeapons
{
    class arifle_MX_F;
    class YourMod_Weapon1 : arifle_MX_F
    {
        displayName = "Your Custom Weapon";
        magazineReloadTime = 2;
        magazines[] = {"30Rnd_65x39_caseless_mag"};
    };
};
