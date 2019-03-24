class DefaultEventhandlers;
class CfgPatches
{
	class CATracked_BAF
	{
		units[]=
		{
			"BAF_FV510_D"
		};
		weapons[]={};
		requiredVersion=1.54;
		requiredAddons[]=
		{
			"CATracked_E",
			"CACharacters_BAF",
			"CA_BAF",
			"CAWeapons_BAF"
		};
	};
};
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class CfgVehicles
{
	class Land;
	class LandVehicle: Land
	{
		class NewTurret;
		class Sounds;
	};
	class Tank: LandVehicle
	{
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
		class AnimationSources;
		class ViewPilot;
		class HeadLimits;
		class ViewOptics;
		class HitPoints;
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
	};
	class BAF_FV510_D: Tank
	{
		scope=2;
		expansion=2;
		displayName="$STR_BAF_CFGVEHICLES_BAF_FV510_D0";
		class Library
		{
			libTextDesc="$STR_BAF_CFGVEHICLES_BAF_FV510_D_LIBRARY0";
		};
		model="\ca\Tracked_d_baf\FV510_BAF";
		picture="\ca\Tracked_d_baf\Data\ui\picture_warrior_ca.paa";
		Icon="\ca\Tracked_d_baf\Data\ui\icon_warrior_ca.paa";
		mapSize=9.3000002;
		crew="BAF_crewman_MTP";
		side=1;
		faction="BIS_BAF";
		vehicleClass="ArmouredD";
		accuracy=0.25;
		transportSoldier=7;
		memoryPointCargoLight="cargo light";
		typicalCargo[]=
		{
			"BAF_crewman_MTP",
			"BAF_crewman_MTP"
		};
		commanderCanSee=31;
		viewCargoShadow=1;
		viewCargoShadowDiff=0.050000001;
		viewCargoShadowAmb=0.5;
		getInAction="GetInHigh";
		getOutAction="GetOutHigh";
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		cargoAction[]=
		{
			"M113_Cargo03_EP1",
			"M113_Cargo02_EP1",
			"M113_Cargo02_EP1",
			"M113_Cargo02_EP1",
			"M113_Cargo02_EP1",
			"M113_Cargo02_EP1",
			"M113_Cargo02_EP1"
		};
		driverAction="Abrams_DriverOut";
		driverInAction="Abrams_Driver";
		armor=850;
		armorStructural=2;
		damageResistance=0.0054700002;
		cost=4000000;
		class HitPoints: HitPoints
		{
			class HitHull
			{
				armor=0.85000002;
				material=-1;
				name="telo";
				visual="zbytek";
				passThrough=1;
			};
			class HitEngine
			{
				armor=0.80000001;
				material=60;
				name="motor";
				visual="motor";
				passThrough=1;
			};
		};
		animationSourceHatch="";
		class AnimationSources
		{
			class recoil_source
			{
				source="reload";
				weapon="CTWS";
			};
		};
		maxSpeed=75;
		gearBox[]={-7,0,8,7,6.6999998,4.1999998};
		fireDustEffect="nodust";
		driverForceOptics=1;
		driverOpticsModel="CA\Tracked_E\driverOptics";
		memoryPointDriverOptics="driverview";
		class ViewOptics: ViewOptics
		{
			visionMode[]=
			{
				"Normal",
				"NVG"
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="vyfuk start";
				direction="vyfuk konec";
				effect="ExhaustsEffectBig";
			};
		};
		insideSoundCoef=0.89999998;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunBeg="Usti hlavne";
				gunEnd="Konec hlavne";
				gunnerAction="Abrams_Gunner";
				gunnerInAction="Abrams_Gunner";
				weapons[]=
				{
					"CTWS",
					"BAF_L94A1"
				};
				soundServo[]=
				{
					"\ca\sounds\vehicles\servos\turret-2",
					0.031622775,
					1,
					30
				};
				magazines[]=
				{
					"200Rnd_40mmHE_FV510",
					"200Rnd_40mmSABOT_FV510",
					"2000Rnd_762x51_L94A1"
				};
				forceHideGunner=1;
				turretInfoType="RscWeaponRangeZeroing";
				discreteDistance[]={100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100,2400};
				discreteDistanceInitIndex=5;
				memoryPointGunnerOptics="gunnerview";
				minElev=-5;
				maxElev=20;
				initElev=10;
				gunnerOutOpticsEffect[]={};
				gunnerOpticsEffect[]=
				{
					"TankGunnerOptics2",
					"OpticsBlur1",
					"OpticsCHAbera1"
				};
				gunnerForceOptics=1;
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
						initFov=0.2;
						minFov=0.2;
						maxFov=0.2;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={2};
						gunnerOpticsModel="\ca\tracked_d_baf\gunnerOptics_FW510_2.p3d";
						gunnerOpticsEffect[]={};
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\ca\tracked_d_baf\gunnerOptics_FW510.p3d";
						initFov=0.039000001;
						minFov=0.039000001;
						maxFov=0.039000001;
					};
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						body="obsTurret";
						gun="obsGun";
						animationSourceBody="obsTurret";
						animationSourceGun="obsGun";
						stabilizedInAxes=3;
						memoryPointGunnerOutOptics="commander_weapon_view";
						memoryPointGunnerOptics="commanderview";
						minElev=-25;
						maxElev=60;
						initElev=0;
						minTurn=-360;
						maxTurn=360;
						initTurn=0;
						weapons[]=
						{
							"SmokeLauncher"
						};
						magazines[]=
						{
							"SmokeLauncherMag",
							"SmokeLauncherMag"
						};
						soundServo[]=
						{
							"\ca\sounds\vehicles\servos\turret-1",
							0.0099999998,
							1,
							30
						};
						outGunnerMayFire=1;
						inGunnerMayFire=1;
						gunnerAction="Abrams_CommanderOut";
						gunnerInAction="Abrams_Commander";
						gunnerGetInAction="GetInHigh";
						gunnerGetOutAction="GetOutHigh";
						turretInfoType="RscWeaponRangeFinder";
						gunnerOpticsModel="\ca\tracked_d_baf\2Dscope_RWS_baf";
						gunnerOpticsEffect[]={};
						class ViewOptics
						{
							initAngleX=0;
							minAngleX=-30;
							maxAngleX=30;
							initAngleY=0;
							minAngleY=-100;
							maxAngleY=100;
							initFov=0.155;
							minFov=0.034000002;
							maxFov=0.155;
							visionMode[]=
							{
								"Normal",
								"NVG",
								"Ti"
							};
							thermalMode[]={0,1};
						};
						startEngine=0;
						gunnerHasFlares=1;
					};
				};
			};
		};
		threat[]={1,1,0.30000001};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"Ca\Tracked_d_BAF\Data\Warrior_ext.rvmat",
				"Ca\Tracked_d_BAF\Data\Warrior_ext_damage.rvmat",
				"Ca\Tracked_d_BAF\Data\Warrior_ext_destruct.rvmat",
				"Ca\Tracked_d_BAF\Data\Warrior_track.rvmat",
				"Ca\Tracked_E\M1_Abrams\Data\m1_abrams_track_metal_damage.rvmat",
				"Ca\Tracked_E\M1_Abrams\Data\m1_abrams_track_metal_destruct.rvmat"
			};
		};
		soundGear[]=
		{
			"",
			5.6234134e-005,
			1
		};
		soundGetIn[]=
		{
			"Ca\sounds_baf\tracked\ext_door",
			0.56234133,
			1
		};
		soundGetOut[]=
		{
			"Ca\sounds_baf\tracked\ext_door",
			0.56234133,
			1,
			50
		};
		soundEngineOnInt[]=
		{
			"Ca\sounds_baf\tracked\int_start",
			3.1622777,
			1
		};
		soundEngineOnExt[]=
		{
			"Ca\sounds_baf\tracked\ext_start",
			5.6234131,
			1,
			400
		};
		soundEngineOffInt[]=
		{
			"Ca\sounds_baf\tracked\int_stop",
			3.1622777,
			1
		};
		soundEngineOffExt[]=
		{
			"Ca\sounds_baf\tracked\ext_stop",
			5.6234131,
			1,
			400
		};
		buildCrash0[]=
		{
			"Ca\sounds\Vehicles\Crash\tank_building_01",
			0.70794576,
			1,
			150
		};
		buildCrash1[]=
		{
			"Ca\sounds\Vehicles\Crash\tank_building_02",
			0.70794576,
			1,
			150
		};
		buildCrash2[]=
		{
			"Ca\sounds\Vehicles\Crash\tank_building_03",
			0.70794576,
			1,
			150
		};
		buildCrash3[]=
		{
			"Ca\sounds\Vehicles\Crash\tank_building_04",
			0.70794576,
			1,
			150
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			0.25,
			"buildCrash1",
			0.25,
			"buildCrash2",
			0.25,
			"buildCrash3",
			0.25
		};
		WoodCrash0[]=
		{
			"Ca\sounds\Vehicles\Crash\tank_wood_01",
			0.70794576,
			1,
			150
		};
		WoodCrash1[]=
		{
			"Ca\sounds\Vehicles\Crash\tank_wood_02",
			0.70794576,
			1,
			150
		};
		WoodCrash2[]=
		{
			"Ca\sounds\Vehicles\Crash\tank_wood_03",
			0.70794576,
			1,
			150
		};
		WoodCrash3[]=
		{
			"Ca\sounds\Vehicles\Crash\tank_wood_04",
			0.70794576,
			1,
			150
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			0.25,
			"woodCrash1",
			0.25,
			"woodCrash2",
			0.25,
			"woodCrash3",
			0.25
		};
		ArmorCrash0[]=
		{
			"Ca\sounds\Vehicles\Crash\tank_vehicle_01",
			0.70794576,
			1,
			150
		};
		ArmorCrash1[]=
		{
			"Ca\sounds\Vehicles\Crash\tank_vehicle_02",
			0.70794576,
			1,
			150
		};
		ArmorCrash2[]=
		{
			"Ca\sounds\Vehicles\Crash\tank_vehicle_03",
			0.70794576,
			1,
			150
		};
		ArmorCrash3[]=
		{
			"Ca\sounds\Vehicles\Crash\tank_vehicle_04",
			0.70794576,
			1,
			150
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			0.25,
			"ArmorCrash1",
			0.25,
			"ArmorCrash2",
			0.25,
			"ArmorCrash3",
			0.25
		};
		class SoundEvents
		{
			class AccelerationIn
			{
				sound[]=
				{
					"Ca\sounds_baf\tracked\int_acce",
					5.6234131,
					1
				};
				limit="0.15";
				expression="engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
			class AccelerationOut
			{
				sound[]=
				{
					"Ca\sounds_baf\tracked\ext_acce",
					5.6234131,
					1,
					500
				};
				limit="0.15";
				expression="engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
		};
		class Sounds: Sounds
		{
			class Engine: Engine
			{
				sound[]=
				{
					"Ca\sounds_baf\tracked\ext_engine",
					10,
					1,
					900
				};
				frequency="0.975+(0.05*thrust)";
				volume="engineOn*camPos*(rpm factor[0.3, 0.9])";
			};
			class IdleOut
			{
				sound[]=
				{
					"Ca\sounds_baf\tracked\ext_idle",
					6.3095737,
					1,
					400
				};
				frequency="1";
				volume="engineOn*camPos*(rpm factor[0.4, 0.15])";
			};
			class NoiseOut
			{
				sound[]=
				{
					"Ca\sounds_baf\tracked\ext_noise2",
					10,
					1,
					120
				};
				frequency="1";
				volume="camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsOutH0
			{
				sound[]=
				{
					"Ca\sounds_baf\tracked\treads\ext_trhard_01",
					1.7782794,
					1,
					300
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsOutH1
			{
				sound[]=
				{
					"Ca\sounds_baf\tracked\treads\ext_trhard_02",
					1.7782794,
					1,
					300
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsOutH2
			{
				sound[]=
				{
					"Ca\sounds_baf\tracked\treads\ext_trhard_03",
					1.7782794,
					1,
					300
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsOutH3
			{
				sound[]=
				{
					"Ca\sounds_baf\tracked\treads\ext_trhard_04",
					1.7782794,
					1,
					300
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsOutH4
			{
				sound[]=
				{
					"Ca\sounds_baf\tracked\treads\ext_trhard_05",
					1.7782794,
					1,
					300
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*((rpm factor[1, 1.8]) min (rpm factor[1.8, 1]))";
			};
			class ThreadsOutS0
			{
				sound[]=
				{
					"Ca\sounds_baf\tracked\treads\ext_trsoft_01",
					1.7782794,
					1,
					250
				};
				frequency="1";
				volume="engineOn*camPos*grass*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsOutS1
			{
				sound[]=
				{
					"Ca\sounds_baf\tracked\treads\ext_trsoft_02",
					1.7782794,
					1,
					250
				};
				frequency="1";
				volume="engineOn*camPos*grass*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsOutS2
			{
				sound[]=
				{
					"Ca\sounds_baf\tracked\treads\ext_trsoft_03",
					1.7782794,
					1,
					250
				};
				frequency="1";
				volume="engineOn*camPos*grass*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsOutS3
			{
				sound[]=
				{
					"Ca\sounds_baf\tracked\treads\ext_trsoft_04",
					1.7782794,
					1,
					250
				};
				frequency="1";
				volume="engineOn*camPos*grass*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsOutS4
			{
				sound[]=
				{
					"Ca\sounds_baf\tracked\treads\ext_trsoft_05",
					1.7782794,
					1,
					250
				};
				frequency="1";
				volume="engineOn*camPos*grass*((rpm factor[1, 1.8]) min (rpm factor[1.8, 1]))";
			};
			class Movement: Movement
			{
				sound[]=
				{
					"",
					1,
					1
				};
				frequency="0";
				volume="0";
			};
			class EngineIn
			{
				sound[]=
				{
					"Ca\sounds_baf\tracked\int_engine",
					10,
					1
				};
				frequency="(randomizer*0.05+0.8)*rpm";
				volume="engineOn*(1-camPos)*(rpm factor[0.3, 1])";
			};
			class IdleIn
			{
				sound[]=
				{
					"Ca\sounds_baf\tracked\int_idle",
					10,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(rpm factor[0.4, 0.15])";
			};
			class NoiseIn
			{
				sound[]=
				{
					"Ca\sounds_baf\tracked\int_noise2",
					2.5118864,
					1
				};
				frequency="1";
				volume="(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsInH0
			{
				sound[]=
				{
					"Ca\sounds_baf\tracked\treads\int_trhard_01",
					1,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsInH1
			{
				sound[]=
				{
					"Ca\sounds_baf\tracked\treads\int_trhard_02",
					1,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsInH2
			{
				sound[]=
				{
					"Ca\sounds_baf\tracked\treads\int_trhard_03",
					1,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsInH3
			{
				sound[]=
				{
					"Ca\sounds_baf\tracked\treads\int_trhard_04",
					1,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsInH4
			{
				sound[]=
				{
					"Ca\sounds_baf\tracked\treads\int_trhard_05",
					1,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*((rpm factor[1, 1.8]) min (rpm factor[1.8, 1]))";
			};
			class ThreadsInS0
			{
				sound[]=
				{
					"Ca\sounds_baf\tracked\treads\int_trsoft_01",
					1,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsInS1
			{
				sound[]=
				{
					"Ca\sounds_baf\tracked\treads\int_trsoft_02",
					1,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsInS2
			{
				sound[]=
				{
					"Ca\sounds_baf\tracked\treads\int_trsoft_03",
					1,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsInS3
			{
				sound[]=
				{
					"Ca\sounds_baf\tracked\treads\int_trsoft_04",
					1,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsInS4
			{
				sound[]=
				{
					"Ca\sounds_baf\tracked\treads\int_trsoft_05",
					1,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*((rpm factor[1, 1.8]) min (rpm factor[1.8, 1]))";
			};
		};
		smokeLauncherGrenadeCount=6;
		smokeLauncherVelocity=14;
		smokeLauncherOnTurret=1;
		smokeLauncherAngle=120;
		transportMaxWeapons=22;
		transportMaxMagazines=500;
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine="30Rnd_556x45_Stanag";
				count=30;
			};
			class _xx_5Rnd_127x99_AS50
			{
				magazine="5Rnd_127x99_AS50";
				count=10;
			};
			class _xx_5Rnd_86x70_L115A1
			{
				magazine="5Rnd_86x70_L115A1";
				count=20;
			};
			class _xx_NLAW
			{
				magazine="NLAW";
				count=2;
			};
			class _xx_200Rnd_556x45_L110A1
			{
				magazine="200Rnd_556x45_L110A1";
				count=10;
			};
			class _xx_1Rnd_HE_M203
			{
				magazine="1Rnd_HE_M203";
				count=10;
			};
			class _xx_FlareWhite_M203
			{
				magazine="FlareWhite_M203";
				count=2;
			};
			class _xx_FlareGreen_M203
			{
				magazine="FlareGreen_M203";
				count=2;
			};
			class _xx_FlareRed_M203
			{
				magazine="FlareRed_M203";
				count=2;
			};
			class _xx_FlareYellow_M203
			{
				magazine="FlareYellow_M203";
				count=2;
			};
			class _xx_BAF_L109A1_HE
			{
				magazine="BAF_L109A1_HE";
				count=10;
			};
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=2;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=2;
			};
			class _xx_SmokeShellYellow
			{
				magazine="SmokeShellYellow";
				count=2;
			};
			class _xx_SmokeShellPurple
			{
				magazine="SmokeShellPurple";
				count=2;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=5;
			};
		};
		class TransportWeapons
		{
			class _xx_BAF_NLAW_Launcher
			{
				weapon="BAF_NLAW_Launcher";
				count=1;
			};
			class _xx_BAF_L85A2_RIS_CWS
			{
				weapon="BAF_L85A2_RIS_CWS";
				count=1;
			};
		};
		class NVGMarkers
		{
			class NVGMarker01
			{
				name="nvg_marker";
				color[]={0.029999999,0.003,0.003,1};
				ambient[]={0.003,0.00030000001,0.00030000001,1};
				brightness=0.001;
				blinking=1;
			};
		};
	};
};
class CfgDestroy
{
	access=1;
	class EngineHit
	{
		sound[]=
		{
			"\ca\Tracked\Data\Sound\fuel_explosion",
			31.622776,
			1
		};
	};
};
