class CfgPatches
{
  class MYR_AS350
  {
    author = "MYR Team";
    addonRootClass = "A3_Air_F";
    requiredAddons[] =
    {
      "A3_Air_F",
      "A3_Data_F",
      "A3_Armor_F_Beta_APC_Tracked_01",
      "A3_Weapons_F"
    };
    requiredVersion = 0.1;
    units[] =
    {
      "myr_Fennec_Unarmed",
      "myr_Fennec_Armed",
      "myr_Fennec_SAR",
      "myr_Fennec_Cargo"
    };
    weapons[] = {};
  };
};
class cfgFactionClasses
{
	class MYR
	{
		displayName = "MYR";
		priority = 2;
		side = 1;
		icon = "";
	};
};
#include "MYR_Helicopters\MYR_AS350\data\Anims\MYR_anims.hpp"
class WeaponCloudsMGun;
class DefaultEventHandlers;
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft
{
  class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
  class components;
};
class VehicleSystemsTemplateLeftPilot
    : DefaultVehicleSystemsDisplayManagerLeft
{
  class components;
};
class VehicleSystemsTemplateRightPilot
    : DefaultVehicleSystemsDisplayManagerRight
{
  class components;
};
class CfgVehicles
{
  class Helicopter;
  class Helicopter_Base_F : Helicopter
  {
    class HitPoints;
    class Turrets;
  };
  class Helicopter_Base_H : Helicopter_Base_F
  {
    class RotorLibHelicopterProperties;
    class ViewPilot;
    class ViewOptics;
    class Turrets : Turrets
    {
      class CopilotTurret;
      class MainTurret;
    };
    class AnimationSources;
    class HitPoints : HitPoints
    {
      class HitHull;
      class HitFuel;
      class HitAvionics;
      class HitMissiles;
      class HitEngine;
      class HitHRotor;
      class HitVRotor;
      class HitGlass1;
      class HitGlass2;
      class HitGlass3;
      class HitGlass4;
      class HitGlass5;
      class HitGlass6;
    };
    class Components;
    class EventHandlers;
  };
  #include "MYR_Helicopters\MYR_AS350\Fennec_base.hpp"
};
class CfgSounds
{
    class Doors
    {
        sound[] = {"MYR\MYR_Helicopters\MYR_AS350\data\Sounds\general\Heli_doors.ogg", 50, 1, 5};
        name = "Doors";
        titles[] = {};
    };
    class Winch
    {
        sound[] = {"MYR\MYR_Helicopters\MYR_AS350\data\Sounds\general\Heli_hoist.ogg", 25, 1, 2.5};
        name = "Winch";
        titles[] = {};
    };
};
class CfgMagazines
{
  class 100Rnd_127x99_mag_Tracer_Red;
  class PylonRack_7Rnd_Rocket_04_AP_F;
  class PylonRack_7Rnd_Rocket_04_HE_F;
#include "MYR_Air_Weap\Magazines.hpp"
};

class CfgWeapons
{
  class MGun;
  class HMG_127;
  class missiles_DAR;
#include "MYR_Air_Weap\Weapons.hpp"
};

class CfgAmmo
{
  class B_127x99_Ball_Tracer_Red;
  class Rocket_04_AP_F;
  class Rocket_04_HE_F;
#include "MYR_Air_Weap\ammo.hpp"
};