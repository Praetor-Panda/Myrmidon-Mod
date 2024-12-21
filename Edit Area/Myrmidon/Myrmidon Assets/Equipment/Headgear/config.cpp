class CfgPatches
{
	class myr_headgear
	{
		name = "Myr Headgear";
		author = "Panda & Biwwy";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {
            "Myr_Hat_HP_Standard",
			"Myr_Hat_HP_Reversed",
			"Myr_Beret",
			"Myr_Helmet_Black",
			"Myr_Helmet_Ranger",
			"Myr_Helmet_Tan",
			"Myr_Pilot_Helmet_Up",
			"Myr_Pilot_Helmet_Down",
        };
	};
};

class CfgWeapons
{
	class H_Cap_headphones_ion_lxws;
	class lxWS_H_CapB_rvs_blk_ION;
	class E22_H_Beret_01_JTF_blue_F;
	class HeadgearItem;
	class H_HelmetB;
	class H_PilotHelmetHeli_White_RF;


	class Myr_Hat_HP_Standard: H_Cap_headphones_ion_lxws
	{
		displayName = "[Myr] Hat (Headphones)";
		scope = 2;
        hiddenSelectionsTextures[] = {"\Myrmidon\Data\Headgear\myrhat.paa"};
	};
	class Myr_Hat_HP_Reversed: lxWS_H_CapB_rvs_blk_ION
	{
		displayName = "[Myr] Hat (Headphones/Reversed)";
		scope = 2;
        hiddenSelectionsTextures[] = {"\Myrmidon\Data\Headgear\myrhat.paa"};
	};
	class Myr_Beret: E22_H_Beret_01_JTF_blue_F
	{
		displayName = "[Myr] Beret";
		scope = 2;
        hiddenSelectionsTextures[] = {"\Myrmidon\Data\Headgear\myrberet.paa"};
	};
	class Myr_Helmet_Black: H_HelmetB
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[Myr] Helmet (Grey)";
		model = "Myrmidon\Data\Headgear\Models\tw_exfil.p3d";
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0.15;
		hiddenSelections[] = {"camo","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"Myrmidon\Data\Headgear\tw_exfil_blk_co.paa","Myrmidon\Data\Headgear\tw_shroud_blk_co.paa","Myrmidon\Data\Headgear\hs_m32_co.paa","Myrmidon\Data\Headgear\tw_exfil_velcro_blk_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "Myrmidon\Data\Headgear\Models\tw_exfil.p3d";
			allowedSlots[] = {701,901};
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.5;
			hiddenSelections[] = {"camo","camo1","camo2","camo3"};
			hiddenSelectionsTextures[] = {"Myrmidon\Data\Headgear\tw_exfil_blk_co.paa","Myrmidon\Data\Headgear\tw_shroud_blk_co.paa","Myrmidon\Data\Headgear\hs_m32_co.paa","Myrmidon\Data\Headgear\tw_exfil_velcro_blk_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					Armor = 10;
					passThrough = 0.5;
				};
			};
		};
	};
	class Myr_Helmet_Ranger: H_HelmetB
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[Myr] Helmet (Ranger)";
		model = "Myrmidon\Data\Headgear\Models\tw_exfil.p3d";
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0.15;
		hiddenSelections[] = {"camo","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"Myrmidon\Data\Headgear\tw_exfil_rgr_co.paa","Myrmidon\Data\Headgear\tw_shroud_blk_co.paa","Myrmidon\Data\Headgear\hs_m32_co.paa","Myrmidon\Data\Headgear\tw_exfil_velcro_rgr_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "Myrmidon\Data\Headgear\Models\tw_exfil.p3d";
			allowedSlots[] = {701,901};
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.5;
			hiddenSelections[] = {"camo","camo1","camo2","camo3"};
			hiddenSelectionsTextures[] = {"Myrmidon\Data\Headgear\tw_exfil_rgr_co.paa","Myrmidon\Data\Headgear\tw_shroud_blk_co.paa","Myrmidon\Data\Headgear\hs_m32_co.paa","Myrmidon\Data\Headgear\tw_exfil_velcro_rgr_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					Armor = 10;
					passThrough = 0.5;
				};
			};
		};
	};
	class Myr_Helmet_Tan: H_HelmetB
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[Myr] Helmet (Tan)";
		model = "Myrmidon\Data\Headgear\Models\tw_exfil.p3d";
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0.15;
		hiddenSelections[] = {"camo","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"Myrmidon\Data\Headgear\tw_exfil_cb_co.paa","Myrmidon\Data\Headgear\tw_shroud_cb_co.paa","Myrmidon\Data\Headgear\hs_m32_tan_co.paa","Myrmidon\Data\Headgear\tw_exfil_velcro_cb_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "Myrmidon\Data\Headgear\Models\tw_exfil.p3d";
			allowedSlots[] = {701,901};
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.5;
			hiddenSelections[] = {"camo","camo1","camo2","camo3"};
			hiddenSelectionsTextures[] = {"Myrmidon\Data\Headgear\tw_exfil_cb_co.paa","Myrmidon\Data\Headgear\tw_shroud_cb_co.paa","Myrmidon\Data\Headgear\hs_m32_tan_co.paa","Myrmidon\Data\Headgear\tw_exfil_velcro_cb_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					Armor = 10;
					passThrough = 0.5;
				};
			};
		};
	};
	class Myr_Pilot_Helmet_Down: H_PilotHelmetHeli_White_RF
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[Myr] Pilot Helmet (Visor Down)";
		model = "\lxRF\characters_rf\headgear\civ_helmet_heli_rf.p3d";
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0.15;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\lxRF\characters_rf\headgear\data\civ_helmet_White_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "\lxRF\characters_rf\headgear\civ_helmet_heli_rf.p3d";
			allowedSlots[] = {701,901};
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.5;
			hiddenSelections[] = {"camo","camo1","camo2","camo3"};
			hiddenSelectionsTextures[] = {"\lxRF\characters_rf\headgear\data\civ_helmet_White_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					Armor = 10;
					passThrough = 0.5;
				};
			};
		};
	};
	class Myr_Pilot_Helmet_Up: H_PilotHelmetHeli_White_RF
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[Myr] Pilot Helmet (Visor Up)";
		model = "\lxRF\characters_rf\headgear\civ_helmet_heli_visor_up_rf.p3d";
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0.15;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\lxRF\characters_rf\headgear\data\civ_helmet_White_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "\lxRF\characters_rf\headgear\civ_helmet_heli_visor_up_rf.p3d";
			allowedSlots[] = {701,901};
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.5;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\lxRF\characters_rf\headgear\data\civ_helmet_White_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					Armor = 10;
					passThrough = 0.5;
				};
			};
		};
	};
};