#define _ARMA_

class CfgPatches
{
	class ap_rhs_vehicles
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"ace_main","ace_c_vehicle","CATracked2","CAWheeled2","balca_CE","retex_vehicles","acex_veh_btr70","rhs_cargosystem","ace_sys_reticles","acex_veh_5ton"};
	};
};

class CfgCloudlets
{
	class Default;
	class MachineGunCartridge2;
	class RHS_Tank_Catridge: MachineGunCartridge2
	{
		interval = 5.56;
		lifeTime = 60;
		size[] = {2};
		position[] = {0,0,0};
		moveVelocity[] = {-3,-3,-6};
		particleShape = "\ap_rhs_vehicles\shells\rhs_casing_30mm.p3d";
	};
};

class CfgMagazines 
{
	class 250Rnd_30mmAP_2A72;
	class AP_130Rnd_30mmAP_2A72 : 250Rnd_30mmAP_2A72 
	{
		count = 130;
	};

	class 250Rnd_30mmHE_2A72;
	class AP_170Rnd_30mmHE_2A72 : 250Rnd_30mmHE_2A72 
	{
		count = 170;
	};
};

class CfgWeapons
{
	class 2A72;
	class ACE_2A72: 2A72 
	{
		magazines[] = {"250Rnd_30mmAP_2A72","250Rnd_30mmHE_2A72","AP_170Rnd_30mmHE_2A72","AP_130Rnd_30mmAP_2A72"};
	};
	
	class ACE_2A46M_1;
	class AP_2A75: ACE_2A46M_1
	{
		displayName="$STR_2A75";
	};
};

class WeaponCloudsMGun;
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class NewTurret;
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
			class HitBody;
		};
		class Turrets
		{
			class MainTurret;
		};
	};
	class Wheeled_APC: Car {};
	class Truck: Car {};
	class ACE_Truck5tMG_Base : Truck 
	{
		class AnimationSources;
	};
	class BRDM2_Base: Wheeled_APC
	{
		class Turrets
		{
			class MainTurret;
		};
		class AnimationSources;
	};
	class BTR60_TK_EP1: BRDM2_Base
	{
		class Turrets: Turrets
		{
			class MainTurret;
			class CommanderTurret;
		};
		class AnimationSources;
	};
	class AP_BTR80_Base: BTR60_TK_EP1
	{
		damageResistance = 0.01849;
		scope = 1;
		picture = "\x\acex\addons\c_veh_btr70\data\picture\rhs_btr70_icon_ca.paa";
		Icon = "\ap_rhs_vehicles\data\rhs_btr80_icon_ca.paa";
		model = "\ap_rhs_vehicles\rhs_btr80.p3d";
		displayName = "$STR_btr80";
		class Library
		{
			libTextDesc = "$STR_btr80_LIB";
		};
		threat[] = {1,0.3,0.6};
		cargogetinaction[] = {"GetInLow"};
		cargogetoutaction[] = {"GetOutLow"};
		ace_sys_eject_side = 1;
		class AnimationSources: AnimationSources
		{
			class driverViewHatch
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class commanderViewHatch: driverViewHatch{};
			//class dHatch: driverViewHatch{};
			//class cHatch: driverViewHatch{};
			class l_door: driverViewHatch{};
			class r_door: l_door{};
			class windows: l_door{};
			class t_door_1: l_door{};
			class t_door_2: l_door{};
			class engineHatches: l_door{};
			class propDoor: l_door{};
			class crate_l1_unhide_source: driverViewHatch
			{
				animPeriod = 0.1;
			};
			class crate_l2_unhide_source: crate_l1_unhide_source{};
			class crate_l3_unhide_source: crate_l1_unhide_source{};
			class crate_l4_unhide_source: crate_l1_unhide_source{};
			class crate_r1_unhide_source: crate_l1_unhide_source{};
			class crate_r2_unhide_source: crate_l1_unhide_source{};
			class crate_r3_unhide_source: crate_l1_unhide_source{};
			class crate_r4_unhide_source: crate_l1_unhide_source{};
			class water_1_unhide_source: crate_l1_unhide_source{};
			class water_2_unhide_source: crate_l1_unhide_source{};
			class wheel_1_unhide_source: crate_l1_unhide_source{};
			class wheel_2_unhide_source: crate_l1_unhide_source{};
			
			class recoil_source 
			{
				source = "reload";
				weapon = "ACE_2A72";
			};
			
			class muzzle_hide_hmg: recoil_source {};
			class muzzle_rot_hmg: recoil_source 
			{
				source="ammorandom";
			};
		};
		driverOpticsModel = "\x\ace\addons\m_veh_optics\driver\optika_tank_driver.p3d";
		memoryPointDriverOptics = "driverview";
		radarType = 0;
		driveropticseffect[] = {"TankCommanderOptics1"};
		class ViewOptics
		{
			initFov = 0.7;
			minFov = 0.7;
			maxFov = 0.7;
			initAngleX = 0;
			minAngleX = -110;
			maxAngleX = 110;
			initAngleY = 0;
			minAngleY = -110;
			maxAngleY = 110;
			opticsZoomMin = 0.7;
			opticsZoomMax = 0.7;
			distanceZoomMin = 20;
			distanceZoomMax = 2000;
			visionMode[] = {"Normal","NVG"};
		};
		class ViewPilot
		{
			initAngleX = 10;
			minAngleX = -65;
			maxAngleX = 85;
			initAngleY = 20;
			minAngleY = -150;
			maxAngleY = 150;
			initFov = 0.7;
			minFov = 0.25;
			maxFov = 1.4;
		};
		gunnerOutOpticsShowCursor = false;
		driverAction = "rhs_btr70_driver";
		driverInAction = "rhs_btr70_driver";
		cargoAction[] = {"BRDM2_Cargo01","BRDM2_Cargo01","BRDM2_Cargo01","BRDM2_Cargo01","BRDM2_Cargo01","BRDM2_Cargo01","BRDM2_Cargo01","BRDM2_Cargo01"};
		transportSoldier = 7;
		class Damage
		{
			tex[] = {};
			mat[] = {
				"x\acex\addons\c_veh_btr70\btr_main.rvmat",
				"x\acex\addons\c_veh_btr70\btr_main_damage.rvmat",
				"x\acex\addons\c_veh_btr70\btr_main_destruct.rvmat",

				"x\acex\addons\c_veh_btr70\btr_main2.rvmat",
				"x\acex\addons\c_veh_btr70\btr_main2_damage.rvmat",
				"x\acex\addons\c_veh_btr70\btr_main2_destruct.rvmat",

				"x\acex\addons\c_veh_btr70\btr_in.rvmat",
				"x\acex\addons\c_veh_btr70\btr_in.rvmat",
				"x\acex\addons\c_veh_btr70\btr_in_destruct.rvmat",

				"ap_rhs_vehicles\data\rhs_btr80_01.rvmat",
				"ap_rhs_vehicles\data\rhs_dam_btr80_01.rvmat",
				"ap_rhs_vehicles\data\rhs_destr_btr80_01.rvmat",

				"ap_rhs_vehicles\data\rhs_btr80_02.rvmat",
				"ap_rhs_vehicles\data\rhs_dam_btr80_02.rvmat",
				"ap_rhs_vehicles\data\rhs_destr_btr80_02.rvmat",

				"ap_rhs_vehicles\data\rhs_btr80_03.rvmat",
				"ap_rhs_vehicles\data\rhs_dam_btr80_03.rvmat",
				"ap_rhs_vehicles\data\rhs_destr_btr80_03.rvmat",

				"ap_rhs_vehicles\data\rhs_btr80_04.rvmat",
				"ap_rhs_vehicles\data\rhs_dam_btr80_04.rvmat",
				"ap_rhs_vehicles\data\rhs_destr_btr80_04.rvmat"

			};
		};
		smokeLauncherGrenadeCount = 3;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 60;
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"ap_rhs_vehicles\data\rhs_btr80_01_co.paa","ap_rhs_vehicles\data\rhs_btr80_02_co.paa","ap_rhs_vehicles\data\rhs_btr80_03_co.paa"};
		
		class Reflectors
		{
			class Left
			{
				color[] = {0.7, 0.6, 0.6, 1.0};
				ambient[] = {0.1, 0.1, 0.1, 1.0};
				position = "light_l";
				direction = "light_l_end";
				hitpoint = "L svetlo";
				selection = "light_l";
				size = 0.4;
				brightness = 0.4;
			};
			class Right
			{
				color[] = {0.7, 0.6, 0.6, 1.0};
				ambient[] = {0.1, 0.1, 0.1, 1.0};
				position = "light_r";
				direction = "light_r_end";
				hitpoint = "P svetlo";
				selection = "light_r";
				size = 0.4;
				brightness = 0.4;
			};
		};
	
		class UserActions
		{
			class openDriverViewHatch
			{
				displayName = "$STR_ACE_UA_OpenShield";
				position = "";
				radius = 5;
				showWindow = 0;
				condition = "(player == driver this) && {(this animationPhase 'driverViewHatch' < 0.5)}";
				statement = "this animate['driverViewHatch',1];";
				onlyForPlayer = "true";
			};
			class closeDriverViewHatch
			{
				displayName = "$STR_ACE_UA_CloseShield";
				position = "";
				radius = 5;
				showWindow = 0;
				condition = "(player == driver this) && {(this animationPhase 'driverViewHatch' > 0.5)}";
				statement = "this animate['driverViewHatch',0];";
				onlyForPlayer = "true";
			};
			class openCommanderViewHatch
			{
				displayName = "$STR_ACE_UA_OpenShield";
				position = "";
				radius = 5;
				showWindow = 0;
				condition = "((this turretUnit [1]) == player) && {(this animationPhase 'commanderViewHatch' < 0.5)}";
				statement = "this animate['commanderViewHatch',1];";
				onlyForPlayer = "true";
			};
			class closeCommanderViewHatch
			{
				displayName = "$STR_ACE_UA_CloseShield";
				position = "";
				radius = 5;
				showWindow = 0;
				condition = "((this turretUnit [1]) == player) && {(this animationPhase 'commanderViewHatch' > 0.5)}";
				statement = "this animate['commanderViewHatch',0];";
				onlyForPlayer = "true";
			};
		};
		
		
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				radarType = 0;
				weapons[] = {"KPVT","PKT_veh","SmokeLauncher"};
				magazines[] = {"ACE_50Rnd_145x114_KPVT","ACE_50Rnd_145x114_KPVT","ACE_50Rnd_145x114_KPVT","ACE_50Rnd_145x114_KPVT","ACE_50Rnd_145x114_KPVT","ACE_50Rnd_145x114_KPVT","ACE_50Rnd_145x114_KPVT","ACE_50Rnd_145x114_KPVT","ACE_50Rnd_145x114_KPVT","ACE_50Rnd_145x114_KPVT","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","SmokeLauncherMag","SmokeLauncherMag"};
				minElev = -4;
				maxElev = 60;
				memoryPointGun = "kulas";
				gunnerAction = "rhs_btr70_gunner";
				gunnerInAction = "rhs_btr70_gunner";
				gunnerOpticsModel = "\ap_rhs_vehicles\1pz7";
				LODTurnedOut = 0;
				gunnerOutOpticsModel = "";
				selectionFireAnim = "zasleh1";
				LODTurnedIn = VIEW_CARGO;
				gunnerForceOptics = 0;
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
			};
			
			class CommanderOptics: NewTurret {
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
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = "0.33333/ 4.2";
					minFov = "0.33333/ 4.2";
					maxFov = "0.33333/ 4.2";
					visionMode[] = {"Normal","NVG"};
				};
				
				class OpticsIn {
					class Wide {
						gunnerOpticsModel = "\x\acex\addons\m_veh_btr70\sights\sa_TKN3_sight";
						initanglex = 0;
						initangley = 0;
						initfov = "0.33333/ 5";
						maxanglex = 30;
						maxangley = 100;
						maxfov = "0.33333/ 5";
						minanglex = -30;
						minangley = -100;
						minfov = "0.33333/ 5";
						visionMode[] = {"Normal","NVG"};
					};
				};	

				
				
						ace_sys_nvg_nvrange = 720;
						commanderforceoptics = 0;
						forcehidecommander = 0;
						gunnerforceoptics = 0;

						gunneropticseffect[] = {"TankCommanderOptics1"};
						gunneropticsshowcursor = 0;
						ingunnermayfire = 1;
						memorypointsgetingunner = "pos commander";
						memorypointsgetingunnerdir = "pos commander dir";
						outgunnermayfire = 1;
						stabilizedinaxes = 3;
						startengine = 0;
						weapons[] = {"SmokeLauncher"};
						proxyType = CPCommander;
						proxyIndex = 1;
						gunnerName = $STR_POSITION_COMMANDER;
						primaryGunner = 0;
						primaryObserver = 1;
						body = "obsTurret";
						gun = "obsGun";
						animationSourceBody =  "obsTurret";
						animationSourceGun =   "obsGun";
						gunnerOutForceOptics = false;
						animationSourceHatch = "commanderHatch";
						minElev = -13;
						maxElev = 36;
						minTurn = -50;
						maxTurn = 50;
						commanding = 2;
						viewGunnerInExternal = 1;
						radarType = 0;
						gunnerOpticsModel = "\x\acex\addons\m_veh_btr70\sights\sa_TKN3_sight";
						gunnerOpticsColor[] = {1,1,1,1};
						gunnerOutOpticsColor[] = {1,1,1,1};
						memoryPointGunnerOutOptics = "obsView_out";
						memoryPointGunnerOptics = "obsView";
						LODTurnedIn = VIEW_CARGO;
						gunnerUsesPilotView = 1;
						gunnerOutOpticsShowCursor = false;
						gunnerAction = "rhs_btr70_commander";
						gunnerInAction = "rhs_btr70_commander";
			};
		};
		
		
		ace_minimalhit[] = {13,30};
		ace_era = 0;
		ace_p_detonation_hull = 0.2;
		ace_p_detonation_turret = 0.2;
		ace_p_detonation_engine = 0;
		ace_p_fire_hull = 0.7;
		ace_p_fire_turret = 0.7;
		ace_p_fire_engine = 0.7;
		ace_p_firedetonation = 0.5;
		ace_armor_hull[] = {{12,12},{10,10},{10,10},{10,10},{10,10}};
		ace_armor_turret[] = {{12,12},{10,10},{10,10},{10,10},{10,10}};
		
		side = 0;
		typicalCargo[]={RU_Soldier_Crew,RU_Soldier_Crew,RU_Soldier_Crew,RU_Soldier,RU_Soldier_MG,RU_Soldier_AT};
		faction = RU;
		maxSpeed = 80;
		
		ace_sys_reticles_gunneroptics = 1;
		ace_sys_reticles_gunnersight = "AP_1PZ_7";
	};
	
	class AP_BTR80: AP_BTR80_Base
	{	
		scope = 2;
		accuracy = 0.5;
	};
	
	class AP_BTR82A: AP_BTR80_Base
	{
		scope = 2;
		accuracy = 0.5;
		Icon = "\ap_rhs_vehicles\data\rhs_btr80a_icon_ca.paa";
		model = "\ap_rhs_vehicles\rhs_btr82a.p3d";
		displayName = "$STR_btr82a";
		
		ace_sys_reticles_gunneroptics = 1;
		ace_sys_reticles_gunnersight = "BPK_2_72";
		
		class Eventhandlers
		{
			fired="[(_this select 0),(_this select 1)] execVM 'ap_rhs_vehicles\scripts\ejectShell.sqf'";
		};
		

		class Library
		{
			libTextDesc = "$STR_btr82a_LIB";
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				radarType = 0;
				weapons[] = {"ACE_2A72","PKT_veh","SmokeLauncher"};
				magazines[] = {"AP_170Rnd_30mmHE_2A72","AP_130Rnd_30mmAP_2A72","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","SmokeLauncherMag","SmokeLauncherMag"};
				memoryPointGun = "kulas";
				minElev = -5;
				maxElev = 70;
				gunnerAction = "rhs_btr70_gunner";
				gunnerInAction = "rhs_btr70_gunner";
				LODTurnedOut = 0;
				stabilizedInAxes = 3;
				gunnerOutOpticsModel = "";
				selectionFireAnim = "zasleh1";
				gunnerOpticsModel = "\x\ace\addons\sys_reticles\ACE_optics_empty.p3d";
				LODTurnedIn = VIEW_CARGO;
				gunnerForceOptics = 0;
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
					
						initAngleX      = 0;
						minAngleX       = -110;
						maxAngleX       = +110;
						initAngleY      = 0;
						minAngleY       = -110;
						maxAngleY       = +110;
						distanceZoomMin = 200;
						distanceZoomMax = 2000;
						initFov         = 0.33333 / 4;
						minFov          = 0.33333 / 4;
						maxFov          = 0.33333 / 4;
				};
				
				class OpticsIn {
					class Wide {
						gunnerOpticsModel = "\x\ace\addons\sys_reticles\ACE_optics_empty.p3d";
						initanglex = 0;
						initangley = 0;
						initfov = "0.33333/ 2";
						maxanglex = 30;
						maxangley = 100;
						maxfov = "0.33333/ 2";
						minanglex = -30;
						minangley = -100;
						minfov = "0.33333/ 2";
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0};
					};
					class Medium: Wide 
					{
						initfov = "0.33333/ 4";
						maxfov = "0.33333/ 4";
						minfov = "0.33333/ 4";
					};
					
					class Narrow: Wide 
					{
						initfov = "0.33333/ 8";
						maxfov = "0.33333/ 8";
						minfov = "0.33333/ 8";
					};
				};
				class GunFire: WeaponCloudsMGun
				{
					interval = 0.01;
				};
			};
			class CommanderOptics: CommanderOptics	{};
			
			
			
		};
		
	};
		
	class AP_BTR82A_DES: AP_BTR82A
	{
		hiddenSelectionsTextures[] = {"ap_rhs_vehicles\data\rhs_btr80_01_des_co.paa","ap_rhs_vehicles\data\rhs_btr80_02_des_co.paa","ap_rhs_vehicles\data\rhs_btr80_03_des_co.paa"};
	};
	
	class AP_BTR80_DES: AP_BTR80
	{
		hiddenSelectionsTextures[] = {"ap_rhs_vehicles\data\rhs_btr80_01_des_co.paa","ap_rhs_vehicles\data\rhs_btr80_02_des_co.paa","ap_rhs_vehicles\data\rhs_btr80_03_des_co.paa"};
	};
	
	class AP_BTR80_CAMO: AP_BTR80
	{
		hiddenSelectionsTextures[] = {"ap_rhs_vehicles\data\rhs_btr80_01_tri01_co.paa","ap_rhs_vehicles\data\rhs_btr80_02_tri01_co.paa","ap_rhs_vehicles\data\rhs_btr80_03_tri01_co.paa"};
	};
	
	class AP_BTR80_D_CAMO: AP_BTR80
	{
		hiddenSelectionsTextures[] = {"ap_rhs_vehicles\data\rhs_btr80_01_trides_co.paa","ap_rhs_vehicles\data\rhs_btr80_02_trides_co.paa","ap_rhs_vehicles\data\rhs_btr80_03_trides_co.paa"};
	};
	
	
	
	class Tank;
	class Tracked_APC: Tank
	{
		class Turrets;
		class NewTurret;
		class ViewOptics;
		class Sounds;
		class HitPoints;
	};
	class BMP2_Base: Tracked_APC
	{
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class Sounds
		{
			class Engine;
			class Movement;
		};
		class AnimationSources;
		class Eventhandlers;
	};

	class ACE_BMD_2_Base: BMP2_Base
	{
		driverOpticsModel = "\CA\Tracked_E\driverOptics";
	};
	class AP_SPRUT_base: ACE_BMD_2_Base {
		
		model = "\ap_rhs_vehicles\rhs_sprut.p3d";
		displayName = "$STR_SPRUT";		
		picture = "\ap_rhs_vehicles\data\rhs_2s25_pic_ca.paa";
		Icon = "\ap_rhs_vehicles\data\ico_sprutsd_ca.paa";
		mapSize = 11;
		transportSoldier = 0;
		//hiddenSelections[] = {"camo1","camo2","camo3"};
		//hiddenSelectionsTextures[] = {"ap_rhs_vehicles\data\sprut_hull_co.paa","ap_rhs_vehicles\data\sprut_turret_co.paa","ap_rhs_vehicles\data\bmd34roadwheel_co.paa"};
		
		class Eventhandlers: Eventhandlers
		{
			fired="[(_this select 0),(_this select 1)] execVM 'ap_rhs_vehicles\scripts\ejectShell.sqf'";
		};
		
		waterspeedcoef = 0.15;
		
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaustl";
				direction = "exhaustl_dir";
				effect = "ExhaustsEffectBig";
			};
			class Exhaust2
			{
				position = "exhaustr";
				direction = "exhaustr_dir";
				effect = "ExhaustsEffectBig";
			};
		};
		
		class ViewOptics
		{
			initFov = "0.33333/ 1";
			minFov = "0.33333/ 1";
			maxFov = "0.33333/ 1";
			initAngleX = 0;
			minAngleX = -110;
			maxAngleX = 110;
			initAngleY = 0;
			minAngleY = -110;
			maxAngleY = 110;
		};
		
		
		class Damage
		{
			tex[] = {};
			mat[] = 
			{
				"ap_rhs_vehicles\data\rhs_sprut_hull.rvmat",
				"ap_rhs_vehicles\data\rhs_dam_sprut_hull.rvmat",
				"ap_rhs_vehicles\data\rhs_destr_sprut_hull.rvmat",
				
				"ap_rhs_vehicles\data\rhs_sprut_turret.rvmat",
				"ap_rhs_vehicles\data\rhs_dam_sprut_turret.rvmat",
				"ap_rhs_vehicles\data\rhs_destr_sprut_turret.rvmat",
				
				"ap_rhs_vehicles\data\rhs_bmd34track.rvmat",
				"ap_rhs_vehicles\data\rhs_dam_bmd34track.rvmat",
				"ap_rhs_vehicles\data\rhs_destr_bmd34track.rvmat",
				
				"ap_rhs_vehicles\data\rhs_bmd34roadwheel.rvmat",
				"ap_rhs_vehicles\data\rhs_dam_bmd34roadwheel.rvmat",
				"ap_rhs_vehicles\data\rhs_destr_bmd34roadwheel.rvmat"			
			};
		};
		

		
		
		class UserActions
		{
			class LowerSusp
			{
				displayName = "$STR_ACE_UA_BMD_LowerSusp";
				position = "";
				radius = 5;
				condition = "(player == driver this) && {(0 == speed this)} && {!(surfaceIsWater getPos this)} && {(this animationPhase ""suspensionv1"" < 0.5)}";
				statement = "this animate['suspensionv1',1];this animate['suspensionv2',1];";
				onlyForPlayer = 1;
			};
			class RaiseSusp
			{
				displayName = "$STR_ACE_UA_BMD_RaiseSusp";
				position = "";
				radius = 5;
				condition = "(player == driver this) && {(0 == speed this)} && {!(surfaceIsWater getPos this)} && {(this animationPhase ""suspensionv1"" > 0.5)}";
				statement = "this animate['suspensionv1',0];this animate['suspensionv2',0];";
				onlyForPlayer = 1;
			};
		};
		class TransportMagazines {};
		
		maxSpeed = 60;
		fuelCapacity = 560;
		canFloat = 1;
		enginePower = 336;
		idleRPM = 650;
		redRPM = 2300;
		tracksSpeed = 1.35;
		armor = 200;

		
		selectionLeftOffset = "pasoffsetl";
		selectionRightOffset = "pasoffsetp";
		memoryPointTrack1L = "stopa ll";
		memoryPointTrack1R = "stopa lr";
		memoryPointTrack2L = "stopa rl";
		memoryPointTrack2R = "stopa rr";
		
		ace_minimalhit[] = {13,30};
		ace_era = 0;
		ace_p_detonation_hull = 0.2;
		ace_p_detonation_turret = 0.2;
		ace_p_detonation_engine = 0;
		ace_p_fire_hull = 0.7;
		ace_p_fire_turret = 0.7;
		ace_p_fire_engine = 0.7;
		ace_p_firedetonation = 0.5;
		ace_armor_hull[] = {{30,30},{10,10},{10,10},{10,10},{10,10}};
		ace_armor_turret[] = {{30,30},{14,14},{14,14},{14,14},{14,14}};
		
		smokeLauncherGrenadeCount = 3;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 60;
		
		class AnimationSources: AnimationSources
		{
			class recoil_source 
			{
				source = "reload";
				weapon = "AP_2A75";
			};
		};
		
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor = 0.4;
				material = -1;
				name = "telo";
				visual = "zbytek";
				passThrough = 0;
			};
			class HitEngine: HitEngine
			{
				armor = 0.45;
				material = -1;
				name = "motor";
				visual = "zbytek";
				passThrough = 0;
			};
			class HitLTrack: HitLTrack
			{
				armor = 0.15;
				material = -1;
				name = "pas_L";
				passThrough = 0;
			};
			class HitRTrack: HitRTrack
			{
				armor = 0.15;
				material = -1;
				name = "pas_P";
				passThrough = 0;
			};
		};
		class Sounds: Sounds
		{
			class Engine: Engine
			{
				sound[] = {"\rhs\addons\rhs_bmp\sounds\UTD20.ogg",1,1,1000};
				frequency = "(randomizer*0.05+0.8)*rpm";
				volume = "engineOn*camPos*(rpm factor[0.4, 0.9])";
			};
			class IdleOut
			{
				sound[] = {"\rhs\addons\rhs_bmp\sounds\UTD20_alap.ogg",0.562341, 1, 450};
				frequency = "1";
				volume = "engineOn*camPos*(rpm factor[0.6, 0.2])";
				cone[] = {1.2,2.8,1.8,1.3};
			};
			class NoiseOut
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\M1A1\ext\noise2",1,1,100};
				frequency = "1";
				volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsOutH0
			{
				sound[] = {"\rhs\addons\rhs_bmp\sounds\lanc_2.ogg",1,1,200};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsOutH1
			{
				sound[] = {"\rhs\addons\rhs_bmp\sounds\lanc_2.ogg",1,1,200};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsOutH2
			{
				sound[] = {"\rhs\addons\rhs_bmp\sounds\lanc_3.ogg",1,1,200};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsOutH3
			{
				sound[] = {"\rhs\addons\rhs_bmp\sounds\lanc_4.ogg",1,1,200};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsOutH4
			{
				sound[] = {"\rhs\addons\rhs_bmp\sounds\lanc_5.ogg",1,1,200};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
			class ThreadsOutS0
			{
				sound[] = {"\rhs\addons\rhs_bmp\sounds\lanc_2.ogg",1,1,200};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsOutS1
			{
				sound[] = {"\rhs\addons\rhs_bmp\sounds\lanc_2.ogg",1,1,200};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsOutS2
			{
				sound[] = {"\rhs\addons\rhs_bmp\sounds\lanc_3.ogg",1,1,200};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsOutS3
			{
				sound[] = {"\rhs\addons\rhs_bmp\sounds\lanc_4.ogg",1,1,200};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsOutS4
			{
				sound[] = {"\rhs\addons\rhs_bmp\sounds\lanc_5.ogg",1,1,200};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
			class Movement: Movement
			{
				sound[] = {"",1.0,1.0};
				frequency = "0";
				volume = "0";
			};
			class EngineIn
			{
				sound[] = {"\rhs\addons\rhs_bmp\sounds\UTD20_in.ogg",1,1};
				frequency = "(randomizer*0.05+0.8)*rpm";
				volume = "engineOn*(1-camPos)*(rpm factor[0.4, 1])";
			};
			class IdleIn
			{
				sound[] = {"\rhs\addons\rhs_bmp\sounds\UTD20_in_alap.ogg",1,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(rpm factor[0.6, 0.15])";
			};
			class NoiseIn
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\M1A1\int\noise2",0.199526, 1};
				frequency = "1";
				volume = "(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
		};
		soundArmorCrash[] = {"ArmorCrash0", 0.25, "ArmorCrash1", 0.25, "ArmorCrash2", 0.25, "ArmorCrash3", 0.25};
		soundBuildingCrash[] = {"buildCrash0", 0.25, "buildCrash1", 0.25, "buildCrash2", 0.25, "buildCrash3", 0.25};
		soundEngineOffExt[] = {"ca\sounds\vehicles\Tracked\Other\ext\ext-tracked-stop-02.wss", 1, 0.8, 500};
		soundEngineOffInt[] = {"ca\sounds\vehicles\Tracked\Other\int\int-tracked-stop-02.wss", 1, 1};
		soundEngineOnExt[] = {"\rhs\addons\rhs_bmp\sounds\utd20_start.ogg", 2.51189, 1, 500};
		soundEngineOnInt[] = {"\rhs\addons\rhs_bmp\sounds\tank_ind.ogg", 1, 1};
		soundGear[] = {"", 5.62341E-5, 1};
		soundEngine[] = {"", 1, 1};
		soundGetIn[] = {"ca\SOUNDS\Vehicles\Tracked\M1A1\ext\ext-m1-door-1", 0.562341, 1};
		soundGetOut[] = {"ca\SOUNDS\Vehicles\Tracked\M1A1\int\int-m1-door-1", 0.562341, 1, 60};
		soundWoodCrash[] = {"woodCrash0", 0.25, "woodCrash1", 0.25, "woodCrash2", 0.25, "woodCrash3", 0.25};
		
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
							
				class Turrets: Turrets
				{

					
					class CommanderOptics: CommanderOptics
					{
						weapons[]=
						{
							"FakeWeapon",
							"SmokeLauncher"
						};
						magazines[]=
						{
							"SmokeLauncherMag",
							"SmokeLauncherMag"
						};
						
						animationSourceBody = "obsTurret";
						animationSourceGun = "obsGun";
						viewGunnerInExternal = 1;
						gunnergetinaction = "GetInMedium";
						gunnergetoutaction = "GetOutMedium";
						gunneraction = "BMP3_Commander_OUT";
						gunnerinaction = "BMP3_Commander";			
						gunBeg = "";
						gunEnd = "";
						memoryPointGun = "commanderview";
						memoryPointGunnerOptics = "commanderview";
						
						commanderForceOptics=1;
						inGunnerMayFire=1;
						startEngine=0;
						maxHorizontalRotSpeed = 1.8;	
						maxVerticalRotSpeed = 1.8;		
						stabilizedInAxes = StabilizedInAxesBoth;
						minElev=-05;
						maxElev=+60;
						initElev=0;
						minTurn=-360;
						maxTurn=+360;
						initTurn=0;
						soundServo[]={\ca\sounds\vehicles\servos\turret-1, db-40, 1.0,10};
						gunnerOutOpticsModel = "\ca\Weapons\optika_empty";
						gunnerOpticsEffect[] = {"TankGunnerOptics1","WeaponsOptics","OpticsCHAbera3"};
						gunnerOutOpticsEffect[] = {};
						gunnerOpticsColor[] = {1,1,1,1};
						gunnerOutForceOptics = 0;
						gunnerForceOptics = 1;
						class OpticsIn
						{
							class Wide
							{
								initAngleX=0;
								minAngleX=-30;
								maxAngleX=30;
								initAngleY=0;
								minAngleY=-100;
								maxAngleY=100;
								initFov="0.33333/ 1";
								minFov="0.33333/ 1";
								maxFov="0.33333/ 1";
								visionMode[]=
								{
									"Normal"
								};
								gunnerOpticsModel="\ap_rhs_vehicles\optic\rhs_1k13_3s_1x";
								//gunnerOutOpticsModel="\ca\weapons\empty";
								gunnerOutOpticsEffect[]={};
							};
							class Medium: Wide
							{
								initFov="0.33333/ 5";
								minFov="0.33333/ 5";
								maxFov="0.33333/ 5";
								gunnerOpticsModel="\ap_rhs_vehicles\optic\rhs_1k13_3s_5x";
							};
							class Narrow: Wide
							{
								initFov="0.33333/ 14";
								minFov="0.33333/ 14";
								maxFov="0.33333/ 14";
								gunnerOpticsModel="\ap_rhs_vehicles\optic\rhs_1k13_3s_14x";
							};
							class Night: Wide
							{
								initFov="0.33333/ 5";
								minFov="0.33333/ 5";
								maxFov="0.33333/ 5";
								visionMode[]=
								{
									"NVG"
								};
								gunnerOpticsModel="\ap_rhs_vehicles\optic\rhs_1k13_3s_5x_nvg.p3d";
							};
						};
						
						class ViewOptics
						{
								initAngleX=0;
								minAngleX=-30;
								maxAngleX=30;
								initAngleY=0;
								minAngleY=-100;
								maxAngleY=100;
								initFov="0.33333/ 1";
								minFov="0.33333/ 1";
								maxFov="0.33333/ 1";
								visionMode[]=
								{
									"Normal"
								};
								gunnerOpticsModel="\ca\Weapons\optika_empty";
								//gunnerOutOpticsModel="\ca\weapons\empty";
								gunnerOutOpticsEffect[]={};
						};
						ace_sys_nvg_nvrange=1350;
						ace_sys_nvg_tirange=10000;
					};
				};
				
				
				
				gunnerDoor = "hatchG";
				memoryPointGun = "usti hlavne2";
				selectionFireAnim = "zasleh2";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				
				weapons[]=
				{
					"AP_2A75",
					"PKT"
				};

				magazines[]=
				{
					"ACE_3BM42M",
					"ACE_3BK29M",
					"ACE_8Rnd_3OF26",
					"5Rnd_AT11_T90",
					"250Rnd_762x54_PKT_T90",
					"250Rnd_762x54_PKT_T90",
					"250Rnd_762x54_PKT_T90",
					"250Rnd_762x54_PKT_T90",
					"250Rnd_762x54_PKT_T90",
					"250Rnd_762x54_PKT_T90",
					"250Rnd_762x54_PKT_T90",
					"250Rnd_762x54_PKT_T90"
				};
				stabilizedInAxes = StabilizedInAxesBoth;
				maxHorizontalRotSpeed = 0.62;
				maxVerticalRotSpeed = 0.12;
				minElev = -5;
				maxElev = 16;
				initElev = 0;
				soundServo[] = {"\ca\sounds\vehicles\servos\turret-1","db-40",1.0,10};
				startEngine = 0;
				isPersonTurret = 1;
				minOutElev = -30;
				maxOutElev = 35;
				initOutElev = 0;
				minOutTurn = -90;
				maxOutTurn = 90;
				initOutTurn = 0;
				memoryPointGunnerOptics = "gunnerview";
				gunnerOutOpticsModel = "";
				gunnerOutOpticsEffect[] = {};
				gunnerOpticsEffect[] = {"TankGunnerOptics1","WeaponsOptics","OpticsCHAbera3"};
				gunnerForceOptics = 1;
				gunnerOpticsColor[] = {1,1,1,1};
				
				
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = "0.3333/1";
						minFov = "0.3333/1";
						maxFov = "0.3333/1";
						visionMode[] = {"Normal"};
						gunnerOpticsModel = "CA\Tracked_E\driverOptics";
						gunnerOpticsEffect[] = {};
					};
					class DayMain: ViewOptics
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = "0.3333/8";
						minFov = "0.3333/8";
						maxFov = "0.3333/8";
						visionMode[] = {"Normal"};
						gunnerOpticsModel = "\ap_rhs_vehicles\optic\rhs_sprut.p3d";
						gunnerOpticsEffect[] = {};
					};
					class NightMain: ViewOptics
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = "0.3333/8";
						minFov = "0.3333/8";
						maxFov = "0.3333/8";
						visionMode[] = {"NVG"};
						gunnerOpticsModel = "\ap_rhs_vehicles\optic\rhs_sprut.p3d";
						gunnerOpticsEffect[] = {};
					};
				};
				gunnerAction = "BMP3_Gunner_OUT";
				gunnerInAction = "BMP3_Gunner";
				gunnerGetInAction = "GetInMedium";
				gunnerGetOutAction = "GetOutMedium";
				forceHideGunner = 0;
				inGunnerMayFire = 1;
				viewGunnerInExternal = 1;
				class HitPoints
				{
					class HitTurret
					{
						armor = 0.5;
						material = -1;
						name = "vez";
						visual = "vez";
						passThrough = 0;
					};
					class HitGun
					{
						armor = 0.6;
						material = -1;
						name = "zbran";
						visual = "";
						passThrough = 0;
					};
				};
					
		
				
				
				
				armorLights = 0.1;
			};
		};
		

		ace_tankfcs_enabled = 1;
		ace_tankfcs_maxlrfrange = 5000;
		ace_tankfcs_minlrfrange = 200;
		ace_tankfcs_lrfaccuracy = 10;
		ace_tankfcs_lrfcooldowntime = 3;
		ace_tankfcs_maxlead = 2;
		ace_tankfcs_battlesight = 1200;
		ace_tankfcs_digitscolor[] = {0.396,0.886,0.396,1};
		ace_tankfcs_digitsstyle = 1;
		ace_tankfcs_rdystyle = 1;
		ace_tankfcs_maxranges[] = {"ACE_3BM42M",3000,"ACE_3BK29M",3000,"ACE_8Rnd_3OF26",4000,"250Rnd_762x54_PKT_T90",1600};
		
		
		class Reflectors
		{
					class Left
					{
						color[] = {19,13,9.5};
						ambient[] = {0.1,0.1,0.1,1};
						position = "R svetlo";
						direction = "konec R svetla";
						hitpoint = "R svetlo";
						selection = "R svetlo";
						size = 0.4;
						brightness = 0.4;
					};
					class Right: Left
					{
						position = "L svetlo";
						direction = "konec L svetla";
						hitpoint = "L svetlo";
						selection = "L svetlo";
					};
					
					class Pravo: Left
					{
						position = "P svetlo";
						direction = "konec P svetla";
						hitpoint = "P svetlo";
						selection = "P svetlo";
					};
		};
		
		
		
	};
	
	
		class AP_SPRUT : AP_SPRUT_base 
		{
			scope = 2;
			
		};
		class AP_SPRUT_M : AP_SPRUT_base 
		{
			scope = 2;
			displayName = "$STR_SPRUT_M";
			class Turrets: Turrets
			{
				class MainTurret: MainTurret
				{
					class OpticsIn
					{
						class Wide
						{
							gunneropticsmodel = "\ca\weapons\2Dscope_BMP3gun";
							initanglex = 0;
							initangley = 0;
							initfov = "0.33333/ 2.6";
							maxanglex = 30;
							maxangley = 100;
							maxfov = "0.33333/ 2.6";
							minanglex = -30;
							minangley = -100;
							minfov = "0.33333/ 2.6";
							visionMode[] = {"Normal"};
						};
						class Medium : Wide
						{
							initfov = "0.33333/ 5.5";
							maxfov = "0.33333/ 5.5";
							minfov = "0.33333/ 5.5";
							thermalMode[] = {0, 1};
							visionMode[] = {"Normal", "Ti"};
						};
						class Narrow : Wide
						{
							initfov = "0.33333/ 12";
							maxfov = "0.33333/ 12";
							minfov = "0.33333/ 12";
							thermalMode[] = {0, 1};
							visionMode[] = {"Normal", "Ti"};
						};
						class VeryNarrow : Wide
						{
							initfov = "0.33333/ 5.5";
							maxfov = "0.33333/ 5.5";
							minfov = "0.33333/ 5.5";
							visionmode[] = {"NVG"};
						};
					};
				};
			};
		};
		
		
		class AP_BMD4M : AP_SPRUT_base 
		{
			scope = 2;	
			model = "\ap_rhs_vehicles\rhs_bmd_4m.p3d";
			displayName = "$STR_BMD4M";		
			picture = "\ap_rhs_vehicles\data\rhs_bmd4m_pic_ca.paa";			
			Icon = "\ap_rhs_vehicles\data\bmd4_mapicon_ca.paa";
			mapSize = 6.5;
			transportSoldier = 0;
			//hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
			//hiddenSelectionsTextures[] = {"ap_rhs_vehicles\data\rhs_bmd4m_01_co.paa","ap_rhs_vehicles\data\rhs_bmd4m_02a_co.paa","ap_rhs_vehicles\data\rhs_bmd4m_w_co.paa","ap_rhs_vehicles\data\rhs_bmd4_03_co.paa"};
			
			maxSpeed = 50;
			waterspeedcoef = 0.2;
			
		ace_tankfcs_enabled = 1;
		ace_tankfcs_maxlrfrange = 5000;
		ace_tankfcs_minlrfrange = 200;
		ace_tankfcs_lrfaccuracy = 10;
		ace_tankfcs_lrfcooldowntime = 3;
		ace_tankfcs_maxlead = 2;
		ace_tankfcs_battlesight = 1200;
		ace_tankfcs_digitscolor[] = {0.396,0.886,0.396,1};
		ace_tankfcs_digitsstyle = 1;
		ace_tankfcs_rdystyle = 1;
		ace_tankfcs_maxranges[] = {"250Rnd_30mmHE_2A72",3000,"250Rnd_30mmAP_2A72",3000,"34Rnd_100mm_HE_2A70",4000,"250Rnd_762x54_PKT_T90",1600};
		ace_armor_hull[] = {{30,30},{10,10},{10,10},{10,10},{10,10}};
		ace_armor_turret[] = {{30,30},{16,16},{16,16},{16,16},{16,16}};
		
		driverAction = "Abrams_Driverout";
		driverInAction = "Abrams_Driver";
		
		class Reflectors
					{
					class Left
					{
						color[] = {19,13,9.5};
						ambient[] = {0.1,0.1,0.1,1};
						position = "L svetlo";
						direction = "konec L svetla";
						hitpoint = "L svetlo";
						selection = "L svetlo";
						size = 0.4;
						brightness = 0.4;
					};
					class Pravo: Left
					{
						position = "P svetlo";
						direction = "konec P svetla";
						hitpoint = "P svetlo";
						selection = "P svetlo";
					};
		};
			
			
			class Damage
			{
				tex[] = {};
				mat[] = 
				{
				"ap_rhs_vehicles\data\rhs_bmd4_02.rvmat",
				"ap_rhs_vehicles\data\rhs_dam_bmd4_02.rvmat",
				"ap_rhs_vehicles\data\rhs_destr_bmd4_02.rvmat",

				"ap_rhs_vehicles\data\rhs_bmd4_03.rvmat",
				"ap_rhs_vehicles\data\rhs_dam_bmd4_03.rvmat",
				"ap_rhs_vehicles\data\rhs_destr_bmd4_03.rvmat",

				"ap_rhs_vehicles\data\rhs_bmd4m_01.rvmat",
				"ap_rhs_vehicles\data\rhs_dam_bmd4m_01.rvmat",
				"ap_rhs_vehicles\data\rhs_destr_bmd4m_01.rvmat",

				"ap_rhs_vehicles\data\rhs_bmd4m_02a.rvmat",
				"ap_rhs_vehicles\data\rhs_dam_bmd4m_02a.rvmat",
				"ap_rhs_vehicles\data\rhs_destr_bmd4m_02a.rvmat",

				"ap_rhs_vehicles\data\rhs_bmd4m_a.rvmat",
				"ap_rhs_vehicles\data\rhs_dam_bmd4m_a.rvmat",
				"ap_rhs_vehicles\data\rhs_destr_bmd4m_a.rvmat",

				"ap_rhs_vehicles\data\rhs_bmd4m_t.rvmat",
				"ap_rhs_vehicles\data\rhs_dam_bmd4m_t.rvmat",
				"ap_rhs_vehicles\data\rhs_destr_bmd4m_t.rvmat",

				"ap_rhs_vehicles\data\rhs_bmd4m_w.rvmat",
				"ap_rhs_vehicles\data\rhs_dam_bmd4m_w.rvmat",
				"ap_rhs_vehicles\data\rhs_destr_bmd4m_w.rvmat"
				
				};
			};
			
			
			
			class AnimationSources: AnimationSources
			{
				class recoil_source 
				{
					source = "reload";
					weapon = "ACE_2A70";
				};
			};
			
			
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minTurn=-360; maxTurn=+360;
				forceHideGunner = false;
				memoryPointGun = "usti hlavne2";
				selectionFireAnim = "zasleh2";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				body = "MainTurret";
				gun =  "MainGun";
				animationSourceBody = "MainTurret";
				animationSourceGun =  "MainGun";
				outGunnerMayFire = 0;
				startEngine = 0;
				primaryGunner = 1;
				primaryObserver = 0;
				
				maxHorizontalRotSpeed = 0.55;	
				maxVerticalRotSpeed = 0.55;		

				class HitPoints : HitPoints
    		    {
					class HitTurret {armor=0.8;material=-1;name="vez";visual="vez";passThrough=1;};
				};

				class ViewGunner
				{
      				initAngleX=5; minAngleX=-65; maxAngleX=+85; //Rg 30;
      				initAngleY=0; minAngleY=-150; maxAngleY=+150; //Rg 100;
					initFov=0.7; minFov=0.25; maxFov=1.1;
				};
				
				gunnerName = "$STR_GN_BMP3_MainTurret";
				gunnerAction = "BMP3_Gunner_OUT";
				gunnerInAction = "BMP3_Gunner";
				gunnerGetInAction = "GetInMedium";
				gunnerGetOutAction = "GetOutMedium";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				
				weapons[] = {"ACE_2A72","ACE_2A70","PKT"};
				magazines[] = {"250Rnd_30mmHE_2A72","250Rnd_30mmAP_2A72","34Rnd_100mm_HE_2A70","4Rnd_AT10_BMP3","2000Rnd_762x54_PKT"};
				soundServo[] = {"\Ca\sounds\Vehicles\Servos\turret-2",0.01,1.0,20};
				gunnerOutOpticsModel = "";
				gunnerOutOpticsEffect[] = {};
				minElev = -6;
				maxElev = 60;
				initElev = 0;
				gunnerForceOptics = 1;
				gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
				
				class OpticsIn {
					class Wide
					{
						gunneropticsmodel = "\ca\weapons\2Dscope_BMP3gun";
						initanglex = 0;
						initangley = 0;
						initfov = "0.33333/ 2.6";
						maxanglex = 30;
						maxangley = 100;
						maxfov = "0.33333/ 2.6";
						minanglex = -30;
						minangley = -100;
						minfov = "0.33333/ 2.6";
						visionMode[] = {"Normal"};
					};
					class Medium : Wide
					{
						initfov = "0.33333/ 5.5";
						maxfov = "0.33333/ 5.5";
						minfov = "0.33333/ 5.5";
						thermalMode[] = {0, 1};
						visionMode[] = {"Normal", "Ti"};
					};
					class Narrow : Wide
					{
						initfov = "0.33333/ 12";
						maxfov = "0.33333/ 12";
						minfov = "0.33333/ 12";
						thermalMode[] = {0, 1};
						visionMode[] = {"Normal", "Ti"};
					};
					class VeryNarrow : Wide
					{
						initfov = "0.33333/ 5.5";
						maxfov = "0.33333/ 5.5";
						minfov = "0.33333/ 5.5";
						visionmode[] = {"NVG"};
					};
				};
				
				
				
				
				
				
				
				
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[]=
						{
							"SmokeLauncher",
							"FakeWeapon"
						};
						magazines[]=
						{
							"SmokeLauncherMag",
							"SmokeLauncherMag"
						};
						
						animationSourceBody = "obsTurret";
						animationSourceGun = "obsGun";
						viewGunnerInExternal = 1;
						gunnergetinaction = "GetInMedium";
						gunnergetoutaction = "GetOutMedium";
						gunneraction = "BMP3_Commander_OUT";
						gunnerinaction = "BMP3_Commander";			
						
						gunBeg = "";
						gunEnd = "";
						memoryPointGun = "commanderview";
						
						memoryPointGunnerOptics = "commanderview";
						
						commanderForceOptics=1;
						inGunnerMayFire=1;
						startEngine=0;
						maxHorizontalRotSpeed = 1.8;	
						maxVerticalRotSpeed = 1.8;		
						stabilizedInAxes = StabilizedInAxesBoth;
						minElev=-05;
						maxElev=+60;
						initElev=0;
						minTurn=-360;
						maxTurn=+360;
						initTurn=0;
						soundServo[]={\ca\sounds\vehicles\servos\turret-1, db-40, 1.0,10};
						gunnerOutOpticsModel = "\ca\Weapons\optika_empty";
						gunnerOpticsEffect[] = {"TankGunnerOptics1","WeaponsOptics","OpticsCHAbera3"};
						gunnerOutOpticsEffect[] = {};
						gunnerOpticsColor[] = {1,1,1,1};
						gunnerOutForceOptics = 0;
						gunnerForceOptics = 1;
						
						class OpticsIn {
							class Wide: ViewOptics {
								initAngleX=0;
								minAngleX=-30;
								maxAngleX=+30;
								initAngleY=0;
								minAngleY=-100;
								maxAngleY=+100;
								initFov=0.33333/3;
								minFov=0.33333/3;
								maxFov=0.33333/3;
								visionMode[] = {"Normal","Ti"};
								thermalMode[] = {0};
								gunnerOpticsModel = "\ap_rhs_vehicles\optic\rhs_thermalscreen_wide.p3d";
							};
							class Medium: Wide {
								gunnerOpticsModel = "\ap_rhs_vehicles\optic\rhs_thermalscreen.p3d";
								initFov=0.33333/12;
								minFov=0.33333/12;
								maxFov=0.33333/12;
							};
							class Narrow: Wide {
								gunnerOpticsModel = "\ap_rhs_vehicles\optic\rhs_thermalscreen_narrow.p3d";
								initFov=0.33333/24;
								minFov=0.33333/24;
								maxFov=0.33333/24;
							};
						};
						
						ace_sys_nvg_nvrange=1350;
						ace_sys_nvg_tirange=10000;
					};
				};
			};
			
			class GPMGTurret1: NewTurret
			{
				proxyType = "CPGunner";
				proxyIndex = 2;
				body = "obsTurret2";
				gun = "obsGun2";
				animationSourceBody = "obsTurret2";
				animationSourceGun = "obsGun2";
				animationSourceHatch = "HatchCargoR";
				selectionFireAnim = "zasleh3";
				gunnerName = "$STR_MG_RIGHT";
				hasGunner = 1;
				soundServo[] = {};
				forceHideGunner = 0;
				primaryObserver = 0;
				primaryGunner = 0;
				commanding = 4;
				minElev = -10;
				maxElev = 10;
				minTurn = -10;
				maxTurn = 10;
				weapons[] = {"ACE_PKT_out"};
				magazines[] = {"250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90"};			
				gunnerAction = "sa_bmd2_gunner";
				gunnerInAction = "BMP3_Gunner";
				gunnerGetInAction = "GetInMedium";
				gunnerGetOutAction = "GetOutMedium";
				gunBeg = "main_muzzle2";
				gunEnd = "main_chamber2";
				memoryPointGun = "memorypointgun2";
				memoryPointGunnerOptics = "gunnerview3";
				memoryPointsGetInGunner = "pos commander";
				memoryPointsGetInGunnerDir = "pos commander dir";
				viewGunnerInExternal = 0;
				startengine = 0;
				class Turrets{};
				gunnerOpticsModel = "\x\acex_ru\addons\m_veh_bmd2\Sights\o915_TNPP220A_sight";
				gunnerOpticsColor[] = {1,1,1,1};
				gunnerForceOptics = 1;
				gunnerOpticsEffect[] = {"TankGunnerOptics1","WeaponsOptics","OpticsCHAbera3"};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = "0.33333/ 1.5";
					minFov = "0.33333/ 1.5";
					maxFov = "0.33333/ 1.5";
					distanceZoomMin = 200;
					distanceZoomMax = 2000;
				};
			};
			
			class GPMGTurret2: GPMGTurret1
			{
				proxyIndex = 3;
				body = "obsTurret3";
				gun = "obsGun3";
				animationSourceBody = "obsTurret3";
				animationSourceGun = "obsGun3";
				animationSourceHatch = "HatchCargoL";
				selectionFireAnim = "zasleh4";
				weapons[] = {"ACE_PKT_out_2"};
				magazines[] = {"250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90"};
				gunnerName = "$STR_MG_LEFT";
				gunBeg = "main_muzzle3";
				gunEnd = "main_chamber3";
				memoryPointGun = "memorypointgun3";
				memoryPointGunnerOptics = "gunnerview2";
				gunnerforceoptics = 1;
				gunnergetinaction = "GetInMedium";
				gunnergetoutaction = "GetOutMedium";
				gunnerinaction = "BMP3_Commander";
				gunnerAction = "sa_bmd2_mggunner";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
			};
			
			
			class LeftBack: NewTurret
			{
				body = "lseat_turret";
				gun = "lseat_gun";
				animationSourceBody = "lseat_Turret";
				animationSourceGun = "lseat_Gun";
				animationSourceHatch = "";
				selectionFireAnim = "";
				minElev = 0;
				maxElev = 0;
				initTurn = 60;
				minTurn = 60;
				maxTurn = 60;
				maxHorizontalRotSpeed = 0;
				maxVerticalRotSpeed = 0;
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				gunnerName = "$STR_ACE_BMD_CargoBackLeft";
				commanding = 3;
				gunBeg = "";
				gunEnd = "";
				memoryPointGun = "kulas";
				memoryPointGunnerOptics = "lseat_view";
				gunnerAction = "";
				gunnerInAction = "BMP2_Gunner";
				weapons[] = {"FakeWeapon"};
				magazines[] = {};
				forceHideGunner = 1;
				hasGunner = 1;
				primaryGunner = 0;
				primaryObserver = 0;
				gunnerOpticsModel = "\x\acex_ru\addons\m_veh_bmd2\Sights\o915_TNPO170A_sight";
				gunnerOpticsColor[] = {1,1,1,1};
				gunnerForceOptics = 1;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = "0.33333/ 1";
					minFov = "0.33333/ 1";
					maxFov = "0.33333/ 1";
				};
			};
			class RightBack: LeftBack
			{
				body = "rseat_turret";
				gun = "rseat_gun";
				animationSourceBody = "rseat_Turret";
				animationSourceGun = "rseat_Gun";
				initTurn = -60;
				minTurn = -60;
				maxTurn = -60;
				gunnerName = "$STR_ACE_BMD_CargoBackRight";
				memoryPointGunnerOptics = "rseat_view";
				hasGunner = 1;
				commanding = 2;
				memoryPointsGetInGunner = "pos commander";
				memoryPointsGetInGunnerDir = "pos commander dir";
			};
			class MainBack: LeftBack
			{
				body = "bseat_turret";
				gun = "bseat_gun";
				animationSourceBody = "bseat_Turret";
				animationSourceGun = "bseat_Gun";
				initTurn = 180;
				minTurn = 180;
				maxTurn = 180;
				gunnerName = "$STR_ACE_BMD_CargoBackCenter";
				memoryPointGunnerOptics = "bseat_view";
				hasGunner = 1;
				commanding = 1;
				memoryPointsGetInGunner = "pos commander";
				memoryPointsGetInGunnerDir = "pos commander dir";
			};
			
			
			
		};	
			
			
			
			
			
			
	};
		
		class AP_BMD4MA : AP_BMD4M
		{
		
			model = "ap_rhs_vehicles\rhs_bmd_4ma";
			displayName = "$STR_BMD4M_ARMOR";		
			maxSpeed = 45;
			ace_armor_hull[] = {{50,50},{25,25},{25,25},{25,25},{25,25}};
			ace_armor_turret[] = {{30,30},{16,16},{16,16},{16,16},{16,16}};

		
		};
		
		
		
		
		
		
		

	class AP_M1117_base: BRDM2_Base
	{
		scope = 0;
		
		ace_dmgsys_enable=1;
		ace_firepos[]={0,0,0};
		ace_minimalhit[]={13,50};
		ace_era=0;
		ace_p_detonation_hull=0.2;
		ace_p_detonation_turret=0.2;
		ace_p_detonation_engine=0;
		ace_p_fire_hull=0.5;
		ace_p_fire_turret=0.2;
		ace_p_fire_engine=0.80000001;
		ace_p_firedetonation=0.5;
		ace_armor_hull[]=
		{
			{20,20},
			{20,20},
			{20,20},
			{20,20},
			{20,20},
			{20,20}
		};
		ace_armor_turret[]=
		{
			{20,20},
			{20,20},
			{20,20},
			{20,20},
			{20,20}
		};
		ACE_exposed=0;
		ACE_Cargo_exposed=0;
		ace_sys_eject_side=0;
		ace_sys_eject_weaponCheck=0;
		ace_sys_repair_spare_tyres=1;
		ace_sys_repair_tyre_type="ACE_Spare_Tyre_HDAPC";
		
		ace_sys_reticles_gunneroptics = 1;
		ace_sys_reticles_gunnersight = "AP_m36";
		
		smokeLauncherGrenadeCount = 4;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 60;
				
		armor=80;
		displayName="M1117 Guardian ASV";
		displayNameShort="M1117 ASV";
		model = "ap_rhs_vehicles\blx_M1117";
		picture = "ap_rhs_vehicles\data\picture_m1117_ca.paa";
		Icon = "ap_rhs_vehicles\data\icon_m1117_ca.paa";
		mapSize = 6.0;
		enableManualFire = 0;
		transportSoldier = 5;
		maxSpeed = 100;
		fuelCapacity = 350;
		brakeIdleSpeed = 2;
		canFloat = 0;
		class Library
		{
			libTextDesc = "M1117_Guardian ASV";
		};
		weapons[] = {"TruckHorn"};
		magazines[] = {};
		enableGPS = 1;
		class Damage
		{
			tex[] = {};
			mat[] = {
				
			"ap_rhs_vehicles\data\m1117_tex1.rvmat",
			"ap_rhs_vehicles\data\m1117_tex1_damage.rvmat",
			"ap_rhs_vehicles\data\m1117_tex1_destruct.rvmat",
			
			"ap_rhs_vehicles\data\m1117_armour.rvmat",
			"ap_rhs_vehicles\data\m1117_armour_damage.rvmat",
			"ap_rhs_vehicles\data\m1117_armour_destruct.rvmat",
			
			"ap_rhs_vehicles\data\m1117_turret.rvmat",
			"ap_rhs_vehicles\data\m1117_turret_damage.rvmat",
			"ap_rhs_vehicles\data\m1117_turret_destruct.rvmat",
			
			"ap_rhs_vehicles\data\m1117_wheel.rvmat",
			"ap_rhs_vehicles\data\m1117_wheel_damage.rvmat",
			"ap_rhs_vehicles\data\m1117_wheel_destruct.rvmat",
			
			"ap_rhs_vehicles\data\periscope_int.rvmat",
			"ap_rhs_vehicles\data\periscope_int_damage.rvmat",
			"ap_rhs_vehicles\data\periscope_int_destroyed.rvmat",
			
			"ap_rhs_vehicles\data\opticsblue.rvmat",
			"ap_rhs_vehicles\data\opticsblue.rvmat",
			"ap_rhs_vehicles\data\periscope_int_destroyed.rvmat",
			
			"ca\data\mirror.rvmat",
			"ca\data\mirror.rvmat",
			"ap_rhs_vehicles\data\periscope_int_destroyed.rvmat",
			
			"ap_rhs_vehicles\data\glassz.rvmat",
			"ap_rhs_vehicles\data\glass_damage.rvmat",
			"ap_rhs_vehicles\data\glass_damage.rvmat",
			
			"ap_rhs_vehicles\data\glass_veh_int.rvmat",
			"ap_rhs_vehicles\data\glass_damage.rvmat",
			"ap_rhs_vehicles\data\glass_damage.rvmat"};
		};
		
		driverAction="BRDM2_Driver";		
		cargoAction[] = {"BRDM2_Cargo01","BRDM2_Cargo02"};
		
		memoryPointsGetInCargo[] = {"pos gunner","pos cargo b","pos cargo","pos gunner"};
		memoryPointsGetInCargoDir[] = {"pos gunner dir","pos cargo b dir","pos cargo dir","pos gunner dir"};
		
		ace_sa_defaultelevation = 35;
		ace_sa_defaultwindage = -8;
		ace_sa_enabled = 0;
		ace_sa_TE_enabled = 1;
		
		memoryPointDriverOptics = "driverview";
		class ViewOptics
		{
			initFov = 0.8;
			minFov = 0.8;
			maxFov = 0.8;
			initAngleX = 0;
			minAngleX = -45;
			maxAngleX = 30;
			initAngleY = 0;
			minAngleY = -90;
			maxAngleY = 90;
			visionMode[] = {"Normal"};
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				proxyType = "CPGunner";
				proxyIndex = 1;
				commanding = -1;
				primaryGunner = 1;
				primaryObserver = 0;
				hasGunner = 1;
				gunnerForceOptics = 1;
				gunnerAction = "AAV_Gunner_OUT";
				gunnerInAction = "AAV_Gunner";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				weapons[]= {"M2","ACE_MK19","SmokeLauncher"};
				magazines[]=
				{
					"48Rnd_40mm_MK19","48Rnd_40mm_MK19","48Rnd_40mm_MK19","48Rnd_40mm_MK19","48Rnd_40mm_MK19",
					"100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2",
					"SmokeLauncherMag"
				};
				soundServo[] = {"\ca\wheeled\Data\Sound\servo4",0.0056234132,1.0,15};
				
				class GunFire: WeaponCloudsMGun
				{
					interval = 0.01;
				};
				
				startEngine = 0;
				minElev = -5;
				maxElev = 60;
				initElev = 0;
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				canHideGunner = 0;
				forceHideGunner = 0;
				gunnerOpticsModel = "\x\ace\addons\sys_reticles\ACE_optics_empty.p3d";
				gunnerOutOpticsModel = "";
				memoryPointGunnerOptics = "gunnerview";
				memoryPointGunnerOutOptics = "gunnerview";
				discreteDistance[] = {};
				discreteDistanceInitIndex = 0;
				turretInfoType = "RscWeaponZeroing";
				canUseScanners = 0;
				allowTabLock = 0;
				memoryPointGun = "kulas";
				selectionFireAnim = "zasleh1";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				body = "MainTurret";
				gun = "MainGun";
				animationSourceBody = "MainTurret";
				animationSourceGun = "MainGun";
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				viewGunnerInExternal = 1;
				stabilizedInAxes = 3;
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
				class HitPoints: HitPoints
				{
					class HitTurret
					{
						armor = 0.3;
						material = -1;
						name = "vez";
						visual = "otocvez";
						passThrough = 0;
						explosionShielding = 0.5;
						radius = 0.15;
					};
					class HitGun
					{
						armor = 2;
						material = -1;
						name = "zbran";
						visual = "-";
						passThrough = 0;
						explosionShielding = 0.5;
						radius = 0.15;
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
				armorLights = 0.1;
			};
			
		};
		
		class AnimationSources: AnimationSources
		{
			class recoil_source
			{
				source = "reload";
				weapon = "M2";
			};
			class hatch_commander
			{
				source = "door";
				animperiod = 1;
				initPhase = 0;
			};
			class hatch_driver: hatch_commander{};
			class hatch_gunner: hatch_commander{};
			
			class HitGlass1
			{
				source = "Hit";
				hitpoint = "HitGlass1";
			};
			class HitGlass2: HitGlass1
			{
				hitpoint = "HitGlass2";
			};
			class HitGlass3: HitGlass1
			{
				hitpoint = "HitGlass3";
			};
			class HitGlass4: HitGlass1
			{
				hitpoint = "HitGlass4";
			};
			class HitGlass5: HitGlass1
			{
				hitpoint = "HitGlass5";
			};
			class HitGlass6: HitGlass1
			{
				hitpoint = "HitGlass6";
			};
			class HitPeriscope1
			{
				source = "Hit";
				hitpoint = "HitPeriscope1";
			};
			class HitPeriscope2: HitPeriscope1
			{
				hitpoint = "HitPeriscope2";
			};
			class HitPeriscope3: HitPeriscope1
			{
				hitpoint = "HitPeriscope3";
			};
			class HitPeriscope4: HitPeriscope1
			{
				hitpoint = "HitPeriscope4";
			};
			class HitPeriscope5: HitPeriscope1
			{
				hitpoint = "HitPeriscope5";
			};
			class HitPeriscope6: HitPeriscope1
			{
				hitpoint = "HitPeriscope6";
			};
			class HitPeriscope7: HitPeriscope1
			{
				hitpoint = "HitPeriscope7";
			};
			class HitMainSight: HitPeriscope1
			{
				hitpoint = "HitMainSight";
			};
		};
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor = 0.4;
				name = "wheel_1_1_steering";
			};
			class HitLBWheel: HitLFWheel
			{
				armor = 0.4;
				name = "wheel_1_2_steering";
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 0.4;
				name = "wheel_2_1_steering";
			};
			class HitRBWheel: HitRFWheel
			{
				armor = 0.4;
				name = "wheel_2_2_steering";
			};
			class HitBody
			{
				armor = 0.8;
				material = -1;
				name = "karoserie";
				visual = "zbytek";
				passThrough = 0;
			};
			class HitFuel
			{
				armor = 1;
				material = -1;
				name = "palivo";
				passThrough = 0;
			};
			class HitEngine
			{
				armor = 2;
				material = -1;
				name = "engine";
				visual = "zbytek";
				passThrough = 0;
			};
			class HitGlass1: HitGlass1
			{
				armor = 1;
			};
			class HitGlass2: HitGlass1 {};
			class HitGlass3: HitGlass1 {};
			class HitGlass4: HitGlass1 {};
			class HitGlass5: HitGlass1 {};
			class HitGlass6: HitGlass1 {};
			
			class HitPeriscope1: HitGlass1
			{
				armor = 0.8;
				name = "periscope1";
				visual = "periscope1";
				explosionShielding = 0.5;
				radius = 0.05;
			};
			class HitPeriscope2: HitGlass1
			{
				armor = 0.8;
				name = "periscope2";
				visual = "periscope2";
				explosionShielding = 0.5;
				radius = 0.05;
			};
			class HitPeriscope3: HitGlass1
			{
				armor = 0.8;
				name = "periscope3";
				visual = "periscope3";
				explosionShielding = 0.5;
				radius = 0.05;
			};
			class HitPeriscope4: HitGlass1
			{
				armor = 0.8;
				name = "periscope4";
				visual = "periscope4";
				explosionShielding = 0.5;
				radius = 0.05;
			};
			class HitPeriscope5: HitGlass1
			{
				armor = 0.8;
				name = "periscope5";
				visual = "periscope5";
				explosionShielding = 0.5;
				radius = 0.05;
			};
			class HitPeriscope6: HitGlass1
			{
				armor = 0.8;
				name = "periscope6";
				visual = "periscope6";
				explosionShielding = 0.5;
				radius = 0.05;
			};
			class HitPeriscope7: HitGlass1
			{
				armor = 0.8;
				name = "periscope7";
				visual = "periscope7";
				explosionShielding = 0.5;
				radius = 0.05;
			};
			class HitMainSight: HitGlass1
			{
				armor = 1.2;
				explosionShielding = 0.3;
				name = "mainSight";
				visual = "mainSight";
				radius = 0.05;
			};
		};
		
		class Reflectors
		{
			class Left
			{
				color[] = {19,13,9.5};
				ambient[] = {0.1,0.1,0.1,1};
				position = "R svetlo";
				direction = "konec R svetla";
				hitpoint = "R svetlo";
				selection = "R svetlo";
				size = 0.4;
				brightness = 0.4;
			};
			class Right: Left
			{
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
			};
			class Pravo: Left
			{
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
			};
		};
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6"};
		hiddenSelectionsTextures[] = {
			"ap_rhs_vehicles\data\m1117_tex1_co.paa",
			"ap_rhs_vehicles\data\m1117_armour_co.paa",
			"ap_rhs_vehicles\data\m1117_turret_co.paa",
			"ap_rhs_vehicles\data\m1117_wheel_co.paa",
			"ap_rhs_vehicles\data\A2_parts_D_co.paa",
			"ap_rhs_vehicles\data\duke_antennae_d_co.paa"
		};
	};
	
	class AP_M1117_D: AP_M1117_base
	{
		scope = 2;
		side = 1;
		displayName = "M1117 ASV (D)";
		vehicleClass="ArmouredD";
		faction = "BIS_US";
		//typicalCargo[] = {"US_Soldier_EP1"};
	};
	
	class AP_M1117_W: AP_M1117_D
	{
		faction = "USMC";
		//typicalCargo[] = {"USMC_Soldier"};
		displayName = "M1117 ASV (W)";
		vehicleClass="ArmouredW";
		hiddenSelectionsTextures[] = {
			"ap_rhs_vehicles\data\m1117_tex1_green_co.paa",
			"ap_rhs_vehicles\data\m1117_armour_green_co.paa",
			"ap_rhs_vehicles\data\m1117_turret_green_co.paa",
			"ap_rhs_vehicles\data\m1117_wheel_green_co.paa",
			"ap_rhs_vehicles\data\A2_parts_g_co.paa",
			"ap_rhs_vehicles\data\duke_antennae_wd_co.paa"
		};
	};
	class AP_M1117_OD: AP_M1117_W
	{
		faction = "USMC";
		displayName = "M1117 ASV (OD)";
		vehicleClass="ArmouredW";
		//typicalCargo[] = {"USMC_Soldier"};
		hiddenSelectionsTextures[] = {
			"ap_rhs_vehicles\data\M1117_tex1_OD_co.paa",
			"ap_rhs_vehicles\data\M1117_armour_od_co.paa",
			"ap_rhs_vehicles\data\M1117_turret_od_co.paa",
			"ap_rhs_vehicles\data\m1117_wheel_green_co.paa",
			"ap_rhs_vehicles\data\A2_parts_g_co.paa",
			"ap_rhs_vehicles\data\duke_antennae_wd_co.paa"
		};
	};
	class AP_M1117_UN: AP_M1117_W
	{
		side = 2;
		faction = "BIS_UN";
		displayName = "M1117 ASV (UN)";
		//typicalCargo[] = {"UN_CDF_Soldier_Crew_EP1"};
		hiddenSelectionsTextures[] = {
			"ap_rhs_vehicles\data\M1117_tex1_UN_co.paa",
			"ap_rhs_vehicles\data\M1117_armour_UN_co.paa",
			"ap_rhs_vehicles\data\M1117_turret_UN_co.paa",
			"ap_rhs_vehicles\data\M1117_wheel_UN_co.paa",
			"ap_rhs_vehicles\data\A2_parts_g_co.paa",
			"ap_rhs_vehicles\data\duke_antennae_wd_co.paa"
		};
	};
		
		
		
	class AP_FMTV_base: ACE_Truck5tMG_Base
	{
		scope = 0;
		side = 1;
		enableGPS = 1;
		faction = "USMC";
		driverAction = "MTVR_Driver";
		cargoAction[] =
		{
			Truck_Cargo01, Truck_Cargo01, Truck_Cargo04, Truck_Cargo04, Truck_Cargo02, Truck_Cargo03,
			Truck_Cargo04, Truck_Cargo02, Truck_Cargo04, Truck_Cargo04, Truck_Cargo04, Truck_Cargo04
		};
		fuelCapacity = 303;
		maxSpeed = 105;
		typicalCargo[] = {"USMC_Soldier"};
		displayName = "FMTV";
		model = "\ap_rhs_vehicles\M1078A1P2.p3d";
		picture = "\ap_rhs_vehicles\data\rhs_M1078A1P2_pic_ca.paa";
		
		Icon = "\ap_rhs_vehicles\data\ico_m1078_flat_m2.paa";
		mapSize = 8.02;
		transportSoldier = 14;
		memoryPointsGetInCargo[] = {"pos codriver","pos codriver","pos cargo"};
		memoryPointsGetInCargoDir[] = {"pos codriver dir","pos codriver dir","pos cargo dir"};
		
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {
			"ap_rhs_vehicles\data\fmtv_chassis_co.paa",
			"ap_rhs_vehicles\data\fmtv_25trear_co.paa",
			"ap_rhs_vehicles\data\fmtv_cab_co.paa"
		};
		
		ace_sa_enabled = 1;
		ace_sa_adj_mode = "range";
		ace_sa_defaultwindage = 0;
		ace_sa_minelevation = 100;
		ace_sa_stepelevation = 100;
		ace_sa_windage = 10;
		ace_sa_stepwindage = 1;
		ace_sa_elev_unit = "mil";
		ace_sa_wind_unit = "mil";
		ace_sa_TE_enabled = 0;
		ace_sa_defaultelevation = 0;
		ace_sa_maxelevation = 2600;
		ace_sa_range_unit = "yards";
		ace_sa_table_elev[] = {{ 0,0 },{ 100,0.52 },{ 200,1.21 },{ 300,1.89 },{ 400,2.62 },{ 500,3.41 },{ 600,4.21 },{ 700,5.11 },{ 800,6.09 },{ 900,7.03 },{ 1000,8.13 },{ 1100,9.35 },{ 1200,10.63 },{ 1300,12 },{ 1400,13.53 },{ 1500,15.14 },{ 1600,16.9 },{ 1700,18.79 },{ 1800,20.8 },{ 1900,22.99 },{ 2000,25.35 },{ 2100,27.94 },{ 2200,30.76 },{ 2300,33.77 },{ 2400,36.95 },{ 2500,40.55 },{ 2600,44.56 }};
		
		class UserActions
		{
			class UNHIDE_TENT
			{
			displayName = "$STR_UNHIDE_TENT";
			position = "vtv_cargo_2";
			onlyforplayer = true;
			radius = 3.5;
			condition="(alive this) and !(player in (crew this)) and (speed this < 1) and (this animationPhase 'tent_woodland_unhide' < 0.9) and (this animationPhase 'tent_desert_unhide' < 0.9)";
			statement="[this,player] execvm 'ap_rhs_vehicles\scripts\unhide_tent.sqf'";
			};
			class HIDE_TENT
			{
			displayName = "$STR_HIDE_TENT";
			position = "vtv_cargo_2";
			onlyforplayer = true;
			radius = 3.5;
			condition="(alive this) and !(player in (crew this)) and (speed this < 1) and ((this animationPhase 'tent_woodland_unhide' > 0) or (this animationPhase 'tent_desert_unhide' > 0))";
			statement="[this,player] execvm 'ap_rhs_vehicles\scripts\hide_tent.sqf'";
			};
		};
	
		
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				ACE_Exposed = "true";
				body = "mainTurret";
				gun = "mainGun";
				hasGunner = 1;
				weapons[] = {"M2"};
				minElev = -15;
				maxElev = +30;
				magazines[] = {
					"100Rnd_127x99_M2",
					"100Rnd_127x99_M2",
					"100Rnd_127x99_M2",
					"100Rnd_127x99_M2",
					"100Rnd_127x99_M2",
					"100Rnd_127x99_M2",
					"100Rnd_127x99_M2",
					"100Rnd_127x99_M2",
					"100Rnd_127x99_M2",
					"100Rnd_127x99_M2"
				};
				soundServo[] = {"\ca\wheeled\Data\Sound\servo3","db-75",0.9};
				gunnerAction = "Truck_Gunner";
				gunnerInAction = "Truck_Gunner";
				castGunnerShadow = 1;
				viewGunnerShadow = 1;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = "0.33333+ 0.41667";
					minFov = "0.33333/ 1";
					maxFov = "0.33333+ 0.41667";
				};
				class ViewGunner
				{
					initAngleX = 5;
					minAngleX = -65;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
					initFov = "0.33333+ 0.41667";
					minFov = "0.33333/ 1";
					maxFov = "0.33333+ 0.41667";
				};
				gunnerForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				gunnerOpticsShowCursor = 0;
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				memoryPointGunnerOptics = "gunnerview";
				selectionFireAnim = "zasleh1";				
				stabilizedInAxes = StabilizedInAxesNone;
			};
		};
		
		class AnimationSources: AnimationSources
		{
			class HitGlass1
			{
				source = "Hit";
				raw = 1;
				hitpoint = "HitGlass1";
			};
			class HitGlass2: HitGlass1
			{
				hitpoint = "HitGlass2";
			};
			class HitGlass3: HitGlass1
			{
				hitpoint = "HitGlass3";
			};
			class HitGlass4: HitGlass1
			{
				hitpoint = "HitGlass4";
			};
			class HitGlass5: HitGlass1
			{
				hitpoint = "HitGlass5";
			};
		};
		
		class HitPoints: HitPoints
		{
				class HitGlass1 {armor=2;material=-1;name="glass1";visual="glass1";passThrough=0;};
				class HitGlass2 {armor=2;material=-1;name="glass2";visual="glass2";passThrough=0;};
				class HitGlass3 {armor=2;material=-1;name="glass3";visual="glass3";passThrough=0;};
				class HitGlass4 {armor=2;material=-1;name="glass4";visual="glass4";passThrough=0;};
				class HitGlass5 {armor=2;material=-1;name="glass5";visual="glass5";passThrough=0;};
				
			class HitLFWheel: HitLFWheel
			{
				armor = 0.5;
				name = "wheel_1_1_steering";
			};
			class HitLBWheel: HitLBWheel
			{
				armor = 0.5;
				name = "wheel_1_2_steering";
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 0.5;
				name = "wheel_2_1_steering";
			};	
			class HitRBWheel: HitRBWheel
			{
				armor = 0.5;
				name = "wheel_2_2_steering";
			};
			
			class HitFuel
			{
				armor = 0.5;
				material = -1;
				name = "palivo";
				visual = "-";
				passThrough = 0.2;
			};
			class HitEngine
			{
				armor = 0.5;
				material = -1;
				name = "motor";
				visual = "zbytek";
				passThrough = 0.2;
			};
			class HitBody: HitBody
			{
				name = "";
				visual = "zbytek";
				passThrough = 1;
			};
		};
		class Reflectors
		{
			class Left
			{
				color[] = {19,13,9.5};
				ambient[] = {0.1,0.1,0.1,1};
				position = "P_svetlo";
				direction = "konec_P_svetla";
				hitpoint = "P_svetlo";
				selection = "P_svetlo";
				size = 0.4;
				brightness = 0.4;
			};
			class Right: Left
			{
				position = "L_svetlo";
				direction = "konec_L_svetla";
				hitpoint = "L_svetlo";
				selection = "L_svetlo";
			};
		};

		wheelCircumference = 3.705;
		brakeIdleSpeed = 2.0;
		canFloat = 0;
		thrustDelay = 0.5;
		engineBrakeCoef = 0.8;

		class Damage
		{
			tex[] = {};
			mat[] = {
				"ap_rhs_vehicles\data\glass_veh.rvmat",
				"ap_rhs_vehicles\data\glass_veh_armored_damage.rvmat",
				"ap_rhs_vehicles\data\glass_veh_armored_damage.rvmat",
				
				"ap_rhs_vehicles\data\FMTV_Cab.rvmat",
				"ap_rhs_vehicles\data\FMTV_Cab_dam.rvmat",
				"ap_rhs_vehicles\data\fmtv_destruction.rvmat",
				
				"ap_rhs_vehicles\data\FMTV_25TRear.rvmat",
				"ap_rhs_vehicles\data\FMTV_25TRear_dam.rvmat",
				"ap_rhs_vehicles\data\fmtv_destruction.rvmat",
				
				"ap_rhs_vehicles\data\FMTV_Int.rvmat",
				"ap_rhs_vehicles\data\FMTV_Int_dam.rvmat",
				"ap_rhs_vehicles\data\fmtv_destruction.rvmat",
				
				"ap_rhs_vehicles\data\FMTV_Chassis.rvmat",
				"ap_rhs_vehicles\data\FMTV_Chassis_dam.rvmat",
				"ap_rhs_vehicles\data\fmtv_destruction.rvmat",
				
				"ap_rhs_vehicles\data\fmtv_chassis1.rvmat",
				"ap_rhs_vehicles\data\FMTV_Chassis1_dam.rvmat",
				"ap_rhs_vehicles\data\fmtv_destruction.rvmat",
				
				"ap_rhs_vehicles\data\FMTV_BKIT.rvmat",
				"ap_rhs_vehicles\data\FMTV_BKIT_dam.rvmat",
				"ap_rhs_vehicles\data\fmtv_destruction.rvmat",
				
				"ap_rhs_vehicles\data\FMTV_wheel.rvmat",
				"ap_rhs_vehicles\data\FMTV_Wheel_dam.rvmat",
				"ap_rhs_vehicles\data\fmtv_destruction.rvmat",
				
				"ap_rhs_vehicles\data\FMTV_SOVRear.rvmat",
				"ap_rhs_vehicles\data\FMTV_SOVRear_dam.rvmat",
				"ap_rhs_vehicles\data\fmtv_destruction.rvmat",
				
				"ap_rhs_vehicles\data\FMTV_SOVCab.rvmat",
				"ap_rhs_vehicles\data\FMTV_SOVCab_dam.rvmat",
				"ap_rhs_vehicles\data\fmtv_destruction.rvmat",
				
				"ap_rhs_vehicles\data\mk64mount.rvmat",
				"ap_rhs_vehicles\data\mk64mount.rvmat",
				"ap_rhs_vehicles\data\fmtv_destruction.rvmat",
				
				"ca\data\mirror.rvmat",
				"ca\data\mirror.rvmat",
				"ap_rhs_vehicles\data\periscope_int_destroyed.rvmat",
				
				"ap_rhs_vehicles\data\ogpk_base.rvmat",
				"ap_rhs_vehicles\data\ogpk_base_dam.rvmat",
				"ap_rhs_vehicles\data\ogpk_base_destr.rvmat",
				
				"ap_rhs_vehicles\data\kamaz_glass_in.rvmat",
				"ap_rhs_vehicles\data\glass_veh_armored_damage.rvmat",
				"ap_rhs_vehicles\data\glass_veh_armored_damage.rvmat"
				};
		};	
		


	
	};	
		
		class AP_FMTV_W: AP_FMTV_base
		{
			scope = 2;	
			displayName = "M1078A1P2";
			Icon = "\ap_rhs_vehicles\data\ico_m1078_flat.paa";
			class Turrets {};
			
			class HitPoints: HitPoints
			{
				class HitGlass1 {armor=0.1;material=-1;name="glass1";visual="glass1";passThrough=0;};
				class HitGlass2 {armor=0.1;material=-1;name="glass2";visual="glass2";passThrough=0;};
				class HitGlass3 {armor=0.1;material=-1;name="glass3";visual="glass3";passThrough=0;};
				class HitGlass4 {armor=0.1;material=-1;name="glass4";visual="glass4";passThrough=0;};
				class HitGlass5 {armor=0.1;material=-1;name="glass5";visual="glass5";passThrough=0;};
			};
		};	
		
		class AP_FMTV_D: AP_FMTV_W
		{
			faction = "BIS_US";
			vehicleClass="CarD";
			typicalCargo[] = {"US_Soldier_EP1"};
			hiddenSelectionsTextures[] = {
			"ap_rhs_vehicles\data\FMTV_Chassis_D_CO.paa",
			"ap_rhs_vehicles\data\FMTV_25TRear_D_CO.paa",
			"ap_rhs_vehicles\data\FMTV_Cab_D_CO.paa"
			};
		};	
		
		class AP_FMTV_ARMOR_W: AP_FMTV_base
		{
			scope = 2;	
			displayName = "M1078A1P2-B";
			model = "\ap_rhs_vehicles\M1078A1P2_B.p3d";
			picture = "\ap_rhs_vehicles\data\rhs_M1078A1P2_B_pic_ca.paa";
			Icon = "\ap_rhs_vehicles\data\ico_m1078_flat.paa";
			class Turrets {};
			hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
			hiddenSelectionsTextures[] = {
			"ap_rhs_vehicles\data\fmtv_chassis_co.paa",
			"ap_rhs_vehicles\data\fmtv_25trear_co.paa",
			"ap_rhs_vehicles\data\fmtv_cab_co.paa",
			"ap_rhs_vehicles\data\fmtv_bkit_co.paa"
			};		
		};	
		
		class AP_FMTV_ARMOR_D: AP_FMTV_ARMOR_W
		{
			faction = "BIS_US";
			vehicleClass="CarD";
			typicalCargo[] = {"US_Soldier_EP1"};
			hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
			hiddenSelectionsTextures[] = {
			"ap_rhs_vehicles\data\FMTV_Chassis_D_CO.paa",
			"ap_rhs_vehicles\data\FMTV_25TRear_D_CO.paa",
			"ap_rhs_vehicles\data\FMTV_Cab_D_CO.paa",
			"ap_rhs_vehicles\data\fmtv_bkit_D_co.paa"
			};
		};
		
		
		class AP_FMTV_ARMOR_M2_W: AP_FMTV_base
		{
			scope = 2;	
			displayName = "M1078A1P2-B (M2)";
			model = "\ap_rhs_vehicles\M1078A1P2_B_M2.p3d";
			picture = "\ap_rhs_vehicles\data\rhs_M1078A1P2_B_GPK_pic_ca.paa";
			
			hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5"};
			hiddenSelectionsTextures[] = {
			"ap_rhs_vehicles\data\fmtv_chassis_co.paa",
			"ap_rhs_vehicles\data\fmtv_25trear_co.paa",
			"ap_rhs_vehicles\data\fmtv_cab_co.paa",
			"ap_rhs_vehicles\data\fmtv_bkit_co.paa",
			"ap_rhs_vehicles\data\rg33_turretwd_co.paa"
			};			
		};	
		
		class AP_FMTV_ARMOR_M2_D: AP_FMTV_ARMOR_M2_W
		{
			faction = "BIS_US";
			vehicleClass="CarD";
			typicalCargo[] = {"US_Soldier_EP1"};
			hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5"};
			hiddenSelectionsTextures[] = {
			"ap_rhs_vehicles\data\FMTV_Chassis_D_CO.paa",
			"ap_rhs_vehicles\data\FMTV_25TRear_D_CO.paa",
			"ap_rhs_vehicles\data\FMTV_Cab_D_CO.paa",
			"ap_rhs_vehicles\data\fmtv_bkit_D_co.paa",
			"ap_rhs_vehicles\data\RG33_TurretD_CO.paa"
			};
		};
		
		class AP_FMTV_SOV_M2_W: AP_FMTV_base
		{
			scope = 2;	
			displayName = "M1078A1R SOV (M2)";
			model = "\ap_rhs_vehicles\M1078A1R_SOV_M2.p3d";
			Icon = "\ap_rhs_vehicles\data\ico_m1078_flat.paa";
			transportSoldier = 5;
			hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
			hiddenSelectionsTextures[] = {
			"ap_rhs_vehicles\data\FMTV_SOVChassis_WD_CO.paa",
			"ap_rhs_vehicles\data\FMTV_SOVCab_W_CO.paa",
			"ap_rhs_vehicles\data\FMTV_SOVRear_W_CO.paa",
			"ap_rhs_vehicles\data\mk64mount_w_co.paa"
			};	

			class UserActions {};
		};	
		
		class AP_FMTV_SOV_M2_D: AP_FMTV_SOV_M2_W
		{
			faction = "BIS_US";
			vehicleClass="CarD";
			typicalCargo[] = {"US_Soldier_EP1"};
			hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
			hiddenSelectionsTextures[] = {
			"ap_rhs_vehicles\data\fmtv_sovchassis_co.paa",
			"ap_rhs_vehicles\data\fmtv_sovcab_co.paa",
			"ap_rhs_vehicles\data\fmtv_sovrear_co.paa",
			"ap_rhs_vehicles\data\mk64mount_d_co.paa"
			};
		};
	
	
	
	
};

class ACE_Config
{
	class cfgVehicleOpticsReticles
	{
		class BPK_2_42;
		class BPK_2_72: BPK_2_42
		{
			ace_sys_reticles_texstatic = "\x\ace\addons\m_veh_optics\data\bpk242_mark_w.paa";
			ace_sys_reticles_texreticle = "\x\ace\addons\m_veh_optics\data\bpk242_w.paa";
			ace_sys_reticles_texreticle_n = "\x\ace\addons\m_veh_optics\data\bpk242_w.paa";
			ace_sys_reticles_texmap = 1;
			ace_sys_reticles_texsize = 1024;
			ace_sys_reticles_pxmil = 9;
			ace_sys_reticles_fov0 = 0.04;
			ace_sys_reticles_illum = 1;
			ace_sys_reticles_illumcolor[] = {0.7412,0,0,1};
			ace_sys_reticles_checkweapon = "AP_2A72";
		};
		
		class AP_1PZ_7
		{
			ace_sys_reticles_checkweapon = "KPVT";
			ace_sys_reticles_fov0 = "0.33333/2";
			ace_sys_reticles_horizshift = 0;
			ace_sys_reticles_illum = 1;
			ace_sys_reticles_illumcolor[] = {0.7412, 0, 0, 1};
			ace_sys_reticles_pxmil = 12;
			ace_sys_reticles_texmap = 1;
			ace_sys_reticles_texreticle = "\ap_rhs_vehicles\data\mark.paa";
			ace_sys_reticles_texsize = 4096;
			ace_sys_reticles_texstatic = "\ap_rhs_vehicles\data\1PZ-7.paa";
		};
		class AP_m36: BPK_2_42
		{
			ace_sys_reticles_checkweapon = "M2";
			ace_sys_reticles_fov0 = "0.33333/ 4";
			ace_sys_reticles_horizshift = 0;
			ace_sys_reticles_illum = 1;
			ace_sys_reticles_illumcolor[] = {0.7412, 0, 0, 1};
			ace_sys_reticles_pxmil = 0;
			ace_sys_reticles_texmap = 1;
			ace_sys_reticles_texsize = 4096;
			ace_sys_reticles_texstatic = "\ap_rhs_vehicles\data\destruct_ti_ca.paa";
			ace_sys_reticles_texreticle = "\ap_rhs_vehicles\data\rhs_optics_m36.paa";
			ace_sys_reticles_texreticle_n = "\ap_rhs_vehicles\data\rhs_optics_m36.paa";
		};
	};
};

class PreloadTextures
{
	class ACE_Config
	{
		class cfgVehicleOpticsReticles
		{
			class BPK_2_72
			{
				ace_sys_reticles_texstatic = "*";
				ace_sys_reticles_texreticle = "*";
				ace_sys_reticles_texreticle_n = "*";
			};
			class AP_m36
			{
				ace_sys_reticles_texstatic = "*";
				ace_sys_reticles_texreticle = "*";
				ace_sys_reticles_texreticle_n = "*";
			};
		};
	};
};
