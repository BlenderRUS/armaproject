////////////////////////////////////////////////////////////////////
//DeRap: ap_mi6\config.bin
//Produced from mikero's Dos Tools Dll version 6.24
//'now' is Mon Sep 16 02:03:42 2019 : 'file' last modified on Mon Sep 16 02:03:20 2019
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ap_mi6
	{
		units[] = {"ap_mi6a"};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"CAAir","CA_Anims_Char","CAData","CACharacters","CAWeapons","CACharacters_E","CACharacters_E_Head"};
	};
};
class CfgVehicles
{
	class All;
	class AllVehicles: All{};
	class Air: AllVehicles{};
	class Helicopter: Air
	{
		class Turrets
		{
			class MainTurret;
		};
		class NewTurret;
		class AnimationSources;
		class HitPoints{};
	};
	class ap_mi6a: Helicopter
	{
		model = "\ap_mi6\mi6a.p3d";
		displayName = "Mi-6A Hoop Cargo (CCCP AF)";
		Icon = "\ap_mi6\icons\mi6icon_ca.paa";
		Picture = "\ap_mi6\icons\mi6pic_ca.paa";
		simulation = "helicopter";
		type = "VAir";
		driverIsCommander = 1;
		mapSize = 40;
		scope = 2;
		nameSound = "chopper";
		side = 0;
		faction = "RU";
		extCameraPosition[] = {0,2.5,-25};
		armor = 20;
		cost = 10000000;
		maxSpeed = 340;
		brakeDistance = 300;
		fuelCapacity = 600;
		crew = "RU_Soldier_Pilot";
		ejectDeadDriver = 0;
		ejectDeadCargo = 0;
		driverCompartments = "Compartment1";
		hasdriver = 1;
		hasGunner = 1;
		viewDriverShadow = "true";
		viewGunnerShadow = "true";
		viewCargoShadow = "true";
		driverAction = "Mi17_Pilot";
		driverInAction = "Mi17_Pilot";
		memoryPointsGetInCargo = "pos cargo";
		memoryPointsGetInCargoDir = "pos cargo dir";
		cargoAction[] = {"M113_Cargo02_EP1","M113_Cargo01_EP1","M113_Cargo02_EP1","M113_Cargo02_EP1","M113_Cargo01_EP1","M113_Cargo02_EP1","M113_Cargo02_EP1","M113_Cargo02_EP1","M113_Cargo01_EP1","M113_Cargo02_EP1","M113_Cargo01_EP1","M113_Cargo02_EP1","M113_Cargo02_EP1","M113_Cargo01_EP1","M113_Cargo02_EP1","M113_Cargo02_EP1","M113_Cargo02_EP1","M113_Cargo01_EP1","M113_Cargo02_EP1","M113_Cargo01_EP1","M113_Cargo02_EP1","M113_Cargo02_EP1","M113_Cargo02_EP1","M113_Cargo02_EP1","M113_Cargo01_EP1","M113_Cargo02_EP1","M113_Cargo01_EP1"};
		typicalCargo[] = {"RU_Soldier_Pilot","RU_Soldier_Pilot","RU_Soldier_Pilot","RU_Soldier_Pilot","RU_Soldier_Pilot","RU_Soldier_Pilot","RU_Soldier_Pilot","RU_Soldier_Pilot","RU_Soldier_Pilot","RU_Soldier_Pilot","RU_Soldier_Pilot","RU_Soldier_Pilot","RU_Soldier_Pilot","RU_Soldier_Pilot","RU_Soldier_Pilot","RU_Soldier_Pilot","RU_Soldier_Pilot","RU_Soldier_Pilot","RU_Soldier_Pilot","RU_Soldier_Pilot","RU_Soldier_Pilot","RU_Soldier_Pilot","RU_Soldier_Pilot","RU_Soldier_Pilot","RU_Soldier_Pilot","RU_Soldier_Pilot","RU_Soldier_Pilot"};
		transportSoldier = 27;
		gearRetracting = 0;
		crewVulnerable = 1;
		damageResistance = 0.00242;
		weapons[] = {};
		magazines[] = {};
		memoryPointCM[] = {};
		memoryPointCMDir[] = {};
		memoryPointsGetInDriver = "pos driver";
		memoryPointsGetInDriverDir = "pos driver dir";
		occludeSoundsWhenIn = 0.6;
		obstructSoundsWhenIn = 0.65;
		minMainRotorDive = -2;
		maxMainRotorDive = 2;
		neutralMainRotorDive = 0;
		minBackRotorDive = -2.5;
		maxBackRotorDive = 2.5;
		neutralBackRotorDive = 0;
		transportVehiclesMass = 12000;
		landingSpeed = 70;
		supplyradius = 7.5;
		threat[] = {0.7,0.1,0.2};
		transportMaxMagazines = 150;
		transportMaxWeapons = 30;
		transportMaxBackpacks = 30;
		forceHideDriver = "true";
		castDriverShadow = "true";
		castCargoShadow = "true";
		driverCanSee = "1+2+8+16";
		secondaryExplosion = -1;
		damageEffect = "DamageSmokePlane";
		destrType = "DestructWreck";
		wreck = "int73_mi6wreck";
		leftDustEffect = "vbs2_fx_lowTrackDustEffects";
		rightDustEffect = "vbs2_fx_lowTrackDustEffects";
		leftWaterEffect = "vbs2_fx_lowWaterEffects";
		rightWaterEffect = "vbs2_fx_lowWaterEffects";
		aileronSensitivity = 0.01;
		elevatorSensitivity = 0.5;
		wheelSteeringSensitivity = 1;
		damperSize = 5;
		damperForce = 0.1;
		damperDamping = 0.1;
		soundLocked[] = {"\ap_mi6\sounds\int-alarm_loop.wss",3.1622777,1};
		soundIncommingMissile[] = {"\ap_mi6\sounds\int-alarm_loop.wss",3.1622777,1};
		soundGetIn[] = {"ca\sounds\Air\Mi17\ext\ext-Mi17-getin-01",1,1};
		soundGetOut[] = {"ca\sounds\Air\Mi17\ext\ext-Mi17-getout-01",1,1,40};
		soundDammage[] = {"\ap_mi6\sounds\mi6_alarm.wss",0.001,1};
		soundEngineOnInt[] = {"\ap_mi6\sounds\Mi6_engstart_ext.ogg",0.7,1};
		soundEngineOnExt[] = {"\ap_mi6\sounds\Mi6_engstart_ext.ogg",1,1,800};
		soundEngineOffInt[] = {"\ap_mi6\sounds\Mi6_engoff_ext.ogg",0.7,1};
		soundEngineOffExt[] = {"\ap_mi6\sounds\Mi6_engoff_ext.ogg",1,1,800};
		class Sounds
		{
			class Engine
			{
				sound[] = {"\ap_mi6\sounds\Mi6_ext_x1.ogg",2.5118864,1,1500};
				frequency = "rotorSpeed";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorLowOut
			{
				sound[] = {"\ap_mi6\sounds\Mi6_ext_x7.ogg",2.5118864,1,2000};
				frequency = "rotorSpeed";
				volume = "camPos*(0 max (rotorSpeed-0.1))";
				cone[] = {1.6,3.14,2,0.9};
			};
			class RotorHighOut
			{
				sound[] = {"\ap_mi6\sounds\Mi6_ext_x13.ogg",3.51189,1,2500};
				frequency = "rotorSpeed";
				volume = "camPos*10*(0 max (rotorThrust-0.9))";
				cone[] = {1.6,3.14,2,0.9};
			};
			class EngineIn
			{
				sound[] = {"\ap_mi6\sounds\Mi6_int_0.ogg",3.1622777,1};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorLowIn
			{
				sound[] = {"\ap_mi6\sounds\Mi6_int_50.ogg",3.1622777,1};
				frequency = "rotorSpeed";
				volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
			};
			class RotorHighIn
			{
				sound[] = {"\ap_mi6\sounds\Mi6_int_90.ogg",7.943283,1};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*3*(rotorThrust-0.9)";
			};
		};
		insideSoundCoef = 0.9;
		ejectDamageLimit = 0.9;
		envelope[] = {0,0.2,0.9,2.1,2.5,3.3,3.5,3.6,3.7,3.8,3.8,3,0.9,0.7,0.5};
		class Library
		{
			libTextDesc = "The Mil Mi-6 Hook was a Soviet/Russian heavy transport helicopter that was designed by the Mil design bureau. It was built in large numbers for both military and civil roles. It had a cargo capacity comparable with AN-12";
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"\ap_mi6\Data\glass_damage.rvmat","\ap_mi6\Data\glass_destruct.rvmat"};
		};
		ACE_SYS_EJECT_EJECT = 0;
		ACE_SYS_EJECT_JUMP = 1;
		ACE_canlift = 1;
		ACE_canFastrope = 0;
		ace_geolifterattachment[] = {{0,-1,-2.8}};
		ace_ropeattachment[] = {};
		ace_lademeister = 1;
		ace_sys_autorotation_horizontal_gain = "0.75/50";
		ace_sys_autorotation_vertical_gain = 0.5;
		ace_sys_rotoreffects_disable_manshred = 0;
		ace_maxload = 12570;
		ace_weight = 23500;
		class EventHandlers
		{
			init = "_b2a = _this execvm ""\ap_mi6\mi6_init.sqf""; _bc2a = _this execvm ""\ap_mi6\scripts\mi6rain.sqf""; _dc2a = _this execvm ""\ap_mi6\scripts\mi6rainsound.sqf""";
			engine = "_b4a = _this execvm ""\ap_mi6\scripts\mi6maxengine.sqf""";
		};
		class Reflectors
		{
			class Right
			{
				color[] = {0.5,0.8,1,1};
				ambient[] = {0.07,0.07,0.07,1};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 1;
				brightness = 0.7;
			};
			class Left
			{
				color[] = {0.5,0.8,1,1};
				ambient[] = {0.07,0.07,0.07,1};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				brightness = 0.7;
			};
			class BottomBeacon
			{
				color[] = {1,0.1,0.1,1};
				ambient[] = {0.02,0.02,0.02,1};
				position = "B svetlo";
				direction = "konec B svetla";
				hitpoint = "B svetlo light";
				selection = "B svetlo light";
				size = 0.4;
				brightness = 0.05;
			};
		};
		class MarkerLights
		{
			class NavRed
			{
				name = "NavRed";
				color[] = {1,0.1,0.1,1};
				ambient[] = {0.01,0.01,0.01,1};
				brightness = 0.002;
				size = 0.2;
				blinking = "false";
			};
			class NavGreen: NavRed
			{
				name = "NavGreen";
				color[] = {0.1,1,0.1,1};
				ambient[] = {0.01,0.1,0.01,1};
			};
			class NavWhite: NavRed
			{
				name = "NavWhite";
				color[] = {1,1,1,1};
				ambient[] = {0.01,0.01,0.01,1};
				blinking = "true";
			};
			class BeaconRed1
			{
				name = "dolnyBeacon";
				color[] = {1,0.1,0.1,1};
				ambient[] = {0.01,0.01,0.01,1};
				brightness = 0.002;
				size = 0.1;
				blinking = "true";
			};
		};
		class Turrets: Turrets
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
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				gunnerAction = "Mi17_Pilot";
				gunnerInAction = "Mi17_Pilot";
				initTurn = 0;
				gunnerOpticsModel = "\ca\weapons\optika_empty";
				gunnerForceOptics = 0;
			};
			class CoPilotObs: MainTurret
			{
				body = "mainGun";
				gun = "mainTurret";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				gunnerUsesPilotView = "true";
				minElev = -80;
				maxElev = 15;
				initElev = 0;
				minTurn = -150;
				maxTurn = 150;
				initTurn = 0;
				proxyIndex = 2;
				soundServo[] = {"",0.01,1};
				gunBeg = "light";
				gunEnd = "lightEnd";
				animationSourceBody = "mainGun";
				animationSourceGun = "mainTurret";
				weapons[] = {"int73_fakeweap"};
				magazines[] = {"int73_fakeweap"};
				gunnerName = "$STR_CoPilotObs";
				gunnerOpticsModel = "";
				gunnerOpticsEffect[] = {"TankCommanderOptics1"};
				gunnerOutOpticsShowCursor = 0;
				gunnerOpticsShowCursor = 0;
				gunnerAction = "M113_Cargo02_EP1";
				gunnerInAction = "M113_Cargo02_EP1";
				gunnerCanSee = 31;
				radarType = 0;
				primaryGunner = 0;
				commanding = -1;
				startEngine = 0;
				hasGunner = 1;
				stabilizedInAxes = "StabilizedInAxesBoth";
				outGunnerMayFire = 1;
				memoryPointGun = "eye";
				memoryPointGunnerOptics = "gunnerview";
				castGunnerShadow = 1;
				viewGunnerShadow = 0;
				gunnerForceOptics = 0;
				lockWhenDriverOut = 0;
				gunnerCompartments = "Compartment1";
				class ViewOptics
				{
					initAngleX = -20;
					minAngleX = -80;
					maxAngleX = 20;
					initAngleY = 0;
					minAngleY = -160;
					maxAngleY = 160;
					initFov = 0.5;
					minFov = 0.25;
					maxFov = 1.1;
				};
			};
			class CREWCHIEF: co_pilot
			{
				proxyIndex = 3;
				gunnerAction = "M113_Cargo02_EP1";
				gunnerInAction = "M113_Cargo02_EP1";
				gunnerName = "$STR_POSITION_CREWCHIEF";
			};
			class Radist: co_pilot
			{
				proxyIndex = 4;
				gunnerAction = "M113_Cargo02_EP1";
				gunnerInAction = "M113_Cargo02_EP1";
				gunnerName = "$STR_Radist";
			};
		};
		class HitPoints
		{
			class HitHull
			{
				armor = 1;
				material = 51;
				name = "trup";
				visual = "trup";
				passThrough = 1;
			};
			class HitFuel
			{
				armor = 0.8;
				material = 51;
				name = "palivo";
				visual = "palivo";
				passThrough = 0.2;
			};
			class HitEngine
			{
				armor = 0.25;
				material = 51;
				name = "motor";
				visual = "motor";
				passThrough = 0.2;
			};
			class HitAvionics
			{
				armor = 0.15;
				material = 51;
				name = "elektronika";
				visual = "elektronika";
				passThrough = 0.2;
			};
			class HitVRotor
			{
				armor = 0.2;
				material = 51;
				name = "mala vrtule";
				visual = "mala vrtule";
				passThrough = 0.1;
			};
			class HitHRotor
			{
				armor = 0.2;
				material = 51;
				name = "velka vrtule";
				visual = "velka vrtule";
				passThrough = 0.1;
			};
			class HitGlass1
			{
				armor = 0.1;
				material = -1;
				name = "glass01";
				visual = "glass01";
				passThrough = 0;
			};
			class HitGlass2
			{
				armor = 0.1;
				material = -1;
				name = "glass02";
				visual = "glass02";
				passThrough = 0;
			};
			class HitGlass3
			{
				armor = 0.1;
				material = -1;
				name = "glass03";
				visual = "glass03";
				passThrough = 0;
			};
			class HitGlass4
			{
				armor = 0.1;
				material = -1;
				name = "glass04";
				visual = "glass04";
				passThrough = 0;
			};
			class HitGlass5
			{
				armor = 0.1;
				material = -1;
				name = "glass05";
				visual = "glass05";
				passThrough = 0;
			};
			class HitGlass6
			{
				armor = 0.1;
				material = -1;
				name = "glass06";
				visual = "glass06";
				passThrough = 0;
			};
			class HitGlass7
			{
				armor = 0.1;
				material = -1;
				name = "glass07";
				visual = "glass07";
				passThrough = 0;
			};
			class HitGlass8
			{
				armor = 0.1;
				material = -1;
				name = "glass08";
				visual = "glass08";
				passThrough = 0;
			};
			class HitGlass9
			{
				armor = 0.1;
				material = -1;
				name = "glass09";
				visual = "glass09";
				passThrough = 0;
			};
			class HitGlass10
			{
				armor = 0.1;
				material = -1;
				name = "glass10";
				visual = "glass10";
				passThrough = 0;
			};
			class HitGlass11
			{
				armor = 0.1;
				material = -1;
				name = "glass11";
				visual = "glass11";
				passThrough = 0;
			};
			class HitGlass12
			{
				armor = 0.1;
				material = -1;
				name = "glass12";
				visual = "glass12";
				passThrough = 0;
			};
			class HitGlass13
			{
				armor = 0.1;
				material = -1;
				name = "glass13";
				visual = "glass13";
				passThrough = 0;
			};
			class HitGlass14
			{
				armor = 0.1;
				material = -1;
				name = "glass14";
				visual = "glass14";
				passThrough = 0;
			};
			class HitGlass15
			{
				armor = 0.1;
				material = -1;
				name = "glass15";
				visual = "glass15";
				passThrough = 0;
			};
			class HitGlass16
			{
				armor = 0.1;
				material = -1;
				name = "glass16";
				visual = "glass16";
				passThrough = 0;
			};
			class HitGlass17
			{
				armor = 0.1;
				material = -1;
				name = "glass17";
				visual = "glass17";
				passThrough = 0;
			};
			class HitGlass18
			{
				armor = 0.1;
				material = -1;
				name = "glass18";
				visual = "glass18";
				passThrough = 0;
			};
			class HitGlass19
			{
				armor = 0.1;
				material = -1;
				name = "glass19";
				visual = "glass19";
				passThrough = 0;
			};
			class HitGlass20
			{
				armor = 0.1;
				material = -1;
				name = "glass20";
				visual = "glass20";
				passThrough = 0;
			};
			class HitGlass21
			{
				armor = 0.1;
				material = -1;
				name = "glass21";
				visual = "glass21";
				passThrough = 0;
			};
			class HitGlass22
			{
				armor = 0.1;
				material = -1;
				name = "glass22";
				visual = "glass22";
				passThrough = 0;
			};
			class HitGlass23
			{
				armor = 0.1;
				material = -1;
				name = "glass23";
				visual = "glass23";
				passThrough = 0;
			};
			class HitGlass24
			{
				armor = 0.1;
				material = -1;
				name = "glass24";
				visual = "glass24";
				passThrough = 0;
			};
			class HitGlass25
			{
				armor = 0.1;
				material = -1;
				name = "glass25";
				visual = "glass25";
				passThrough = 0;
			};
			class HitGlass26
			{
				armor = 0.1;
				material = -1;
				name = "glass26";
				visual = "glass26";
				passThrough = 0;
			};
			class HitGlass27
			{
				armor = 0.1;
				material = -1;
				name = "glass27";
				visual = "glass27";
				passThrough = 0;
			};
			class HitGlass28
			{
				armor = 0.1;
				material = -1;
				name = "glass28";
				visual = "glass28";
				passThrough = 0;
			};
			class HitGlass29
			{
				armor = 0.1;
				material = -1;
				name = "glass29";
				visual = "glass29";
				passThrough = 0;
			};
			class HitGlass30
			{
				armor = 0.1;
				material = -1;
				name = "glass30";
				visual = "glass30";
				passThrough = 0;
			};
			class HitGlass31
			{
				armor = 0.1;
				material = -1;
				name = "glass31";
				visual = "glass31";
				passThrough = 0;
			};
			class HitGlass32
			{
				armor = 0.1;
				material = -1;
				name = "glass32";
				visual = "glass32";
				passThrough = 0;
			};
			class HitGlass34
			{
				armor = 0.1;
				material = -1;
				name = "glass34";
				visual = "glass34";
				passThrough = 0;
			};
			class HitGlass35
			{
				armor = 0.1;
				material = -1;
				name = "glass35";
				visual = "glass35";
				passThrough = 0;
			};
			class HitGlass36
			{
				armor = 0.1;
				material = -1;
				name = "glass36";
				visual = "glass36";
				passThrough = 0;
			};
			class HitGlass37
			{
				armor = 0.1;
				material = -1;
				name = "glass37";
				visual = "glass37";
				passThrough = 0;
			};
			class HitGlass38
			{
				armor = 0.1;
				material = -1;
				name = "glass38";
				visual = "glass38";
				passThrough = 0;
			};
			class HitGlass39
			{
				armor = 0.1;
				material = -1;
				name = "glass39";
				visual = "glass39";
				passThrough = 0;
			};
			class HitGlass40
			{
				armor = 0.1;
				material = -1;
				name = "glass40";
				visual = "glass40";
				passThrough = 0;
			};
			class HitGlass41
			{
				armor = 0.1;
				material = -1;
				name = "glass41";
				visual = "glass41";
				passThrough = 0;
			};
			class HitGlass42
			{
				armor = 0.1;
				material = -1;
				name = "glass42";
				visual = "glass42";
				passThrough = 0;
			};
		};
		class AnimationSources
		{
			class landing_lights
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class ramp_bottom
			{
				source = "user";
				animPeriod = 4;
				initPhase = 0;
			};
			class ramp_bottom2
			{
				source = "user";
				animPeriod = 4;
				initPhase = 0;
			};
			class ramp_leftdoor
			{
				source = "user";
				animPeriod = 6;
				initPhase = 0;
			};
			class ramp_rightdoor
			{
				source = "user";
				animPeriod = 6;
				initPhase = 0;
			};
		};
		class UserActions{};
	};
};
class CfgSounds
{
	class mi6ramp_open
	{
		sound[] = {"\ap_mi6\sounds\mi6ramp_open.wss",1,1};
		name = "mi6ramp_open";
		titles[] = {};
	};
	class mi6ramp_close
	{
		sound[] = {"\ap_mi6\sounds\mi6ramp_close.wss",1,1};
		name = "mi6ramp_close";
		titles[] = {};
	};
	class mi6doors_open
	{
		sound[] = {"\ap_mi6\sounds\mi6doors_open.wss",1,1};
		name = "mi6doors_open";
		titles[] = {};
	};
	class mi6doors_close
	{
		sound[] = {"\ap_mi6\sounds\mi6doors_close.wss",1,1};
		name = "mi6doors_close";
		titles[] = {};
	};
};
