#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class Myr_Aux_Mod
	{
		name = "Myr Aux Mod";
		author = "Bravocado & Panda";
		url = //"https://79th-legion.com/";
		requiredVersion = 0.1;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
	};

};

class Extended_PostInit_EventHandlers
{
	// Adding our uniform guide items to Ace Arsenal
	class default_arsenal_init_event {
		init = "call compile preprocessFileLineNumbers '\Myrmidon\Init\default_loadouts_init.sqf'";
	};
};