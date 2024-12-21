class CfgPatches
{
	class Myr_uniforms
	{
		name = "Myr Uniforms";
		author = "Panda & Biwwy";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] =
			{
				"Myr_Uniform_Base",
				"Myr_Blue_Long",
				"Myr_Blue_Rolled",
				"Myr_Grey_Long",
				"Myr_Grey_Rolled",
				"Myr_Grey_Woodland_Long",
				"Myr_Grey_Desert_Long",
				"Myr_Grey_Woodland_Rolled",
				"Myr_Grey_Desert_Rolled",
				"Myr_Woodland_Long",
				"Myr_Desert_Long",
				"Myr_Woodland_Rolled",
				"Myr_Desert_Rolled",
				"Myr_Pcu_Nkamo1",
				"Myr_Pcu_Nkamo2",
				"Myr_Pcu_TanBlk",
				"Myr_Pcu_BlkTan",
				"Myr_Pcu_Medic",
				"Myr_Flannel_Black",
				"Myr_Flannel_White",
				"Myr_Flannel_White_Two",
				"Myr_Flannel_Red",
				"Myr_Flannel_Blue",
				"Myr_Flannel_Green",
				"Myr_Flannel_Teal",
				"Myr_Flannel_Orange",
				"Myr_Flannel_Purple",
				"Myr_RolledFlannel_White",
				"Myr_Shorts_Scrut",
				"Myr_Shorts_Pt",
				"Myr_Pilot_Coveralls",
				};
		weapons[] =
			{
				"Myr_Base_Uniform",
				"Myr_Grey_Long",
				"Myr_Grey_Rolled",
				"Myr_Grey_Woodland_Long",
				"Myr_Grey_Desert_Long",
				"Myr_Grey_Woodland_Rolled",
				"Myr_Grey_Desert_Rolled",
				"Myr_Woodland_Long",
				"Myr_Desert_Long",
				"Myr_Woodland_Rolled",
				"Myr_Desert_Rolled",
				"Myr_Pcu_Nkamo1",
				"Myr_Pcu_Nkamo2",
				"Myr_Pcu_TanBlk",
				"Myr_Pcu_BlkTan",
				"Myr_Pcu_Medic",
				"Myr_Flannel_Black",
				"Myr_Flannel_White",
				"Myr_Flannel_White_Two",
				"Myr_Flannel_Red",
				"Myr_Flannel_Blue",
				"Myr_Flannel_Green",
				"Myr_Flannel_Teal",
				"Myr_Flannel_Orange",
				"Myr_Flannel_Purple",
				"Myr_RolledFlannel_White",
				"Myr_Shorts_Scrut",
				"Myr_Shorts_Pt",
				"Myr_Pilot_Coveralls",
				};
	};
};

class CfgWeapons
{
	class UniformItem;
	class U_I_CombatUniform;
	class Myr_Base_Uniform : U_I_CombatUniform
	{
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		author = "Panda & Biwwy";
		displayName = "Myr_Base_Uniform";
		picture = "\Myrmidon\myrarsenal.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "Myr_Uniform_Base";
			containerClass = "Supply50";
			mass = 40;
		};
	};
	class Myr_Blue_Long : Myr_Base_Uniform
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[Myr] Combat Uniform (Blue)";
		author = "Panda & Biwwy";
		picture = "\Myrmidon\myrarsenal.paa";
		class ItemInfo : UniformItem
		{
			uniformModel = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
			uniformClass = "Myr_Blue_Long";
			containerClass = "Supply100";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class Myr_Blue_Rolled : Myr_Base_Uniform
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[Myr] Combat Uniform (Blue, Rolled)";
		author = "Panda & Biwwy";
		picture = "\Myrmidon\myrarsenal.paa";
		class ItemInfo : UniformItem
		{
			uniformModel = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";
			uniformClass = "Myr_Blue_Rolled";
			containerClass = "Supply100";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class Myr_Grey_Long : Myr_Base_Uniform
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[Myr] Combat Uniform (Grey)";
		author = "Panda & Biwwy";
		picture = "\Myrmidon\myrarsenal.paa";
		class ItemInfo : UniformItem
		{
			uniformModel = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
			uniformClass = "Myr_Grey_Long";
			containerClass = "Supply100";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class Myr_Grey_Rolled : Myr_Base_Uniform
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[Myr] Combat Uniform (Grey, Rolled)";
		author = "Panda & Biwwy";
		picture = "\Myrmidon\myrarsenal.paa";
		class ItemInfo : UniformItem
		{
			uniformModel = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";
			uniformClass = "Myr_Grey_Rolled";
			containerClass = "Supply100";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class Myr_Grey_Woodland_Long : Myr_Base_Uniform
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[Myr] Combat Uniform (Grey/Woodland)";
		author = "Panda & Biwwy";
		picture = "\Myrmidon\myrarsenal.paa";
		class ItemInfo : UniformItem
		{
			uniformModel = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
			uniformClass = "Myr_Grey_Woodland_Long";
			containerClass = "Supply100";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class Myr_Grey_Desert_Long : Myr_Base_Uniform
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[Myr] Combat Uniform (Grey/Desert)";
		author = "Panda & Biwwy";
		picture = "\Myrmidon\myrarsenal.paa";
		class ItemInfo : UniformItem
		{
			uniformModel = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
			uniformClass = "Myr_Grey_Desert_Long";
			containerClass = "Supply100";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class Myr_Grey_Woodland_Rolled : Myr_Base_Uniform
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[Myr] Combat Uniform (Grey/Woodland, Rolled)";
		author = "Panda & Biwwy";
		picture = "\Myrmidon\myrarsenal.paa";
		class ItemInfo : UniformItem
		{
			uniformModel = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";
			uniformClass = "Myr_Grey_Woodland_Rolled";
			containerClass = "Supply100";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class Myr_Grey_Desert_Rolled : Myr_Base_Uniform
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[Myr] Combat Uniform (Grey/Desert, Rolled)";
		author = "Panda & Biwwy";
		picture = "\Myrmidon\myrarsenal.paa";
		class ItemInfo : UniformItem
		{
			uniformModel = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";
			uniformClass = "Myr_Grey_Desert_Rolled";
			containerClass = "Supply100";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class Myr_Woodland_Long : Myr_Base_Uniform
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[Myr] Combat Uniform (Woodland)";
		author = "Panda & Biwwy";
		picture = "\Myrmidon\myrarsenal.paa";
		class ItemInfo : UniformItem
		{
			uniformModel = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
			uniformClass = "Myr_Woodland_Long";
			containerClass = "Supply100";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class Myr_Woodland_Rolled : Myr_Base_Uniform
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[Myr] Combat Uniform (Woodland, Rolled)";
		author = "Panda & Biwwy";
		picture = "\Myrmidon\myrarsenal.paa";
		class ItemInfo : UniformItem
		{
			uniformModel = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";
			uniformClass = "Myr_Woodland_Rolled";
			containerClass = "Supply100";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class Myr_Desert_Long : Myr_Base_Uniform
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[Myr] Combat Uniform (Desert)";
		author = "Panda & Biwwy";
		picture = "\Myrmidon\myrarsenal.paa";
		class ItemInfo : UniformItem
		{
			uniformModel = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
			uniformClass = "Myr_Desert_Long";
			containerClass = "Supply100";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class Myr_Desert_Rolled : Myr_Base_Uniform
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[Myr] Combat Uniform (Desert, Rolled)";
		author = "Panda & Biwwy";
		picture = "\Myrmidon\myrarsenal.paa";
		class ItemInfo : UniformItem
		{
			uniformModel = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";
			uniformClass = "Myr_Desert_Rolled";
			containerClass = "Supply100";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class Myr_Pcu_Nkamo1 : Myr_Base_Uniform
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[Myr] PCU (Woodland)";
		author = "Panda & Biwwy";
		picture = "\Myrmidon\myrarsenal.paa";
		class ItemInfo : UniformItem
		{
			uniformModel = "\Myrmidon\Data\Uniforms\Models\cpcu.p3d";
			uniformClass = "Myr_Pcu_Nkamo1";
			containerClass = "Supply100";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class Myr_Pcu_Nkamo2 : Myr_Base_Uniform
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[Myr] PCU (Desert)";
		author = "Panda & Biwwy";
		picture = "\Myrmidon\myrarsenal.paa";
		class ItemInfo : UniformItem
		{
			uniformModel = "\Myrmidon\Data\Uniforms\Models\cpcu.p3d";
			uniformClass = "Myr_Pcu_Nkamo2";
			containerClass = "Supply100";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class Myr_Pcu_TanBlk : Myr_Base_Uniform
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[Myr] PCU (Tan)";
		author = "Panda & Biwwy";
		picture = "\Myrmidon\myrarsenal.paa";
		class ItemInfo : UniformItem
		{
			uniformModel = "\Myrmidon\Data\Uniforms\Models\cpcu.p3d";
			uniformClass = "Myr_Pcu_TanBlk";
			containerClass = "Supply100";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class Myr_Pcu_BlkTan : Myr_Base_Uniform
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[Myr] PCU (Black)";
		author = "Panda & Biwwy";
		picture = "\Myrmidon\myrarsenal.paa";
		class ItemInfo : UniformItem
		{
			uniformModel = "\Myrmidon\Data\Uniforms\Models\cpcu.p3d";
			uniformClass = "Myr_Pcu_BlkTan";
			containerClass = "Supply100";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class Myr_Pcu_Medic : Myr_Base_Uniform
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[Myr] PCU (Medic)";
		author = "Panda & Biwwy";
		picture = "\Myrmidon\myrarsenal.paa";
		class ItemInfo : UniformItem
		{
			uniformModel = "\Myrmidon\Data\Uniforms\Models\cpcu.p3d";
			uniformClass = "Myr_Pcu_Medic";
			containerClass = "Supply100";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class Myr_Pcu_Biwwy : Myr_Base_Uniform
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[Myr] Uniforn (Biwwy)";
		author = "Panda & Biwwy";
		picture = "\Myrmidon\myrarsenal.paa";
		class ItemInfo : UniformItem
		{
			uniformModel = "\Myrmidon\Data\Uniforms\Models\cpcu.p3d";
			uniformClass = "Myr_Pcu_Biwwy";
			containerClass = "Supply100";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class Myr_Flannel_Black : Myr_Base_Uniform
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[Myr] Flannel (Black)";
		author = "Panda & Biwwy";
		picture = "\Myrmidon\myrarsenal.paa";
		class ItemInfo : UniformItem
		{
			uniformModel = "\Myrmidon\Data\Uniforms\Models\cargo.p3d";
			uniformClass = "Myr_Flannel_Black";
			containerClass = "Supply100";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class Myr_Flannel_White : Myr_Base_Uniform
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[Myr] Flannel (White Check)";
		author = "Panda & Biwwy";
		picture = "\Myrmidon\myrarsenal.paa";
		class ItemInfo : UniformItem
		{
			uniformModel = "\Myrmidon\Data\Uniforms\Models\cargo.p3d";
			uniformClass = "Myr_Flannel_White";
			containerClass = "Supply100";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class Myr_Flannel_White_Two : Myr_Base_Uniform
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[Myr] Flannel (White)";
		author = "Panda & Biwwy";
		picture = "\Myrmidon\myrarsenal.paa";
		class ItemInfo : UniformItem
		{
			uniformModel = "\Myrmidon\Data\Uniforms\Models\cargo.p3d";
			uniformClass = "Myr_Flannel_White_Two";
			containerClass = "Supply100";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class Myr_Flannel_Red : Myr_Base_Uniform
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[Myr] Flannel (Red Check)";
		author = "Panda & Biwwy";
		picture = "\Myrmidon\myrarsenal.paa";
		class ItemInfo : UniformItem
		{
			uniformModel = "\Myrmidon\Data\Uniforms\Models\cargo.p3d";
			uniformClass = "Myr_Flannel_Red";
			containerClass = "Supply100";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class Myr_Flannel_Blue : Myr_Base_Uniform
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[Myr] Flannel (Blue Check)";
		author = "Panda & Biwwy";
		picture = "\Myrmidon\myrarsenal.paa";
		class ItemInfo : UniformItem
		{
			uniformModel = "\Myrmidon\Data\Uniforms\Models\cargo.p3d";
			uniformClass = "Myr_Flannel_Blue";
			containerClass = "Supply100";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class Myr_Flannel_Green : Myr_Base_Uniform
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[Myr] Flannel (Green Check)";
		author = "Panda & Biwwy";
		picture = "\Myrmidon\myrarsenal.paa";
		class ItemInfo : UniformItem
		{
			uniformModel = "\Myrmidon\Data\Uniforms\Models\cargo.p3d";
			uniformClass = "Myr_Flannel_Green";
			containerClass = "Supply100";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class Myr_Flannel_Teal : Myr_Base_Uniform
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[Myr] Flannel (Teal Check)";
		author = "Panda & Biwwy";
		picture = "\Myrmidon\myrarsenal.paa";
		class ItemInfo : UniformItem
		{
			uniformModel = "\Myrmidon\Data\Uniforms\Models\cargo.p3d";
			uniformClass = "Myr_Flannel_Teal";
			containerClass = "Supply100";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class Myr_Flannel_Orange : Myr_Base_Uniform
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[Myr] Flannel (Orange Check)";
		author = "Panda & Biwwy";
		picture = "\Myrmidon\myrarsenal.paa";
		class ItemInfo : UniformItem
		{
			uniformModel = "\Myrmidon\Data\Uniforms\Models\cargo.p3d";
			uniformClass = "Myr_Flannel_Orange";
			containerClass = "Supply100";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class Myr_Flannel_Purple : Myr_Base_Uniform
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[Myr] Flannel (Purple Check)";
		author = "Panda & Biwwy";
		picture = "\Myrmidon\myrarsenal.paa";
		class ItemInfo : UniformItem
		{
			uniformModel = "\Myrmidon\Data\Uniforms\Models\cargo.p3d";
			uniformClass = "Myr_Flannel_Purple";
			containerClass = "Supply100";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	/*class Myr_RolledFlannel_White : Myr_Base_Uniform
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[Myr] Rolled Flannel (White)";
		author = "Panda & Biwwy";
		picture = "\Myrmidon\myrarsenal.paa";
		class ItemInfo : UniformItem
		{
			uniformModel = "\Myrmidon\Data\Uniforms\Models\rolledcargo.p3d";
			uniformClass = "Myr_RolledFlannel_White";
			containerClass = "Supply100";
			mass = 40;
			uniformType = "Neopren";
		};
	};*/
	class Myr_Shorts_Scrut : Myr_Base_Uniform
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[Myr] Uniform (Scrut)";
		author = "Panda & Biwwy";
		picture = "\Myrmidon\myrarsenal.paa";
		class ItemInfo : UniformItem
		{
			uniformModel = "\Myrmidon\Data\Uniforms\Models\shorts.p3d";
			uniformClass = "Myr_Shorts_Scrut";
			containerClass = "Supply100";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class Myr_Shorts_Pt : Myr_Base_Uniform
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[Myr] Shorts (PT)";
		author = "Panda & Biwwy";
		picture = "\Myrmidon\myrarsenal.paa";
		class ItemInfo : UniformItem
		{
			uniformModel = "\Myrmidon\Data\Uniforms\Models\pt.p3d";
			uniformClass = "Myr_Shorts_Pt";
			containerClass = "Supply100";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class Myr_Pilot_Coveralls : Myr_Base_Uniform
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[Myr] Pilot Coveralls";
		author = "Panda & Biwwy";
		picture = "\Myrmidon\myrarsenal.paa";
		class ItemInfo : UniformItem
		{
			uniformModel = "\a3\Characters_F_Enoch\Uniforms\I_E_Coveralls_01_F.p3d";
			uniformClass = "Myr_Pilot_Coveralls";
			containerClass = "Supply100";
			mass = 40;
			uniformType = "Neopren";
		};
	};
};

//----------------------------------------------------------------
//----------------------------------------------------------------
//----------------------------------------------------------------
//----------------------------------------------------------------

class UniformSlotInfo;
class CfgVehicles
{
	class SoldierWB;
	class Myr_Soldier_f : SoldierWB
	{
		/*class HitPoints
		{
			class HitFace;
			class HitNeck;
			class HitHead;
			class HitPelvis;
			class HitAbdomen;
			class HitDiaphragm;
			class HitChest;
			class HitBody;
			class HitArms;
			class HitHands;
			class HitLegs;
		};*/
	};
	class Myr_Soldier_ff : Myr_Soldier_f
	{
		/*class HitPoints : HitPoints
		{
			class HitNeck : HitNeck
			{
				armor = 4;
			};
			class HitPelvis : HitPelvis
			{
				armor = 8;
			};
			class HitAbdomen : HitAbdomen
			{
				armor = 4;
			};
			class HitDiaphragm : HitDiaphragm
			{
				armor = 4;
			};
			class HitChest : HitChest
			{
				armor = 4;
			};
			class HitArms : HitArms
			{
				armor = 6;
			};
			class HitHands : HitHands
			{
				armor = 6;
			};
			class HitLegs : HitLegs
			{
				armor = 6;
			};
		};*/
	};
	class Myr_Uniform_Base : Myr_Soldier_ff
	{
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		displayName = "Myr_Uniform_Base";
		faction = "Myr_Faction";
		author = "Panda & Biwwy";
		weapons[] = {"Throw", "Put"};
		respawnWeapons[] = {"Throw", "Put"};
		Items[] = {};
		RespawnItems[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		uniformClass = "Myr_Base_Uniform";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\Myrmidon\Data\Uniforms\myrgrey.paa"};
		class EventHandlers;
		/*class HitPoints
		{
			class HitFace
			{
				armor = 7;
				material = -1;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
				explosionShielding = 0.3;
				minimalHit = 0.01;
			};
			class HitNeck : HitFace
			{
				armor = 7;
				material = -1;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitHead : HitNeck
			{
				armor = 7;
				material = -1;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis
			{
				armor = 8;
				material = -1;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				explosionShielding = 0.3;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitAbdomen : HitPelvis
			{
				armor = 8;
				material = -1;
				name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				explosionShielding = 0.3;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm : HitAbdomen
			{
				armor = 8;
				material = -1;
				name = "spine2";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 0.45;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest : HitDiaphragm
			{
				armor = 8;
				material = -1;
				name = "spine3";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 0.45;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody : HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 0.8;
				radius = 0;
				explosionShielding = 0.45;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms : HitBody
			{
				armor = 8;
				material = -1;
				name = "arms";
				passThrough = 0.8;
				radius = 0.1;
				explosionShielding = 0.5;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitHands : HitArms
			{
				armor = 8;
				material = -1;
				name = "hands";
				passThrough = 0.8;
				radius = 0.1;
				explosionShielding = 0.5;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class HitLegs : HitHands
			{
				armor = 8;
				material = -1;
				name = "legs";
				passThrough = 0.8;
				radius = 0.14;
				explosionShielding = 0.5;
				visual = "injury_legs";
				minimalHit = 0.01;
				depends = "0";
			};
			class Incapacitated : HitLegs
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 0.1;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor = 8;
				material = -1;
				name = "hand_l";
				passThrough = 0.9;
				radius = 0.08;
				explosionShielding = 0.3;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitRightArm : HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 6;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
			class HitRightLeg : HitLeftLeg
			{
				name = "leg_r";
			};
			class ACE_HDBracket
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0;
				radius = 1;
				explosionShielding = 0.1;
				visual = "";
				minimalHit = 0;
				depends = "HitHead";
			};
		};*/
		armor = 3;
		armorStructural = 5;
		explosionShielding = 0.5;
		minTotalDamageThreshold = 0.001;
		impactDamageMultiplier = 0.5;
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat", "A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat", "A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat", "A3\Characters_F\Common\Data\basicbody.rvmat", "A3\Characters_F\Common\Data\basicbody_injury.rvmat", "A3\Characters_F\Common\Data\basicbody_injury.rvmat", "a3\characters_f\heads\data\hl_white.rvmat", "a3\characters_f\heads\data\hl_white_injury.rvmat", "a3\characters_f\heads\data\hl_white_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_old.rvmat", "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat", "A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat", "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat", "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat", "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat", "A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat", "A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat", "A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"};
		};
	};
	class Myr_Blue_Long : Myr_Uniform_Base
	{
		dlc = "Myr";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Panda & Biwwy";
		uniformClass = "Myr_Blue_Long";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\Myrmidon\Data\Uniforms\myrblue.paa"};
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
	};
	class Myr_Blue_Rolled : Myr_Uniform_Base
	{
		dlc = "Myr";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Panda & Biwwy";
		uniformClass = "Myr_Blue_Rolled";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\Myrmidon\Data\Uniforms\myrblue.paa"};
		model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";
	};
	class Myr_Grey_Long : Myr_Uniform_Base
	{
		dlc = "Myr";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Panda & Biwwy";
		uniformClass = "Myr_Grey_Long";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\Myrmidon\Data\Uniforms\myrgrey.paa"};
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
	};
	class Myr_Grey_Rolled : Myr_Uniform_Base
	{
		dlc = "Myr";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Panda & Biwwy";
		uniformClass = "Myr_Grey_Rolled";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\Myrmidon\Data\Uniforms\myrgrey.paa"};
		model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";
	};
	class Myr_Grey_Woodland_Long : Myr_Uniform_Base
	{
		dlc = "Myr";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Panda & Biwwy";
		uniformClass = "Myr_Grey_Woodland_Long";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\Myrmidon\Data\Uniforms\myrnkamow.paa"};
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
	};
	class Myr_Grey_Desert_Long : Myr_Uniform_Base
	{
		dlc = "Myr";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Panda & Biwwy";
		uniformClass = "Myr_Grey_Desert_Long";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\Myrmidon\Data\Uniforms\myrnkamod.paa"};
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
	};
	class Myr_Grey_Woodland_Rolled : Myr_Uniform_Base
	{
		dlc = "Myr";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Panda & Biwwy";
		uniformClass = "Myr_Grey_Woodland_Rolled";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\Myrmidon\Data\Uniforms\myrnkamow.paa"};
		model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";
	};
	class Myr_Grey_Desert_Rolled : Myr_Uniform_Base
	{
		dlc = "Myr";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Panda & Biwwy";
		uniformClass = "Myr_Grey_Desert_Rolled";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\Myrmidon\Data\Uniforms\myrnkamod.paa"};
		model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";
	};
	class Myr_Woodland_Long : Myr_Uniform_Base
	{
		dlc = "Myr";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Panda & Biwwy";
		uniformClass = "Myr_Woodland_Long";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\Myrmidon\Data\Uniforms\myrnkamowd.paa"};
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
	};
	class Myr_Woodland_Rolled : Myr_Uniform_Base
	{
		dlc = "Myr";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Panda & Biwwy";
		uniformClass = "Myr_Woodland_Rolled";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\Myrmidon\Data\Uniforms\myrnkamowd.paa"};
		model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";
	};
	class Myr_Desert_Long : Myr_Uniform_Base
	{
		dlc = "Myr";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Panda & Biwwy";
		uniformClass = "Myr_Desert_Long";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\Myrmidon\Data\Uniforms\myrnkamodd.paa"};
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
	};
	class Myr_Desert_Rolled : Myr_Uniform_Base
	{
		dlc = "Myr";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Panda & Biwwy";
		uniformClass = "Myr_Desert_Rolled";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\Myrmidon\Data\Uniforms\myrnkamodd.paa"};
		model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";
	};
	class Myr_Pcu_Nkamo1 : Myr_Uniform_Base
	{
		dlc = "Myr";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Panda & Biwwy";
		uniformClass = "Myr_Pcu_Nkamo1";
		hiddenSelections[] = {"Camo1","Camo2","Camo","insignia"};
		hiddenSelectionsTextures[] = {"\Myrmidon\Data\Uniforms\pcu_black_co.paa","\Myrmidon\Data\Uniforms\cargoPants_beige_co.paa","\Myrmidon\Data\Uniforms\hikingboots_low_beige_co.paa"};
		model = "\Myrmidon\Data\Uniforms\Models\cpcu.p3d";
	};
	class Myr_Pcu_Nkamo2 : Myr_Uniform_Base
	{
		dlc = "Myr";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Panda & Biwwy";
		uniformClass = "Myr_Pcu_Nkamo2";
		hiddenSelections[] = {"Camo1","Camo2","Camo","insignia"};
		hiddenSelectionsTextures[] = {"\Myrmidon\Data\Uniforms\pcu_black_co.paa","\Myrmidon\Data\Uniforms\cargoPants_beige_co.paa","\Myrmidon\Data\Uniforms\hikingboots_low_beige_co.paa"};
		model = "\Myrmidon\Data\Uniforms\Models\cpcu.p3d";
	};
	class Myr_Pcu_TanBlk : Myr_Uniform_Base
	{
		dlc = "Myr";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Panda & Biwwy";
		uniformClass = "Myr_Pcu_TanBlk";
		hiddenSelections[] = {"Camo1","Camo2","Camo","insignia"};
		hiddenSelectionsTextures[] = {"\Myrmidon\Data\Uniforms\pcu_brown_co.paa","\Myrmidon\Data\Uniforms\cargoPants_black_co.paa","\Myrmidon\Data\Uniforms\hikingboots_low_beige_co.paa"};
		model = "\Myrmidon\Data\Uniforms\Models\cpcu.p3d";
	};
	class Myr_Pcu_BlkTan : Myr_Uniform_Base
	{
		dlc = "Myr";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Panda & Biwwy";
		uniformClass = "Myr_Pcu_BlkTan";
		hiddenSelections[] = {"Camo1","Camo2","Camo","insignia"};
		hiddenSelectionsTextures[] = {"\Myrmidon\Data\Uniforms\pcu_black_co.paa","\Myrmidon\Data\Uniforms\cargoPants_beige_co.paa","\Myrmidon\Data\Uniforms\hikingboots_low_beige_co.paa"};
		model = "\Myrmidon\Data\Uniforms\Models\cpcu.p3d";
	};
	class Myr_Pcu_Medic : Myr_Uniform_Base
	{
		dlc = "Myr";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Panda & Biwwy";
		uniformClass = "Myr_Pcu_Medic";
		hiddenSelections[] = {"Camo1","Camo2","Camo","insignia"};
		hiddenSelectionsTextures[] = {"\Myrmidon\Data\Uniforms\pcu_black_medic_co.paa","\Myrmidon\Data\Uniforms\cargoPants_beige_co.paa","\Myrmidon\Data\Uniforms\hikingboots_low_beige_co.paa"};
		model = "\Myrmidon\Data\Uniforms\Models\cpcu.p3d";
	};
	class Myr_Pcu_Biwwy : Myr_Uniform_Base
	{
		dlc = "Myr";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Panda & Biwwy";
		uniformClass = "Myr_Pcu_Biwwy";
		hiddenSelections[] = {"Camo1","Camo2","Camo","insignia"};
		hiddenSelectionsTextures[] = {"\Myrmidon\Data\Uniforms\pcu_biwwy_co.paa","\Myrmidon\Data\Uniforms\cargoPants_black_co.paa","\Myrmidon\Data\Uniforms\hikingboots_low_beige_co.paa"};
		model = "\Myrmidon\Data\Uniforms\Models\cpcu.p3d";
	};
	class Myr_Flannel_Black : Myr_Uniform_Base
	{
		dlc = "Myr";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Panda & Biwwy";
		uniformClass = "Myr_Flannel_Black";
		hiddenSelections[] = {"Camo1","Camo2","Camo","insignia"};
		hiddenSelectionsTextures[] = {"\Myrmidon\Data\Uniforms\shirt_plainBlack_co.paa","\Myrmidon\Data\Uniforms\cargopants_beige_co.paa","\Myrmidon\Data\Uniforms\hikingboots_low_beige_co.paa"};
		model = "\Myrmidon\Data\Uniforms\Models\cargo.p3d";
	};
	class Myr_Flannel_White : Myr_Uniform_Base
	{
		dlc = "Myr";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Panda & Biwwy";
		uniformClass = "Myr_Flannel_White";
		hiddenSelections[] = {"Camo1","Camo2","Camo","insignia"};
		hiddenSelectionsTextures[] = {"\Myrmidon\Data\Uniforms\shirt_checkWhite_co.paa","\Myrmidon\Data\Uniforms\cargopants_beige_co.paa","\Myrmidon\Data\Uniforms\hikingboots_low_beige_co.paa"};
		model = "\Myrmidon\Data\Uniforms\Models\cargo.p3d";
	};
	class Myr_Flannel_White_Two : Myr_Uniform_Base
	{
		dlc = "Myr";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Panda & Biwwy";
		uniformClass = "Myr_Flannel_White_Two";
		hiddenSelections[] = {"Camo1","Camo2","Camo","insignia"};
		hiddenSelectionsTextures[] = {"\Myrmidon\Data\Uniforms\shirt_White_co.paa","\Myrmidon\Data\Uniforms\cargopants_beige_co.paa","\Myrmidon\Data\Uniforms\hikingboots_low_beige_co.paa"};
		model = "\Myrmidon\Data\Uniforms\Models\cargo.p3d";
	};
	class Myr_Flannel_Red : Myr_Uniform_Base
	{
		dlc = "Myr";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Panda & Biwwy";
		uniformClass = "Myr_Flannel_Red";
		hiddenSelections[] = {"Camo1","Camo2","Camo","insignia"};
		hiddenSelectionsTextures[] = {"\Myrmidon\Data\Uniforms\shirt_checkRed_co.paa","\Myrmidon\Data\Uniforms\cargopants_beige_co.paa","\Myrmidon\Data\Uniforms\hikingboots_low_beige_co.paa"};
		model = "\Myrmidon\Data\Uniforms\Models\cargo.p3d";
	};
	class Myr_Flannel_Blue : Myr_Uniform_Base
	{
		dlc = "Myr";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Panda & Biwwy";
		uniformClass = "Myr_Flannel_Blue";
		hiddenSelections[] = {"Camo1","Camo2","Camo","insignia"};
		hiddenSelectionsTextures[] = {"\Myrmidon\Data\Uniforms\shirt_checkBlue_co.paa","\Myrmidon\Data\Uniforms\cargopants_beige_co.paa","\Myrmidon\Data\Uniforms\hikingboots_low_beige_co.paa"};
		model = "\Myrmidon\Data\Uniforms\Models\cargo.p3d";
	};
	class Myr_Flannel_Green : Myr_Uniform_Base
	{
		dlc = "Myr";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Panda & Biwwy";
		uniformClass = "Myr_Flannel_Green";
		hiddenSelections[] = {"Camo1","Camo2","Camo","insignia"};
		hiddenSelectionsTextures[] = {"\Myrmidon\Data\Uniforms\shirt_checkGreen_co.paa","\Myrmidon\Data\Uniforms\cargopants_beige_co.paa","\Myrmidon\Data\Uniforms\hikingboots_low_beige_co.paa"};
		model = "\Myrmidon\Data\Uniforms\Models\cargo.p3d";
	};
	class Myr_Flannel_Teal : Myr_Uniform_Base
	{
		dlc = "Myr";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Panda & Biwwy";
		uniformClass = "Myr_Flannel_Teal";
		hiddenSelections[] = {"Camo1","Camo2","Camo","insignia"};
		hiddenSelectionsTextures[] = {"\Myrmidon\Data\Uniforms\shirt_checkTeal2_co.paa","\Myrmidon\Data\Uniforms\cargopants_beige_co.paa","\Myrmidon\Data\Uniforms\hikingboots_low_beige_co.paa"};
		model = "\Myrmidon\Data\Uniforms\Models\cargo.p3d";
	};
	class Myr_Flannel_Orange : Myr_Uniform_Base
	{
		dlc = "Myr";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Panda & Biwwy";
		uniformClass = "Myr_Flannel_Orange";
		hiddenSelections[] = {"Camo1","Camo2","Camo","insignia"};
		hiddenSelectionsTextures[] = {"\Myrmidon\Data\Uniforms\shirt_checkOrange_co.paa","\Myrmidon\Data\Uniforms\cargopants_beige_co.paa","\Myrmidon\Data\Uniforms\hikingboots_low_beige_co.paa"};
		model = "\Myrmidon\Data\Uniforms\Models\cargo.p3d";
	};
	class Myr_Flannel_Purple : Myr_Uniform_Base
	{
		dlc = "Myr";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Panda & Biwwy";
		uniformClass = "Myr_Flannel_Purple";
		hiddenSelections[] = {"Camo1","Camo2","Camo","insignia"};
		hiddenSelectionsTextures[] = {"\Myrmidon\Data\Uniforms\shirt_checkPurple_co.paa","\Myrmidon\Data\Uniforms\cargopants_beige_co.paa","\Myrmidon\Data\Uniforms\hikingboots_low_beige_co.paa"};
		model = "\Myrmidon\Data\Uniforms\Models\cargo.p3d";
	};
	/*class Myr_RolledFlannel_White : Myr_Uniform_Base
	{
		dlc = "Myr";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Panda & Biwwy";
		uniformClass = "Myr_RolledFlannel_White";
		hiddenSelections[] = {"camo1","camo3","camo4","Camo","insignia"};
		hiddenSelectionsTextures[] = {"\Myrmidon\Data\Uniforms\rolledshirt_co.paa","\Myrmidon\Data\Uniforms\cuff_co.paa","\Myrmidon\Data\Uniforms\cargopants_beige_co.paa","\Myrmidon\Data\Uniforms\hikingboots_low_beige_co.paa"};
		model = "\Myrmidon\Data\Uniforms\Models\rolledcargo.p3d";
	};*/
	class Myr_Shorts_Scrut : Myr_Uniform_Base
	{
		dlc = "Myr";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Panda & Biwwy";
		uniformClass = "Myr_Shorts_Scrut";
		hiddenSelections[] = {"Camo1","Camo2","camo","insignia"};
		hiddenSelectionsTextures[] = {"\Myrmidon\Data\Uniforms\hoodie_grey.paa","\Myrmidon\Data\Uniforms\cargopants_beige_co.paa","\Myrmidon\Data\Uniforms\hikingboots_low_beige_co.paa"};
		model = "\Myrmidon\Data\Uniforms\Models\shorts.p3d";
	};
	class Myr_Shorts_Pt : Myr_Uniform_Base
	{
		dlc = "Myr";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Panda & Biwwy";
		uniformClass = "Myr_Shorts_Pt";
		hiddenSelections[] = {"Camo1","Camo2","camo","insignia"};
		hiddenSelectionsTextures[] = {"\Myrmidon\Data\Uniforms\tshirt_grey_co.paa","\Myrmidon\Data\Uniforms\cargopants_black_co.paa","\Myrmidon\Data\Uniforms\hikingboots_low_beige_co.paa"};
		model = "\Myrmidon\Data\Uniforms\Models\pt.p3d";
	};
	class Myr_Pilot_Coveralls : Myr_Uniform_Base
	{
		dlc = "Myr";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Panda & Biwwy";
		uniformClass = "Myr_Pilot_Coveralls";
		hiddenSelections[] = {"camo1","insignia"};
		hiddenSelectionsTextures[] = {"\Myrmidon\Data\Uniforms\U_Coveralls_green_CO.paa"};
		model = "\a3\Characters_F_Enoch\Uniforms\I_E_Coveralls_01_F.p3d";
	};
};