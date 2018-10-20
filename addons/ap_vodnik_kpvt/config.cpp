#define _ARMA_

class CfgPatches
{
	class ap_vodnik_kpvt
	{
		units[] = {"ap_vodnik_kpvt"};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"ace_main","ace_c_vehicle","ace_sys_reticles"};
	};
};

class WeaponCloudsMGun;
class CfgVehicles
{
	class Land;
	class LandVehicle: Land
	{
		class HitPoints;
	};
	class Car: LandVehicle
	{
		class HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
		};
		class NewTurret;
		class AnimationSources;
	};
	class Wheeled_APC:car {};
	class GAZ_Vodnik_HMG: Wheeled_APC {};
	class ap_vodnik_kpvt: GAZ_Vodnik_HMG
	{		
		displayName="$STR_vodnik_kpvt";
		model = "\ap_vodnik_kpvt\GAZ39371_Vodnik_kpvt.p3d";
		class Turrets
		{
			class MainTurret: NewTurret
			{
				outGunnerMayFire = 1;
				minElev = -4;
				maxElev = 60;
				minTurn = -180;
				maxTurn = 180;
				initTurn = 0;
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				memoryPointGun = "kulas";
				radarType = 0;
				weapons[] = {"KPVT","PKT_veh","SmokeLauncher"};
				magazines[] = {"ACE_50Rnd_145x114_KPVT","ACE_50Rnd_145x114_KPVT","ACE_50Rnd_145x114_KPVT","ACE_50Rnd_145x114_KPVT","ACE_50Rnd_145x114_KPVT","ACE_50Rnd_145x114_KPVT","ACE_50Rnd_145x114_KPVT","ACE_50Rnd_145x114_KPVT","ACE_50Rnd_145x114_KPVT","ACE_50Rnd_145x114_KPVT","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","SmokeLauncherMag","SmokeLauncherMag"};
				gunnerOutOpticsShowCursor = 0;
				gunnerOpticsShowCursor = 0;
				gunnerAction = "rhs_btr70_gunner";
				gunnerInAction = "rhs_btr70_gunner";
				LODTurnedIn = 0;
				LODTurnedOut = 0;
				primaryGunner = 1;
				commanding = 2;
				primaryObserver = 1;
				stabilizedInAxes = "StabilizedInAxesNone";
				forceHideGunner = 1;
				selectionFireAnim = "zasleh1";
				gunnerForceOptics = 1;
				gunnerOpticsColor[] = {1,1,1,1};
				class ViewGunner
				{
					initAngleX = 5;
					minAngleX = -65;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
				
				class ViewOptics
				{
					initAngleX=0; 
					minAngleX=-30; 
					maxAngleX=+60;
					initAngleY=0; 
					minAngleY=0; 
					maxAngleY=0;
					initFov=0.33333 / 1.2; 
					minFov=0.33333 / 1.2; 
					maxFov=0.33333 / 1.2; 
				};
				
				class OpticsIn {
					class Wide {
						gunnerOpticsModel = "\x\ace\addons\m_veh_optics\optics_empty";
						initanglex = 0;
						initangley = 0;
						initfov = "0.33333/ 1.2";
						maxanglex = 30;
						maxangley = 100;
						maxfov = "0.33333/ 1.2";
						minanglex = -30;
						minangley = -100;
						minfov = "0.33333/ 1.2";
						visionMode[] = {"Normal"};
					};
					class Medium: Wide {
						initfov = "0.33333/ 4";
						maxfov = "0.33333/ 4";
						minfov = "0.33333/ 4";
					};
				};	
				
				class GunFire: WeaponCloudsMGun
				{
					interval = 0.01;
				};
				soundServo[] = {"\ca\wheeled\Data\Sound\servo4",0.0056234132,1.0,15};
				startEngine = 0;
				class HitPoints
				{
					class HitTurret
					{
						armor = 0.8;
						material = -1;
						name = "vez";
						visual = "vez";
						passThrough = 0.5;
					};
					class HitGun
					{
						armor = 0.4;
						material = -1;
						name = "zbran";
						visual = "zbran";
						passThrough = 0.1;
					};
				};
			};
		};
		class Reflectors
		{
			class Left
			{
				color[] = {0.9,0.8,0.8,1.0};
				ambient[] = {0.1,0.1,0.1,1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness = 0.5;
			};
			class Right
			{
				color[] = {0.9,0.8,0.8,1.0};
				ambient[] = {0.1,0.1,0.1,1.0};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 0.5;
				brightness = 0.5;
			};			
			class Gunlight
			{
				color[] = {0.9,0.8,0.8,1.0};
				ambient[] = {0.1,0.1,0.1,1.0};
				position = "G svetlo";
				direction = "konec G svetla";
				hitpoint = "G svetlo";
				selection = "G svetlo";
				size = 0.7;
				brightness = 1;
			};
		};

		class Damage
		{
			tex[] = {};
			mat[] = {"x\acex\addons\c_veh_btr70\btr_main.rvmat","x\acex\addons\c_veh_btr70\btr_main_damage.rvmat","x\acex\addons\c_veh_btr70\btr_main_destruct.rvmat","ca\wheeled2\gaz39371\data\gaz39371_vodnik_basis_01.rvmat","ca\wheeled2\gaz39371\data\gaz39371_vodnik_basis_01_Half_D.rvmat","ca\wheeled2\gaz39371\data\gaz39371_vodnik_basis_01_Full_D.rvmat","ca\wheeled2\gaz39371\data\gaz39371_vodnik_cabin.rvmat","ca\wheeled2\gaz39371\data\gaz39371_vodnik_cabin_Half_D.rvmat","ca\wheeled2\gaz39371\data\gaz39371_vodnik_cabin_Full_D.rvmat","ca\wheeled2\gaz39371\data\gaz39371_vodnik_module.rvmat","ca\wheeled2\gaz39371\data\gaz39371_vodnik_module_Half_D.rvmat","ca\wheeled2\gaz39371\data\gaz39371_vodnik_module_Full_D.rvmat","ca\wheeled2\gaz39371\data\gaz39371_vodnik_int.rvmat","ca\wheeled2\gaz39371\data\gaz39371_vodnik_int.rvmat","ca\wheeled2\gaz39371\data\gaz39371_vodnik_int_destruct.rvmat","ca\wheeled2\gaz39371\data\gaz39371_vodnik_glass.rvmat","ca\wheeled2\gaz39371\data\gaz39371_vodnik_glass_Half_D.rvmat","ca\wheeled2\gaz39371\data\gaz39371_vodnik_glass_Half_D.rvmat","ca\wheeled2\gaz39371\data\gaz39371_vodnik_glass_in.rvmat","ca\wheeled2\gaz39371\data\gaz39371_vodnik_glass_in_Half_D.rvmat","ca\wheeled2\gaz39371\data\gaz39371_vodnik_glass_in_Half_D.rvmat"};
		};
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"\ca\wheeled2\gaz39371\data\gaz39371_vodnik_basis_01_co.paa","\ca\wheeled2\gaz39371\data\gaz39371_vodnik_cabin_co.paa","\ca\wheeled2\gaz39371\data\gaz39371_vodnik_mod_out_co.paa","\x\acex_ru\addons\t_veh_btr70\btr70_tri1_1_co.paa"};
	
		ace_sys_reticles_gunneroptics = 1;
		ace_sys_reticles_gunnersight = "AP_1PZ_7";
	};
};

class ACE_Config
{
	class cfgVehicleOpticsReticles
	{
		class AP_1PZ_7
		{
			ace_sys_reticles_checkweapon = "KPVT";
			ace_sys_reticles_fov0 = "0.33333/2";
			ace_sys_reticles_horizshift = 0;
			ace_sys_reticles_illum = 1;
			ace_sys_reticles_illumcolor[] = {0.7412, 0, 0, 1};
			ace_sys_reticles_pxmil = 12;
			ace_sys_reticles_texmap = 1;
			ace_sys_reticles_texreticle = "\ap_vodnik_kpvt\data\mark.paa";
			ace_sys_reticles_texsize = 4096;
			ace_sys_reticles_texstatic = "\ap_vodnik_kpvt\data\1PZ-7.paa";
		};
	};
};