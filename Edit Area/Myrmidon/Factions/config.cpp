#include "BIS_AddonInfo.hpp"
class CfgPatches
{
    class Myr_Factions
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {};
    };
};

class CfgFactionClasses
{
    class Myr_Faction
    {

        displayName = "Myrmidon";
        author = "The Director";
        priority = 1;
        side = 2;
    };
    class Myr_Opfor_Faction
	{
		displayName = "Redacted PMC";
		author = "The Director";
		priority = 1;
		side = 0;
	};
};
