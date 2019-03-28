class CfgPatches
{
	class ap_L129A1
	{
		requiredaddons[]=
		{
		};
		requiredversion=1;
		units[]=
		{
		};
		weapons[]=
		{
			"ap_L129A1",
			"ap_L129A1_HG",
			"ap_L129A1_Bipod",
			"ap_L129A1_HG_Bipod"
		};
	};
};
class CfgWeapons
{
	class SCAR_Base;
	class SCAR_H_Base: SCAR_Base
	{
		class SCAR_H_FullAuto;
		class SCAR_H_Single;
	};
	class L129A1 : SCAR_H_Base
	{
		ace_mod_mv = 1;
		ace_mv[] = {"B_762x51_Ball", 856, "ACE_B_762x51_T", 856, "ACE_B_762x51_S", 856, "B_762x51_noTracer", 798, "ACE_B_762x51_SB_S", 798};
		ace_weight = 4.15;
		aiDispersionCoefX = 5;
		aiDispersionCoefY = 6;
		descriptionShort="$STR_EP1_DSS_SCAR_H_CQC_CCO";
		class Library
		{
			libTextDesc="$STR_EP1_DSS_SCAR_H_CQC_CCO";
		};
		dexterity = "(0.5 + 3.75/(3.3+ 0.6+ 0.1+ 0.2 + 0.001) + 1/10)";
		displayName = "$STR_NAME_L129A1";
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons_E\SCAR\Data\Anim\SCAR.rtm"};
		model = "\ap_L129A1\L129A1.p3d";
		modelOptics = "-";
		picture="\ap_L129A1\UI\L129A1.paa";
		scope = 2;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		modes[] = {"SCAR_H_Single"};
		class SCAR_H_Single: SCAR_H_Single
		{
			aiRateOfFire = 6;
			aiRateOfFireDistance = 1100;
			dispersion = 0.0006;
			maxRange = 1100;
			maxRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.8;
			minRange = 0;
			minRangeProbab = 0.4;

			begin1[] = {"\ap_l129a1\sounds\L129A1_S1", 1.77828, 1, 1700};
			begin2[] = {"\ap_l129a1\sounds\L129A1_S1", 1.77828, 1, 1700};
			begin3[] = {"\ap_l129a1\sounds\L129A1_S1", 1.77828, 0.98, 1700};
		};
	};
	class L129A1_CCO : L129A1
	{
		ace_weight = 4.35
		displayName = "$STR_NAME_L129A1_CCO";
		modelOptics = "-";
		model = "\ap_L129A1\L129A1_CCO.p3d";
		picture="\ap_L129A1\UI\L129A1_CCO.paa";
	};
	class L129A1_ACOG : L129A1
	{
		ace_weight = 4.45
		ace_bipod = 1;
		displayName = "$STR_NAME_L129A1_ACOG";
		modelOptics="\ca\Weapons_baf\ACOG_optic";
		model = "\ap_L129A1\L129A1_ACOG.p3d";
		picture="\ap_L129A1\UI\L129A1_ACOG.paa";
		class OpticsModes
		{
			class ACOG
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.0623;
				opticsZoomMax=0.0623;
				opticsZoomInit=0.0623;
				memoryPointCamera="opticView";
				visionMode[]=
				{
					"Normal"
				};
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				distanceZoomMin=300;
				distanceZoomMax=300;
				cameraDir="";
			};
			class Kolimator: ACOG
			{
				opticsID=2;
				useModelOptics=0;
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				opticsZoomMin=0.25;
				opticsZoomMax=1.5;
				opticsZoomInit=0.80000001;
				memoryPointCamera="eye";
				visionMode[]={};
			};
		};
	};
	class L129A1_SV : L129A1_ACOG
	{
		ace_bipod = 1;
		ace_drift[] = {{0, 0}, {100, 0.03}, {200, 0.08}, {300, 0.18}, {400, 0.305}, {500, 0.57}, {600, 0.92}, {700, 1.3}, {800, 1.85}, {900, 2.5}, {1000, 3.3}};
		ace_mod_mv = 1;
		ace_mv[] = {"B_762x51_Ball", 856, "ACE_B_762x51_T", 856, "ACE_B_762x51_S", 856, "B_762x51_noTracer", 798, "ACE_B_762x51_SB_S", 798};
		ace_sa_adj_mode = "angle";
		ace_sa_defaultelevation = 9;
		ace_sa_defaultrange = 300;
		ace_sa_defaultwindage = 0;
		ace_sa_elev_unit = "moa";
		ace_sa_enabled = 1;
		ace_sa_maxelevation = 51;
		ace_sa_maxrange = 1000;
		ace_sa_minelevation = -10;
		ace_sa_minrange = 100;
		ace_sa_range_unit = "meters";
		ace_sa_stepelevation = 1;
		ace_sa_stepwindage = 0.5;
		ace_sa_table_elev[] = {{0, 0}, {100, 3}, {200, 6}, {300, 9}, {400, 13}, {500, 18}, {600, 23}, {700, 28}, {800, 35}, {900, 41}, {1000, 50}};
		ace_sa_windage = 35;
		ace_sa_wind_unit = "moa";
		ace_sa_zeroelev = 100;
		ace_sa_zerooffset = 0;
		ace_sys_reticles_enable = 1;
		ace_sys_reticles_scope = "Leu39xTMR";
		ace_weight = 4.55
		aiDispersionCoefX = 5;
		aiDispersionCoefY = 6;
		displayName = "$STR_NAME_L129A1_SV";
		distanceZoomMax = 120;
		distanceZoomMin = 400;
		model = "\ap_L129A1\L129A1_SV.p3d";
		modelOptics="\Ca\weapons_E\SCAR\TacMil_optic_8x.p3d";
		opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
		opticsZoomInit = 0.071945;
		opticsZoomMax = 0.071945;
		opticsZoomMin = 0.035972;
		picture="\ap_L129A1\UI\L129A1_SV.paa";
		scope = 2;
		UiPicture = "\CA\weapons\data\Ico\i_sniper_CA.paa";
		weaponInfoType = "RscWeaponEmpty";
		class OpticsModes
		{
			class StepScope
			{
				cameraDir = "";
				discreteDistance[] = {};
				discreteDistanceInitIndex = 0;
				discreteFov[] = {0.071945, 0.035972};
				discreteInitIndex = 0;
				distanceZoomMax = 300;
				distanceZoomMin = 300;
				memoryPointCamera = "eye";
				opticsDisablePeripherialVision = 1;
				opticsFlare = 1;
				opticsID = 1;
				opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
				opticsZoomInit = 0.087666;
				opticsZoomMax = 0.087666;
				opticsZoomMin = 0.033574;
				useModelOptics = 1;
				visionMode[] = {"Normal"};
				weaponInfoType = "RscWeaponEmpty";
			};
		};
		class Library
		{
			libTextDesc="$STR_EP1_DSS_SCAR_H_LNG_Sniper";
		};
		descriptionShort="$STR_EP1_DSS_SCAR_H_LNG_Sniper";
	};
	class L129A1_SV_NV : L129A1_SV
	{
		displayName = "$STR_NAME_L129A1_SV_NV";
		picture="\ap_L129A1\UI\L129A1_SV_NV.paa";
		model = "\ap_L129A1\L129A1_SV_NV.p3d";
		class OpticsModes: OpticsModes
		{
			class StepScope: StepScope
			{
				visionMode[] = {"Normal", "NVG"};
			};
		};
	};
	class L129A1_ACOG_NV : L129A1_ACOG
	{
		displayName = "$STR_NAME_L129A1_ACOG_NV";
		picture="\ap_L129A1\UI\L129A1_ACOG_NV.paa";
		model = "\ap_L129A1\L129A1_ACOG_NV.p3d";
		class OpticsModes
		{
			class ACOG
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.0623;
				opticsZoomMax=0.0623;
				opticsZoomInit=0.0623;
				memoryPointCamera="opticView";
				visionMode[]=
				{
					"NVG"
				};
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				distanceZoomMin=300;
				distanceZoomMax=300;
				cameraDir="";
			};
			class Kolimator: ACOG
			{
				opticsID=2;
				useModelOptics=0;
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				opticsZoomMin=0.25;
				opticsZoomMax=1.5;
				opticsZoomInit=0.80000001;
				memoryPointCamera="eye";
				visionMode[]={};
			};
		};
	};
	
	
	
	
	class L129A1_B : L129A1
	{
		displayName = "$STR_NAME_L129A1_B";
		picture="\ap_L129A1\UI\L129A1_B.paa";
		model = "\ap_L129A1\L129A1_B.p3d";
	};
	class L129A1_CCO_B : L129A1_CCO
	{
		displayName = "$STR_NAME_L129A1_CCO_B";
		picture="\ap_L129A1\UI\L129A1_CCO_B.paa";
		model = "\ap_L129A1\L129A1_CCO_B.p3d";
	};
	class L129A1_ACOG_B : L129A1_ACOG
	{
		displayName = "$STR_NAME_L129A1_ACOG_B";
		picture="\ap_L129A1\UI\L129A1_ACOG_B.paa";
		model = "\ap_L129A1\L129A1_ACOG_B.p3d";
	};
	class L129A1_SV_B : L129A1_SV
	{
		displayName = "$STR_NAME_L129A1_SV_B";
		picture="\ap_L129A1\UI\L129A1_SV_B.paa";
		model = "\ap_L129A1\L129A1_SV_B.p3d";
	};
	class L129A1_ACOG_NV_B : L129A1_ACOG_NV
	{
		displayName = "$STR_NAME_L129A1_ACOG_NV_B";
		picture="\ap_L129A1\UI\L129A1_ACOG_NV_B.paa";
		model = "\ap_L129A1\L129A1_ACOG_NV_B.p3d";
	};
	class L129A1_SV_NV_B : L129A1_SV_NV
	{
		displayName = "$STR_NAME_L129A1_SV_NV_B";
		picture="\ap_L129A1\UI\L129A1_SV_NV_B.paa";
		model = "\ap_L129A1\L129A1_SV_NV_B.p3d";
	};
};
