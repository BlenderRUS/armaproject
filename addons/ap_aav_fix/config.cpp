class CfgPatches
{
	class AP_AAV_FIX
	{
		units[]=
		{
			"AAV"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"CATracked2",
			"CACharacters2"
		};
	};
};
class WeaponCloudsMGun;
class CfgVehicles
{
	class Land;
	class LandVehicle: Land
	{
	};
	class Tank: LandVehicle
	{
		class Turrets;
		class ViewPilot;
	};
	class Tracked_APC: Tank
	{
		class NewTurret;
		class AnimationSources;
		class ViewPilot
		{
			initAngleX = 7;
			initAngleY = 0;
			maxAngleX = 75;
			maxAngleY = 90;
			minAngleX = -20;
			minAngleY = -90;
			initFov = 0.7;
			maxFov = 1.2;
			minFov = 0.42;
		}
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class m113_Base : Tank
	{
		class ViewPilot
		{
			initAngleX = 7;
			initAngleY = 0;
			maxAngleX = 75;
			maxAngleY = 90;
			minAngleX = -20;
			minAngleY = -90;
			initFov = 0.7;
			maxFov = 1.2;
			minFov = 0.42;
		}
	};
	class m113 : Tank
	{
		class ViewPilot
		{
			initAngleX = 7;
			initAngleY = 0;
			maxAngleX = 75;
			maxAngleY = 90;
			minAngleX = -20;
			minAngleY = -90;
			initFov = 0.7;
			maxFov = 1.2;
			minFov = 0.42;
		}
	};
	class M2A2_Base : Tank
	{
		class ViewPilot
		{
			initAngleX = 7;
			initAngleY = 0;
			maxAngleX = 75;
			maxAngleY = 90;
			minAngleX = -20;
			minAngleY = -90;
			initFov = 0.7;
			maxFov = 1.2;
			minFov = 0.42;
		}
	};
	class AAV: Tracked_APC
	{
		transportSoldier=12;
				
		ace_sys_reticles_gunneroptics = 1;
		ace_sys_reticles_gunnersight = "AP_m36";
		
		ace_sa_adj_mode = "range";
		ace_sa_defaultelevation = 35;
		ace_sa_defaultwindage = -8;
		ace_sa_elev_unit = "mil";
		ace_sa_enabled = 0;
		ace_sa_maxelevation = 0;
		ace_sa_minelevation = 0;
		ace_sa_range_unit = "meters";
		ace_sa_stepelevation = 100;
		ace_sa_stepwindage = 1;
		ace_sa_table_elev[] = {{0, 0}, {100, 9}, {200, 18.6}, {300, 29.1}, {400, 40.4}, {500, 52.6}, {600, 65.9}, {700, 80.3}, {800, 96}, {900, 113.1}, {1000, 131.9}, {1100, 152.5}, {1200, 175.2}, {1300, 200.4}, {1400, 228.6}, {1500, 260.3}, {1600, 296.7}, {1700, 339.2}, {1800, 390.8}, {1900, 458.3}, {2000, 570.1}};
		ace_sa_TE_enabled = 1;
		ace_sa_windage = 10;
		ace_sa_wind_unit = "mil";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]= {"M2","ACE_MK19"};
				magazines[]=
				{
					"48Rnd_40mm_MK19","48Rnd_40mm_MK19","48Rnd_40mm_MK19","48Rnd_40mm_MK19","48Rnd_40mm_MK19",
					"100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2"
				};
				soundServo[] = {"\ca\wheeled\Data\Sound\servo4",0.0056234132,1.0,15};
				class GunFire: WeaponCloudsMGun
				{
					interval = 0.01;
				};
				gunnerOpticsModel = "\x\ace\addons\sys_reticles\ACE_optics_empty.p3d";
				class ViewOptics
				{
					visionMode[] = {"Normal","TI"};
					thermalMode[] = {2,3};
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = "+30";
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = "+100";
					initFov = 0.4;
					minFov = 0.2;
					maxFov = 0.4;
				};
				class OpticsIn {
					class Wide {
						gunnerOpticsModel = "\x\ace\addons\sys_reticles\ACE_optics_empty.p3d";
						initanglex = 0;
						initangley = 0;
						initfov = "0.33333/ 1.2";
						maxanglex = 30;
						maxangley = 100;
						maxfov = "0.33333/ 1.2";
						minanglex = -30;
						minangley = -100;
						minfov = "0.33333/ 1.2";
						visionMode[] = {"Normal","NVG","Ti"};
						thermalmode[] = {2};
					};
					class Medium: Wide {
						initfov = "0.33333/ 4";
						maxfov = "0.33333/ 4";
						minfov = "0.33333/ 4";
					};
				};
				class ViewGunner
				{
					initAngleX = 5;
					minAngleX = -60;
					maxAngleX = "+85";
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = "+150";
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 0.7;
				};
			};
		};
	};
};