#define _ARMA_

class CfgPatches
{
	class ap_btr90m
	{
		units[] = {"AP_BTR90M"};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"ace_main","ace_c_vehicle","CATracked2","CAWheeled2","balca_CE","retex_vehicles"};
	};
};

class CfgVehicles
{
	class LandVehicle;
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
		};
		class NewTurret;
		class Turrets
		{
			class MainTurret:NewTurret
			{
				class HitPoints;
			};
		};
		class ViewPilot;
		class AnimationSources;
	};
	class Wheeled_APC:Car {};
	class BTR90_Base: Wheeled_APC {};
	class AP_BTR90M : BTR90_Base
	{
	
		ace_tankfcs_enabled = 1;
		ace_tankfcs_maxlrfrange = 5200;
		ace_tankfcs_minlrfrange = 200;
		ace_tankfcs_lrfaccuracy = 20;
		ace_tankfcs_lrfcooldowntime = 3;
		ace_tankfcs_maxlead = 2;
		ace_tankfcs_battlesight = 1000;
		ace_tankfcs_digitscolor[] = {0.93,0.96,0.294,1};
		ace_tankfcs_digitsstyle = 1;
		ace_tankfcs_rdystyle = 1;
		ace_tankfcs_maxranges[] = {"250Rnd_30mmHE_2A72",4000,"250Rnd_30mmAP_2A72",4000,"34Rnd_100mm_HE_2A70",5000,"250Rnd_762x54_PKT_T90",1600};

		model = "\ap_btr90m\btr90m";
		displayName = $STR_BTR90M;
		class Library {libTextDesc = $STR_BTR90M_LIB;};
		scope = 2;
		
		class Reflectors
		{
			class Left
			{
				color[] = {0.9, 0.8, 0.8, 1.0};
				ambient[] = {0.1, 0.1, 0.1, 1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness =0.5;
			};
			class Right:Left
			{
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
			};
		};
		
		/*class AnimationSources:AnimationSources
		{
			class recoil_source
			{
				animPeriod = 0;
				source = "reload";
				weapon = "ACE_2A70";
			};
		};*/
		
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minTurn=-360; maxTurn=+360;
				forceHideGunner = false;
				memoryPointGun = "machinegun";
				selectionFireAnim = "zasleh1";
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
				
				maxhorizontalrotspeed = 1.4;
				maxverticalrotspeed = 1.4;
				gunneropticsmodel = "\ca\weapons\2Dscope_BMP3gun";

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
				weapons[] = {"2A72","ACE_2A70","PKT"};
				magazines[] = {"250Rnd_30mmHE_2A72","250Rnd_30mmAP_2A72","34Rnd_100mm_HE_2A70","4Rnd_AT10_BMP3","2000Rnd_762x54_PKT"};
				soundServo[] = {"\Ca\sounds\Vehicles\Servos\turret-2",0.01,1.0,20};
				gunnerOutOpticsModel = "";
				gunnerOutOpticsEffect[] = {};
				minElev = -6;
				maxElev = 60;
				initElev = 0;
				gunnerForceOptics = 0;
				gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
				
				class OpticsIn {
					class Wide {
						gunneropticsmodel = "\ca\weapons\2Dscope_BMP3gun";
						initanglex = 0;
						initangley = 0;
						initfov = "0.33333/ 2.5";
						maxanglex = 30;
						maxangley = 100;
						maxfov = "0.33333/ 2.5";
						minanglex = -30;
						minangley = -100;
						minfov = "0.33333/ 12";
						visionMode[] = {"Normal","Ti"};
						thermalMode[] = {0};
					};
				};
				
				class Turrets: Turrets
				{
					class CommanderOptics: NewTurret {
						ace_sys_nvg_nvrange = 720;
						commanderforceoptics = 0;
						forcehidecommander = 0;
						gunneraction = "BMP3_Commander_OUT";
						gunnerforceoptics = 0;
						gunnergetinaction = "GetInMedium";
						gunnergetoutaction = "GetOutMedium";
						gunnerinaction = "BMP3_Commander";
						gunneropticseffect[] = {"TankCommanderOptics1"};
						gunneropticsmodel = "\ca\weapons\2Dscope_com3";
						gunneropticsshowcursor = 0;
						gunneroutopticsmodel = "";
						ingunnermayfire = 1;
						initturn = 0;
						magazines[] = {"SmokeLauncherMag", "SmokeLauncherMag"};
						maxturn = 360;
						memorypointsgetingunner = "pos commander";
						memorypointsgetingunnerdir = "pos commander dir";
						minturn = -360;
						outgunnermayfire = 1;
						soundservo[] = {"\Ca\sounds\Vehicles\Servos\turret-3", 0.01, 1, 20};
						stabilizedinaxes = 3;
						startengine = 0;
						viewgunnerinexternal = 0;
						weapons[] = {"SmokeLauncher"};
						
						class ViewOptics {
							initanglex = 0;
							initangley = 0;
							initfov = 0.3;
							maxanglex = 30;
							maxangley = 100;
							maxfov = 0.3;
							minanglex = -30;
							minangley = -100;
							minfov = 0.025;
						};
						class OpticsIn {
							class CWide {
								gunneropticsmodel = "\ca\weapons\2Dscope_com3";
								initanglex = 0;
								initangley = 0;
								initfov = "0.33333/ 1.2";
								maxanglex = 30;
								maxangley = 100;
								maxfov = "0.33333/ 1.2";
								minanglex = -30;
								minangley = -100;
								minfov = "0.33333/ 1.2";
								visionmode[] = {"Normal", "NVG", "Ti"};
								thermalMode[] = {0,1};
							};
							class CMedium: CWide {
								gunneropticsmodel = "\ca\weapons\2Dscope_com3";
								initfov = "0.33333/ 4";
								maxfov = "0.33333/ 4";
								minfov = "0.33333/ 4";
							};
						};

						proxyType = CPCommander;
						proxyIndex = 1;
						gunnerName = $STR_POSITION_COMMANDER;
						primaryGunner = 0;
						primaryObserver = 1;
						LODTurnedIn = VIEW_GUNNER;
						body = "obsTurret";
						gun = "obsGun";
						animationSourceBody =  "obsTurret";
						animationSourceGun =   "obsGun";
						animationSourceHatch = "hatchCommander";

						minElev=-4; maxElev=+60; initElev=0;
						commanding = 2;
						gunnerOutOpticsColor[] = {0, 0, 0, 1};
						gunnerOutForceOptics = false;
						gunnerOutOpticsShowCursor = false;
						memoryPointGunnerOutOptics = "commander_weapon_view";
						memoryPointGunnerOptics= "commanderview";					
					};
				};
			};
		};		
	
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"ca\wheeled2\btr90\data\body.rvmat",
				"ca\wheeled2\btr90\data\body_damage.rvmat",
				"ca\wheeled2\btr90\data\body_destruct.rvmat",

				//"ca\wheeled2\btr90\data\body2.rvmat",
				//"ca\wheeled2\btr90\data\body2_damage.rvmat",
				//"ca\wheeled2\btr90\data\body2_destruct.rvmat",
				
				"ca\tracked2\bmp3\data\body2.rvmat",
				"ca\tracked2\bmp3\data\body2_damage.rvmat",
				"ca\tracked2\bmp3\data\body2_destruct.rvmat",

				"ca\wheeled2\btr90\data\interrior.rvmat",
				"ca\wheeled2\btr90\data\interrior_damage.rvmat",
				"ca\wheeled2\btr90\data\interrior_destruct.rvmat",

				"ca\wheeled2\btr90\data\interrior2.rvmat",
				"ca\wheeled2\btr90\data\interrior2_damage.rvmat",
				"ca\wheeled2\btr90\data\interrior2_destruct.rvmat",

				"ca\wheeled2\BTR90\Data\btr_hq.rvmat",
				"ca\wheeled2\BTR90\Data\btr_hq_damage.rvmat",
				"ca\wheeled2\BTR90\Data\btr_hq_destruct.rvmat"
			};
		};
		hiddenSelections[] =
		{
			"Camo1",
			//"Camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"\ca\wheeled2\btr90\data\body_co.paa",
			//"\ca\wheeled2\btr90\data\body2_co.paa"
		};
		//For smoke launchers
		smokeLauncherGrenadeCount=3; //Number of smoke shells launched at once
		smokeLauncherVelocity=14; //Velocity which smoke shells are launched at
		smokeLauncherOnTurret=1; //0 if smoke launchers are on hull, 1 if on turret
		smokeLauncherAngle=70; //Angle within which smoke grenades are launched (actual spacing may end up smaller so use slighty higher number)

	};
};