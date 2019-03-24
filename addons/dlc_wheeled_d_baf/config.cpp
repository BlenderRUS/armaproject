class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		Jackal_gunner_L2A1_BAF="Jackal_gunner_L2A1_BAF";
		Jackal_gunner_GMG_BAF="Jackal_gunner_GMG_BAF";
		Jackal_Cargo_BAF="Jackal_Cargo_BAF";
		Jackal_driver_BAF="Jackal_driver_BAF";
		Jackal_commander_BAF="Jackal_commander_BAF";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class Stryker_Dead;
		class Jackal_gunner_L2A1_BAF: Crew
		{
			file="\Ca\wheeled_d_baf\Data\Anim\Jackal_BAF_gunner_L2A1";
			interpolateTo[]=
			{
				"Jackal_KIA_Gunner_BAF",
				1
			};
			speed=1e+010;
		};
		class Jackal_gunner_GMG_BAF: Crew
		{
			file="\Ca\wheeled_d_baf\Data\Anim\Jackal_BAF_gunner_GMG";
			interpolateTo[]=
			{
				"Jackal_KIA_Gunner_BAF",
				1
			};
			speed=1e+010;
		};
		class Jackal_Cargo_BAF: Crew
		{
			file="\ca\wheeled_d_baf\Data\Anim\Jackal_BAF_cargo";
			interpolateTo[]=
			{
				"DeadState",
				1
			};
			speed=1e+010;
		};
		class Jackal_driver_BAF: Crew
		{
			file="\ca\wheeled_d_baf\Data\Anim\Jackal_BAF_driver";
			interpolateTo[]=
			{
				"Jackal_KIA_Driver_BAF",
				1
			};
			speed=1e+010;
		};
		class Jackal_commander_BAF: Crew
		{
			file="\Ca\wheeled_d_baf\Data\Anim\Jackal_BAF_commander";
			interpolateTo[]=
			{
				"Jackal_KIA_Driver_BAF",
				1
			};
			speed=1e+010;
		};
		class Jackal_KIA_Driver_BAF: DefaultDie
		{
			actions="DeadActions";
			file="\ca\Wheeled_d_baf\Data\Anim\Jackal_KIA_Driver";
			speed=1e+010;
			terminal=1;
			soundEnabled=0;
			looped=0;
			connectTo[]=
			{
				"DeadState",
				0.1
			};
		};
		class Jackal_KIA_Gunner_BAF: DefaultDie
		{
			actions="DeadActions";
			file="\ca\Wheeled_d_baf\Data\Anim\Jackal_KIA_Gunner";
			speed=1e+010;
			terminal=1;
			soundEnabled=0;
			looped=0;
			connectTo[]=
			{
				"DeadState",
				0.1
			};
		};
	};
};
class CfgMovesWomen: CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		Jackal_driver_BAF="";
		Jackal_gunner_L2A1_BAF="";
		Jackal_gunner_GMG_BAF="";
		Jackal_Cargo_BAF="crew";
		Jackal_commander_BAF="crew";
	};
};
class CfgPatches
{
	class CAWheeled_D_BAF
	{
		units[]=
		{
			"BAF_ATV_D",
			"BAF_Offroad_D, BAF_Jackal2_L2A1_D",
			"BAF_Jackal2_GMG_D"
		};
		weapons[]={};
		requiredVersion=1.54;
		requiredAddons[]=
		{
			"CA_E",
			"CAWeapons",
			"CAWheeled_E",
			"CACharacters_E",
			"CAWheeled_E_ATV",
			"CAWheeled_E_LandRover",
			"CA_BAF",
			"CACharacters_BAF",
			"CAWeapons_BAF"
		};
	};
};
class WeaponCloudsMGun;
class CfgVehicles
{
	class Land;
	class LandVehicle: Land
	{
		class NewTurret;
	};
	class Car: LandVehicle
	{
		class HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
		};
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
			};
		};
		class AnimationSources;
	};
	class SUV_Base_EP1;
	class SUV_PMC_BAF: SUV_Base_EP1
	{
		scope=2;
		rarityUrban=0.80000001;
		displayname="$STR_BAF_CFGVEHICLES_PMC_SUV0";
		side=2;
		faction="PMC_BAF";
		crew="CIV_Contractor2_BAF";
		typicalCargo[]=
		{
			"CIV_Contractor1_BAF"
		};
	};
	class ATV_Base_EP1;
	class BAF_ATV_D: ATV_Base_EP1
	{
		expansion=2;
		scope=2;
		side=1;
		faction="BIS_BAF";
		vehicleClass="CarD";
		castDriverShadow=1;
		crew="BAF_soldier_MTP";
		typicalCargo[]=
		{
			"BAF_soldier_MTP",
			"BAF_soldier_MTP"
		};
	};
	class LandRover_CZ_EP1;
	class BAF_Offroad_D: LandRover_CZ_EP1
	{
		expansion=2;
		scope=2;
		side=1;
		faction="BIS_BAF";
		vehicleClass="CarD";
		displayname="$STR_BAF_CFGVEHICLES_BAF_OFFROAD_D0";
		class Library
		{
			libTextDesc="$STR_BAF_CFGVEHICLES_BAF_OFFROAD_D_LIBRARY0";
		};
		model="ca\wheeled_d_baf\LR_covered_soft_BAF";
		crew="BAF_soldier_MTP";
		typicalCargo[]=
		{
			"BAF_soldier_MTP",
			"BAF_soldier_MTP"
		};
		class Turrets
		{
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"ca\wheeled_d_baf\Data\LR_base_baf.rvmat",
				"ca\wheeled_d_baf\Data\LR_base_baf_damage.rvmat",
				"ca\wheeled_d_baf\Data\LR_base_baf_destruct.rvmat",
				"ca\wheeled_d_baf\Data\LR_glass_baf.rvmat",
				"ca\wheeled_d_baf\Data\LR_glass_baf_damage.rvmat",
				"ca\wheeled_d_baf\Data\LR_glass_baf_destruct.rvmat",
				"ca\wheeled_d_baf\Data\LR_Special_baf.rvmat",
				"ca\wheeled_d_baf\Data\LR_Special_baf_damage.rvmat",
				"ca\wheeled_d_baf\Data\LR_Special_baf_destruct.rvmat"
			};
		};
		supplyRadius=5;
		transportMaxMagazines=90;
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine="30Rnd_556x45_Stanag";
				count=10;
			};
			class _xx_5Rnd_86x70_L115A1
			{
				magazine="5Rnd_86x70_L115A1";
				count=6;
			};
			class _xx_NLAW
			{
				magazine="NLAW";
				count=2;
			};
			class _xx_200Rnd_556x45_L110A1
			{
				magazine="200Rnd_556x45_L110A1";
				count=2;
			};
			class _xx_1Rnd_HE_M203
			{
				magazine="1Rnd_HE_M203";
				count=3;
			};
			class _xx_BAF_L109A1_HE
			{
				magazine="BAF_L109A1_HE";
				count=5;
			};
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=1;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=1;
			};
			class _xx_SmokeShellYellow
			{
				magazine="SmokeShellYellow";
				count=1;
			};
			class _xx_SmokeShellPurple
			{
				magazine="SmokeShellPurple";
				count=1;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_IR_Strobe_Marker
			{
				magazine="IR_Strobe_Marker";
				count=2;
			};
		};
		class NVGMarkers
		{
		};
	};
	class BAF_Jackal2_BASE_D: Car
	{
		brakeDistance=13;
		expansion=2;
		scope=0;
		vehicleClass="CarD";
		side=1;
		faction="BIS_BAF";
		holdOffroadFormation=1;
		enableManualFire=0;
		displayname="$STR_BAF_CFGVEHICLES_BAF_JACKAL2_BASE_D0";
		MapSize=6;
		maxSpeed=150;
		terrainCoef=3;
		turnCoef=3;
		armor=30;
		damageResistance=0.0071899998;
		insideSoundCoef=0.89999998;
		soundGear[]=
		{
			"",
			5.6234134e-005,
			1
		};
		soundGetIn[]=
		{
			"\Ca\sounds_baf\wheeled\jackal_door",
			1,
			1
		};
		soundGetOut[]=
		{
			"\Ca\sounds_baf\wheeled\jackal_door",
			1,
			1,
			30
		};
		soundEngineOnInt[]=
		{
			"\Ca\sounds_baf\wheeled\jackal_ext_on",
			1,
			1
		};
		soundEngineOnExt[]=
		{
			"\Ca\sounds_baf\wheeled\jackal_ext_on",
			1,
			1,
			100
		};
		soundEngineOffInt[]=
		{
			"\Ca\sounds_baf\wheeled\jackal_ext_off",
			1,
			1
		};
		soundEngineOffExt[]=
		{
			"\Ca\sounds_baf\wheeled\jackal_ext_off",
			1,
			1,
			100
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
					"\Ca\sounds_baf\wheeled\jackal_ext_acceleration",
					0.56234133,
					1
				};
				limit="0.15";
				expression="engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
			class AccelerationOut
			{
				sound[]=
				{
					"\Ca\sounds_baf\wheeled\jackal_ext_acceleration",
					0.56234133,
					1,
					300
				};
				limit="0.15";
				expression="engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
		};
		class Sounds
		{
			class Engine
			{
				sound[]=
				{
					"\Ca\sounds_baf\wheeled\jackal_ext_low",
					1.4125376,
					0.60000002,
					200
				};
				frequency="(randomizer*0.05+0.95)*rpm";
				volume="camPos*engineOn*((rpm factor[0.3, 0.4]) min (rpm factor[0.7, 0.5]))";
			};
			class EngineHighOut
			{
				sound[]=
				{
					"\Ca\sounds_baf\wheeled\jackal_ext_mid",
					1.4125376,
					0.60000002,
					300
				};
				frequency="(randomizer*0.05+0.95)*rpm";
				volume="camPos*engineOn*(rpm factor[0.5, 0.8])";
			};
			class IdleOut
			{
				sound[]=
				{
					"\Ca\sounds_baf\wheeled\jackal_ext_idle",
					0.56234133,
					1,
					100
				};
				frequency="1";
				volume="engineOn*camPos*(rpm factor[0.4, 0])";
			};
			class TiresRockOut
			{
				sound[]=
				{
					"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2",
					0.1,
					1,
					50
				};
				frequency="1";
				volume="camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[]=
				{
					"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2",
					0.1,
					1,
					50
				};
				frequency="1";
				volume="camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[]=
				{
					"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3",
					0.1,
					1,
					50
				};
				frequency="1";
				volume="camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[]=
				{
					"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2",
					0.1,
					1,
					50
				};
				frequency="1";
				volume="camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[]=
				{
					"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2",
					0.1,
					1,
					50
				};
				frequency="1";
				volume="camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[]=
				{
					"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3",
					0.1,
					1,
					50
				};
				frequency="1";
				volume="camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[]=
				{
					"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise3",
					0.56234133,
					1,
					50
				};
				frequency="1";
				volume="camPos*(damper0 max 0.04)*(speed factor[0, 8])";
			};
			class EngineLowIn
			{
				sound[]=
				{
					"\Ca\sounds_baf\wheeled\jackal_ext_low",
					1.4125376,
					0.60000002
				};
				frequency="(randomizer*0.05+0.95)*rpm";
				volume="(1-camPos)*engineOn*((rpm factor[0.3, 0.4]) min (rpm factor[0.7, 0.5]))";
			};
			class EngineHighIn
			{
				sound[]=
				{
					"\Ca\sounds_baf\wheeled\jackal_ext_mid",
					1.4125376,
					0.60000002
				};
				frequency="(randomizer*0.05+0.95)*rpm";
				volume="(1-camPos)*engineOn*(rpm factor[0.5, 0.8])";
			};
			class IdleIn
			{
				sound[]=
				{
					"\Ca\sounds_baf\wheeled\jackal_ext_idle",
					0.79432821,
					1
				};
				frequency="1";
				volume="engineOn*(rpm factor[0.4, 0])*(1-camPos)";
			};
			class TiresRockIn
			{
				sound[]=
				{
					"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2",
					0.1,
					1
				};
				frequency="1";
				volume="(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[]=
				{
					"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2",
					0.1,
					1
				};
				frequency="1";
				volume="(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[]=
				{
					"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3",
					0.1,
					1
				};
				frequency="1";
				volume="(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[]=
				{
					"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2",
					0.1,
					1
				};
				frequency="1";
				volume="(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[]=
				{
					"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2",
					0.1,
					1
				};
				frequency="1";
				volume="(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[]=
				{
					"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3",
					0.1,
					1
				};
				frequency="1";
				volume="(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[]=
				{
					"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise4",
					0.31622776,
					1
				};
				frequency="1";
				volume="(damper0 max 0.04)*(speed factor[0, 8])*(1-camPos)";
			};
			class Movement
			{
				sound="soundEnviron";
				frequency="1";
				volume="0";
			};
		};
		transportSoldier=2;
		driverAction="Jackal_Driver_BAF";
		cargoAction[]=
		{
			"Jackal_Cargo_BAF",
			"Jackal_Cargo_BAF"
		};
		crew="BAF_soldier_MTP";
		typicalCargo[]=
		{
			"BAF_soldier_MTP",
			"BAF_soldier_MTP"
		};
		cargoIsCoDriver[]={0,0};
		ejectDeadGunner=0;
		ejectDeadCargo=0;
		ejectDeadDriver=0;
		ejectDeadCommander=0;
		smokeLauncherGrenadeCount=8;
		smokeLauncherVelocity=14;
		smokeLauncherOnTurret=0;
		smokeLauncherAngle=360;
		class HitPoints: HitPoints
		{
			class HitBody
			{
				armor=0.69999999;
				material=50;
				name="karoserie";
				visual="zbytek";
				passThrough=1;
			};
			class HitEngine
			{
				armor=2;
				material=-1;
				name="motor";
				passThrough=0;
			};
			class HitFuel
			{
				armor=1;
				material=-1;
				name="palivo";
				passThrough=0;
			};
			class HitLFWheel: HitLFWheel
			{
				armor=0.5;
			};
			class HitLBWheel: HitLBWheel
			{
				armor=0.5;
			};
			class HitRFWheel: HitRFWheel
			{
				armor=0.5;
			};
			class HitRBWheel: HitRBWheel
			{
				armor=0.5;
			};
		};
		class Turrets: Turrets
		{
			class M420_Turret: MainTurret
			{
				gunnerName="$STR_POSITION_COMMANDER";
				primaryGunner=0;
				primaryObserver=1;
				commanding=2;
				body="mainTurret_2";
				gun="mainGun_2";
				animationSourceBody="mainTurret_2";
				animationSourceGun="mainGun_2";
				proxyIndex=2;
				gunBeg="usti hlavne_2";
				gunEnd="konec hlavne_2";
				memoryPointGun="gun_muzzle";
				selectionFireAnim="zasleh_2";
				memoryPointGunnerOptics="gunnerview_2";
				LODTurnedOut=1100;
				LODTurnedIn=1100;
				minElev=-18;
				maxElev=40;
				minTurn=-35;
				maxTurn=45;
				initTurn=0;
				gunnerOpticsModel="\ca\Weapons\optika_empty";
				gunnerForceOptics=0;
				weapons[]=
				{
					"BAF_M240_veh",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"200Rnd_762x51_M240",
					"200Rnd_762x51_M240",
					"200Rnd_762x51_M240",
					"200Rnd_762x51_M240",
					"200Rnd_762x51_M240",
					"200Rnd_762x51_M240",
					"200Rnd_762x51_M240",
					"SmokeLauncherMag",
					"SmokeLauncherMag"
				};
				soundServo[]={};
				gunnerAction="Jackal_commander_BAF";
				gunnerInAction="Jackal_commander_BAF";
				ejectDeadGunner=0;
				stabilizedInAxes="StabilizedInAxesNone";
				memoryPointsGetInGunner="pos codriver";
				memoryPointsGetInGunnerDir="pos codriver dir";
			};
		};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim_2
			{
				source="reload";
				weapon="BAF_M240_veh";
			};
			class ReloadMagazine_2
			{
				source="reloadmagazine";
				weapon="BAF_M240_veh";
			};
			class Revolving_2
			{
				source="revolving";
				weapon="BAF_M240_veh";
			};
		};
		threat[]={1,0.2,0.30000001};
		hiddenSelections[]={};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"ca\wheeled_d_baf\Data\Jackal_adds.rvmat",
				"ca\wheeled_d_baf\Data\Jackal_adds_damage.rvmat",
				"ca\wheeled_d_baf\Data\Jackal_adds_destruct.rvmat",
				"ca\wheeled_d_baf\Data\Jackal_base.rvmat",
				"ca\wheeled_d_baf\Data\Jackal_base_damage.rvmat",
				"ca\wheeled_d_baf\Data\Jackal_base_destruct.rvmat",
				"ca\wheeled_d_baf\Data\Jackal_mount.rvmat",
				"ca\wheeled_d_baf\Data\Jackal_mount_damage.rvmat",
				"ca\wheeled_d_baf\Data\Jackal_mount_destruct.rvmat"
			};
		};
		transportMaxMagazines=90;
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine="30Rnd_556x45_Stanag";
				count=10;
			};
			class _xx_5Rnd_86x70_L115A1
			{
				magazine="5Rnd_86x70_L115A1";
				count=6;
			};
			class _xx_200Rnd_556x45_L110A1
			{
				magazine="200Rnd_556x45_L110A1";
				count=2;
			};
			class _xx_1Rnd_HE_M203
			{
				magazine="1Rnd_HE_M203";
				count=3;
			};
			class _xx_BAF_L109A1_HE
			{
				magazine="BAF_L109A1_HE";
				count=5;
			};
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=1;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=1;
			};
			class _xx_SmokeShellYellow
			{
				magazine="SmokeShellYellow";
				count=1;
			};
			class _xx_SmokeShellPurple
			{
				magazine="SmokeShellPurple";
				count=1;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_IR_Strobe_Marker
			{
				magazine="IR_Strobe_Marker";
				count=2;
			};
		};
	};
	class BAF_Jackal2_L2A1_D: BAF_Jackal2_BASE_D
	{
		scope=2;
		model="ca\wheeled_d_baf\Jackal_L2A1_BAF";
		displayname="$STR_BAF_CFGVEHICLES_BAF_JACKAL2_L2A1_D0";
		class Library
		{
			libTextDesc="$STR_BAF_CFGVEHICLES_BAF_JACKAL2_L2A1_D_LIBRARY0";
		};
		Picture="\Ca\wheeled_d_baf\Data\UI\Picture_Jackal_L2A1_CA.paa";
		Icon="\Ca\wheeled_d_baf\Data\UI\Icon_Jackal_L2A1_CA.paa";
		class Turrets: Turrets
		{
			class M420_Turret: M420_Turret
			{
			};
			class M2_Turret: MainTurret
			{
				body="mainTurret";
				gun="mainGun";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				turretInfoType="RscWeaponZeroing";
				discreteDistance[]={100,200,300,400,500,600,800,1000,1200,1500};
				discreteDistanceInitIndex=2;
				gunnerForceOptics=0;
				gunnerOutOpticsShowCursor=0;
				weapons[]=
				{
					"BAF_L2A1"
				};
				minElev=-25;
				maxElev=40;
				soundServo[]=
				{
					"\ca\wheeled\Data\Sound\servo3",
					1e-006,
					1
				};
				magazines[]=
				{
					"100Rnd_127x99_M2",
					"100Rnd_127x99_M2",
					"100Rnd_127x99_M2",
					"100Rnd_127x99_M2",
					"100Rnd_127x99_M2",
					"100Rnd_127x99_M2"
				};
				gunnerAction="Jackal_gunner_L2A1_BAF";
				ejectDeadGunner=0;
				castGunnerShadow=1;
				stabilizedInAxes="StabilizedInAxesNone";
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				memoryPointGunnerOptics="gunnerview";
				optics=1;
				gunnerOpticsModel="ca\Weapons_baf\ACOG_optic";
				class ViewOptics
				{
					visionMode[]=
					{
						"Normal"
					};
					minElev=-25;
					maxElev=40;
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.0623;
					minFov=0.0623;
					maxFov=0.0623;
				};
				class GunFire: WeaponCloudsMGun
				{
					interval=0.0099999998;
				};
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
			};
		};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source="reload";
				weapon="BAF_L2A1";
			};
			class ReloadMagazine
			{
				source="reloadmagazine";
				weapon="BAF_L2A1";
			};
			class Revolving
			{
				source="revolving";
				weapon="BAF_L2A1";
			};
		};
	};
	class BAF_Jackal2_GMG_D: BAF_Jackal2_BASE_D
	{
		scope=2;
		model="ca\wheeled_d_baf\Jackal_GMG_BAF";
		displayname="$STR_BAF_CFGVEHICLES_BAF_JACKAL2_GMG_D0";
		class Library
		{
			libTextDesc="$STR_BAF_CFGVEHICLES_BAF_JACKAL2_GMG_D_LIBRARY0";
		};
		Picture="\Ca\wheeled_d_baf\Data\UI\Picture_Jackal_GMG_CA.paa";
		Icon="\Ca\wheeled_d_baf\Data\UI\Icon_Jackal_GMG_ca.paa";
		class Turrets: Turrets
		{
			class M420_Turret: M420_Turret
			{
			};
			class GMG_Turret: MainTurret
			{
				body="mainTurret";
				gun="mainGun";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				turretInfoType="RscWeaponZeroing";
				discreteDistance[]={100,200,300,400,600,800,1000,1200,1500,1800};
				discreteDistanceInitIndex=3;
				gunnerForceOptics=0;
				gunnerOutOpticsShowCursor=0;
				minElev=-25;
				maxElev=40;
				soundServo[]=
				{
					"\ca\wheeled\Data\Sound\servo3",
					1e-006,
					1
				};
				weapons[]=
				{
					"BAF_GMG"
				};
				magazines[]=
				{
					"48Rnd_40mm_MK19",
					"48Rnd_40mm_MK19",
					"48Rnd_40mm_MK19",
					"48Rnd_40mm_MK19",
					"48Rnd_40mm_MK19",
					"48Rnd_40mm_MK19"
				};
				gunnerAction="Jackal_gunner_GMG_BAF";
				ejectDeadGunner=0;
				castGunnerShadow=1;
				stabilizedInAxes="StabilizedInAxesNone";
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				class GunFire: WeaponCloudsMGun
				{
					interval=0.0099999998;
				};
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
				memoryPointGunnerOptics="gunnerview";
				optics=1;
				gunnerOpticsModel="\ca\Weapons_baf\nlaw_optic";
				displayName="";
				class ViewOptics
				{
					visionMode[]=
					{
						"Normal"
					};
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.0623;
					minFov=0.0623;
					maxFov=0.0623;
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source="reload";
				weapon="BAF_GMG";
			};
			class ReloadMagazine
			{
				source="reloadmagazine";
				weapon="BAF_GMG";
			};
			class Revolving
			{
				source="revolving";
				weapon="BAF_GMG";
			};
		};
	};
};
