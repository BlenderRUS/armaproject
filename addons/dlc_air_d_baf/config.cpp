class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		AW159_Cargo_BAF="AW159_Cargo_BAF";
		AW159_Cargo01_BAF="AW159_Cargo01_BAF";
		AW159_Pilot_BAF="AW159_Pilot_BAF";
		Merlin_Cargo_BAF="Merlin_Cargo_BAF";
		Merlin_Cargo01_BAF="Merlin_Cargo01_BAF";
		Merlin_Pilot_BAF="Merlin_Pilot_BAF";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class AW159_Cargo_BAF: Crew
		{
			file="\Ca\air_d_baf\Data\Anim\AW159_Cargo";
			connectTo[]=
			{
				"AW159_KIA_Cargo_BAF",
				1
			};
			speed=1e+010;
		};
		class AW159_KIA_Cargo_BAF: DefaultDie
		{
			actions="DeadActions";
			file="\Ca\air_d_baf\Data\Anim\AW159_KIA_Cargo";
			speed=1e+010;
			terminal=1;
			soundEnabled=0;
			looped=0;
			connectTo[]=
			{
				"DeadState",
				0.1
			};
		};
		class AW159_Cargo01_BAF: Crew
		{
			file="\Ca\air_d_baf\Data\Anim\AW159_Cargo01";
			connectTo[]=
			{
				"AW159_KIA_Cargo_BAF",
				1
			};
			speed=1e+010;
		};
		class AW159_Pilot_BAF: Crew
		{
			file="\Ca\air_d_baf\Data\Anim\AW159_Pilot";
			connectTo[]=
			{
				"AW159_KIA_Pilot_BAF",
				1
			};
			speed=1e+010;
		};
		class AW159_KIA_Pilot_BAF: DefaultDie
		{
			actions="DeadActions";
			file="\Ca\air_d_baf\Data\Anim\AW159_Kia_Pilot";
			speed=1e+010;
			terminal=1;
			soundEnabled=0;
			looped=0;
			connectTo[]=
			{
				"DeadState",
				0.1
			};
		};
		class Merlin_Cargo_BAF: Crew
		{
			file="\Ca\air_d_baf\Data\Anim\Merlin_Cargo";
			connectTo[]=
			{
				"Merlin_KIA_Cargo_BAF",
				1
			};
			speed=1e+010;
		};
		class Merlin_KIA_Cargo_BAF: DefaultDie
		{
			actions="DeadActions";
			file="\Ca\air_d_baf\Data\Anim\Merlin_KIA_Cargo";
			speed=1e+010;
			terminal=1;
			soundEnabled=0;
			looped=0;
			connectTo[]=
			{
				"DeadState",
				0.1
			};
		};
		class Merlin_Cargo01_BAF: Crew
		{
			file="\Ca\air_d_baf\Data\Anim\Merlin_Cargo01";
			connectTo[]=
			{
				"Merlin_KIA_Cargo_BAF",
				1
			};
			speed=1e+010;
		};
		class Merlin_Pilot_BAF: Crew
		{
			file="\Ca\air_d_baf\Data\Anim\Merlin_Pilot";
			connectTo[]=
			{
				"Merlin_KIA_Pilot_BAF",
				1
			};
			speed=1e+010;
		};
		class Merlin_KIA_Pilot_BAF: DefaultDie
		{
			actions="DeadActions";
			file="\Ca\air_d_baf\Data\Anim\Merlin_Kia_Pilot";
			speed=1e+010;
			terminal=1;
			soundEnabled=0;
			looped=0;
			connectTo[]=
			{
				"DeadState",
				0.1
			};
		};
	};
};
class CfgMovesWomen: CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		AW159_Cargo_BAF="crew";
		AW159_Cargo01_BAF="crew";
		AW159_Pilot_BAF="crew";
		Merlin_Cargo_BAF="crew";
		Merlin_Cargo01_BAF="crew";
		Merlin_Pilot_BAF="crew";
	};
};
class CfgPatches
{
	class CAAir_BAF
	{
		units[]=
		{
			"CH_47F_BAF",
			"AW159_Lynx_BAF",
			"BAF_Apache_AH1_D",
			"BAF_Merlin_HC3_D"
		};
		weapons[]={};
		requiredVersion=1.54;
		requiredAddons[]=
		{
			"CACharacters_E",
			"CAWeapons_E",
			"CA_Anims_Char",
			"CAAir",
			"CAAir2",
			"CA_BAF",
			"CACharacters_BAF",
			"CAWeapons_BAF",
			"CAAir_E",
			"CAAir_E_CH_47F",
			"CAAir_E_AH64D"
		};
	};
};
class CfgVehicles
{
	class AllVehicles;
	class Air: AllVehicles
	{
		class NewTurret;
		class ViewOptics;
		class ViewPilot;
		class HeadLimits;
		class Sounds;
	};
	class Helicopter: Air
	{
		class HitPoints
		{
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
		};
		class Turrets
		{
			class MainTurret;
		};
		class ViewPilot: ViewPilot
		{
		};
		class AnimationSources;
	};
	class AH64_base_EP1: Helicopter
	{
	};
	class AH64D_EP1: AH64_base_EP1
	{
	};
	class BAF_Apache_AH1_D: AH64D_EP1
	{
		expansion=2;
		scope=2;
		side=1;
		faction="BIS_BAF";
		model="\CA\air_d_baf\AH_BAF.p3d";
		displayname="$STR_BAF_CFGVEHICLES_BAF_APACHE_AH1_D0";
		class Library
		{
			libTextDesc="$STR_BAF_CFGVEHICLES_BAF_APACHE_AH1_D_LIBRARY0";
		};
		accuracy=0.5;
		crew="BAF_Pilot_MTP";
		typicalCargo[]=
		{
			"BAF_Pilot_MTP",
			"BAF_Pilot_MTP"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerAction="AH64_Gunner_EP1";
				gunnerInAction="AH64_Gunner_EP1";
				minElev=-60;
				maxElev=30;
				initElev=0;
				minTurn=-120;
				maxTurn=120;
				initTurn=0;
				weapons[]=
				{
					"M230",
					"CRV7_HEPD",
					"CRV7_FAT",
					"HellfireLauncher"
				};
				magazines[]=
				{
					"1200Rnd_30x113mm_M789_HEDP",
					"6Rnd_CRV7_HEPD",
					"6Rnd_CRV7_FAT",
					"8Rnd_Hellfire"
				};
				enableManualFire=1;
				radarType=4;
				memoryPointsGetInGunner="pos_gunner";
				memoryPointsGetInGunnerDir="pos_gunner_dir";
				gunnerGetInAction="GetInHigh";
				gunnerGetOutAction="GetOutHigh";
				memoryPointGun="machinegun";
				turretInfoType="RscUnitInfo_AH64D_gunner";
				discreteDistance[]={300,400,500,600,700,800,900,1000,1100,1200};
				discreteDistanceInitIndex=2;
				gunnerOpticsModel="\ca\air_e\gunnerOptics_ah64";
				class OpticsIn
				{
					class Wide
					{
						opticsDisplayName="W";
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.46599999;
						minFov=0.46599999;
						maxFov=0.46599999;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="\ca\air_e\gunnerOptics_ah64";
					};
					class Medium: Wide
					{
						opticsDisplayName="M";
						initFov=0.093000002;
						minFov=0.093000002;
						maxFov=0.093000002;
						gunnerOpticsModel="\ca\air_e\gunnerOptics_ah64_2";
					};
					class Narrow: Wide
					{
						opticsDisplayName="N";
						gunnerOpticsModel="\ca\air_e\gunnerOptics_ah64_3";
						initFov=0.028999999;
						minFov=0.028999999;
						maxFov=0.028999999;
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=1.1;
						minFov=0.133;
						maxFov=1.1;
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
						gunnerOpticsModel="";
						gunnerOpticsEffect[]={};
					};
				};
			};
		};
		supplyRadius=5;
		transportMaxMagazines="90*2";
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine="30Rnd_556x45_Stanag";
				count="10*2";
			};
			class _xx_5Rnd_127x99_AS50
			{
				magazine="5Rnd_127x99_AS50";
				count="5*2";
			};
			class _xx_5Rnd_86x70_L115A1
			{
				magazine="5Rnd_86x70_L115A1";
				count="5*2";
			};
			class _xx_200Rnd_556x45_L110A1
			{
				magazine="200Rnd_556x45_L110A1";
				count="2*2";
			};
			class _xx_1Rnd_HE_M203
			{
				magazine="1Rnd_HE_M203";
				count="3*2";
			};
			class _xx_BAF_L109A1_HE
			{
				magazine="BAF_L109A1_HE";
				count="5*2";
			};
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=2;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=2;
			};
			class _xx_SmokeShellYellow
			{
				magazine="SmokeShellYellow";
				count=2;
			};
			class _xx_SmokeShellPurple
			{
				magazine="SmokeShellPurple";
				count=2;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count="2*2";
			};
			class _xx_IR_Strobe_Marker
			{
				magazine="IR_Strobe_Marker";
				count="2*2";
			};
		};
		transportMaxWeapons="18*1";
		class TransportWeapons
		{
			class _xx_BAF_L85A2_RIS_SUSAT
			{
				weapon="BAF_L85A2_RIS_SUSAT";
				count=1;
			};
			class _xx_BAF_L85A2_UGL_ACOG
			{
				weapon="BAF_L85A2_UGL_ACOG";
				count=1;
			};
		};
		maxMainRotorDive=1;
		minMainRotorDive=1;
		neutralBackRotorDive=1;
	};
	class AW159_Lynx_BAF: Helicopter
	{
		expansion=2;
		scope=2;
		side=1;
		faction="BIS_BAF";
		displayname="$STR_BAF_CFGVEHICLES_AW159_LYNX_BAF0";
		class Library
		{
			libTextDesc="$STR_BAF_CFGVEHICLES_AW159_LYNX_BAF_LIBRARY0";
		};
		model="\Ca\air_d_baf\AW159_BAF";
		picture="\Ca\air_d_baf\Data\UI\picture_lynx_ca.paa";
		icon="\Ca\air_d_baf\Data\UI\icon_lynx_ca.paa";
		mapSize=20;
		crew="BAF_Pilot_MTP";
		crewVulnerable=1;
		typicalCargo[]=
		{
			"BAF_Pilot_MTP",
			"BAF_Pilot_MTP"
		};
		driverAction="AW159_Pilot_BAF";
		GetInAction="GetInHigh";
		GetOutAction="GetOutHigh";
		cargoAction[]=
		{
			"AW159_Cargo_BAF",
			"AW159_Cargo01_BAF",
			"AW159_Cargo01_BAF",
			"AW159_Cargo01_BAF",
			"AW159_Cargo01_BAF",
			"AW159_Cargo01_BAF",
			"AW159_Cargo01_BAF",
			"AW159_Cargo01_BAF"
		};
		cargoIsCoDriver[]={1,0};
		memoryPointsGetInGunner[]=
		{
			"pos codriver",
			"pos cargo"
		};
		memoryPointsGetInGunnerDir[]=
		{
			"pos codriver dir",
			"pos cargo dir"
		};
		memoryPointsGetInCargo[]=
		{
			"pos codriver",
			"pos cargo"
		};
		memoryPointsGetInCargoDir[]=
		{
			"pos codriver dir",
			"pos cargo dir"
		};
		gunnerUsesPilotView=0;
		driverCanSee=31;
		gunnerCanSee=31;
		transportSoldier=8;
		transportMaxBackpacks=5;
		radarType=4;
		enableManualFire=0;
		class Reflectors
		{
			class Middle
			{
				color[]={};
				ambient[]={};
				position="svetlo";
				direction="svetlo konec";
				hitpoint="svetlo";
				selection="svetlo";
				size=0;
				brightness=0;
			};
		};
		class MarkerLights
		{
			class GreenStill
			{
				name="light_nav_right";
				color[]={0.0060000001,0.12,0.0060000001,1};
				ambient[]={0.0099999998,0.1,0.0099999998,1};
				brightness=0.001;
				blinking=0;
			};
			class RedBlinking
			{
				name="light_nav_top";
				color[]={1,0.1,0.1,1};
				ambient[]={0.1,0.0099999998,0.0099999998,1};
				brightness=0.0099999998;
				blinking=1;
			};
			class RedStill
			{
				name="light_nav_left";
				color[]={0.23999999,0.0060000001,0.0060000001,1};
				ambient[]={0.1,0.0099999998,0.0099999998,1};
				brightness=0.001;
				blinking=0;
			};
			class WhiteStill
			{
				name="light_nav_back";
				color[]={0.038800001,0.038800001,0.038800001,1};
				ambient[]={0.1,0.0099999998,0.0099999998,1};
				brightness=0.001;
				blinking=0;
			};
		};
		maxSpeed=293;
		accuracy=1.5;
		cost=10000000;
		armor=60;
		damageResistance=0.0055499999;
		vehicleClass="Air";
		laserScanner=1;
		MainRotorSpeed=0.5;
		backRotorSpeed=3;
		class MFD
		{
			class AirplaneHUD
			{
				class Pos10Vector
				{
					type="vector";
					pos0[]=
					{
						0.5,
						"0.27+0.23"
					};
					pos10[]={0.85000002,0.85000002};
				};
				topLeft="HUD LH";
				topRight="HUD PH";
				bottomLeft="HUD LD";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0,1,0,0.1};
				class Bones
				{
					class PlaneW
					{
						type="fixed";
						pos[]=
						{
							0.5,
							"0.34+0.23"
						};
					};
					class WeaponAim: Pos10Vector
					{
						source="weapon";
					};
					class GunnerAim: Pos10Vector
					{
						source="weapon";
						pos0[]={0,-0.0024999999};
						pos10[]={0.0099999998,0.0024999999};
					};
					class Target: Pos10Vector
					{
						source="target";
					};
					class Velocity: Pos10Vector
					{
						type="vector";
						source="velocity";
						pos0[]=
						{
							0.5,
							"0.27+0.23"
						};
						pos10[]={0.85000002,0.85000002};
					};
					class ILS_H
					{
						type="ils";
						pos0[]=
						{
							0.5,
							"0.27+0.23"
						};
						pos3[]=
						{
							0.60500002,
							"0.27+0.23"
						};
					};
					class ILS_W: ILS_H
					{
						pos3[]={0.5,0.60500002};
					};
					class Level0: Pos10Vector
					{
						pos0[]=
						{
							0.5,
							"0.34+0.23"
						};
						pos10[]={0.85000002,0.92000002};
						type="horizon";
						angle=0;
					};
					class LevelP10: Level0
					{
						angle=10;
					};
					class LevelM10: Level0
					{
						angle=-10;
					};
					class LevelP20: Level0
					{
						angle=20;
					};
					class LevelM20: Level0
					{
						angle=-20;
					};
					class LevelP30: Level0
					{
						angle=30;
					};
					class LevelM30: Level0
					{
						angle=-30;
					};
					class LevelP40: Level0
					{
						angle=40;
					};
					class LevelM40: Level0
					{
						angle=-40;
					};
					class LevelP50: Level0
					{
						angle=50;
					};
					class LevelM50: Level0
					{
						angle=-50;
					};
				};
				class Draw
				{
					alpha=0.60000002;
					color[]={0,0.5,0.050000001};
					condition="on";
					class PlaneW
					{
						clipTL[]={0,1};
						clipBR[]={1,0};
						type="line";
						width=4;
						points[]=
						{
							
							{
								"PlaneW",
								{0,-0.02},
								1
							},
							
							{
								"PlaneW",
								{0.014,-0.014},
								1
							},
							
							{
								"PlaneW",
								{0.02,0},
								1
							},
							
							{
								"PlaneW",
								{0.014,0.014},
								1
							},
							
							{
								"PlaneW",
								{0,0.02},
								1
							},
							
							{
								"PlaneW",
								{-0.014,0.014},
								1
							},
							
							{
								"PlaneW",
								{-0.02,0},
								1
							},
							
							{
								"PlaneW",
								{-0.014,-0.014},
								1
							},
							
							{
								"PlaneW",
								{0,-0.02},
								1
							},
							{}
						};
					};
					class PlaneHeading
					{
						clipTL[]={0,1};
						clipBR[]={1,0};
						type="line";
						width=4;
						points[]=
						{
							
							{
								"Velocity",
								{0,-0.02},
								1
							},
							
							{
								"Velocity",
								{0.014,-0.014},
								1
							},
							
							{
								"Velocity",
								{0.02,0},
								1
							},
							
							{
								"Velocity",
								{0.014,0.014},
								1
							},
							
							{
								"Velocity",
								{0,0.02},
								1
							},
							
							{
								"Velocity",
								{-0.014,0.014},
								1
							},
							
							{
								"Velocity",
								{-0.02,0},
								1
							},
							
							{
								"Velocity",
								{-0.014,-0.014},
								1
							},
							
							{
								"Velocity",
								{0,-0.02},
								1
							},
							{},
							
							{
								"Velocity",
								{0.039999999,0},
								1
							},
							
							{
								"Velocity",
								{0.02,0},
								1
							},
							{},
							
							{
								"Velocity",
								{-0.039999999,0},
								1
							},
							
							{
								"Velocity",
								{-0.02,0},
								1
							},
							{},
							
							{
								"Velocity",
								{0,-0.039999999},
								1
							},
							
							{
								"Velocity",
								{0,-0.02},
								1
							},
							{}
						};
					};
					class Static
					{
						clipTL[]={0,0.1};
						clipBR[]={1,0};
						type="line";
						width=4;
						points[]=
						{
							
							{
								{0.79000002,0.51999998},
								1
							},
							
							{
								{0.81,0.5},
								1
							},
							
							{
								{0.79000002,0.47999999},
								1
							},
							{},
							
							{
								
								{
									0.51999998,
									"0.08+0.06"
								},
								1
							},
							
							{
								
								{
									0.5,
									"0.06+0.06"
								},
								1
							},
							
							{
								
								{
									0.47999999,
									"0.08+0.06"
								},
								1
							},
							{},
							
							{
								
								{
									"0.5-0.1",
									"0.9-0.04"
								},
								1
							},
							
							{
								
								{
									"0.5-0.1",
									"0.9+0.04"
								},
								1
							},
							
							{
								
								{
									"0.5+0.1",
									"0.9+0.04"
								},
								1
							},
							
							{
								
								{
									"0.5+0.1",
									"0.9-0.04"
								},
								1
							},
							
							{
								
								{
									"0.5-0.1",
									"0.9-0.04"
								},
								1
							},
							{},
							
							{
								
								{
									"0.5-0.1",
									0.89999998
								},
								1
							},
							
							{
								
								{
									"0.5-0.092",
									0.89999998
								},
								1
							},
							{},
							
							{
								
								{
									"0.5+0.1",
									0.89999998
								},
								1
							},
							
							{
								
								{
									"0.5+0.092",
									0.89999998
								},
								1
							},
							{},
							
							{
								
								{
									0.5,
									"0.9-0.04"
								},
								1
							},
							
							{
								
								{
									0.5,
									"0.9-0.032"
								},
								1
							},
							{},
							
							{
								
								{
									0.5,
									"0.9+0.04"
								},
								1
							},
							
							{
								
								{
									0.5,
									"0.9+0.032"
								},
								1
							},
							{}
						};
					};
					class Gunner
					{
						type="line";
						width=4;
						points[]=
						{
							
							{
								"GunnerAim",
								
								{
									"0.5-0.015",
									"0.9-0.008"
								},
								1
							},
							
							{
								"GunnerAim",
								
								{
									"0.5-0.015",
									"0.9+0.008"
								},
								1
							},
							
							{
								"GunnerAim",
								
								{
									"0.5+0.015",
									"0.9+0.008"
								},
								1
							},
							
							{
								"GunnerAim",
								
								{
									"0.5+0.015",
									"0.9-0.008"
								},
								1
							},
							
							{
								"GunnerAim",
								
								{
									"0.5-0.015",
									"0.9-0.008"
								},
								1
							}
						};
					};
					class MGun
					{
						condition="mgun";
						class Circle
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"WeaponAim",
									{0.050000001,0},
									1
								},
								
								{
									"WeaponAim",
									{0.015,0},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0,0.050000001},
									1
								},
								
								{
									"WeaponAim",
									{0,0.015},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.050000001,0},
									1
								},
								
								{
									"WeaponAim",
									{-0.015,0},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0,-0.050000001},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.015},
									1
								},
								{}
							};
						};
					};
					class Bomb
					{
						condition="bomb";
						class Circle
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"WeaponAim",
									{0,-0.1},
									1
								},
								
								{
									"WeaponAim",
									{0.050000001,-0.086999997},
									1
								},
								
								{
									"WeaponAim",
									{0.086999997,-0.050000001},
									1
								},
								
								{
									"WeaponAim",
									{0.1,0},
									1
								},
								
								{
									"WeaponAim",
									{0.086999997,0.050000001},
									1
								},
								
								{
									"WeaponAim",
									{0.050000001,0.086999997},
									1
								},
								
								{
									"WeaponAim",
									{0,0.1},
									1
								},
								
								{
									"WeaponAim",
									{-0.050000001,0.086999997},
									1
								},
								
								{
									"WeaponAim",
									{-0.086999997,0.050000001},
									1
								},
								
								{
									"WeaponAim",
									{-0.1,0},
									1
								},
								
								{
									"WeaponAim",
									{-0.086999997,-0.050000001},
									1
								},
								
								{
									"WeaponAim",
									{-0.050000001,-0.086999997},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.1},
									1
								},
								{},
								
								{
									"Velocity",
									0.001,
									"WeaponAim",
									{0,0},
									1
								},
								
								{
									"Velocity",
									{0,0},
									1
								},
								{},
								
								{
									"Target",
									{0,-0.07},
									1
								},
								
								{
									"Target",
									{0.07,0},
									1
								},
								
								{
									"Target",
									{0,0.07},
									1
								},
								
								{
									"Target",
									{-0.07,0},
									1
								},
								
								{
									"Target",
									{0,-0.07},
									1
								}
							};
						};
					};
					class AAMissile
					{
						condition="AAmissile";
						class Circle
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"WeaponAim",
									{0,-0.25},
									1
								},
								
								{
									"WeaponAim",
									{0.125,-0.2175},
									1
								},
								
								{
									"WeaponAim",
									{0.2175,-0.125},
									1
								},
								
								{
									"WeaponAim",
									{0.25,0},
									1
								},
								
								{
									"WeaponAim",
									{0.2175,0.125},
									1
								},
								
								{
									"WeaponAim",
									{0.125,0.2175},
									1
								},
								
								{
									"WeaponAim",
									{0,0.25},
									1
								},
								
								{
									"WeaponAim",
									{-0.125,0.2175},
									1
								},
								
								{
									"WeaponAim",
									{-0.2175,0.125},
									1
								},
								
								{
									"WeaponAim",
									{-0.25,0},
									1
								},
								
								{
									"WeaponAim",
									{-0.2175,-0.125},
									1
								},
								
								{
									"WeaponAim",
									{-0.125,-0.2175},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.25},
									1
								},
								{},
								
								{
									"Target",
									{0,-0.07},
									1
								},
								
								{
									"Target",
									{0.07,0},
									1
								},
								
								{
									"Target",
									{0,0.07},
									1
								},
								
								{
									"Target",
									{-0.07,0},
									1
								},
								
								{
									"Target",
									{0,-0.07},
									1
								}
							};
						};
					};
					class ATMissile
					{
						condition="ATmissile";
						class Circle
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"WeaponAim",
									{-0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									
									{
										-0.15000001,
										"-0.15+0.02"
									},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									
									{
										-0.15000001,
										"+0.15-0.02"
									},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									
									{
										0.15000001,
										"-0.15+0.02"
									},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									
									{
										0.15000001,
										"+0.15-0.02"
									},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									
									{
										"-0.15+0.02",
										-0.15000001
									},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									
									{
										"-0.15+0.02",
										0.15000001
									},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									
									{
										"0.15-0.02",
										-0.15000001
									},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									
									{
										"0.15-0.02",
										0.15000001
									},
									1
								},
								{}
							};
						};
					};
					class Rockets
					{
						condition="Rocket";
						class Circle
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"WeaponAim",
									{-0.25,-0.25},
									1
								},
								
								{
									"WeaponAim",
									
									{
										-0.25,
										"-0.25+0.05"
									},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.25,0.25},
									1
								},
								
								{
									"WeaponAim",
									
									{
										-0.25,
										"+0.25-0.05"
									},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.25,-0.25},
									1
								},
								
								{
									"WeaponAim",
									
									{
										0.25,
										"-0.25+0.05"
									},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.25,0.25},
									1
								},
								
								{
									"WeaponAim",
									
									{
										0.25,
										"+0.25-0.05"
									},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.25,-0.25},
									1
								},
								
								{
									"WeaponAim",
									
									{
										"-0.25+0.05",
										-0.25
									},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.25,0.25},
									1
								},
								
								{
									"WeaponAim",
									
									{
										"-0.25+0.05",
										0.25
									},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.25,-0.25},
									1
								},
								
								{
									"WeaponAim",
									
									{
										"0.25-0.05",
										-0.25
									},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.25,0.25},
									1
								},
								
								{
									"WeaponAim",
									
									{
										"0.25-0.05",
										0.25
									},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.035,0.035},
									1
								},
								
								{
									"WeaponAim",
									{0.0099999998,0.0099999998},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.035,0.035},
									1
								},
								
								{
									"WeaponAim",
									{-0.0099999998,0.0099999998},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.035,-0.035},
									1
								},
								
								{
									"WeaponAim",
									{-0.0099999998,-0.0099999998},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.035,-0.035},
									1
								},
								
								{
									"WeaponAim",
									{0.0099999998,-0.0099999998},
									1
								},
								{}
							};
						};
					};
					class SpeedNumber
					{
						type="text";
						align="right";
						scale=1;
						source="speed";
						sourceScale=3.5999999;
						pos[]=
						{
							{0.059999999,0.47},
							1
						};
						right[]=
						{
							
							{
								"0.14-0.02",
								0.47
							},
							1
						};
						down[]=
						{
							{0.059999999,0.51999998},
							1
						};
					};
					class AltNumber: SpeedNumber
					{
						source="altitudeAGL";
						sourceScale=1;
						pos[]=
						{
							
							{
								"0.86-0.15",
								0.47
							},
							1
						};
						right[]=
						{
							
							{
								"0.94-0.15-0.02",
								0.47
							},
							1
						};
						down[]=
						{
							
							{
								"0.86-0.15",
								0.51999998
							},
							1
						};
					};
					class AltScale
					{
						type="scale";
						scale=1;
						source="altitudeAGL";
						sourceScale=1;
						align="right";
						width=4;
						pos[]={0.86000001,0.81999999};
						right[]=
						{
							"0.94-0.02",
							0.81999999
						};
						down[]={0.86000001,0.87};
						lineXleft=0.82499999;
						lineYright=0.83499998;
						lineXleftMajor=0.82499999;
						lineYrightMajor=0.84500003;
						bottom=0.2;
						top=0.85000002;
						center=0.5;
						step=20;
						StepSize="(0.85- 0.2)/20";
						horizontal=0;
						min="none";
						max="none";
						numberEach=5;
						majorLineEach=5;
					};
					class weapons
					{
						type="text";
						source="weapon";
						align="right";
						scale=0.5;
						sourceScale=1;
						pos[]=
						{
							{0.1,0.88},
							1
						};
						right[]=
						{
							
							{
								"0.16-0.02",
								0.88
							},
							1
						};
						down[]=
						{
							{0.1,0.92000002},
							1
						};
					};
					class ammo
					{
						type="text";
						source="ammo";
						align="right";
						scale=0.5;
						sourceScale=1;
						pos[]=
						{
							{0.1,0.93000001},
							1
						};
						right[]=
						{
							
							{
								"0.16-0.02",
								0.93000001
							},
							1
						};
						down[]=
						{
							{0.1,0.97000003},
							1
						};
					};
					class HeadingScale
					{
						type="scale";
						scale=1;
						source="Heading";
						sourceScale=1;
						align="center";
						width=4;
						pos[]=
						{
							"0.32-0.01",
							"0.0+0.05"
						};
						right[]=
						{
							"0.38-0.01",
							"0.0+0.05"
						};
						down[]=
						{
							"0.32-0.01",
							"0.04+0.05"
						};
						lineXleft="0.06+0.05";
						lineYright="0.05+0.05";
						lineXleftMajor="0.07+0.05";
						lineYrightMajor="0.04+0.05";
						bottom=0.69999999;
						center=0.5;
						top=0.30000001;
						step=10;
						StepSize="(0.70- 0.3)/15";
						horizontal=1;
						min="none";
						max="none";
						numberEach=3;
						majorLineEach=3;
					};
					class HorizontalLine
					{
						clipTL[]={0.2,0.12};
						clipBR[]={0.80000001,0.95999998};
						class HorizontalLineDraw
						{
							type="line";
							source="Level0";
							points[]=
							{
								
								{
									"Level0",
									
									{
										"-6*0.075/2",
										0.02
									},
									1
								},
								
								{
									"Level0",
									
									{
										"-5*0.075/2",
										0.02
									},
									1
								},
								{},
								
								{
									"Level0",
									
									{
										"-4*0.075/2",
										0.02
									},
									1
								},
								
								{
									"Level0",
									
									{
										"-3*0.075/2",
										0.02
									},
									1
								},
								{},
								
								{
									"Level0",
									
									{
										"-2*0.075/2",
										0.02
									},
									1
								},
								
								{
									"Level0",
									
									{
										"-1*0.075/2",
										0.02
									},
									1
								},
								{},
								
								{
									"Level0",
									
									{
										"1*0.075/2",
										0.02
									},
									1
								},
								
								{
									"Level0",
									
									{
										"2*0.075/2",
										0.02
									},
									1
								},
								{},
								
								{
									"Level0",
									
									{
										"3*0.075/2",
										0.02
									},
									1
								},
								
								{
									"Level0",
									
									{
										"4*0.075/2",
										0.02
									},
									1
								},
								{},
								
								{
									"Level0",
									
									{
										"5*0.075/2",
										0.02
									},
									1
								},
								
								{
									"Level0",
									
									{
										"6*0.075/2",
										0.02
									},
									1
								}
							};
						};
					};
				};
				helmetMountedDisplay=1;
				helmetPosition[]={-0.025,0.025,0.1};
				helmetRight[]={0.050000001,0,0};
				helmetDown[]={-0,-0.050000001,0};
			};
		};
		LockDetectionSystem="8  + 4";
		IncommingMisslieDetectionSystem=16;
		gunBeg="muzzle_1";
		gunEnd="chamber_1";
		memoryPointLMissile="P strela";
		memoryPointRMissile="P strela";
		memoryPointGun="muzzle_1";
		weapons[]=
		{
			"CRV7_PG",
			"M621",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"12Rnd_CRV7",
			"1200Rnd_20mm_M621",
			"120Rnd_CMFlareMagazine"
		};
		HeadAimDown=-5.1999998;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body="obsTurret";
				gun="obsGun";
				animationSourceBody="obsTurret";
				animationSourceGun="obsGun";
				stabilizedInAxes=3;
				memoryPointGunnerOptics="commanderview";
				minElev=-40;
				maxElev=20;
				initElev=0;
				minTurn=-120;
				maxTurn=120;
				initTurn=0;
				gunBeg="commanderview";
				gunEnd="laserstart";
				memoryPointGun="laserstart";
				turretInfoType="RscUnitInfo_AH64D_gunner";
				weapons[]=
				{
					"Laserdesignator_mounted"
				};
				soundServo[]=
				{
					"\ca\sounds\vehicles\servos\turret-1",
					0.0099999998,
					1,
					30
				};
				magazines[]=
				{
					"Laserbatteries"
				};
				inGunnerMayFire=1;
				gunnerAction="AW159_Pilot_BAF";
				gunnerGetInAction="GetInHigh";
				gunnerGetOutAction="GetOutHigh";
				gunnerOpticsEffect[]={};
				gunnerOpticsModel="\ca\air_e\gunnerOptics_ah64";
				class OpticsIn
				{
					class Wide
					{
						opticsDisplayName="W";
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.46599999;
						minFov=0.46599999;
						maxFov=0.46599999;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="\ca\air_e\gunnerOptics_ah64";
					};
					class Medium: Wide
					{
						opticsDisplayName="M";
						initFov=0.093000002;
						minFov=0.093000002;
						maxFov=0.093000002;
						gunnerOpticsModel="\ca\air_e\gunnerOptics_ah64_2";
					};
					class Narrow: Wide
					{
						opticsDisplayName="N";
						gunnerOpticsModel="\ca\air_e\gunnerOptics_ah64_3";
						initFov=0.028999999;
						minFov=0.028999999;
						maxFov=0.028999999;
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=1.1;
						minFov=0.133;
						maxFov=1.1;
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
						gunnerOpticsModel="";
						gunnerOpticsEffect[]={};
					};
				};
				startEngine=0;
				gunnerHasFlares=0;
			};
		};
		selectionFireAnim="zasleh";
		class AnimationSources: AnimationSources
		{
			class ReloadMGAnim
			{
				source="reload";
				weapon="M621";
			};
		};
		threat[]={1,1,0.5};
		destrType="DestructWreck";
		class HitPoints: HitPoints
		{
			class HitGlass1: HitGlass1
			{
				armor=0.5;
			};
			class HitGlass2: HitGlass2
			{
				armor=0.5;
			};
			class HitGlass3: HitGlass3
			{
				armor=0.5;
			};
			class HitGlass4: HitGlass4
			{
				armor=0.5;
			};
			class HitGlass5: HitGlass5
			{
				armor=0.5;
			};
			class HitHull
			{
				armor=20;
				material=1;
				name="NEtrup";
				visual="trup";
				passThrough=0.5;
			};
			class HitEngine
			{
				armor=2;
				material=2;
				name="motor";
				visual="trup";
				passThrough=0.5;
			};
			class HitAvionics
			{
				armor=0.15000001;
				material=51;
				name="elektronika";
				visual="elektronika";
				passThrough=0.2;
			};
			class HitVRotor
			{
				armor=0.30000001;
				material=51;
				name="mala vrtule";
				visual="mala vrtule staticka";
				passThrough=0.1;
			};
			class HitHRotor
			{
				armor=0.2;
				material=51;
				name="velka vrtule";
				visual="velka vrtule staticka";
				passThrough=0.1;
			};
			class HitGlass6
			{
				armor=0.5;
				material=-1;
				name="glass6";
				visual="glass6";
				passThrough=0;
			};
			class HitGlass7
			{
				armor=0.5;
				material=-1;
				name="glass7";
				visual="glass7";
				passThrough=0;
			};
			class HitGlass8
			{
				armor=0.5;
				material=-1;
				name="glass8";
				visual="glass8";
				passThrough=0;
			};
			class HitGlass9
			{
				armor=0.5;
				material=-1;
				name="glass9";
				visual="glass9";
				passThrough=0;
			};
			class HitGlass10
			{
				armor=0.5;
				material=-1;
				name="glass10";
				visual="glass10";
				passThrough=0;
			};
			class HitGlass11
			{
				armor=0.5;
				material=-1;
				name="glass11";
				visual="glass11";
				passThrough=0;
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"ca\air_d_BAF\Data\Lynx_base.rvmat",
				"ca\air_d_BAF\Data\Lynx_base_damage.rvmat",
				"ca\air_d_BAF\Data\Lynx_base_destruct.rvmat",
				"ca\air_d_BAF\Data\Lynx_glass.rvmat",
				"ca\air_d_BAF\Data\Lynx_glass_damage.rvmat",
				"ca\air_d_BAF\Data\Lynx_glass_damage.rvmat",
				"ca\air_d_BAF\Data\Lynx_interior.rvmat",
				"ca\air_d_BAF\Data\Lynx_interior_damage.rvmat",
				"ca\air_d_BAF\Data\Lynx_interior_destruct.rvmat"
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
			1
		};
		soundEngineOnExt[]=
		{
			"Ca\sounds_baf\air\uk_start_ext_1",
			0.56234133,
			1,
			800
		};
		soundEngineOffInt[]=
		{
			"\Ca\sounds_baf\air\uk_stop_int_1",
			0.1,
			1
		};
		soundEngineOffExt[]=
		{
			"Ca\sounds_baf\air\uk_stop_ext_2",
			0.56234133,
			1,
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
					"Ca\sounds_baf\air\uk_engine_ext_2",
					3.1622777,
					1.2,
					1000
				};
				frequency="rotorSpeed";
				volume="camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorLowOut
			{
				sound[]=
				{
					"\Ca\sounds_baf\air\uk_rotor_4h",
					3.1622777,
					1.1,
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
					1.1,
					1300
				};
				frequency="rotorSpeed";
				volume="camPos*10*(0 max (rotorThrust-0.95))";
				cone[]={1.8,3.1400001,2,0.89999998};
			};
			class EngineIn
			{
				sound[]=
				{
					"\Ca\sounds_baf\air\uk_engine_int_2",
					0.56234133,
					1.2
				};
				frequency="rotorSpeed";
				volume="(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorLowIn
			{
				sound[]=
				{
					"Ca\sounds_baf\air\uk_rotor_4h_int",
					1,
					1.1
				};
				frequency="rotorSpeed";
				volume="2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
			};
			class RotorHighIn
			{
				sound[]=
				{
					"Ca\sounds_baf\air\uk_rotor_4h_int",
					3.1622777,
					1.1
				};
				frequency="rotorSpeed";
				volume="(1-camPos)*3*(rotorThrust-0.9)";
			};
		};
		supplyRadius=5;
		transportMaxMagazines="90*2";
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine="30Rnd_556x45_Stanag";
				count="10*2";
			};
			class _xx_5Rnd_127x99_AS50
			{
				magazine="5Rnd_127x99_AS50";
				count="5*2";
			};
			class _xx_5Rnd_86x70_L115A1
			{
				magazine="5Rnd_86x70_L115A1";
				count="5*2";
			};
			class _xx_200Rnd_556x45_L110A1
			{
				magazine="200Rnd_556x45_L110A1";
				count="2*2";
			};
			class _xx_1Rnd_HE_M203
			{
				magazine="1Rnd_HE_M203";
				count="3*2";
			};
			class _xx_BAF_L109A1_HE
			{
				magazine="BAF_L109A1_HE";
				count="5*2";
			};
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=2;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=2;
			};
			class _xx_SmokeShellYellow
			{
				magazine="SmokeShellYellow";
				count=2;
			};
			class _xx_SmokeShellPurple
			{
				magazine="SmokeShellPurple";
				count=2;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count="2*2";
			};
			class _xx_IR_Strobe_Marker
			{
				magazine="IR_Strobe_Marker";
				count="2*2";
			};
		};
		transportMaxWeapons="18*1";
		class TransportWeapons
		{
			class _xx_BAF_L85A2_RIS_SUSAT
			{
				weapon="BAF_L85A2_RIS_SUSAT";
				count=1;
			};
			class _xx_BAF_L85A2_UGL_ACOG
			{
				weapon="BAF_L85A2_UGL_ACOG";
				count=1;
			};
		};
	};
	class BAF_Merlin_HC3_D: Helicopter
	{
		expansion=2;
		scope=2;
		side=1;
		faction="BIS_BAF";
		displayname="$STR_BAF_CFGVEHICLES_BAF_MERLIN_HC3_D0";
		class Library
		{
			libTextDesc="$STR_BAF_CFGVEHICLES_BAF_MERLIN_HC3_D_LIBRARY0";
		};
		model="\Ca\air_d_baf\MerlinHC3_BAF";
		picture="\Ca\air_d_baf\Data\UI\picture_merlin_ca.paa";
		icon="\Ca\air_d_baf\Data\UI\icon_merlin_ca.paa";
		mapSize=20;
		crewVulnerable=1;
		crew="BAF_Pilot_MTP";
		typicalCargo[]=
		{
			"BAF_Pilot_MTP",
			"BAF_Pilot_MTP"
		};
		driverAction="Merlin_Pilot_BAF";
		cargoIsCoDriver[]={1,0};
		GetInAction="GetInHigh";
		GetOutAction="GetOutHigh";
		cargoAction[]=
		{
			"Merlin_Cargo_BAF",
			"Merlin_Cargo01_BAF",
			"Merlin_Cargo_BAF",
			"Merlin_Cargo01_BAF",
			"Merlin_Cargo01_BAF",
			"Merlin_Cargo_BAF",
			"Merlin_Cargo01_BAF",
			"Merlin_Cargo_BAF",
			"Merlin_Cargo01_BAF",
			"Merlin_Cargo01_BAF",
			"Merlin_Cargo_BAF",
			"Merlin_Cargo01_BAF",
			"Merlin_Cargo01_BAF",
			"Merlin_Cargo_BAF",
			"Merlin_Cargo01_BAF",
			"Merlin_Cargo_BAF",
			"Merlin_Cargo01_BAF"
		};
		memoryPointsGetInCargo[]=
		{
			"pos codriver",
			"pos cargo"
		};
		memoryPointsGetInCargoDir[]=
		{
			"pos codriver dir",
			"pos cargo dir"
		};
		transportSoldier=17;
		transportMaxBackpacks=10;
		radarType=4;
		enableManualFire=0;
		class Reflectors
		{
			class Light
			{
				color[]={0.80000001,0.80000001,1,1};
				ambient[]={0.07,0.07,0.07,1};
				position="light_1_1_pos";
				direction="light_1_1_dir";
				hitpoint="light_1_1_pos";
				selection="L svetlo";
				size=1;
				brightness=1;
			};
		};
		class MarkerLights
		{
			class GreenStill
			{
				name="light_nav_right";
				color[]={0.0060000001,0.12,0.0060000001,1};
				ambient[]={0.0099999998,0.1,0.0099999998,1};
				brightness=0.001;
				blinking=0;
			};
			class WhiteBlinking
			{
				name="light_nav_top";
				color[]={0.038800001,0.038800001,0.038800001,1};
				ambient[]={0.029999999,0.023,0.0055999998,1};
				brightness=0.001;
				blinking=1;
			};
			class RedStill
			{
				name="light_nav_left";
				color[]={0.12,0.0060000001,0.0060000001,1};
				ambient[]={0.1,0.0099999998,0.0099999998,1};
				brightness=0.001;
				blinking=0;
			};
		};
		class AnimationSources: AnimationSources
		{
			class Doors
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
		};
		class UserActions
		{
			class OpenRdoor
			{
				displayName="$STR_BAF_CFGVEHICLES_BAF_MERLIN_HC3_D_USERACTIONS_OPENRDOOR0";
				position="axis_door_side_pop";
				radius=3.5999999;
				onlyForplayer=0;
				condition="this animationPhase ""dvere_p"" > 0.5 AND Alive(this)";
				statement="this animate [""dvere_p"",0];this animate [""dvere_p_pop"",0];";
			};
			class CloseRdoor
			{
				displayName="$STR_BAF_CFGVEHICLES_BAF_MERLIN_HC3_D_USERACTIONS_CLOSERDOOR0";
				position="axis_door_side_pop";
				radius=3.5999999;
				onlyForplayer=0;
				condition="this animationPhase ""dvere_p"" < 0.5 AND Alive(this)";
				statement="this animate [""dvere_p"",1];this animate [""dvere_p_pop"",1];";
			};
			class OpenLdoor
			{
				displayName="$STR_BAF_CFGVEHICLES_BAF_MERLIN_HC3_D_USERACTIONS_OPENLDOOR0";
				position="axis_door_crew_pop";
				radius=3.5999999;
				onlyForplayer=0;
				condition="this animationPhase ""dvere_l"" > 0.5 AND Alive(this)";
				statement="this animate [""dvere_l"",0];this animate [""dvere_l_pop"",0];";
			};
			class CloseLdoor
			{
				displayName="$STR_BAF_CFGVEHICLES_BAF_MERLIN_HC3_D_USERACTIONS_CLOSELDOOR0";
				position="axis_door_crew_pop";
				radius=3.5999999;
				onlyForplayer=0;
				condition="this animationPhase ""dvere_l"" < 0.5 AND Alive(this)";
				statement="this animate [""dvere_l"",1];this animate [""dvere_l_pop"",1];";
			};
		};
		maxSpeed=309;
		accuracy=1.5;
		cost=10000000;
		armor=60;
		damageResistance=0.0055499999;
		vehicleClass="Air";
		laserScanner=1;
		MainRotorSpeed=1;
		backRotorSpeed=1;
		gearRetracting=1;
		gearUpTime=1;
		gearDownTime=1;
		weapons[]=
		{
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"120Rnd_CMFlareMagazine",
			"120Rnd_CMFlareMagazine",
			"120Rnd_CMFlareMagazine"
		};
		LockDetectionSystem=1118208;
		IncommingMisslieDetectionSystem=16;
		irScanRangeMin=0;
		irScanRangeMax=1000;
		nightVision=1;
		class Turrets: Turrets
		{
		};
		selectionFireAnim="zasleh";
		threat[]={0.30000001,0.30000001,0.30000001};
		destrType="DestructWreck";
		class HitPoints: HitPoints
		{
			class HitHull
			{
				armor=20;
				material=1;
				name="NEtrup";
				visual="trup";
				passThrough=0.5;
			};
			class HitEngine
			{
				armor=2;
				material=1;
				name="motor";
				visual="trup";
				passThrough=0.5;
			};
			class HitAvionics
			{
				armor=0.15000001;
				material=51;
				name="elektronika";
				visual="elektronika";
				passThrough=0.2;
			};
			class HitVRotor
			{
				armor=0.30000001;
				material=51;
				name="mala vrtule";
				visual="mala vrtule staticka";
				passThrough=0.1;
			};
			class HitHRotor
			{
				armor=0.2;
				material=51;
				name="velka vrtule";
				visual="velka vrtule staticka";
				passThrough=0.1;
			};
			class HitGlass1: HitGlass1
			{
				armor=0.5;
			};
			class HitGlass2: HitGlass2
			{
				armor=0.5;
			};
			class HitGlass3: HitGlass3
			{
				armor=0.5;
			};
			class HitGlass4: HitGlass4
			{
				armor=0.5;
			};
			class HitGlass5: HitGlass5
			{
				armor=0.5;
			};
			class HitGlass6
			{
				armor=0.5;
				material=-1;
				name="glass6";
				visual="glass6";
				passThrough=0;
			};
			class HitGlass7
			{
				armor=0.5;
				material=-1;
				name="glass7";
				visual="glass7";
				passThrough=0;
			};
			class HitGlass8
			{
				armor=0.5;
				material=-1;
				name="glass8";
				visual="glass8";
				passThrough=0;
			};
			class HitGlass9
			{
				armor=0.5;
				material=-1;
				name="glass9";
				visual="glass9";
				passThrough=0;
			};
			class HitGlass10
			{
				armor=0.5;
				material=-1;
				name="glass10";
				visual="glass10";
				passThrough=0;
			};
			class HitGlass11
			{
				armor=0.5;
				material=-1;
				name="glass11";
				visual="glass11";
				passThrough=0;
			};
			class HitGlass12
			{
				armor=0.5;
				material=-1;
				name="glass12";
				visual="glass12";
				passThrough=0;
			};
			class HitGlass13
			{
				armor=0.5;
				material=-1;
				name="glass13";
				visual="glass13";
				passThrough=0;
			};
			class HitGlass14
			{
				armor=0.5;
				material=-1;
				name="glass14";
				visual="glass14";
				passThrough=0;
			};
			class HitGlass15
			{
				armor=0.5;
				material=-1;
				name="glass15";
				visual="glass15";
				passThrough=0;
			};
			class HitGlass16
			{
				armor=0.5;
				material=-1;
				name="glass16";
				visual="glass16";
				passThrough=0;
			};
			class HitGlass17
			{
				armor=0.5;
				material=-1;
				name="glass17";
				visual="glass17";
				passThrough=0;
			};
			class HitGlass18
			{
				armor=0.5;
				material=-1;
				name="glass18";
				visual="glass18";
				passThrough=0;
			};
			class HitGlass19
			{
				armor=0.5;
				material=-1;
				name="glass19";
				visual="glass19";
				passThrough=0;
			};
			class HitGlass20
			{
				armor=0.5;
				material=-1;
				name="glass20";
				visual="glass20";
				passThrough=0;
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"ca\air_d_BAF\Data\merlin_int_01.rvmat",
				"ca\air_d_BAF\Data\merlin_int_01_damage.rvmat",
				"ca\air_d_BAF\Data\merlin_int_01_destruct.rvmat",
				"ca\air_d_BAF\Data\merlin_int_02.rvmat",
				"ca\air_d_BAF\Data\merlin_int_02_damage.rvmat",
				"ca\air_d_BAF\Data\merlin_int_02_destruct.rvmat",
				"ca\air_d_BAF\Data\Merlin_glass.rvmat",
				"ca\air_d_BAF\Data\Merlin_glass_damage.rvmat",
				"ca\air_d_BAF\Data\Merlin_glass_damage.rvmat",
				"ca\air_d_BAF\Data\MerlinHc3_2_BAF.rvmat",
				"ca\air_d_BAF\Data\MerlinHc3_2_BAF_damage.rvmat",
				"ca\air_d_BAF\Data\MerlinHc3_2_BAF_destruct.rvmat",
				"ca\air_d_BAF\Data\MerlinHc3_1_BAF.rvmat",
				"ca\air_d_BAF\Data\MerlinHc3_1_BAF_damage.rvmat",
				"ca\air_d_BAF\Data\MerlinHc3_1_BAF_destruct.rvmat"
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
			1.1
		};
		soundEngineOnExt[]=
		{
			"Ca\sounds_baf\air\uk_start_ext_1",
			0.56234133,
			1.1,
			800
		};
		soundEngineOffInt[]=
		{
			"\Ca\sounds_baf\air\uk_stop_int_1",
			0.1,
			1.1
		};
		soundEngineOffExt[]=
		{
			"Ca\sounds_baf\air\uk_stop_ext_2",
			0.56234133,
			1.1,
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
					1,
					1000
				};
				frequency="rotorSpeed";
				volume="camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorLowOut
			{
				sound[]=
				{
					"\Ca\sounds_baf\air\uk_rotor_4l",
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
				volume="camPos*10*(0 max (rotorThrust-0.95))";
				cone[]={1.8,3.1400001,2,0.89999998};
			};
			class EngineIn
			{
				sound[]=
				{
					"\Ca\sounds_baf\air\uk_engine_int_1",
					0.56234133,
					1
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
					1
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
					1
				};
				frequency="rotorSpeed";
				volume="(1-camPos)*3*(rotorThrust-0.9)";
			};
		};
		supplyRadius=5;
		transportMaxMagazines="90*2";
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine="30Rnd_556x45_Stanag";
				count="10*2";
			};
			class _xx_5Rnd_127x99_AS50
			{
				magazine="5Rnd_127x99_AS50";
				count="5*2";
			};
			class _xx_5Rnd_86x70_L115A1
			{
				magazine="5Rnd_86x70_L115A1";
				count="5*2";
			};
			class _xx_200Rnd_556x45_L110A1
			{
				magazine="200Rnd_556x45_L110A1";
				count="2*2";
			};
			class _xx_1Rnd_HE_M203
			{
				magazine="1Rnd_HE_M203";
				count="3*2";
			};
			class _xx_BAF_L109A1_HE
			{
				magazine="BAF_L109A1_HE";
				count="5*2";
			};
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=2;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=2;
			};
			class _xx_SmokeShellYellow
			{
				magazine="SmokeShellYellow";
				count=2;
			};
			class _xx_SmokeShellPurple
			{
				magazine="SmokeShellPurple";
				count=2;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count="2*2";
			};
			class _xx_IR_Strobe_Marker
			{
				magazine="IR_Strobe_Marker";
				count="2*2";
			};
		};
		transportMaxWeapons="18*1";
		class TransportWeapons
		{
			class _xx_BAF_L85A2_RIS_SUSAT
			{
				weapon="BAF_L85A2_RIS_SUSAT";
				count=1;
			};
			class _xx_BAF_L85A2_UGL_ACOG
			{
				weapon="BAF_L85A2_UGL_ACOG";
				count=1;
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyWeapon;
	class ProxyAGM114Hellfire: ProxyWeapon
	{
		model="\ca\Air_E\AGM114Hellfire";
		simulation="maverickweapon";
	};
};
