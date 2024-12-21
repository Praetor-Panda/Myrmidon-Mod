// Base Class
class myr_Fennec_Base: Helicopter_Base_H
{
	author="myr TEAM";
	scope=0;
	side=1;
	faction="myr";
	displayName="AS-550A2 Fennec";
	cost=1000000;
	_generalMacro="myr_Fennec_Base";
	model="\myr\myr_Helicopters\myr_AS350\myr_AS350.p3d";
	icon="\myr\myr_Helicopters\myr_AS350\data\ui\Map_fennec_ca.paa";
	picture="\myr\myr_Helicopters\myr_AS350\data\UI\Icon_fennec_ca.paa";
	editorSubcategory="EdSubcat_Helicopters";
	memoryPointTaskMarker="TaskMarker_1_pos";
	driverAction="myr_fennec_pilot";
	driverInAction="pilot_Heli_Light_02";
	preciseGetInOut=1;
	cargoPreciseGetInOut[]={1};
	getInRadius=2;
	hideWeaponsDriver=1;
	hideWeaponsGunner=1;
	hideWeaponsCargo=1;
	getInAction="pilot_Heli_Light_02_Enter";
	getOutAction="pilot_Heli_Light_02_Exit";
	mainBladeCenter="mainRotor_center";
	tailBladeCenter="tailRotor_center";
	selectionHRotorStill="mainRotor_static";
    selectionHRotorMove="mainRotor_blur";
    selectionVRotorStill="tailRotor_static";
    selectionVRotorMove="tailRotor_blur";
	driverLeftHandAnimName="collective";
	driverRightHandAnimName="cyclic_pilot";
	driverLeftFootAnimName="Pedals_Left";
	driverRightFootAnimName="Pedals_Right";
	memoryPointsGetInDriver="pos_pilot";
	memoryPointsGetInDriverDir="dir_pilot";
	memoryPointsGetInCargo[]=
	{
		"pos_cargo_R",
		"pos_cargo_L"
	};
	memoryPointsGetInCargoDir[]=
	{
		"dir_cargo_R",
		"dir_cargo_L"
	};
	memoryPointsGetInDriverPrecise="GetIn_Pilot";
	memoryPointsGetInCargoPrecise[]=
	{
		"GetIn_Cargo",
		"GetIn_Cargo2"
	};
	cargoGetInAction[]=
	{
		"GetInLow"
	};
	cargoGetOutAction[]=
	{
		"GetOutLow"
	};
	crew="";
	typicalCargo[]=
	{
		""
	};
	cargoAction[]=
	{
		"myr_fennec_cargo",
		"myr_fennec_cargo"
	};
	cargoCompartments[]=
	{
		"Compartment1",
		"Compartment1"
	};
	driverCompartments="Compartment1";
	washDownStrength="1.0f";
	washDownDiameter="40.0f";
	minSmokeDamage=0.3;
	maxSmokeDamage=0.99;
	numberPhysicalWheels=4;
	driveOnComponent[]=
	{
		"Wheels"
	};
	accuracy=0.5;
	nameSound="veh_helicopter_s";
	fuelCapacity=500;
	hullDamageCauseExplosion=0;
	hullExplosionDelay[]={15,30};
	fuelConsumptionRate=0.1;
	armor=40;
	damageResistance=0.00555;
	irScanRangeMin=0;
	irScanRangeMax=0;
	irScanToEyeFactor=1;
	MainRotorSpeed=1;
	backRotorSpeed=3;
	maxSpeed=245;
	enginePower=632;
	altFullForce=3500;
	altNoForce=4500;
	maxFordingDepth=0.7;
	mainBladeRadius=5.35;
	tailBladeRadius=0.5;
	tailBladeVertical=1;
	bodyFrictionCoef=0.2;
	class RotorLibHelicopterProperties
	{
		RTDconfig="myr\myr_Helicopters\myr_AS350\rtd_fennec.xml";
		autoHoverCorrection[]={0.28,2.8800001,0};
		defaultCollective=0.63499999;
		maxTorque=900;
		stressDamagePerSec=0.0033333332;
		maxHorizontalStabilizerLeftStress=10000;
		maxHorizontalStabilizerRightStress=10000;
		maxVerticalStabilizerStress=10000;
		horizontalWingsAngleCollMin=0;
		horizontalWingsAngleCollMax=0;
		maxMainRotorStress=31000;
		maxTailRotorStress=5200;
		retreatBladeStallWarningSpeed=77.222;
	};
	slingLoadMinCargoMass=0;
	slingLoadMaxCargoMass=1200;
	transportMaxWeapons=12;
	transportMaxMagazines=48;
	transportMaxBackpacks=24;
	maximumLoad=1500;
	transportSoldier=2;
	enableSweep=0;
	cargoProxyIndexes[]={1,2,3,4,5};
	getInProxyOrder[]={1,2,3,4,5};
	driverCanSee=31;
	extCameraPosition[]={0,2,-15};
	memoryPointSupply="supply";
	class TransportBackpacks
	{
		class _xx_B_Parachute
		{
			backpack="B_Parachute";
			count=6;
		};
	};
	class TransportMagazines
	{
		class _xx_SmokeShell
		{
			magazine="SmokeShell";
			count=2;
		};
		class _xx_SmokeShellGreen
		{
			magazine="SmokeShellGreen";
			count=2;
		};
		class _xx_30Rnd_556x45_Stanag
		{
			magazine="30Rnd_556x45_Stanag";
			count=4;
		};
	};
	class TransportWeapons
	{
		class _xx_arifle_Mk20C_F
		{
			weapon="arifle_Mk20C_F";
			count=2;
		};
	};
	class TransportItems
	{
		class _xx_FirstAidKit
		{
			name="FirstAidKit";
			count=6;
		};
		class _xx_Toolkit
		{
			name="Toolkit";
			count=1;
		};
		class _xx_ItemGPS
		{
			name="ItemGPS";
			count=1;
		};
	};
	class RenderTargets
	{
		class Copilot_display
		{
			renderTarget="rendertarget0";
			class CameraView1
			{
				pointPosition="rendertarget0_pos";
				pointDirection="rendertarget0_dir";
				renderVisionMode=2;
				renderQuality=2;
				fov=0.093000002;
				turret[]={0};
			};
		};
	};
	class Reflectors
	{
		class Cabin_front_r
		{
			position="cabinlight_fr_pos";
			direction="cabinlight_fr_dir";
			hitpoint="HP_cabinlight_fr";
			selection="cabinlight_fr";
			color[]={50,0,0};
			ambient[]={5,0,0};
			intensity=4;
			size=1;
			innerAngle=15;
			outerAngle=150;
			coneFadeCoef=1;
			useFlare=1;
			flareSize=0.1;
			flareMaxDistance=1;
			dayLight=1;
			class Attenuation
			{
				start=0;
				constant=0;
				linear=1;
				quadratic=1;
				hardLimitStart=1;
				hardLimitEnd=2;
			};
		};
		class Cabin_front_l: Cabin_front_r
		{
			position="cabinlight_fl_pos";
			direction="cabinlight_fl_dir";
			hitpoint="HP_cabinlight_fl";
			selection="cabinlight_fl";
		};
		class Cabin_back_r: Cabin_front_r
		{
			position="cabinlight_br_pos";
			direction="cabinlight_br_dir";
			hitpoint="HP_cabinlight_br";
			selection="cabinlight_br";
		};
		class Cabin_back_l: Cabin_front_r
		{
			position="cabinlight_bl_pos";
			direction="cabinlight_bl_dir";
			hitpoint="HP_cabinlight_bl";
			selection="cabinlight_bl";
		};
	};
	class MarkerLights
	{
		class PositionRed
		{
			color[]={0.8,0,0};
            ambient[]={0.09,0.015,0.01};
            intensity=75;
            drawLight=1;
            flareSize=1;
            brightness=0.01;
            drawLightSize=0.25;
            drawLightCenterSize=0.08;
            activeLight=0;
            blinking=0;
            dayLight=1;
            useFlare=1;
            name="position_light_red";
		};
		class PositionGreen: PositionRed
		{
			color[]={0, 0.8, 0};
			name="position_light_green";
		};
		class PositionWhite: PositionRed
		{
			color[]={1, 1, 1};
			name="position_light_white";
		};
		class CollisionRed: PositionRed
		{
			blinking=1;
			blinkingpattern[]={0.2,1.3};
			blinkingpatternguarantee=0;
            name="collisionlightred";
		};
		class CollisionWhite: PositionRed
		{
			blinking=1;
			blinkingpattern[]={0.05,0.9};
			blinkingpatternguarantee=0;
			intensity=150;
			color[]={1,1,1};
			drawlightcentersize=0.04;
			drawlightsize=1;
            name="collisionlightwhite";
		};
	};
	class AnimationSources: AnimationSources
	{
		class PositionWhite_source
		{
			markerlight="PositionWhite";
			source="MarkerLight";
			animPeriod=0;
			initPhase=0;
		};
		class PositionGreen_source
		{
			markerlight="PositionGreen";
			source="MarkerLight";
			animPeriod=0;
			initPhase=0;
		};
		class PositionRed_source
		{
			markerlight="PositionRed";
			source="MarkerLight";
			animPeriod=0;
			initPhase=0;
		};
		class CollisionLightRed_source
		{
			source="MarkerLight";
			markerLight="CollisionRed";
			animPeriod=0;
			initPhase=0;
		};
		class CollisionLightWhite_source
		{
			source="MarkerLight";
			markerLight="CollisionWhite";
			animPeriod=0;
			initPhase=0;
		};
		class NVG_Hide
		{
			source="user";
			animPeriod=0;
			initPhase=1;
		};
		class door_l
		{
			source="user";
			animPeriod=1;
			initPhase=0;
		};
		class door_r
		{
			source="user";
			animPeriod=1;
			initPhase=0;
		};
	};
	class UserActions
	{
		class Open_Door_Left
		{
			displayname="Open Left Door";
			position="door_pos";
			showWindow=1;
			radius=5;
			priority=0;
			onlyForPlayer=0;
			condition="this animationphase 'door_L_2' < 0.1 AND (player in crew this)";
			statement="this animate ['door_L_1',1], this animate ['door_L_2',1], this animate ['door_L_rot',1], this say3d ""Doors""";
		};
		class Close_Door_Left: Open_Door_Left
		{
			displayname="Close Left Door";
			condition="this animationphase 'door_L_2' > 0.9 AND (player in crew this)";
			statement = "this animate ['door_L_1',0], this animate ['door_L_2',0], this animate ['door_L_rot',0], this say3d ""Doors""";
		};
		class Open_Door_Right: Open_Door_Left
		{
			displayname="Open Right Door";
			condition="this animationphase 'door_R_2' < 0.1 AND (player in crew this)";
			statement = "this animate ['door_R_1',1], this animate ['door_R_2',1], this animate ['door_r_rot',1], this say3d ""Doors""";
		};
		class Close_Door_Right: Open_Door_Left
		{
			displayname="Close Right Door";
			condition="this animationphase 'door_R_2' > 0.9 AND (player in crew this)";
			statement = "this animate ['door_R_1',0], this animate ['door_R_2',0], this animate ['door_r_rot',0], this say3d ""Doors""";
		};
		class NVG_ON
		{
			displayname="Turn NVG lights on";
			position="cabin";
			showWindow=1;
			radius=10;
			priority=0;
			onlyForPlayer=0;
			condition="this animationphase 'NVG_Hide' > 0.9 AND (player in crew this)";
			statement="this animate ['NVG_Hide',0]";
		};
		class NVG_OFF: NVG_ON
		{
			displayname="Turn NVG lights off";
			condition="this animationphase 'NVG_Hide' < 0.1 AND (player in crew this)";
			statement="this animate ['NVG_Hide',1]";
		};
	};
	class Armory
	{
		description="HA-1 Fennec";
	};
	class HitPoints: HitPoints
	{
		class HitFuel: HitFuel
		{
			visual="";
			name="HP_Fuel";
			armor=1;
			radius=0.25;
			minimalHit=0.050000001;
			explosionShielding=2;
		};
		class HitHull: HitHull
		{
			armor=999;
			name="HP_hull";
			visual="zbytek";
			depends="Total";
			radius=0.01;
		};
		class HitEngine1: HitEngine
		{
			armor=1;
			radius=0.4;
			name="HP_Engine";
			explosionShielding=3;
			minimalHit=0.2;
			visual="engine";
			passThrough=1;
			material=51;
		};
		class HitAvionics: HitAvionics
		{
			armor=2;
			visual="avionics";
			name="HP_avionics";
			radius=0.25;
			minimalHit=0.05;
			explosionShielding=2;
		};
		class HitHRotor: HitHRotor
		{
			visual="mainRotor_static";
			name="HP_mainRotor";
			armor=4.5;
			radius=0.3;
			minimalHit=0.090000004;
			explosionShielding=2.5;
		};
		class HitVRotor: HitVRotor
		{
			visual="tailRotor_static";
			name="HP_tailRotor";
			armor=3;
			radius=0.06;
			minimalHit=0.050000001;
			explosionShielding=6;
		};
		class HitGlass1: HitGlass1
		{
			visual="glass1";
			name="HP_glass1";
			armor=2;
			radius=0.40000001;
			explosionShielding=6;
		};
		class HitGlass2: HitGlass2
		{
			visual="glass2";
			name="HP_glass2";
			armor=2;
			radius=0.40000001;
			explosionShielding=6;
		};
		class HitGlass3: HitGlass3
		{
			visual="glass3";
			name="HP_glass3";
			armor=2;
			radius=0.40000001;
			explosionShielding=6;
		};
		class HitGlass4: HitGlass4
		{
			visual="glass4";
			name="HP_glass4";
			armor=2;
			radius=0.40000001;
			explosionShielding=6;
		};
		class HitGlass5: HitGlass5
		{
			visual="glass5";
			name="HP_glass5";
			armor=2;
			radius=0.40000001;
			explosionShielding=6;
		};
		class HitGlass6: HitGlass6
		{
			visual="glass6";
			name="HP_glass6";
			armor=2;
			radius=0.40000001;
			explosionShielding=6;
		};
	};
	class Exhausts
	{
		class Exhaust1
		{
			position="exhaust";
			direction="exhaust_dir";
			effect="ExhaustsEffectHeliMed";
		};
		class Exhaust2
		{
			position="exhaust";
			direction="exhaust_dir";
			effect="ExhaustsEffectHeliMed";
		};
	};
	defaultUserMFDvalues[]={0,1,0.30000001,1};
	#include "Fennec_MFD.hpp"
	weapons[]=
	{
		"FakeHorn"
	};
	magazines[]={};
	threat[]={0.25,0.1,0.1};
	hiddenSelections[]=
	{
		"camo1",
		"camo4",
		"camo5",
		"glass1",
		"glass2",
		"glass3",
		"glass4",
		"glass5",
		"glass6"
	};
	hiddenSelectionsTextures[]=
	{
		"myr\myr_Helicopters\myr_AS350\data\Camo1_co.paa",
		"myr\myr_Helicopters\myr_AS350\data\Camo4_co.paa",
		"myr\myr_Helicopters\myr_AS350\data\Camo5_co.paa",
		"myr\myr_Helicopters\myr_AS350\data\Glass_ca.paa",
		"myr\myr_Helicopters\myr_AS350\data\Glass_ca.paa",
		"myr\myr_Helicopters\myr_AS350\data\Glass_ca.paa",
		"myr\myr_Helicopters\myr_AS350\data\Glass_ca.paa",
		"myr\myr_Helicopters\myr_AS350\data\Glass_ca.paa",
		"myr\myr_Helicopters\myr_AS350\data\Glass_ca.paa"
	};
	class Damage
	{
		tex[]={};
		mat[]=
		{
			"myr\myr_Helicopters\myr_AS350\data\camo1.rvmat",
			"myr\myr_Helicopters\myr_AS350\data\camo1_damage.rvmat",
			"myr\myr_Helicopters\myr_AS350\data\destruct.rvmat",
			
			"myr\myr_Helicopters\myr_AS350\data\camo4.rvmat",
			"myr\myr_Helicopters\myr_AS350\data\camo4_damage.rvmat",
			"myr\myr_Helicopters\myr_AS350\data\destruct.rvmat",
			
			"myr\myr_Helicopters\myr_AS350\data\camo5.rvmat",
			"myr\myr_Helicopters\myr_AS350\data\camo5_damage.rvmat",
			"myr\myr_Helicopters\myr_AS350\data\destruct.rvmat",
			
			"myr\myr_Helicopters\myr_AS350\data\glass.rvmat",
			"myr\myr_Helicopters\myr_AS350\data\glass_damage.rvmat",
			"myr\myr_Helicopters\myr_AS350\data\glass_damage.rvmat",

			"myr\myr_Helicopters\myr_AS350\data\glass.rvmat",
			"myr\myr_Helicopters\myr_AS350\data\glass_damage.rvmat",
			"myr\myr_Helicopters\myr_AS350\data\glass_damage.rvmat",

			"myr\myr_Helicopters\myr_AS350\data\glass.rvmat",
			"myr\myr_Helicopters\myr_AS350\data\glass_damage.rvmat",
			"myr\myr_Helicopters\myr_AS350\data\glass_damage.rvmat",

			"myr\myr_Helicopters\myr_AS350\data\glass.rvmat",
			"myr\myr_Helicopters\myr_AS350\data\glass_damage.rvmat",
			"myr\myr_Helicopters\myr_AS350\data\glass_damage.rvmat",

			"myr\myr_Helicopters\myr_AS350\data\glass.rvmat",
			"myr\myr_Helicopters\myr_AS350\data\glass_damage.rvmat",
			"myr\myr_Helicopters\myr_AS350\data\glass_damage.rvmat",

			"myr\myr_Helicopters\myr_AS350\data\glass.rvmat",
			"myr\myr_Helicopters\myr_AS350\data\glass_damage.rvmat",
			"myr\myr_Helicopters\myr_AS350\data\glass_damage.rvmat"
		};
	};
	class Components: Components
	{
		class SensorsManagerComponent
		{
			class Components
			{
				class IRSensorComponent: SensorTemplateIR
				{
					class AirTarget
					{
						minRange=500;
						maxRange=3000;
						objectDistanceLimitCoef=-1;
						viewDistanceLimitCoef=1;
					};
					class GroundTarget
					{
						minRange=500;
						maxRange=2000;
						objectDistanceLimitCoef=1;
						viewDistanceLimitCoef=1;
					};
					maxTrackableSpeed=28;
					angleRangeHorizontal=50;
					angleRangeVertical=36;
					animDirection="mainGun";
				};
				class VisualSensorComponent: SensorTemplateVisual
				{
					class AirTarget
					{
						minRange=500;
						maxRange=3000;
						objectDistanceLimitCoef=-1;
						viewDistanceLimitCoef=1;
					};
					class GroundTarget
					{
						minRange=500;
						maxRange=2000;
						objectDistanceLimitCoef=1;
						viewDistanceLimitCoef=1;
					};
					maxTrackableSpeed=28;
					angleRangeHorizontal=50;
					angleRangeVertical=36;
					animDirection="mainGun";
				};
				class LaserSensorComponent: SensorTemplateLaser
				{
				};
				class NVSensorComponent: SensorTemplateNV
				{
				};
			};
		};
		class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
		{
			class Components: components
			{
				class VehiclePrimaryGunnerDisplay
				{
					componentType="TransportFeedDisplayComponent";
					source="PrimaryGunner";
				};
			};
		};
		class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
		{
			class Components: components
			{
				class VehiclePrimaryGunnerDisplay
				{
					componentType="TransportFeedDisplayComponent";
					source="PrimaryGunner";
				};
			};
		};
	};
	class PilotCamera
	{
		class OpticsIn
		{
			class Wide
			{
				opticsDisplayName="W";
				initAngleX=0;
				minAngleX=0;
				maxAngleX=0;
				initAngleY=0;
				minAngleY=0;
				maxAngleY=0;
				initFov=0.5;
				minFov=0.5;
				maxFov=0.5;
				directionStabilized=1;
				visionMode[]=
				{
					"Normal",
					"NVG"
				};
				thermalMode[]={0,1};
				gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
			};
			showMiniMapInOptics=0;
			showUAVViewpInOptics=0;
			showSlingLoadManagerInOptics=1;
		};
		minTurn=0;
		maxTurn=0;
		initTurn=0;
		minElev=80;
		maxElev=80;
		initElev=80;
		maxXRotSpeed=0.5;
		maxYRotSpeed=0.5;
		pilotOpticsShowCursor=1;
		controllable=0;
	};
	memoryPointDriverOptics="slingCamera";
	class ViewPilot: ViewPilot
	{
		initAngleX=-2.5;
	};
	class CargoTurret;
	class Turrets: Turrets
	{
		class myr_CopilotTurret: CopilotTurret
		{
			gunnerAction="myr_fennec_copilot";
			gunnerInAction="copilot_Heli_Light_02";
			gunnerName="$STR_A3_COPILOT";
			precisegetinout=1;
			isCopilot=1;
			gunnerGetInAction="copilot_Heli_Light_02_Enter";
			gunnerGetOutAction="copilot_Heli_Light_02_Exit";
			memoryPointsGetInGunner="pos_copilot";
			memoryPointsGetInGunnerDir="dir_copilot";
			memoryPointsGetInGunnerPrecise="GetIn_Copilot";
			proxyIndex=1;
			canEject=0;
			selectionFireAnim="";
			minElev=-50;
			maxElev=30;
			initElev=-11;
			minTurn=-170;
			maxTurn=170;
			initTurn=0;
			gunnerLeftHandAnimName="collective";
			gunnerRightHandAnimName="cyclic_copilot";
			gunnerLeftFootAnimName="Pedals_Left";
			gunnerRightFootAnimName="Pedals_Right";
			gunnerCompartments="Compartment1";
			weapons[]={};
			magazines[]={};
			soundServo[]={"",0.0099999998,1,30};
			class Reflectors
			{
				class Top
				{
					color[]={7000,7500,10000};
					ambient[]={70,75,100};
					intensity=50;
					size=1;
					innerAngle=15;
					outerAngle=65;
					coneFadeCoef=10;
					position="light_t_pos";
					direction="light_t_dir";
					hitpoint="HP_light_t";
					selection="light_t";
					useFlare=1;
					flareSize=15;
					flareMaxDistance=250;
					dayLight=0;
					class Attenuation
					{
						start=0;
						constant=0;
						linear=1;
						quadratic=1;
						hardLimitStart=100;
						hardLimitEnd=200;
					};
				};
				class Bottom: Top
				{
					position="light_b_pos";
					direction="light_b_dir";
					hitpoint="HP_light_b";
					selection="light_b";
				};
			};
			class Components
			{
				class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot
				{
				};
				class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot
				{
				};
			};
		};
		class myr_Cargo_Heli_Right: CargoTurret
		{
			gunnerAction="passenger_inside_2";
			gunnerName="Right Shooter";
			gunnerGetInAction="GetInLow";
			gunnerGetOutAction="GetOutLow";
			memoryPointsGetInGunner="pos_gunner_R";
			memoryPointsGetInGunnerDir="dir_gunner_R";
			gunnerCompartments="Compartment1";
			enabledByAnimationSource="Door_r";
			proxyIndex=5;
			commanding=3;
			isPersonTurret=1;				
			minTurn=-60;
			maxTurn=40;
			minElev=-50;
			maxElev=28;	
		};
		class myr_Cargo_Heli_Left: myr_Cargo_Heli_Right
		{
			gunnerName="Left Shooter";
			memoryPointsGetInGunner="pos_gunner_L";
			memoryPointsGetInGunnerDir="dir_gunner_L";
			enabledByAnimationSource="Door_l";
			proxyIndex=6;
			minTurn=-40;
			maxTurn=60;
		};
	};
	#include "Fennec_sounds.hpp"
	class EventHandlers: EventHandlers
	{
		init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
	};
	ace_cargo_space=2;
	class TextureSources
	{
		class myr
		{
			author="myr Team";
			displayName="myr TEAM";
			textures[]=
			{
				"myr\myr_Helicopters\myr_AS350\data\Camo1_co.paa",
				"myr\myr_Helicopters\myr_AS350\data\Camo4_co.paa",
				"myr\myr_Helicopters\myr_AS350\data\Camo5_co.paa",
				"myr\myr_Helicopters\myr_AS350\data\Glass_ca.paa",
				"myr\myr_Helicopters\myr_AS350\data\Glass_ca.paa",
				"myr\myr_Helicopters\myr_AS350\data\Glass_ca.paa",
				"myr\myr_Helicopters\myr_AS350\data\Glass_ca.paa",
				"myr\myr_Helicopters\myr_AS350\data\Glass_ca.paa",
				"myr\myr_Helicopters\myr_AS350\data\Glass_ca.paa"
			};
			factions[]=
			{
				"myr"
			};
		};
		textureList[]=
		{
		"myr",
		1
		};
	};
};	

// Transport Version
class myr_Fennec_unarmed_base: myr_Fennec_Base
{
	availableForSupportTypes[]=
	{
		"Drop",
		"Transport"
	};
	slingLoadMaxCargoMass=10;
	class Turrets: Turrets
	{
		class myr_CopilotTurret: myr_CopilotTurret
		{};
		class myr_Cargo_Heli_Right: myr_Cargo_Heli_Right
		{};
		class myr_Cargo_Heli_Left: myr_Cargo_Heli_Left
		{};
	};
	class AnimationSources: AnimationSources
	{
		class CollisionLightRed
		{
			source="MarkerLight";
			markerLight="CollisionRed";
			animPeriod=0;
			initPhase=0;
		};
		class CollisionLightWhite
		{
			source="MarkerLight";
			markerLight="CollisionWhite";
			animPeriod=0;
			initPhase=0;
		};
		class NVG_Hide
		{
			source="user";
			animPeriod=0;
			initPhase=1;
		};
		class door_l
		{
			source="user";
			animPeriod=1;
			initPhase=1;
		};
		class door_r
		{
			source="user";
			animPeriod=1;
			initPhase=1;
		};
	};
	class UserActions
	{
		class NVG_ON
		{
			displayname="Turn NVG lights on";
			position="cabin";
			showWindow=1;
			radius=10;
			priority=0;
			onlyForPlayer=0;
			condition="this animationphase 'NVG_Hide' > 0.9 AND (player in crew this)";
			statement="this animate ['NVG_Hide',0]";
		};
		class NVG_OFF: NVG_ON
		{
			displayname="Turn NVG lights off";
			condition="this animationphase 'NVG_Hide' < 0.1 AND (player in crew this)";
			statement="this animate ['NVG_Hide',1]";
		};
	};
};
class myr_Fennec_Unarmed: myr_Fennec_unarmed_base
{
	author="myr TEAM";
	_generalMacro="myr_Fennec_Unarmed";
	editorPreview="";
	scope=2;
	scopeCurator=2;
	scopeArsenal=2;
	displayName="AS-550A2 Fennec Transport";
	textureList[]=
	{
		"myr",1
	};
};

// Armed Version
class myr_Fennec_dynamicLoadout_base: myr_Fennec_Base
{
	cost=3000000;
	threat[]={0.9,0.75,0.5};
	class SpeechVariants
	{
		class Default
		{
			speechSingular[]=
			{
				"veh_air_gunship_s"
			};
			speechPlural[]=
			{
				"veh_air_gunship_p"
			};
		};
	};
	textSingular="$STR_A3_nameSound_veh_air_gunship_s";
	textPlural="$STR_A3_nameSound_veh_air_gunship_p";
	availableForSupportTypes[]=
	{
		"CAS_Heli"
	};
	hideWeaponsCargo=1;
	transportSoldier=0;
	enableSweep=1;
	slingLoadMinCargoMass=0;
	slingLoadMaxCargoMass=10;
	class Components: Components
	{
		class SensorsManagerComponent
		{
			class Components
			{
				class ActiveRadarSensorComponent: SensorTemplateActiveRadar
				{
					class AirTarget
					{
						minRange=0;
						maxRange=0;
						objectDistanceLimitCoef=-1;
						viewDistanceLimitCoef=-1;
					};
					class GroundTarget
					{
						minRange=4000;
						maxRange=4000;
						objectDistanceLimitCoef=-1;
						viewDistanceLimitCoef=-1;
					};
					maxTrackableSpeed=125;
					angleRangeHorizontal=180;
					angleRangeVertical=90;
					groundNoiseDistanceCoef=-1;
					maxGroundNoiseDistance=-1;
					minSpeedThreshold=0;
					maxSpeedThreshold=0;
					aimDown=30;
				};
				class PassiveRadarSensorComponent: SensorTemplatePassiveRadar{};
			};	
		};		
		class TransportPylonsComponent
		{
			uiPicture="\myr\myr_Helicopters\myr_AS350\data\ui\fennec_loadout_ca.paa";
			class Pylons
			{
				class PylonLeft1
				{
					attachment="myr_PylonPod_50_cal";
					priority=5;
					hardpoints[]=
					{
						"UNI_SCALPEL",
						"myr_rocket_he_PYLON",
						"myr_rocket_ap_PYLON",
						"myr_50cal_PYLON",
						"DAR",
						"DAGR"
					};
					UIposition[]={0.059999999,0.40000001};
				};
				class PylonRight1: PylonLeft1
				{
					attachment="myr_PylonPod_rocket_ap";
					mirroredMissilePos=1;
					hardpoints[]=
					{
						"UNI_SCALPEL",
						"myr_rocket_he_PYLON",
						"myr_rocket_ap_PYLON",
						"myr_50cal_PYLON",
						"DAR",
						"DAGR"
					};
					UIposition[]={0.58999997,0.40000001};
				};
			};
			class Presets
			{
				class Empty
				{
					displayName="$STR_empty";
					attachment[]={};
				};
				class Default
				{
					displayName="$STR_vehicle_default";
					attachment[]=
					{
						"myr_PylonPod_50_cal",
						"myr_PylonPod_rocket_he"
					};
				};
				class CAS_AV
				{
					displayName="CAS - Anti-Vehicles";
					attachment[]=
					{
						"myr_PylonPod_rocket_ap",
						"myr_PylonPod_rocket_ap"
					};
				};
				class CAS_AP
				{
					displayName="CAS - Anti-Personel";
					attachment[]=
					{
						"myr_PylonPod_rocket_he",
						"myr_PylonPod_rocket_he"
					};
				};
				class AT
				{
					displayName="$STR_A3_cfgmagazines_titan_at_dns";
					attachment[]=
					{
						"PylonRack_4Rnd_ACE_Hellfire_AGM114K",
						"PylonRack_4Rnd_ACE_Hellfire_AGM114K"
					};
				};
			};
		};
	};
	class AnimationSources: AnimationSources
	{
		class CollisionLightRed
		{
			source="MarkerLight";
			markerLight="CollisionRed";
			animPeriod=0;
			initPhase=0;
		};
		class CollisionLightWhite
		{
			source="MarkerLight";
			markerLight="CollisionWhite";
			animPeriod=0;
			initPhase=0;
		};
		class Hud_Fold
		{
			source="user";
			animPeriod=1.5;
			initPhase=0;
		};
		class NVG_Hide
		{
			source="user";
			animPeriod=0;
			initPhase=1;
		};
		class Bench_Fold
		{
			source="user";
			animPeriod=0;
			initPhase=1;
		};
		class Radar_Hide
		{
			source="user";
			animPeriod=0;
			initPhase=1;
		};
		class Flir_Hide
		{
			source="user";
			animPeriod=0;
			initPhase=1;
		};
		class Hud_Hide
		{
			source="user";
			animPeriod=0;
			initPhase=1;
		};
		class WS_Hide
		{
			source="user";
			animPeriod=0;
			initPhase=1;
		};
		class Wings_Hide
		{
			source="user";
			animPeriod=0;
			initPhase=1;
		};
	};
	class Turrets: Turrets
	{
		class myr_CopilotTurret: MainTurret
		{
			proxyIndex=1;
			proxyType="CPGunner";
			body="mainTurret";
			gun="mainGun";
			gunBeg="gunBeg";
			gunEnd="gunEnd";
			animationSourceBody="mainTurret";
			animationSourceGun="mainGun";
			memoryPointsGetInGunner="pos_copilot";
			memoryPointsGetInGunnerDir="dir_copilot";
			stabilizedInAxes=3;
			primaryGunner=0;
			memoryPointGunnerOptics="rendertarget0_dir";
			minElev=-120;
			maxElev=20;
			initElev=0;
			minTurn=-180;
			maxTurn=180;
			initTurn=0;
			gunnerName="$STR_A3_COPILOT";
			isCopilot=1;
			turretInfoType="RscOptics_Heli_Attack_01_gunner";
			weapons[]=
			{
				"Laserdesignator_mounted"
			};
			soundServo[]=
			{
				"",
				0.0099999998,
				1,
				30
			};
			magazines[]=
			{
				"Laserbatteries"
			};
			startEngine=0;
			gunnerHasFlares=0;
			usePiP=1;
			inGunnerMayFire=1;
			gunnerAction="myr_fennec_copilot";
			gunnerInAction="copilot_Heli_Light_03";
			precisegetinout=1;
			gunnerGetInAction="copilot_Heli_Light_01_Enter";
			gunnerGetOutAction="copilot_Heli_Light_01_Exit";
			gunnerOpticsEffect[]={};
			gunnerOpticsModel="";
			gunnerLeftHandAnimName="collective";
			gunnerRightHandAnimName="cyclic_copilot";
			gunnerLeftFootAnimName="Pedals_Left";
			gunnerRightFootAnimName="Pedals_Right";
			gunnerCompartments="Compartment1";
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="W";
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.46599999;
					minFov=0.46599999;
					maxFov=0.46599999;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={0,1};
					thermalNoise[]=
					{
						0.5,		//intensity,
						1.25,		//sharpness,
						2.5,		//grainSize,
						0.75,		//intensityX0,
						1,			//intensityX1,
						0,			//monochromatic,
						0,			//static,
						0.95		//blurCoef
					};
					gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
				};
				class Medium: Wide
				{
					opticsDisplayName="M";
					initFov=0.093000002;
					minFov=0.093000002;
					maxFov=0.093000002;
					gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
				};
				class Narrow: Wide
				{
					opticsDisplayName="N";
					gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
					initFov=0.028999999;
					minFov=0.028999999;
					maxFov=0.028999999;
				};
			};
			class OpticsOut
			{
				class Monocular
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					minFov=0.25;
					maxFov=1.25;
					initFov=0.75;
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					gunnerOpticsModel="";
					gunnerOpticsEffect[]={};
				};
			};
			class ViewGunner: ViewPilot
			{
				initAngleX=-15;
			};
			class HitPoints
			{
				class HitTurret
				{
					armor=1;
					material=-1;
					name="HP_turret";
					visual="mainTurret";
					armorComponent="FG_Turret";
					passThrough=0.2;
					radius=0.25;
				};
				class HitGun
				{
					armor=1;
					material=-1;
					name="HP_gun";
					visual="mainGun";
					armorComponent="FG_Gun";
					passThrough=0.2;
					radius=0.25;
				};
			};
			class Reflectors
			{
				class Top
				{
					color[]={7000,7500,10000};
					ambient[]={70,75,100};
					intensity=50;
					size=1;
					innerAngle=15;
					outerAngle=65;
					coneFadeCoef=10;
					position="light_t_pos";
					direction="light_t_dir";
					hitpoint="HP_light_t";
					selection="light_t";
					useFlare=1;
					flareSize=15;
					flareMaxDistance=250;
					dayLight=0;
					class Attenuation
					{
						start=0;
						constant=0;
						linear=1;
						quadratic=1;
						hardLimitStart=100;
						hardLimitEnd=200;
					};
				};
				class Bottom: Top
				{
					position="light_b_pos";
					direction="light_b_dir";
					hitpoint="HP_light_b";
					selection="light_b";
				};
			};
			class Components
			{
				class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot
				{
				};
				class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot
				{
				};
			};
		};
	};
	class UserActions
	{
		class HUD_Fold
		{
			displayname="Fold HUD";
			position="cabin";
			showWindow=1;
			radius=10;
			priority=0;
			onlyForPlayer=0;
			condition="this animationphase 'HUD_Arm' < 0.1 AND (player in crew this)";
			statement="this animate ['HUD_Arm',1],this animate ['HUD_Visor',1]";
		};
		class HUD_Unfold: HUD_Fold
		{
			displayname="Unfold HUD";
			condition="this animationphase 'HUD_Arm' > 0.9 AND (player in crew this)";
			statement="this animate ['HUD_Arm',0],this animate ['HUD_Visor',0]";
		};
		class NVG_ON
		{
			displayname="Turn NVG lights on";
			position="cabin";
			showWindow=1;
			radius=10;
			priority=0;
			onlyForPlayer=0;
			condition="this animationphase 'NVG_Hide' > 0.9 AND (player in crew this)";
			statement="this animate ['NVG_Hide',0]";
		};
		class NVG_OFF: NVG_ON
		{
			displayname="Turn NVG lights off";
			condition="this animationphase 'NVG_Hide' < 0.1 AND (player in crew this)";
			statement="this animate ['NVG_Hide',1]";
		};
	};
};
class myr_Fennec_Armed: myr_Fennec_dynamicLoadout_base
{
	author="myr TEAM";
	_generalMacro="myr_Fennec_Armed";
	editorPreview="";
	scope=2;
	scopeCurator=2;
	scopeArsenal=2;
	displayName="AS-550A2 Fennec Light Attack";
	textureList[]=
	{
		"myr",1
	};
};
// Cargo Version
class myr_Fennec_cargo_base: myr_Fennec_Base
{
	availableForSupportTypes[]=
	{
		"Drop",
		"Transport"
	};
	enableSweep=0;
	transportSoldier=4;
	class Turrets: Turrets
	{
		class myr_CopilotTurret: myr_CopilotTurret
		{};
	};
	class AnimationSources: AnimationSources
	{
		class CollisionLightRed
		{
			source="MarkerLight";
			markerLight="CollisionRed";
			animPeriod=0;
			initPhase=0;
		};
		class CollisionLightWhite
		{
			source="MarkerLight";
			markerLight="CollisionWhite";
			animPeriod=0;
			initPhase=0;
		};
		class NVG_Hide
		{
			source="user";
			animPeriod=0;
			initPhase=1;
		};
		class door_l
		{
			source="user";
			animPeriod=1;
			initPhase=0;
		};
		class door_r
		{
			source="user";
			animPeriod=1;
			initPhase=0;
		};
		class Slingcrane_Hide
		{
			source="user";
			animPeriod=1;
			initPhase=1;
		};
	};
};
class myr_Fennec_Cargo: myr_Fennec_cargo_base
{
	author="myr TEAM";
	_generalMacro="myr_Fennec_Cargo";
	editorPreview="";
	scope=2;
	scopeCurator=2;
	scopeArsenal=2;
	displayName="AS-550A2 Fennec Cargo";
	textureList[]=
	{
		"myr",1
	};
};

// SAR Version
class myr_Fennec_SAR_base: myr_Fennec_Base
{
	cost=750000;
	threat[]={0.1,0,0};
	availableForSupportTypes[]=
	{
		"Drop",
		"Transport"
	};
	transportSoldier=3;
	slingLoadMaxCargoMass=10;
	class AnimationSources: AnimationSources
	{
		class CollisionLightRed
		{
			source="MarkerLight";
			markerLight="CollisionRed";
			animPeriod=0;
			initPhase=0;
		};
		class CollisionLightWhite
		{
			source="MarkerLight";
			markerLight="CollisionWhite";
			animPeriod=0;
			initPhase=0;
		};
		class NVG_Hide
		{
			source="user";
			animPeriod=0;
			initPhase=1;
		};
		class Hoist_Hide
		{
			source="user";
			animPeriod=0;
			initPhase=1;
		};
		class Bench_Fold
		{
			source="user";
			animPeriod=0;
			initPhase=1;
		};
		class Winch_Rot
		{
			source="user";
			animPeriod=1;
			initPhase=0;
		};
		class Flir_Hide
		{
			source="user";
			animPeriod=0;
			initPhase=1;
		};
		class Winch_Hide
		{
			source="user";
			animPeriod=0;
			initPhase=1;
		};
		class door_l
		{
			source="user";
			animPeriod=1;
			initPhase=1;
		};
		class door_r
		{
			source="user";
			animPeriod=1;
			initPhase=0;
			//sound="myr_Door";
		};
	};
	class Turrets: Turrets
	{
		class myr_CopilotTurret: MainTurret
		{
			body="mainTurret";
			gun="mainGun";
			gunBeg="gunBeg";
			gunEnd="gunEnd";
			animationSourceBody="mainturret";
			animationSourceGun="mainGun";
			memoryPointsGetInGunner="pos_copilot";
			memoryPointsGetInGunnerDir="dir_copilot";
			stabilizedInAxes=3;
			primaryGunner=0;
			memoryPointGunnerOptics="rendertarget0_dir";
			minElev=-120;
			maxElev=20;
			initElev=0;
			minTurn=-180;
			maxTurn=180;
			initTurn=0;
			gunnerName="$STR_A3_COPILOT";
			isCopilot=1;
			turretInfoType="RscOptics_Heli_Attack_01_gunner";
			weapons[]=
			{
				"Laserdesignator_mounted"
			};
			soundServo[]=
			{
				"",
				0.0099999998,
				1,
				30
			};
			magazines[]=
			{
				"Laserbatteries"
			};
			usePiP=1;
			inGunnerMayFire=1;
			proxyIndex=1;
			gunnerAction="myr_fennec_copilot";
			gunnerInAction="copilot_Heli_Light_03";
			precisegetinout=1;
			gunnerGetInAction="copilot_Heli_Light_01_Enter";
			gunnerGetOutAction="copilot_Heli_Light_01_Exit";
			gunnerOpticsEffect[]={};
			gunnerOpticsModel="";
			gunnerLeftHandAnimName="collective";
			gunnerRightHandAnimName="cyclic_copilot";
			gunnerLeftFootAnimName="Pedals_Left";
			gunnerRightFootAnimName="Pedals_Right";
			gunnerCompartments="Compartment1";
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="W";
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.46599999;
					minFov=0.46599999;
					maxFov=0.46599999;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={0,1};
					gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
				};
				class Medium: Wide
				{
					opticsDisplayName="M";
					initFov=0.093000002;
					minFov=0.093000002;
					maxFov=0.093000002;
					gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
				};
				class Narrow: Wide
				{
					opticsDisplayName="N";
					gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
					initFov=0.028999999;
					minFov=0.028999999;
					maxFov=0.028999999;
				};
			};
			class OpticsOut
			{
				class Monocular
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					minFov=0.25;
					maxFov=1.25;
					initFov=0.75;
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					gunnerOpticsModel="";
					gunnerOpticsEffect[]={};
				};
			};
			class ViewGunner: ViewPilot
			{
				initAngleX=-15;
			};
			startEngine=0;
			gunnerHasFlares=0;
			class HitPoints
			{
				class HitTurret
				{
					armor=1;
					material=-1;
					name="HP_turret";
					visual="mainTurret";
					armorComponent="mainTurret";
					passThrough=0.2;
					radius=0.25;
				};
				class HitGun
				{
					armor=1;
					material=-1;
					name="HP_gun";
					visual="mainGun";
					armorComponent="mainGun";
					passThrough=0.2;
					radius=0.25;
				};
			};
			class Reflectors
			{
				class Top
				{
					color[]={7000,7500,10000};
					ambient[]={70,75,100};
					intensity=50;
					size=1;
					innerAngle=15;
					outerAngle=65;
					coneFadeCoef=10;
					position="light_t_pos";
					direction="light_t_dir";
					hitpoint="HP_light_t";
					selection="light_t";
					useFlare=1;
					flareSize=15;
					flareMaxDistance=250;
					dayLight=0;
					class Attenuation
					{
						start=0;
						constant=0;
						linear=1;
						quadratic=1;
						hardLimitStart=100;
						hardLimitEnd=200;
					};
				};
				class Bottom: Top
				{
					position="light_b_pos";
					direction="light_b_dir";
					hitpoint="HP_light_b";
					selection="light_b";
				};
			};
			class Components
			{
				class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot
				{
				};
				class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot
				{
				};
			};
		};
		class myr_Cargo_Heli_Left: myr_Cargo_Heli_Left
		{};
	};
	class UserActions
	{
		class Deploy_Rescue_Seat
		{
			displayname="<t color='#ffaa00'> Deploy Rescue Seat </t>";
			position="hoist_hook_pos";
			showWindow=1;
			radius=20;
			priority=1;
			onlyForPlayer=0;
			condition="this animationphase 'Hoist_Hide' > 0.9 AND (player in crew this) AND this animationphase 'door_L_2' > 0.9";
			statement="this animate ['Winch_Rot',1]; this execVM ""braf\braf_sar\Braf_Scripts\DRS.sqf""; this animate ['Hoist_Hide',-0.5]";
			
		};
		class Hoist_Down: Deploy_Rescue_Seat
		{
			displayname="<t color='#ffaa00'> Extend Cable Hook </t>";
			condition="this animationphase 'Hoist_Hide' < -0.4 AND this animationphase 'Hoist_Hide' > -0.6 AND (player in crew this) AND this animationphase 'door_L_2' > 0.9";
			statement="this execVM ""braf\braf_sar\Braf_Scripts\hoist_down.sqf""; this animate ['Hoist_Hide',-1]; this say3d ""Winch""";
		};
		class Hoist_Up: Deploy_Rescue_Seat
		{
			displayname="<t color='#ffaa00'> Recover Hoist Hook </t>";
			condition="this animationphase 'Hoist_Hide' < -0.9  AND (player in crew this) AND this animationphase 'door_L_2' > 0.9";
			statement="this execVM ""braf\braf_sar\Braf_Scripts\hoist_up.sqf""; this animate ['Hoist_Hide',-0.5]; this say3d ""Winch""";
		};
		class Recover_Rescue_Seat: Deploy_Rescue_Seat
		{
			displayname="<t color='#ffaa00'> Retrieve Rescue Seat </t>";
			condition="(player in crew this) AND this animationphase 'door_L_2' > 0.9 AND this animationphase 'Hoist_Hide' < -0.4  AND this animationphase 'Hoist_Hide' > -0.6";
			statement="this execVM ""braf\braf_sar\Braf_Scripts\recover_seat.sqf""; this animate ['Winch_Rot',0]; this animate ['Hoist_Hide',1]";
		};
		class Hoist_Cut: Deploy_Rescue_Seat
		{
			displayname="<t color='#b31d00'> Cut Hoist Hook Cable </t>";
			condition="(player in crew this) AND this animationphase 'Hoist_Hide' < 0 AND this animationphase 'door_L_2' > 0.9";
			statement="this execVM ""braf\braf_sar\Braf_Scripts\hoist_cut.sqf""; this animate ['Winch_Rot',0];  this animate ['Hoist_Hide',1]";
		};
		class NVG_ON
		{
			displayname="Turn NVG lights on";
			position="cabin";
			showWindow=1;
			radius=10;
			priority=0;
			onlyForPlayer=0;
			condition="this animationphase 'NVG_Hide' > 0.9 AND (player in crew this)";
			statement="this animate ['NVG_Hide',0]";
		};
		class NVG_OFF: NVG_ON
		{
			displayname="Turn NVG lights off";
			condition="this animationphase 'NVG_Hide' < 0.1 AND (player in crew this)";
			statement="this animate ['NVG_Hide',1]";
		};
		class Open_Door_Right
		{
			position="door_pos";
			showWindow=1;
			radius=5;
			priority=0;
			onlyForPlayer=0;
			displayname="Open Right Door";
			condition="this animationphase 'door_R_2' < 0.1 AND (player in crew this)";
			statement = "this animate ['door_R_1',1], this animate ['door_R_2',1], this animate ['door_r_rot',1], this say3d ""Doors""";
		};
		class Close_Door_Right: Open_Door_Right
		{
			displayname="Close Right Door";
			condition="this animationphase 'door_R_2' > 0.9 AND (player in crew this)";
			statement = "this animate ['door_R_1',0], this animate ['door_R_2',0], this animate ['door_r_rot',0], this say3d ""Doors""";
		};
	};
};
class myr_Fennec_SAR: myr_Fennec_SAR_base
{
	author="myr TEAM";
	_generalMacro="myr_Fennec_SAR";
	editorPreview="";
	scope=2;
	scopeCurator=2;
	scopeArsenal=2;
	displayName="AS-550A2 Fennec SAR";
	textureList[]=
	{
		"myr",1
	};
};