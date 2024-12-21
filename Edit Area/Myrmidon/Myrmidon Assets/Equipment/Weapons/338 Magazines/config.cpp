class CfgPatches
{
	class Myr_338_Ammo
	{
		requiredaddons[] = {"A3_Weapons_F"};
		requiredversion = 1.32;
		units[] = {};
		weapons[] = {};
		magazines[] = {"Myr_Mks_338_mag","Myr_Mks_338_AP_mag","Myr_Mks_338_SLAP_mag","Myr_Mks_338_HE_mag"};
		author[] = {"Biwwy"};
	};
};

class CfgMagazines
{
	class 10Rnd_338_Mag;
	class Myr_Mks_338_mag: 10Rnd_338_Mag
	{
		ammo = "Myr_338_Ball";
		count = 10;
		displayNameShort = "Ball";
		displayname = "[Myr] .338 Magazine";
		initspeed = 860;
		picture = "\A3\weapons_f\data\UI\M_20Rnd_762x51_CA.paa";
		scope = 2;
		tracersevery = 0;
		mass = 15;
	};
	class Myr_Mks_338_AP_mag: 10Rnd_338_Mag
	{
		ammo = "Myr_338_AP";
		count = 10;
		displayNameShort = "AP";
		displayname = "[Myr] .338 AP Magazine";
		initspeed = 856;
		picture = "\A3\weapons_f\data\UI\M_20Rnd_762x51_CA.paa";
		scope = 2;
		tracersevery = 0;
		mass = 15;
	};
	class Myr_Mks_338_SLAP_mag: 10Rnd_338_Mag
	{
		ammo = "Myr_338_SLAP";
		count = 10;
		displayNameShort = "SLAP";
		displayname = "[Myr] .338 SLAP Magazine";
		initspeed = 1219;
		picture = "\A3\weapons_f\data\UI\M_20Rnd_762x51_CA.paa";
		scope = 2;
		tracersevery = 0;
		mass = 15;
	};
	class Myr_Mks_338_HE_mag: 10Rnd_338_Mag
	{
		ammo = "Myr_338_HE";
		count = 10;
		displayNameShort = "HE";
		displayname = "[Myr] .338 HE Magazine";
		initspeed = 930;
		picture = "\A3\weapons_f\data\UI\M_20Rnd_762x51_CA.paa";
		scope = 2;
		tracersevery = 0;
		mass = 15;
	};
};
class CfgAmmo
{
	class BulletBase;
	class Myr_338_Ball: BulletBase
	{
		hit = 21.31056;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_127";
		visibleFire = 10;
		audibleFire = 15;
		cost = 5;
		airLock = 1;
		caliber = 1.1627907;
		typicalSpeed = 860;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale = 1.2;
		tracerStartTime = 0.075;
		tracerEndTime = 5;
		airFriction = -0.000944999;
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 1.5;
		dangerRadiusHit = 2;
	};
	class Myr_338_AP: BulletBase
	{
		hit = 40.738766;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_127";
		visibleFire = 10;
		audibleFire = 15;
		cost = 5;
		airLock = 1;
		caliber = 1.1682243;
		typicalSpeed = 860;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale = 1.2;
		tracerStartTime = 0.075;
		tracerEndTime = 5;
		airFriction = -0.000944999;
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 1.5;
		dangerRadiusHit = 2;
	};
	class Myr_338_SLAP: BulletBase
	{
		hit = 52.1826;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_127";
		visibleFire = 10;
		audibleFire = 15;
		cost = 5;
		airLock = 1;
		caliber = 0.82034457;
		typicalSpeed = 860;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale = 1.2;
		tracerStartTime = 0.075;
		tracerEndTime = 5;
		airFriction = -0.00047035;
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 1.5;
		dangerRadiusHit = 2;
	};
	class Myr_338_HE: BulletBase
	{
		hit = 30;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_127";
		visibleFire = 10;
		audibleFire = 15;
		Explosive = 1;
		cost = 5;
		airLock = 1;
		caliber = 2.6;
		typicalSpeed = 880;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 1.2;
		tracerStartTime = 0.075;
		tracerEndTime = 1;
		airFriction = -0.00056;
		class CamShakeExplode
		{
			power = "(13^0.5)";
			duration = "((round (13^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((13^0.5)*3)";
		};
		class CamShakeHit
		{
			power = 13;
			duration = "((round (13^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		explosionEffectsRadius = 5;
		explosionEffects = "GrenadeExplosion";
		craterEffects = "ExploAmmoCrater";
	};
};