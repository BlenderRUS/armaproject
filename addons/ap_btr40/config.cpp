#define _ARMA_

class CfgPatches
{
	class ap_btr40
	{
		units[] = {"ap_btr40_zu23","ap_btr40_2dshk","ap_btr40_m45"};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"ace_c_vehicle","tu_mtlb"};
	};
};

class Extended_PreInit_EventHandlers
{
	All_PreInit = "call compile preProcessFileLineNumbers 'ap_btr40\EH\_init.sqf';";
};
class Extended_Fired_EventHandlers
{
	class LandVehicle
	{
		isMultiBarrel = "if (getNumber (configFile >> 'CfgWeapons' >> (_this select 1) >> 'isMultiBarrel') > 0) then {_this spawn Fired_MultiBarrel};";
	};
};

class CfgMagazines 
{
	class 50Rnd_127x107_DSHKM;
	class AP_100Rnd_127x107_DSHKM: 50Rnd_127x107_DSHKM
	{
		tracersEvery=3;
		count = 100;
	};
	class AP_300Rnd_127x107_DSHKM: AP_100Rnd_127x107_DSHKM
	{
		count = 300;
	};
	class 100Rnd_127x99_M2;
	class AP_400Rnd_127x99_M2: 100Rnd_127x99_M2
	{
		tracersEvery=1;
		count = 400;
	};	
	class AP_800Rnd_127x99_M2: AP_400Rnd_127x99_M2
	{
		count = 800;
	};
};	

class cfgweapons
{
	class MGun;
	class DShKM;
	class M2;
	class AP_DSHKMx2: DShKM
	{
		displayName = "$STR_2xDSHKM";
		displayNameShort="";
		magazines[] = {"AP_100Rnd_127x107_DSHKM","AP_300Rnd_127x107_DSHKM"};
		autoReload=0;
		magazineReloadTime=20;
		reloadTime = 0.01;
		isMultiBarrel = 1;
		BarrelCount = 2;
		BarrelName = "muzzle";

		class manual: MGun
		{
			//displayName="12.7";
			autoFire = 1;
			sound[] = {"\ap_btr40\sounds\2dshk.ogg",5.623413,1,1600};
			dispersion = 0.0015;
			showToPlayer = 1;
			reloadTime = 0.05;
			burst = 2;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
		};
	};
	class AP_4xM2: M2
	{
		scope = 2;
		displayName = "$STR_4xM2";
		magazines[] = {"AP_400Rnd_127x99_M2","AP_800Rnd_127x99_M2"};
		autoReload=0;
		magazineReloadTime=40;
		reloadTime = 0.01;
		isMultiBarrel = 1;
		BarrelCount = 4;
		BarrelName = "muzzle";
		class manual: MGun
		{
			reloadTime = 0.03;
			autoReload=0;
			//displayName="12.7";
			sound[] = {"\ap_btr40\sounds\4m2.ogg",1.4125376,1,1200};
			dispersion=0.0015;
			burst = 4;
		};
	};
	
};	
	
class AnimationSources;
class Turrets;
class MainTurret;
class CfgVehicles
{
	class BTR40_MG_TK_GUE_EP1;
	class ap_btr40_zu23: BTR40_MG_TK_GUE_EP1
	{
		scope = 2;
		displayName = "$STR_BTR40_ZU";
		model = "ap_btr40\btr40_zu23.p3d";
		hiddenSelections[] = {"camo","clan","clan_sign"};
		accuracy = 0.3;
		threat[] = {0.8,0.4,0.8};
		transportSoldier = 1;
		cargoAction[] = {"BTR40_Cargo_EP1"};
		hasGunner = 1;
		hasCommander = 0;
		weapons[] = {};
		magazines[] = {};
		class UserActions
		{
			class OpenHatch
			{
			displayName = "$STR_OPEN_HATCH";
			position = "hatchaction";
			onlyforplayer = true;
			radius = 5;
			condition="(player == driver this) && (this animationPhase 'HatchAction' < 0.2)";
			statement="this animate ['HatchAction',0.2]";
			};
			class CloseHatch
			{
			displayName = "$STR_CLOSE_HATCH";
			position = "hatchaction";
			onlyforplayer = true;
			radius = 5;
			condition="(player == driver this) && (this animationPhase 'HatchAction' > 0)";
			statement="this animate ['HatchAction',0]";
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\weapons\zu23\data\zu23.rvmat","ca\weapons\zu23\data\zu23.rvmat","ca\weapons\zu23\data\zu23_destruct.rvmat","ca\weapons\zu23\data\zu23_base.rvmat","ca\weapons\zu23\data\zu23_base.rvmat","ca\weapons\zu23\data\zu23_base_destruct.rvmat","ap_btr40\data\green2b_co.rvmat","ap_btr40\data\green2b_co.rvmat","ap_btr40\data\green2b_co_destruct.rvmat","ca\wheeled_e\btr40\data\btr40ext.rvmat","ca\wheeled_e\btr40\data\btr40ext_damage.rvmat","ca\wheeled_e\btr40\data\btr40ext_destruct.rvmat","ca\wheeled_e\btr40\data\btr40int.rvmat","ca\wheeled_e\btr40\data\btr40int_damage.rvmat","ca\wheeled_e\btr40\data\btr40int_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
		
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minTurn = -360;
				maxTurn = 360;
				minElev = -10;
				maxElev = 85;
				weapons[] = {"2A14"};
				magazines[] = {"40Rnd_23mm_AZP85", "40Rnd_23mm_AZP85", "40Rnd_23mm_AZP85", "40Rnd_23mm_AZP85", "40Rnd_23mm_AZP85", "40Rnd_23mm_AZP85", "40Rnd_23mm_AZP85", "40Rnd_23mm_AZP85", "40Rnd_23mm_AZP85", "40Rnd_23mm_AZP85"};
				gunnerAction = "Hilux_cargo01";
				gunnerOpticsModel = "\ca\weapons\2Dscope_RUAA5";
				gunnerOpticsEffect[] = {"OpticsCHAbera1","OpticsBlur2"};
				gunnerForceOptics = 0;
				selectionFireAnim = "zasleh";
				memoryPointsGetInGunner = "pos cargo dir";
				memoryPointsGetInGunnerDir = "pos cargo";
				weaponInfoType = "RscWeaponZeroing";
				class ViewGunner
				{
					initAngleX = 0;
					minAngleX = -10;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
					initFov=0.69999999;
					minFov=0.25;
					maxFov=1.1;
				};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -10;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -360;
					maxAngleY = 360;
					initFov = 0.06;
					minFov = 0.06;
					maxFov = 0.06;
					weaponInfoType = "RscWeaponZeroing";
					discreteDistance[] = {250,500,750,1000,1250,1500,1750,2000,2500};
					discreteDistanceInitIndex = 0;
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class HitLFWheel
			{
				source = "Hit";
				hitpoint = "HitLFWheel";
				raw = 1;
			};
			class HitRFWheel: HitLFWheel
			{
				hitpoint = "HitRFWheel";
			};
			class HitLBWheel: HitLFWheel
			{
				hitpoint = "HitLBWheel";
			};
			class HitRBWheel: HitLFWheel
			{
				hitpoint = "HitRBWheel";
			};
			class HitLGlass: HitLFWheel
			{
				hitpoint = "HitLGlass";
			};
			class HitRGlass: HitLFWheel
			{
				hitpoint = "HitRGlass";
			};
			class spare
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class plants: spare{};
			class plants1: spare{};
			class fire_anim
			{
				source = "revolving";
				weapon = "2A14";
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
				size = 1;
				brightness = 0.5;
			};
			class Right: Left
			{
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
			};
			class Gunlight: Left
			{
				color[] = {0.9,0.8,0.8,1.0};
				ambient[] = {0.1,0.1,0.1,1.0};
				position = "G svetlo";
				direction = "konec G svetla";
				hitpoint = "G svetlo";
				selection = "G svetlo";
				size = 1;
				brightness = 1.5;
			};
		};
		transportMaxBackpacks = 3;
		transportMaxMagazines = 100;
		transportMaxWeapons = 5;
		
		ace_minimalhit[] = {13,30};
		ace_era = 0;
		ace_p_detonation_hull = 0.2;
		ace_p_detonation_turret = 0.0;
		ace_p_detonation_engine = 0.1;
		ace_p_fire_hull = 0.7;
		ace_p_fire_turret = 0.7;
		ace_p_fire_engine = 0.8;
		ace_p_firedetonation = 0.5;
		ace_armor_hull[] = {{ 8,8 },{ 6,6 },{ 6,6 },{ 6,6 },{ 0,0 },{ 3,3 }};	
};

	class ap_btr40_2dshk: ap_btr40_zu23
	{
		scope = 2;
		displayName = "$STR_BTR40_2DSHK";
		model = "ap_btr40\btr40_2dshk.p3d";
		accuracy = 0.3;
		threat[] = {0.5,0.3,0.4};
		cargoAction[] = {"BTR40_Cargo_EP1","UAZ_Cargo01","UAZ_Cargo01","UAZ_Cargo01","UAZ_Cargo01","UAZ_Cargo01","UAZ_Cargo01"};
		
		ace_sa_defaultelevation = -3.8;
		ace_sa_enabled = 1;
		ace_sa_adj_mode = "range";
		//ace_sa_defaultelevation = 0;
		ace_sa_defaultwindage = 0;
		ace_sa_minelevation = 100;
		ace_sa_maxelevation = 2000;
		ace_sa_stepelevation = 100;
		ace_sa_windage = 10;
		ace_sa_stepwindage = 1;
		ace_sa_elev_unit = "mil";
		ace_sa_wind_unit = "mil";
		ace_sa_range_unit = "meters";
		ace_sa_TE_enabled = 0;
		ace_sa_table_elev[] = {{ 0,0 },{ 100,0.7 },{ 200,1.4 },{ 300,2.3 },{ 400,3.2 },{ 500,4.2 },{ 600,5.3 },{ 700,6.5 },{ 800,7.8 },{ 900,9.2 },{ 1000,10.8 },{ 1100,12.4 },{ 1200,14.3 },{ 1300,16.2 },{ 1400,18.4 },{ 1500,20.8 },{ 1600,23.4 },{ 1700,26.4 },{ 1800,29.5 },{ 1900,32.9 },{ 2000,36.8 }};
	
		
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\wheeled\data\Detailmapy\uaz_mount.rvmat","ca\wheeled\data\Detailmapy\uaz_mount.rvmat","ca\wheeled\data\Detailmapy\uaz_mount_destruct.rvmat","ap_btr40\data\mount.rvmat","ap_btr40\data\mount.rvmat","ap_btr40\data\mount_destruct.rvmat","ca\weapons\Data\dshk.rvmat","ca\weapons\Data\dshk.rvmat","ca\weapons\Data\dshk_destruct.rvmat","ca\wheeled_e\btr40\data\btr40ext.rvmat","ca\wheeled_e\btr40\data\btr40ext_damage.rvmat","ca\wheeled_e\btr40\data\btr40ext_destruct.rvmat","ca\wheeled_e\btr40\data\btr40int.rvmat","ca\wheeled_e\btr40\data\btr40int_damage.rvmat","ca\wheeled_e\btr40\data\btr40int_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
		
		class Turrets: Turrets
		{
			class FRONT_Turret: MainTurret
			{
				primaryGunner = 1;
				proxyType = "CPGunner";
				proxyIndex = 1;
				commanding = 2;
				weapons[] = {"AP_DSHKMx2"};
				magazines[] = {"AP_100Rnd_127x107_DSHKM","AP_100Rnd_127x107_DSHKM","AP_100Rnd_127x107_DSHKM","AP_100Rnd_127x107_DSHKM","AP_100Rnd_127x107_DSHKM","AP_100Rnd_127x107_DSHKM","AP_100Rnd_127x107_DSHKM","AP_100Rnd_127x107_DSHKM","AP_100Rnd_127x107_DSHKM","AP_100Rnd_127x107_DSHKM"};
				soundServo[] = {"\ca\sounds\vehicles\servos\turret-1",0.1,1.0,15};
				gunnerAction = "HMMWV_Gunner01";
				gunnerInAction = "HMMWV_Gunner01";
				gunnerOpticsModel = "\ca\weapons\optika_empty";
				initElev = 0;
				minElev = -25;
				maxElev = 80;
				initTurn = 0;
				minTurn = -360;
				maxTurn = 360;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -25;
					maxAngleX = 80;
					initAngleY = 0;
					minAngleY = -360;
					maxAngleY = 360;
					initFov=0.69999999;
					minFov=0.25;
					maxFov=1.1;
				};
				class ViewGunner
				{
					initAngleX = 0;
					minAngleX = -25;
					maxAngleX = 80;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
					initFov=0.69999999;
					minFov=0.25;
					maxFov=1.1;
				};
				selectionFireAnim = "FRONT_zasleh";			
				gunBeg = "muzzle_1";
				gunEnd = "chamber_1";
				body = "FRONT_Turret";
				gun = "FRONT_Gun";
				memoryPointGunnerOptics = "FRONT_gunnerview";
				animationSourceBody = "FRONT_Turret";
				animationSourceGun = "FRONT_Gun";
				LODTurnedOut = 1200;
				LODTurnedIn = 1200;
				stabilizedInAxes = "StabilizedInAxesNone";
			};
		};
		class AnimationSources: AnimationSources
		{
			class FRONT_recoil_source
			{
				source = "reload";
				weapon = "AP_DSHKMx2";
				animPeriod = 0.01;
			};
			class FRONT_ReloadAnim
			{
				source = "reload";
				weapon = "AP_DSHKMx2";
			};
			class FRONT_ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "AP_DSHKMx2";
			};
			class FRONT_Revolving
			{
				source = "revolving";
				weapon = "AP_DSHKMx2";
			};
		};
	};
	class ap_btr40_m45: ap_btr40_2dshk
	{
		scope = 2;
		displayName = "$STR_BTR40_M45";
		model = "ap_btr40\btr40_m45.p3d";
		
		ace_sa_defaultelevation = 0;
		ace_sa_maxelevation = 2600;
		ace_sa_range_unit = "yards";
		ace_sa_table_elev[] = {{ 0,0 },{ 100,0.52 },{ 200,1.21 },{ 300,1.89 },{ 400,2.62 },{ 500,3.41 },{ 600,4.21 },{ 700,5.11 },{ 800,6.09 },{ 900,7.03 },{ 1000,8.13 },{ 1100,9.35 },{ 1200,10.63 },{ 1300,12 },{ 1400,13.53 },{ 1500,15.14 },{ 1600,16.9 },{ 1700,18.79 },{ 1800,20.8 },{ 1900,22.99 },{ 2000,25.35 },{ 2100,27.94 },{ 2200,30.76 },{ 2300,33.77 },{ 2400,36.95 },{ 2500,40.55 },{ 2600,44.56 }};
		
		class Damage
		{
			tex[] = {};
			mat[] = {"ap_btr40\data\skin3d.rvmat","ap_btr40\data\skin3d.rvmat","ap_btr40\data\skin3d_destruct.rvmat","ca\weapons\Data\m2.rvmat","ca\weapons\Data\m2.rvmat","ca\weapons\Data\m2_destruct.rvmat","ap_btr40\data\uaz.rvmat","ap_btr40\data\uaz.rvmat","ap_btr40\data\uaz_destruct.rvmat","ap_btr40\data\q50_parts.rvmat","ap_btr40\data\q50_parts.rvmat","ap_btr40\data\q50_parts_destruct.rvmat","ap_btr40\data\tube.rvmat","ap_btr40\data\tube.rvmat","ap_btr40\data\tube_destruct.rvmat","ap_btr40\data\m1abrams_mg_mount.rvmat","ap_btr40\data\m1abrams_mg_mount.rvmat","ap_btr40\data\m1abrams_mg_mount_destruct.rvmat","ca\wheeled_e\btr40\data\btr40ext.rvmat","ca\wheeled_e\btr40\data\btr40ext_damage.rvmat","ca\wheeled_e\btr40\data\btr40ext_destruct.rvmat","ca\wheeled_e\btr40\data\btr40int.rvmat","ca\wheeled_e\btr40\data\btr40int_damage.rvmat","ca\wheeled_e\btr40\data\btr40int_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
		
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				commanding = -1;
				primaryGunner = 1;
				proxyIndex = 1;
				outGunnerMayFire = 1;
				gunnerHasFlares = 1;
				body = "turret";
				gun = "gun";
				selectionFireAnim = "zasleh";
				weapons[] = {"AP_4xM2"};
				magazines[] = {"AP_400Rnd_127x99_M2","AP_400Rnd_127x99_M2","AP_400Rnd_127x99_M2"};
				gunBeg = "barrel";
				gunEnd = "chamber";
				memoryPointGunnerOptics = "gunnerview";
				soundServo[] = {"\ca\wheeled\Data\Sound\servo3","db-80",1.1};
				minElev = -10;
				maxElev = 45;
				initElev = 0;
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				gunnerOpticsModel = "\ca\weapons\optika_empty";
				gunnerForceOptics = 0;
				startEngine = 0;
				memoryPointsGetInGunner = "pos cargo";
				memoryPointsGetInGunnerDir = "pos cargo dir";
				viewGunnerInExternal = 1;
				castGunnerShadow = 0;
				gunnerAction = "AH1Z_Gunner";
				gunnerInAction = "Truck_Gunner";
				getInAction = "GetInMedium";
				getOutAction = "GetOutMedium";
				
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -25;
					maxAngleX = 80;
					initAngleY = 0;
					minAngleY = -360;
					maxAngleY = 360;
					initFov=0.69999999;
					minFov=0.25;
					maxFov=1.1;
				};
				class ViewGunner
				{
					initAngleX = 0;
					minAngleX = -25;
					maxAngleX = 80;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
					initFov=0.69999999;
					minFov=0.25;
					maxFov=1.1;
				};
			};
		};
	};
};
//};
