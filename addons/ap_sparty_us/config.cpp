class CfgPatches 
{

	class spartilleryus
	{
		units[]=
		{
			"M1129_MC_D",
			"M1129_MC_G",
			"M108",
			"M108_D",
			"M108_W"
		};
		requiredVersion=1;
		requiredAddons[]=
		{
			"CAData",
			"CACharacters",
			"CACharacters2",
			"CAWeapons",
			"CASounds",
			"CATracked",
			"Extended_Eventhandlers",
			"CAWeapons_E",
			"ace_sys_vehicledamage",
			"ace_sys_arty",
			"ace_sys_arty_m119",
			"ace_c_vehicle"
		};
	};
};
class WeaponCloudsMGun;
class CfgVehicles
{
	class All
	{
		class AnimationSources;
	};
	class AllVehicles: All
	{
		class NewTurret;
	};
	class Land: AllVehicles
	{
	};
	class LandVehicle: Land
	{
		class ViewOptics;
		class ViewPilot;
		class HeadLimits;
		class Sounds;
	};
	class Tank: LandVehicle
	{
		class Animationsources;
		class ViewGunner;
		class HitPoints;
		class ViewOptics;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewGunner;
				class Turrets
				{
					class CommanderOptics: NewTurret
					{
					};
				};
			};
		};
		transportMaxMagazines=9999;
		transportMaxWeapons=9999;
		radarType=0;
	};
	class Tracked_APC: tank
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class HeadLimits;
		class HitPoints;
	};
	class Car: LandVehicle
	{
		class HitPoints;
		class AnimationSources;
		class Turrets
		{
			class MainTurret: NewTurret
			{
			};
		};
	};
	class Wheeled_APC: Car
	{
	};
	class StrykerBase_EP1: Wheeled_APC
	{
		class ViewOptics: ViewOptics
		{
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
		};
	};
	class M1126_ICV_BASE_EP1: StrykerBase_EP1
	{
		class Turrets: Turrets
		{
			class ObsTurret: NewTurret
			{
			};
		};
		class AnimationSources: AnimationSources
		{
		};
	};
	class M1126_ICV_mk19_EP1: M1126_ICV_BASE_EP1
	{
		class Turrets: Turrets
		{
		};
	};
	class M1129_MC_EP1: M1126_ICV_mk19_EP1
	{
		scope=1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
			class ObsTurret: ObsTurret
			{
			};
		};
	};
	class M1129_MC_D: M1129_MC_EP1
	{
		vehicleClass="SPArtillery_AP";
		model = "\SPArtilleryUS\m1129\M1129_MC.p3d";
		picture = "\Ca\wheeled_e\data\UI\Picture_stryker_mc_CA.paa";
		Icon = "\Ca\wheeled_e\data\UI\Icon_stryker_mc_CA.paa";
		scope=2;
		displayname="$STR_NAME_M1129_D";
		displaynameShort="$STR_SNAME_M1129_D";
		
		transportSoldier=0;
		threat[]={1,0.30000001,0};
		ARTY_IsArtyVehicle=0;

		ace_era=0;
		ace_minimalhit[]={18,40};
		ace_p_detonation_engine=0;
		ace_p_detonation_hull=0;
		ace_p_detonation_turret=0.2;
		ace_p_fire_engine=0.80000001;
		ace_p_fire_hull=0.80000001;
		ace_p_fire_turret=0.5;
		ace_p_firedetonation=0.5;
		ace_sys_nvg_nvrange=290;
		ace_sa_elev_unit = "mil";
		ace_sa_TE_enabled = 1;
		ace_sa_table_elev[]=
		{
		};
		ace_sys_turret_indicator_enable=0;
		
		viewDriverInExternal = 1;
		class Library
		{
			libTextDesc="$STR_lib_M1129";
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				maxVerticalRotSpeed= 0.2;
				maxHorizontalRotSpeed= 0.2;
				primaryGunner = 1;
				proxyIndex = 2;
				outGunnerMayFire = 1;
				gunnerForceOptics = 0;
				viewGunnerInExternal = 1;
				gunnerAction="TOW_Gunner";
				gunnerInAction="TOW_Gunner";
				weapons[]=
				{
					"M120_AP"
				};
				magazines[]=
				{
					"30Rnd_120mmHE_M120",
					"30Rnd_120mmHE_M120"
				};
			};
			class ObsTurret: ObsTurret
			{
				viewGunnerInExternal = 1;
				weapons[]=
				{
					"ACE_MK19",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"48Rnd_40mm_MK19",
					"48Rnd_40mm_MK19",
					"48Rnd_40mm_MK19",
					"48Rnd_40mm_MK19",
					"48Rnd_40mm_MK19",
					"SmokeLauncherMag",
					"SmokeLauncherMag"
				};
				class GunFire: WeaponCloudsMGun
				{
					interval=0.0099999998;
				};
			};
		};
		HiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo02"
		};
		HiddenSelectionsTextures[]=
		{
			"ca\wheeled_e\stryker\data\stryker_body1_mortar_des_co.paa",
			"ca\wheeled_e\stryker\data\stryker_body2_des_co.paa",
			"ca\wheeled_e\stryker\data\icv_des_co.paa"
		};
	};
	class M1129_MC_G: M1129_MC_D
	{
		displayname="$STR_NAME_M1129_G";
		displaynameShort="$STR_SNAME_M1129_G";
		HiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo02"
		};
		HiddenSelectionsTextures[]=
		{
			"SPArtilleryUS\m1129\data\stryker_body1_co.paa",
			"SPArtilleryUS\m1129\data\stryker_body2_co.paa",
			"SPArtilleryUS\m1129\data\icv_co.paa"
		};
	};
	class M108: Tracked_APC
	{
		ace_camshake_enabled=1;
		ace_armor_hull[]=
		{
			{20,20},
			{20,20},
			{20,20},
			{17,17},
			{17,17},
			{17,17}
		};
		ace_armor_turret[]=
		{
			{32,32},
			{28,28},
			{28,28},
			{20,20},
			{20,20}
		};

		ace_era=0;
		ace_minimalhit[]={18,40};
		ace_p_detonation_engine=0;
		ace_p_detonation_hull=0;
		ace_p_detonation_turret=0.2;
		ace_p_fire_engine=0.80000001;
		ace_p_fire_hull=0.80000001;
		ace_p_fire_turret=0.5;
		ace_p_firedetonation=0.5;
		ace_sys_nvg_nvrange=290;
		ace_sa_elev_unit="mil";
		ace_sa_te_enabled=1;
		
		ace_sys_turret_indicator_enable=0;
		ace_sys_reticles_gunneroptics=1;
		ace_sys_reticles_gunnersight="T176E3_M103";
		armor=120;
		armorcrash0[]=
		{
			"Ca\sounds\Vehicles\Crash\tank_vehicle_01",
			0.707946,
			1,
			150
		};
		armorcrash1[]=
		{
			"Ca\sounds\Vehicles\Crash\tank_vehicle_02",
			0.707946,
			1,
			150
		};
		armorcrash2[]=
		{
			"Ca\sounds\Vehicles\Crash\tank_vehicle_03",
			0.707946,
			1,
			150
		};
		armorcrash3[]=
		{
			"Ca\sounds\Vehicles\Crash\tank_vehicle_04",
			0.707946,
			1,
			150
		};
		armorstructural=3;
		brakedistance=9;
		buildcrash0[]=
		{
			"Ca\sounds\Vehicles\Crash\tank_building_01",
			0.707946,
			1,
			150
		};
		buildcrash1[]=
		{
			"Ca\sounds\Vehicles\Crash\tank_building_02",
			0.707946,
			1,
			150
		};
		buildcrash2[]=
		{
			"Ca\sounds\Vehicles\Crash\tank_building_03",
			0.707946,
			1,
			150
		};
		buildcrash3[]=
		{
			"Ca\sounds\Vehicles\Crash\tank_building_04",
			0.707946,
			1,
			150
		};
		commandercansee="1+2+4+8+16";
		cost="1.5e+006";
		damperSize=0.1;
		damperForce=3;
		faction="USMC";
		scope=2;
		crew="USMC_Soldier_Crew";
		side=1;
		icon="SPArtilleryUS\m108\data\icomap_m108_ca.paa";
		picture="SPArtilleryUS\m108\data\picture_m108_ca.paa";
		model="SPArtilleryUS\m108\m108.p3d";
		memorypointsgetincargo="pos gunner";
		memorypointsgetincargodir="pos gunner dir";
		displayname="$STR_NAME_M108";
		displaynameShort="$STR_NAME_M108";
		namesound="veh_Tank";
		maxSpeed=62;
		canFloat=0;
		hiddenSelections[]=
		{
			"camo01",
			"camo02",
			"camo03",
			"camo04"
		};
		hiddenSelectionsTextures[]=
		{
			"SPArtilleryUS\m108\data\m108.paa",
			"ca\tracked\data\m1abrams_01_co.paa",
			"ca\tracked\data\m1abrams_02_co.paa",
			"ca\tracked\data\m1abrams_02_co.paa"
		};
		hasCommander=1;
		typicalCargo[]=
		{
			"USMC_Soldier_Crew,USMC_Soldier_Crew,USMC_Soldier_Crew"
		};
		driverAction = "Abrams_Driverout";
		driverInAction = "Abrams_Driver";
		getInAction = "GetInMedium";
		getOutAction = "GetOutMedium";
		driverForceOptics=1;
		forceHideDriver=1;
		outsidesoundfilter=1;
		driverCompartments=0;
		soundarmorcrash[]=
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
		soundbuildingcrash[]=
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
		soundengineoffext[]=
		{
			"ca\sounds\vehicles\Tracked\M1A1\ext\ext-engine_off",
			1,
			0.80000001,
			500
		};
		soundengineoffint[]=
		{
			"ca\sounds\vehicles\Tracked\M1A1\int\ext-engine_off",
			1,
			1
		};
		soundengineonext[]=
		{
			"ca\SOUNDS\Vehicles\Tracked\M1A1\ext\ext-engine_on",
			2.5118899,
			1,
			500
		};
		soundengineonint[]=
		{
			"ca\sounds\Vehicles\Tracked\M1A1\int\ext-engine_on",
			1,
			1
		};
		soundgear[]=
		{
			"",
			"5.62341e-005",
			1
		};
		soundgetin[]=
		{
			"ca\SOUNDS\Vehicles\Tracked\M1A1\int\ext-m1-door-1",
			0.56234097,
			1
		};
		soundgetout[]=
		{
			"ca\SOUNDS\Vehicles\Tracked\M1A1\ext\ext-m1-door-1",
			0.56234097,
			1,
			60
		};
		soundwoodcrash[]=
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
		woodcrash0[]=
		{
			"Ca\sounds\Vehicles\Crash\tank_wood_01",
			0.707946,
			1,
			150
		};
		woodcrash1[]=
		{
			"Ca\sounds\Vehicles\Crash\tank_wood_02",
			0.707946,
			1,
			150
		};
		woodcrash2[]=
		{
			"Ca\sounds\Vehicles\Crash\tank_wood_03",
			0.707946,
			1,
			150
		};
		woodcrash3[]=
		{
			"Ca\sounds\Vehicles\Crash\tank_wood_04",
			0.707946,
			1,
			150
		};
		vehicleClass="SPArtillery_AP";
		supplyradius=1.7;
		threat[]={0.89999998,0.89999998,0.69999999};
		tracksspeed=2;
		transportammo=0;
		transportmaxbackpacks=9999;
		transportmaxmagazines=9999;
		transportmaxweapons=9999;
		class Library
		{
			libTextDesc="$STR_lib_M108";
		};
		class Exhausts
		{
			class Exhaust1
			{
				direction="vyfuk konec";
				effect="ExhaustsEffectBig";
				position="vyfuk start";
			};
		};
		class Reflectors
		{
			class LeftLight
			{
				color[]={0.80000001,0.80000001,1,1};
				ambient[]={0.07,0.07,0.07,1};
				position="L svetlo";
				direction="konec L svetla";
				hitpoint="L svetlo";
				selection="L svetlo";
				size=1;
				brightness=1;
			};
			class RightLight: LeftLight
			{
				position="P svetlo";
				direction="konec P svetla";
				hitpoint="P svetlo";
				selection="P svetlo";
			};
			class GunnerLight: LeftLight
			{
				position="gunner light";
				direction="konec gunner light";
				hitpoint="gunner light";
				selection="gunner light";
			};
		};
		aggregateReflectors[]=
		{
			
			{
				"GunnerLight"
			},
			
			{
				"LeftLight",
				"RightLight"
			}
		};
		class SoundEvents
		{
			class AccelerationIn
			{
				expression="engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
				limit=0.15000001;
				sound[]=
				{
					"ca\Sounds_E\Tracked_E\BVP2\BVP2_int_acceleration1",
					1.77828,
					1
				};
			};
			class AccelerationOut
			{
				expression="engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
				limit=0.15000001;
				sound[]=
				{
					"ca\Sounds_E\Tracked_E\BVP2\BVP2_ext_acceleration1",
					1.77828,
					1,
					650
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class recoil_source
			{
				source="reload";
				weapon="M103";
			};
		};
		class HitPoints: HitPoints
		{
			class HitLTrack
			{
				armor=0.60000002;
				material=1;
				name="pas_L";
				passthrough=0.80000001;
				visual="pasoffsetl";
			};
			class HitRTrack
			{
				armor=0.60000002;
				material=1;
				name="pas_P";
				passthrough=0.80000001;
				visual="pasoffsetp";
			};
			class HitEngine
			{
				armor=2;
				material=1;
				name="motor";
				passthrough=1;
				visual="telo";
			};
			class HitHull
			{
				armor=0.60000002;
				material=1;
				name="telo";
				passthrough=0.5;
				visual="telo";
			};
		};
		class Sounds
		{
			class Engine
			{
				frequency="(randomizer*0.05+0.8)*rpm";
				sound[]=
				{
					"ca\Sounds_E\Tracked_E\BVP2\BVP2_ext_high",
					1.77828,
					1,
					600
				};
				volume="engineOn*camPos*(rpm factor[0.3, 0.9])";
			};
			class IdleOut
			{
				frequency=1;
				sound[]=
				{
					"ca\Sounds_E\Tracked_E\BVP2\BVP2_ext_idle",
					0.56234097,
					1,
					300
				};
				volume="engineOn*camPos*(rpm factor[0.6, 0.15])";
			};
			class NoiseOut
			{
				frequency=1;
				sound[]=
				{
					"ca\sounds\Vehicles\Tracked\M1A1\ext\noise2",
					1,
					1,
					150
				};
				volume="camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsOutH0
			{
				frequency=1;
				sound[]=
				{
					"ca\Sounds_E\Tracked_E\Treads\ext_treads_hard_01",
					1,
					1,
					200
				};
				volume="engineOn*camPos*(1-grass)*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsOutH1
			{
				frequency=1;
				sound[]=
				{
					"ca\Sounds_E\Tracked_E\Treads\ext_treads_hard_02",
					1,
					1,
					200
				};
				volume="engineOn*camPos*(1-grass)*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsOutH2
			{
				frequency=1;
				sound[]=
				{
					"ca\Sounds_E\Tracked_E\Treads\ext_treads_hard_03",
					1,
					1,
					200
				};
				volume="engineOn*camPos*(1-grass)*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsOutH3
			{
				frequency=1;
				sound[]=
				{
					"ca\Sounds_E\Tracked_E\Treads\ext_treads_hard_04",
					1,
					1,
					200
				};
				volume="engineOn*camPos*(1-grass)*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsOutH4
			{
				frequency=1;
				sound[]=
				{
					"ca\Sounds_E\Tracked_E\Treads\ext_treads_hard_05",
					1,
					1,
					200
				};
				volume="engineOn*camPos*(1-grass)*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
			class ThreadsOutS0
			{
				frequency=1;
				sound[]=
				{
					"ca\Sounds_E\Tracked_E\Treads\ext_treads_soft_01",
					1,
					1,
					200
				};
				volume="engineOn*camPos*grass*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsOutS1
			{
				frequency=1;
				sound[]=
				{
					"ca\Sounds_E\Tracked_E\Treads\ext_treads_soft_02",
					1,
					1,
					200
				};
				volume="engineOn*camPos*grass*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsOutS2
			{
				frequency=1;
				sound[]=
				{
					"ca\Sounds_E\Tracked_E\Treads\ext_treads_soft_03",
					1,
					1,
					200
				};
				volume="engineOn*camPos*grass*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsOutS3
			{
				frequency=1;
				sound[]=
				{
					"ca\Sounds_E\Tracked_E\Treads\ext_treads_soft_04",
					1,
					1,
					200
				};
				volume="engineOn*camPos*grass*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsOutS4
			{
				frequency=1;
				sound[]=
				{
					"ca\Sounds_E\Tracked_E\Treads\ext_treads_soft_05",
					1,
					1,
					200
				};
				volume="engineOn*camPos*grass*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
			class Movement
			{
				frequency=0;
				sound[]=
				{
					"",
					1,
					1
				};
				volume=0;
			};
			class EngineIn
			{
				frequency="(randomizer*0.05+0.8)*rpm";
				sound[]=
				{
					"ca\Sounds_E\Tracked_E\BVP2\BVP2_ext_high",
					1,
					1
				};
				volume="engineOn*(1-camPos)*(rpm factor[0.3, 0.9])";
			};
			class IdleIn
			{
				frequency=1;
				sound[]=
				{
					"ca\Sounds_E\Tracked_E\BVP2\BVP2_ext_idle",
					1.77828,
					1
				};
				volume="engineOn*(1-camPos)*(rpm factor[0.6, 0.15])";
			};
			class NoiseIn
			{
				frequency=1;
				sound[]=
				{
					"ca\sounds\Vehicles\Tracked\M1A1\int\noise2",
					0.158489,
					1
				};
				volume="(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsInH0
			{
				frequency=1;
				sound[]=
				{
					"ca\Sounds_E\Tracked_E\Treads\int_treads_hard_01",
					0.177828,
					1
				};
				volume="engineOn*(1-camPos)*(1-grass)*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsInH1
			{
				frequency=1;
				sound[]=
				{
					"ca\Sounds_E\Tracked_E\Treads\int_treads_hard_02",
					0.177828,
					1
				};
				volume="engineOn*(1-camPos)*(1-grass)*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsInH2
			{
				frequency=1;
				sound[]=
				{
					"ca\Sounds_E\Tracked_E\Treads\int_treads_hard_03",
					0.177828,
					1
				};
				volume="engineOn*(1-camPos)*(1-grass)*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsInH3
			{
				frequency=1;
				sound[]=
				{
					"ca\Sounds_E\Tracked_E\Treads\int_treads_hard_04",
					0.177828,
					1
				};
				volume="engineOn*(1-camPos)*(1-grass)*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsInH4
			{
				frequency=1;
				sound[]=
				{
					"ca\Sounds_E\Tracked_E\Treads\int_treads_hard_05",
					0.177828,
					1
				};
				volume="engineOn*(1-camPos)*(1-grass)*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
			class ThreadsInS0
			{
				frequency=1;
				sound[]=
				{
					"ca\Sounds_E\Tracked_E\Treads\int_treads_soft_01",
					0.177828,
					1
				};
				volume="engineOn*(1-camPos)*grass*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsInS1
			{
				frequency=1;
				sound[]=
				{
					"ca\Sounds_E\Tracked_E\Treads\int_treads_soft_02",
					0.177828,
					1
				};
				volume="engineOn*(1-camPos)*grass*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsInS2
			{
				frequency=1;
				sound[]=
				{
					"ca\Sounds_E\Tracked_E\Treads\int_treads_soft_03",
					0.177828,
					1
				};
				volume="engineOn*(1-camPos)*grass*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsInS3
			{
				frequency=1;
				sound[]=
				{
					"ca\Sounds_E\Tracked_E\Treads\int_treads_soft_04",
					0.177828,
					1
				};
				volume="engineOn*(1-camPos)*grass*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsInS4
			{
				frequency=1;
				sound[]=
				{
					"ca\Sounds_E\Tracked_E\Treads\int_treads_soft_05",
					0.177828,
					1
				};
				volume="engineOn*(1-camPos)*grass*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				maxVerticalRotSpeed= 0.2;
				maxHorizontalRotSpeed= 0.2;
				body="OtocVez";
				gun="OtocHlaven";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				animationSourceHatch="poklop_gun";
				weapons[]=
				{
					"M103"
				};
				magazines[]=
				{
					"30Rnd_105mmHE_M103",
					"30Rnd_105mmHE_M103",
					"10Rnd_105mmAPC_M103"
				};
				soundservo[]=
				{
					"\ca\sounds\vehicles\servos\turret-1",
					0.0099999998,
					1,
					10
				};
				minElev=-3;
				maxElev=75;
				memoryPointGun="kulas";
				memoryPointGunnerOptics="gunnerview";
				gunnerAction="Abrams_Gunner";
				gunnerInAction="Abrams_Gunner";
				gunnerGetInAction="GetInMedium";
				gunnerGetOutAction="GetOutMedium";
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				forceHideGunner=1;
				gunnerOpticsModel="\x\ace\addons\m_veh_optics\pp61";
				gunnerForceOptics=1;
				primary="true";
				primaryGunner="true";
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
				class ViewGunner
				{
					initAngleX=5;
					minAngleX=-65;
					maxAngleX=85;
					initAngleY=0;
					minAngleY=-150;
					maxAngleY=150;
					initFov=0.69999999;
					minFov=0.25;
					maxFov=1.1;
				};
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=60;
					initAngleY=0;
					minAngleY=0;
					maxAngleY=0;
					initFov="0.33333 / 2.6";
					minFov="0.33333 / 2.6";
					maxFov="0.33333 / 2.6";
				};
				class OpticsIn
				{
					class Wide
					{
						gunnerOpticsModel="\x\ace\addons\m_veh_optics\optics_empty";
						initanglex=0;
						initangley=0;
						initfov="0.33333/ 1";
						maxanglex=30;
						maxangley=100;
						maxfov="0.33333/ 1";
						minanglex=-30;
						minangley=-100;
						minfov="0.33333/ 1";
						visionMode[]=
						{
							"Normal"
						};
						thermalMode[]={0};
					};
					class Medium: Wide
					{
						initfov="0.33333/ 5";
						maxfov="0.33333/ 5";
						minfov="0.33333/ 5";
					};
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[]=
						{
							"M2"
						};
						magazines[]=
						{
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
						body="OtocVez_2";
						gun="OtocHlaven_2";
						animationSourceBody="Turret_2";
						animationSourceGun="Gun_2";
						animationSourceHatch="hatchCommander";
						selectionFireAnim="zasleh";
						memoryPointGunnerOptics="gunnerview_2_IN";
						memoryPointGunneroutOptics="commanderview";
						gunBeg="usti hlavne_2";
						gunEnd="konec hlavne_2";
						minTurn=-360;
						maxTurn=360;
						initTurn=0;
						outGunnerMayFire=1;
						inGunnerMayFire=0;
						gunnerForceOptics=1;
						gunnerAction="Abrams_CommanderOut";
						gunnerInAction="Abrams_Commander";
						gunnerOpticsModel="\ca\Tracked\optika_M1A1_commander";
						gunnerOutOpticsModel="\ca\Weapons\optika_empty";
						class ViewGunner
						{
							initAngleX=5;
							minAngleX=-65;
							maxAngleX=85;
							initAngleY=0;
							minAngleY=-150;
							maxAngleY=150;
							initFov=0.69999999;
							minFov=0.25;
							maxFov=1.1;
						};
						class ViewOptics
						{
							initAngleX=5;
							minAngleX=-65;
							maxAngleX=85;
							initAngleY=0;
							minAngleY=-150;
							maxAngleY=150;
							initFov=0.69999999;
							minFov=0.25;
							maxFov=0.69999999;
						};
					};
				};
				class HitPoints: HitPoints
				{
					class HitTurret
					{
						armor=0.80000001;
						material=1;
						name="otocvez";
						visual="otocvez";
						passThrough=1;
					};
					class HitGun
					{
						armor=0.80000001;
						material=1;
						name="otochlaven";
						visual="otochlaven";
						passThrough=0;
					};
				};
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"SPArtilleryUS\m108\data\m108.rvmat",
				"SPArtilleryUS\m108\data\m108_damage.rvmat",
				"SPArtilleryUS\m108\data\m108_destruct.rvmat",
				"CA\tracked_e\M1_Abrams\Data\m1_abrams_01_metal.rvmat",
				"CA\tracked_e\M1_Abrams\Data\m1_abrams_01_metal_damage.rvmat",
				"CA\tracked_e\M1_Abrams\Data\m1_abrams_01_metal_destruct.rvmat",
				"CA\tracked_e\M1_Abrams\Data\m1_abrams_02_metal.rvmat",
				"CA\tracked_e\M1_Abrams\Data\m1_abrams_02_metal_damage.rvmat",
				"CA\tracked_e\M1_Abrams\Data\m1_abrams_02_metal_destruct.rvmat",
				"CA\tracked_e\M1_Abrams\Data\m1_abrams_03_metal.rvmat",
				"CA\tracked_e\M1_Abrams\Data\m1_abrams_03_metal_damage.rvmat",
				"CA\tracked_e\M1_Abrams\Data\m1_abrams_03_metal_destruct.rvmat"
			};
		};
	};
	class M108_D: M108
	{
		displayname="$STR_NAME_M108_D";
		displaynameShort="$STR_NAME_M108_D";
		hiddenSelections[]=
		{
			"camo01",
			"camo02",
			"camo03",
			"camo04"
		};
		hiddenSelectionsTextures[]=
		{
			"SPArtilleryUS\m108\data\m108_D.paa",
			"CA\tracked_e\M1_Abrams\Data\m1abrams_01_desert_co.paa",
			"CA\tracked_e\M1_Abrams\Data\m1abrams_02_desert_co.paa",
			"CA\tracked_e\M1_Abrams\Data\m1abrams_03_desert_co.paa"
		};
	};
	class M108_W: M108
	{
		displayname="$STR_NAME_M108_W";
		displaynameShort="$STR_NAME_M108_W";
		hiddenSelections[]=
		{
			"camo01",
			"camo02",
			"camo03",
			"camo04"
		};
		hiddenSelectionsTextures[]=
		{
			"SPArtilleryUS\m108\data\m108_W.paa",
			"ca\tracked\data\m1abrams_01_co.paa",
			"ca\tracked\data\m1abrams_02_co.paa",
			"ca\tracked\data\m1abrams_03_co.paa"
		};
	};	
};

class CfGWeapons 
{

	class M119;
	class M120_AP: M119
	{
		ace_sa_elev_unit = "mil";
		ace_sa_TE_enabled = 1;
		autoReload = 1;
		displayName="120-mm";
		dispersion=0.0094999997;
		magazines[] =
			{
			"30Rnd_120mmHE_M120",
			"30Rnd_120mmSMOKE_M120"
			};
		sound[] = {"\Ca\sounds\Weapons\cannon\mortar1_fire", 22.3872, 1, 500};
		soundServo[] = {"", 0.0001, 1};
	};
	class M103: M119
	{
		ace_sa_elev_unit = "mil";
		ace_sa_TE_enabled = 1;
		autoReload = 1;
		displayName="105-mm";
		dispersion=0.0094999997;
		magazines[] =
			{
			"30Rnd_105mmHE_M103",
			"30Rnd_105mmSMOKE_M103",
			"10Rnd_105mmAPC_M103"
			};
		sound[] = {"\Ca\sounds\Weapons\cannon\mortar1_fire", 22.3872, 1, 500};
		soundServo[] = {"", 0.0001, 1};
	};
};

class CfgAmmo
{
	class Sh_105_HE;
	class Sh_105_WP;
	class Sh_105_SADARM;
	class M120_Sh_120_HE: Sh_105_HE
	{
		CraterEffects="ArtyShellCrater";
		ExplosionEffects="ARTY_ShellExplosionLarge";
		explosive=0.69999999;
		hit=380;
		whistleDist=60;
		timeToLive = 120;
	};
	class M120_Sh_120_SMOKE: Sh_105_WP
	{
		ARTY_DeployOnImpact = "ace_arty_WPExplosion";
		CraterEffects = "ExploAmmoCrater";
		ExplosionEffects = "WPExplosion";
		explosive = 0.3;
		hit = 10;
		indirecthit = 5;
		indirecthitrange = 2.52;
		soundHit[] = {"\ca\weapons\data\sound\explosion\grenade_new1", 3.16228, 1};
		whistleDist = 60;
		timeToLive = 120;
	};
	class M103_Sh_105_HE: Sh_105_HE
	{
		CraterEffects="ArtyShellCrater";
		ExplosionEffects="ARTY_ShellExplosionLarge";
		explosive=0.69999999;
		hit=300;
		whistleDist=60;
		timeToLive = 23;
	};
	class M103_Sh_105_SMOKE: Sh_105_WP
	{
		ARTY_DeployOnImpact = "ace_arty_WPExplosion";
		CraterEffects = "ExploAmmoCrater";
		ExplosionEffects = "WPExplosion";
		explosive = 0.3;
		hit = 10;
		indirecthit = 5;
		indirecthitrange = 2.52;
		soundHit[] = {"\ca\weapons\data\sound\explosion\grenade_new1", 3.16228, 1};
		whistleDist = 60;
		timeToLive = 23;
	};
	class M103_Sh_105_APC: Sh_105_SADARM
	{
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ace_pfx_ammo_apfsds_120mm";
		caliber=18;
		explosive=0;
		deflecting=0;
		hit=600;
		indirectHit = 0;
		indirectHitRange = 0.1;
		timeToLive = 23;
		tracerEndTime = 4;
		tracerScale = 4;
		tracerStartTime = 0.1;
		whistleDist = 0;
		whistleOnFire = 0;
		ace_caliber = 100;
		ace_heat = 1;
		ace_hit_distance = 1000;
		ace_incendiary = 1;
		ace_mass = 10;
	};
};
class CfgMagazines
{
	class 30Rnd_105mmHE_M119;
	class 30Rnd_105mmWP_M119;
	class 30Rnd_105mmSADARM_M119;
	class 30Rnd_120mmHE_M120: 30Rnd_105mmHE_M119 // M1129 str
	{
		ammo="M120_Sh_120_HE";
		displayName="HE-M0647A1";
		displayNameShort="HE";
		count=30;
	};
	class 30Rnd_120mmSMOKE_M120: 30Rnd_105mmWP_M119 // M1129 str
	{
		ammo="M120_Sh_120_SMOKE";
		displayName="SM-M0227A1";
		displayNameShort="SMOKE";
		count=30;
	};

	class 30Rnd_105mmHE_M103: 30Rnd_105mmHE_M119 // M108
	{
		ammo="M103_Sh_105_HE";
		displayName="HE-M0647A1";
		displayNameShort="HE";
		count=30;
		initSpeed=690;
	};
	class 30Rnd_105mmSMOKE_M103: 30Rnd_105mmWP_M119 // M108
	{
		ammo="M103_Sh_105_SMOKE";
		displayName="SM-M0227A1";
		displayNameShort="SMOKE";
		initSpeed=690;
		count=30;
	};
	class 10Rnd_105mmAPC_M103: 30Rnd_105mmSADARM_M119 // M108
	{
		ammo="M103_Sh_105_APC";
		displayName="AP-M0667A1";
		displayNameShort="AP";
		initSpeed=726;
		count=10;
	};
};
class ACE_Config
{
	class cfgVehicleOpticsReticles
	{
		class T176E3_M103
		{
			ace_sys_reticles_checkweapon="M103";
			ace_sys_reticles_fov0="0.33333/4";
			ace_sys_reticles_horizshift=0;
			ace_sys_reticles_illum=1;
			ace_sys_reticles_illumcolor[]={0.74119997,0,0,1};
			ace_sys_reticles_pxmil=12;
			ace_sys_reticles_texmap=1;
			ace_sys_reticles_texreticle="\SPArtilleryUS\m108\data\mark.paa";
			ace_sys_reticles_texsize=4096;
			ace_sys_reticles_texstatic="\SPArtilleryUS\m108\data\T176E3.paa";
		};
	};
};