class CfgPatches
{
	class spartillery
	{
		units[]=
		{
			"2S1",
			"2S1_desert",
			"2S1_wood",
			"2S1_TKA",
			"2S9",
			"2S9_VDV",
			"2S9_desert",
			"2S9_desert_VDV"
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
class CfgVehicleClasses
{
	class SPArtillery_AP
	{
		displayName="$STR_SNAME_SPA";
	};
};
class Turrets;
class MainTurret;
class NewTurret;
class CommanderOptics;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class CfgVehicles
{
	class tank;
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
	class 2S1: Tracked_APC
	{
		ace_camshake_enabled=1;
		ace_armor_hull[]=
		{
			{15,15},
			{10,10},
			{10,10},
			{10,10},
			{10,10},
			{10,10}
		};
		ace_armor_turret[]=
		{
			{23,23},
			{19,19},
			{19,19},
			{13,13},
			{6,6}
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
		ace_sys_reticles_gunnersight="OP5_38_2A31";
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
		faction="RU";
		scope=2;
		crew="RU_Soldier_Crew";
		side=0;
		picture="SPArtillery\2s1\data\picture_2S1_ca.paa";
		Icon="SPArtillery\2s1\data\icomap_2S1_ca.paa";
		model="SPArtillery\2s1\2S1.p3d";
		memorypointsgetincargo="pos gunner";
		memorypointsgetincargodir="pos gunner dir";
		displayname="$STR_NAME_2s1";
		displaynameShort="$STR_SNAME_2s1";
		namesound="veh_Tank";
		maxSpeed=58;
		canFloat=1;
		hiddenSelections[]=
		{
			"skirt",
			"camo01",
			"camo02"
		};
		hiddenSelectionsTextures[]=
		{
			"SPArtillery\2s1\data\2s1.paa",
			"SPArtillery\2s1\data\2s1.paa",
			"SPArtillery\2s1\data\bmp1_02_co.paa"
		};
		hasCommander=1;
		typicalCargo[]=
		{
			"RU_Soldier_Crew,RU_Soldier_Crew,RU_Soldier_Crew"
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
			"ca\sounds\vehicles\Tracked\T72\ext\ext-tank-diesel-stop-1",
			1,
			0.80000001,
			500
		};
		soundengineoffint[]=
		{
			"ca\sounds\vehicles\Tracked\T72\int\int-tank-diesel-stop-1",
			1,
			1
		};
		soundengineonext[]=
		{
			"ca\SOUNDS\Vehicles\Tracked\T72\ext\ext-tank-diesel-start-2",
			2.5118899,
			1,
			500
		};
		soundengineonint[]=
		{
			"ca\sounds\Vehicles\Tracked\T72\int\int-tank-diesel-start-2",
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
			"ca\SOUNDS\Vehicles\Tracked\T72\int\int-tank-diesel-door-1",
			0.56234097,
			1
		};
		soundgetout[]=
		{
			"ca\SOUNDS\Vehicles\Tracked\T72\ext\ext-tank-diesel-door-1",
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
			libTextDesc="$STR_lib_2s1";
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
				weapon="2A31";
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
					"ca\sounds\Vehicles\Tracked\T72\ext\noise2",
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
					"ca\sounds\Vehicles\Tracked\T72\int\noise2",
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
		class Turrets
		{
			class MainTurret: NewTurret
			{
				body="MainTurretTraverse";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				animationSourceHatch="hatchGunner";
				weapons[]=
				{
					"2A31"
				};
				magazines[]=
				{
					"35Rnd_122mmHE_2A31",
					"5Rnd_122mmAPC_2A31"
				};
				soundservo[]=
				{
					"\ca\sounds\vehicles\servos\turret-1",
					0.0099999998,
					1,
					10
				};
				minElev=-3;
				maxElev=70;
				memoryPointGun="kulas";
				memoryPointGunnerOptics="gunnerview";
				gunnerAction="BMP3_Gunner_OUT";
				gunnerInAction="BMP3_Gunner";
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
					class CommanderOptics: NewTurret
					{
						gunneropticsmodel="\ca\weapons\2Dscope_com3";
						axis="osaVeze2";
						animationSourceBody="Turret_2";
						animationSourceGun="Gun_2";
						animationSourceHatch="hatchCommander";
						selectionFireAnim="zasleh_2";
						memorypointsgetingunner="pos commander";
						memorypointsgetingunnerdir="pos commander dir";
						minElev=0;
						maxElev=0;
						minTurn=-360;
						maxTurn=360;
						proxyIndex=1;
						soundservo[]=
						{
							"\ca\sounds\vehicles\servos\turret-1",
							0.0099999998,
							1,
							10
						};
						gunnerName="$STR_POSITION_COMMANDER";
						forceHideGunner=1;
						commanding=1;
						gunBeg="usti hlavne_2";
						gunEnd="konec hlavne_2";
						primary="false";
						primaryObserver="true";
						memoryPointGun="OtocHlaven2";
						memoryPointGunnerOptics="gunnerview_2";
						memoryPointGunneroutOptics="gunnerview_2";
						gunnerAction="BMP3_Commander_OUT";
						gunnerInAction="BMP3_Commander";
						gunnerGetInAction="GetInMedium";
						gunnerGetOutAction="GetOutMedium";
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
				"SPArtillery\2S1\data\2s1.rvmat",
				"SPArtillery\2S1\data\2s1_damage.rvmat",
				"SPArtillery\2S1\data\2s1_destruct.rvmat",
				"ca\tracked\data\detailmapy\bmp2_02.rvmat",
				"ca\tracked\data\detailmapy\bmp2_02_damage.rvmat",
				"ca\tracked\data\detailmapy\bmp2_02_destruct.rvmat",
				"SPArtillery\2S1\data\track.rvmat",
				"SPArtillery\2S1\data\track_damage.rvmat",
				"SPArtillery\2S1\data\track_destruct.rvmat"
			};
		};
	};
	class 2S1_desert: 2S1
	{
		displayname="$STR_NAME_2s1_D";
		displaynameShort="$STR_SNAME_2s1_D";
		hiddenSelections[]=
		{
			"skirt",
			"camo01",
			"camo02"
		};
		hiddenSelectionsTextures[]=
		{
			"SPArtillery\2s1\data\2s1b.paa",
			"SPArtillery\2s1\data\2s1b.paa",
			"SPArtillery\2s1\data\bmp1_02_co.paa"
		};
	};
	class 2S1_TKA: 2S1
	{
		faction="BIS_TK";
		displayname="$STR_NAME_2s1_D";
		displaynameShort="$STR_SNAME_2s1_D";
		hiddenSelections[]=
		{
			"skirt",
			"camo01",
			"camo02"
		};
		hiddenSelectionsTextures[]=
		{
			"SPArtillery\2s1\data\2s1TKA.paa",
			"SPArtillery\2s1\data\2s1TKA.paa",
			"SPArtillery\2s1\data\bmp1_02_co.paa"
		};
	};
	class 2S1_wood: 2S1
	{
		displayname="$STR_NAME_2s1_W";
		displaynameShort="$STR_SNAME_2s1_W";
		hiddenSelections[]=
		{
			"skirt",
			"camo01",
			"camo02"
		};
		hiddenSelectionsTextures[]=
		{
			"SPArtillery\2s1\data\2s1w.paa",
			"SPArtillery\2s1\data\2s1w.paa",
			"SPArtillery\2s1\data\bmp1_02_co.paa"
		};
	};
	class 2S9: Tracked_APC
	{
		ace_camshake_enabled=1;
		ace_armor_hull[]=
		{
			{15,15},
			{10,10},
			{10,10},
			{10,10},
			{10,10},
			{10,10}
		};
		ace_armor_turret[]=
		{
			{23,23},
			{19,19},
			{19,19},
			{13,13},
			{6,6}
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
		damageresistance=0.017960001;
		armor=160;
		scope=2;
		damperSize=0.1;
		damperForce=3;
		displayName="$STR_NAME_2S9";
		displayNameShort="$STR_SNAME_2S9";
		vehicleClass="SPArtillery_AP";
		model="SPArtillery\2s9\2S9.p3d";
		picture="SPArtillery\2s9\data\picture_2S9_ca.paa";
		Icon="SPArtillery\2s9\data\icomap_2S9_ca.paa";
		cost="1.5e+006";
		side=0;
		faction="RU";
		tracksSpeed=2;
		threat[]={0.89999998,0.89999998,0.69999999};
		supplyRadius=1.7;
		maxSpeed=64;
		canFloat=1;
		typicalCargo[]=
		{
			"RU_Soldier_Crew,RU_Soldier_Crew,RU_Soldier_Crew"
		};
		crew="RU_Soldier_Crew";
		driverAction = "Abrams_Driverout";
		driverInAction = "Abrams_Driver";
		getInAction = "GetInMedium";
		getOutAction = "GetOutMedium";
		driverForceOptics=1;
		forceHideDriver=0;
		outsidesoundfilter=1;
		driverCompartments=0;
		ace_sys_reticles_gunneroptics=1;
		ace_sys_reticles_gunnersight="OP5_38_2A51";
		class Exhausts
		{
			class Exhaust1
			{
				position="vyfuk start";
				direction="vyfuk konec";
				effect="ExhaustsEffectBig";
			};
			class Exhaust2
			{
				position="vyfuk1 start";
				direction="vyfuk1 konec";
				effect="ExhaustsEffectBig";
			};
		};
		class AnimationSources: AnimationSources
		{
			class recoil_source
			{
				source="reload";
				weapon="2A51";
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
			class CommanderLight: LeftLight
			{
				position="commander light";
				direction="konec commander light";
				hitpoint="commander light";
				selection="commander light";
			};
		};
		aggregateReflectors[]=
		{
			
			{
				"CommanderLight"
			},
			
			{
				"GunnerLight"
			},
			
			{
				"LeftLight",
				"RightLight"
			}
		};
		insideSoundCoef=1;
		soundGear[]=
		{
			"",
			"db-85",
			1
		};
		soundGetIn[]=
		{
			"ca\SOUNDS\Vehicles\Tracked\Other\int\int-tracked-getin-01",
			0.56234097,
			1
		};
		soundGetOut[]=
		{
			"ca\SOUNDS\Vehicles\Tracked\Other\ext\ext-tracked-getout-01",
			0.56234097,
			1,
			50
		};
		soundEngineOnInt[]=
		{
			"ca\sounds\Vehicles\Tracked\Other\int\int-tracked-start-01",
			1,
			1
		};
		soundEngineOnExt[]=
		{
			"ca\SOUNDS\Vehicles\Tracked\Other\ext\ext-tracked-start-01",
			2.5118899,
			1,
			400
		};
		soundEngineOffInt[]=
		{
			"ca\sounds\vehicles\Tracked\Other\int\int-tracked-stop-02.wss",
			1,
			1
		};
		soundEngineOffExt[]=
		{
			"ca\sounds\vehicles\Tracked\Other\ext\ext-tracked-stop-02.wss",
			1.25893,
			0.80000001,
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
		hiddenSelections[]=
		{
			"n1",
			"n2",
			"n3",
			"i1",
			"i2",
			"camo01",
			"camo02",
			"camo03"
		};
		hiddenSelectionsTextures[]=
		{
			"cwr2_vdv_bmd\data\1_ca.paa",
			"cwr2_vdv_bmd\data\7_ca.paa",
			"cwr2_vdv_bmd\data\5_ca.paa",
			"rhs\addons\rhs_decals\Data\Labels\army\vmf-yakor01_ca.paa",
			"cwr2_vdv_bmd\data\triangle_d6_ca.paa",
			"spartillery\2s9\data\2s9_1_co.paa",
			"spartillery\2s9\data\2s9_turret_co.paa",
			"rhs\addons\rhs_bmd\data\sa_bmd2_03_co.paa"	
		};
		class SoundEvents
		{
			class AccelerationIn
			{
				sound[]=
				{
					"ca\sounds\Vehicles\Tracked\Other\int\int-tracked-acce-02",
					0.31622776,
					1
				};
				limit="0.15";
				expression="engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
			class AccelerationOut
			{
				sound[]=
				{
					"ca\sounds\Vehicles\Tracked\Other\ext\ext-tracked-acce-02",
					1,
					1,
					700
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
					"ca\sounds\Vehicles\Tracked\Other\ext\ext-tracked-engine-02",
					1.4125376,
					1,
					900
				};
				frequency="(randomizer*0.05+0.8)*rpm";
				volume="engineOn*camPos*(rpm factor[0.4, 0.9])";
			};
			class IdleOut
			{
				sound[]=
				{
					"ca\sounds\Vehicles\Tracked\Other\ext\ext-tracked-idle-02",
					0.63095737,
					1,
					300
				};
				frequency="1";
				volume="engineOn*camPos*(rpm factor[0.6, 0.15])";
			};
			class NoiseOut
			{
				sound[]=
				{
					"ca\sounds\Vehicles\Tracked\Other\ext\noise2",
					1,
					1,
					150
				};
				frequency="1";
				volume="camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsOutH0
			{
				sound[]=
				{
					"ca\sounds\Vehicles\Tracked\Other\ext\sherman_05",
					1.1220185,
					1,
					280
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsOutH1
			{
				sound[]=
				{
					"ca\sounds\Vehicles\Tracked\Other\ext\sherman_04",
					1.2589254,
					1,
					280
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsOutH2
			{
				sound[]=
				{
					"ca\sounds\Vehicles\Tracked\Other\ext\sherman_03",
					1.4125376,
					1,
					280
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsOutH3
			{
				sound[]=
				{
					"ca\sounds\Vehicles\Tracked\Other\ext\sherman_02",
					1.5848932,
					1,
					280
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsOutH4
			{
				sound[]=
				{
					"ca\sounds\Vehicles\Tracked\Other\ext\sherman_01",
					1.7782794,
					1,
					280
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
			class ThreadsOutS0
			{
				sound[]=
				{
					"ca\sounds\Vehicles\Tracked\Other\ext\sherman_05",
					1,
					1,
					280
				};
				frequency="1";
				volume="engineOn*camPos*grass*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsOutS1
			{
				sound[]=
				{
					"ca\sounds\Vehicles\Tracked\Other\ext\sherman_04",
					1.1220185,
					1,
					280
				};
				frequency="1";
				volume="engineOn*camPos*grass*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsOutS2
			{
				sound[]=
				{
					"ca\sounds\Vehicles\Tracked\Other\ext\sherman_03",
					1.2589254,
					1,
					280
				};
				frequency="1";
				volume="engineOn*camPos*grass*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsOutS3
			{
				sound[]=
				{
					"ca\sounds\Vehicles\Tracked\Other\ext\sherman_02",
					1.5848932,
					1,
					280
				};
				frequency="1";
				volume="engineOn*camPos*grass*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsOutS4
			{
				sound[]=
				{
					"ca\sounds\Vehicles\Tracked\Other\ext\sherman_01",
					1.7782794,
					1,
					280
				};
				frequency="1";
				volume="engineOn*camPos*grass*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
			class Movement
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
					"ca\sounds\Vehicles\Tracked\Other\int\int-tracked-engine-02",
					1,
					1
				};
				frequency="(randomizer*0.05+0.8)*rpm";
				volume="engineOn*(1-camPos)*(rpm factor[0.4, 1])";
			};
			class IdleIn
			{
				sound[]=
				{
					"ca\sounds\Vehicles\Tracked\Other\int\int-tracked-idle-02",
					0.70794576,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(rpm factor[0.6, 0.15])";
			};
			class NoiseIn
			{
				sound[]=
				{
					"ca\sounds\Vehicles\Tracked\Other\int\noise2",
					0.2238721,
					1
				};
				frequency="1";
				volume="(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsInH0
			{
				sound[]=
				{
					"ca\sounds\Vehicles\Tracked\Other\int\sherman_05",
					0.56234133,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsInH1
			{
				sound[]=
				{
					"ca\sounds\Vehicles\Tracked\Other\int\sherman_04",
					0.63095737,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsInH2
			{
				sound[]=
				{
					"ca\sounds\Vehicles\Tracked\Other\int\sherman_03",
					0.70794576,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsInH3
			{
				sound[]=
				{
					"ca\sounds\Vehicles\Tracked\Other\int\sherman_02",
					0.79432821,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsInH4
			{
				sound[]=
				{
					"ca\sounds\Vehicles\Tracked\Other\int\sherman_01",
					0.89125091,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
			class ThreadsInS0
			{
				sound[]=
				{
					"ca\sounds\Vehicles\Tracked\Other\int\sherman_05",
					0.56234133,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsInS1
			{
				sound[]=
				{
					"ca\sounds\Vehicles\Tracked\Other\int\sherman_04",
					0.63095737,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsInS2
			{
				sound[]=
				{
					"ca\sounds\Vehicles\Tracked\Other\int\sherman_03",
					0.70794576,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsInS3
			{
				sound[]=
				{
					"ca\sounds\Vehicles\Tracked\Other\int\sherman_02",
					0.79432821,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsInS4
			{
				sound[]=
				{
					"ca\sounds\Vehicles\Tracked\Other\int\sherman_01",
					0.89125091,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerName="$STR_GN_BMP3_MainTurret";
				gunnerAction="BMP3_Gunner_OUT";
				gunnerInAction="BMP3_Gunner";
				gunnerGetInAction="GetInMedium";
				gunnerGetOutAction="GetOutMedium";
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
				weapons[]=
				{
					"2A51"
				};
				magazines[]=
				{
					"25Rnd_120mmHE_2A51"
				};
				soundServo[]=
				{
					"\Ca\sounds\Vehicles\Servos\turret-2",
					0.0099999998,
					1,
					20
				};
				gunnerOpticsModel="\x\ace\addons\m_veh_optics\pp61";
				gunnerOutOpticsModel="";
				gunnerOutOpticsEffect[]={};
				minElev=-4;
				maxElev=80;
				initElev=0;
				minTurn=-35;
				maxTurn=35;
				gunnerForceOptics=1;
				primary="true";
				primaryGunner="true";
				gunnerOpticsEffect[]=
				{
					"TankGunnerOptics2",
					"OpticsBlur1",
					"OpticsCHAbera1"
				};
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
						gunnerAction="BMP3_Commander_OUT";
						gunnerInAction="BMP3_Commander";
						gunnerGetInAction="GetInMedium";
						gunnerGetOutAction="GetOutMedium";
						minTurn=-360;
						maxTurn=360;
						initTurn=0;
						gunnerOpticsModel="\ca\weapons\2Dscope_com3";
						gunnerOutOpticsModel="";
						gunnerOpticsShowCursor=0;
						soundServo[]=
						{
							"\Ca\sounds\Vehicles\Servos\turret-3",
							0.0099999998,
							1,
							20
						};
						viewGunnerInExternal=0;
						memoryPointsGetInGunner="pos commander";
						memoryPointsGetInGunnerDir="pos commander dir";
						gunnerForceOptics=1;
						gunnerOpticsEffect[]=
						{
							"TankCommanderOptics1"
						};
						class ViewOptics
						{
							initAngleX=0;
							minAngleX=-30;
							maxAngleX=30;
							initAngleY=0;
							minAngleY=-100;
							maxAngleY=100;
							initFov=0.30000001;
							minFov=0.025;
							maxFov=0.30000001;
						};
						outGunnerMayFire="true";
						startEngine="false";
					};
				};
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"SPArtillery\2s9\data\btrd_1.rvmat",
				"SPArtillery\2s9\data\btrd_1_damage.rvmat",
				"SPArtillery\2s9\data\btrd_1_destruct.rvmat",
				"SPArtillery\2s9\data\body2.rvmat",
				"SPArtillery\2s9\data\body2_damage.rvmat",
				"SPArtillery\2s9\data\body2_destruct.rvmat",
				"SPArtillery\2s9\data\sa_bmd2_03.rvmat",
				"SPArtillery\2s9\data\sa_bmd2_03_damage.rvmat",
				"SPArtillery\2s9\data\sa_bmd2_03_destruct.rvmat"
			};
		};
		transportammo=0;
		transportmaxbackpacks=9999;
		transportmaxmagazines=9999;
		transportmaxweapons=9999;
		class Library
		{
			libTextDesc="$STR_lib_2s9";
		};
	};
	class 2S9_VDV: 2S9
	{
		displayname="$STR_NAME_2s9_VDV";
		displaynameShort="$STR_SNAME_2s9";
		hiddenSelections[]=
		{
			"n1",
			"n2",
			"n3",
			"i1",
			"i2",
			"camo01",
			"camo02",
			"camo03"
		};
		hiddenSelectionsTextures[]=
		{
			"cwr2_vdv_bmd\data\1_ca.paa",
			"cwr2_vdv_bmd\data\7_ca.paa",
			"cwr2_vdv_bmd\data\5_ca.paa",
			"cwr2_vdv_bmd\data\vdv_ca.paa",
			"cwr2_vdv_bmd\data\triangle_d6_ca.paa",
			"spartillery\2s9\data\2s9_1_co.paa",
			"spartillery\2s9\data\2s9_turret_co.paa",
			"rhs\addons\rhs_bmd\data\sa_bmd2_03_co.paa"
		};
	};
	class 2S9_desert: 2S9
	{
		displayname="$STR_NAME_2s9_D";
		displaynameShort="$STR_SNAME_2s9_D";
		hiddenSelections[]=
		{
			"n1",
			"n2",
			"n3",
			"i1",
			"i2",
			"camo01",
			"camo02",
			"camo03"
		};
		hiddenSelectionsTextures[]=
		{
			"cwr2_vdv_bmd\data\1_ca.paa",
			"cwr2_vdv_bmd\data\5_ca.paa",
			"cwr2_vdv_bmd\data\7_ca.paa",
			"rhs\addons\rhs_decals\Data\Labels\army\vmf-yakor01_ca.paa",
			"cwr2_vdv_bmd\data\triangle_d6_ca.paa",
			"spartillery\2s9\data\2s9_d_co.paa",
			"spartillery\2s9\data\2s9_D_turret_co.paa",
			"spartillery\2s9\data\sa_bmd2_D_co.paa"	
		};
	};
	class 2S9_desert_VDV: 2S9
	{
		displayname="$STR_NAME_2s9_D_VDV";
		displaynameShort="$STR_SNAME_2s9_D";
		hiddenSelections[]=
		{
			"n1",
			"n2",
			"n3",
			"i1",
			"i2",
			"camo01",
			"camo02",
			"camo03"
		};
		hiddenSelectionsTextures[]=
		{
			"cwr2_vdv_bmd\data\1_ca.paa",
			"cwr2_vdv_bmd\data\5_ca.paa",
			"cwr2_vdv_bmd\data\7_ca.paa",
			"cwr2_vdv_bmd\data\vdv_ca.paa",
			"cwr2_vdv_bmd\data\triangle_d6_ca.paa",
			"spartillery\2s9\data\2s9_d_co.paa",
			"spartillery\2s9\data\2s9_D_turret_co.paa",
			"spartillery\2s9\data\sa_bmd2_D_co.paa"	
		};
	};
};
class CfGWeapons
{
	class D30;
	class 2A31: D30
	{
		dispersion=0.0094999997;
		displayName="2A31(122mm)";
		magazines[]=
		{
			"35Rnd_122mmHE_2A31",
			"5Rnd_122mmAPC_2A31",
			"35Rnd_122mmSMOKE_2A31"
		};
	};
	class 2A51: D30
	{
		dispersion=0.0094999997;
		displayName="2A51(120mm)";
		magazines[]=
		{
			"25Rnd_120mmHE_2A51",
			"25Rnd_120mmSMOKE_2A51"
		};
	};
};
class CfgAmmo
{
	class Sh_122_HE;
	class Sh_122_SADARM;
	class 2A31_Sh_122_HE: Sh_122_HE
	{
		CraterEffects="ArtyShellCrater";
		ExplosionEffects="ARTY_ShellExplosionLarge";
		explosive=0.80000001;
		hit=400;
		whistleDist=60;
		timeToLive = 23;
	};
	class 2A31_Sh_122_APC: Sh_122_SADARM
	{
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ace_pfx_ammo_apfsds_120mm";
		caliber=20;
		explosive=0;
		deflecting=0;
		hit=700;
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
	class 2A31_Sh_122_SMOKE: Sh_122_HE
	{
		ARTY_DeployOnImpact = "ARTY_SmokeShellWhite";
		CraterEffects = "ExploAmmoCrater";
		ExplosionEffects = "ace_arty_WPExplosion";
		explosive = 0.3;
		hit = 10;
		indirecthit = 5;
		indirecthitrange = 2.52;
		soundHit[] = {"\ca\weapons\data\sound\explosion\grenade_new1", 3.16228, 1};
		whistleDist = 60;
		timeToLive = 23;
	};
	
	class 2A51_Sh_120_HE: 2A31_Sh_122_HE
	{
		explosive=0.69999999;
		hit=380;
		timeToLive = 120;
	};
	class 2A51_Sh_120_SMOKE: Sh_122_HE
	{
		ARTY_DeployOnImpact = "ARTY_SmokeShellWhite";
		CraterEffects = "ExploAmmoCrater";
		ExplosionEffects = "ace_arty_WPExplosion";
		explosive = 0.3;
		hit = 10;
		indirecthit = 5;
		indirecthitrange = 2.52;
		soundHit[] = {"\ca\weapons\data\sound\explosion\grenade_new1", 3.16228, 1};
		whistleDist = 60;
		timeToLive = 120;
	};
};
class CfgMagazines
{
	class 30Rnd_122mmHE_D30;
	class 30Rnd_122mmSADARM_D30;
	class 35Rnd_122mmHE_2A31: 30Rnd_122mmHE_D30
	{
		ammo="2A31_Sh_122_HE";
		displayName="3ОФ56";
		displayNameShort="HE";
		initSpeed=690;
		count=35;
	};
	class 35Rnd_122mmSMOKE_2A31: 35Rnd_122mmHE_2A31
	{
		ammo="2A31_Sh_122_SMOKE";
		displayName="3Д4";
		displayNameShort="SMOKE";
	};
	class 5Rnd_122mmAPC_2A31: 30Rnd_122mmSADARM_D30
	{
		ammo="2A31_Sh_122_APC";
		displayName="3БК13";
		displayNameShort="AP";
		initSpeed=726;
		count=5;
	};
	
	class 25Rnd_120mmHE_2A51: 35Rnd_122mmHE_2A31
	{
		ammo="2A51_Sh_120_HE";
		displayName="3ОФ50";
		displayNameShort="HE";
		initSpeed=367;
		count=25;
	};
	class 25Rnd_120mmSMOKE_2A51: 25Rnd_120mmHE_2A51
	{
		ammo="2A51_Sh_120_SMOKE";
		displayName="3Д4(М)";
		displayNameShort="SMOKE";
	};
};
class ACE_Config
{
	class cfgVehicleOpticsReticles
	{
		class OP5_38_2A31
		{
			ace_sys_reticles_checkweapon="2A31";
			ace_sys_reticles_fov0="0.33333/4";
			ace_sys_reticles_horizshift=0;
			ace_sys_reticles_illum=1;
			ace_sys_reticles_illumcolor[]={0.74119997,0,0,1};
			ace_sys_reticles_pxmil=12;
			ace_sys_reticles_texmap=1;
			ace_sys_reticles_texreticle="\SPArtillery\2s1\data\OP5_38.paa";
			ace_sys_reticles_texsize=4096;
			ace_sys_reticles_texstatic="\SPArtillery\2s1\data\mark.paa";
		};
		class OP5_38_2A51
		{
			ace_sys_reticles_checkweapon="2A51";
			ace_sys_reticles_fov0="0.33333/4";
			ace_sys_reticles_horizshift=0;
			ace_sys_reticles_illum=1;
			ace_sys_reticles_illumcolor[]={0.74119997,0,0,1};
			ace_sys_reticles_pxmil=12;
			ace_sys_reticles_texmap=1;
			ace_sys_reticles_texreticle="\SPArtillery\2s9\data\OP5_38.paa";
			ace_sys_reticles_texsize=4096;
			ace_sys_reticles_texstatic="\SPArtillery\2s9\data\mark.paa";
		};
	};
};
