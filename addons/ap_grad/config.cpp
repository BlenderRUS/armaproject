class CfgPatches
{
	class grad
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"CAData","CACharacters","CACharacters2","CAWeapons","CAWeapons_E","CAAir","CAAir_e"};
		version = 1;
	};
};
class CfgAmmo
{
	class R_GRAD;
	class AP_R_GRAD : R_GRAD
	{
		ACE_DISP = 20;
	};
};
class CfgMagazines
{
	class VehicleMagazine;
	class 40Rnd_GRAD : VehicleMagazine
	{
		ammo = "AP_R_GRAD";
	};
};
class Mode_Burst;
class CfgWeapons
{
	class RocketPods;
	class GRAD : RocketPods
	{
		artilleryDispersion = 10;
		dispersion = 0.5;
		reloadTime = 0.5;
		class Burst : Mode_Burst
		{
			artilleryDispersion = 10;
			displayName = "Burst 10";
			burst = 10;
			reloadTime = 0.5;
			dispersion = 0.5;
		};
		class Burst2 : Burst
		{
			artilleryDispersion = 10;
			displayName = "Burst 20";
			burst = 20;
			reloadTime = 0.5;
			dispersion = 0.5;
		};
		class Burst3 : Burst
		{
			artilleryDispersion = 10;
			displayName = "Burst 40";
			burst = 40;
			reloadTime = 0.5;
			dispersion = 0.5;
		};
		modes[] = {"Burst", "Burst2", "Burst3"};
	};
};