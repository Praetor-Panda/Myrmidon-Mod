class CfgPatches
{
    class Myr_Pickup
    {
        units[] = {"Myr_Pickup","Myr_Pickup_fuel","Myr_Pickup_repair","Myr_Pickup_mmg","Myr_Pickup_hmg","Myr_Pickup_comms","Myr_Pickup_aat",};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {};
    };
};

class CfgVehicles
{
    class B_G_Pickup_rf;
	class B_G_Pickup_fuel_rf;
	class B_G_Pickup_repair_rf;
	class B_T_Pickup_mmg_rf;
	class B_G_Pickup_hmg_rf;
	class B_T_Pickup_Comms_rf;
	class B_T_Pickup_aat_rf;

class Myr_Pickup: B_G_Pickup_rf
	{
		displayName = "Myrmidon Pickup";
		faction= "Myr_Faction";
		vehicleClass = "Pickups";
		side = 2;
		scope = 2;
		scopeCurator = 2;
		crew="Myrmidon_Contractor";
		typicalCargo[]={"Myrmidon_Contractor"};
		hiddenSelectionsTextures[]={"\Myrmidon\Data\Vehicles\Pickup\myrpickupbase.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_aat_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_launcher_co.paa","\Myrmidon\Data\Vehicles\Pickup\myrpickupbox.paa"};
		textureList[] = {};
		animationList[] = {"hide_box_door",1,"hide_sidesteps",0,"hide_bullbar",0,"hide_snorkel",1,"hide_trunk_door",0,"hide_frame",0,"hide_frame_full",1,"hide_Services",1,"hide_fuel_tank",1,"hide_antenna",0,"hide_trunk_cover",1,"hide_armor_window_armor_top",1,"hide_armor_window_armor_R_R",1,"hide_armor_window_armor_R_L",1,"hide_armor_window_armor_front",1,"hide_armor_window_armor_F_L",1,"hide_armor_window_armor_F_R",1};
	};
	class Myr_Pickup_Fuel: B_G_Pickup_fuel_rf
	{
		displayName = "Myrmidon Pickup (Refuel)";
		faction= "Myr_Faction";
		vehicleClass = "MyrPickups";
		side = 2;
		scope = 2;
		scopeCurator = 2;
		crew="Myrmidon_Contractor";
		typicalCargo[]={"Myrmidon_Contractor"};
		hiddenSelectionsTextures[]={"\Myrmidon\Data\Vehicles\Pickup\myrpickupbase.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_aat_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_launcher_co.paa","\Myrmidon\Data\Vehicles\Pickup\myrpickupbox.paa"};
		textureList[] = {};
		animationList[] = {"hide_box_door",1,"hide_sidesteps",0,"hide_bullbar",0,"hide_snorkel",1,"hide_trunk_door",0,"hide_frame",1,"hide_frame_full",1,"hide_Services",1,"hide_police",1,"hide_fuel_tank",0,"hide_antenna",0,"hide_trunk_cover",1,"hide_armor_window_armor_top",1,"hide_armor_window_armor_R_R",1,"hide_armor_window_armor_R_L",1,"hide_armor_window_armor_front",1,"hide_armor_window_armor_F_L",1,"hide_armor_window_armor_F_R",1};
	};
	class Myr_Pickup_repair: B_G_Pickup_repair_rf
	{
		displayName = "Myrmidon Pickup (Repair)";
		faction= "Myr_Faction";
		vehicleClass = "MyrPickups";
		side = 2;
		scope = 2;
		scopeCurator = 2;
		crew="Myrmidon_Contractor";
		typicalCargo[]={"Myrmidon_Contractor"};
		hiddenSelectionsTextures[]={"\Myrmidon\Data\Vehicles\Pickup\myrpickupbase.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_aat_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_launcher_co.paa","\Myrmidon\Data\Vehicles\Pickup\myrpickupbox.paa"};
		textureList[] = {};
		animationList[] = {"hide_box_door",0,"hide_sidesteps",0,"hide_bullbar",0,"hide_snorkel",1,"hide_trunk_door",0,"hide_frame",1,"hide_frame_full",1,"hide_Services",0,"hide_police",1,"hide_fuel_tank",1,"hide_antenna",0,"hide_trunk_cover",1,"hide_armor_window_armor_top",1,"hide_armor_window_armor_R_R",1,"hide_armor_window_armor_R_L",1,"hide_armor_window_armor_front",1,"hide_armor_window_armor_F_L",1,"hide_armor_window_armor_F_R",1};
	};
	class Myr_Pickup_mmg: B_T_Pickup_mmg_rf
	{
		displayName = "Myrmidon Pickup (MMG)";
		faction= "Myr_Faction";
		vehicleClass = "MyrPickups";
		side = 2;
		scope = 2;
		scopeCurator = 2;
		crew="Myrmidon_Contractor";
		typicalCargo[]={"Myrmidon_Contractor"};
		hiddenSelectionsTextures[]={"\Myrmidon\Data\Vehicles\Pickup\myrpickupbase.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_aat_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_launcher_co.paa","\Myrmidon\Data\Vehicles\Pickup\myrpickupbox.paa"};
		textureList[] = {};
		animationList[] = {"hide_box_door",1,"hide_sidesteps",0,"hide_bullbar",0,"hide_snorkel",1,"hide_trunk_door",0,"hide_frame",0,"hide_frame_full",1,"hide_Services",1,"hide_fuel_tank",1,"hide_antenna",0,"hide_trunk_cover",1,"hide_armor_window_armor_top",1,"hide_armor_window_armor_R_R",1,"hide_armor_window_armor_R_L",1,"hide_armor_window_armor_front",1,"hide_armor_window_armor_F_L",1,"hide_armor_window_armor_F_R",1};
	};
	class Myr_Pickup_hmg: B_G_Pickup_hmg_rf
	{
		displayName = "Myrmidon Pickup (HMG)";
		faction= "Myr_Faction";
		vehicleClass = "MyrPickups";
		side = 2;
		scope = 2;
		scopeCurator = 2;
		crew="Myrmidon_Contractor";
		typicalCargo[]={"Myrmidon_Contractor"};
		hiddenSelectionsTextures[]={"\Myrmidon\Data\Vehicles\Pickup\myrpickupbase.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_aat_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_launcher_co.paa","\Myrmidon\Data\Vehicles\Pickup\myrpickupbox.paa"};
		textureList[] = {};
		animationList[] = {"Hide_Rail",0,"Hide_Shield",0,"hide_box_door",1,"hide_sidesteps",0,"hide_bullbar",0,"hide_snorkel",1,"hide_trunk_door",0,"hide_frame",0,"hide_frame_full",0,"hide_Services",1,"hide_fuel_tank",1,"hide_antenna",0,"hide_trunk_cover",1,"hide_armor_window_armor_top",1,"hide_armor_window_armor_R_R",1,"hide_armor_window_armor_R_L",1,"hide_armor_window_armor_front",1,"hide_armor_window_armor_F_L",1,"hide_armor_window_armor_F_R",1};
	};
	class Myr_Pickup_comms: B_T_Pickup_Comms_rf
	{
		displayName = "Myrmidon Pickup (Comms)";
		faction= "Myr_Faction";
		vehicleClass = "MyrPickups";
		side = 2;
		scope = 2;
		scopeCurator = 2;
		crew="Myrmidon_Contractor";
		typicalCargo[]={"Myrmidon_Contractor"};
		hiddenSelectionsTextures[]={"\Myrmidon\Data\Vehicles\Pickup\myrpickupbase.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_aat_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_launcher_co.paa","\Myrmidon\Data\Vehicles\Pickup\myrpickupbox.paa"};
		textureList[] = {};
		animationList[] = {"hide_box_door",0,"hide_sidesteps",0,"hide_bullbar",0,"hide_snorkel",1,"hide_trunk_door",0,"hide_frame",1,"hide_box",0,"hide_frame_full",1,"hide_Services",1,"hide_fuel_tank",1,"hide_antenna",0,"hide_trunk_cover",1,"hide_armor_window_armor_top",1,"hide_armor_window_armor_R_R",1,"hide_armor_window_armor_R_L",1,"hide_armor_window_armor_front",1,"hide_armor_window_armor_F_L",1,"hide_armor_window_armor_F_R",1};
	};
	class Myr_Pickup_aat: B_T_Pickup_aat_rf
	{
		displayName = "Myrmidon Pickup (Anti-Air)";
		faction= "Myr_Faction";
		vehicleClass = "MyrPickups";
		side = 2;
		scope = 2;
		scopeCurator = 2;
		crew="Myrmidon_Contractor";
		typicalCargo[]={"Myrmidon_Contractor"};
		hiddenSelectionsTextures[]={"\Myrmidon\Data\Vehicles\Pickup\myrpickupbase.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_aat_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_launcher_co.paa","\Myrmidon\Data\Vehicles\Pickup\myrpickupbox.paa"};
		textureList[] = {};
		animationList[] = {"hide_box_door",1,"hide_sidesteps",0,"hide_bullbar",0,"hide_snorkel",1,"hide_trunk_door",0,"hide_frame",1,"hide_box",1,"hide_frame_full",1,"hide_Services",1,"hide_fuel_tank",1,"hide_antenna",0,"hide_trunk_cover",1,"hide_armor_window_armor_top",1,"hide_armor_window_armor_R_R",1,"hide_armor_window_armor_R_L",1,"hide_armor_window_armor_front",1,"hide_armor_window_armor_F_L",1,"hide_armor_window_armor_F_R",1};
	};
};
