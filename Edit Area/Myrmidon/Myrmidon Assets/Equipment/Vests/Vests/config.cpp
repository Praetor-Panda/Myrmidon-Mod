class CfgPatches
{
	class myr_vests
	{
		name = "Myr Vests";
		author = "Panda & Biwwy";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {
            "Myr_Sand_Standard",
			"Myr_Sand_Light",
			"Myr_Sand_Heavy",
			"Myr_Sand_Combat",
			"Myr_Sand_Command",
			"Myr_Sand_Compact",
			"Myr_Sand_CQB",
			"Myr_Sand_Crew",
			"Myr_Sand_Holster",
			"Myr_Sand_Recon",
			"Myr_Sand_Tactical",
            "Myr_Grey_Standard",
			"Myr_Grey_Light",
			"Myr_Grey_Heavy",
			"Myr_Grey_Combat",
			"Myr_Grey_Command",
			"Myr_Grey_Compact",
			"Myr_Grey_CQB",
			"Myr_Grey_Crew",
			"Myr_Grey_Holster",
			"Myr_Grey_Recon",
			"Myr_Grey_Tactical",
			"Myr_Biwwy_Sand",
			"Myr_Biwwy_Grey",
        };
	};
};

class CfgWeapons
{
	class E22_V_CarrierRigKBT_01_black_F;
	class E22_V_CarrierRigKBT_01_light_black_F;
	class E22_V_CarrierRigKBT_01_heavy_black_F;
	class JCA_MCRP_V_CarrierRigKBT_01_combat_base_F;
	class JCA_MCRP_V_CarrierRigKBT_01_command_base_F;
	class JCA_MCRP_V_CarrierRigKBT_01_compact_base_F;
	class JCA_MCRP_V_CarrierRigKBT_01_CQB_base_F;
	class JCA_MCRP_V_CarrierRigKBT_01_crew_base_F;
	class JCA_MCRP_V_CarrierRigKBT_01_holster_base_F;
	class JCA_MCRP_V_CarrierRigKBT_01_recon_base_F;
	class JCA_MCRP_V_CarrierRigKBT_01_tactical_base_F;

	class Myr_Sand_Standard: E22_V_CarrierRigKBT_01_black_F
	{
		displayName = "[Myr] Standard Vest (Sand)";
		scope = 2;
        hiddenSelectionsTextures[] = {"\Myrmidon\Data\Vests\orca_vest_sand.paa"};
	};
	class Myr_Sand_Light: E22_V_CarrierRigKBT_01_light_black_F
	{
		displayName = "[Myr] Light Vest (Sand)";
		scope = 2;
        hiddenSelectionsTextures[] = {"\Myrmidon\Data\Vests\orca_vest_sand.paa"};
	};
	class Myr_Sand_Heavy: E22_V_CarrierRigKBT_01_heavy_black_F 
	{
		displayName = "[Myr] Heavy Vest (Sand)";
		scope = 2;
        hiddenSelectionsTextures[] = {"\Myrmidon\Data\Vests\orca_vest_sand.paa"};
	};
	class Myr_Sand_Combat: JCA_MCRP_V_CarrierRigKBT_01_combat_base_F
	{
		displayName = "[Myr] Combat Vest (Sand)";
		scope = 2;
        hiddenSelectionsTextures[] = {"\Myrmidon\Data\Vests\orca_vest_sand.paa","\Myrmidon\Data\Vests\nametag.paa","\Myrmidon\Data\Vests\patch.paa"};
	};
	class Myr_Sand_Command: JCA_MCRP_V_CarrierRigKBT_01_command_base_F 
	{
		displayName = "[Myr] Command Vest (Sand)";
		scope = 2;
        hiddenSelectionsTextures[] = {"\Myrmidon\Data\Vests\orca_vest_sand.paa","\Myrmidon\Data\Vests\nametag.paa","\Myrmidon\Data\Vests\patch.paa",""};
	};
	class Myr_Sand_Compact: JCA_MCRP_V_CarrierRigKBT_01_compact_base_F
	{
		displayName = "[Myr] Compact Vest (Sand)";
		scope = 2;
        hiddenSelectionsTextures[] = {"\Myrmidon\Data\Vests\orca_vest_sand.paa","\Myrmidon\Data\Vests\nametag.paa","\Myrmidon\Data\Vests\patch.paa"};
	};
	class Myr_Sand_CQB: JCA_MCRP_V_CarrierRigKBT_01_CQB_base_F
	{
		displayName = "[Myr] CQB Vest (Sand)";
		scope = 2;
        hiddenSelectionsTextures[] = {"\Myrmidon\Data\Vests\orca_vest_sand.paa","\Myrmidon\Data\Vests\nametag.paa","\Myrmidon\Data\Vests\patch.paa"};
	};
	class Myr_Sand_Crew: JCA_MCRP_V_CarrierRigKBT_01_crew_base_F
	{
		displayName = "[Myr] Crew Vest (Sand)";
		scope = 2;
        hiddenSelectionsTextures[] = {"\Myrmidon\Data\Vests\orca_vest_sand.paa","\Myrmidon\Data\Vests\nametag.paa","\Myrmidon\Data\Vests\patch.paa"};
	};
	class Myr_Sand_Holster: JCA_MCRP_V_CarrierRigKBT_01_holster_base_F
	{
		displayName = "[Myr] Holster (Sand)";
		scope = 2;
        hiddenSelectionsTextures[] = {"\Myrmidon\Data\Vests\orca_vest_sand.paa","\Myrmidon\Data\Vests\nametag.paa","\Myrmidon\Data\Vests\patch.paa"};
	};
	class Myr_Sand_Recon: JCA_MCRP_V_CarrierRigKBT_01_recon_base_F
	{
		displayName = "[Myr] Recon Vest (Sand)";
		scope = 2;
        hiddenSelectionsTextures[] = {"\Myrmidon\Data\Vests\orca_vest_sand.paa","\Myrmidon\Data\Vests\nametag.paa","\Myrmidon\Data\Vests\patch.paa"};
	};
	class Myr_Sand_Tactical: JCA_MCRP_V_CarrierRigKBT_01_tactical_base_F
	{
		displayName = "[Myr] Tactical Vest (Sand)";
		scope = 2;
        hiddenSelectionsTextures[] = {"\Myrmidon\Data\Vests\orca_vest_sand.paa","\Myrmidon\Data\Vests\nametag.paa","\Myrmidon\Data\Vests\patch.paa","",""};
	};
		class Myr_Grey_Standard: E22_V_CarrierRigKBT_01_black_F
	{
		displayName = "[Myr] Standard Vest (Grey)";
		scope = 2;
        hiddenSelectionsTextures[] = {"\Myrmidon\Data\Vests\orca_vest_grey.paa"};
	};
	class Myr_Grey_Light: E22_V_CarrierRigKBT_01_light_black_F
	{
		displayName = "[Myr] Light Vest (Grey)";
		scope = 2;
        hiddenSelectionsTextures[] = {"\Myrmidon\Data\Vests\orca_vest_grey.paa"};
	};
	class Myr_Grey_Heavy: E22_V_CarrierRigKBT_01_heavy_black_F 
	{
		displayName = "[Myr] Heavy Vest (Grey)";
		scope = 2;
        hiddenSelectionsTextures[] = {"\Myrmidon\Data\Vests\orca_vest_grey.paa"};
	};
	class Myr_Grey_Combat: JCA_MCRP_V_CarrierRigKBT_01_combat_base_F
	{
		displayName = "[Myr] Combat Vest (Grey)";
		scope = 2;
        hiddenSelectionsTextures[] = {"\Myrmidon\Data\Vests\orca_vest_grey.paa","\Myrmidon\Data\Vests\nametag.paa","\Myrmidon\Data\Vests\patch.paa"};
	};
	class Myr_Grey_Command: JCA_MCRP_V_CarrierRigKBT_01_command_base_F 
	{
		displayName = "[Myr] Command Vest (Grey)";
		scope = 2;
        hiddenSelectionsTextures[] = {"\Myrmidon\Data\Vests\orca_vest_grey.paa","\Myrmidon\Data\Vests\nametag.paa","\Myrmidon\Data\Vests\patch.paa"};
	};
	class Myr_Grey_Compact: JCA_MCRP_V_CarrierRigKBT_01_compact_base_F
	{
		displayName = "[Myr] Compact Vest (Grey)";
		scope = 2;
        hiddenSelectionsTextures[] = {"\Myrmidon\Data\Vests\orca_vest_grey.paa","\Myrmidon\Data\Vests\nametag.paa","\Myrmidon\Data\Vests\patch.paa"};
	};
	class Myr_Grey_CQB: JCA_MCRP_V_CarrierRigKBT_01_CQB_base_F
	{
		displayName = "[Myr] CQB Vest (Grey)";
		scope = 2;
        hiddenSelectionsTextures[] = {"\Myrmidon\Data\Vests\orca_vest_grey.paa","\Myrmidon\Data\Vests\nametag.paa","\Myrmidon\Data\Vests\patch.paa"};
	};
	class Myr_Grey_Crew: JCA_MCRP_V_CarrierRigKBT_01_crew_base_F
	{
		displayName = "[Myr] Crew Vest (Grey)";
		scope = 2;
        hiddenSelectionsTextures[] = {"\Myrmidon\Data\Vests\orca_vest_grey.paa","\Myrmidon\Data\Vests\nametag.paa","\Myrmidon\Data\Vests\patch.paa"};
	};
	class Myr_Grey_Holster: JCA_MCRP_V_CarrierRigKBT_01_holster_base_F
	{
		displayName = "[Myr] Holster (Grey)";
		scope = 2;
        hiddenSelectionsTextures[] = {"\Myrmidon\Data\Vests\orca_vest_grey.paa","\Myrmidon\Data\Vests\nametag.paa","\Myrmidon\Data\Vests\patch.paa"};
	};
	class Myr_Grey_Recon: JCA_MCRP_V_CarrierRigKBT_01_recon_base_F
	{
		displayName = "[Myr] Recon Vest (Grey)";
		scope = 2;
        hiddenSelectionsTextures[] = {"\Myrmidon\Data\Vests\orca_vest_grey.paa","\Myrmidon\Data\Vests\nametag.paa","\Myrmidon\Data\Vests\patch.paa"};
	};
	class Myr_Grey_Tactical: JCA_MCRP_V_CarrierRigKBT_01_tactical_base_F
	{
		displayName = "[Myr] Tactical Vest (Grey)";
		scope = 2;
        hiddenSelectionsTextures[] = {"\Myrmidon\Data\Vests\orca_vest_grey.paa","\Myrmidon\Data\Vests\nametag.paa","\Myrmidon\Data\Vests\patch.paa"};
	};
	class Myr_Biwwy_Sand: JCA_MCRP_V_CarrierRigKBT_01_command_base_F 
	{
		displayName = "[Myr] Custom Vest (Biwwy/Sand)";
		scope = 2;
        hiddenSelectionsTextures[] = {"\Myrmidon\Data\Vests\orca_vest_sand.paa","\Myrmidon\Data\Vests\biwwynametag.paa","\Myrmidon\Data\Vests\patch.paa","\Myrmidon\Data\Insignia\Type_B_Neg_CA.paa"};
	};
	class Myr_Biwwy_Grey: JCA_MCRP_V_CarrierRigKBT_01_command_base_F 
	{
		displayName = "[Myr] Custom Vest (Biwwy/Grey)";
		scope = 2;
        hiddenSelectionsTextures[] = {"\Myrmidon\Data\Vests\orca_vest_grey.paa","\Myrmidon\Data\Vests\biwwynametag.paa","\Myrmidon\Data\Vests\patch.paa","\Myrmidon\Data\Insignia\Type_B_Neg_CA.paa"};
	};
};