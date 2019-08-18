class CfgPatches
{
	class CAAir_BAF_CH_47F
	{
		units[]=
		{
			"CH_47F_BAF"
		};
		weapons[]={};
		requiredVersion=1.54;
		requiredAddons[]=
		{
			"CAAir_BAF"
		};
	};
};
class CfgVehicles
{
	class Helicopter;
	class CH47_base_EP1: Helicopter
		{
			class HitPoints;
		};
	class CH_47F_EP1: CH47_base_EP1
		{
			
			armor = 60;
		};
	class CH_47F_BAF: CH_47F_EP1
	{
		maxSpeed=285;
		armor = 63;
		expansion=2;
		scope=2;
		side=1;
		faction="BIS_BAF";
		model="\Ca\air_d_baf\CH47\CH_47F";
		displayname="$STR_BAF_CFGVEHICLES_CH_47F_BAF0";
		class Library
		{
			libTextDesc="$STR_BAF_CFGVEHICLES_CH_47F_BAF_LIBRARY0";
		};
		accuracy=0.5;
		crew="BAF_Pilot_MTP";
		typicalCargo[]=
		{
			"BAF_Pilot_MTP",
			"BAF_Pilot_MTP"
		};
		transportMaxMagazines="90*4";
		hiddenSelections[]=
		{
			"camo01",
			"camo02"
		};
		hiddenSelectionsTextures[]=
		{
			"ca\air_d_baf\data\ch47_ext_1_baf_co.paa",
			"ca\air_d_baf\data\ch47_ext_2_baf_co.paa"
		};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine="30Rnd_556x45_Stanag";
				count="25*4";
			};
			class _xx_30Rnd_556x45_StanagSD
			{
				magazine="30Rnd_556x45_StanagSD";
				count="10*4";
			};
			class _xx_5Rnd_127x99_AS50
			{
				magazine="5Rnd_127x99_AS50";
				count="10*4";
			};
			class _xx_5Rnd_86x70_L115A1
			{
				magazine="5Rnd_86x70_L115A1";
				count="10*4";
			};
			class _xx_NLAW
			{
				magazine="NLAW";
				count="2*4";
			};
			class _xx_200Rnd_556x45_L110A1
			{
				magazine="200Rnd_556x45_L110A1";
				count="2*4";
			};
			class _xx_1Rnd_HE_M203
			{
				magazine="1Rnd_HE_M203";
				count="5*4";
			};
			class _xx_BAF_L109A1_HE
			{
				magazine="BAF_L109A1_HE";
				count="10*4";
			};
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=4;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=4;
			};
			class _xx_SmokeShellYellow
			{
				magazine="SmokeShellYellow";
				count=4;
			};
			class _xx_SmokeShellPurple
			{
				magazine="SmokeShellPurple";
				count=4;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count="2*4";
			};
			class _xx_IR_Strobe_Marker
			{
				magazine="IR_Strobe_Marker";
				count="2*4";
			};
		};
		transportMaxWeapons="18*2";
		class TransportWeapons
		{
			class _xx_BAF_AS50_scoped
			{
				weapon="BAF_AS50_scoped";
				count=2;
			};
			class _xx_BAF_AS50_TWS
			{
				weapon="BAF_AS50_TWS";
				count=2;
			};
			class _xx_BAF_LRR_scoped
			{
				weapon="BAF_LRR_scoped";
				count=2;
			};
			class _xx_BAF_NLAW_Launcher
			{
				weapon="BAF_NLAW_Launcher";
				count=2;
			};
			class _xx_BAF_L85A2_RIS_Holo
			{
				weapon="BAF_L85A2_RIS_Holo";
				count="2*2";
			};
			class _xx_BAF_L85A2_UGL_Holo
			{
				weapon="BAF_L85A2_UGL_Holo";
				count=2;
			};
			class _xx_BAF_L85A2_RIS_SUSAT
			{
				weapon="BAF_L85A2_RIS_SUSAT";
				count=2;
			};
			class _xx_BAF_L85A2_UGL_SUSAT
			{
				weapon="BAF_L85A2_UGL_SUSAT";
				count=2;
			};
			class _xx_BAF_L85A2_RIS_ACOG
			{
				weapon="BAF_L85A2_RIS_ACOG";
				count="3*2";
			};
			class _xx_BAF_L85A2_UGL_ACOG
			{
				weapon="BAF_L85A2_UGL_ACOG";
				count=2;
			};
			class _xx_BAF_L85A2_RIS_CWS
			{
				weapon="BAF_L85A2_RIS_CWS";
				count=2;
			};
			class _xx_BAF_L86A2_ACOG
			{
				weapon="BAF_L86A2_ACOG";
				count=2;
			};
			class _xx_BAF_L110A1_Aim
			{
				weapon="BAF_L110A1_Aim";
				count=2;
			};
		};
		soundGetIn[]=
		{
			"Ca\sounds_baf\air\getin",
			0.31622776,
			1
		};
		soundGetOut[]=
		{
			"Ca\sounds_baf\air\getin",
			0.31622776,
			1,
			40
		};
		soundDammage[]=
		{
			"Ca\sounds_baf\air\int-alarm_loop",
			0.56234133,
			1
		};
		soundEngineOnInt[]=
		{
			"Ca\sounds_baf\air\uk_start_int_1",
			0.1,
			0.89999998
		};
		soundEngineOnExt[]=
		{
			"Ca\sounds_baf\air\uk_start_ext_1",
			0.56234133,
			0.89999998,
			800
		};
		soundEngineOffInt[]=
		{
			"\Ca\sounds_baf\air\uk_stop_int_1",
			0.1,
			0.89999998
		};
		soundEngineOffExt[]=
		{
			"Ca\sounds_baf\air\uk_stop_ext_2",
			0.56234133,
			0.89999998,
			800
		};
		soundLocked[]=
		{
			"Ca\sounds_baf\air\int-alarm_loop",
			0.00031622776,
			2
		};
		soundIncommingMissile[]=
		{
			"Ca\sounds_baf\air\int-alarm_loop",
			0.00031622776,
			4
		};
		class Sounds
		{
			class Engine
			{
				sound[]=
				{
					"Ca\sounds_baf\air\uk_engine_ext_3",
					3.1622777,
					0.80000001,
					1000
				};
				frequency="rotorSpeed";
				volume="camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorLowOut
			{
				sound[]=
				{
					"\Ca\sounds_baf\air\uk_rotor_4h_swist",
					3.1622777,
					1,
					1200
				};
				frequency="rotorSpeed";
				volume="camPos*(0 max (rotorSpeed-0.1))";
				cone[]={1.8,3.1400001,2,0.89999998};
			};
			class RotorHighOut
			{
				sound[]=
				{
					"\Ca\sounds_baf\air\uk_rotor_4h_swist",
					1.7782794,
					1,
					1300
				};
				frequency="rotorSpeed";
				volume="camPos*10*(0 max (rotorThrust-0.9))";
				cone[]={1.8,3.1400001,2,0.89999998};
			};
			class EngineIn
			{
				sound[]=
				{
					"\Ca\sounds_baf\air\uk_engine_int_1",
					0.56234133,
					0.80000001
				};
				frequency="rotorSpeed";
				volume="(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorLowIn
			{
				sound[]=
				{
					"Ca\sounds_baf\air\uk_rotor_4l_int",
					1.7782794,
					0.80000001
				};
				frequency="rotorSpeed";
				volume="2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
			};
			class RotorHighIn
			{
				sound[]=
				{
					"Ca\sounds_baf\air\uk_rotor_4h_int",
					1.7782794,
					0.80000001
				};
				frequency="rotorSpeed";
				volume="(1-camPos)*3*(rotorThrust-0.9)";
			};
		};
		supplyRadius=5;
	};
};
