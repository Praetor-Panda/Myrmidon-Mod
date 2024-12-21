class CfgPatches
{
	class Myr_Backpacks
	{
		units[] = {"Myr_Sidepack","Myr_Sidepack_Blk","Myr_Radiobag_Blk","Myr_Radiobag_Tan","Myr_Fastbag_Blk","Myr_Fastbag_Tan","Myr_M9_Tan","Myr_M9_Grey"};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {};
	};
};

class cfgVehicles
{
    class B_AssaultPack_mcamo;
	class tfw_ilbe_DD_coy;
	class B_Kitbag_cbr;
    class Myr_Sidepack: B_AssaultPack_mcamo
	{
		author = "Biwwy";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		transportMaxWeapons = 1;
		transportMaxMagazines = 20;
		isbackpack = 1;
		reversed = 1;
		mapSize = 2;
		vehicleClass = "Backpacks";
		allowedSlots[] = {901};
		_generalMacro = "sidepack";
		displayName = "[Myr] Sidepack (Tan)";
		picture = "\Myrmidon\myrarsenal.paa";
		model = "\Myrmidon\Data\Backpacks\sidepack.p3d";
		hiddenSelectionsTextures[] = {"\Myrmidon\Data\Backpacks\sidepack.paa"};
		maximumLoad = 50;
		mass = 40;
	};
	class Myr_Radiobag_Blk: tfw_ilbe_DD_coy
		{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[Myr] Radiobag (Grey)";
		picture = "\Myrmidon\myrarsenal.paa";
		hiddenSelectionsTextures[] = {"\Myrmidon\Data\Backpacks\myr_ilbe_blk_co.paa"};
		model = "y\tfw_radios\addons\ilbe\data\model\dd\tfw_dd_ilbe.p3d";
	};
	class Myr_Radiobag_Tan: tfw_ilbe_DD_coy
		{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[Myr] Radiobag (Tan)";
		picture = "\Myrmidon\myrarsenal.paa";
		hiddenSelectionsTextures[] = {"\Myrmidon\Data\Backpacks\myr_ilbe_tan_co.paa"};
		model = "y\tfw_radios\addons\ilbe\data\model\dd\tfw_dd_ilbe.p3d";
	};
	class Myr_Fastbag_Blk: B_Kitbag_cbr
		{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[Myr] Fast Bag (Grey)";
		picture = "\Myrmidon\myrarsenal.paa";
		hiddenSelectionsTextures[] = {"\Myrmidon\Data\Backpacks\myr_fast_blk_co.paa"};
	};
	class Myr_Fastbag_Tan: B_Kitbag_cbr
		{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[Myr] Fast Bag (Tan)";
		picture = "\Myrmidon\myrarsenal.paa";
		hiddenSelectionsTextures[] = {"\Myrmidon\Data\Backpacks\myr_fast_tan_co.paa"};
	};
	class Myr_M9_Tan: B_Kitbag_cbr
		{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[Myr] Medic Bag (Tan)";
		picture = "\Myrmidon\myrarsenal.paa";
		hiddenSelectionsTextures[] = {"\Myrmidon\Data\Backpacks\myrm9tan.paa"};
		hiddenSelections[] = {"camo"};
		model = "\Myrmidon\Data\Backpacks\M9_Backpack.p3d";
		maximumLoad = 300;
	};
	class Myr_M9_Grey: B_Kitbag_cbr
		{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[Myr] Medic Bag (Grey)";
		picture = "\Myrmidon\myrarsenal.paa";
		hiddenSelectionsTextures[] = {"\Myrmidon\Data\Backpacks\myrm9grey.paa"};
		hiddenSelections[] = {"camo"};
		model = "\Myrmidon\Data\Backpacks\M9_Backpack.p3d";
		maximumLoad = 300;
	};
};