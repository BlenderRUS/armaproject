////////////////////////////////////////////////////////////////////
//DeRap: pracs_tracked\config.bin
//Produced from mikero's Dos Tools Dll version 6.24
//'now' is Sun Aug 18 23:20:15 2019 : 'file' last modified on Sun Aug 18 23:19:14 2019
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//(5 Enums)
enum {
	OrdinalEnum = 1,
	stabilizedinaxisx = 1,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	stabilizedinaxesnone = 0
};

class CfgPatches
{
	class pzn_PRACS_Tracked_mini
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAData","CACharacters","CAweapons2","CACharacters2","CAWeapons","CAWeapons_e","CASounds","CAtracked"};
	};
};
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		PRACS_M113_Gunner = "PRACS_M113_Gunner";
		PRACS_M163_Gunner = "PRACS_M163_Gunner";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class PRACS_M113_Gunner: Crew
		{
			file = "\pracs_tracked\anim\PRACS_M113_Gunner";
			interpolateTo[] = {"M113_KIA_Gunner_EP1",1};
		};
		class PRACS_M163_Gunner: Crew
		{
			file = "\pracs_tracked\anim\PRACS_M163_Gunner";
			interpolateTo[] = {"M113_KIA_Gunner_EP1",1};
		};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class cfgWeapons
{
	class M240_veh;
	class PRACS_M60_veh: M240_veh
	{
		scope = 1;
		displayName = "M60 MG";
		magazines[] = {"100Rnd_762x51_M240","1200Rnd_762x51_M240"};
	};
	class PRACS_M1919_veh: M240_veh
	{
		displayName = "M1919 MG";
		magazines[] = {"100Rnd_762x51_M240","1200Rnd_762x51_M240"};
	};
	class 2A42;
	class ACE_2A42: 2A42
	{
		class HighROF;
	};
	class ap_L21A1: ACE_2A42
	{
		displayname = "30mm L21A1";
		reloadTime = 0.6;
		class close: HighROF
		{
			begin1[] = {"pracs_tracked\sound\30mmrarden_s1.ogg",20,1,3000};
			begin2[] = {"pracs_tracked\sound\30mmrarden_s1.ogg",20,1,3000};
			begin3[] = {"pracs_tracked\sound\30mmrarden_s1.ogg",20,1,3000};
			begin4[] = {"pracs_tracked\sound\30mmrarden_s1.ogg",20,1,3000};
			reloadTime = 0.6;
		};
		modes[] = {"close"};
		magazines[] = {"250Rnd_30mmHE_L21A1","230Rnd_30mmHE_L21A1","160Rnd_30mmHE_L21A1","120Rnd_30mmHE_L21A1","250Rnd_30mmAP_L21A1","160Rnd_30mmAP_L21A1","120Rnd_30mmAP_L21A1","80Rnd_30mmAP_L21A1"};
	};
	class ACE_2A28;
	class ap_L23A1: ACE_2A28
	{
		displayname = "76.2mm L23A1";
		reloadTime = 10.5;
		magazines[] = {"15Rnd_76mmHEAT_L23A1","25Rnd_76mmHE_L23A1"};
	};
	class ACE_ZiS_S_53;
	class ap_M41: ACE_ZiS_S_53
	{
		displayname = "90mm M41";
		reloadTime = 10.5;
		magazines[] = {"15Rnd_90mmAP_M41","20Rnd_90mmHE_M41"};
	};
};
class CfgMagazines
{
	class ACE_24Rnd_73mm_PG15V;
	class 15Rnd_76mmHEAT_L23A1: ACE_24Rnd_73mm_PG15V
	{
		count = 15;
		displayName = "76.2mm-HEAT-T L23A1";
	};
	class ACE_16Rnd_73mm_OG15V;
	class 25Rnd_76mmHE_L23A1: ACE_16Rnd_73mm_OG15V
	{
		count = 25;
		displayName = "76.2mm-HE-T L23A1";
	};
	class 10Rnd_85mmAP;
	class 15Rnd_90mmAP_M41: 10Rnd_85mmAP
	{
		count = 15;
		displayName = "90mm-AP-T M41";
	};
	class 33Rnd_85mmHE;
	class 20Rnd_90mmHE_M41: 33Rnd_85mmHE
	{
		count = 20;
		displayName = "90mm-HE-T M41";
	};
	class 250Rnd_30mmHE_2A42;
	class 250Rnd_30mmHE_L21A1: 250Rnd_30mmHE_2A42
	{
		count = 250;
		displayName = "30mm-HE L21A1";
	};
	class 230Rnd_30mmHE_L21A1: 250Rnd_30mmHE_L21A1
	{
		count = 230;
	};
	class 160Rnd_30mmHE_L21A1: 250Rnd_30mmHE_L21A1
	{
		count = 160;
	};
	class 120Rnd_30mmHE_L21A1: 250Rnd_30mmHE_L21A1
	{
		count = 120;
	};
	class 250Rnd_30mmAP_2A42;
	class 250Rnd_30mmAP_L21A1: 250Rnd_30mmAP_2A42
	{
		count = 250;
		displayname = "30mm-AP L21A1";
	};
	class 160Rnd_30mmAP_L21A1: 250Rnd_30mmAP_L21A1
	{
		count = 160;
	};
	class 120Rnd_30mmAP_L21A1: 250Rnd_30mmAP_L21A1
	{
		count = 120;
	};
	class 80Rnd_30mmAP_L21A1: 250Rnd_30mmAP_L21A1
	{
		count = 80;
	};
};
class CfgVehicleClasses
{
	class ArmoredPRACS
	{
		side = "TWest";
		faction = "smd_racs_faction";
		displayName = "$STR_ArmoredPRACS";
	};
	class CarPRACS
	{
		side = "TWest";
		faction = "smd_racs_faction";
		displayName = "$STR_CarPRACS";
	};
};
class CfgVehicles
{
	class Land;
	class LandVehicle: Land
	{
		class NewTurret;
		class ViewOptics;
		class AnimationSources;
	};
	class Tank: LandVehicle
	{
		class ViewOptics;
		class HitHull;
		class HitLTrack;
		class HitRTrack;
		class HitEngine;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class HitTurret;
				class HitGun;
				class Turrets
				{
					class CommanderOptics: NewTurret
					{
						class ViewOptics;
						class ViewGunner;
					};
				};
			};
		};
		class HitPoints;
	};
	class m113_Base: Tank{};
	class M113_UN_EP1: m113_Base{};
	class ACE_M113A3: M113_UN_EP1{};
	class PRACS_M113: ACE_M113A3
	{
		vehicleClass = "ArmoredPRACS";
		faction = "smd_racs_faction";
		scope = 2;
		hiddenSelections[] = {"Camo"};
		hiddenselectionstextures[] = {"\pracs_tracked\tex\m113\m113a3sp_01_co.paa"};
	};
	class ACE_M113A3_Ambul;
	class PRACS_M113_Ambul: ACE_M113A3_Ambul
	{
		vehicleClass = "ArmoredPRACS";
		faction = "smd_racs_faction";
		scope = 2;
		hiddenselectionstextures[] = {"\pracs_tracked\tex\m113\m113a3sp_01_co.paa","\pracs_tracked\tex\m113\m113a3sp_02_co.paa"};
	};
	class TU_Vulcan_D;
	class PRACS_Vulcan: TU_Vulcan_D
	{
		vehicleClass = "ArmoredPRACS";
		faction = "smd_racs_faction";
		scope = 2;
		hiddenselectionstextures[] = {"\pracs_tracked\tex\m113\m163_vulcansp_01_co.paa","\pracs_tracked\tex\m113\m163_vulcansp_02_co.paa"};
	};
	class TU_Vulcan_Machbet_D;
	class PRACS_Machbet: TU_Vulcan_Machbet_D
	{
		vehicleClass = "ArmoredPRACS";
		faction = "smd_racs_faction";
		scope = 2;
		hiddenselectionstextures[] = {"\pracs_tracked\tex\m113\m163_vulcansp_01_co.paa","\pracs_tracked\tex\m113\m163_vulcansp_02_co.paa"};
	};
	class PRACS_M113_FSV: PRACS_M113
	{
		ace_armor_turret[] = {{15,15},{15,15},{15,15},{15,15},{15,15}};
		displayName = "M113A3 FSV";
		cost = 1000000;
		model = "\pracs_tracked\PRACS_M113_FSV";
		picture = "\x\acex\addons\c_veh_m113\data\picture\m163_vulcan_ca.paa";
		icon = "\x\acex\addons\c_veh_m113\data\icon\icomap_vulcan_ca.paa";
		mapSize = 5;
		nameSound = "m163";
		gunnerCanSee = 31;
		hasCommander = 0;
		canFloat = 1;
		ace_sys_reticles_gunneroptics = 1;
		ace_sys_reticles_gunnersight = "OP_M48";
		transportSoldier = 0;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				soundServo[] = {"\ca\Weapons\Data\Sound\gun_elevate2",0.001,1.0};
				selectionFireAnim = "zasleh";
				weapons[] = {"ap_M41","PRACS_M1919_veh"};
				magazines[] = {"15Rnd_90mmAP_M41","20Rnd_90mmHE_M41","1200Rnd_762x51_M240"};
				minElev = -3;
				maxElev = 40;
				minTurn = -360;
				maxTurn = 360;
				gunnerForceOptics = 1;
				memoryPointGun = "kulas";
				gunnerAction = "Abrams_CommanderOut";
				gunnerInAction = "Abrams_Commander";
				outGunnerMayFire = 0;
				forceHideGunner = 0;
				turretInfoType = "RscWeaponZeroing";
				discreteDistanceInitIndex = 2;
				class OpticsIn
				{
					class M41
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = "0.33333/ 2.5";
						minFov = "0.33333/ 2.5";
						maxFov = "0.33333/ 2.5";
						visionMode[] = {"Normal","NVG"};
						gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
						gunnerOpticsModel = "\x\ace\addons\m_veh_optics\optics_empty";
					};
				};
			};
		};
		driverAction = "M113_DriverOut";
		driverInAction = "M113_Driver_EP1";
		threat[] = {1,0.5,1};
		typicalCargo[] = {"SoldierWCrew","SoldierWCrew"};
		class AnimationSources: AnimationSources
		{
			class gunBarrel
			{
				source = "reload";
				weapon = "ap_M41";
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"pracs_tracked\tex\m113\m163_01_metal.rvmat","pracs_tracked\tex\m113\m163_01_metal.rvmat","pracs_tracked\tex\m113\m163_01_metal_destruct.rvmat","pracs_tracked\tex\m113\m163_02_metal.rvmat","pracs_tracked\tex\m113\m163_02_metal.rvmat","pracs_tracked\tex\m113\m163_02_metal_destruct.rvmat","ca\tracked_e\m113\data\m113_track.rvmat","ca\tracked_e\m113\data\m113_track.rvmat","ca\tracked_e\m113\data\m113_track_destruct.rvmat","ca\tracked_e\m113\data\cargo.rvmat","ca\tracked_e\m113\data\cargo.rvmat","ca\tracked_e\m113\data\cargo_destruct.rvmat","ca\tracked_e\m113\data\walls.rvmat","ca\tracked_e\m113\data\walls.rvmat","pracs_tracked\tex\m113\walls_destruct.rvmat","pracs_tracked\tex\m113\m60_gunmut.rvmat","pracs_tracked\tex\m113\m60_gunmut.rvmat","pracs_tracked\tex\m113\walls_destruct.rvmat","pracs_tracked\tex\m113\m60_gun.rvmat","pracs_tracked\tex\m113\m60_gun.rvmat","pracs_tracked\tex\m113\walls_destruct.rvmat","pracs_tracked\tex\m113\m1919.rvmat","pracs_tracked\tex\m113\m1919.rvmat","pracs_tracked\tex\m113\walls_destruct.rvmat","ca\tracked_e\m113\data\m113_01.rvmat","ca\tracked_e\m113\data\m113_01.rvmat","pracs_tracked\tex\m113\m113_01_destruct.rvmat"};
		};
		class Library
		{
			libTextDesc = "Sahrani Military Industries Fire Support Vehicle constructed form United Defense M113A3 APC and locally designed and built turret fitted with 90mm high velocity gun";
		};
	};
	class PRACS_M113_Mk19: PRACS_M113
	{
		ace_sa_enabled = 1;
		ace_sa_te_enabled = 1;
		model = "\PRACS_Tracked\PRACS_M113_Mk19";
		scope = 2;
		crew = "ACE_USMC_Soldier_Crew_D";
		picture = "\ca\tracked\Data\ico\M113_CA.paa";
		Icon = "\Ca\tracked\Data\map_ico\icomap_m113_CA.paa";
		side = 1;
		displayName = "M113A3 Mk19";
		nameSound = "m113";
		accuracy = 0.3;
		unitInfoType = "UnitInfoShip";
		hasGunner = 1;
		hasCommander = 0;
		canFloat = 1;
		class AnimationSources
		{
			class belt_rotation
			{
				source = "reload";
				weapon = "ACE_MK19";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				outGunnerMayFire = 1;
				forceHideGunner = 1;
				viewGunnerInExternal = 1;
				gunnerHasFlares = 0;
				gunnerAction = "PRACS_M113_Gunner";
				gunnerInAction = "PRACS_M113_Gunner";
				minElev = -25;
				maxElev = 60;
				initElev = 0;
				soundServo[] = {"\ca\Weapons\Data\Sound\gun_elevate2",0.001,1.0};
				weapons[] = {"ACE_MK19"};
				magazines[] = {"48Rnd_40mm_MK19","48Rnd_40mm_MK19","48Rnd_40mm_MK19","48Rnd_40mm_MK19","48Rnd_40mm_MK19"};
				gunnerOpticsModel = "\ca\Weapons\optika_empty";
				gunnerForceOptics = 0;
				gunnerOpticsShowCursor = 0;
				gunnerOutOpticsShowCursor = 0;
				class Turrets{};
				class ViewOptics
				{
					initAngleX = 0;
					initAngleY = 0;
					initFov = 0.7;
					maxAngleX = 30;
					maxAngleY = 100;
					maxFov = 1.1;
					minAngleX = -30;
					minAngleY = -100;
					minFov = 0.25;
				};
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\Tracked_E\M113\Data\m113_track.rvmat","Ca\Tracked_E\M113\Data\m113_track.rvmat","pracs_tracked\tex\m113\m113_track_destruct.rvmat","Ca\Tracked_E\M113\Data\m113_02.rvmat","Ca\Tracked_E\M113\Data\m113_02.rvmat","pracs_tracked\tex\m113\m113_02_destruct.rvmat","Ca\Tracked_E\M113\Data\m113_01.rvmat","Ca\Tracked_E\M113\Data\m113_01.rvmat","pracs_tracked\tex\m113\m113_01_destruct.rvmat","ca\weapons_e\m2\data\m2_ammotray.rvmat","ca\weapons_e\m2\data\m2_ammotray.rvmat","ca\weapons\data\m2_destruct.rvmat","ca\weapons_e\m2\data\m2.rvmat","ca\weapons_e\m2\data\m2.rvmat","ca\weapons\data\m2_destruct.rvmat","Ca\Tracked_E\M113\Data\cargo.rvmat","Ca\Tracked_E\M113\Data\cargo.rvmat","pracs_tracked\tex\m113\cargo_destruct.rvmat","Ca\Tracked_E\M113\Data\walls.rvmat","Ca\Tracked_E\M113\Data\walls.rvmat","pracs_tracked\tex\m113\walls_destruct.rvmat","ca\weapons_e\mk19_minitripod\data\mk19.rvmat","ca\weapons_e\mk19_minitripod\data\mk19.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
		driverAction = "M113_DriverOut";
		driverInAction = "M113_Driver_EP1";
		cargoAction[] = {"Stryker_Cargo01","Stryker_Cargo01","Stryker_Cargo01","Stryker_Cargo01","Stryker_Cargo01","Stryker_Cargo01","Stryker_Cargo01","Stryker_Cargo01","Stryker_Cargo01","Stryker_Cargo01","M113_Cargo02"};
		class Library
		{
			libTextDesc = "US sourced armored personnel carrier";
		};
	};
	class PRACS_M113_M2_M60: PRACS_M113
	{
		ace_sa_enabled = 1;
		model = "\PRACS_Tracked\PRACS_M113_3xM60";
		scope = 2;
		crew = "ACE_USMC_Soldier_Crew_D";
		picture = "\ca\tracked\Data\ico\M113_CA.paa";
		Icon = "\Ca\tracked\Data\map_ico\icomap_m113_CA.paa";
		side = 1;
		displayName = "M113A3 M2 2xM60";
		nameSound = "m113";
		accuracy = 0.3;
		unitInfoType = "UnitInfoShip";
		hasGunner = 1;
		hasCommander = 0;
		canFloat = 1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerAction = "PRACS_M113_Gunner";
				gunnerInAction = "PRACS_M113_Gunner";
				maxTurn = 95;
				minTurn = -95;
			};
			class MainTurretL: MainTurret
			{
				outGunnerMayFire = 1;
				forceHideGunner = 1;
				viewGunnerInExternal = 1;
				gunnerHasFlares = 0;
				body = "mainTurretL";
				gun = "mainGunL";
				animationSourceBody = "MainTurretL";
				animationSourceGun = "mainGunL";
				animationSourceHatch = "";
				selectionFireAnim = "zaslehL";
				proxyIndex = 2;
				gunnerName = "$STR_POSITION_LEFTM60GUNNER";
				gunBeg = "usti hlavneL";
				gunEnd = "konec hlavneL";
				memoryPointGun = "usti hlavneL";
				memoryPointGunnerOptics = "gunnerviewL";
				memoryPointGunnerOutOptics = "gunnerviewL";
				gunnerUsesPilotView = 0;
				gunnerAction = "PRACS_M113_Gunner";
				gunnerInAction = "PRACS_M113_Gunner";
				minElev = -25;
				maxElev = 60;
				maxTurn = 100;
				minTurn = -10;
				initElev = 0;
				soundServo[] = {"\ca\Weapons\Data\Sound\gun_elevate2",0.001,1.0};
				weapons[] = {"PRACS_M60_veh"};
				magazines[] = {"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240"};
				gunnerOpticsModel = "\ca\Weapons\optika_empty";
				gunnerForceOptics = 0;
				gunnerOpticsShowCursor = 0;
				gunnerOutOpticsShowCursor = 0;
			};
			class MainTurretR: MainTurretL
			{
				body = "mainTurretR";
				gun = "mainGunR";
				animationSourceBody = "MainTurretR";
				animationSourceGun = "mainGunR";
				animationSourceHatch = "";
				selectionFireAnim = "zaslehR";
				proxyIndex = 3;
				gunnerName = "$STR_POSITION_RIGHTM60GUNNER";
				gunBeg = "usti hlavneR";
				gunEnd = "konec hlavneR";
				memoryPointGun = "usti hlavneR";
				memoryPointGunnerOptics = "gunnerviewR";
				memoryPointGunnerOutOptics = "gunnerviewR";
				gunnerUsesPilotView = 0;
				maxTurn = 10;
				minTurn = -100;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\Tracked_E\M113\Data\m113_track.rvmat","Ca\Tracked_E\M113\Data\m113_track.rvmat","pracs_tracked\tex\m113\m113_track_destruct.rvmat","Ca\Tracked_E\M113\Data\m113_02.rvmat","Ca\Tracked_E\M113\Data\m113_02.rvmat","pracs_tracked\tex\m113\m113_02_destruct.rvmat","Ca\Tracked_E\M113\Data\m113_01.rvmat","Ca\Tracked_E\M113\Data\m113_01.rvmat","pracs_tracked\tex\m113\m113_01_destruct.rvmat","ca\weapons_e\m2\data\m2_ammotray.rvmat","ca\weapons_e\m2\data\m2_ammotray.rvmat","ca\weapons\data\m2_destruct.rvmat","ca\weapons_e\m2\data\m2.rvmat","ca\weapons_e\m2\data\m2.rvmat","ca\weapons\data\m2_destruct.rvmat","Ca\Tracked_E\M113\Data\cargo.rvmat","Ca\Tracked_E\M113\Data\cargo.rvmat","pracs_tracked\tex\m113\cargo_destruct.rvmat","Ca\Tracked_E\M113\Data\walls.rvmat","Ca\Tracked_E\M113\Data\walls.rvmat","pracs_tracked\tex\m113\walls_destruct.rvmat","ca\weapons_e\mk19_minitripod\data\mk19.rvmat","ca\weapons_e\mk19_minitripod\data\mk19.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
		driverAction = "M113_DriverOut";
		driverInAction = "M113_Driver_EP1";
		cargoAction[] = {"Stryker_Cargo01","Stryker_Cargo01","Stryker_Cargo01","Stryker_Cargo01","Stryker_Cargo01","Stryker_Cargo01","Stryker_Cargo01","Stryker_Cargo01","Stryker_Cargo01","Stryker_Cargo01","M113_Cargo02"};
		class Library
		{
			libTextDesc = "US sourced armored personnel carrier";
		};
	};
	class PRACS_m577_MHQ: PRACS_M113
	{
		accuracy = 1000;
		picture = "\ca\tracked\Data\ico\M113_CA.paa";
		Icon = "\Ca\tracked\Data\map_ico\icomap_m113_CA.paa";
		transportMaxBackpacks = 12;
		scope = 2;
		displayName = "M577 Command Post";
		displayNameShort = "M577 HQ";
		canFloat = 1;
		hasGunner = 1;
		model = "\PRACS_Tracked\PRACS_m577_MHQ.p3d";
		driverAction = "M113_DriverOut";
		driverInAction = "M113_Driver_EP1";
		transportSoldier = 4;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				outGunnerMayFire = 1;
				forceHideGunner = 1;
				viewGunnerInExternal = 1;
				gunnerHasFlares = 0;
				gunnerAction = "HMMWV_Gunner04";
				gunnerInAction = "HMMWV_Gunner04";
				minElev = -25;
				maxElev = 60;
				initElev = 0;
				soundServo[] = {"\ca\Weapons\Data\Sound\gun_elevate2",0.001,1.0};
				weapons[] = {"M240_veh"};
				magazines[] = {"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240"};
				gunnerOpticsModel = "\ca\Weapons\optika_empty";
				gunnerForceOptics = 0;
				gunnerOpticsShowCursor = 0;
				gunnerOutOpticsShowCursor = 0;
				class Turrets{};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.42;
					minFov = 0.22;
					maxFov = 0.64;
				};
			};
		};
		threat[] = {0.0,0.0,0.0};
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		cargoAction[] = {"M113_Cargo01_EP1","M113_Cargo03_EP1","M113_Cargo02_EP1","M113_Cargo02_EP1","M113_Cargo02_EP1","M113_Cargo02_EP1","M113_Cargo03_EP1","M113_Cargo01_EP1","M113_Cargo03_EP1","M113_Cargo03_EP1","M113_Cargo01_EP1"};
		cargoIsCoDriver[] = {0,0,0};
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\Tracked_E\M113\Data\m113_track.rvmat","Ca\Tracked_E\M113\Data\m113_track.rvmat","pracs_tracked\tex\m113\m113_track_destruct.rvmat","Ca\Tracked_E\M113\Data\m113_02.rvmat","Ca\Tracked_E\M113\Data\m113_02.rvmat","pracs_tracked\tex\m113\m113_02_destruct.rvmat","Ca\Tracked_E\M113\Data\m113_01.rvmat","Ca\Tracked_E\M113\Data\m113_01.rvmat","pracs_tracked\tex\m113\m113_01_destruct.rvmat","Ca\Tracked_E\M113\Data\cargo.rvmat","Ca\Tracked_E\M113\Data\cargo.rvmat","pracs_tracked\tex\m113\cargo_destruct.rvmat","Ca\Tracked_E\M113\Data\walls.rvmat","Ca\Tracked_E\M113\Data\walls.rvmat","pracs_tracked\tex\m113\walls_destruct.rvmat"};
		};
		class Library
		{
			libTextDesc = "US Sourced M577 Mobile Headquarters";
		};
	};
	class PRACS_M901_ITV: PRACS_M113
	{
		displayName = "M901 ITV 'Hammerhead'";
		cost = 1000000;
		model = "\pracs_tracked\PRACS_M901_ITV";
		picture = "\x\acex\addons\c_veh_m113\data\picture\m163_vulcan_ca.paa";
		icon = "\x\acex\addons\c_veh_m113\data\icon\icomap_vulcan_ca.paa";
		nameSound = "m163";
		irScanRangeMin = 10;
		irScanRangeMax = 8000;
		irScanGround = 1;
		gunnerCanSee = 31;
		hasCommander = 0;
		canFloat = 1;
		scope = 2;
		driverAction = "M113_DriverOut";
		driverInAction = "M113_Driver_EP1";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				soundServo[] = {"\ca\Weapons\Data\Sound\gun_elevate2",0.001,1.0};
				weapons[] = {"TOWLauncherSingle","SmokeLauncher"};
				magazines[] = {"ACE_TOW2","ACE_TOW2","ACE_TOW2","ACE_TOW2","SmokeLauncherMag","SmokeLauncherMag"};
				minElev = -3;
				maxElev = 70;
				minTurn = -360;
				maxTurn = 360;
				gunnerForceOptics = 1;
				gunnerAction = "PRACS_M113_Gunner";
				gunnerInAction = "PRACS_M113_Gunner";
				outGunnerMayFire = 0;
				forceHideGunner = 1;
				viewGunnerInExternal = 0;
				gunneropticseffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
				gunneropticsmodel = "\ca\Tracked\optika_tank_gunner";
				class OpticsIn
				{
					class Normal
					{
						gunneropticseffect[] = {};
						gunneropticsmodel = "\ca\weapons_e\TOW_TI";
						initanglex = 0;
						initangley = 0;
						initfov = "0.33333/ 3";
						maxanglex = 30;
						maxangley = 100;
						maxfov = "0.33333/ 3";
						minanglex = -30;
						minangley = -100;
						minfov = "0.33333/ 3";
						visionmode[] = {"Normal"};
					};
					class Wide: Normal
					{
						gunneropticseffect[] = {};
						gunneropticsmodel = "\ca\weapons_e\TOW_TI";
						initanglex = 0;
						initangley = 0;
						initfov = "0.33333/ 4";
						maxanglex = 30;
						maxangley = 100;
						maxfov = "0.33333/ 4";
						minanglex = -30;
						minangley = -100;
						minfov = "0.33333/ 4";
						thermalmode[] = {2,3};
						visionmode[] = {"Normal","Ti"};
					};
					class Narrow: Wide
					{
						gunneropticsmodel = "\ca\weapons_e\TOW_TI";
						initfov = "0.33333/ 12";
						maxfov = "0.33333/ 12";
						minfov = "0.33333/ 12";
					};
				};
			};
		};
		threat[] = {1,0.5,1};
		typicalCargo[] = {"SoldierWCrew","SoldierWCrew"};
		transportSoldier = 0;
		class Damage
		{
			tex[] = {};
			mat[] = {"pracs_tracked\tex\m113\m163_01_metal.rvmat","pracs_tracked\tex\m113\m163_01_metal.rvmat","pracs_tracked\tex\m113\m163_01_metal_destruct.rvmat","pracs_tracked\tex\m113\m163_02_metal.rvmat","pracs_tracked\tex\m113\m163_02_metal.rvmat","pracs_tracked\tex\m113\m163_02_metal_destruct.rvmat","ca\tracked_e\m113\data\m113_track.rvmat","ca\tracked_e\m113\data\m113_track.rvmat","ca\tracked_e\m113\data\m113_track_destruct.rvmat","ca\tracked_e\m113\data\cargo.rvmat","ca\tracked_e\m113\data\cargo.rvmat","ca\tracked_e\m113\data\cargo_destruct.rvmat","ca\tracked_e\m113\data\walls.rvmat","ca\tracked_e\m113\data\walls.rvmat","pracs_tracked\tex\m113\walls_destruct.rvmat","pracs_tracked\tex\m113\m60_gunmut.rvmat","pracs_tracked\tex\m113\m60_gunmut.rvmat","pracs_tracked\tex\m113\walls_destruct.rvmat","pracs_tracked\tex\m113\m60_gun.rvmat","pracs_tracked\tex\m113\m60_gun.rvmat","pracs_tracked\tex\m113\walls_destruct.rvmat","pracs_tracked\tex\m113\m1919.rvmat","pracs_tracked\tex\m113\m1919.rvmat","pracs_tracked\tex\m113\walls_destruct.rvmat","ca\tracked_e\m113\data\m113_01.rvmat","ca\tracked_e\m113\data\m113_01.rvmat","pracs_tracked\tex\m113\m113_01_destruct.rvmat"};
		};
		class Library
		{
			libTextDesc = "M901 Improved TOW vehicle";
		};
	};
	class PRACS_FV101: Tank
	{
		ace_armor_hull[] = {{15,15},{10,10},{10,10},{10,10},{10,10},{10,10}};
		ace_armor_turret[] = {{23,23},{19,19},{19,19},{13,13},{6,6}};
		ace_era = 0;
		ace_minimalhit[] = {18,40};
		ace_p_detonation_engine = 0;
		ace_p_detonation_hull = 0.8;
		ace_p_detonation_turret = 0.2;
		ace_p_firedetonation = 0.5;
		ace_p_fire_engine = 0.8;
		ace_p_fire_hull = 0.8;
		ace_p_fire_turret = 0.5;
		ace_maxload = 4500;
		ace_weight = 10000;
		ACE_canBeCargo = 0;
		ACE_canBeLoad = 1;
		ACE_canGear = 0;
		ACE_canLoadFront = 0;
		canFloat = 1;
		scope = 2;
		displayName = "$STR_pracs_FV101";
		cost = 1000000;
		model = "\pracs_tracked\PRACS_FV101";
		picture = "\x\acex\addons\c_veh_m113\data\picture\m163_vulcan_ca.paa";
		icon = "\x\acex\addons\c_veh_m113\data\icon\icomap_vulcan_ca.paa";
		mapSize = 5;
		maxSpeed = 87;
		nameSound = "tank";
		driverAction = "BMP2_Driver";
		driverInAction = "BMP2_Driver";
		driverOpticsModel = "\ca\Tracked\optika_tank_driver";
		driverForceOptics = 1;
		forceHideDriver = 1;
		irScanRangeMin = 10;
		irScanRangeMax = 8000;
		irScanGround = 1;
		gunnerCanSee = 31;
		hasCommander = 1;
		transportSoldier = 0;
		armor = 160;
		radarType = 0;
		side = 1;
		vehicleClass = "ArmoredPRACS";
		faction = "smd_racs_faction";
		crew = "ACE_USMC_Soldier_Crew_D";
		smokeLauncherGrenadeCount = 16;
		smokeLauncherVelocity = 15;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 120;
		ace_sys_reticles_gunneroptics = 1;
		ace_sys_reticles_gunnersight = "OP_L23A1";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				soundServo[] = {"\ca\Weapons\Data\Sound\gun_elevate2",0.001,1.0};
				weapons[] = {"ap_L23A1","BAF_L94A1"};
				magazines[] = {"15Rnd_76mmHEAT_L23A1","25Rnd_76mmHE_L23A1","2000Rnd_762x51_L94A1"};
				stabilizedInAxes = 0;
				minElev = -10;
				maxElev = 35;
				minTurn = -360;
				maxTurn = 360;
				body = "OtocVez";
				gun = "OtocHlaven";
				animationSourceHatch = "hatchGunner";
				gunnerForceOptics = 1;
				memoryPointGun = "kulas";
				gunnerAction = "Abrams_CommanderOut";
				gunnerInAction = "Abrams_Commander";
				forceHideGunner = 0;
				outGunnerMayFire = 0;
				turretInfoType = "RscWeaponZeroing";
				discreteDistance[] = {};
				discreteDistanceInitIndex = 2;
				class OpticsIn
				{
					class L84A1
					{
						gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
						gunnerOpticsModel = "\x\ace\addons\m_veh_optics\optics_empty";
						initAngleX = 0;
						initAngleY = 0;
						initFov = 0.14;
						maxAngleX = 110;
						maxAngleY = 110;
						maxFov = 0.14;
						minAngleX = -110;
						minAngleY = -110;
						minFov = 0.14;
						visionMode[] = {"Normal","NVG"};
					};
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						body = "";
						gun = "";
						animationSourceBody = "obsTurret";
						animationSourceGun = "obsGun";
						memoryPointGunnerOutOptics = "commanderview";
						memoryPointGunnerOptics = "commanderview";
						minElev = -10;
						maxElev = 40;
						initElev = 0;
						minTurn = -360;
						maxTurn = 360;
						initTurn = 0;
						weapons[] = {"SmokeLauncher"};
						magazines[] = {"SmokeLauncherMag","SmokeLauncherMag"};
						soundServo[] = {"",0.01,1.0,30};
						outGunnerMayFire = 0;
						inGunnerMayFire = 1;
						gunnerAction = "Abrams_CommanderOut";
						gunnerInAction = "Abrams_Commander";
						gunnerGetInAction = "GetInHigh";
						gunnerGetOutAction = "GetOutHigh";
						turretInfoType = "RscWeaponZeroing";
						gunnerOpticsModel = "\ca\tracked_d_baf\2Dscope_RWS_baf";
						gunnerOpticsEffect[] = {};
						class ViewOptics
						{
							initAngleX = 0;
							initAngleY = 0;
							initFov = "0.33333/ 3";
							maxAngleX = 30;
							maxAngleY = 100;
							maxFov = "0.33333/ 3";
							minAngleX = -30;
							minAngleY = -100;
							minFov = "0.33333/ 3";
							visionMode[] = {"Normal","NVG"};
						};
						startEngine = 0;
					};
				};
			};
		};
		threat[] = {1,0.5,1};
		typicalCargo[] = {"SoldierWCrew","SoldierWCrew"};
		class AnimationSources: AnimationSources
		{
			class gunBarrel
			{
				source = "reload";
				weapon = "ap_L23A1";
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"pracs_tracked\tex\fv\fv107.rvmat","pracs_tracked\tex\fv\fv107_DM.rvmat","pracs_tracked\tex\fv\fv107_de.rvmat"};
		};
		class Library
		{
			libTextDesc = "Widely exported vehicle produced by Alvis of Great Britain";
		};
		insideSoundCoef = 0.9;
		soundGear[] = {"",5.62341e-005,1};
		soundGetIn[] = {"ca\SOUNDS\Vehicles\Tracked\Other\int\int-tracked-getin-01",0.562341,1};
		soundGetOut[] = {"ca\SOUNDS\Vehicles\Tracked\Other\ext\ext-tracked-getout-01",0.562341,1,60};
		soundEngineOnInt[] = {"ca\sounds\Vehicles\Tracked\Other\int\int-tracked-start-01",1.0,1.0};
		soundEngineOnExt[] = {"ca\SOUNDS\Vehicles\Tracked\Other\ext\ext-tracked-start-01",2.51189,1.0,500};
		soundEngineOffInt[] = {"ca\sounds\vehicles\Tracked\Other\int\int-tracked-stop-02.wss",1.0,1.0};
		soundEngineOffExt[] = {"ca\sounds\vehicles\Tracked\Other\ext\ext-tracked-stop-02.wss",1.25893,0.8,500};
		buildCrash0[] = {"Ca\sounds\Vehicles\Crash\tank_building_01",0.707946,1,150};
		buildCrash1[] = {"Ca\sounds\Vehicles\Crash\tank_building_02",0.707946,1,150};
		buildCrash2[] = {"Ca\sounds\Vehicles\Crash\tank_building_03",0.707946,1,150};
		buildCrash3[] = {"Ca\sounds\Vehicles\Crash\tank_building_04",0.707946,1,150};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"Ca\sounds\Vehicles\Crash\tank_wood_01",0.707946,1,150};
		WoodCrash1[] = {"Ca\sounds\Vehicles\Crash\tank_wood_02",0.707946,1,150};
		WoodCrash2[] = {"Ca\sounds\Vehicles\Crash\tank_wood_03",0.707946,1,150};
		WoodCrash3[] = {"Ca\sounds\Vehicles\Crash\tank_wood_04",0.707946,1,150};
		soundWoodCrash[] = {"woodCrash0",0.25,"woodCrash1",0.25,"woodCrash2",0.25,"woodCrash3",0.25};
		ArmorCrash0[] = {"Ca\sounds\Vehicles\Crash\tank_vehicle_01",0.707946,1,150};
		ArmorCrash1[] = {"Ca\sounds\Vehicles\Crash\tank_vehicle_02",0.707946,1,150};
		ArmorCrash2[] = {"Ca\sounds\Vehicles\Crash\tank_vehicle_03",0.707946,1,150};
		ArmorCrash3[] = {"Ca\sounds\Vehicles\Crash\tank_vehicle_04",0.707946,1,150};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\ca\tracked2\bmp3\data\bmp3_body_co.paa","\ca\tracked2\bmp3\data\bmp3_body2_co.paa","\ca\tracked2\bmp3\data\bmp3_wheels_co.paa"};
		class SoundEvents
		{
			class AccelerationIn
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\int-tracked-acce-02",0.31622776,1.0};
				limit = 0.15;
				expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
			class AccelerationOut
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\ext-tracked-acce-02",1.0,1.0,700};
				limit = 0.15;
				expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
		};
		class Sounds
		{
			class Engine
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\ext-tracked-engine-02",1.4125376,1.0,900};
				frequency = "(randomizer*0.05+0.8)*rpm";
				volume = "engineOn*camPos*(rpm factor[0.4, 0.9])";
			};
			class IdleOut
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\ext-tracked-idle-02",0.630957,1.0,300};
				frequency = "1";
				volume = "engineOn*camPos*(rpm factor[0.6, 0.15])";
			};
			class NoiseOut
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\noise2",1.0,1.0,150};
				frequency = "1";
				volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsOutH0
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\sherman_05",1.1220185,1.0,280};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsOutH1
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\sherman_04",1.2589254,1.0,280};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsOutH2
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\sherman_03",1.4125376,1.0,280};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsOutH3
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\sherman_02",1.5848932,1.0,280};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsOutH4
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\sherman_01",1.7782794,1.0,280};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
			class ThreadsOutS0
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\sherman_05",1.0,1.0,280};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsOutS1
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\sherman_04",1.1220185,1.0,280};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsOutS2
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\sherman_03",1.2589254,1.0,280};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsOutS3
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\sherman_02",1.5848932,1.0,280};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsOutS4
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\sherman_01",1.7782794,1.0,280};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
			class Movement
			{
				sound[] = {"",1.0,1.0};
				frequency = "0";
				volume = "0";
			};
			class EngineIn
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\int-tracked-engine-02",1.0,1.0};
				frequency = "(randomizer*0.05+0.8)*rpm";
				volume = "engineOn*(1-camPos)*(rpm factor[0.4, 1])";
			};
			class IdleIn
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\int-tracked-idle-02",0.70794576,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(rpm factor[0.6, 0.15])";
			};
			class NoiseIn
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\noise2",0.2238721,1.0};
				frequency = "1";
				volume = "(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsInH0
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\sherman_05",0.562341,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsInH1
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\sherman_04",0.630957,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsInH2
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\sherman_03",0.70794576,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsInH3
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\sherman_02",0.7943282,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsInH4
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\sherman_01",0.8912509,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
			class ThreadsInS0
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\sherman_05",0.562341,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsInS1
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\sherman_04",0.630957,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsInS2
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\sherman_03",0.70794576,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsInS3
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\sherman_02",0.7943282,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsInS4
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\sherman_01",0.8912509,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
		};
	};
	class PRACS_FV107: Tank
	{
		ace_armor_hull[] = {{15,15},{10,10},{10,10},{10,10},{10,10},{10,10}};
		ace_armor_turret[] = {{23,23},{19,19},{19,19},{13,13},{6,6}};
		ace_era = 0;
		ace_minimalhit[] = {18,40};
		ace_p_detonation_engine = 0;
		ace_p_detonation_hull = 0.8;
		ace_p_detonation_turret = 0.2;
		ace_p_firedetonation = 0.5;
		ace_p_fire_engine = 0.8;
		ace_p_fire_hull = 0.8;
		ace_p_fire_turret = 0.5;
		ace_maxload = 4500;
		ace_weight = 10000;
		ACE_canBeCargo = 0;
		ACE_canBeLoad = 1;
		ACE_canGear = 0;
		ACE_canLoadFront = 0;
		canFloat = 1;
		ace_firepos[] = {0.5,1.5,-1};
		scope = 2;
		displayName = "$STR_pracs_FV107";
		cost = 1000000;
		maxSpeed = 87;
		model = "\pracs_tracked\PRACS_FV107";
		picture = "\x\acex\addons\c_veh_m113\data\picture\m163_vulcan_ca.paa";
		icon = "\x\acex\addons\c_veh_m113\data\icon\icomap_vulcan_ca.paa";
		mapSize = 5;
		nameSound = "tank";
		driverAction = "BMP2_Driver";
		driverInAction = "BMP2_Driver";
		driverOpticsModel = "\ca\Tracked\optika_tank_driver";
		driverForceOptics = 1;
		forceHideDriver = 1;
		irScanRangeMin = 10;
		irScanRangeMax = 8000;
		irScanGround = 1;
		gunnerCanSee = 31;
		hasCommander = 1;
		transportSoldier = 0;
		armor = 160;
		radarType = 0;
		side = 1;
		vehicleClass = "ArmoredPRACS";
		faction = "smd_racs_faction";
		crew = "ACE_USMC_Soldier_Crew_D";
		smokeLauncherGrenadeCount = 16;
		smokeLauncherVelocity = 15;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 120;
		ace_sys_reticles_gunneroptics = 1;
		ace_sys_reticles_gunnersight = "OP_L21A1";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				soundServo[] = {"\ca\Weapons\Data\Sound\gun_elevate2",0.001,1.0};
				weapons[] = {"ap_L21A1","BAF_L94A1"};
				magazines[] = {"120Rnd_30mmHE_L21A1","80Rnd_30mmAP_L21A1","2000Rnd_762x51_L94A1"};
				stabilizedInAxes = 0;
				minElev = -10;
				maxElev = 35;
				minTurn = -360;
				maxTurn = 360;
				body = "OtocVez";
				gun = "OtocHlaven";
				animationSourceHatch = "hatchGunner";
				gunnerForceOptics = 1;
				memoryPointGun = "kulas";
				gunnerAction = "Abrams_CommanderOut";
				gunnerInAction = "Abrams_Commander";
				forceHideGunner = 0;
				outGunnerMayFire = 0;
				turretInfoType = "RscWeaponZeroing";
				discreteDistance[] = {};
				discreteDistanceInitIndex = 2;
				class OpticsIn
				{
					class L94A1
					{
						gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
						gunnerOpticsModel = "\x\ace\addons\m_veh_optics\optics_empty";
						initAngleX = 0;
						initAngleY = 0;
						initFov = 0.071;
						maxAngleX = 110;
						maxAngleY = 110;
						maxFov = 0.071;
						minAngleX = -110;
						minAngleY = -110;
						minFov = 0.071;
						visionMode[] = {"Normal","NVG"};
					};
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						body = "";
						gun = "";
						animationSourceBody = "obsTurret";
						animationSourceGun = "obsGun";
						memoryPointGunnerOutOptics = "commanderview";
						memoryPointGunnerOptics = "commanderview";
						minElev = -10;
						maxElev = 40;
						initElev = 0;
						minTurn = -360;
						maxTurn = 360;
						initTurn = 0;
						weapons[] = {"SmokeLauncher"};
						magazines[] = {"SmokeLauncherMag","SmokeLauncherMag"};
						soundServo[] = {"",0.01,1.0,30};
						outGunnerMayFire = 0;
						inGunnerMayFire = 1;
						gunnerAction = "Abrams_CommanderOut";
						gunnerInAction = "Abrams_Commander";
						gunnerGetInAction = "GetInHigh";
						gunnerGetOutAction = "GetOutHigh";
						turretInfoType = "RscWeaponZeroing";
						gunnerOpticsModel = "\ca\tracked_d_baf\2Dscope_RWS_baf";
						gunnerOpticsEffect[] = {};
						class ViewOptics
						{
							initAngleX = 0;
							initAngleY = 0;
							initFov = "0.33333/ 3";
							maxAngleX = 30;
							maxAngleY = 100;
							maxFov = "0.33333/ 3";
							minAngleX = -30;
							minAngleY = -100;
							minFov = "0.33333/ 3";
							visionMode[] = {"Normal","NVG"};
						};
						startEngine = 0;
					};
				};
			};
		};
		threat[] = {1,0.5,1};
		typicalCargo[] = {"SoldierWCrew","SoldierWCrew"};
		class AnimationSources: AnimationSources
		{
			class gunBarrel
			{
				source = "reload";
				weapon = "ap_L21A1";
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"pracs_tracked\tex\fv\fv107.rvmat","pracs_tracked\tex\fv\fv107_DM.rvmat","pracs_tracked\tex\fv\fv107_de.rvmat"};
		};
		class Library
		{
			libTextDesc = "Widely exported vehicle produced by Alvis of Great Britain";
		};
		insideSoundCoef = 0.9;
		soundGear[] = {"",5.62341e-005,1};
		soundGetIn[] = {"ca\SOUNDS\Vehicles\Tracked\Other\int\int-tracked-getin-01",0.562341,1};
		soundGetOut[] = {"ca\SOUNDS\Vehicles\Tracked\Other\ext\ext-tracked-getout-01",0.562341,1,60};
		soundEngineOnInt[] = {"ca\sounds\Vehicles\Tracked\Other\int\int-tracked-start-01",1.0,1.0};
		soundEngineOnExt[] = {"ca\SOUNDS\Vehicles\Tracked\Other\ext\ext-tracked-start-01",2.51189,1.0,500};
		soundEngineOffInt[] = {"ca\sounds\vehicles\Tracked\Other\int\int-tracked-stop-02.wss",1.0,1.0};
		soundEngineOffExt[] = {"ca\sounds\vehicles\Tracked\Other\ext\ext-tracked-stop-02.wss",1.25893,0.8,500};
		buildCrash0[] = {"Ca\sounds\Vehicles\Crash\tank_building_01",0.707946,1,150};
		buildCrash1[] = {"Ca\sounds\Vehicles\Crash\tank_building_02",0.707946,1,150};
		buildCrash2[] = {"Ca\sounds\Vehicles\Crash\tank_building_03",0.707946,1,150};
		buildCrash3[] = {"Ca\sounds\Vehicles\Crash\tank_building_04",0.707946,1,150};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"Ca\sounds\Vehicles\Crash\tank_wood_01",0.707946,1,150};
		WoodCrash1[] = {"Ca\sounds\Vehicles\Crash\tank_wood_02",0.707946,1,150};
		WoodCrash2[] = {"Ca\sounds\Vehicles\Crash\tank_wood_03",0.707946,1,150};
		WoodCrash3[] = {"Ca\sounds\Vehicles\Crash\tank_wood_04",0.707946,1,150};
		soundWoodCrash[] = {"woodCrash0",0.25,"woodCrash1",0.25,"woodCrash2",0.25,"woodCrash3",0.25};
		ArmorCrash0[] = {"Ca\sounds\Vehicles\Crash\tank_vehicle_01",0.707946,1,150};
		ArmorCrash1[] = {"Ca\sounds\Vehicles\Crash\tank_vehicle_02",0.707946,1,150};
		ArmorCrash2[] = {"Ca\sounds\Vehicles\Crash\tank_vehicle_03",0.707946,1,150};
		ArmorCrash3[] = {"Ca\sounds\Vehicles\Crash\tank_vehicle_04",0.707946,1,150};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\ca\tracked2\bmp3\data\bmp3_body_co.paa","\ca\tracked2\bmp3\data\bmp3_body2_co.paa","\ca\tracked2\bmp3\data\bmp3_wheels_co.paa"};
		class SoundEvents
		{
			class AccelerationIn
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\int-tracked-acce-02",0.31622776,1.0};
				limit = 0.15;
				expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
			class AccelerationOut
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\ext-tracked-acce-02",1.0,1.0,700};
				limit = 0.15;
				expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
		};
		class Sounds
		{
			class Engine
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\ext-tracked-engine-02",1.4125376,1.0,900};
				frequency = "(randomizer*0.05+0.8)*rpm";
				volume = "engineOn*camPos*(rpm factor[0.4, 0.9])";
			};
			class IdleOut
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\ext-tracked-idle-02",0.630957,1.0,300};
				frequency = "1";
				volume = "engineOn*camPos*(rpm factor[0.6, 0.15])";
			};
			class NoiseOut
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\noise2",1.0,1.0,150};
				frequency = "1";
				volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsOutH0
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\sherman_05",1.1220185,1.0,280};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsOutH1
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\sherman_04",1.2589254,1.0,280};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsOutH2
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\sherman_03",1.4125376,1.0,280};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsOutH3
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\sherman_02",1.5848932,1.0,280};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsOutH4
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\sherman_01",1.7782794,1.0,280};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
			class ThreadsOutS0
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\sherman_05",1.0,1.0,280};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsOutS1
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\sherman_04",1.1220185,1.0,280};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsOutS2
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\sherman_03",1.2589254,1.0,280};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsOutS3
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\sherman_02",1.5848932,1.0,280};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsOutS4
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\sherman_01",1.7782794,1.0,280};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
			class Movement
			{
				sound[] = {"",1.0,1.0};
				frequency = "0";
				volume = "0";
			};
			class EngineIn
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\int-tracked-engine-02",1.0,1.0};
				frequency = "(randomizer*0.05+0.8)*rpm";
				volume = "engineOn*(1-camPos)*(rpm factor[0.4, 1])";
			};
			class IdleIn
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\int-tracked-idle-02",0.70794576,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(rpm factor[0.6, 0.15])";
			};
			class NoiseIn
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\noise2",0.2238721,1.0};
				frequency = "1";
				volume = "(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsInH0
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\sherman_05",0.562341,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsInH1
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\sherman_04",0.630957,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsInH2
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\sherman_03",0.70794576,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsInH3
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\sherman_02",0.7943282,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsInH4
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\sherman_01",0.8912509,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
			class ThreadsInS0
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\sherman_05",0.562341,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsInS1
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\sherman_04",0.630957,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsInS2
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\sherman_03",0.70794576,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsInS3
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\sherman_02",0.7943282,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsInS4
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\sherman_01",0.8912509,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
		};
	};
	class M1A1_US_DES_EP1;
	class PRACS_M1A1: M1A1_US_DES_EP1
	{
		displayName = "M1A1 'Sahrani Lion'";
		vehicleClass = "ArmoredPRACS";
		faction = "smd_racs_faction";
		crew = "ACE_USMC_Soldier_Crew_D";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","n1","n2","t1","t2","t3_l","t3_r","t4","t5_notusedhere","clan_sign","mineprotection","cmg_thermal","loader_armour","loader_tws","arat1_l","arat1_r","csamm","smk_hc","t5"};
		hiddenSelectionsTextures[] = {"\pracs_tracked\tex\M1A1\m1abrams_01_co.paa","\pracs_tracked\tex\M1A1\m1abrams_02_co.paa","\pracs_tracked\tex\M1A1\m1abrams_03_co.paa","\x\acex\addons\t_veh_m1\desert\m1abrams_04_co.paa","\x\acex\addons\t_veh_m1\desert\m1abrams_track_co.paa"};
	};
	class SUV_TK_EP1;
	class SUV_SMD_RACS_DIGI: SUV_TK_EP1
	{
		side = 1;
		faction = "smd_racs_faction";
		vehicleClass = "CarPRACS";
	};
	class SUV_SMD_RACS: SUV_TK_EP1
	{
		side = 1;
		faction = "smd_racs_faction";
		vehicleClass = "CarPRACS";
	};
	class SUV_SMD_BLOPS_DIGI: SUV_TK_EP1
	{
		side = 1;
		faction = "smd_racs_faction";
		vehicleClass = "CarPRACS";
	};
	class SUV_SMD_BLOPS: SUV_TK_EP1
	{
		side = 1;
		faction = "smd_racs_faction";
		vehicleClass = "CarPRACS";
	};
	class SUV_SMD_ATACS: SUV_TK_EP1
	{
		side = 1;
		faction = "smd_racs_faction";
		vehicleClass = "CarPRACS";
	};
	class HMMWV_TOW;
	class HMMWV;
	class HMMWV_MK19;
	class HMMWV_M2;
	class HMMWV_TOW_SMD_BLOPS_DIGI: HMMWV_TOW
	{
		side = 1;
		faction = "smd_racs_faction";
		vehicleClass = "CarPRACS";
	};
	class HMMWV_TOW_SMD_BLOPS: HMMWV_TOW
	{
		side = 1;
		faction = "smd_racs_faction";
		vehicleClass = "CarPRACS";
	};
	class HMMWV_TOW_SMD_ATACS: HMMWV_TOW
	{
		side = 1;
		faction = "smd_racs_faction";
		vehicleClass = "CarPRACS";
	};
	class HMMWV_TOW_SMD_RACS: HMMWV_TOW
	{
		side = 1;
		faction = "smd_racs_faction";
		vehicleClass = "CarPRACS";
	};
	class HMMWV_TOW_SMD_RACS_DIGI: HMMWV_TOW
	{
		side = 1;
		faction = "smd_racs_faction";
		vehicleClass = "CarPRACS";
	};
	class HMMWV_MK19_SMD_ATACS: HMMWV_MK19
	{
		side = 1;
		faction = "smd_racs_faction";
		vehicleClass = "CarPRACS";
	};
	class HMMWV_MK19_SMD_BLOPS_DIGI: HMMWV_MK19
	{
		side = 1;
		faction = "smd_racs_faction";
		vehicleClass = "CarPRACS";
	};
	class HMMWV_MK19_SMD_BLOPS: HMMWV_MK19
	{
		side = 1;
		faction = "smd_racs_faction";
		vehicleClass = "CarPRACS";
	};
	class HMMWV_MK19_SMD_RACS_DIGI: HMMWV_MK19
	{
		side = 1;
		faction = "smd_racs_faction";
		vehicleClass = "CarPRACS";
	};
	class HMMWV_MK19_SMD_RACS: HMMWV_MK19
	{
		side = 1;
		faction = "smd_racs_faction";
		vehicleClass = "CarPRACS";
	};
	class HMMWV_M2_SMD_BLOPS_DIGI: HMMWV_M2
	{
		side = 1;
		faction = "smd_racs_faction";
		vehicleClass = "CarPRACS";
	};
	class HMMWV_M2_SMD_BLOPS: HMMWV_M2
	{
		side = 1;
		faction = "smd_racs_faction";
		vehicleClass = "CarPRACS";
	};
	class HMMWV_M2_SMD_ATACS: HMMWV_M2
	{
		side = 1;
		faction = "smd_racs_faction";
		vehicleClass = "CarPRACS";
	};
	class HMMWV_M2_SMD_RACS_DIGI: HMMWV_M2
	{
		side = 1;
		faction = "smd_racs_faction";
		vehicleClass = "CarPRACS";
	};
	class HMMWV_M2_SMD_RACS: HMMWV_M2
	{
		side = 1;
		faction = "smd_racs_faction";
		vehicleClass = "CarPRACS";
	};
	class HMMWV_SMD_ATACS: HMMWV
	{
		side = 1;
		faction = "smd_racs_faction";
		vehicleClass = "CarPRACS";
	};
	class HMMWV_SMD_BLOPS: HMMWV
	{
		side = 1;
		faction = "smd_racs_faction";
		vehicleClass = "CarPRACS";
	};
	class HMMWV_SMD_BLOPS_DIGI: HMMWV
	{
		side = 1;
		faction = "smd_racs_faction";
		vehicleClass = "CarPRACS";
	};
	class HMMWV_SMD_RACS_DIGI: HMMWV
	{
		side = 1;
		faction = "smd_racs_faction";
		vehicleClass = "CarPRACS";
	};
	class HMMWV_SMD_RACS: HMMWV
	{
		side = 1;
		faction = "smd_racs_faction";
		vehicleClass = "CarPRACS";
	};
	class HMMWV_Avenger_DES_EP1;
	class HMMWV_Avenger_SMD_RACS_DIGI: HMMWV_Avenger_DES_EP1
	{
		displayName = "HMMWV-Avenger RACS Digital";
		side = 1;
		faction = "smd_racs_faction";
		vehicleClass = "CarPRACS";
		hiddenSelectionsTextures[] = {"smd\smd_assets\vehicles\textures\smd_veh_hmmwv_racs_digi_body_us_co.paa","\pracs_tracked\tex\m998a2\M998A2_Avenger_1_US_CO.paa","\pracs_tracked\tex\m998a2\M998A2_Avenger_3_US_CO.paa"};
	};
	class HMMWV_Avenger_SMD_RACS: HMMWV_Avenger_SMD_RACS_DIGI
	{
		displayName = "HMMWV-Avenger RACS";
		hiddenSelectionsTextures[] = {"smd\smd_assets\vehicles\textures\smd_veh_hmmwv_racs_body_us_co.paa","\pracs_tracked\tex\m998a2\M998A2_Avenger_1_US_CO.paa","\pracs_tracked\tex\m998a2\M998A2_Avenger_3_US_CO.paa"};
	};
	class HMMWV_Ambulance_DES_EP1;
	class HMMWV_Ambulance_SMD_RACS_DIGI: HMMWV_Ambulance_DES_EP1
	{
		displayName = "HMMWV RACS Digital (Ambulance)";
		side = 1;
		faction = "smd_racs_faction";
		vehicleClass = "CarPRACS";
		hiddenSelectionsTextures[] = {"smd\smd_assets\vehicles\textures\smd_veh_hmmwv_racs_digi_body_us_co.paa","\ca\wheeled\hmmwv\data\hmmwv_parts_1_ca.paa"};
	};
	class HMMWV_SMD_Ambulance_SMD_RACS: HMMWV_Ambulance_SMD_RACS_DIGI
	{
		displayName = "HMMWV RACS (Ambulance)";
		hiddenSelectionsTextures[] = {"smd\smd_assets\vehicles\textures\smd_veh_hmmwv_racs_body_us_co.paa","\ca\wheeled\hmmwv\data\hmmwv_parts_1_ca.paa"};
	};
	class LandRover_CZ_EP1;
	class LandRover_SMD_RACS: LandRover_CZ_EP1
	{
		side = 1;
		faction = "smd_racs_faction";
		vehicleClass = "CarPRACS";
	};
	class LandRover_SMD_RACS_DIGI: LandRover_SMD_RACS
	{
		side = 1;
		faction = "smd_racs_faction";
		vehicleClass = "CarPRACS";
	};
};
class ACE_Config
{
	class cfgVehicleOpticsReticles
	{
		class OP_L21A1
		{
			ace_sys_reticles_checkweapon = "AP_L21A1";
			ace_sys_reticles_fov0 = 0.05689;
			ace_sys_reticles_illum = 1;
			ace_sys_reticles_illumcolor[] = {0.7412,0,0,1};
			ace_sys_reticles_pxmil = 0;
			ace_sys_reticles_texmap = 1;
			ace_sys_reticles_texreticle = "\pracs_tracked\tex\aim\L21A1_w.paa";
			ace_sys_reticles_texreticle_n = "\pracs_tracked\tex\aim\L21A1_n_w.paa";
			ace_sys_reticles_texsize = 1024;
			ace_sys_reticles_texstatic = "";
		};
		class OP_L23A1
		{
			ace_sys_reticles_checkweapon = "AP_L23A1";
			ace_sys_reticles_fov0 = "0.11.3";
			ace_sys_reticles_illum = 1;
			ace_sys_reticles_illumcolor[] = {0.7412,0,0,1};
			ace_sys_reticles_pxmil = 0;
			ace_sys_reticles_texmap = 1;
			ace_sys_reticles_texreticle = "\pracs_tracked\tex\aim\L23A1_w.paa";
			ace_sys_reticles_texreticle_n = "\pracs_tracked\tex\aim\L23A1_n_w.paa";
			ace_sys_reticles_texsize = 1024;
			ace_sys_reticles_texstatic = "";
		};
		class OP_M48
		{
			ace_sys_reticles_checkweapon = "ap_M41";
			ace_sys_reticles_fov0 = "0.11.3";
			ace_sys_reticles_illum = 1;
			ace_sys_reticles_illumcolor[] = {0.7412,0,0,1};
			ace_sys_reticles_pxmil = 0;
			ace_sys_reticles_texmap = 1;
			ace_sys_reticles_texreticle = "\pracs_tracked\tex\aim\M41_w.paa";
			ace_sys_reticles_texreticle_n = "\pracs_tracked\tex\aim\M41_n_w.paa";
			ace_sys_reticles_texsize = 1024;
			ace_sys_reticles_texstatic = "";
		};
	};
};
