class CfgPatches
{
	class Braf_SAR
	{
		author="BRAF Team";
		addonRootClass="A3_Air_F";
		requiredAddons[]=
		{
			"A3_Air_F",
			"A3_Data_F",
			"A3_Armor_F_Beta_APC_Tracked_01",
			"A3_Weapons_F"
		};
		requiredVersion=0.1;
		units[]=
		{
			"BRAF_Rescue_Seat"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Items_base_F;
	class BRAF_Rescue_Seat: Items_base_F
	{
		author="BRAF Team";
		displayName="Rescue Seat";
		_generalMacro="BRAF_Rescue_Seat";
		model="braf\braf_sar\BRAF_rescue_seat.p3d";
		editorSubcategory="EdSubcat_Storage";
		scope=1;
		side=0;
		scopeCurator=0;
		scopeArsenal=0;
		cost=500;
		vehicleClass="Container";
		simulation="shipX";
		transportSoldier=2;
		preciseGetInOut=0;
		cargoPreciseGetInOut[]={0};
		cargoProxyIndexes[]={1,2};
		getInProxyOrder[]={1,2};
		canFloat=1;
		leftDustEffect="";
		rightDustEffect="";
		leftDustEffects[]={};
		rightDustEffects[]={};
		leftWaterEffect="";
		rightWaterEffect="";
		selectionBackLights="";
		selectionBrakeLights="";
		selectionClan="";
		selectionDashboard="";
		selectionFireAnim="";
		selectionLeftOffset="";
		selectionRightOffset="";
		tracksSpeed=0;
		damperDamping=0;
		damperForce=0;
		damperSize=0;
		alphaTracks=0;
		turnCoef=1;
		terrainCoef=1;
		gearBox[]={-1,0,1,2,3,4};
		scudModel="";
		armor=75;
		armorStructural=1;
		damageResistance=0.0040000002;
		damageEffect="";
		crewCrashProtection=1;
		crewVulnerable=1;
		leftEngineEffect="";
		rightEngineEffect="";
		driverLeftHandAnimName="";
		driverLeftLegAnimName="";
		driverRightHandAnimName="";
		driverRightLegAnimName="";
		memoryPointLMissile="";
		memoryPointRMissile="";
		memoryPointMissile="";
		memoryPointMissileDir="";
		memoryPointLRocket="";
		memoryPointRRocket="";
		memoryPointsGetInDriver="";
		memoryPointsGetInDriverDir="";
		memoryPointDriverOptics[]={};
		memoryPointsGetInCoDriver="";
		memoryPointsGetInCoDriverDir="";
		memoryPointsLeftEngineEffect="";
		memoryPointsLeftWaterEffect="";
		memoryPointsRightEngineEffect="";
		memoryPointsRightWaterEffect="";
		memoryPointTrackFLL="";
		memoryPointTrackFLR="";
		memoryPointTrackBLL="";
		memoryPointTrackBLR="";
		memoryPointTrackFRL="";
		memoryPointTrackFRR="";
		memoryPointTrackBRL="";
		memoryPointTrackBRR="";
		driverDoor="";
		cargoDoors[]={};
		pointPilot="";
		pointCommander="";
		class SquadTitles
		{
			color[]={0,0,0,0};
			name="";
		};
		memoryPointsGetInCargo="seat_pos";
		getInRadius=5;
		memoryPointsGetInCargoDir="seat_dir";
		memoryPointsGetInCargoPrecise[]=
		{
			"seat_pos"
		};
		cargoAction[]=
		{
			"passenger_apc_narrow_generic03",
			"passenger_apc_narrow_generic03"
		};
		class AnimationSources
		{
			class seat1
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class seat2
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
		};
		emptySound[]=
		{
			"",
			0,
			1
		};
		soundGeneralCollision1[]=
		{
			"emptySound",
			0
		};
		soundGeneralCollision2[]=
		{
			"emptySound",
			0
		};
		soundGeneralCollision3[]=
		{
			"emptySound",
			0
		};
		soundCrashes[]=
		{
			"emptySound",
			0
		};
		soundLandCrashes[]=
		{
			"emptySound",
			0
		};
		soundBuildingCrash[]=
		{
			"emptySound",
			0
		};
		soundArmorCrash[]=
		{
			"emptySound",
			0
		};
		soundWoodCrash[]=
		{
			"emptySound",
			0
		};
		soundBushCollision1[]=
		{
			"emptySound",
			0
		};
		soundBushCollision2[]=
		{
			"emptySound",
			0
		};
		soundBushCollision3[]=
		{
			"emptySound",
			0
		};
		soundBushCrash[]=
		{
			"emptySound",
			0
		};
		soundWaterCollision1[]=
		{
			"emptySound",
			0
		};
		soundWaterCollision2[]=
		{
			"emptySound",
			0
		};
		soundWaterCrashes[]=
		{
			"emptySound",
			0
		};
		soundDammage[]=
		{
			"emptySound",
			0
		};
		soundGetIn[]=
		{
			"emptySound",
			0
		};
		soundGetOut[]=
		{
			"emptySound",
			0
		};
		soundEngineOnInt[]=
		{
			"emptySound",
			0
		};
		soundEngineOnExt[]=
		{
			"emptySound",
			0
		};
		soundEngineOffInt[]=
		{
			"emptySound",
			0
		};
		soundEngineOffExt[]=
		{
			"emptySound",
			0
		};
		soundLocked[]=
		{
			"emptySound",
			0
		};
		soundIncommingMissile[]=
		{
			"emptySound",
			0
		};
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
		class Exhausts
		{
		};
		class Reflectors
		{
		};
		soundGear[]=
		{
			"",
			0.000177828,
			1
		};
		class Sounds
		{
		};
		class MFD
		{
		};
		class RenderTargets
		{
		};
		class UserActions
		{
			class Seat_1_Open
			{
				displayname="<t color='#007209'> Open Seat 01 </t>";
				position="seat_01_pos";
				showWindow=1;
				radius=2;
				priority=1;
				onlyForPlayer=0;
				condition="this animationphase 'seat_01' < 0.5";
				statement="this animate ['seat_01',1]";
			};
			class Seat_2_Open: Seat_1_Open
			{
				displayname="<t color='#007209'> Open Seat 02 </t>";
				position="seat_02_pos";
				condition="this animationphase 'seat_02' < 0.5";
				statement="this animate ['seat_02',1]";
			};
			class Seat_1_Close: Seat_1_Open
			{
				displayname="<t color='#9b0000'> Close Seat 01 </t>";
				position="seat_01_pos";
				condition="this animationphase 'seat_01' > 0.5";
				statement="this animate ['seat_01',0]";
			};
			class Seat_2_Close: Seat_1_Open
			{
				displayname="<t color='#9b0000'> Close Seat 02 </t>";
				position="seat_02_pos";
				condition="this animationphase 'seat_02' > 0.5";
				statement="this animate ['seat_02',0]";
			};
		};
	};
	class BRAF_Esquilo_EFS: BRAF_Rescue_Seat
	{
		author="BRAF Team";
		displayName="Esquilo EFS";
		_generalMacro="BRAF_Esquilo_EFS";
		model="braf\braf_sar\BRAF_Esquilo_EFS.p3d";
		editorSubcategory="EdSubcat_Storage";
		scope=1;
		side=0;
		scopeCurator=0;
		scopeArsenal=0;
		cost=500;
		vehicleClass="Container";
		simulation="shipX";
		memoryPointsGetInCargo="";
		memoryPointsGetInCargoDir="";
		memoryPointsGetInCargoPrecise[]=
		{
			""
		};
		cargoAction[]=
		{
			""
		};
		class UserActions
		{
		};
	};
	class BRAF_Pantera_EFS: BRAF_Rescue_Seat
	{
		author="BRAF Team";
		displayName="Pantera EFS";
		_generalMacro="BRAF_Pantera_EFS";
		model="braf\braf_sar\BRAF_Pantera_EFS.p3d";
		editorSubcategory="EdSubcat_Storage";
		scope=1;
		side=0;
		scopeCurator=0;
		scopeArsenal=0;
		cost=500;
		vehicleClass="Container";
		simulation="shipX";
		memoryPointsGetInCargo="";
		memoryPointsGetInCargoDir="";
		memoryPointsGetInCargoPrecise[]=
		{
			""
		};
		cargoAction[]=
		{
			""
		};
		class UserActions
		{
		};
	};
};
