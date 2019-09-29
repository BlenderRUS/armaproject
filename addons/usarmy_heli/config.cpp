////////////////////////////////////////////////////////////////////
//DeRap: usarmy_heli\config.bin
//Produced from mikero's Dos Tools Dll version 6.24
//'now' is Mon Sep 16 02:08:47 2019 : 'file' last modified on Mon Sep 16 02:02:32 2019
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class USArmy_Helli
	{
		units[] = {""};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"CAData","CACharacters","CACharacters2","CAWeapons","CAWeapons_E","CAAir","CAAir_e"};
		version = 1;
	};
};
class CfgMagazines
{
	class 100Rnd_127x99_M2;
	class AP_200Rnd_127x99_M2: 100Rnd_127x99_M2
	{
		tracersEvery = 1;
		count = 200;
	};
};
class CfgWeapons
{
	class MGun;
	class M2;
	class AP_2xM2: M2
	{
		scope = 2;
		displayName = "$STR_2xM2";
		magazines[] = {"AP_200Rnd_127x99_M2"};
		autoReload = 0;
		magazineReloadTime = 40;
		reloadTime = 0.01;
		isMultiBarrel = 1;
		BarrelCount = 2;
		BarrelName = "muzzle";
		class manual: MGun
		{
			reloadTime = 0.03;
			autoReload = 0;
			sound[] = {"\ap_btr40\sounds\4m2.ogg",1.0,1,1200};
			dispersion = 0.0015;
			burst = 2;
		};
	};
	class M240_VEH;
	class M240_VEH_3: M240_VEH{};
};
class DefaultEventHandlers;
class CfgVehicles
{
	class All{};
	class AllVehicles: All{};
	class Air: AllVehicles{};
	class Helicopter: Air
	{
		class NewTurret;
		class Turrets
		{
			class MainTurret;
		};
		class AnimationSources;
		class ViewPilot;
		class HitPoints;
		class Sounds;
	};
	class CH_series: Helicopter
	{
		ace_camshake_enabled = 1;
		ace_canbecargo = 0;
		ace_canbeload = 1;
		ace_canfastrope = 1;
		ace_cangear = 0;
		ace_canlift = 1;
		ace_canloadfront = 0;
		ace_cargo_exposed = 0;
		ace_ejection_seat = "ParachuteC";
		ace_exposed = 0;
		ACE_GeoLifterAttachment[] = {{0, 0, -5.6}};
		ACE_RopeAttachment[] = {{0, 0.14, -3}, {0, -7.5, -1.1}};
		ace_sys_air_rwr_type = "ACE_Default";
		ace_sys_autorotation_horizontal_gain = "0.75/75";
		ace_sys_autorotation_vertical_gain = "0.5/1.5";
		ace_sys_eject_eject = 0;
		ace_sys_eject_jump = 1;
		ace_sys_eject_side = 0;
		ace_sys_eject_weaponcheck = 1;
		ace_sys_repair_rearm = 0;
		ace_sys_repair_refuel = 0;
		ace_sys_repair_repair = 0;
		ace_sys_repair_spare_tyres = 0;
		ace_sys_repair_threshold = 0.8;
		ace_sys_repair_threshold_refuel = 1;
		ace_sys_repair_time = 900;
		ace_sys_rotoreffects_disable_manshred = 1;
		ace_sys_tracking_marker = "b_air";
		ace_tankfcs_enabled = 0;
		aileronsensitivity = 0.1;
		armor = 40;
		cost = 100;
		scope = 0;
		side = 1;
		faction = "BIS_US";
		damageResistance = 0.00242;
		vehicleclass = "TU_USARMY_AIR";
		irScanRangeMin = 500;
		crew = "USMC_Soldier_Pilot";
		driverInAction = "AH6_Pilot";
		driverAction = "AH6_Pilot";
		accuracy = 1000;
		fuelCapacity = 1325;
		initCargoAngleY = 10;
		minCargoAngleY = -60;
		maxCargoAngleY = 120;
		maxSpeed = 290;
		simulation = "helicopter";
		enableSweep = 0;
		DriverCanSee = "1+2+8+32";
		supplyRadius = 2.5;
		memoryPointsGetInDriver = "pos_driver";
		memoryPointsGetInDriverDir = "pos_driver_dir";
		memoryPointsGetInCargo = "pos_cargo";
		memoryPointsGetInCargoDir = "pos_cargo_dir";
		castDriverShadow = 1;
		castCargoShadow = 1;
		audible = 6;
		insideSoundCoef = 0.4;
		gearRetracting = 1;
		selectionHRotorStill = "velka vrtule staticka";
		selectionHRotorMove = "velka vrtule blur";
		selectionVRotorStill = "mala vrtule staticka";
		selectionVRotorMove = "mala vrtule blur";
		mainRotorSpeed = 1;
		backRotorSpeed = 1;
		minMainRotorDive = 9;
		maxMainRotorDive = -14;
		neutralMainRotorDive = 4;
		transportMaxMagazines = 150;
		transportMaxWeapons = 30;
		extCameraPosition[] = {0,1,-15};
		threat[] = {1,0.05,0.05};
		soundGetIn[] = {"ca\sounds\Air\Mi17\ext\ext-Mi17-getin-01",1,1};
		soundGetOut[] = {"ca\sounds\Air\Mi17\ext\ext-Mi17-getout-01",1,1,40};
		soundDammage[] = {"ca\sounds\Air\Mi17\int\alarm_loop1",0.001,1};
		soundEngineOnInt[] = {"\USArmy_Heli\Sounds\ch53windupin.wss",0.5,1};
		soundEngineOnExt[] = {"\USArmy_Heli\Sounds\ch53_startup_ext.wss",0.7,1,400};
		soundEngineOffInt[] = {"\USArmy_Heli\Sounds\ch53_shutdown_int.wss",0.5,1};
		soundEngineOffExt[] = {"\USArmy_Heli\Sounds\ch53_shutdown_ext.wss",0.7,1,400};
		class Sounds: Sounds
		{
			class engineout
			{
				sound[] = {"\USArmy_Heli\Sounds\ch53_engine.wss",2.51189,1,500};
				frequency = "rotorSpeed*0.98";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorHighOut
			{
				sound[] = {"\USArmy_Heli\Sounds\ch53_rotors.wss",6,1,3000};
				frequency = "rotorSpeed*0.98";
				volume = "camPos*(0  max (rotorSpeed+0.05))";
				cone[] = {1.6,3.14,2,0.95};
			};
			class EngineIn
			{
				sound[] = {"\USArmy_Heli\Sounds\ch53_int.wss","db10",2};
				frequency = "rotorSpeed*0.98";
				volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class rotors_in
			{
				sound[] = {"\USArmy_Heli\Sounds\ch53_rotors_int.wss",6,1};
				frequency = "rotorSpeed*0.98";
				volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class uns_ramp
			{
				name = "ramp1";
				sound[] = {"\USArmy_Heli\Sounds\ramp",1,1,50};
				frequency = "rotorSpeed";
				volume = "camPos*(0  max (rotorSpeed - 0.5))";
			};
		};
		class HitPoints: HitPoints
		{
			class HitVRotor
			{
				armor = 0.3;
				material = 1;
				name = "mala vrtule";
				visual = "mala vrtule staticka";
				passThrough = 0.1;
			};
			class HitHRotor
			{
				armor = 0.2;
				material = 1;
				name = "velka vrtule";
				visual = "velka vrtule staticka";
				passThrough = 0.1;
			};
			class HitEngine
			{
				armor = 0.5;
				material = 1;
				name = "motor";
				visual = "trup";
				passThrough = 0.5;
			};
		};
	};
	class AP_CH46: CH_series
	{
		mapSize = 24;
		ace_maxload = 4500;
		ace_weight = 7000;
		model = "\USArmy_Heli\CH46";
		picture = "\USArmy_Heli\ico\CH46pic.paa";
		Icon = "\USArmy_Heli\ico\CH46icon.paa";
		scope = 2;
		displayName = "$STR_NAME_CH46";
		displaynameShort = "$STR_SNAME_CH46";
		extCameraPosition[] = {0,2.5,-25};
		expansion = 2;
		armor = 50;
		maxSpeed = 265;
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment1"};
		selectionHRotorStill = "velka vrtule staticka";
		selectionHRotorMove = "velka vrtule blur";
		selectionVRotorStill = "mala vrtule staticka";
		selectionVRotorMove = "mala vrtule blur";
		hasdriver = 1;
		hasGunner = 1;
		castCargoShadow = 1;
		driverAction = "AH6_Pilot";
		driverInAction = "AH6_Pilot";
		transportSoldier = 22;
		incommingmissliedetectionsystem = 8;
		lockdetectionsystem = 8;
		mainRotorSpeed = 1;
		backRotorSpeed = 1;
		gearRetracting = 0;
		gearUpTime = 3.33;
		gearDownTime = 2;
		crewVulnerable = 1;
		minMainRotorDive = 0;
		maxMainRotorDive = 0;
		neutralMainRotorDive = 0;
		minBackRotorDive = 0;
		maxBackRotorDive = 0;
		neutralBackRotorDive = 0;
		envelope[] = {0,0.2,0.9,2.1,2.5,3.3,3.5,3.6,3.7,3.8,3.8,3,0.9,0.7,0.5};
		soundIncommingMissile[] = {"\ca\Tracked\Data\Sound\alarm_loop1",0.000316228,4};
		soundLocked[] = {"\ca\Tracked\Data\Sound\alarm_loop1",0.000316228,2};
		cargoAction[] = {"M113_Cargo02_EP1","M113_Cargo01_EP1","M113_Cargo02_EP1","M113_Cargo02_EP1","M113_Cargo01_EP1","M113_Cargo02_EP1","M113_Cargo02_EP1","M113_Cargo02_EP1","M113_Cargo01_EP1","M113_Cargo02_EP1","M113_Cargo01_EP1","M113_Cargo02_EP1","M113_Cargo02_EP1","M113_Cargo01_EP1","M113_Cargo02_EP1","M113_Cargo02_EP1","M113_Cargo02_EP1","M113_Cargo01_EP1","M113_Cargo02_EP1","M113_Cargo01_EP1","M113_Cargo02_EP1","M113_Cargo02_EP1"};
		typicalCargo[] = {"USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier"};
		memoryPointsGetInCargo = "pos cargo";
		memoryPointsGetInCargoDir = "pos cargo dir";
		memoryPointsGetInDriver = "pos_driver";
		memoryPointsGetInDriverDir = "pos_driver_dir";
		occludeSoundsWhenIn = 0.562341;
		obstructSoundsWhenIn = 0.316228;
		selectionFireAnim = "muzzleflash";
		damageResistance = 0.00593;
		destrType = "DestructWreck";
		class HitPoints: HitPoints
		{
			class HitVRotor
			{
				armor = 0.3;
				material = 1;
				name = "";
				visual = "mala vrtule staticka";
				passThrough = 0.1;
			};
			class HitHRotor
			{
				armor = 0.2;
				material = 1;
				name = "vrtule";
				visual = "velka vrtule staticka";
				passThrough = 0.1;
			};
			class HitEngine
			{
				armor = 0.5;
				material = 1;
				name = "motor";
				visual = "trup";
				passThrough = 0.5;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"usarmy_heli\data\CH46\ch46main.rvmat","usarmy_heli\data\CH46\ch46main_damage.rvmat","usarmy_heli\data\CH46\ch46main_destruct.rvmat","usarmy_heli\data\rst.rvmat","usarmy_heli\data\rst_damage.rvmat","usarmy_heli\data\rst_damage.rvmat"};
		};
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"120Rnd_CMFlare_Chaff_Magazine"};
		hiddenSelections[] = {"camo01","N_1","N_2","N_decal","N_roundel"};
		hiddenSelectionsTextures[] = {"usarmy_heli\data\CH46\ch46_main_co.paa","usarmy_heli\data\CH46\ch46_main_ti_ca.paa","usarmy_heli\data\CH46\ch46_main_ti_ca.paa","USArmy_Heli\Num\decal\U.S.ARMYb.paa","USArmy_Heli\Num\logo\LOGO_USAF.paa"};
		class EventHandlers: DefaultEventHandlers
		{
			init = "_this execVM '\USArmy_Heli\Num\script\Num_Black.sqf';";
		};
		class Sounds: Sounds
		{
			class Engine
			{
				sound[] = {"USArmy_Heli\Sounds\CH46engine",5.62341,1,900};
				frequency = "rotorSpeed";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
		};
		class MarkerLights
		{
			class RedStill
			{
				name = "cerveny pozicni";
				color[] = {0.2,0.02,0.02,1};
				ambient[] = {0.3,0.03,0.03,1};
				brightness = 0.01;
				blinking = 0;
			};
			class GreenBlinking
			{
				name = "zeleny pozicni blik";
				color[] = {0.02,0.2,0.02,1};
				ambient[] = {0.2,0.02,0.02,1};
				brightness = 0.01;
				blinking = 1;
			};
			class WhiteStill
			{
				name = "bily pozicni";
				color[] = {0.2,0.2,0.2,1};
				ambient[] = {0.03,0.03,0.03,1};
				brightness = 0.01;
				blinking = 0;
			};
			class WhiteBlinking
			{
				name = "bily pozicni blik";
				color[] = {1,1,1,1};
				ambient[] = {0.2,0.2,0.2,1};
				brightness = 0.01;
				blinking = 1;
			};
			class RedBlinking
			{
				name = "cerveny pozicni blik";
				color[] = {1,0.05,0.05,1};
				ambient[] = {0.2,0.02,0.02,1};
				brightness = 0.01;
				blinking = 1;
			};
		};
		class Turrets
		{
			class LeftDoor_Gun: NewTurret
			{
				startEngine = 0;
				outGunnerMayFire = 1;
				primaryGunner = 1;
				body = "LeftGun_Turret";
				gun = "LeftGun";
				gunnerCompartments = "Compartment1";
				animationSourceBody = "LeftGun_Turret";
				animationSourceGun = "LeftGun";
				commanding = -1;
				gunnerName = "$STR_POSITION_CREWCHIEF";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				memoryPointGun = "machinegun";
				memoryPointGunnerOptics = "gunnerview";
				memoryPointGunnerOutOptics = "gunnerview";
				gunBeg = "end";
				gunEnd = "chamber";
				selectionFireAnim = "zasleh";
				proxyIndex = 1;
				gunnerAction = "UH60_Gunner";
				gunnerInAction = "UH60_Gunner";
				weapons[] = {"M240_VEH"};
				magazines[] = {"1200Rnd_762x51_M240","1200Rnd_762x51_M240","1200Rnd_762x51_M240","1200Rnd_762x51_M240"};
				minElev = -45;
				maxElev = 15;
				initElev = 0;
				minTurn = 10;
				maxTurn = 170;
				initTurn = 90;
				gunnerOpticsModel = "\ca\weapons\optika_empty";
				gunnerForceOptics = 0;
				class ViewOptics
				{
					initAngleX = 0;
					initAngleY = 0;
					initFov = 0.7;
					maxAngleX = 15;
					maxAngleY = 170;
					maxFov = 1.1;
					minAngleX = -45;
					minAngleY = 10;
					minFov = 0.25;
				};
			};
			class RightDoor_Gun: LeftDoor_Gun
			{
				primaryGunner = 0;
				body = "RightGun_Turret";
				gun = "RightGun";
				gunnerCompartments = "Compartment1";
				animationSourceBody = "RightGun_Turret";
				animationSourceGun = "RightGun";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				animationSourceHatch = "";
				selectionFireAnim = "zasleh_1";
				proxyIndex = 2;
				gunnerName = "$STR_POSITION_DOORGUNNER";
				commanding = -2;
				minElev = -45;
				maxElev = 15;
				initElev = 0;
				minTurn = -160;
				maxTurn = -10;
				initTurn = -90;
				weapons[] = {"M240_veh_2"};
				magazines[] = {"1200Rnd_762x51_M240","1200Rnd_762x51_M240","1200Rnd_762x51_M240","1200Rnd_762x51_M240"};
				gunBeg = "end_2";
				gunEnd = "chamber_2";
				memoryPointGun = "machinegun_2";
				memoryPointGunnerOptics = "gunnerview_2";
				memoryPointGunnerOutOptics = "gunnerview_2";
				class ViewOptics
				{
					initAngleX = 0;
					initAngleY = 0;
					initFov = 0.7;
					maxAngleX = 15;
					maxAngleY = -10;
					maxFov = 1.1;
					minAngleX = -45;
					minAngleY = -160;
					minFov = 0.25;
				};
			};
			class RearDoor_Gun: LeftDoor_Gun
			{
				startEngine = 0;
				outGunnerMayFire = 1;
				primaryGunner = 0;
				proxyIndex = 3;
				body = "RearGun_Turret";
				gun = "RearGun";
				gunnerCompartments = "Compartment1";
				animationSourceBody = "RearGun_Turret";
				animationSourceGun = "RearGun";
				commanding = -2;
				gunnerName = "$STR_Ramp_Gunner";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				memoryPointGun = "machinegun_3";
				memoryPointGunnerOptics = "gunnerview_3";
				memoryPointGunnerOutOptics = "gunnerview_3";
				gunBeg = "muzzle_3";
				gunEnd = "chamber_3";
				selectionFireAnim = "zasleh_3";
				gunnerAction = "LowTripod_Gunner";
				gunnerInAction = "LowTripod_Gunner";
				weapons[] = {"M240_VEH_3"};
				magazines[] = {"1200Rnd_762x51_M240","1200Rnd_762x51_M240","1200Rnd_762x51_M240","1200Rnd_762x51_M240"};
				ejectDeadGunner = 1;
				minElev = -45;
				maxElev = 15;
				initElev = 0;
				minTurn = 90;
				maxTurn = 270;
				initTurn = 180;
				gunnerOpticsModel = "\ca\weapons\optika_empty";
				gunnerForceOptics = 0;
				class ViewOptics
				{
					initAngleX = 0;
					initAngleY = 0;
					initFov = 0.7;
					maxAngleX = 15;
					maxAngleY = 270;
					maxFov = 1.1;
					minAngleX = -45;
					minAngleY = 90;
					minFov = 0.25;
				};
			};
			class co_pilot: NewTurret
			{
				startEngine = 0;
				outGunnerMayFire = 1;
				primaryGunner = 0;
				body = "";
				gun = "";
				commanding = -1;
				proxyIndex = 4;
				gunnerName = "$STR_pilot_2";
				gunnerCompartments = "Compartment1";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				gunnerAction = "AH6_Pilot";
				gunnerInAction = "AH6_Pilot";
				initTurn = 0;
				gunnerOpticsModel = "\ca\weapons\optika_empty";
				gunnerForceOptics = 0;
			};
		};
	};
	class AP_CH46_M: AP_CH46
	{
		displayName = "$STR_NAME_CH46_M";
		faction = "USMC";
		vehicleclass = "TU_USMC_AIR";
		hiddenSelectionsTextures[] = {"usarmy_heli\data\CH46\ch46_main_co.paa","usarmy_heli\data\CH46\ch46_main_ti_ca.paa","usarmy_heli\data\CH46\ch46_main_ti_ca.paa","USArmy_Heli\Num\decal\MARINESg.paa","USArmy_Heli\Num\logo\LOGO_USAFg.paa"};
		class EventHandlers: DefaultEventHandlers
		{
			init = "_this execVM '\USArmy_Heli\Num\script\Num_Gray.sqf';";
		};
	};
	class AP_CH46_M_G: AP_CH46
	{
		displayName = "$STR_NAME_CH46_M_G";
		faction = "USMC";
		vehicleclass = "TU_USMC_AIR";
		hiddenSelectionsTextures[] = {"usarmy_heli\data\CH46\ch46_mainG_co.paa","usarmy_heli\data\CH46\ch46_main_ti_ca.paa","usarmy_heli\data\CH46\ch46_main_ti_ca.paa","USArmy_Heli\Num\decal\MARINESb.paa","USArmy_Heli\Num\logo\LOGO_USAFb.paa"};
		class EventHandlers: DefaultEventHandlers
		{
			init = "_this execVM '\USArmy_Heli\Num\script\Num_Black.sqf';";
		};
	};
	class AP_CH46_NAVY: AP_CH46
	{
		displayName = "$STR_NAME_CH46_N";
		faction = "USMC";
		vehicleclass = "TU_USMC_AIR";
		hiddenSelectionsTextures[] = {"usarmy_heli\data\CH46\ch46_main_co.paa","usarmy_heli\data\CH46\ch46_main_ti_ca.paa","usarmy_heli\data\CH46\ch46_main_ti_ca.paa","USArmy_Heli\Num\decal\NAVYg.paa","USArmy_Heli\Num\logo\LOGO_USAFg.paa"};
		class EventHandlers: DefaultEventHandlers
		{
			init = "_this execVM '\USArmy_Heli\Num\script\Num_Gray.sqf';";
		};
	};
	class AP_CH46_NAVY_G: AP_CH46
	{
		displayName = "$STR_NAME_CH46_N_G";
		faction = "USMC";
		vehicleclass = "TU_USMC_AIR";
		hiddenSelectionsTextures[] = {"usarmy_heli\data\CH46\ch46_mainG_co.paa","usarmy_heli\data\CH46\ch46_main_ti_ca.paa","usarmy_heli\data\CH46\ch46_main_ti_ca.paa","USArmy_Heli\Num\decal\NAVYB.paa","USArmy_Heli\Num\logo\LOGO_USAFB.paa"};
		class EventHandlers: DefaultEventHandlers
		{
			init = "_this execVM '\USArmy_Heli\Num\script\Num_Black.sqf';";
		};
	};
	class AP_CH46_NAVY_B: AP_CH46
	{
		displayName = "$STR_NAME_CH46_N_B";
		faction = "USMC";
		vehicleclass = "TU_USMC_AIR";
		hiddenSelectionsTextures[] = {"usarmy_heli\data\CH46\ch46_mainB_co.paa","usarmy_heli\data\CH46\ch46_main_ti_ca.paa","usarmy_heli\data\CH46\ch46_main_ti_ca.paa","USArmy_Heli\Num\decal\NAVYW.paa","USArmy_Heli\Num\logo\LOGO_USAFW.paa"};
		class EventHandlers: DefaultEventHandlers
		{
			init = "_this execVM '\USArmy_Heli\Num\script\Num_White.sqf';";
		};
	};
	class AP_CH53: CH_series
	{
		mapSize = 24;
		ace_maxload = 7000;
		ace_weight = 10000;
		model = "\USArmy_Heli\CH53";
		picture = "\USArmy_Heli\ico\CH53pic.paa";
		Icon = "\USArmy_Heli\ico\CH53icon.paa";
		scope = 2;
		displayName = "$STR_NAME_CH53";
		displaynameShort = "$STR_SNAME_CH53";
		extCameraPosition[] = {0,2.5,-25};
		expansion = 2;
		armor = 60;
		maxSpeed = 307;
		selectionHRotorStill = "velka vrtule staticka";
		selectionHRotorMove = "velka vrtule blur";
		selectionVRotorStill = "mala vrtule staticka";
		selectionVRotorMove = "mala vrtule blur";
		hasdriver = 1;
		hasGunner = 1;
		castCargoShadow = 1;
		driverAction = "AH6_Pilot";
		driverInAction = "AH6_Pilot";
		incommingmissliedetectionsystem = 8;
		lockdetectionsystem = 8;
		envelope[] = {0,0.2,0.9,2.1,2.5,3.3,3.5,3.6,3.7,3.8,3.8,3,0.9,0.7,0.5};
		mainRotorSpeed = 1;
		backRotorSpeed = -3;
		gearRetracting = 0;
		gearUpTime = 3.33;
		gearDownTime = 2;
		crewVulnerable = 1;
		minMainRotorDive = 0;
		maxMainRotorDive = 0;
		neutralMainRotorDive = 0;
		minBackRotorDive = 0;
		maxBackRotorDive = 0;
		neutralBackRotorDive = 0;
		soundIncommingMissile[] = {"\ca\Tracked\Data\Sound\alarm_loop1",0.000316228,4};
		soundLocked[] = {"\ca\Tracked\Data\Sound\alarm_loop1",0.000316228,2};
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment1"};
		transportSoldier = 28;
		cargoAction[] = {"M113_Cargo02_EP1","M113_Cargo01_EP1","M113_Cargo02_EP1","M113_Cargo02_EP1","M113_Cargo01_EP1","M113_Cargo02_EP1","M113_Cargo02_EP1","M113_Cargo02_EP1","M113_Cargo01_EP1","M113_Cargo02_EP1","M113_Cargo01_EP1","M113_Cargo02_EP1","M113_Cargo02_EP1","M113_Cargo01_EP1","M113_Cargo02_EP1","M113_Cargo02_EP1","M113_Cargo02_EP1","M113_Cargo01_EP1","M113_Cargo02_EP1","M113_Cargo01_EP1","M113_Cargo02_EP1","M113_Cargo02_EP1","M113_Cargo01_EP1","M113_Cargo02_EP1","M113_Cargo02_EP1","M113_Cargo02_EP1","M113_Cargo01_EP1","M113_Cargo02_EP1"};
		typicalCargo[] = {"USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier"};
		memoryPointsGetInCargo = "pos cargo";
		memoryPointsGetInCargoDir = "pos cargo dir";
		memoryPointsGetInDriver = "pos_driver";
		memoryPointsGetInDriverDir = "pos_driver_dir";
		occludeSoundsWhenIn = 0.562341;
		obstructSoundsWhenIn = 0.316228;
		selectionFireAnim = "muzzleflash";
		damageResistance = 0.00593;
		destrType = "DestructWreck";
		class Damage
		{
			tex[] = {};
			mat[] = {"usarmy_heli\data\CH53\ch53main.rvmat","usarmy_heli\data\CH53\ch53main_damage.rvmat","usarmy_heli\data\CH53\ch53main_destruct.rvmat","usarmy_heli\data\rst.rvmat","usarmy_heli\data\rst_damage.rvmat","usarmy_heli\data\rst_damage.rvmat"};
		};
		hiddenSelections[] = {"trup","N_1","N_2","N_decal","N_roundel"};
		hiddenSelectionsTextures[] = {"usarmy_heli\data\CH53\ch53main_co.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","USArmy_Heli\Num\decal\U.S.ARMYb.paa","USArmy_Heli\Num\logo\LOGO_USAF.paa"};
		class EventHandlers: DefaultEventHandlers
		{
			init = "_this execVM '\USArmy_Heli\Num\script\Num_Black.sqf';";
		};
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"120Rnd_CMFlare_Chaff_Magazine"};
		htMin = 60;
		htMax = 1800;
		afMax = 200;
		mfMax = 100;
		mFact = 0;
		tBody = 0;
		class AnimationSources
		{
			class Gatling_1
			{
				source = "reload";
				weapon = "M134";
			};
		};
		class MarkerLights
		{
			class RedStill
			{
				name = "cerveny pozicni";
				color[] = {0.2,0.02,0.02,1};
				ambient[] = {0.3,0.03,0.03,1};
				brightness = 0.01;
				blinking = 0;
			};
			class GreenBlinking
			{
				name = "zeleny pozicni blik";
				color[] = {0.02,0.2,0.02,1};
				ambient[] = {0.2,0.02,0.02,1};
				brightness = 0.01;
				blinking = 1;
			};
			class WhiteStill
			{
				name = "bily pozicni";
				color[] = {0.2,0.2,0.2,1};
				ambient[] = {0.03,0.03,0.03,1};
				brightness = 0.01;
				blinking = 0;
			};
			class WhiteBlinking
			{
				name = "bily pozicni blik";
				color[] = {1,1,1,1};
				ambient[] = {0.2,0.2,0.2,1};
				brightness = 0.01;
				blinking = 1;
			};
			class RedBlinking
			{
				name = "cerveny pozicni blik";
				color[] = {1,0.05,0.05,1};
				ambient[] = {0.2,0.02,0.02,1};
				brightness = 0.01;
				blinking = 1;
			};
		};
		class Turrets
		{
			class LeftDoor_Gun: NewTurret
			{
				startEngine = 0;
				outGunnerMayFire = 1;
				primaryGunner = 1;
				proxyIndex = 1;
				body = "LeftGun_Turret";
				gun = "LeftGun";
				animationSourceBody = "LeftGun_Turret";
				animationSourceGun = "LeftGun";
				commanding = -1;
				gunnerName = "$STR_POSITION_CREWCHIEF";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				memoryPointGun = "machinegun";
				memoryPointGunnerOptics = "gunnerview";
				memoryPointGunnerOutOptics = "gunnerview";
				gunBeg = "end";
				gunEnd = "chamber";
				selectionFireAnim = "zasleh";
				gunnerCompartments = "Compartment1";
				gunnerAction = "Abrams_CommanderOut";
				gunnerInAction = "Abrams_CommanderOut";
				weapons[] = {"M2"};
				magazines[] = {"100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2"};
				minElev = -45;
				maxElev = 15;
				initElev = 0;
				minTurn = 20;
				maxTurn = 160;
				initTurn = 90;
				ejectDeadGunner = 1;
				gunnerOpticsModel = "\ca\weapons\optika_empty";
				gunnerForceOptics = 0;
				class ViewOptics
				{
					initAngleX = 0;
					initAngleY = 0;
					initFov = 0.7;
					maxAngleX = 15;
					maxAngleY = 160;
					maxFov = 1.1;
					minAngleX = -45;
					minAngleY = 20;
					minFov = 0.25;
				};
			};
			class RightDoor_Gun: LeftDoor_Gun
			{
				primaryGunner = 0;
				body = "RightGun_Turret";
				gun = "RightGun";
				animationSourceBody = "RightGun_Turret";
				animationSourceGun = "RightGun";
				gunnerCompartments = "Compartment1";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				animationSourceHatch = "";
				selectionFireAnim = "zasleh_1";
				proxyIndex = 2;
				gunnerName = "$STR_POSITION_DOORGUNNER";
				gunnerAction = "Abrams_CommanderOut";
				gunnerInAction = "Abrams_CommanderOut";
				commanding = -2;
				minElev = -45;
				maxElev = 15;
				initElev = 0;
				minTurn = -160;
				maxTurn = -20;
				initTurn = -90;
				weapons[] = {"M2"};
				magazines[] = {"100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2"};
				gunBeg = "end_2";
				gunEnd = "chamber_2";
				memoryPointGun = "machinegun_2";
				memoryPointGunnerOptics = "gunnerview_2";
				memoryPointGunnerOutOptics = "gunnerview_2";
				ejectDeadGunner = 1;
				class ViewOptics
				{
					initAngleX = 0;
					initAngleY = 0;
					initFov = 0.7;
					maxAngleX = 15;
					maxAngleY = -20;
					maxFov = 1.1;
					minAngleX = -45;
					minAngleY = -160;
					minFov = 0.25;
				};
			};
			class RearDoor_Gun: LeftDoor_Gun
			{
				startEngine = 0;
				outGunnerMayFire = 1;
				primaryGunner = 0;
				proxyIndex = 4;
				body = "RearGun_Turret";
				gun = "RearGun";
				gunnerCompartments = "Compartment1";
				animationSourceBody = "RearGun_Turret";
				animationSourceGun = "RearGun";
				commanding = -2;
				gunnerName = "$STR_Ramp_Gunner";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				memoryPointGun = "machinegun_3";
				memoryPointGunnerOptics = "gunnerview_3";
				memoryPointGunnerOutOptics = "gunnerview_3";
				gunBeg = "muzzle_3";
				gunEnd = "chamber_3";
				selectionFireAnim = "zasleh_3";
				gunnerAction = "LowTripod_Gunner";
				gunnerInAction = "LowTripod_Gunner";
				weapons[] = {"M134"};
				magazines[] = {"2000Rnd_762x51_M134"};
				ejectDeadGunner = 1;
				minElev = -45;
				maxElev = 15;
				initElev = 0;
				minTurn = 90;
				maxTurn = 270;
				initTurn = 180;
				gunnerOpticsModel = "\ca\weapons\optika_empty";
				gunnerForceOptics = 0;
				class ViewOptics
				{
					initAngleX = 0;
					initAngleY = 0;
					initFov = 0.7;
					maxAngleX = 15;
					maxAngleY = 270;
					maxFov = 1.1;
					minAngleX = -45;
					minAngleY = 90;
					minFov = 0.25;
				};
			};
			class co_pilot: NewTurret
			{
				startEngine = 0;
				outGunnerMayFire = 1;
				primaryGunner = 0;
				body = "";
				gun = "";
				commanding = -1;
				proxyIndex = 3;
				gunnerCompartments = "Compartment1";
				gunnerName = "$STR_pilot_2";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				gunnerAction = "AH6_Pilot";
				gunnerInAction = "AH6_Pilot";
				initTurn = 0;
				gunnerOpticsModel = "\ca\weapons\optika_empty";
				gunnerForceOptics = 0;
			};
		};
	};
	class AP_CH53_M: AP_CH53
	{
		displayName = "$STR_NAME_CH53_M";
		faction = "USMC";
		vehicleclass = "TU_USMC_AIR";
		hiddenSelectionsTextures[] = {"usarmy_heli\data\CH53\ch53main_co.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","USArmy_Heli\Num\decal\MARINESg.paa","USArmy_Heli\Num\logo\LOGO_USAFg.paa"};
		class EventHandlers: DefaultEventHandlers
		{
			init = "_this execVM '\USArmy_Heli\Num\script\Num_Gray.sqf';";
		};
	};
	class AP_CH53_M_G: AP_CH53
	{
		displayName = "$STR_NAME_CH53_M_G";
		faction = "USMC";
		vehicleclass = "TU_USMC_AIR";
		hiddenSelectionsTextures[] = {"usarmy_heli\data\CH53\ch53mainG_co.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","USArmy_Heli\Num\decal\MARINESb.paa","USArmy_Heli\Num\logo\LOGO_USAFb.paa"};
		class EventHandlers: DefaultEventHandlers
		{
			init = "_this execVM '\USArmy_Heli\Num\script\Num_Black.sqf';";
		};
	};
	class AP_CH53_NAVY: AP_CH53
	{
		displayName = "$STR_NAME_CH53_N";
		faction = "USMC";
		vehicleclass = "TU_USMC_AIR";
		hiddenSelectionsTextures[] = {"usarmy_heli\data\CH53\ch53main_co.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","USArmy_Heli\Num\decal\NAVYg.paa","USArmy_Heli\Num\logo\LOGO_USAFg.paa"};
		class EventHandlers: DefaultEventHandlers
		{
			init = "_this execVM '\USArmy_Heli\Num\script\Num_Gray.sqf';";
		};
	};
	class AP_CH53_NAVY_G: AP_CH53
	{
		displayName = "$STR_NAME_CH53_N_G";
		faction = "USMC";
		vehicleclass = "TU_USMC_AIR";
		hiddenSelectionsTextures[] = {"usarmy_heli\data\CH53\ch53mainG_co.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","USArmy_Heli\Num\decal\NAVYB.paa","USArmy_Heli\Num\logo\LOGO_USAFB.paa"};
		class EventHandlers: DefaultEventHandlers
		{
			init = "_this execVM '\USArmy_Heli\Num\script\Num_Black.sqf';";
		};
	};
	class AP_CH53_NAVY_B: AP_CH53
	{
		displayName = "$STR_NAME_CH53_N_B";
		faction = "USMC";
		vehicleclass = "TU_USMC_AIR";
		hiddenSelectionsTextures[] = {"usarmy_heli\data\CH53\ch53mainB_co.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","USArmy_Heli\Num\decal\NAVYW.paa","USArmy_Heli\Num\logo\LOGO_USAFW.paa"};
		class EventHandlers: DefaultEventHandlers
		{
			init = "_this execVM '\USArmy_Heli\Num\script\Num_White.sqf';";
		};
	};
	class AP_CH34: CH_series
	{
		ace_maxload = 3500;
		ace_weight = 6000;
		scope = 2;
		side = 1;
		armor = 30;
		displayName = "$STR_NAME_CH34";
		displaynameShort = "$STR_SNAME_CH34";
		model = "\USArmy_Heli\ch34.p3d";
		picture = "\USArmy_Heli\ico\ch34pic.paa";
		Icon = "\USArmy_Heli\ico\ch34icon.paa";
		mapSize = 16;
		hiddenSelections[] = {"camo1","N_1","N_2","N_decal","N_roundel","camo2","camo3","N_army","N_decal2","camo_door","camo_frame","camo_win"};
		hiddenSelectionsTextures[] = {"usarmy_heli\data\ch34\skins\olod\ch34tail_co.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\num\decal\u.s.armyw.paa","usarmy_heli\num\logo\logo_usaf.paa","usarmy_heli\data\ch34\skins\olod\ch34left_co.paa","usarmy_heli\data\ch34\skins\olod\ch34bottom_co.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\data\ch34\skins\olod\door.paa","usarmy_heli\data\ch34\skins\olod\frame.paa","usarmy_heli\data\ch34\skins\olod\window_l_ca.paa"};
		class EventHandlers: DefaultEventHandlers
		{
			init = "_this execVM '\USArmy_Heli\Num\script\Num_white.sqf';";
		};
		driverAction = "AH6_Pilot";
		driverInAction = "AH6_Pilot";
		transportSoldier = 11;
		cargoAction[] = {"M113_Cargo02_EP1","M113_Cargo01_EP1","M113_Cargo02_EP1","M113_Cargo02_EP1","M113_Cargo02_EP1","M113_Cargo01_EP1","M113_Cargo02_EP1","M113_Cargo01_EP1","M113_Cargo02_EP1","M113_Cargo02_EP1","M113_Cargo01_EP1"};
		memoryPointsGetInDriver = "pos driver";
		memoryPointsGetInDriverDir = "pos driver dir";
		memoryPointsGetInCargo = "pos cargo";
		memoryPointsGetInCargoDir = "pos cargo dir";
		fuelCapacity = 500;
		destrType = "DestructWreck";
		maxSpeed = 198;
		nameSound = "veh_transportHelicopter";
		crew = "USMC_Soldier_Pilot";
		typicalCargo[] = {"USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier"};
		damageResistance = 0.00244;
		gunnerCanSee = "2+8+16";
		driverCanSee = "2+8+16";
		enableGPS = 0;
		gunnerUsesPilotView = 1;
		mainRotorSpeed = 2;
		backRotorSpeed = 2.5;
		getInAction = "GetInLOW";
		getOutAction = "GetOutLOW";
		initCargoAngleY = 10;
		minCargoAngleY = -60;
		maxCargoAngleY = 120;
		type = "VAir";
		formationX = 50;
		formationZ = 100;
		formationY = 0;
		threat[] = {0.2,0.2,0.2};
		extCameraPosition[] = {0,2,-15};
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment2"};
		weapons[] = {};
		magazines[] = {};
		castDriverShadow = 1;
		castCargoShadow = 1;
		viewDriverShadow = 1;
		viewGunnerShadow = 1;
		viewCargoShadow = 1;
		soundDammage[] = {"ca\sounds\Air\Mi17\int\alarm_loop1",0.001,1};
		soundEngineOnInt[] = {"\USArmy_Heli\Sounds\ch34windup.wss",0.5,1};
		soundEngineOnExt[] = {"\USArmy_Heli\Sounds\ch34windup.wss",0.7,1,300};
		soundEngineOffInt[] = {"\USArmy_Heli\Sounds\ch34winddown.wss",0.0316228,1};
		soundEngineOffExt[] = {"\USArmy_Heli\Sounds\ch34winddown.wss",1.77828,1,700};
		class Sounds: Sounds
		{
			class EngineOut
			{
				sound[] = {"\USArmy_Heli\Sounds\ch34_base_B",2,1,1000};
				frequency = "(randomizer*0.05+0.08)*rpm";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorHighOut
			{
				sound[] = {"\USArmy_Heli\Sounds\engine_ch34",4,1,2500};
				frequency = "rotorSpeed*0.98";
				volume = "camPos*(0  max (rotorSpeed+0.05))";
				cone[] = {1.6,3.14,2,0.95};
			};
			class EngineIn
			{
				sound[] = {"\USArmy_Heli\Sounds\ch34_rotors_int_old",3.1622777,4};
				frequency = "(randomizer*0.05+0.08)*rpm";
				volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorsIn
			{
				sound[] = {"\USArmy_Heli\Sounds\ch34_rotors_int",4,5};
				frequency = "(randomizer*0.05+0.08)*rpm";
				volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};
		};
		class MarkerLights
		{
			class Cabin
			{
				name = "cab";
				color[] = {0.08,0,0,0.01};
				ambient[] = {0.068,0,0,0.1};
				brightness = 0.005;
				blinking = 0;
			};
			class RedBlinking
			{
				name = "cerveny pozicni blik";
				color[] = {0.08,0,0,0.01};
				ambient[] = {0.1,0.01,0.01,1};
				brightness = 0.005;
				blinking = 1;
			};
		};
		class Reflectors
		{
			class Left
			{
				color[] = {0.8,0.8,1,1};
				ambient[] = {0.07,0.07,0.07,1};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness = 1;
			};
			class Right
			{
				color[] = {0.8,0.8,1,1};
				ambient[] = {0.07,0.07,0.07,1};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 0.5;
				brightness = 1;
			};
			class Cab
			{
				color[] = {1,0.1,0.1,1};
				ambient[] = {0.3,0.1,0.1,1};
				brightness = 0.02;
				blinking = 0;
				position = "svetlo l";
				direction = "konec l svetla";
				hitpoint = "l svetlo";
				selection = "l svetlo";
				size = 0.1;
			};
			class gun
			{
				color[] = {0.8,0.8,1,1};
				ambient[] = {0.07,0.07,0.07,1};
				position = "g svelto";
				direction = "konec G svetla";
				hitpoint = "G svetlo";
				selection = "G svetlo";
				size = 0.5;
				brightness = 1;
			};
		};
		class Library
		{
			libTextDesc = "The CH-34 Choctaw cargo and light tactical transport helicopter could carry up to 16 troops or eight litters and a medic in the MedEvac role.  ARVN acquired the CH-34 but it was not used by the U.S. Army in Vietnam. The Marine Corps version (UH-34D Seahorse or HUS-1) was the primary Marine utility/assault helicopter used in Vietnam and by the CIA Air America in Laos.";
		};
		class Damage
		{
			tex[] = {};
			mat[] = {""};
		};
		damperSize = 4;
		damperForce = 0.005;
		damperDamping = 0.005;
		class Turrets
		{
			class co_pilot: NewTurret
			{
				startEngine = 0;
				outGunnerMayFire = 1;
				primaryGunner = 0;
				body = "";
				gun = "";
				commanding = -1;
				proxyIndex = 1;
				gunnerName = "$STR_pilot_2";
				gunnerCompartments = "Compartment1";
				memoryPointsGetInGunner = "pos co_pilot";
				memoryPointsGetInGunnerDir = "pos co_pilot dir";
				gunnerAction = "AH6_Pilot";
				gunnerInAction = "AH6_Pilot";
				initTurn = 0;
				gunnerOpticsModel = "\ca\weapons\optika_empty";
				gunnerForceOptics = 0;
			};
		};
		class AnimationSources: AnimationSources
		{
			class door
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
		};
		class UserActions
		{
			class CloseDoor
			{
				displayName = "Close Door";
				position = "pos cargo dir";
				radius = 4;
				condition = "this animationPhase ""door"" < 0.5";
				statement = "this animate[""door"",1]";
				onlyforplayer = 0;
			};
			class OpenDoor
			{
				displayName = "Open Door";
				position = "pos cargo dir";
				radius = 4;
				condition = "this animationPhase ""door"" > 0.5";
				statement = "this animate[""door"",0]";
				onlyforplayer = 0;
			};
		};
		transportAmmo = 0;
		supplyRadius = 2.5;
		transportMaxMagazines = 180;
		transportMaxWeapons = 30;
		transportMaxBackpacks = 20;
	};
	class AP_CH34_CL: AP_CH34
	{
		displayName = "$STR_NAME_CH34_CL";
		hiddenSelectionsTextures[] = {"USArmy_Heli\data\ch34\skins\army1\ch34tail_co.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\num\logo\logo_usaf.paa","usarmy_heli\data\ch34\skins\army1\ch34left_co.paa","usarmy_heli\data\ch34\skins\army1\ch34bottom_co.paa","usarmy_heli\num\decal\ARMYw.paa","usarmy_heli\num\decal\u.s.armye.paa","usarmy_heli\data\ch34\skins\army1\door.paa","usarmy_heli\data\ch34\skins\army1\frame.paa","usarmy_heli\data\ch34\skins\army1\window_l_ca.paa"};
		class EventHandlers: DefaultEventHandlers
		{
			init = "_this execVM '\USArmy_Heli\Num\script\Num_yellow.sqf';";
		};
	};
	class AP_CH34_M: AP_CH34
	{
		displayName = "$STR_NAME_CH34_M";
		faction = "USMC";
		vehicleclass = "TU_USMC_AIR";
		hiddenSelectionsTextures[] = {"usarmy_heli\data\ch34\skins\olod\ch34tail_co.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\num\decal\MARINESw.paa","usarmy_heli\num\logo\logo_usaf.paa","usarmy_heli\data\ch34\skins\olod\ch34left_co.paa","usarmy_heli\data\ch34\skins\olod\ch34bottom_co.paa","usarmy_heli\num\decal\ARMYw.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\data\ch34\skins\olod\door.paa","usarmy_heli\data\ch34\skins\olod\frame.paa","usarmy_heli\data\ch34\skins\olod\window_l_ca.paa"};
		class EventHandlers: DefaultEventHandlers
		{
			init = "_this execVM '\USArmy_Heli\Num\script\Num_white.sqf';";
		};
	};
	class AP_CH34_M_G: AP_CH34
	{
		displayName = "$STR_NAME_CH34_M_G";
		faction = "USMC";
		vehicleclass = "TU_USMC_AIR";
		hiddenSelectionsTextures[] = {"usarmy_heli\data\ch34\skins\army1\ch34tail_M_co.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\num\decal\MARINESw.paa","usarmy_heli\num\logo\logo_usaf.paa","usarmy_heli\data\ch34\skins\army1\ch34left_co.paa","usarmy_heli\data\ch34\skins\army1\ch34bottom_co.paa","usarmy_heli\num\decal\ARMYw.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\data\ch34\skins\army1\door.paa","usarmy_heli\data\ch34\skins\army1\frame.paa","usarmy_heli\data\ch34\skins\army1\window_l_ca.paa"};
		class EventHandlers: DefaultEventHandlers
		{
			init = "_this execVM '\USArmy_Heli\Num\script\Num_white.sqf';";
		};
	};
	class AP_CH34_NAVY: AP_CH34
	{
		displayName = "$STR_NAME_CH34_N";
		faction = "USMC";
		vehicleclass = "TU_USMC_AIR";
		hiddenSelectionsTextures[] = {"usarmy_heli\data\ch34\skins\olod\ch34tail_co.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\num\decal\NAVYw.paa","usarmy_heli\num\logo\logo_usaf.paa","usarmy_heli\data\ch34\skins\olod\ch34left_co.paa","usarmy_heli\data\ch34\skins\olod\ch34bottom_co.paa","usarmy_heli\num\decal\ARMYw.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\data\ch34\skins\olod\door.paa","usarmy_heli\data\ch34\skins\olod\frame.paa","usarmy_heli\data\ch34\skins\olod\window_l_ca.paa"};
		class EventHandlers: DefaultEventHandlers
		{
			init = "_this execVM '\USArmy_Heli\Num\script\Num_white.sqf';";
		};
	};
	class AP_CH34_NAVY_G: AP_CH34
	{
		displayName = "$STR_NAME_CH34_N_G";
		faction = "USMC";
		vehicleclass = "TU_USMC_AIR";
		hiddenSelectionsTextures[] = {"usarmy_heli\data\ch34\skins\army1\ch34tail_M_co.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\num\decal\NAVYw.paa","usarmy_heli\num\logo\logo_usaf.paa","usarmy_heli\data\ch34\skins\army1\ch34left_co.paa","usarmy_heli\data\ch34\skins\army1\ch34bottom_co.paa","usarmy_heli\num\decal\ARMYw.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\data\ch34\skins\army1\door.paa","usarmy_heli\data\ch34\skins\army1\frame.paa","usarmy_heli\data\ch34\skins\army1\window_l_ca.paa"};
		class EventHandlers: DefaultEventHandlers
		{
			init = "_this execVM '\USArmy_Heli\Num\script\Num_white.sqf';";
		};
	};
	class AP_CH34_NAVY_B: AP_CH34
	{
		displayName = "$STR_NAME_CH34_N_B";
		faction = "USMC";
		vehicleclass = "TU_USMC_AIR";
		hiddenSelectionsTextures[] = {"usarmy_heli\data\ch34\ch34tail_co.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\num\decal\NAVYw.paa","usarmy_heli\num\logo\logo_usafw.paa","usarmy_heli\data\ch34\ch34left_co.paa","usarmy_heli\data\ch34\ch34bottom_co.paa","usarmy_heli\num\decal\ARMYw.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\data\ch34\door.paa","usarmy_heli\data\ch34\frame.paa","usarmy_heli\data\ch34\window_l_ca.paa"};
		class EventHandlers: DefaultEventHandlers
		{
			init = "_this execVM '\USArmy_Heli\Num\script\Num_white.sqf';";
		};
	};
	class AP_CH34_m60: AP_CH34
	{
		displayName = "$STR_NAME_CH34_M60";
		displaynameShort = "$STR_SNAME_CH34_M60";
		model = "\USArmy_Heli\ch34_M60.p3d";
		transportSoldier = 10;
		cargoAction[] = {"M113_Cargo02_EP1","M113_Cargo01_EP1","M113_Cargo02_EP1","M113_Cargo02_EP1","M113_Cargo02_EP1","M113_Cargo01_EP1","M113_Cargo02_EP1","M113_Cargo01_EP1","M113_Cargo02_EP1","M113_Cargo02_EP1"};
		typicalCargo[] = {"USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier","USMC_Soldier"};
		class UserActions{};
		class Turrets
		{
			class co_pilot: NewTurret
			{
				startEngine = 0;
				outGunnerMayFire = 1;
				primaryGunner = 0;
				body = "";
				gun = "";
				commanding = -1;
				proxyIndex = 1;
				gunnerName = "$STR_pilot_2";
				gunnerCompartments = "Compartment1";
				memoryPointsGetInGunner = "pos co_pilot";
				memoryPointsGetInGunnerDir = "pos co_pilot dir";
				gunnerAction = "AH6_Pilot";
				gunnerInAction = "AH6_Pilot";
				initTurn = 0;
				gunnerOpticsModel = "\ca\weapons\optika_empty";
				gunnerForceOptics = 0;
			};
			class doorGunner: NewTurret
			{
				startEngine = 0;
				outGunnerMayFire = 1;
				primaryGunner = 1;
				body = "right_turret";
				gun = "right_gun";
				crew = "USMC_Soldier_Pilot";
				animationSourceBody = "right_turret";
				animationSourceGun = "right_gun";
				commanding = -1;
				gunnerCompartments = "Compartment2";
				gunnerName = "$STR_gunner_M60";
				memoryPointsGetInGunner = "pos cargo";
				memoryPointsGetInGunnerDir = "pos cargo dir";
				memoryPointGun = "machinegun";
				memoryPointGunnerOptics = "gunnerview_rh";
				memoryPointGunnerOutOptics = "";
				gunBeg = "rhgun_start";
				gunEnd = "rhgun_end";
				selectionFireAnim = "zasleh_RH";
				proxyIndex = 2;
				gunnerAction = "UH60_Gunner";
				gunnerInAction = "UH60_Gunner";
				weapons[] = {"M60_veh_2"};
				magazines[] = {"TU_500Rnd_762x51_M60","TU_500Rnd_762x51_M60","TU_500Rnd_762x51_M60","TU_500Rnd_762x51_M60"};
				minElev = -45;
				maxElev = 15;
				initElev = 0;
				minTurn = -160;
				maxTurn = -20;
				initTurn = -90;
				gunnerOpticsModel = "\ca\weapons\optika_empty";
				gunnerForceOptics = 0;
				class ViewOptics
				{
					initAngleX = 0;
					initAngleY = 0;
					initFov = 0.7;
					maxAngleX = 15;
					maxAngleY = 20;
					maxFov = 1.1;
					minAngleX = -45;
					minAngleY = -160;
					minFov = 0.25;
				};
			};
		};
	};
	class AP_CH34_M_m60: AP_CH34_m60
	{
		displayName = "$STR_NAME_CH34_M_m60";
		faction = "USMC";
		vehicleclass = "TU_USMC_AIR";
		hiddenSelectionsTextures[] = {"usarmy_heli\data\ch34\skins\olod\ch34tail_co.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\num\decal\MARINESw.paa","usarmy_heli\num\logo\logo_usaf.paa","usarmy_heli\data\ch34\skins\olod\ch34left_co.paa","usarmy_heli\data\ch34\skins\olod\ch34bottom_co.paa","usarmy_heli\num\decal\ARMYw.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\data\ch34\skins\olod\door.paa","usarmy_heli\data\ch34\skins\olod\frame.paa","usarmy_heli\data\ch34\skins\olod\window_l_ca.paa"};
		class EventHandlers: DefaultEventHandlers
		{
			init = "_this execVM '\USArmy_Heli\Num\script\Num_white.sqf';";
		};
	};
	class AP_CH34_M_G_m60: AP_CH34_m60
	{
		displayName = "$STR_NAME_CH34_M_G_m60";
		faction = "USMC";
		vehicleclass = "TU_USMC_AIR";
		hiddenSelectionsTextures[] = {"usarmy_heli\data\ch34\skins\army1\ch34tail_M_co.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\num\decal\MARINESw.paa","usarmy_heli\num\logo\logo_usaf.paa","usarmy_heli\data\ch34\skins\army1\ch34left_co.paa","usarmy_heli\data\ch34\skins\army1\ch34bottom_co.paa","usarmy_heli\num\decal\ARMYw.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\data\ch34\skins\army1\door.paa","usarmy_heli\data\ch34\skins\army1\frame.paa","usarmy_heli\data\ch34\skins\army1\window_l_ca.paa"};
		class EventHandlers: DefaultEventHandlers
		{
			init = "_this execVM '\USArmy_Heli\Num\script\Num_white.sqf';";
		};
	};
	class AP_CH34_NAVY_m60: AP_CH34_m60
	{
		displayName = "$STR_NAME_CH34_N_m60";
		faction = "USMC";
		vehicleclass = "TU_USMC_AIR";
		hiddenSelectionsTextures[] = {"usarmy_heli\data\ch34\skins\olod\ch34tail_co.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\num\decal\NAVYw.paa","usarmy_heli\num\logo\logo_usaf.paa","usarmy_heli\data\ch34\skins\olod\ch34left_co.paa","usarmy_heli\data\ch34\skins\olod\ch34bottom_co.paa","usarmy_heli\num\decal\ARMYw.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\data\ch34\skins\olod\door.paa","usarmy_heli\data\ch34\skins\olod\frame.paa","usarmy_heli\data\ch34\skins\olod\window_l_ca.paa"};
		class EventHandlers: DefaultEventHandlers
		{
			init = "_this execVM '\USArmy_Heli\Num\script\Num_white.sqf';";
		};
	};
	class AP_CH34_NAVY_G_m60: AP_CH34_m60
	{
		displayName = "$STR_NAME_CH34_N_G_m60";
		faction = "USMC";
		vehicleclass = "TU_USMC_AIR";
		hiddenSelectionsTextures[] = {"usarmy_heli\data\ch34\skins\army1\ch34tail_M_co.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\num\decal\NAVYw.paa","usarmy_heli\num\logo\logo_usaf.paa","usarmy_heli\data\ch34\skins\army1\ch34left_co.paa","usarmy_heli\data\ch34\skins\army1\ch34bottom_co.paa","usarmy_heli\num\decal\ARMYw.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\data\ch34\skins\army1\door.paa","usarmy_heli\data\ch34\skins\army1\frame.paa","usarmy_heli\data\ch34\skins\army1\window_l_ca.paa"};
		class EventHandlers: DefaultEventHandlers
		{
			init = "_this execVM '\USArmy_Heli\Num\script\Num_white.sqf';";
		};
	};
	class AP_CH34_NAVY_B_m60: AP_CH34_m60
	{
		displayName = "$STR_NAME_CH34_N_B_m60";
		faction = "USMC";
		vehicleclass = "TU_USMC_AIR";
		hiddenSelectionsTextures[] = {"usarmy_heli\data\ch34\ch34tail_co.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\num\decal\NAVYw.paa","usarmy_heli\num\logo\logo_usafw.paa","usarmy_heli\data\ch34\ch34left_co.paa","usarmy_heli\data\ch34\ch34bottom_co.paa","usarmy_heli\num\decal\ARMYw.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\data\ch34\door.paa","usarmy_heli\data\ch34\frame.paa","usarmy_heli\data\ch34\window_l_ca.paa"};
		class EventHandlers: DefaultEventHandlers
		{
			init = "_this execVM '\USArmy_Heli\Num\script\Num_white.sqf';";
		};
	};
	class AP_CH34_gunship: AP_CH34_m60
	{
		displayName = "$STR_NAME_CH34_gunship";
		displaynameShort = "$STR_SNAME_CH34_gunship";
		model = "\USArmy_Heli\ch34_gunship.p3d";
		gunBeg[] = {"m2_l","m2_r"};
		gunEnd[] = {"m2_l_end","m2_r_end"};
		selectionFireAnim = "zasleh_m2";
		memoryPointLMissile = "P strela";
		memoryPointRMissile = "L strela";
		memoryPointLRocket = "P Raketa";
		memoryPointRRocket = "L Raketa";
		weapons[] = {"FFARLauncher","AP_2xM2"};
		magazines[] = {"38Rnd_FFAR","AP_200Rnd_127x99_M2","AP_200Rnd_127x99_M2","AP_200Rnd_127x99_M2","AP_200Rnd_127x99_M2","AP_200Rnd_127x99_M2","AP_200Rnd_127x99_M2","AP_200Rnd_127x99_M2","AP_200Rnd_127x99_M2","AP_200Rnd_127x99_M2"};
		hiddenSelections[] = {"camo1","N_1","N_2","N_decal","N_roundel","camo2","camo3","N_army","N_decal2","camo_door","camo_frame","camo_win","mk82"};
		hiddenSelectionsTextures[] = {"usarmy_heli\data\ch34\skins\olod\ch34tail_co.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\num\decal\u.s.armyw.paa","usarmy_heli\num\logo\logo_usaf.paa","usarmy_heli\data\ch34\skins\olod\ch34left_co.paa","usarmy_heli\data\ch34\skins\olod\ch34bottom_co.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\data\ch34\skins\olod\door.paa","usarmy_heli\data\ch34\skins\olod\frame.paa","usarmy_heli\data\ch34\skins\olod\window_l_ca.paa","usarmy_heli\data\ch34\mk82\mk82_co.paa"};
		class Turrets: Turrets
		{
			class doorGunner: doorGunner
			{
				minTurn = -160;
				maxTurn = -60;
			};
		};
	};
	class AP_CH34_M_gunship: AP_CH34_gunship
	{
		displayName = "$STR_NAME_CH34_M_gunship";
		faction = "USMC";
		vehicleclass = "TU_USMC_AIR";
		hiddenSelectionsTextures[] = {"usarmy_heli\data\ch34\skins\olod\ch34tail_co.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\num\decal\MARINESw.paa","usarmy_heli\num\logo\logo_usaf.paa","usarmy_heli\data\ch34\skins\olod\ch34left_co.paa","usarmy_heli\data\ch34\skins\olod\ch34bottom_co.paa","usarmy_heli\num\decal\ARMYw.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\data\ch34\skins\olod\door.paa","usarmy_heli\data\ch34\skins\olod\frame.paa","usarmy_heli\data\ch34\skins\olod\window_l_ca.paa","usarmy_heli\data\ch34\mk82\mk82_co.paa"};
		class EventHandlers: DefaultEventHandlers
		{
			init = "_this execVM '\USArmy_Heli\Num\script\Num_white.sqf';";
		};
	};
	class AP_CH34_M_G_gunship: AP_CH34_gunship
	{
		displayName = "$STR_NAME_CH34_M_G_gunship";
		faction = "USMC";
		vehicleclass = "TU_USMC_AIR";
		hiddenSelectionsTextures[] = {"usarmy_heli\data\ch34\skins\army1\ch34tail_M_co.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\num\decal\MARINESw.paa","usarmy_heli\num\logo\logo_usaf.paa","usarmy_heli\data\ch34\skins\army1\ch34left_co.paa","usarmy_heli\data\ch34\skins\army1\ch34bottom_co.paa","usarmy_heli\num\decal\ARMYw.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\data\ch34\skins\army1\door.paa","usarmy_heli\data\ch34\skins\army1\frame.paa","usarmy_heli\data\ch34\skins\army1\window_l_ca.paa","usarmy_heli\data\ch34\mk82\mk82_G_co.paa"};
		class EventHandlers: DefaultEventHandlers
		{
			init = "_this execVM '\USArmy_Heli\Num\script\Num_white.sqf';";
		};
	};
	class AP_CH34_NAVY_gunship: AP_CH34_gunship
	{
		displayName = "$STR_NAME_CH34_N_gunship";
		faction = "USMC";
		vehicleclass = "TU_USMC_AIR";
		hiddenSelectionsTextures[] = {"usarmy_heli\data\ch34\skins\olod\ch34tail_co.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\num\decal\NAVYw.paa","usarmy_heli\num\logo\logo_usaf.paa","usarmy_heli\data\ch34\skins\olod\ch34left_co.paa","usarmy_heli\data\ch34\skins\olod\ch34bottom_co.paa","usarmy_heli\num\decal\ARMYw.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\data\ch34\skins\olod\door.paa","usarmy_heli\data\ch34\skins\olod\frame.paa","usarmy_heli\data\ch34\skins\olod\window_l_ca.paa","usarmy_heli\data\ch34\mk82\mk82_co.paa"};
		class EventHandlers: DefaultEventHandlers
		{
			init = "_this execVM '\USArmy_Heli\Num\script\Num_white.sqf';";
		};
	};
	class AP_CH34_NAVY_G_gunship: AP_CH34_gunship
	{
		displayName = "$STR_NAME_CH34_N_G_gunship";
		faction = "USMC";
		vehicleclass = "TU_USMC_AIR";
		hiddenSelectionsTextures[] = {"usarmy_heli\data\ch34\skins\army1\ch34tail_M_co.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\num\decal\NAVYw.paa","usarmy_heli\num\logo\logo_usaf.paa","usarmy_heli\data\ch34\skins\army1\ch34left_co.paa","usarmy_heli\data\ch34\skins\army1\ch34bottom_co.paa","usarmy_heli\num\decal\ARMYw.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\data\ch34\skins\army1\door.paa","usarmy_heli\data\ch34\skins\army1\frame.paa","usarmy_heli\data\ch34\skins\army1\window_l_ca.paa","usarmy_heli\data\ch34\mk82\mk82_G_co.paa"};
		class EventHandlers: DefaultEventHandlers
		{
			init = "_this execVM '\USArmy_Heli\Num\script\Num_white.sqf';";
		};
	};
	class AP_CH34_NAVY_B_gunship: AP_CH34_gunship
	{
		displayName = "$STR_NAME_CH34_N_B_gunship";
		faction = "USMC";
		vehicleclass = "TU_USMC_AIR";
		hiddenSelectionsTextures[] = {"usarmy_heli\data\ch34\ch34tail_co.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\num\decal\NAVYw.paa","usarmy_heli\num\logo\logo_usafw.paa","usarmy_heli\data\ch34\ch34left_co.paa","usarmy_heli\data\ch34\ch34bottom_co.paa","usarmy_heli\num\decal\ARMYw.paa","usarmy_heli\data\CH53\ch53_ti_ca.paa","usarmy_heli\data\ch34\door.paa","usarmy_heli\data\ch34\frame.paa","usarmy_heli\data\ch34\window_l_ca.paa","usarmy_heli\data\ch34\mk82\mk82_co.paa"};
		class EventHandlers: DefaultEventHandlers
		{
			init = "_this execVM '\USArmy_Heli\Num\script\Num_white.sqf';";
		};
	};
};
