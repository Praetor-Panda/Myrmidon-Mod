class CfgPatches
{
	class myr_suppressors
	{
		name = "Myr Suppressors";
		author = "Panda & Biwwy";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {"Myr_DD_Wave","Myr_RC1","Myr_RC1W","Myr_RC1WOD","Myr_RC1WT"};
	};
};

class asdg_MuzzleSlot;
class asdg_MuzzleSlot_762: asdg_MuzzleSlot
{
	class compatibleItems
	{
		Myr_DD_Wave = 1;
		// Myr_RC1 = 1;
		// Myr_RC1W = 1;
		// Myr_RC1WOD = 1;
		// Myr_RC1WT = 1;
	};
};
class asdg_MuzzleSlot_556: asdg_MuzzleSlot
{
	class compatibleItems
	{
		Myr_DD_Wave = 1;
		// Myr_RC1 = 1;
		// Myr_RC1W = 1;
		// Myr_RC1WOD = 1;
		// Myr_RC1WT = 1;
	};
};

class CfgWeapons
{
    class ItemCore;
    class InventoryMuzzleItem_Base_F;

    class Myr_DD_Wave: ItemCore
	{
		scope = 2;
		displayName = "[Myr] DD Wave";
		picture = "\Myrmidon\myrarsenal.paa";
		model = "\Myrmidon\Data\Weapons\Suppressors\DD_Wave.p3d";
		vehicleClass = "WeaponsPrimary";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass = 5;
			class MagazineCoef
			{
				initSpeed = 0.9;
			};
			class AmmoCoef
			{
				hit = 1;
				typicalSpeed = 1;
				airFriction = 1;
				visibleFire = 0.01;
				audibleFire = 0.3;
				visibleFireTime = 0.01;
				audibleFireTime = 0.3;
				cost = 1;
			};
			class MuzzleCoef
			{
				dispersionCoef = "0.8f";
				artilleryDispersionCoef = "1.0f";
				fireLightCoef = "0.1f";
				recoilCoef = "1.0f";
				recoilProneCoef = "1.0f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
			muzzleEnd = "zaslehpoint";
			alternativeFire = "Zasleh2";
			soundTypeIndex = 1;
		};
	};
	// class Myr_RC1: ItemCore
	// {
	// 	scope = 2;
	// 	displayName = "[Myr] RC1";
	// 	picture = "\Myrmidon\myrarsenal.paa";
	// 	model = "\Myrmidon\Data\Weapons\Suppressors\SureFire_556RC_Black.p3d";
	// 	vehicleClass = "WeaponsPrimary";
	// 	class ItemInfo: InventoryMuzzleItem_Base_F
	// 	{
	// 		mass = 5;
	// 		class MagazineCoef
	// 		{
	// 			initSpeed = 0.9;
	// 		};
	// 		class AmmoCoef
	// 		{
	// 			hit = 1;
	// 			typicalSpeed = 1;
	// 			airFriction = 1;
	// 			visibleFire = 0.01;
	// 			audibleFire = 0.3;
	// 			visibleFireTime = 0.01;
	// 			audibleFireTime = 0.3;
	// 			cost = 1;
	// 		};
	// 		class MuzzleCoef
	// 		{
	// 			dispersionCoef = "0.8f";
	// 			artilleryDispersionCoef = "1.0f";
	// 			fireLightCoef = "0.1f";
	// 			recoilCoef = "1.0f";
	// 			recoilProneCoef = "1.0f";
	// 			minRangeCoef = "1.0f";
	// 			minRangeProbabCoef = "1.0f";
	// 			midRangeCoef = "1.0f";
	// 			midRangeProbabCoef = "1.0f";
	// 			maxRangeCoef = "1.0f";
	// 			maxRangeProbabCoef = "1.0f";
	// 		};
	// 		muzzleEnd = "zaslehpoint";
	// 		alternativeFire = "Zasleh2";
	// 		soundTypeIndex = 1;
	// 	};
	// };
	// class Myr_RC1W: Myr_RC1
	// {
	// 	scope = 2;
	// 	displayName = "[Myr] RC1 (Black Cover)";
	// 	picture = "\Myrmidon\myrarsenal.paa";
	// 	model = "\Myrmidon\Data\Weapons\Suppressors\SureFire_556RC_Black_Wrapped.p3d";
	// 	vehicleClass = "WeaponsPrimary";
	// };
	// class Myr_RC1WOD: Myr_RC1
	// {
	// 	scope = 2;
	// 	displayName = "[Myr] RC1 (OD Cover)";
	// 	picture = "\Myrmidon\myrarsenal.paa";
	// 	model = "\Myrmidon\Data\Weapons\Suppressors\SureFire_556RC_Black_Wrapped_OD.p3d";
	// 	vehicleClass = "WeaponsPrimary";
	// };
	// class Myr_RC1WT: Myr_RC1
	// {
	// 	scope = 2;
	// 	displayName = "[Myr] RC1 (Tan Cover)";
	// 	picture = "\Myrmidon\myrarsenal.paa";
	// 	model = "\Myrmidon\Data\Weapons\Suppressors\SureFire_556RC_Black_Wrapped_Tan.p3d";
	// 	vehicleClass = "WeaponsPrimary";
	// };
};