class CfgPatches
{
	class MYR_MAGS
	{
		requiredaddons[] = {};
		requiredversion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};

class CfgMagazines
{
	class 30Rnd_556x45_Stanag;
    class MYR_556X45_dd: 30Rnd_556x45_Stanag
	{
		scope = 2;
		author = "MYR";
		displayName = "[Myr] DD 5.56 Mag";
		picture = "\Myrmidon\myrarsenal.paa";
		model = "Myrmidon\Data\Weapons\Magazines\556x45_dd.p3d";
		modelSpecial = "Myrmidon\Data\Weapons\Magazines\556x45_dd.p3d";
		modelSpecialIsProxy = 1;
		hiddenSelections[] = {""};
		hiddenSelectionsTextures[] = {""};
		ammo = "B_556x45_Ball";
		count = 32;
		initSpeed = 950.366;
		tracersEvery = 0;
		lastRoundsTracer = 3;
	};
    class MYR_556X45_ddt: 30Rnd_556x45_Stanag
	{
		scope = 2;
		author = "MYR";
		displayName = "[Myr] DD 5.56 Tracer Mag";
		picture = "\Myrmidon\myrarsenal.paa";
		model = "Myrmidon\Data\Weapons\Magazines\556x45_dd.p3d";
		modelSpecial = "Myrmidon\Data\Weapons\Magazines\556x45_dd.p3d";
		modelSpecialIsProxy = 1;
		hiddenSelections[] = {""};
		hiddenSelectionsTextures[] = {""};
		ammo = "B_556x45_Ball_Tracer_Green";
		count = 32;
		initSpeed = 950.366;
		tracersEvery = 0;
		lastRoundsTracer = 3;
	};
    class MYR_556X45_ddap: 30Rnd_556x45_Stanag
	{
		scope = 2;
		author = "MYR";
		displayName = "[Myr] DD 5.56 AP Mag";
		picture = "\Myrmidon\myrarsenal.paa";
		model = "Myrmidon\Data\Weapons\Magazines\556x45_dd.p3d";
		modelSpecial = "Myrmidon\Data\Weapons\Magazines\556x45_dd.p3d";
		modelSpecialIsProxy = 1;
		hiddenSelections[] = {""};
		hiddenSelectionsTextures[] = {""};
		ammo = "B_556x45_AP_RF";
		count = 32;
		initSpeed = 950.366;
		tracersEvery = 0;
		lastRoundsTracer = 3;
	};
};

class CfgMagazineWells
{
	class STANAG_556x45
	{
		AR_MAGS[] = {"MYR_556X45_dd","MYR_556X45_ddt","MYR_556X45_ddap"};
	};
};