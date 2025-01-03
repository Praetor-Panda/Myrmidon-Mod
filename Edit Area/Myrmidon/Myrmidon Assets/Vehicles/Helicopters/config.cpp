class CfgPatches
{
    class Myr_Helicopters
    {
        units[] = {"Myr_Taru","Myr_Cougar_Transport","Myr_Cougar_Armed","Myr_Cougar_Rescue",};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {};
    };
};

class TextureSources
		{
			class Myr_Cougar_One
			{
				author = "Biwwy";
				dlc = "rf";
				displayName = "MyrCougarOne";
				textures[] = {"\Myrmidon\Data\Vehicles\Helicopters\myr_cougar_one_co.paa","\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa","#(rgb,1024,1024,1)ui('lxRF_MFDMinimap','lxRF_MFDMinimap')","\Myrmidon\Data\Vehicles\Helicopters\myr_adds.paa","\Myrmidon\Data\Vehicles\Helicopters\myr_cougar_one_co.paa","\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa"};
				materials[] = {"\lxrf\air_rf\heli_medium_ec\data\as332_exterior_01.rvmat","\lxrf\air_rf\heli_medium_ec\data\as332_int_cargo.rvmat"};
			};
        };

class CfgVehicles
{
    class O_T_Heli_Transport_04_F;
    class I_E_Heli_EC_01A_military_RF;
    class I_E_EC_02_RF;
    class C_Heli_EC_04_rescue_RF;

	class Helicopter_Base_F;
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class Turrets;
	};
	class Heli_Transport_04_base_F: Helicopter_Base_H
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
			class LoadmasterTurret;
		};
		class AnimationSources;
		class TextureSources
		{
			class Black
			{
				factions[] = {};
			};
			class GreenHex
			{
				displayName = "$STR_A3_TextureSources_GreenHex0";
				author = "$STR_A3_A_AveryTheKitty";
				textures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_01_ghex_CO.paa","\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_02_ghex_CO.paa"};
				factions[] = {};
			};
			class Russian
			{
				displayName = "$STR_A3_TEXTURESOURCES_RUSSIANSTAR0";
				author = "$STR_A3_A_lilithsspawn";
				textures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_RUS2_01_CO.paa","\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_RUS2_02_CO.paa"};
				factions[] = {};
			};
			class Russian2
			{
				displayName = "$STR_A3_TEXTURESOURCES_RUSSIANSTARFLAG0";
				author = "$STR_A3_A_lilithsspawn";
				textures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_RUS_01_CO.paa","\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_RUS2_02_CO.paa"};
				factions[] = {};
			};
            class Myr_Taru_Blu
			{
				author = "Biwwy";
				displayName = "MyrTaru";
				textures[] = {"\Myrmidon\Data\Vehicles\Helicopters\myrtaruone.paa","\Myrmidon\Data\Vehicles\Helicopters\myrtarutwo.paa",};
                factions[] = {};
			};
		};
	};

    class O_Heli_Transport_04_F: Heli_Transport_04_base_F{};
    class Myr_Taru: O_T_Heli_Transport_04_F
    {
        displayName = "Taru";
        faction = "Myr_Faction"; // Match with your custom faction
        crew="Myrmidon_Pilot";
		typicalCargo[]={"Myrmidon_Contractor"};
        vehicleClass = "Helicopters";
        hiddenSelectionsTextures[] = {"\Myrmidon\Data\Vehicles\Helicopters\myrtaruone.paa","\Myrmidon\Data\Vehicles\Helicopters\myrtarutwo.paa",};
        hiddenSelections[] = {"Camo_1","Camo_2"};
        textureList[] = {"Myr_Taru_Blu",1,"Black",0,"GreenHex",0,"Russian",0,"Russian2",0};
        scope = 2;
		scopeCurator = 2;
        side = 2;
    };
    class Myr_Cougar_Transport: I_E_Heli_EC_01A_military_RF
    {
        displayName = "Cougar (Transport)";
        faction = "Myr_Faction"; // Match with your custom faction
        crew="Myrmidon_Pilot";
		typicalCargo[]={"Myrmidon_Contractor"};
        vehicleClass = "Helicopters";
        scope = 2;
		scopeCurator = 2;
        side = 2;
        hiddenSelectionsTextures[] = {"\Myrmidon\Data\Vehicles\Helicopters\myr_cougar_one_co.paa","\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa","#(rgb,1024,1024,1)ui('lxRF_MFDMinimap','lxRF_MFDMinimap')","\Myrmidon\Data\Vehicles\Helicopters\myr_adds.paa","\Myrmidon\Data\Vehicles\Helicopters\myr_cougar_one_co.paa","\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa"};
        hiddenSelectionsMaterials[] = {"\lxrf\air_rf\heli_medium_ec\data\as332_exterior_01.rvmat","\lxrf\air_rf\heli_medium_ec\data\as332_int_cargo.rvmat"};
		hiddenSelections[] = {"camo1","camo2","pip_screen","camo4","camoWreckExt","camoWreckInt"};
        textureList[] = {"Myr_Cougar_One",1};
		animationList[] = {"hide_engfilters_01",1,"hide_engfilters_02",0,"hide_chin_plate",1,"hide_chin_glass",0,"hide_ceiling_blanket",0,"hide_cm_dispenser",0,"hide_winch",1,"hide_ir_small",1,"hide_ir_large",0,"hide_mirror",1};
    };
    class Myr_Cougar_Armed: I_E_EC_02_RF
    {
        displayName = "Cougar (Armed)";
        faction = "Myr_Faction"; // Match with your custom faction
        crew="Myrmidon_Pilot";
		typicalCargo[]={"Myrmidon_Contractor"};
        vehicleClass = "Helicopters";
        scope = 2;
		scopeCurator = 2;
        side = 2;
        hiddenSelectionsTextures[] = {"\Myrmidon\Data\Vehicles\Helicopters\myr_cougar_one_co.paa","\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa","#(rgb,1024,1024,1)ui('lxRF_MFDMinimap','lxRF_MFDMinimap')","\Myrmidon\Data\Vehicles\Helicopters\myr_adds.paa","\Myrmidon\Data\Vehicles\Helicopters\myr_cougar_one_co.paa","\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa"};
		hiddenSelectionsMaterials[] = {"\lxrf\air_rf\heli_medium_ec\data\as332_exterior_glossy.rvmat","\lxrf\air_rf\heli_medium_ec\data\as332_int_cargo.rvmat"};
		hiddenSelections[] = {"camo1","camo2","pip_screen","camo4","camoWreckExt","camoWreckInt"};
        textureList[] = {"Myr_Cougar_One",1};
        animationList[] = {"hide_engfilters_01",1,"hide_engfilters_02",0,"hide_chin_plate",0,"hide_chin_glass",1,"hide_cm_dispenser",0,"hide_ceiling_blanket",0,"hide_ir_small",1,"hide_ir_large",0};
    };
    class Myr_Cougar_Rescue: C_Heli_EC_04_rescue_RF
    {
        displayName = "Cougar (Rescue)";
        faction = "Myr_Faction"; // Match with your custom faction
        crew="Myrmidon_Pilot";
		typicalCargo[]={"Myrmidon_Contractor"};
        vehicleClass = "Helicopters";
        scope = 2;
		scopeCurator = 2;
        side = 2;
       	hiddenSelectionsTextures[] = {"\Myrmidon\Data\Vehicles\Helicopters\myr_cougar_one_co.paa","\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_light_co.paa","#(rgb,1024,1024,1)ui('lxRF_MFDMinimap','lxRF_MFDMinimap')","\Myrmidon\Data\Vehicles\Helicopters\myr_adds.paa","\Myrmidon\Data\Vehicles\Helicopters\myr_cougar_one_co.paa","\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_light_co.paa"};
		hiddenSelectionsMaterials[] = {"\lxrf\air_rf\heli_medium_ec\data\as332_exterior_glossy.rvmat","\lxrf\air_rf\heli_medium_ec\data\as332_int_cargo.rvmat"};
		hiddenSelections[] = {"camo1","camo2","pip_screen","camo4","camoWreckExt","camoWreckInt"};
        textureList[] = {"Myr_Cougar_One",1};
        animationList[] = {"hide_engfilters_01",1,"hide_engfilters_02",0,"hide_chin_plate",0,"hide_chin_glass",1,"hide_cm_dispenser",0,"hide_ceiling_blanket",0,"hide_ir_small",1,"hide_ir_large",0};
    };
};
