class CfgPatches
{
    class grad_D30_artilleryTweak
    {
        author = "Bernhard aka b-mayr-1984";
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "rhs_c_weapons", "rhs_c_heavyweapons","rhs_sounds"
        };
    };
};

class Mode_SemiAuto;

class CfgWeapons
{
	class Default;

	class CannonCore: Default
	{};

	class mortar_155mm_AMOS: CannonCore
	{};

	class rhs_weap_d30: mortar_155mm_AMOS
	{
		class Single1: Mode_SemiAuto
		{
			artilleryDispersion=3.2;	// 3.2 is from vanilla Sochor; original value was 7.1999998
			reloadTime=6;				// original value was 8
		};
	};
};
