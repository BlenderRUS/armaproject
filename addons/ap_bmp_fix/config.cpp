#define _ARMA_

class CfgPatches
{
	class ap_bmp_fix
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"rhs_c_bmp","acex_ru_veh_bmp2","rhs_c_bmd","tu_vehicles_sov"};
	};
};

class Turrets;
class MainTurret;
class CommanderOptics;
class DefaultEventHandlers;

class CfgFactionClasses
{
	class rhs_faction_tv
	{
		displayName="$STR_rhs_faction_tv";
		priority = 8;
		side = "TEast";
	};
	class rhs_faction_msv
	{
		displayName="$STR_rhs_faction_msv";
		priority = 8;
		side = "TEast";
	};
	class rhs_faction_vmf
	{
		displayName="$STR_rhs_faction_vmf";
		priority = 8;
		side = "TEast";
	};
	class rhs_faction_vv
	{
		displayName="$STR_rhs_faction_vv";
		priority = 8;
		side = "TEast";
	};
	class rhs_faction_vdv
	{
		displayName="$STR_rhs_faction_vdv";
		priority = 8;
		side = "TEast";
	};
};

class CfgVehicles
{
	class LandVehicle;
	class Tank : LandVehicle
	{
		class Turrets;	
	};
	class Tracked_APC: Tank
	{
		class NewTurret;
		class ViewOptics;
		class Sounds;
		class Turrets: Turrets
		{
			class MainTurret;
		};	
	};
	class BMP2_Base: Tracked_APC
	{
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
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
		class ViewPilot;
		class ViewOptics;
	};
	class rhs_bmp_base: BMP2_Base
	{
		scope = 1;
		driverOpticsModel = "\CA\Tracked_E\driverOptics";
		class Sounds: Sounds
		{
			class Engine: Engine
			{
				sound[] = {"\rhs\addons\rhs_bmp\sounds\UTD20.ogg",1,1,800};
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
			class Main_BMP1: MainTurret
			{
				class OpticsIn
				{
					class pn22m1
					{
						gunnerOpticsModel = "\ap_bmp_fix\rhs_1pn22m1";
					};
					class pn22m1n
					{
						gunnerOpticsModel = "\ap_bmp_fix\rhs_1pn22m1n";
					};
				};
			};
		};
	};
	class rhs_bmp1_vdv: rhs_bmp_base
	{
		class Main_BMP1;
		class Com_BMP1;
	};
	class rhs_bmp2e_vdv: rhs_bmp1_vdv
	{
		ace_sys_reticles_gunneroptics = 1;
		ace_sys_reticles_gunnersight = "BPK_2_42";
		
		smokeLauncherGrenadeCount = 3;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 60;
		
	class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{			
				discreteDistance[] = {};
				//discreteDistanceInitIndex = 2;
									
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics 
					{
						weapons[] = {"SmokeLauncher","FakeWeapon"};
						magazines[] = {"SmokeLauncherMag","SmokeLauncherMag"};
					};
				};
			};
		};
	};
	class rhs_bmp2e_tv: rhs_bmp2e_vdv
	{
		faction = "rhs_faction_tv";
	};
	class rhs_bmp2e_msv: rhs_bmp2e_vdv
	{
		faction = "rhs_faction_msv";
	};
	class rhs_bmp2e_vmf: rhs_bmp2e_vdv
	{
		faction = "rhs_faction_vmf";
	};
	class rhs_bmp2e_vv: rhs_bmp2e_vdv
	{
		faction = "rhs_faction_vv";
	};
	
	class ACE_BMP2_RU: BMP2_Base
	{
		
		ace_sys_reticles_gunneroptics = 1;
		ace_sys_reticles_gunnersight = "BPK_2_42";
		
		smokeLauncherGrenadeCount = 3;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 60;
		hiddenSelectionsTextures[] =
		{
				"\x\acex_ru\addons\t_veh_bmp2\bmp2_01_ru_co.paa",
				"\x\acex_ru\addons\t_veh_bmp2\bmp2_02_ru_co.paa"
		};
		class Turrets: Turrets
			{
				
				
				
				
				
				class CommanderOptics: NewTurret
					{
				
						
						gunnerCompartments = 1;
				proxyType = "CPCommander";
				proxyIndex = 1;
				gunnerName = "$STR_Commander";
				primaryGunner = 0;
				primaryObserver = 1;
				stabilizedInAxes = 2;
				body = "obsTurret";
				gun = "obsGun";
				animationSourceBody = "obsTurret";
				animationSourceGun = "obsGun";
				animationSourceHatch = "hatchCommander";
				soundServo[] = {"\ca\sounds\vehicles\servos\turret-1","db-40",1.0,10};
				commanding = 6;
				outGunnerMayFire = 0;
				inGunnerMayFire = 1;
				viewGunnerInExternal = 0;
				gunnerOutOpticsShowCursor = 0;
				gunnerOpticsShowCursor = 1;
				memoryPointGunnerOptics = "commanderview";
				memoryPointGunnerOutOptics = "commander_out_view";
				memoryPointsGetInGunner = "pos commander";
				memoryPointsGetInGunnerDir = "pos commander dir";
				gunnerGetInAction = "GetInMedium";
				gunnerGetOutAction = "GetOutMedium";
				gunnerAction = BMP2_GunnerOut;
				gunnerInAction = BMP2_Gunner;
				minElev = -15;
				maxElev = 15;
				initElev = 0;
				minTurn = -50;
				maxTurn = 50;
				initTurn = 0;
				gunnerOutOpticsModel = "\ca\Weapons\optika_empty";
				gunnerOpticsEffect[] = {"TankGunnerOptics1","WeaponsOptics","OpticsCHAbera3"};
				gunnerOutOpticsEffect[] = {};
				gunnerOpticsColor[] = {1,1,1,1};
				gunnerOutForceOptics = 0;
				gunnerForceOptics = 1;
				startEngine = 0;
						
						
						maxHorizontalRotSpeed = 1.8;
						maxVerticalRotSpeed = 1.8;

						commanderForceOptics=1;
						forceHideCommander=0;
						weapons[]=
						{
							"SmokeLauncher","FakeWeapon"
						};
						magazines[]=
						{
							"SmokeLauncherMag",
							"SmokeLauncherMag"
						};
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
								gunnerOpticsModel="\ca\weapons\2Dscope_com3";
							};
							class Medium: Wide
							{
								gunnerOpticsModel="\ca\weapons\2Dscope_com3";
								initFov="0.33333/ 2";
								minFov="0.33333/ 2";
								maxFov="0.33333/ 2";
							};
							class Narrow: Wide
							{
								initFov="0.33333/ 4";
								minFov="0.33333/ 4";
								maxFov="0.33333/ 4";
								gunnerOpticsModel="\ca\weapons\2Dscope_com3";
								visionMode[]=
								{
									"Normal",
									"NVG"
								};
							};
						};
						class ViewOptics: ViewOptics
						{
							initFov="0.33333/ 1";
							minFov="0.33333/ 4";
							maxFov="0.33333/ 1";
							visionMode[]=
							{
								"Normal",
								"NVG"
							};
						};
						ace_sys_nvg_nvrange=570;
					};
			};
	};
	class ACE_BMP2_RU2: ACE_BMP2_RU
	{
		hiddenSelectionsTextures[] =
		{
			"\x\acex_ru\addons\t_veh_bmp2\bmp2_01_co.paa",
			"\x\acex_ru\addons\t_veh_bmp2\bmp2_02_co.paa"
		};
	};
	class ACE_BMP2_des: ACE_BMP2_RU
	{
		displayName = "$STR_ace_bmp2_des";
		hiddenSelectionsTextures[] =
		{
			"\ap_bmp_fix\data\bmp2_01_des_co.paa",
			"\ap_bmp_fix\data\bmp2_02_des_co.paa"
		};
	};
	class TU_BMP2M;
	class ACE_BMP2M_ru1: TU_BMP2M
	{
		hiddenselectionstextures[] =
		{
			"\ap_bmp_fix\data\bmp2m_co.paa",
			"\x\acex_ru\addons\t_veh_bmp2\bmp2_01_co.paa"
		};
	};
	class ACE_BMP2M_des: TU_BMP2M
	{
		displayName = "$STR_ace_bmp2m_des";
		hiddenselectionstextures[] =
		{
			"\ap_bmp_fix\data\bmp2m_des_co.paa",
			"\ap_bmp_fix\data\bmp2_01_des_co.paa"
		};
	};
	class ACE_BMP2D_RU: ACE_BMP2_RU
	{
		accuracy = 1.5;
		displayName = "$STR_DN_ACE_BMP2D_RU";
		model = "\x\acex\addons\m_veh_bmp2\ace_bmp2d";
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\tracked_e\bmp\data\bmp2_01.rvmat","ca\tracked_e\bmp\data\bmp2_01_damage.rvmat","ca\tracked_e\bmp\data\bmp2_01_destruct.rvmat","ca\tracked_e\bmp\data\bmp2_02.rvmat","ca\tracked_e\bmp\data\bmp2_02_damage.rvmat","ca\tracked_e\bmp\data\bmp2_02_destruct.rvmat","ca\tracked_e\bmp\data\bmp_hq.rvmat","ca\tracked_e\bmp\data\bmp_hq_damage.rvmat","ca\tracked_e\bmp\data\bmp_hq_destruct.rvmat","ca\tracked_e\bmp\data\bmp2_pasy.rvmat","ca\tracked_e\bmp\data\bmp2_pasy_damage.rvmat","ca\tracked_e\bmp\data\bmp2_pasy_destruct.rvmat","x\acex\addons\c_veh_bmp2\bmp2_03.rvmat","x\acex\addons\c_veh_bmp2\bmp2_03_damage.rvmat","x\acex\addons\c_veh_bmp2\bmp2_03_destruct.rvmat"};
		};
		canfloat = 0;
		scope = 2;
		ace_armor_hull[] = {{40,40},{28,33},{28,33},{16,16},{16,16},{50,50}};
		ace_armor_turret[] = {{33,33},{19,19},{19,19},{25,25},{16,16}};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[] =
		{
			"\x\acex_ru\addons\t_veh_bmp2\bmp2_01_ru_co.paa",
			"\x\acex_ru\addons\t_veh_bmp2\bmp2_02_ru_co.paa",
			"\x\acex_ru\addons\t_veh_bmp2\bmp2_03_ru_co.paa"
		};
	};
	class ACE_BMP2D_TK: ACE_BMP2_RU
	{
		scope = 2;
		displayName = "$STR_DN_ACE_BMP2D_RU";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\ca\Tracked_E\BMP\data\BMP2_01_TKA_CO",
			"\ca\Tracked_E\BMP\data\BMP2_02_TKA_CO",
			"\x\acex\addons\t_veh_bmp2\bmp2_03_tka_co.paa"
		};
	};
	class ACE_BMP2D_RU2: ACE_BMP2D_RU
	{
		hiddenSelectionsTextures[] =
		{
			"\x\acex_ru\addons\t_veh_bmp2\bmp2_01_co.paa",
			"\x\acex_ru\addons\t_veh_bmp2\bmp2_02_co.paa",
			"\x\acex_ru\addons\t_veh_bmp2\bmp2_03_co.paa"
		};
	};
	class ACE_BMP2D_des: ACE_BMP2D_RU
	{
		displayName = "$STR_ace_bmp2d_des";
		hiddenSelectionsTextures[] =
		{
			"\ap_bmp_fix\data\bmp2_01_des_co.paa",
			"\ap_bmp_fix\data\bmp2_02_des_co.paa",
			"\ap_bmp_fix\data\bmp2_03_des_co.paa"
		};
	};
	//БМП2 МЕД
	class BMP2_Ambul_Base;
	class BMP2_Ambul_RU: BMP2_Ambul_Base
	{
		accuracy = 0.5;
		crew = "RU_Soldier_Crew";
		faction = "RU";
		hiddenSelectionsTextures[] =
		{
			"\x\acex_ru\addons\t_veh_bmp2\bmp2_01_ru_co.paa",
			"\x\acex_ru\addons\t_veh_bmp2\bmp2_02_ru_co.paa"
		};
		scope = 2;
		side = 0;
		typicalCargo[] = {"RU_Soldier_Crew", "RU_Soldier_Crew"};
	};
	class BMP2_Ambul_RU2: BMP2_Ambul_Base
	{
		accuracy = 0.5;
		crew = "RU_Soldier_Crew";
		faction = "RU";
		hiddenSelectionsTextures[] =
		{
			"\x\acex_ru\addons\t_veh_bmp2\bmp2_01_co.paa",
			"\x\acex_ru\addons\t_veh_bmp2\bmp2_02_co.paa"
		};
		scope = 2;
		side = 0;
		typicalCargo[] = {"RU_Soldier_Crew", "RU_Soldier_Crew"};
	};
	class BMP2_Ambul_des: BMP2_Ambul_Base
	{
		accuracy = 0.5;
		crew = "RU_Soldier_Crew";
		faction = "RU";
		hiddenSelectionsTextures[] =
		{
			"\ap_bmp_fix\data\bmp2_01_des_co.paa",
			"\ap_bmp_fix\data\bmp2_02_des_co.paa"
		};
		scope = 2;
		side = 0;
		typicalCargo[] = {"RU_Soldier_Crew", "RU_Soldier_Crew"};
	};
	class BMP2_Ambul_TK: BMP2_Ambul_Base
	{
		accuracy = 0.5;
		crew = "RU_Soldier_Crew";
		faction = "BIS_TK";
		hiddenSelectionsTextures[] =
		{
			"\ca\Tracked_E\BMP\data\BMP2_01_TKA_CO",
			"\ap_bmp_fix\data\BMP2_02_TKA_CO"
		};
		scope = 2;
		side = 0;
		typicalCargo[] = {"RU_Soldier_Crew", "RU_Soldier_Crew"};
	};
	class rhs_bmd_base: BMP2_Base
	{
		driverOpticsModel = "\CA\Tracked_E\driverOptics";
		class GPMGTurret1;
		class LeftBack;
		class RightBack;
		class MainBack;
		class Sounds: Sounds
		{
			class Engine: Engine
			{
				sound[] = {"\rhs\addons\rhs_bmd\sounds\rhs_bmd_engine.wss",1,1,800};
				frequency = "(randomizer*0.05+0.8)*rpm";
				volume = "engineOn*camPos*(rpm factor[0.2, 0.7])";
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
	};
	class rhs_bmd2_base: rhs_bmd_base
	{
		scope = 0;
		class Turrets: Turrets
		{
			
			ace_sys_reticles_gunneroptics = 1;
			ace_sys_reticles_gunnersight = "BPK_2_42";
		
			smokeLauncherGrenadeCount = 3;
			smokeLauncherVelocity = 14;
			smokeLauncherOnTurret = 1;
			smokeLauncherAngle = 60;
			
			class MainTurret: MainTurret
			{
				turretInfoType = "RscWeaponZeroing";
				discreteDistance[] = {};
			};
			class CommanderOptics1: CommanderOptics{};
			class GPMGTurretBMD1: GPMGTurret1{};
			class LeftBack1: LeftBack{};
			class RightBack1: RightBack{};
			class MainBack1: MainBack{};
		};
	};
	
	class rhs_bmd2: rhs_bmd2_base
	{
		displayName = "$STR_rhs_bmd2";
		scope = 2;
	};
	class rhs_bmd2m: rhs_bmd2
	{
		ace_sys_reticles_gunneroptics = 0;
		ace_tankfcs_digitscolor[] = {0.93,0.96,0.294,1};
		ace_tankfcs_digitsstyle = 1;
		ace_tankfcs_enabled = 1;
		ace_tankfcs_lrfaccuracy = 20;
		ace_tankfcs_lrfcooldowntime = 3;
		ace_tankfcs_maxlead = 2;
		ace_tankfcs_maxlrfrange = 5200;
		ace_tankfcs_maxranges[] = {"ACE_180Rnd_30mmAP_2A42",2500,"ACE_120Rnd_30mmHE_2A42",2500,"250Rnd_762x54_PKT_T90",1600};
		ace_tankfcs_minlrfrange = 200;
		ace_tankfcs_rdystyle = 1;
		scope = 2;
		model = "\rhs\addons\rhs_bmd\rhs_bmd2m.p3d";
		displayName = "$STR_rhs_bmd2m";
		transportSoldier = 0;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"ACE_2A42","PKT_veh","AT5LauncherSingle","ACE_SACLOS_Guidance"};
				magazines[] = {"ACE_180Rnd_30mmAP_2A42","ACE_120Rnd_30mmHE_2A42","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","ACE_AT5B","ACE_AT5B"};
				turretInfoType = "rhs_gui_optic_thermalscreen";
				class OpticsIn
				{
					class gunnerSightWide
					{
						initAngleX = 0;
						minAngleX = -110;
						maxAngleX = 110;
						initAngleY = 0;
						minAngleY = -110;
						maxAngleY = 110;
						opticsZoomMin = 0.14;
						opticsZoomMax = 0.14;
						distanceZoomMin = 200;
						distanceZoomMax = 2000;
						initFov = 0.14;
						minFov = 0.14;
						maxFov = 0.14;
						visionMode[] = {"Normal","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsModel = "\rhs\addons\rhs_optics\vehicles\rhs_thermalScreen_wide";
						gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
					};
					class gunnerSightNarrow
					{
						initAngleX = 0;
						minAngleX = -110;
						maxAngleX = 110;
						initAngleY = 0;
						minAngleY = -110;
						maxAngleY = 110;
						opticsZoomMin = 0.047;
						opticsZoomMax = 0.047;
						distanceZoomMin = 200;
						distanceZoomMax = 2000;
						initFov = 0.047;
						minFov = 0.047;
						maxFov = 0.047;
						visionMode[] = {"Normal","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsModel = "\rhs\addons\rhs_optics\vehicles\rhs_thermalScreen_narrow";
						gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
					};
				};
			};
			class CommanderOptics2: CommanderOptics1{};
			class GPMGTurretBMD2: GPMGTurretBMD1{};
			class LeftBack2: LeftBack1{};
			class RightBack2: RightBack1{};
			class MainBack2: MainBack1{};
		};
	};
	class rhs_bmd2k: rhs_bmd2
	{
		displayName = "$STR_rhs_bmd2k";
		hiddenSelectionsTextures[] = {"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","\rhs\addons\rhs_bmd\data\sa_bmd2_01_co.paa","\rhs\addons\rhs_bmd\data\sa_bmd2_02_co.paa","\rhs\addons\rhs_bmd\data\sa_bmd2_03_co.paa","\rhs\addons\rhs_bmd\data\sa_bmd2_01_co.paa"};
	};
	
	
	
	
	
	
	class rhs_bmp1p_vdv: rhs_bmp1_vdv
	{
		ace_armor_hull[] = {
			{ 40,40 },
			{ 18,18 },
			{ 18,18 },
			{ 16,16 },
			{ 16,16 },
			{ 30,30 }};
		ace_armor_turret[] = {
			{ 33,33 },
			{ 19,19 },
			{ 19,19 },
			{ 19,19 },
			{ 16,16 }};
		model = "\rhs\addons\rhs_bmp\BMP1p.p3d";
		displayName = "$STR_BMP1P_Name";
		class Turrets: Turrets
		{
			class Main_BMP1: Main_BMP1
			{
				weapons[] = {"ACE_2A28", "PKT_veh","AT5LauncherSingle","ACE_SACLOS_Guidance"};
				magazines[] = {"ACE_24Rnd_73mm_PG15V","ACE_16Rnd_73mm_OG15V","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","ACE_AT5B","SmokeLauncherMag"};
			};
			class Com_BMP1: Com_BMP1
			{
				weapons[]=
					{
						"SmokeLauncher"
					};
					magazines[]=
					{
						"SmokeLauncherMag",
						"SmokeLauncherMag"
					};
			};
		};
		smokeLauncherGrenadeCount = 3;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 60;
		class Library
		{
			libTextDesc = "Improved variant of the BMP-1. Weight: 13,4t Engine: UTD-20 V6-cylinder 4-stroke one-chamber 15.8 liter water-cooled diesel, 300hp, ~1000Nm torque. Speed: 65 km/h (road) 45 km/h (cross country) Fuel capacity: 462l Range: 600 km Armour: Turret: 23mm front, 26-33mm mantlet, 19mm sides, 13mm rear Hull:  7-19mm front, 16-18mm sides, 16mm rear Primary armament: 73 mm 2A28 Grom low-pressure smoothbore gun  (40 rounds) penetration:	PG-15V HEAT	350mm RHA, 9M113 Konkurs ATGM  600mm RHA, Secondary armament: 7.62 mm PKT coaxial general purpose machine gun (2000 rounds)";
		};
	};
	class rhs_bmp1p_tv: rhs_bmp1p_vdv
	{
		faction = "rhs_faction_tv";
	};
	class rhs_bmp1p_msv: rhs_bmp1p_vdv
	{
		faction = "rhs_faction_msv";
	};
	class rhs_bmp1p_vmf: rhs_bmp1p_vdv
	{
		faction = "rhs_faction_vmf";
	};
	class rhs_bmp1p_vv: rhs_bmp1p_vdv
	{
		faction = "rhs_faction_vv";
	};
	//спрятать эйс поломанные бмд (Использовать РХС)
	class ACE_BMD_2_Base;
	class ACE_BMD_1_Base;
	class ACE_BMD_1P_Base;
	class ACE_BMD_2_RU: ACE_BMD_2_Base
	{
		scope = 0;
	};
	class ACE_BMD_2_INS: ACE_BMD_2_Base
	{
		scope = 0;
	};
	class ACE_BMD_2_CDF: ACE_BMD_2_Base
	{
		scope = 0;
	};
	class ACE_BMD_2K_RU: ACE_BMD_2_RU
	{
		scope = 0;
	};
	class ACE_BMD_1_RU: ACE_BMD_1_Base
	{
		scope = 0;
	};
	class ACE_BMD_1_CDF: ACE_BMD_1_Base
	{
		scope = 0;
	};
	class ACE_BMD_1P_RU: ACE_BMD_1P_Base
	{
		scope = 0;
	};
	class ACE_BMD_1P_RUS: ACE_BMD_1P_RU
	{
		scope = 0;
	};
	//планки прицела БМД1 
	class rhs_bmd1_base: rhs_bmd_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class OpticsIn
				{
					class pn22m1
					{
						gunnerOpticsModel = "\ap_bmp_fix\rhs_1pn22m1";
					};
					class pn22m1n
					{
						gunnerOpticsModel = "\ap_bmp_fix\rhs_1pn22m1n";
					};
				};
			};
		};
	};
	//имена англ и рус
	class rhs_bmd1pk: rhs_bmd1_base
	{
		displayName = "$STR_rhs_bmd1pk";
		model = "\rhs\addons\rhs_bmd\rhs_bmd1pk.p3d";
		picture = "\rhs\addons\rhs_bmd\rhs_bmd1pk_pic_ca.paa";
		scope = 2;
	};
	class rhs_bmd1p: rhs_bmd1_base
	{
		displayName = "$STR_rhs_bmd1p";
		model = "\rhs\addons\rhs_bmd\rhs_bmd1p.p3d";
		scope = 2;
	};
	class rhs_bmd1k: rhs_bmd1_base
	{
		displayName = "$STR_rhs_bmd1k";
		scope = 2;
	};
	class rhs_bmd1: rhs_bmd1_base
	{
		displayName = "$STR_rhs_bmd1";
		scope = 2;
	};
	//пак скинов бмд1
	class rhs_bmd1_rus1_base: rhs_bmd1_base
	{
		hiddenSelectionsTextures[] =
			{
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"cwr2_vdv_bmd\mr_bmd1_01_rus1_co.paa",
				"cwr2_vdv_bmd\mr_bmd1_02_rus1.paa",
				"\x\acex_ru\addons\t_veh_bmd2\sa_bmd2_03_rus1_co.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
			};
		class EventHandlers: DefaultEventHandlers
			{
				init = "_this call compile preProcessFile ""\ap_bmp_fix\bmdRU_init.sqf""";
				fired = "_this call RHS_bmd_Effects_EH_Fired;_this spawn DFS_bmd2at14_fired;_this spawn rhs_30mmcart_fired;_this spawn rhs_9m14_fired;";
				killed = "_this call RHS_bmd_Effects_EH_Killed;";
			};

	};
	class rhs_bmd1pk_rus1: rhs_bmd1_rus1_base
	{
		displayName = "$STR_rhs_bmd1pk_c1";
		model = "\rhs\addons\rhs_bmd\rhs_bmd1pk.p3d";
		picture = "\rhs\addons\rhs_bmd\rhs_bmd1pk_pic_ca.paa";
		scope = 2;

	};
	class rhs_bmd1p_rus1: rhs_bmd1_rus1_base
	{
		displayName = "$STR_rhs_bmd1p_c1";
		model = "\rhs\addons\rhs_bmd\rhs_bmd1p.p3d";
		scope = 2;
	};
	class rhs_bmd1k_rus1: rhs_bmd1_rus1_base
	{
		displayName = "$STR_rhs_bmd1k_c1";
		scope = 2;
	};
	class rhs_bmd1_rus1: rhs_bmd1_rus1_base
	{
		displayName = "$STR_rhs_bmd1_c1";
		scope = 2;
	};
	class rhs_bmd1_rus2_base: rhs_bmd1_base
	{
		hiddenSelectionsTextures[] =
			{
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"cwr2_vdv_bmd\mr_bmd1_01_des_co.paa",
				"cwr2_vdv_bmd\mr_bmd1_02_des.paa",
				"\x\acex_ru\addons\t_veh_bmd2\sa_bmd2_03_des_co.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
			};
		class EventHandlers: DefaultEventHandlers
			{
				init = "_this call compile preProcessFile ""\ap_bmp_fix\bmdRU_init.sqf""";
				fired = "_this call RHS_bmd_Effects_EH_Fired;_this spawn DFS_bmd2at14_fired;_this spawn rhs_30mmcart_fired;_this spawn rhs_9m14_fired;";
				killed = "_this call RHS_bmd_Effects_EH_Killed;";
			};

	};
	class rhs_bmd1pk_rus2: rhs_bmd1_rus2_base
	{
		displayName = "$STR_rhs_bmd1pk_c2";
		model = "\rhs\addons\rhs_bmd\rhs_bmd1pk.p3d";
		picture = "\rhs\addons\rhs_bmd\rhs_bmd1pk_pic_ca.paa";
		scope = 2;

	};
	class rhs_bmd1p_rus2: rhs_bmd1_rus2_base
	{
		displayName = "$STR_rhs_bmd1p_c2";
		model = "\rhs\addons\rhs_bmd\rhs_bmd1p.p3d";
		scope = 2;
	};
	class rhs_bmd1k_rus2: rhs_bmd1_rus2_base
	{
		displayName = "$STR_rhs_bmd1k_c2";
		scope = 2;
	};
	class rhs_bmd1_rus2: rhs_bmd1_rus2_base
	{
		displayName = "$STR_rhs_bmd1_c2";
		scope = 2;
	};
	class rhs_bmd1_rus3_base: rhs_bmd1_base
	{
		hiddenSelectionsTextures[] =
			{
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"cwr2_vdv_bmd\mr_bmd1_01_rus4_co.paa",
				"cwr2_vdv_bmd\mr_bmd1_02_rus4.paa",
				"\x\acex_ru\addons\t_veh_bmd2\sa_bmd2_03_rus4_co.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
			};
		class EventHandlers: DefaultEventHandlers
			{
				init = "_this call compile preProcessFile ""\ap_bmp_fix\bmdRU_init.sqf""";
				fired = "_this call RHS_bmd_Effects_EH_Fired;_this spawn DFS_bmd2at14_fired;_this spawn rhs_30mmcart_fired;_this spawn rhs_9m14_fired;";
				killed = "_this call RHS_bmd_Effects_EH_Killed;";
			};

	};
	class rhs_bmd1pk_rus3: rhs_bmd1_rus3_base
	{
		displayName = "$STR_rhs_bmd1pk_c3";
		model = "\rhs\addons\rhs_bmd\rhs_bmd1pk.p3d";
		picture = "\rhs\addons\rhs_bmd\rhs_bmd1pk_pic_ca.paa";
		scope = 2;

	};
	class rhs_bmd1p_rus3: rhs_bmd1_rus3_base
	{
		displayName = "$STR_rhs_bmd1p_c3";
		model = "\rhs\addons\rhs_bmd\rhs_bmd1p.p3d";
		scope = 2;
	};
	class rhs_bmd1k_rus3: rhs_bmd1_rus3_base
	{
		displayName = "$STR_rhs_bmd1k_c3";
		scope = 2;
	};
	class rhs_bmd1_rus3: rhs_bmd1_rus3_base
	{
		displayName = "$STR_rhs_bmd1_c3";
		scope = 2;
	};
	class rhs_bmd1_dirt_base: rhs_bmd1_base
	{
		hiddenSelectionsTextures[] =
			{
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"cwr2_vdv_bmd\mr_bmd1_01_ua_co.paa",
				"cwr2_vdv_bmd\mr_bmd1_02_ua.paa",
				"\x\acex_ru\addons\t_veh_bmd2\sa_bmd2_03_ua_co.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
			};
		class EventHandlers: DefaultEventHandlers
			{
				init = "_this call compile preProcessFile ""\ap_bmp_fix\bmdRU_init.sqf""";
				fired = "_this call RHS_bmd_Effects_EH_Fired;_this spawn DFS_bmd2at14_fired;_this spawn rhs_30mmcart_fired;_this spawn rhs_9m14_fired;";
				killed = "_this call RHS_bmd_Effects_EH_Killed;";
			};

	};
	class rhs_bmd1pk_dirt: rhs_bmd1_dirt_base
	{
		displayName = "$STR_rhs_bmd1pk_dirt";
		model = "\rhs\addons\rhs_bmd\rhs_bmd1pk.p3d";
		picture = "\rhs\addons\rhs_bmd\rhs_bmd1pk_pic_ca.paa";
		scope = 2;

	};
	class rhs_bmd1p_dirt: rhs_bmd1_dirt_base
	{
		displayName = "$STR_rhs_bmd1p_dirt";
		model = "\rhs\addons\rhs_bmd\rhs_bmd1p.p3d";
		scope = 2;
	};
	class rhs_bmd1k_dirt: rhs_bmd1_dirt_base
	{
		displayName = "$STR_rhs_bmd1k_dirt";
		scope = 2;
	};
	class rhs_bmd1_dirt: rhs_bmd1_dirt_base
	{
		displayName = "$STR_rhs_bmd1_dirt";
		scope = 2;
	};
	class rhs_bmd1_des_base: rhs_bmd1_base
	{
		hiddenSelectionsTextures[] =
			{
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"cwr2_vdv_bmd\mr_bmd1_01_rus2_co.paa",
				"cwr2_vdv_bmd\mr_bmd1_02_rus2.paa",
				"\x\acex_ru\addons\t_veh_bmd2\sa_bmd2_03_rus2_co.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
			};
		class EventHandlers: DefaultEventHandlers
			{
				init = "_this call compile preProcessFile ""\ap_bmp_fix\bmdRU_init.sqf""";
				fired = "_this call RHS_bmd_Effects_EH_Fired;_this spawn DFS_bmd2at14_fired;_this spawn rhs_30mmcart_fired;_this spawn rhs_9m14_fired;";
				killed = "_this call RHS_bmd_Effects_EH_Killed;";
			};

	};
	class rhs_bmd1pk_des: rhs_bmd1_des_base
	{
		displayName = "$STR_rhs_bmd1pk_des";
		model = "\rhs\addons\rhs_bmd\rhs_bmd1pk.p3d";
		picture = "\rhs\addons\rhs_bmd\rhs_bmd1pk_pic_ca.paa";
		scope = 2;

	};
	class rhs_bmd1p_des: rhs_bmd1_des_base
	{
		displayName = "$STR_rhs_bmd1p_des";
		model = "\rhs\addons\rhs_bmd\rhs_bmd1p.p3d";
		scope = 2;
	};
	class rhs_bmd1k_des: rhs_bmd1_des_base
	{
		displayName = "$STR_rhs_bmd1k_des";
		scope = 2;
	};
	class rhs_bmd1_des: rhs_bmd1_des_base
	{
		displayName = "$STR_rhs_bmd1_des";
		scope = 2;
	};
	class rhs_bmd1_peace_base: rhs_bmd1_base
	{
		hiddenSelectionsTextures[] =
			{
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"cwr2_vdv_bmd\mr_bmd1_01_peace_co.paa",
				"cwr2_vdv_bmd\mr_bmd1_02_peace.paa",
				"\x\acex_ru\addons\t_veh_bmd2\sa_bmd2_03_peace_co.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
			};
		class EventHandlers: DefaultEventHandlers
			{
				init = "_this call compile preProcessFile ""\ap_bmp_fix\bmdRU_init.sqf""";
				fired = "_this call RHS_bmd_Effects_EH_Fired;_this spawn DFS_bmd2at14_fired;_this spawn rhs_30mmcart_fired;_this spawn rhs_9m14_fired;";
				killed = "_this call RHS_bmd_Effects_EH_Killed;";
			};

	};
	class rhs_bmd1pk_peace: rhs_bmd1_peace_base
	{
		displayName = "$STR_rhs_bmd1pk_c4";
		model = "\rhs\addons\rhs_bmd\rhs_bmd1pk.p3d";
		picture = "\rhs\addons\rhs_bmd\rhs_bmd1pk_pic_ca.paa";
		scope = 2;

	};
	class rhs_bmd1p_peace: rhs_bmd1_peace_base
	{
		displayName = "$STR_rhs_bmd1p_c4";
		model = "\rhs\addons\rhs_bmd\rhs_bmd1p.p3d";
		scope = 2;
	};
	class rhs_bmd1k_peace: rhs_bmd1_peace_base
	{
		displayName = "$STR_rhs_bmd1k_c4";
		scope = 2;
	};
	class rhs_bmd1_peace: rhs_bmd1_peace_base
	{
		displayName = "$STR_rhs_bmd1_c4";
		scope = 2;
	};
	class rhs_bmd1_cdf_base: rhs_bmd1_base
	{
		faction = "CDF";
		hiddenSelectionsTextures[] =
			{
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"cwr2_vdv_bmd\mr_bmd1_01_cdf_co.paa",
				"cwr2_vdv_bmd\mr_bmd1_02_cdf.paa",
				"\x\acex_ru\addons\t_veh_bmd2\sa_bmd2_03_cdf_co.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
			};
		class EventHandlers: DefaultEventHandlers
			{
				init = "_this call compile preProcessFile ""\ap_bmp_fix\bmdRU_init.sqf""";
				fired = "_this call RHS_bmd_Effects_EH_Fired;_this spawn DFS_bmd2at14_fired;_this spawn rhs_30mmcart_fired;_this spawn rhs_9m14_fired;";
				killed = "_this call RHS_bmd_Effects_EH_Killed;";
			};

	};
	class rhs_bmd1pk_cdf: rhs_bmd1_cdf_base
	{
		displayName = "$STR_rhs_bmd1pk";
		model = "\rhs\addons\rhs_bmd\rhs_bmd1pk.p3d";
		picture = "\rhs\addons\rhs_bmd\rhs_bmd1pk_pic_ca.paa";
		scope = 2;

	};
	class rhs_bmd1p_cdf: rhs_bmd1_cdf_base
	{
		displayName = "$STR_rhs_bmd1p";
		model = "\rhs\addons\rhs_bmd\rhs_bmd1p.p3d";
		scope = 2;
	};
	class rhs_bmd1k_cdf: rhs_bmd1_cdf_base
	{
		displayName = "$STR_rhs_bmd1k";
		scope = 2;
	};
	class rhs_bmd1_cdf: rhs_bmd1_cdf_base
	{
		displayName = "$STR_rhs_bmd1";
		scope = 2;
	};
	class rhs_bmd1_ins_base: rhs_bmd1_base
	{
		faction = "INS";
		hiddenSelectionsTextures[] =
			{
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"cwr2_vdv_bmd\mr_bmd1_01_chdkz_co.paa",
				"cwr2_vdv_bmd\mr_bmd1_02_cdkz.paa",
				"\x\acex_ru\addons\t_veh_bmd2\sa_bmd2_03_chdkz_co.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
			};
		class EventHandlers: DefaultEventHandlers
			{
				init = "_this call compile preProcessFile ""\ap_bmp_fix\bmdRU_init.sqf""";
				fired = "_this call RHS_bmd_Effects_EH_Fired;_this spawn DFS_bmd2at14_fired;_this spawn rhs_30mmcart_fired;_this spawn rhs_9m14_fired;";
				killed = "_this call RHS_bmd_Effects_EH_Killed;";
			};

	};
	class rhs_bmd1pk_ins: rhs_bmd1_ins_base
	{
		displayName = "$STR_rhs_bmd1pk";
		model = "\rhs\addons\rhs_bmd\rhs_bmd1pk.p3d";
		picture = "\rhs\addons\rhs_bmd\rhs_bmd1pk_pic_ca.paa";
		scope = 2;

	};
	class rhs_bmd1p_ins: rhs_bmd1_ins_base
	{
		displayName = "$STR_rhs_bmd1p";
		model = "\rhs\addons\rhs_bmd\rhs_bmd1p.p3d";
		scope = 2;
	};
	class rhs_bmd1k_ins: rhs_bmd1_ins_base
	{
		displayName = "$STR_rhs_bmd1k";
		scope = 2;
	};
	class rhs_bmd1_ins: rhs_bmd1_ins_base
	{
		displayName = "$STR_rhs_bmd1";
		scope = 2;
	};
	//паки скинов БМД2
	class rhs_bmd2_rus1_base: rhs_bmd2_base
	{
		hiddenSelectionsTextures[] =
			{
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"\x\acex_ru\addons\t_veh_bmd2\sa_bmd2_01_rus1_co.paa",
				"\x\acex_ru\addons\t_veh_bmd2\sa_bmd2_02_rus1_co.paa",
				"\x\acex_ru\addons\t_veh_bmd2\sa_bmd2_03_rus1_co.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
			};
		class EventHandlers: DefaultEventHandlers
			{
				init = "_this call compile preProcessFile ""\ap_bmp_fix\bmdRU_init.sqf""";
				fired = "_this call RHS_bmd_Effects_EH_Fired;_this spawn DFS_bmd2at14_fired;_this spawn rhs_30mmcart_fired;_this spawn rhs_9m14_fired;";
				killed = "_this call RHS_bmd_Effects_EH_Killed;";
			};

	};
	class rhs_bmd2_rus1: rhs_bmd2_rus1_base
	{
		displayName = "$STR_rhs_bmd2_c1";
		scope = 2;

	};
	class rhs_bmd2m_rus1: rhs_bmd2_rus1_base
	{
		ace_sys_reticles_gunneroptics = 0;
		ace_tankfcs_digitscolor[] = {0.93,0.96,0.294,1};
		ace_tankfcs_digitsstyle = 1;
		ace_tankfcs_enabled = 1;
		ace_tankfcs_lrfaccuracy = 20;
		ace_tankfcs_lrfcooldowntime = 3;
		ace_tankfcs_maxlead = 2;
		ace_tankfcs_maxlrfrange = 5200;
		ace_tankfcs_maxranges[] = {"ACE_180Rnd_30mmAP_2A42",2500,"ACE_120Rnd_30mmHE_2A42",2500,"250Rnd_762x54_PKT_T90",1600};
		ace_tankfcs_minlrfrange = 200;
		ace_tankfcs_rdystyle = 1;
		scope = 2;
		model = "\rhs\addons\rhs_bmd\rhs_bmd2m.p3d";
		displayName = "$STR_rhs_bmd2m_c1";
		transportSoldier = 0;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"ACE_2A42","PKT_veh","AT5LauncherSingle","ACE_SACLOS_Guidance"};
				magazines[] = {"ACE_180Rnd_30mmAP_2A42","ACE_120Rnd_30mmHE_2A42","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","ACE_AT5B","ACE_AT5B"};
				turretInfoType = "rhs_gui_optic_thermalscreen";
				class OpticsIn
				{
					class gunnerSightWide
					{
						initAngleX = 0;
						minAngleX = -110;
						maxAngleX = 110;
						initAngleY = 0;
						minAngleY = -110;
						maxAngleY = 110;
						opticsZoomMin = 0.14;
						opticsZoomMax = 0.14;
						distanceZoomMin = 200;
						distanceZoomMax = 2000;
						initFov = 0.14;
						minFov = 0.14;
						maxFov = 0.14;
						visionMode[] = {"Normal","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsModel = "\rhs\addons\rhs_optics\vehicles\rhs_thermalScreen_wide";
						gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
					};
					class gunnerSightNarrow
					{
						initAngleX = 0;
						minAngleX = -110;
						maxAngleX = 110;
						initAngleY = 0;
						minAngleY = -110;
						maxAngleY = 110;
						opticsZoomMin = 0.047;
						opticsZoomMax = 0.047;
						distanceZoomMin = 200;
						distanceZoomMax = 2000;
						initFov = 0.047;
						minFov = 0.047;
						maxFov = 0.047;
						visionMode[] = {"Normal","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsModel = "\rhs\addons\rhs_optics\vehicles\rhs_thermalScreen_narrow";
						gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
					};
				};
			};
			class CommanderOptics2: CommanderOptics1{};
			class GPMGTurretBMD2: GPMGTurretBMD1{};
			class LeftBack2: LeftBack1{};
			class RightBack2: RightBack1{};
			class MainBack2: MainBack1{};
		};
	};
	class rhs_bmd2k_rus1: rhs_bmd2_rus1_base
	{
		displayName = "$STR_rhs_bmd2k_c1";
		scope = 2;
	};
	class rhs_bmd2_rus2_base: rhs_bmd2_base
	{
		hiddenSelectionsTextures[] =
			{
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"\x\acex_ru\addons\t_veh_bmd2\sa_bmd2_01_des_co.paa",
				"\x\acex_ru\addons\t_veh_bmd2\sa_bmd2_02_des_co.paa",
				"\x\acex_ru\addons\t_veh_bmd2\sa_bmd2_03_des_co.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
			};
		class EventHandlers: DefaultEventHandlers
			{
				init = "_this call compile preProcessFile ""\ap_bmp_fix\bmdRU_init.sqf""";
				fired = "_this call RHS_bmd_Effects_EH_Fired;_this spawn DFS_bmd2at14_fired;_this spawn rhs_30mmcart_fired;_this spawn rhs_9m14_fired;";
				killed = "_this call RHS_bmd_Effects_EH_Killed;";
			};

	};
	class rhs_bmd2_rus2: rhs_bmd2_rus2_base
	{
		displayName = "$STR_rhs_bmd2_c2";
		scope = 2;

	};
	class rhs_bmd2m_rus2: rhs_bmd2_rus2_base
	{
		ace_sys_reticles_gunneroptics = 0;
		ace_tankfcs_digitscolor[] = {0.93,0.96,0.294,1};
		ace_tankfcs_digitsstyle = 1;
		ace_tankfcs_enabled = 1;
		ace_tankfcs_lrfaccuracy = 20;
		ace_tankfcs_lrfcooldowntime = 3;
		ace_tankfcs_maxlead = 2;
		ace_tankfcs_maxlrfrange = 5200;
		ace_tankfcs_maxranges[] = {"ACE_180Rnd_30mmAP_2A42",2500,"ACE_120Rnd_30mmHE_2A42",2500,"250Rnd_762x54_PKT_T90",1600};
		ace_tankfcs_minlrfrange = 200;
		ace_tankfcs_rdystyle = 1;
		scope = 2;
		model = "\rhs\addons\rhs_bmd\rhs_bmd2m.p3d";
		displayName = "$STR_rhs_bmd2m_c2";
		transportSoldier = 0;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"ACE_2A42","PKT_veh","AT5LauncherSingle","ACE_SACLOS_Guidance"};
				magazines[] = {"ACE_180Rnd_30mmAP_2A42","ACE_120Rnd_30mmHE_2A42","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","ACE_AT5B","ACE_AT5B"};
				turretInfoType = "rhs_gui_optic_thermalscreen";
				class OpticsIn
				{
					class gunnerSightWide
					{
						initAngleX = 0;
						minAngleX = -110;
						maxAngleX = 110;
						initAngleY = 0;
						minAngleY = -110;
						maxAngleY = 110;
						opticsZoomMin = 0.14;
						opticsZoomMax = 0.14;
						distanceZoomMin = 200;
						distanceZoomMax = 2000;
						initFov = 0.14;
						minFov = 0.14;
						maxFov = 0.14;
						visionMode[] = {"Normal","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsModel = "\rhs\addons\rhs_optics\vehicles\rhs_thermalScreen_wide";
						gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
					};
					class gunnerSightNarrow
					{
						initAngleX = 0;
						minAngleX = -110;
						maxAngleX = 110;
						initAngleY = 0;
						minAngleY = -110;
						maxAngleY = 110;
						opticsZoomMin = 0.047;
						opticsZoomMax = 0.047;
						distanceZoomMin = 200;
						distanceZoomMax = 2000;
						initFov = 0.047;
						minFov = 0.047;
						maxFov = 0.047;
						visionMode[] = {"Normal","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsModel = "\rhs\addons\rhs_optics\vehicles\rhs_thermalScreen_narrow";
						gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
					};
				};
			};
			class CommanderOptics2: CommanderOptics1{};
			class GPMGTurretBMD2: GPMGTurretBMD1{};
			class LeftBack2: LeftBack1{};
			class RightBack2: RightBack1{};
			class MainBack2: MainBack1{};
		};
	};
	class rhs_bmd2k_rus2: rhs_bmd2_rus2_base
	{
		displayName = "$STR_rhs_bmd2k_c2";
		scope = 2;
	};
	class rhs_bmd2_rus3_base: rhs_bmd2_base
	{
		hiddenSelectionsTextures[] =
			{
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"\x\acex_ru\addons\t_veh_bmd2\sa_bmd2_01_rus4_co.paa",
				"\x\acex_ru\addons\t_veh_bmd2\sa_bmd2_02_rus4_co.paa",
				"\x\acex_ru\addons\t_veh_bmd2\sa_bmd2_03_rus4_co.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
			};
		class EventHandlers: DefaultEventHandlers
			{
				init = "_this call compile preProcessFile ""\ap_bmp_fix\bmdRU_init.sqf""";
				fired = "_this call RHS_bmd_Effects_EH_Fired;_this spawn DFS_bmd2at14_fired;_this spawn rhs_30mmcart_fired;_this spawn rhs_9m14_fired;";
				killed = "_this call RHS_bmd_Effects_EH_Killed;";
			};

	};
	class rhs_bmd2_rus3: rhs_bmd2_rus3_base
	{
		displayName = "$STR_rhs_bmd2_c3";
		scope = 2;

	};
	class rhs_bmd2m_rus3: rhs_bmd2_rus3_base
	{
		ace_sys_reticles_gunneroptics = 0;
		ace_tankfcs_digitscolor[] = {0.93,0.96,0.294,1};
		ace_tankfcs_digitsstyle = 1;
		ace_tankfcs_enabled = 1;
		ace_tankfcs_lrfaccuracy = 20;
		ace_tankfcs_lrfcooldowntime = 3;
		ace_tankfcs_maxlead = 2;
		ace_tankfcs_maxlrfrange = 5200;
		ace_tankfcs_maxranges[] = {"ACE_180Rnd_30mmAP_2A42",2500,"ACE_120Rnd_30mmHE_2A42",2500,"250Rnd_762x54_PKT_T90",1600};
		ace_tankfcs_minlrfrange = 200;
		ace_tankfcs_rdystyle = 1;
		scope = 2;
		model = "\rhs\addons\rhs_bmd\rhs_bmd2m.p3d";
		displayName = "$STR_rhs_bmd2m_c3";
		transportSoldier = 0;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"ACE_2A42","PKT_veh","AT5LauncherSingle","ACE_SACLOS_Guidance"};
				magazines[] = {"ACE_180Rnd_30mmAP_2A42","ACE_120Rnd_30mmHE_2A42","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","ACE_AT5B","ACE_AT5B"};
				turretInfoType = "rhs_gui_optic_thermalscreen";
				class OpticsIn
				{
					class gunnerSightWide
					{
						initAngleX = 0;
						minAngleX = -110;
						maxAngleX = 110;
						initAngleY = 0;
						minAngleY = -110;
						maxAngleY = 110;
						opticsZoomMin = 0.14;
						opticsZoomMax = 0.14;
						distanceZoomMin = 200;
						distanceZoomMax = 2000;
						initFov = 0.14;
						minFov = 0.14;
						maxFov = 0.14;
						visionMode[] = {"Normal","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsModel = "\rhs\addons\rhs_optics\vehicles\rhs_thermalScreen_wide";
						gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
					};
					class gunnerSightNarrow
					{
						initAngleX = 0;
						minAngleX = -110;
						maxAngleX = 110;
						initAngleY = 0;
						minAngleY = -110;
						maxAngleY = 110;
						opticsZoomMin = 0.047;
						opticsZoomMax = 0.047;
						distanceZoomMin = 200;
						distanceZoomMax = 2000;
						initFov = 0.047;
						minFov = 0.047;
						maxFov = 0.047;
						visionMode[] = {"Normal","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsModel = "\rhs\addons\rhs_optics\vehicles\rhs_thermalScreen_narrow";
						gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
					};
				};
			};
			class CommanderOptics2: CommanderOptics1{};
			class GPMGTurretBMD2: GPMGTurretBMD1{};
			class LeftBack2: LeftBack1{};
			class RightBack2: RightBack1{};
			class MainBack2: MainBack1{};
		};
	};
	class rhs_bmd2k_rus3: rhs_bmd2_rus3_base
	{
		displayName = "$STR_rhs_bmd2k_c3";
		scope = 2;
	};
	class rhs_bmd2_des_base: rhs_bmd2_base
	{
		hiddenSelectionsTextures[] =
			{
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"\x\acex_ru\addons\t_veh_bmd2\sa_bmd2_01_rus2_co.paa",
				"\x\acex_ru\addons\t_veh_bmd2\sa_bmd2_02_rus2_co.paa",
				"\x\acex_ru\addons\t_veh_bmd2\sa_bmd2_03_rus2_co.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
			};
		class EventHandlers: DefaultEventHandlers
			{
				init = "_this call compile preProcessFile ""\ap_bmp_fix\bmdRU_init.sqf""";
				fired = "_this call RHS_bmd_Effects_EH_Fired;_this spawn DFS_bmd2at14_fired;_this spawn rhs_30mmcart_fired;_this spawn rhs_9m14_fired;";
				killed = "_this call RHS_bmd_Effects_EH_Killed;";
			};

	};
	class rhs_bmd2_des: rhs_bmd2_des_base
	{
		displayName = "$STR_rhs_bmd2_des";
		scope = 2;

	};
	class rhs_bmd2m_des: rhs_bmd2_des_base
	{
		ace_sys_reticles_gunneroptics = 0;
		ace_tankfcs_digitscolor[] = {0.93,0.96,0.294,1};
		ace_tankfcs_digitsstyle = 1;
		ace_tankfcs_enabled = 1;
		ace_tankfcs_lrfaccuracy = 20;
		ace_tankfcs_lrfcooldowntime = 3;
		ace_tankfcs_maxlead = 2;
		ace_tankfcs_maxlrfrange = 5200;
		ace_tankfcs_maxranges[] = {"ACE_180Rnd_30mmAP_2A42",2500,"ACE_120Rnd_30mmHE_2A42",2500,"250Rnd_762x54_PKT_T90",1600};
		ace_tankfcs_minlrfrange = 200;
		ace_tankfcs_rdystyle = 1;
		scope = 2;
		model = "\rhs\addons\rhs_bmd\rhs_bmd2m.p3d";
		displayName = "$STR_rhs_bmd2m_des";
		transportSoldier = 0;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"ACE_2A42","PKT_veh","AT5LauncherSingle","ACE_SACLOS_Guidance"};
				magazines[] = {"ACE_180Rnd_30mmAP_2A42","ACE_120Rnd_30mmHE_2A42","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","ACE_AT5B","ACE_AT5B"};
				turretInfoType = "rhs_gui_optic_thermalscreen";
				class OpticsIn
				{
					class gunnerSightWide
					{
						initAngleX = 0;
						minAngleX = -110;
						maxAngleX = 110;
						initAngleY = 0;
						minAngleY = -110;
						maxAngleY = 110;
						opticsZoomMin = 0.14;
						opticsZoomMax = 0.14;
						distanceZoomMin = 200;
						distanceZoomMax = 2000;
						initFov = 0.14;
						minFov = 0.14;
						maxFov = 0.14;
						visionMode[] = {"Normal","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsModel = "\rhs\addons\rhs_optics\vehicles\rhs_thermalScreen_wide";
						gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
					};
					class gunnerSightNarrow
					{
						initAngleX = 0;
						minAngleX = -110;
						maxAngleX = 110;
						initAngleY = 0;
						minAngleY = -110;
						maxAngleY = 110;
						opticsZoomMin = 0.047;
						opticsZoomMax = 0.047;
						distanceZoomMin = 200;
						distanceZoomMax = 2000;
						initFov = 0.047;
						minFov = 0.047;
						maxFov = 0.047;
						visionMode[] = {"Normal","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsModel = "\rhs\addons\rhs_optics\vehicles\rhs_thermalScreen_narrow";
						gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
					};
				};
			};
			class CommanderOptics2: CommanderOptics1{};
			class GPMGTurretBMD2: GPMGTurretBMD1{};
			class LeftBack2: LeftBack1{};
			class RightBack2: RightBack1{};
			class MainBack2: MainBack1{};
		};
	};
	class rhs_bmd2k_des: rhs_bmd2_des_base
	{
		displayName = "$STR_rhs_bmd2k_des";
		scope = 2;
	};
	class rhs_bmd2_dirt_base: rhs_bmd2_base
	{
		hiddenSelectionsTextures[] =
			{
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"\x\acex_ru\addons\t_veh_bmd2\sa_bmd2_01_ua_co.paa",
				"\x\acex_ru\addons\t_veh_bmd2\sa_bmd2_02_ua_co.paa",
				"\x\acex_ru\addons\t_veh_bmd2\sa_bmd2_03_ua_co.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
			};
		class EventHandlers: DefaultEventHandlers
			{
				init = "_this call compile preProcessFile ""\ap_bmp_fix\bmdRU_init.sqf""";
				fired = "_this call RHS_bmd_Effects_EH_Fired;_this spawn DFS_bmd2at14_fired;_this spawn rhs_30mmcart_fired;_this spawn rhs_9m14_fired;";
				killed = "_this call RHS_bmd_Effects_EH_Killed;";
			};

	};
	class rhs_bmd2_dirt: rhs_bmd2_dirt_base
	{
		displayName = "$STR_rhs_bmd2_dirt";
		scope = 2;

	};
	class rhs_bmd2m_dirt: rhs_bmd2_dirt_base
	{
		ace_sys_reticles_gunneroptics = 0;
		ace_tankfcs_digitscolor[] = {0.93,0.96,0.294,1};
		ace_tankfcs_digitsstyle = 1;
		ace_tankfcs_enabled = 1;
		ace_tankfcs_lrfaccuracy = 20;
		ace_tankfcs_lrfcooldowntime = 3;
		ace_tankfcs_maxlead = 2;
		ace_tankfcs_maxlrfrange = 5200;
		ace_tankfcs_maxranges[] = {"ACE_180Rnd_30mmAP_2A42",2500,"ACE_120Rnd_30mmHE_2A42",2500,"250Rnd_762x54_PKT_T90",1600};
		ace_tankfcs_minlrfrange = 200;
		ace_tankfcs_rdystyle = 1;
		scope = 2;
		model = "\rhs\addons\rhs_bmd\rhs_bmd2m.p3d";
		displayName = "$STR_rhs_bmd2m_dirt";
		transportSoldier = 0;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"ACE_2A42","PKT_veh","AT5LauncherSingle","ACE_SACLOS_Guidance"};
				magazines[] = {"ACE_180Rnd_30mmAP_2A42","ACE_120Rnd_30mmHE_2A42","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","ACE_AT5B","ACE_AT5B"};
				turretInfoType = "rhs_gui_optic_thermalscreen";
				class OpticsIn
				{
					class gunnerSightWide
					{
						initAngleX = 0;
						minAngleX = -110;
						maxAngleX = 110;
						initAngleY = 0;
						minAngleY = -110;
						maxAngleY = 110;
						opticsZoomMin = 0.14;
						opticsZoomMax = 0.14;
						distanceZoomMin = 200;
						distanceZoomMax = 2000;
						initFov = 0.14;
						minFov = 0.14;
						maxFov = 0.14;
						visionMode[] = {"Normal","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsModel = "\rhs\addons\rhs_optics\vehicles\rhs_thermalScreen_wide";
						gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
					};
					class gunnerSightNarrow
					{
						initAngleX = 0;
						minAngleX = -110;
						maxAngleX = 110;
						initAngleY = 0;
						minAngleY = -110;
						maxAngleY = 110;
						opticsZoomMin = 0.047;
						opticsZoomMax = 0.047;
						distanceZoomMin = 200;
						distanceZoomMax = 2000;
						initFov = 0.047;
						minFov = 0.047;
						maxFov = 0.047;
						visionMode[] = {"Normal","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsModel = "\rhs\addons\rhs_optics\vehicles\rhs_thermalScreen_narrow";
						gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
					};
				};
			};
			class CommanderOptics2: CommanderOptics1{};
			class GPMGTurretBMD2: GPMGTurretBMD1{};
			class LeftBack2: LeftBack1{};
			class RightBack2: RightBack1{};
			class MainBack2: MainBack1{};
		};
	};
	class rhs_bmd2k_dirt: rhs_bmd2_dirt_base
	{
		displayName = "$STR_rhs_bmd2k_dirt";
		scope = 2;
	};
	class rhs_bmd2_peace_base: rhs_bmd2_base
	{
		hiddenSelectionsTextures[] =
			{
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"\x\acex_ru\addons\t_veh_bmd2\sa_bmd2_01_peace_co.paa",
				"\x\acex_ru\addons\t_veh_bmd2\sa_bmd2_02_peace_co.paa",
				"\x\acex_ru\addons\t_veh_bmd2\sa_bmd2_03_peace_co.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
			};
		class EventHandlers: DefaultEventHandlers
			{
				init = "_this call compile preProcessFile ""\ap_bmp_fix\bmdRU_init.sqf""";
				fired = "_this call RHS_bmd_Effects_EH_Fired;_this spawn DFS_bmd2at14_fired;_this spawn rhs_30mmcart_fired;_this spawn rhs_9m14_fired;";
				killed = "_this call RHS_bmd_Effects_EH_Killed;";
			};

	};
	class rhs_bmd2_peace: rhs_bmd2_peace_base
	{
		displayName = "$STR_rhs_bmd2_c4";
		scope = 2;

	};
	class rhs_bmd2m_peace: rhs_bmd2_peace_base
	{
		ace_sys_reticles_gunneroptics = 0;
		ace_tankfcs_digitscolor[] = {0.93,0.96,0.294,1};
		ace_tankfcs_digitsstyle = 1;
		ace_tankfcs_enabled = 1;
		ace_tankfcs_lrfaccuracy = 20;
		ace_tankfcs_lrfcooldowntime = 3;
		ace_tankfcs_maxlead = 2;
		ace_tankfcs_maxlrfrange = 5200;
		ace_tankfcs_maxranges[] = {"ACE_180Rnd_30mmAP_2A42",2500,"ACE_120Rnd_30mmHE_2A42",2500,"250Rnd_762x54_PKT_T90",1600};
		ace_tankfcs_minlrfrange = 200;
		ace_tankfcs_rdystyle = 1;
		scope = 2;
		model = "\rhs\addons\rhs_bmd\rhs_bmd2m.p3d";
		displayName = "$STR_rhs_bmd2m_c4";
		transportSoldier = 0;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"ACE_2A42","PKT_veh","AT5LauncherSingle","ACE_SACLOS_Guidance"};
				magazines[] = {"ACE_180Rnd_30mmAP_2A42","ACE_120Rnd_30mmHE_2A42","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","ACE_AT5B","ACE_AT5B"};
				turretInfoType = "rhs_gui_optic_thermalscreen";
				class OpticsIn
				{
					class gunnerSightWide
					{
						initAngleX = 0;
						minAngleX = -110;
						maxAngleX = 110;
						initAngleY = 0;
						minAngleY = -110;
						maxAngleY = 110;
						opticsZoomMin = 0.14;
						opticsZoomMax = 0.14;
						distanceZoomMin = 200;
						distanceZoomMax = 2000;
						initFov = 0.14;
						minFov = 0.14;
						maxFov = 0.14;
						visionMode[] = {"Normal","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsModel = "\rhs\addons\rhs_optics\vehicles\rhs_thermalScreen_wide";
						gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
					};
					class gunnerSightNarrow
					{
						initAngleX = 0;
						minAngleX = -110;
						maxAngleX = 110;
						initAngleY = 0;
						minAngleY = -110;
						maxAngleY = 110;
						opticsZoomMin = 0.047;
						opticsZoomMax = 0.047;
						distanceZoomMin = 200;
						distanceZoomMax = 2000;
						initFov = 0.047;
						minFov = 0.047;
						maxFov = 0.047;
						visionMode[] = {"Normal","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsModel = "\rhs\addons\rhs_optics\vehicles\rhs_thermalScreen_narrow";
						gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
					};
				};
			};
			class CommanderOptics2: CommanderOptics1{};
			class GPMGTurretBMD2: GPMGTurretBMD1{};
			class LeftBack2: LeftBack1{};
			class RightBack2: RightBack1{};
			class MainBack2: MainBack1{};
		};
	};
	class rhs_bmd2k_peace: rhs_bmd2_peace_base
	{
		displayName = "$STR_rhs_bmd2k_c4";
		scope = 2;
	};
	class rhs_bmd2_cdf_base: rhs_bmd2_base
	{
		faction = "CDF";
		hiddenSelectionsTextures[] =
			{
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"\x\acex_ru\addons\t_veh_bmd2\sa_bmd2_01_cdf_co.paa",
				"\x\acex_ru\addons\t_veh_bmd2\sa_bmd2_02_cdf_co.paa",
				"\x\acex_ru\addons\t_veh_bmd2\sa_bmd2_03_cdf_co.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
			};
		class EventHandlers: DefaultEventHandlers
			{
				init = "_this call compile preProcessFile ""\ap_bmp_fix\bmdRU_init.sqf""";
				fired = "_this call RHS_bmd_Effects_EH_Fired;_this spawn DFS_bmd2at14_fired;_this spawn rhs_30mmcart_fired;_this spawn rhs_9m14_fired;";
				killed = "_this call RHS_bmd_Effects_EH_Killed;";
			};

	};
	class rhs_bmd2_cdf: rhs_bmd2_cdf_base
	{
		displayName = "$STR_rhs_bmd2";
		scope = 2;

	};
	class rhs_bmd2m_cdf: rhs_bmd2_cdf_base
	{
		ace_sys_reticles_gunneroptics = 0;
		ace_tankfcs_digitscolor[] = {0.93,0.96,0.294,1};
		ace_tankfcs_digitsstyle = 1;
		ace_tankfcs_enabled = 1;
		ace_tankfcs_lrfaccuracy = 20;
		ace_tankfcs_lrfcooldowntime = 3;
		ace_tankfcs_maxlead = 2;
		ace_tankfcs_maxlrfrange = 5200;
		ace_tankfcs_maxranges[] = {"ACE_180Rnd_30mmAP_2A42",2500,"ACE_120Rnd_30mmHE_2A42",2500,"250Rnd_762x54_PKT_T90",1600};
		ace_tankfcs_minlrfrange = 200;
		ace_tankfcs_rdystyle = 1;
		scope = 2;
		model = "\rhs\addons\rhs_bmd\rhs_bmd2m.p3d";
		displayName = "$STR_rhs_bmd2m";
		transportSoldier = 0;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"ACE_2A42","PKT_veh","AT5LauncherSingle","ACE_SACLOS_Guidance"};
				magazines[] = {"ACE_180Rnd_30mmAP_2A42","ACE_120Rnd_30mmHE_2A42","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","ACE_AT5B","ACE_AT5B"};
				turretInfoType = "rhs_gui_optic_thermalscreen";
				class OpticsIn
				{
					class gunnerSightWide
					{
						initAngleX = 0;
						minAngleX = -110;
						maxAngleX = 110;
						initAngleY = 0;
						minAngleY = -110;
						maxAngleY = 110;
						opticsZoomMin = 0.14;
						opticsZoomMax = 0.14;
						distanceZoomMin = 200;
						distanceZoomMax = 2000;
						initFov = 0.14;
						minFov = 0.14;
						maxFov = 0.14;
						visionMode[] = {"Normal","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsModel = "\rhs\addons\rhs_optics\vehicles\rhs_thermalScreen_wide";
						gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
					};
					class gunnerSightNarrow
					{
						initAngleX = 0;
						minAngleX = -110;
						maxAngleX = 110;
						initAngleY = 0;
						minAngleY = -110;
						maxAngleY = 110;
						opticsZoomMin = 0.047;
						opticsZoomMax = 0.047;
						distanceZoomMin = 200;
						distanceZoomMax = 2000;
						initFov = 0.047;
						minFov = 0.047;
						maxFov = 0.047;
						visionMode[] = {"Normal","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsModel = "\rhs\addons\rhs_optics\vehicles\rhs_thermalScreen_narrow";
						gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
					};
				};
			};
			class CommanderOptics2: CommanderOptics1{};
			class GPMGTurretBMD2: GPMGTurretBMD1{};
			class LeftBack2: LeftBack1{};
			class RightBack2: RightBack1{};
			class MainBack2: MainBack1{};
		};
	};
	class rhs_bmd2k_cdf: rhs_bmd2_cdf_base
	{
		displayName = "$STR_rhs_bmd2k";
		scope = 2;
	};
	class rhs_bmd2_ins_base: rhs_bmd2_base
	{
		faction = "INS";
		hiddenSelectionsTextures[] =
			{
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
				"\x\acex_ru\addons\t_veh_bmd2\sa_bmd2_01_chdkz_co.paa",
				"\x\acex_ru\addons\t_veh_bmd2\sa_bmd2_02_chdkz_co.paa",
				"\x\acex_ru\addons\t_veh_bmd2\sa_bmd2_03_chdkz_co.paa",
				"rhs\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
			};
		class EventHandlers: DefaultEventHandlers
			{
				init = "_this call compile preProcessFile ""\ap_bmp_fix\bmdRU_init.sqf""";
				fired = "_this call RHS_bmd_Effects_EH_Fired;_this spawn DFS_bmd2at14_fired;_this spawn rhs_30mmcart_fired;_this spawn rhs_9m14_fired;";
				killed = "_this call RHS_bmd_Effects_EH_Killed;";
			};

	};
	class rhs_bmd2_ins: rhs_bmd2_ins_base
	{
		displayName = "$STR_rhs_bmd2";
		scope = 2;

	};
	class rhs_bmd2m_ins: rhs_bmd2_ins_base
	{
		ace_sys_reticles_gunneroptics = 0;
		ace_tankfcs_digitscolor[] = {0.93,0.96,0.294,1};
		ace_tankfcs_digitsstyle = 1;
		ace_tankfcs_enabled = 1;
		ace_tankfcs_lrfaccuracy = 20;
		ace_tankfcs_lrfcooldowntime = 3;
		ace_tankfcs_maxlead = 2;
		ace_tankfcs_maxlrfrange = 5200;
		ace_tankfcs_maxranges[] = {"ACE_180Rnd_30mmAP_2A42",2500,"ACE_120Rnd_30mmHE_2A42",2500,"250Rnd_762x54_PKT_T90",1600};
		ace_tankfcs_minlrfrange = 200;
		ace_tankfcs_rdystyle = 1;
		scope = 2;
		model = "\rhs\addons\rhs_bmd\rhs_bmd2m.p3d";
		displayName = "$STR_rhs_bmd2m";
		transportSoldier = 0;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"ACE_2A42","PKT_veh","AT5LauncherSingle","ACE_SACLOS_Guidance"};
				magazines[] = {"ACE_180Rnd_30mmAP_2A42","ACE_120Rnd_30mmHE_2A42","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","250Rnd_762x54_PKT_T90","ACE_AT5B","ACE_AT5B"};
				turretInfoType = "rhs_gui_optic_thermalscreen";
				class OpticsIn
				{
					class gunnerSightWide
					{
						initAngleX = 0;
						minAngleX = -110;
						maxAngleX = 110;
						initAngleY = 0;
						minAngleY = -110;
						maxAngleY = 110;
						opticsZoomMin = 0.14;
						opticsZoomMax = 0.14;
						distanceZoomMin = 200;
						distanceZoomMax = 2000;
						initFov = 0.14;
						minFov = 0.14;
						maxFov = 0.14;
						visionMode[] = {"Normal","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsModel = "\rhs\addons\rhs_optics\vehicles\rhs_thermalScreen_wide";
						gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
					};
					class gunnerSightNarrow
					{
						initAngleX = 0;
						minAngleX = -110;
						maxAngleX = 110;
						initAngleY = 0;
						minAngleY = -110;
						maxAngleY = 110;
						opticsZoomMin = 0.047;
						opticsZoomMax = 0.047;
						distanceZoomMin = 200;
						distanceZoomMax = 2000;
						initFov = 0.047;
						minFov = 0.047;
						maxFov = 0.047;
						visionMode[] = {"Normal","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsModel = "\rhs\addons\rhs_optics\vehicles\rhs_thermalScreen_narrow";
						gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
					};
				};
			};
			class CommanderOptics2: CommanderOptics1{};
			class GPMGTurretBMD2: GPMGTurretBMD1{};
			class LeftBack2: LeftBack1{};
			class RightBack2: RightBack1{};
			class MainBack2: MainBack1{};
		};
	};
	class rhs_bmd2k_ins: rhs_bmd2_ins_base
	{
		displayName = "$STR_rhs_bmd2k";
		scope = 2;
	};
	
	class BMP3 : Tracked_APC
	{
		class Turrets: Turrets
			{
				class MainTurret: MainTurret
				{
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
							gunnerOutOpticsEffect[]={};
						};
						class Medium: Wide
						{
							initFov="0.33333/ 5";
							minFov="0.33333/ 5";
							maxFov="0.33333/ 5";
							gunnerOpticsModel="\ap_rhs_vehicles\optic\rhs_1k13_3s_5x";
							visionMode[]=
							{
								"Normal"
							};
						};
						class Narrow: Wide
						{
							initFov="0.33333/ 14";
							minFov="0.33333/ 14";
							maxFov="0.33333/ 14";
							gunnerOpticsModel="\ap_rhs_vehicles\optic\rhs_1k13_3s_14x";
							visionMode[]=
							{
								"Normal"
							};
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
				};
			};
	};
	class TU_BMP3_BAKHCHA : BMP3
	{
		class Turrets: Turrets
			{
				class MainTurret: MainTurret
				{
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
							initFov="0.33333/ 2.5";
							minFov="0.33333/ 12";
							maxFov="0.33333/ 2.5";
							gunneropticsmodel = "\ca\air\optika_Ka50_gun";
							visionMode[] = {"Normal", "Ti"};
							gunnerOpticsEffect[] = {};
						};
						delete Medium;
						delete Narrow;
						delete VeryNarrow;
					};
				};
			};
	};
};