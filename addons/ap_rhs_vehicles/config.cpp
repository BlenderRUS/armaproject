#define _ARMA_

class CfgPatches
{
	class ap_rhs_vehicles
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"ace_main","ace_c_vehicle","CATracked2","CAWheeled2","balca_CE","retex_vehicles","acex_veh_btr70","rhs_cargosystem","ace_sys_reticles"};
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
};

class WeaponCloudsMGun;
class CfgVehicles
{
	class Logic;
	class RHS_CargoSystem_Enable: Logic
	{
		rhs_version = 0.6047;
		displayName = "$STR_rhs_cargosystem_modul";
		icon = "\rhs_cargosystem\img\rhs_cargosystem_icon.paa";
		picture = "\rhs_cargosystem\img\rhs_cargosystem_icon.paa";
		vehicleClass = "Modules";
		class Eventhandlers
		{
			init = "MoveOnCargo = compile preprocessFileLineNumbers '\rhs_cargosystem\scripts\bgr_MoveOnCargo.sqf'; rhs_enableCS = compile preprocessFileLineNumbers '\rhs_cargosystem\scripts\enableCS.sqf'; RHS_cargoSystem_geton_group = compile preprocessFileLineNumbers '\rhs_cargosystem\scripts\f_geton_group.sqf'; _ok = _this execVM '\rhs_cargosystem\scripts\cargoSystem_init.sqf';";
		};
		RHS_cargoSystem_wfList[] = {{"AP_BTR80","rhs_cargo_btr80"},{"AP_BTR82A","rhs_cargo_btr82a"},{"T90","not"},{"T72_Base","rhs_cargo_t72"},{"T55_Base","rhs_cargo_t55"},{"BMP2_Ambul_Base","rhs_cargo_bmp2ambul"},{"ACE_BMP2D_RU","rhs_cargo_bmp2aceD"},{"BMP2_HQ_Base","not"},{"BMP2_Base","rhs_cargo_bmp2"},{"HA_rhs_btr70p","rhs_cargo_btr70p"},{"rhs_btr70_base","rhs_cargo_btr70"},{"ACE_BTR70_Base","rhs_cargo_btr70ace"},{"BTR60_TK_EP1","rhs_cargo_btr60"},{"BRDM2_ATGM_Base","not"},{"BRDM2_HQ_Base","not"},{"BRDM2_Base","rhs_cargo_brdm2"}};
	};
	
	class rhs_cargo_btr70;
	class rhs_cargo_btr80: rhs_cargo_btr70
	{
		RHS_attachToPos[] = {0,-0.62,0.85};
		RHS_animPos[] = {{-2.5,0.5,3},{-2.5,3.5,3},{2,0.5,3},{2,-0.5,3},{2,2,3},{-2.5,-0.5,3},{2,3,3}};
		RHS_animDeg[] = {-90,-45,90,90,70,-90,30};
		RHS_ejectZPos[] = {-5,-5,-5,-5,-5,-5,-5};
	};
	class rhs_cargo_btr82a: rhs_cargo_btr80
	{
		RHS_attachToPos[] = {0,-0.9,0.70};
	};
	
	class LandVehicle;
	class Car: LandVehicle
	{
		class NewTurret;
	};
	class Wheeled_APC: Car {};
	class BRDM2_Base: Wheeled_APC
	{
		class Turrets;
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

				//"a3\data_f\default.rvmat",
				//"a3\data_f\default.rvmat",
				//"a3\data_f\default_destruct.rvmat"
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
			
			/*class Middle
			{
				color[] = {0.7, 0.6, 0.6, 1.0};
				ambient[] = {0.1, 0.1, 0.1, 1.0};
				position = "light_g";
				direction = "light_g_end";
				hitpoint = "G svetlo";
				selection = "light_g";
				size = 0.8;
				brightness = 0.8;
			};*/
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
					//opticsZoomMin = "0.33333/ 4.2";
					//opticsZoomMax = "0.33333/ 4.2";
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
					/*class Medium: Wide {
						initfov = "0.33333/ 4.2";
						maxfov = "0.33333/ 4.2";
						minfov = "0.33333/ 4.2";
					};*/
				};	

				
				
						ace_sys_nvg_nvrange = 720;
						commanderforceoptics = 0;
						forcehidecommander = 0;
						gunnerforceoptics = 0;

						gunneropticseffect[] = {"TankCommanderOptics1"};
						gunneropticsshowcursor = 0;
						ingunnermayfire = 1;
						//magazines[] = {"SmokeLauncherMag", "SmokeLauncherMag"};
						memorypointsgetingunner = "pos commander";
						memorypointsgetingunnerdir = "pos commander dir";
						outgunnermayfire = 1;
						//soundservo[] = {"\Ca\sounds\Vehicles\Servos\turret-3", 0.01, 1, 20};
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
		ace_armor_hull[] = {{10,10},{7,7},{7,7},{7,7},{7,7}};
		ace_armor_turret[] = {{10,10},{7,7},{7,7},{7,7},{7,7}};
		
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
						//gunnerOpticsModel = "\ap_rhs_vehicles\rhs_bpk142";
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
		};
	};
};
