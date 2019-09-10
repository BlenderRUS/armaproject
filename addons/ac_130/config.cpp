class CfgPatches
{
	class AC130HS
	{
		units[]=
		{
			"AP_AC130H"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"CAWeapons",
			"CACharacters2",
			"CAAir2_C130J",
			"CAAir_E"
		};
	};
};
class newTurret;
class CfgVehicles
{
	class C130J_base;
	class C130J_US_EP1: C130J_base
	{
		class Turrets;
	};
	class AP_AC130H: C130J_US_EP1
	{		
		faction = "BIS_US";
		vehicleclass = "TU_USARMY_AIR";
		
		displayname="$STR_AP_AC_130H";
		class Library
		{
			libTextDesc="$STR_Lib_AP_AC_130H";
		};
		model="\AC_130\AC130.p3d";
		picture="\AC_130\data\UI\picture_AC130_CA.paa";
		icon="\AC_130\data\UI\icon_AC130_CA.paa";
		mapSize=25;
		weapons[]=
		{
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"120Rnd_CMFlare_Chaff_Magazine",
			"120Rnd_CMFlare_Chaff_Magazine"
		};
		memoryPointCM[]=
		{
			"flare_launcher1",
			"flare_launcher2",
			"flare_launcher3",
			"flare_launcher4",
			"flare_launcher5",
			"flare_launcher6",
			"flare_launcher7",
			"flare_launcher8"
		};
		memoryPointCMDir[]=
		{
			"flare_launcher1_dir",
			"flare_launcher2_dir",
			"flare_launcher3_dir",
			"flare_launcher4_dir",
			"flare_launcher5_dir",
			"flare_launcher6_dir",
			"flare_launcher7_dir",
			"flare_launcher8_dir"
		};
		cargoAction[]=
		{
			"C130_Cargo",
			"Mi17_Cargo02"
		};
		crew="USMC_Soldier_Pilot";
		typicalCargo[]=
		{
			"USMC_Soldier_Pilot",
			"USMC_Soldier"
		};
		transportSoldier=0;
		driverCompartments="Compartment1";
		cargoCompartments[]=
		{
			"Compartment1"
		};
		driverisCommander=1;
		driverisGunner=0;
		gunneriscommander=0;
		class Reflectors
		{
			class Left
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
			class Right
			{
				color[]={0.80000001,0.80000001,1,1};
				ambient[]={0.07,0.07,0.07,1};
				position="P svetlo";
				direction="konec P svetla";
				hitpoint="P svetlo";
				selection="P svetlo";
				size=1;
				brightness=1;
			};
			class Left2
			{
				color[]={0.80000001,0.80000001,1,1};
				ambient[]={0.07,0.07,0.07,1};
				position="L2 svetlo";
				direction="konec L2 svetla";
				hitpoint="L2 svetlo";
				selection="L2 svetlo";
				size=1;
				brightness=1;
			};
			class Right2
			{
				color[]={0.80000001,0.80000001,1,1};
				ambient[]={0.07,0.07,0.07,1};
				position="P2 svetlo";
				direction="konec P2 svetla";
				hitpoint="P2 svetlo";
				selection="P2 svetlo";
				size=1;
				brightness=1;
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: newTurret
			{
				ace_sa_enabled = 0;
				ace_sys_nvg_nvrange = 2200;
				ace_sys_nvg_tirange = 10000;
				
				body="main1turret";
				gun="main1gun";
				animationSourceBody="main1turret";
				animationSourceGun="main1gun";
				gunnerAction="BRDM2_Gunner";
				gunnerName="20mm M61 Vulcan";
				
				turretInfoType="RscWeaponRangeZeroing";
				
				gunnerOpticsModel="\ca\air_e\gunnerOptics_ah64";
				proxyIndex=1;
				castGunnerShadow=0;
				ejectDeadGunner=0;
				proxyType="CPGunner";
				minElev=-22.5;
				maxElev=22.5;
				initElev=0;
				minTurn=70;
				maxTurn=110;
				initTurn=90;
				radarType = 4;
				weapons[] = {"M168"};
				magazines[] = {"2100Rnd_20mm_M168"};
				soundServo[]=
				{
					"\ca\wheeled\Data\Sound\servo3",
					0.000178,
					0.89999998
				};
				memoryPointGun="machinegun_GAU_12";
				memoryPointGunnerOptics="gunnerview_GAU_12";
				stabilizedInAxes = 3;
				showgunneroptics=1;
				startEngine=0;
				forceHideGunner=1;
				outGunnerMayFire=1;
				inGunnerMayFire=1;
				irScanToEyeFactor=0.1;
				hasgunner=1;
				gunBeg="muzzle_GAU_12";
				gunEnd="chamber_GAU_12";
				gunnerForceOptics=1;
				class OpticsIn
				{
					class Wide
					{
						gunnerOpticsModel = "\ca\air_e\gunnerOptics_ah64";
						initAngleX = 0;
						initAngleY = 0;
						initFov = "0.33333/1.1";
						maxAngleX = 30;
						maxAngleY = 100;
						maxFov = "0.33333/1.1";
						minAngleX = -30;
						minAngleY = -100;
						minFov = "0.33333/1.1";
						opticsDisplayName = "E";
						thermalMode[] = {0, 1};
						visionMode[] = {"Normal", "TI"};
					};
					class Medium: Wide
					{
						gunnerOpticsModel = "\ca\air_e\gunnerOptics_ah64";
						initFov = "0.33333/6";
						maxFov = "0.33333/6";
						minFov = "0.33333/6";
						opticsDisplayName = "W";
					};
					class Narrow: Wide
					{
						gunnerOpticsModel = "\ca\air_e\gunnerOptics_ah64_2";
						initFov = "0.33333/18";
						maxFov = "0.33333/18";
						minFov = "0.33333/18";
						opticsDisplayName = "M";
					};
				};
			};
			class Main2Turret: MainTurret
			{
				weapons[] = {"ACE_L60"};
				magazines[] = {"ACE_256Rnd_40mm_L60_HEI"};
				proxyIndex=2;
				gunnerName="40mm L60 Bofors";
				body="Main2Turret";
				gun="Main2Gun";
				animationSourceBody="Main2Turret";
				animationSourceGun="Main2Gun";
				gunBeg="muzzle_l60";
				gunEnd="chamber_l60";
				memoryPointGun="machinegun_l60";
				memoryPointGunnerOptics="gunnerview_l60";
				primarygunner=0;
				commanding=-2;
			};
			class Main3Turret: MainTurret
			{
				weapons[] = {"ACE_M102"};
				magazines[] = {"ACE_16Rnd_105mm_M102_HEI"};
				proxyIndex=3;
				gunnerName="105mm M102";
				body="Main3Turret";
				gun="Main3Gun";
				animationSourceBody="Main3Turret";
				animationSourceGun="Main3Gun";
				gunBeg="muzzle_m102";
				gunEnd="chamber_m102";
				memoryPointGun="machinegun_m102";
				memoryPointGunnerOptics="gunnerview_m102";
				primarygunner=0;
				commanding=-3;
			};
		};
		class AnimationSources
		{
			class door_2_2
			{
				source="user";
				animPeriod=2.5;
			};
			class door_2_1: door_2_2
			{
			};
			class door_1: door_2_2
			{
			};
			class ramp_top: door_2_2
			{
			};
			class ramp_bottom: door_2_2
			{
			};
			class recoil_source_M102
			{
				source="reload";
				weapon="ACE_M102";
				animPeriod=0.0099999998;
			};
			class recoil_source_L60
			{
				source="reload";
				weapon="ACE_L60";
				animPeriod=0.0099999998;
			};
			class Gatling_GAU_12
			{
				source="revolving";
				weapon="M168";
				animPeriod=0.0099999998;
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"Ca\Air_E\C130J\DATA\c130j_sklo.rvmat",
				"Ca\Air_E\C130J\DATA\c130j_sklo_damage.rvmat",
				"Ca\Air_E\C130J\DATA\c130j_sklo_damage.rvmat",
				"Ca\Air_E\C130J\DATA\c130j_sklo_in.rvmat",
				"Ca\Air_E\C130J\DATA\c130j_sklo_in_damage.rvmat",
				"Ca\Air_E\C130J\DATA\c130j_sklo_in_damage.rvmat",
				"Ca\Air_E\C130J\DATA\c130j_body.rvmat",
				"Ca\Air_E\C130J\DATA\c130j_body_damage.rvmat",
				"Ca\Air_E\C130J\DATA\c130j_body_destruct.rvmat",
				"Ca\Air_E\C130J\DATA\c130j_interior.rvmat",
				"Ca\Air_E\C130J\DATA\c130j_interior_damage.rvmat",
				"Ca\Air_E\C130J\DATA\c130j_interior_destruct.rvmat",
				"Ca\Air_E\C130J\DATA\c130j_wings.rvmat",
				"Ca\Air_E\C130J\DATA\c130j_wings_damage.rvmat",
				"Ca\Air_E\C130J\DATA\c130j_wings_destruct.rvmat",
				"Ca\Ca_E\data\default.rvmat",
				"Ca\Ca_E\data\default.rvmat",
				"Ca\Ca_E\data\default_destruct.rvmat"
			};
		};
	};
};
class cfgWeapons
{
	class ACE_M242;
	class ACE_L60: ACE_M242
	{
		displayName = "40мм L60";
		magazines[] = {"ACE_256Rnd_40mm_L60_HEI"};
		reloadTime = 0.5;
	};
	class ACE_M102: ACE_M242
	{
		modes[] = {"this"};
		displayName = "105мм m105";
		magazines[] = {"ACE_16Rnd_105mm_M102_HEI"};
		reloadTime = 10;
		reloadSound[] = {"\ca\Sounds\weapons\cannon\gun120reload", 1, 1, 20};
		sound[] = {"x\acex_sm\addons\s_wep_veh\m256_fire.wss", 316.228, 1, 4500};
	};
};

class CfgMagazines
{
	class ACE_230Rnd_25mm_M242_HEI;
	class ACE_256Rnd_40mm_L60_HEI: ACE_230Rnd_25mm_M242_HEI
	{
		count = 256;
		displayName = "HEI-T";
		displayNameShort = "HEI-T";
		initSpeed = 1400;
		ammo = "AC130_40mm_HEI";
	};
	class ACE_16Rnd_105mm_M102_HEI: ACE_230Rnd_25mm_M242_HEI
	{
		count = 16;
		displayName = "HE-FRAG-T";
		displayNameShort = "HE-FRAG-T";
		initSpeed = 1400;
		ammo = "AC130_105mm_HEI";
	};
};

class CfgAmmo
{
	class B_25mm_HEI;
	class AC130_40mm_HEI: B_25mm_HEI
	{
		airFriction = -0.00001;
		timeToLive = 10;
	};
	class AC130_105mm_HEI: AC130_40mm_HEI
	{
		ace_hit = 75;
		ace_caliber = 100;
		ace_heat = 1;
		ace_hit_distance = 1000;
		ace_incendiary = 0.3;
		ace_tandemheat = 0;
		ace_mass = 10;
		ace_penetrationMultiplier = 1.2;
		ace_sys_camshake_coef = 3;
		ace_topattack = 0;
		hit = 75;
		indirectHit = 60;
		indirectHitRange = 12.5;
		caliber = 6;
		cost = 10;
		model = "\x\ace\addons\m_tracer\ace_shell_tracer_red";
		
		class HitEffects
		{
			object = "ImpactConcrete";
			vehicle = "ImpactMetal";
		};
		
		airFriction = -0.00001;
		timeToLive = 10;
		CraterEffects = "ArtyShellCrater";
		ExplosionEffects = "ArtyShellExplosion";
		muzzleEffect = "ACE_Effects_Cannon";
		explosive = 1;
		
		effectsFire = "CannonFire";
		effectsMissile = "ExplosionEffects";
		effectsSmoke = "SmokeShellWhite";
	};
};
