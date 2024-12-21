class CfgPatches
{
    class MYR_M4s
    {
        units[] = {};
        weapons[] = {"MYR_RIII","MYR_RIII_Tan"};
        requiredVersion = 1.0;
        requiredAddons[] = {"A3_Weapons_F"};
    };
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class asdg_MuzzleSlot_556;
class asdg_OpticRail1913;
class asdg_FrontSideRail;
class asdg_UnderSlot;
class JCA_RailSLot_AR;
class WeaponSlotsInfo;

class CfgWeapons
{	
	class arifle_SPAR_01_blk_F;
	class MYR_RIII_Black: arifle_SPAR_01_blk_F
	{
		scope = 2;
		baseWeapon = "MYR_RIII_Black";
		model = "Myrmidon\Data\Weapons\MYR_RIII\myr_iii.p3d";
		displayName = "[Myr] RIII";
		handAnim[] = {"OFP2_ManSkeleton","Myrmidon\Data\Weapons\MYR_RIII\ar_rvg.rtm"};
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				iconPosition[] = {0,0.4};
				iconScale = 0.2;
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[] = {0.45,0.28};
				iconScale = 0.2;
			};
			class pointerSlot: JCA_RailSLot_AR
			{
				iconPosition[] = {0.35,0.45};
				iconScale = 0.2;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[] = {0.2,0.8};
				iconScale = 0.3;
			};
			mass = 60;
		};
		
	};
};