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

class CfgVehicles
{
	class Tank;
	class Tracked_APC: Tank
	{
		class Turrets;
		class NewTurret;
		class ViewOptics;
	};
	class BMP2_Base: Tracked_APC
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
		class ViewPilot;
		class ViewOptics;
	};
	class rhs_bmp_base: BMP2_Base {};
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
		ace_armor_hull[] = {{40,40},{28,33},{28,33},{16,16},{16,16},{50,50}};
		ace_armor_turret[] = {{33,33},{19,19},{19,19},{25,25},{16,16}};
	};
	
	
	
	class rhs_bmd_base: BMP2_Base
	{
		class GPMGTurret1;
		class LeftBack;
		class RightBack;
		class MainBack;		
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
		displayName = "$STR_BMD2M_Name";
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
		displayName = "$STR_BMD2K_Name";
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
	
};