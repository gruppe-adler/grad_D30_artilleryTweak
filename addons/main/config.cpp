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
			displayName="Charge 0";		// change original but confusing charge names with those consistent to ACE artillery table
		};
		class Single2: Single1
		{
			displayName="Charge 1";		// change original but confusing charge names with those consistent to ACE artillery table
		};
		class Single3: Single1
		{
			displayName="Charge 2";		// change original but confusing charge names with those consistent to ACE artillery table
		};
		class Single4: Single1
		{
			displayName="Charge 3";		// change original but confusing charge names with those consistent to ACE artillery table
		};
		class Single5: Single1
		{
			displayName="Charge 4";		// change original but confusing charge names with those consistent to ACE artillery table
		};
		class Single6: Single1
		{
			displayName="Charge 5";		// change original but confusing charge names with those consistent to ACE artillery table
		};
	};
};

class Turrets;
class MainTurret;

class CfgVehicles 
{
	class All {};
	class AllVehicles: All {};
	class Land: AllVehicles {};
	class LandVehicle: Land {};
	class StaticWeapon: LandVehicle {};
	class StaticCannon: StaticWeapon {};

	class rhs_D30_base: StaticCannon
	{		
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"rhs_mag_3of56_10",
					"rhs_mag_d462_2"//,
					// "rhs_mag_s463_2",		// magazine with 2x illumination shells
					// "rhs_mag_3of69m_2"		// magazine with 2x laser guided shells
				};
			};
		};
	};
};
