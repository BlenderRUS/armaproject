////////////////////////////////////////////////////////////////////
//DeRap: ap_sparty_fix\config.bin
//Produced from mikero's Dos Tools Dll version 6.24
//'now' is Mon Oct 14 21:55:20 2019 : 'file' last modified on Mon Oct 14 20:21:47 2019
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ap_sparty_fix
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
	class AP_R_GRAD: R_GRAD
	{
		ACE_DISP = 20;
	};
	class AP_R_M270: AP_R_GRAD
	{
		ACE_DISP = 16;
	};
};
class CfgMagazines
{
	class VehicleMagazine;
	class 40Rnd_GRAD: VehicleMagazine
	{
		ammo = "AP_R_GRAD";
	};
	class 12Rnd_M270: 40Rnd_GRAD
	{
		ammo = "AP_R_M270";
		hit = 400;
		indirectHit = 75;
		indirectHitRange = 30;
		count = 12;
	};
};
class Mode_Burst;
class CfgWeapons
{
	class RocketPods;
	class GRAD: RocketPods
	{
		magazines[] = {"40Rnd_GRAD"};
		artilleryDispersion = 10;
		dispersion = 0.5;
		reloadTime = 0.5;
		class Burst: Mode_Burst
		{
			artilleryDispersion = 10;
			displayName = "Burst 10";
			burst = 10;
			reloadTime = 0.5;
			dispersion = 0.5;
		};
		class Burst2: Burst
		{
			artilleryDispersion = 10;
			displayName = "Burst 20";
			burst = 20;
			reloadTime = 0.5;
			dispersion = 0.5;
		};
		class Burst3: Burst
		{
			artilleryDispersion = 10;
			displayName = "Burst 40(full)";
			burst = 40;
			reloadTime = 0.5;
			dispersion = 0.5;
		};
		modes[] = {"Burst","Burst2","Burst3"};
	};
	class M270: GRAD
	{
		magazines[] = {"12Rnd_M270"};
		artilleryDispersion = 10;
		dispersion = 0.25;
		reloadTime = 4;
		displayName = "MLRS";
		class Burst: Mode_Burst
		{
			artilleryDispersion = 10;
			displayName = "Burst 3";
			burst = 3;
			reloadTime = 4;
			dispersion = 0.25;
		};
		class Burst2: Burst
		{
			artilleryDispersion = 10;
			displayName = "Burst 6";
			burst = 6;
			reloadTime = 4;
			dispersion = 0.25;
		};
		class Burst3: Burst
		{
			artilleryDispersion = 10;
			displayName = "Burst 12(full)";
			burst = 12;
			reloadTime = 4;
			dispersion = 0.25;
		};
		modes[] = {"Burst","Burst2","Burst3"};
	};
};
class CfgVehicles
{
	class Car;
	class Truck: Car
	{
		class Turrets;
	};
	class Ural_Base_withTurret: Truck
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class GRAD_Base: Ural_Base_withTurret
	{
		vehicleClass = "SPArtillery_AP";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				maxElev = 85;
				minElev = 0;
				maxTurn = 100;
				minTurn = -100;
			};
		};
	};
	class MLRS;
	class MLRS_base: MLRS
	{
		vehicleClass = "SPArtillery_AP";
		scope = 0;
		class Turrets;
	};
	class MLRS_DES_EP1: MLRS_base
	{
		scope = 0;
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class MLRS_Wood: MLRS_DES_EP1
	{
		vehicleClass = "SPArtillery_AP";
		faction = "BIS_US";
		hiddenSelectionsTextures[] = {"\ca\tracked2\us_m270mlrs\data\mlrs_hull_woodland_co.paa"};
		displayName = "$STR_SNAME_M270_G";
		scope = 2;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"M270"};
				magazines[] = {"12Rnd_M270"};
				maxElev = 85;
				minElev = 0;
				maxTurn = 100;
				minTurn = -100;
			};
		};
	};
	class MLRS_Des: MLRS_DES_EP1
	{
		vehicleClass = "SPArtillery_AP";
		faction = "BIS_US";
		hiddenSelectionsTextures[] = {"\ca\Tracked_E\us_m270mlrs\Data\MLRS_hull_desert_CO.paa"};
		displayName = "$STR_SNAME_M270_D";
		scope = 2;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"M270"};
				magazines[] = {"12Rnd_M270"};
				maxElev = 85;
				minElev = 0;
				maxTurn = 100;
				minTurn = -100;
			};
		};
	};
};
