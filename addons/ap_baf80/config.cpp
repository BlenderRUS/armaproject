#define _ARMA_

class CfgPatches
{
	class ap_baf80
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"tu_weapons_cfg","ace_c_weapon","ace_sys_crewserved"};
	};
};


class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		milan_gunner = "milan_gunner";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class milan_gunner: Crew
		{
			file = "\ap_baf80\weapons\milan\anims\milan_gunner.rtm";
			interpolateTo[] = {"KIA_SPG_Gunner",1};
		};
	};
};

class CfgAmmo
{
	class M_AT13_AT;
	class AP_BlowpipeMissile: M_AT13_AT
	{
		craterEffects = "AAMissileCrater";
		//effectsMissile = "missile3";
		explosionEffects = "AAMissileExplosion";
		fuseDistance = 50;
		ace_hit = 80;
		hit = 250;
		indirectHit = 150;
		indirectHitRange = 8;		
		model = "\ca\weapons\Stinger_Rocket";
		maxSpeed = 514;
	};
	
	class M_MILAN_AT: M_AT13_AT
	{
		ace_hit=650;
		hit=650;
		indirectHit=18;
		indirectHitRange=3.4000001;
		airFriction=-1.9999999e-005;
		maxSpeed=200;
		maxControlRange=2000;
		sideAirFriction = 0.5;
		simulationStep = 0.001;
		trackOversteer=2.5;
		initTime=0.25;
		timeToLive=20;
		thrustTime=1.5;
		thrust=133.60001;
		fusedistance=70;
		effectsMissile="missile2";
		explosionEffects="GrenadeExplosion";
		CraterEffects="ATMissileCrater";
		maneuvrability=25;
		manualControl = 1;
		model = "\ap_baf80\weapons\milan\milan_missile.p3d";
	};
};



class CfgMagazines 
{
	class Default
	{
		class ACE;
	};
	class CA_Magazine: Default
	{
		class ACE: ACE
		{
			class ACE_CREWSERVED
			{
			};
		};
	};
	class VehicleMagazine: CA_Magazine
	{
		class ACE: ACE
		{
			class ACE_CREWSERVED;
		};
	};
		class CA_LauncherMagazine: CA_Magazine
	{
		class ACE: ACE
		{
			class ACE_CREWSERVED;
		};
	};
	
	class AP_1Rnd_Milan: VehicleMagazine
	{
		displayName="$STR_MILAN_MAG_NAME";
		displayNameShort="$STR_MILAN_MAG_NAME_SHORT";
		ammo="M_MILAN_AT";
		initSpeed=75;
		count=1;
		ACE_Weight=6.73;
		picture="\ap_baf80\weapons\milan\data\milan_missile_ico.paa";
		model="\ap_baf80\weapons\milan_missile.p3d";
		class ACE: ACE
		{
			class ACE_CREWSERVED
			{
				unloadType="AP_MILAN_CSWDM";
				ACE_magXchange="AP_MILAN_CSWDM";
				ACE_magXchange_external=1;
			};
		};
	};	
	
	class ACE_CSWDM : CA_Magazine {};
	class ACE_Konkurs_CSWDM : ACE_CSWDM {};
	class AP_MILAN_CSWDM: ACE_Konkurs_CSWDM
	{
		displayName="$STR_MILAN_MAG_NAME";
		displayNameShort="$STR_MILAN_MAG_NAME_SHORT";
		ACE_Weight=6.73;
		ACE_Size=25500;
		picture="\ap_baf80\weapons\milan\data\milan_missile_ico.paa";
		model="\ap_baf80\weapons\milan\milan_missile.p3d";
		class ACE: ACE
		{
			class ACE_CREWSERVED: ACE_CREWSERVED
			{
				loadType="AP_1Rnd_Milan";
				ACE_magXchange_veh="AP_1Rnd_Milan";
			};
		};
	};
	
	class AP_BlowpipeRocket: CA_LauncherMagazine
	{
		ammo = "AP_BlowpipeMissile";
		descriptionShort = "$STR_BLOWPIPE_MAG_DESCRIPTION";
		displayName = "$STR_BLOWPIPE_MAG_NAME";
		displaynameShort = HESH;
		initSpeed = 40;
		picture = "\ap_baf80\weapons\blowpipe\data\m_stinger_ca.paa";
		scope = 2;	
		type = 4 * 256;
		ace_weight = 4.4;
		model = "\ca\weapons\Stinger_proxy";
	};
	
	class AP_30rd_762x51_Ball_Bren: CA_Magazine
	{
		scope = 2;
		ammo = "B_762x51_Ball";
		count = 30;
		initSpeed = 744;
		ace_weight = 1.5;
		picture = "\ap_baf80\weapons\bren\data\m_bren.paa";
		displayName = "$STR_BREN_MAG_NAME";
		descriptionShort = "$STR_BREN_MAG_DESCRIPTION";
		tracersEvery = 4;
		model = "\ca\weapons\mag_univ.p3d";	
	};
	class AP_30rd_762x51_T_Bren: AP_30rd_762x51_Ball_Bren
	{
		displayName = "$STR_BREN_T_MAG_NAME";
		descriptionShort = "$STR_BREN_T_MAG_DESCRIPTION";
		tracersEvery = 1;
	};
	
	class 30Rnd_9x19_MP5;
	class ap_mk4mag: 30Rnd_9x19_MP5
	{
		scope = 2;
		displayName = "$STR_MK4_MAG_NAME";
		model = "\ap_baf80\weapons\sterling\mag.p3d";
		picture = "\ap_baf80\weapons\sterling\data\m_l34a1.paa";
		ammo = "B_9x19_Ball";
		count = 34;
		initSpeed = 410;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		descriptionShort = "$STR_MK4_MAG_DESCRIPTION";
	};
	
	class ap_l34a1mag: ap_mk4mag
	{
		displayName = "$STR_MK4_SD_MAG_NAME";
		ammo = "ACE_B_9x19_S";
		initSpeed = 320;
		descriptionShort = "$STR_MK4_SD_MAG_DESCRIPTION";
	};

	class AP_10Rnd_762x51_L42 : CA_Magazine 
	{
		scope = 2;
		displayName = "$STR_L42_MAG_NAME";
		picture = "\ap_baf80\weapons\l42\data\m_g3.paa";
		count = 10;
		ammo = "B_762x51_Ball";
		initSpeed = 800;
		descriptionShort = "$STR_L42_MAG_DESCRIPTION";
		ace_weight = 0.4;
	};
};	

class Mode_SemiAuto;
class Mode_FullAuto;
class cfgWeapons
{
	
	class huntingrifle;
	class AP_L42 : huntingrifle 
	{
		scope = 2;
		opticsZoomMin = 0.083;
		opticsZoomMax = 0.083;
		magazineReloadTime = 3;
		ace_weight = 4.4;
		magazines[] = {"AP_10Rnd_762x51_L42"};
		reloadMagazineSound[] = {"\ap_baf80\weapons\l42\sounds\reload.wss", 0.005, 1, 20};
		modeloptics = "\ca\weapons\2Dscope_Hunter_12";
		opticsppeffects[] = {"OpticsCHAbera2", "OpticsBlur2"};
		model = "\ap_baf80\weapons\l42\l42";
		displayName = "$STR_L42_NAME";
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\M24.rtm"};
		SIX_tracerEnable = 0;
		SIX_tracerDiff = 0;
		picture = "\CA\weapons\data\equip\w_m24_green_ca.paa";
		class Library { libtextdesc = "$STR_L42_DESCRIPTION"; };
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			begin1[] = {"\ap_baf80\weapons\l42\sounds\l42fire.wss", 10, 1, 1000};
			begin2[] = {"\ap_baf80\weapons\l42\sounds\l42fire.wss", 10, 1, 1000};
			begin3[] = {"\ap_baf80\weapons\l42\sounds\l42fire.wss", 10, 1, 1000};
			soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			soundBurst = 0;
			reloadTime = 2;
			recoil = "ACE_762x51_Rifle_Recoil";
			recoilProne = "ACE_762x51_Rifle_RecoilProne";
			dispersion = 0.003;
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 800;
			maxRangeProbab = 0.05;
		};
};
	
	
	
	class ACE_CarlGustav_M3;
	class AP_CarlGustav: ACE_CarlGustav_M3
	{
		displayName = "$STR_GUSTAV_NAME";
		handAnim[] = {"OFP2_ManSkeleton","\ap_baf80\weapons\gustav\anims\carlgustav.rtm"};
		ace_weight = 14;
		opticsZoomMin = 0.3333 / 2;
		opticsZoomMax = 0.3333 / 2;
		model = "\ap_baf80\weapons\gustav\carlgustav.p3d";
		modelSpecial = "\ap_baf80\weapons\gustav\carlgustav.p3d";
		picture = "\ap_baf80\weapons\gustav\data\w_carlgustav_ca.paa";
		descriptionShort = "$STR_GUSTAV_DESCRIPTION";
		class Library
		{
			libtextdesc = "$STR_GUSTAV_DESCRIPTION";
		};
	};
	
	class MP5A5;
	class AP_Sterling: MP5A5
	{
		scope = 2;
		displayName = "$STR_MK4_NAME";
		model = "\ap_baf80\weapons\sterling\sterling";
		picture = "\ap_baf80\weapons\sterling\data\w_l2a3.paa";
		magazines[] = {"ap_mk4mag","ap_l34a1mag"};
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		ace_weight = 3.4;
		handAnim[] = {"OFP2_ManSkeleton","\ap_baf80\weapons\sterling\handanim\vil_anim_ste.rtm"};
		modes[] = {"FullAuto","Single"};
		class Single: Mode_SemiAuto
		{
			begin1[] = {"\ap_baf80\weapons\sterling\sounds\mk4_fire",0.9,0.99,300};
			begin2[] = {"\ap_baf80\weapons\sterling\sounds\mk4_fire",0.9,1,300};
			begin3[] = {"\ap_baf80\weapons\sterling\sounds\mk4_fire",0.9,1.01,300};
			soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			soundBurst = 0;
			reloadTime = 0.085;
			recoil = "ACE_9x19_SMG_Recoil";
			recoilProne = "ACE_9x19_SMG_Recoil";
			dispersion = 0.003;
			minRange = 0;
			minRangeProbab = 0;
			midRange = 0;
			midRangeProbab = 0;
			maxRange = 0;
			maxRangeProbab = 0;
			aiRateOfFire = 0;
			aiRateOfFireDistance = 0;
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[] = {"\ap_baf80\weapons\sterling\sounds\mk4_fire",0.3,1,300};
			begin2[] = {"\ap_baf80\weapons\sterling\sounds\mk4_fire",0.3,1.01,300};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			soundBurst = 0;
			reloadTime = 0.085;
			ffCount = 1;
			recoil = "ACE_9x19_SMG_Recoil";
			recoilProne = "ACE_9x19_SMG_Recoil";
			dispersion = 0.003;
			minRange = 0;
			minRangeProbab = 0;
			midRange = 0;
			midRangeProbab = 0;
			maxRange = 0;
			maxRangeProbab = 0;
			aiRateOfFire = 30;
			aiRateOfFireDistance = 0;
		};
		descriptionShort = "$STR_MK4_DESCRIPTION";
		class Library
		{
			libtextdesc = "$STR_MK4_DESCRIPTION";
		};
	};
	
	class MP5SD;
	class AP_SterlingSD: MP5SD	{
		scope = 2;
		displayName = "$STR_L43A1_NAME";
		model = "\ap_baf80\weapons\sterling\sterlingSD";
		picture = "\ap_baf80\weapons\sterling\data\w_l34.paa";
		magazines[] = {"ap_l34a1mag"};
		fireLightDuration = 0;
		fireLightIntensity = 0;
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		handAnim[] = {"OFP2_ManSkeleton","\ap_baf80\weapons\sterling\handanim\sterling_pro_f.rtm"};
		modes[] = {"FullAuto","Single"};
		class Single: Mode_SemiAuto
		{
			begin1[] = {"\ap_baf80\weapons\sterling\sounds\l34a1_fire",0.9,0.99,300};
			begin2[] = {"\ap_baf80\weapons\sterling\sounds\l34a1_fire",0.9,1,300};
			begin3[] = {"\ap_baf80\weapons\sterling\sounds\l34a1_fire",0.9,1.01,300};
			soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			soundBurst = 0;
			reloadTime = 0.07;
			recoil = "ACE_9x19_SMG_Recoil";
			recoilProne = "ACE_9x19_SMG_Recoil";
			dispersion = 0.003;
			minRange = 0;
			minRangeProbab = 0;
			midRange = 0;
			midRangeProbab = 0;
			maxRange = 0;
			maxRangeProbab = 0;
			aiRateOfFire = 0;
			aiRateOfFireDistance = 0;
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[] = {"\ap_baf80\weapons\sterling\sounds\l34a1_fire",0.3,1,30};
			begin2[] = {"\ap_baf80\weapons\sterling\sounds\l34a1_fire",0.3,1.01,30};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			soundBurst = 0;
			reloadTime = 0.085;
			ffCount = 1;
			recoil = "ACE_9x19_SMG_Recoil";
			recoilProne = "ACE_9x19_SMG_Recoil";
			dispersion = 0.003;
			minRange = 0;
			minRangeProbab = 0;
			midRange = 0;
			midRangeProbab = 0;
			maxRange = 0;
			maxRangeProbab = 0;
			aiRateOfFire = 30;
			aiRateOfFireDistance = 0;
		};
		descriptionShort = "$STR_L43A1_DESCRIPTION";
		class Library
		{
			libtextdesc = "$STR_L43A1_DESCRIPTION";
		};
	};
	
	
	
	
	
	class M240;	
	class AP_Bren: M240
	{
		scope = 2;
		displayName = "$STR_BREN_NAME";
		model = "ap_baf80\weapons\bren\Bren.p3d";
		picture = "\ap_baf80\weapons\bren\data\BrenMk1.paa";
		uiPicture = "\ap_baf80\weapons\bren\data\BrenMk1.paa";
		weaponInfoType = "RscWeaponZeroing";
		ace_weight = 9.75;
		discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
		discreteDistanceInitIndex = 2;
		magazines[] = {"AP_30rd_762x51_Ball_Bren","AP_30rd_762x51_T_Bren"};
		reloadMagazineSound[] = {"\ap_baf80\weapons\bren\sounds\Bren_reload",0.0005623413,1,20};
		modes[] = {"FullAuto"};
		handAnim[] = {"OFP2_ManSkeleton","ap_baf80\weapons\bren\data\anims\Bren_anim.rtm"};
		class FullAuto: Mode_FullAuto
		{
			begin1[] = {"\ap_baf80\weapons\bren\sounds\Bren_shoot.wss",10.0,1,1000};
			begin2[] = {"\ap_baf80\weapons\bren\sounds\Bren_shoot2.wss",10.0,1,1000};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			soundBurst = 0;
			reloadTime = "1/(500 / 60)";
			recoil = "ACE_762x54R_MG_Recoil";
			recoilprone = "ACE_762x54R_MG_RecoilProne";
			dispersion = "0.35/100";
			minRangeProbab = 0.0;
			midRangeProbab = 0.0;
			maxRangeProbab = 0.0;
		};
		descriptionShort = "$STR_Bren_DESCRIPTION";
		class Library {
		libTextDesc = "$STR_bren_DESCRIPTION";
		};
	};
	
	class FN_FAL;	
	class AP_L1A1 : FN_FAL {
		scope = 2;
		model = "\ap_baf80\weapons\l1a1\l1a1.p3d";
		optics = 1;
		displayName = "$STR_L1A1_NAME";
		picture = "\ap_baf80\weapons\l1a1\data\l1a1.paa";
		modes[] = {"Single"};
		class Library { 
		libtextdesc = "$STR_L1A1_DESCRIPTION"; 
		};
	};
	class AP_L1A1_SUIT : AP_L1A1 {
		modeloptics = "\x\ace\addons\m_wep_optics\ukf_susat3";
		opticszoommax = 0.0732;
		opticszoommin = 0.0732;
		model = "\ap_baf80\weapons\l1a1\l1a1_tri.p3d";
		displayName = "$STR_L1A1_SUIT_NAME";
	};	
	
	class AP_L1A1_iws : AP_L1A1 {
		scope = 2;
		//modelOptics = "\ap_baf80\weapons\l1a1\sphd_opt_3";
		modelOptics="\ca\Weapons_baf\cws_optic"; 
		visionMode[] = {"NVG"};
		opticsZoomMin = 0.1;
		opticsZoomMax = 0.1;
		value = 0;
		model = "\ap_baf80\weapons\l1a1\l1a1_iws";
		opticsDisablePeripheralVision = 0;
		displayName = "$STR_L1A1_IWS_NAME";
	};
	
	class RPG7V;
	class AP_Blowpipe: RPG7V
	{
		scope = 2;
		opticsZoomMin = 0.33333 / 2;
		opticsZoomMax = 0.33333 / 2;
		displayName = "$STR_BLOWPIPE_NAME";
		handAnim[] = {"OFP2_ManSkeleton","\ca\weapons\data\anim\rpg7.rtm"};
		magazines[] = {"AP_BlowpipeRocket"};
		model = "\ap_baf80\weapons\blowpipe\blowpipe.p3d";
		modeloptics = "\ap_baf80\weapons\blowpipe\Blowpipe_Optic";
		modelSpecial = "\ap_baf80\weapons\blowpipe\blowpipe.p3d";
		picture = "\ap_baf80\weapons\blowpipe\data\w_javelin_ca.paa";
		maxRange = 4000;
		descriptionShort = "$STR_BLOWPIPE_DESCRIPTION";
		cursorAim = \ca\Weapons\Data\clear_empty;
		sound[]={"\Ca\sounds\Weapons\rockets\Javelin_fire_v3_A",db20,1,1400}; 
		drySound[]={"\Ca\sounds\Weapons\rockets\dry",db-80,1,10};
		reloadMagazineSound[]={"\Ca\sounds\Weapons\rockets\flare_reload",db-70,1,20};
		soundFly[]={"\Ca\sounds\Weapons\rockets\rocket_fly1",db40,1.5,700};
		class Library
		{
			libTextDesc = "$STR_BLOWPIPE_DESCRIPTION";
		};
	};
	
	class ACE_AT5LauncherSingle_Static;
	class AP_MilanLauncher: ACE_AT5LauncherSingle_Static
	{
		opticsZoomMin = 0.33333 / 2;
		opticsZoomMax = 0.33333 / 2;
		displayName = "$STR_MILAN_NAME";
		maxRange = 2000;
		magazines[] = {"AP_1Rnd_Milan"};
	};
	
	
	class LauncherCore;
	class Launcher: LauncherCore
	{
		class ACE;
	};
	class ACE_CrewMGunProxy: Launcher
	{
		class ACE: ACE
		{
			class ACE_CREWSERVED
			{
			};
		};
	};
	class ACE_CrewTripodProxy: ACE_CrewMGunProxy
	{
		class ACE: ACE
		{
			class ACE_CREWSERVED: ACE_CREWSERVED
			{
				isTripod=1;
				mountTime=10;
			};
		};
	};
	class AP_MilanTripodProxy: ACE_CrewTripodProxy
	{
		scope=2;
		model="\x\ace\addons\sys_ruck\backpack_data\cswx.p3d";
		picture="\ca\weapons_e\data\icons\staticx_ca.paa";
		displayName="$STR_MILAN_NAME";
		displayNameShort="$STR_MILAN_NAME";
		ACE_Weight=17;
		class ACE: ACE
		{
			class ACE_CREWSERVED: ACE_CREWSERVED
			{
				tripodGhost="AP_MilanTripod_NoGeo";
				tripod="AP_MILAN";
				mountTime=15;
			};
		};
	};
};









class CfgVehicles
{
	class Land;
	class LandVehicle: Land
	{
		class NewTurret;
		class AnimationSources;
		class ViewPilot;
		class ViewGunner;
		class ViewOptics;
		class ACE;
	};
	class Car: LandVehicle
	{
		class ACE: ACE
		{
			class ACE_CREWSERVED
			{
				reloadtime=22;
			};
		};
	};
	class Tank: LandVehicle
	{
		class ACE: ACE
		{
			class ACE_CREWSERVED
			{
				reloadtime=22;
			};
		};
	};
	class StaticWeapon: LandVehicle
	{
		class Turrets
		{
			class MainTurret;
		};
		class ACE: ACE
		{
			class ACE_CREWSERVED
			{
				interaction="GetInOnly";
				reloadtime=12;
				mountTime=15;
				disassemblyType="proxy";
				canDrag=1;
				canCarry=1;
				canChangeHeight=0;
				nilMagazine=0;
				nilMagazineAnim[]={};
				emptyVirtualMagazine=0;
			};
		};
	};
	class StaticATWeapon: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class ACE: ACE
		{
			class ACE_CREWSERVED: ACE_CREWSERVED
			{
				reloadtime=22;
			};
		};
	};
	class ACE_Konkurs: StaticATWeapon 
	{
		class Turrets 
		{
			class MainTurret;			
		};		
	};
	
	class AP_MILAN: ACE_Konkurs
	{
		crew="BAF_Soldier_W";	
		side = 1;
		faction = BIS_BAF;
		
		displayName = "$STR_MILAN_NAME";
		icon = "\ap_baf80\weapons\milan\data\icon_static_milan_ca.paa";
		mapSize = 3;
		model = "\ap_baf80\weapons\milan\milan_tripod.p3d";
		picture = "\ap_baf80\weapons\milan\data\picture_milan_ca.paa";
		scope = 2;
		
		class Eventhandlers
		{
			init="[(_this select 0)] execVM 'ap_baf80\weapons\milan\hideMissile.sqf'";
			fired="[(_this select 0)] execVM 'ap_baf80\weapons\milan\hideMissile.sqf'";
		};
		
		class ACE: ACE
		{
			class ACE_CREWSERVED: ACE_CREWSERVED
			{
				interaction="Crewserved";
				isCSW=1;
				weaponProxy="AP_MilanTripodProxy";
				tripodProxy="AP_MilanTripodProxy";
				tripod="Logic";
				magazines[]={"AP_MILAN_CSWDM"};
				links[]={0,0};
				max=1;
				canDrag=0;
				canCarry=1;
				nilMagazine=1;
				nilMagazineAnim[]=
				{
					
					{
						"hide_magazine",
						1
					}
				};
			};
		};
		
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				maxVerticalRotSpeed= 1.2;
				maxHorizontalRotSpeed= 1.2;
				gunnerAction = "milan_gunner";
				gunnerOpticsEffect[] = {"OpticsCHAbera1","OpticsBlur2"};
				gunnerOpticsModel = "\ap_baf80\weapons\milan\Milan_Optic.p3d";
				initElev = 0;
				initTurn = 0;
				maxElev = 40;
				maxTurn = 45;
				minElev = -10;
				minTurn = -45;
				weapons[] = {"AP_MilanLauncher"};
				magazines[] = {"AP_1Rnd_Milan"};
				gunnerOutOpticsShowCursor=0;
				gunnerOpticsShowCursor=0;
				gunnerInAction="Metis_Gunner";
				gunnerGetInAction="Metis_Gunner";
				gunnerGetOutAction="PlayerProne";
				gunBeg="spice rakety";
				gunEnd="konec rakety";
				gunnerForceOptics=0;
				ejectDeadGunner=0;
				/*class ViewGunner
				{
					initAngleX=5;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-165;
					maxAngleY=125;
					initFov=0.69999999;
					minFov=0.25;
					maxFov=1.1;
				};*/
				class ViewOptics
				{
					gunnerOpticsModel = "\ap_baf80\weapons\milan\Milan_Optic.p3d";
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initfov = "0.33333/ 2";
					maxfov = "0.33333/ 2";
					minfov = "0.33333/ 2";
					visionMode[] = {"Normal","Ti"};
					thermalMode[] = {6};
				};
			};
		};
	};
	
	class ACE_NoGeo_Tripod_Base: StaticWeapon
	{
		class Turrets
		{
		};
		class ACE: ACE
		{
			class ACE_CREWSERVED: ACE_CREWSERVED
			{
				interaction="";
				canDrag=0;
			};
		};
	};
	class AP_MilanTripod_NoGeo: ACE_NoGeo_Tripod_Base
	{
		model="\ap_baf80\weapons\milan\milan_tripod_noGeo.p3d";
		class ACE: ACE
		{
			class ACE_CREWSERVED: ACE_CREWSERVED
			{
				pickupTime=6;
			};
		};
	};
};











