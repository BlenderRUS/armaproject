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
	class CH47_base_EP1;	
	class CH_47F_EP1: CH47_base_EP1
	{
		class HitPoints;
	};
	class CH_47F_BAF: CH_47F_EP1
	{
		armor = 60;
		vehicleclass = "TU_USARMY_AIR";
		maxSpeed = 285;
		scope = 2;
		
		class HitPoints: HitPoints
		{
			class HitHull
			{
				armor = 1;
				material = 51;
				name = "NETtrup";
				passThrough = 1;
				visual = "trup";
			};
			class HitEngine
			{
				armor = 0.5;
				material = 51;
				name = "motor";
				passThrough = 1;
				visual = "trup";
			};
		};
		
		side=1;
		faction="BIS_BAF";
		model="\Ca\air_d_baf\CH47\CH_47F";
		displayname="$STR_BAF_CFGVEHICLES_CH_47F_BAF0";
		class Library
		{
			libTextDesc="$STR_BAF_CFGVEHICLES_CH_47F_BAF_LIBRARY0";
		};
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
		};
		transportMaxWeapons="18*2";
		class TransportWeapons
		{
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
	};
};
