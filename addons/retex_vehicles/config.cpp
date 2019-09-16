#define TEast		0
#define TWest		1
#define TGuerrila		2
#define TCivilian		3
#define TSideUnknown		4
#define TEnemy		5
#define TFriendly		6
#define TLogic		7

#define private		0
#define protected		1
#define public		2

#define true	1
#define false	0

#define ReadAndWrite		0
#define ReadAndCreate		1
#define ReadOnly		2
#define ReadOnlyVerified		3

#define VSoft		0
#define VArmor		1
#define VAir		2

enum {
	STABILIZEDINAXISX = 1,
	STABILIZEDINAXISY = 2,
	STABILIZEDINAXESBOTH = 3,
	STABILIZEDINAXESNONE = 0,
};

class CfgPatches {
	class retex_vehicles {
		requiredVersion = 0.2;
		requiredAddons[] = {"CAWeapons", "CAWeapons2", "CAWeapons_E", "CAWeapons_BAF", "ace_main", "CA_Anims", "CAData", "ace_c_weapon", "ace_c_wep_magazines", "ace_c_vehicle", "acex_ru_veh_bmp2", "tu_vehicles_sov", "acex_veh_m113"};
		units[] = {};
	};
};

class CfgVehicleClasses {
	class TU_CDF_SPN {
		displayName = $STR_CDF_SPN;
	};
};

class CfgMovesBasic {
	class DefaultDie;
	class ManActions {
		TU_M113_DriverOut = "TU_M113_DriverOut";
	};
};

class CfgMovesMaleSdr: CfgMovesBasic {
	class States {
		class Crew;	// External class reference		
		class KIA_TU_M113_DriverOut : DefaultDie {
			actions = DeadActions;
			file = retex_vehicles\m113\data\Anim\KIA_M113_DriverOut.rtm;
			connectTo[] = {DeadState, 0.1};
			speed = 0.5;
			looped = false;
			terminal = true;
			soundEnabled = false;
		};
		
		class TU_M113_DriverOut : Crew {
			file = retex_vehicles\m113\data\Anim\M113_DriverOut.rtm;
			interpolateTo[] = {KIA_TU_M113_DriverOut, 1};
		};
	};
};

class CfgMagazines {
	class 22Rnd_100mm_HE_2A70;
	
	class 8Rnd_AT10_BMP3;
	
	class 34Rnd_100mm_HE_2A70: 22Rnd_100mm_HE_2A70 {
		count = 34;
	};
	
	class TU_22Rnd_100mm_HE_2A70: 22Rnd_100mm_HE_2A70 {
		count = 22;
	};
	
	class 3Rnd_AT10_BMP3: 8Rnd_AT10_BMP3 {
		count = 3;
	};
	
	class 4Rnd_AT10_BMP3: 8Rnd_AT10_BMP3 {
		count = 4;
	};
		
	class 400Rnd_30mm_AGS17;
	
	class TU_100Rnd_30mm_AGS17: 400Rnd_30mm_AGS17 {
		count = 100;
	};
};
	
class Mode_SemiAuto {};

class Mode_Burst : Mode_SemiAuto {};

class Mode_FullAuto : Mode_SemiAuto {};
	
class CfgWeapons {
	class 2A70;
	
	class ACE_2A70: 2A70 {
		magazines[] = {"3Rnd_AT10_BMP3", "4Rnd_AT10_BMP3", "8Rnd_AT10_BMP3", "TU_22Rnd_100mm_HE_2A70", "22Rnd_100mm_HE_2A70", "34Rnd_100mm_HE_2A70"};
	};
	
	class AT5LauncherSingle;
	
	class AGS17;
	
	class TU_AGS17: AGS17 {
		magazines[] = {"TU_100Rnd_30mm_AGS17", "400Rnd_30mm_AGS17"};
	};	
};

class CfgVehicles {
	class Land;	// External class reference
	
	class LandVehicle : Land {
		class NewTurret;	// External class reference
	};
	
	class Tank : LandVehicle {
		class Turrets {
			class MainTurret : NewTurret {				
				class HitPoints;
				class Turrets;	// External class reference
			};
		};
		class HitPoints;
	};
	
	class Tracked_APC : Tank {
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				class Turrets : Turrets {
					class CommanderOptics;	// External class reference
				};
			};
		};
		class AnimationSources;	// External class reference
	};
	
	class M113_Base: Tank {
		drivercompartments = 1;
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				startengine = 0;
			};
		};
	};
	
	class M113Ambul_Base: M113_Base {
		ace_firepos[] = {0.5, 4, -1.5};
		model = "\x\acex\addons\m_veh_m113\m113_ambulance.p3d";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenselectionstextures[] = {"\ca\Tracked_E\M113\Data\m113a3_01_co.paa", "\ca\Tracked_E\M113\Data\m113a3_02_co.paa"};
	};

	class M113Ambul_UN_EP1: M113Ambul_Base {
		hiddenselectionstextures[] = {"\ca\Tracked_E\M113\Data\m113a3_01_UN_co.paa", "\x\acex\addons\t_veh_m113\m113a3_02_co.paa"};
	};
	
	class M113Ambul_TK_EP1: M113Ambul_Base {
		hiddenselectionstextures[] = {"\ca\Tracked_E\M113\Data\m113a3_01_TK_co.paa", "\ca\Tracked_E\M113\Data\m113a3_02_co.paa"};
	};
	
	class M113_UN_EP1: M113_Base {
		class Turrets;
	};
	
	class ACE_M113A3: M113_UN_EP1 {};
	
	class ACE_M113A3_Ambul: M113Ambul_Base {};
	
	class ACE_Vulcan: M113_UN_EP1 {
		drivercompartments = 0;
		class Turrets: Turrets {
			class MainTurret;
		};
		driverAction = TU_M113_DriverOut;
		driverInAction = "M113_Driver_EP1";
		model = "\retex_vehicles\m113\M163_Vulcan.p3d";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenselectionstextures[] = {"\retex_vehicles\m113\data\m163_vulcan_01_co.paa", "\retex_vehicles\m113\data\m163_vulcan_02_co.paa"};
		class Damage {
			tex[] = {};
			mat[] = {"retex_vehicles\m113\data\detailmapy\m163_01_metal.rvmat", "retex_vehicles\m113\data\detailmapy\m163_01_metal_damage.rvmat", "retex_vehicles\m113\data\detailmapy\m163_01_metal_destruct.rvmat", "retex_vehicles\m113\data\detailmapy\m163_02_metal.rvmat", "retex_vehicles\m113\data\detailmapy\m163_02_metal_damage.rvmat", "retex_vehicles\m113\data\detailmapy\m163_02_metal_destruct.rvmat", "Ca\Tracked_E\M113\data\m113_track.rvmat", "Ca\Tracked_E\M113\data\m113_track.rvmat", "Ca\Tracked_E\M113\data\m113_track_destruct.rvmat", "Ca\Tracked_E\M113\data\cargo.rvmat", "Ca\Tracked_E\M113\data\cargo.rvmat", "Ca\Tracked_E\M113\data\cargo_destruct.rvmat", "Ca\Tracked_E\M113\data\walls.rvmat", "Ca\Tracked_E\M113\data\walls.rvmat", "retex_vehicles\m113\data\walls_destruct.rvmat", "Ca\Ca_E\data\default.rvmat", "Ca\Ca_E\data\default.rvmat", "Ca\Ca_E\data\default_destruct.rvmat"};
		};
		class AnimationSources {
			class Cannon {
				source = "revolving"; //"reload";
				weapon = M168;
			};
		};
	};
	
	class TU_M113A3_D: ACE_M113A3 {
		hiddenselectionstextures[] = {"\retex_vehicles\m113\data\m113a3_01_co_D.paa"};
		vehicleclass = "ArmouredD";
	};
	
	class TU_M113A3_Ambul_D: ACE_M113A3_Ambul {
		hiddenselectionstextures[] = {"\retex_vehicles\m113\data\m113a3_01_co_D.paa", "\retex_vehicles\m113\data\m113a3_02_co_D.paa"};
		vehicleclass = "ArmouredD";
	};
	
	class TU_Vulcan_D: ACE_Vulcan {
		driverAction = TU_M113_DriverOut;
		driverInAction = "M113_Driver_EP1";
		vehicleclass = "ArmouredD";
		model = "\retex_vehicles\m113\M163_Vulcan.p3d";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenselectionstextures[] = {"\retex_vehicles\m113\data\m163_vulcan_desert_01_co.paa", "\retex_vehicles\m113\data\m163_vulcan_desert_02_co.paa"};
		class Damage {
			tex[] = {};
			mat[] = {"retex_vehicles\m113\data\detailmapy\m163_01_metal.rvmat", "retex_vehicles\m113\data\detailmapy\m163_01_metal_damage.rvmat", "retex_vehicles\m113\data\detailmapy\m163_01_metal_destruct.rvmat", "retex_vehicles\m113\data\detailmapy\m163_02_metal.rvmat", "retex_vehicles\m113\data\detailmapy\m163_02_metal_damage.rvmat", "retex_vehicles\m113\data\detailmapy\m163_02_metal_destruct.rvmat", "Ca\Tracked_E\M113\data\m113_track.rvmat", "Ca\Tracked_E\M113\data\m113_track.rvmat", "Ca\Tracked_E\M113\data\m113_track_destruct.rvmat", "Ca\Tracked_E\M113\data\cargo.rvmat", "Ca\Tracked_E\M113\data\cargo.rvmat", "Ca\Tracked_E\M113\data\cargo_destruct.rvmat", "Ca\Tracked_E\M113\data\walls.rvmat", "Ca\Tracked_E\M113\data\walls.rvmat", "retex_vehicles\m113\data\walls_destruct.rvmat", "Ca\Ca_E\data\default.rvmat", "Ca\Ca_E\data\default.rvmat", "Ca\Ca_E\data\default_destruct.rvmat"};
		};
		class AnimationSources {
			class Cannon {
				source = "revolving"; //"reload";
				weapon = M168;
			};
		};
	};
	
	class TU_Vulcan_Machbet: ACE_Vulcan {
		driverAction = TU_M113_DriverOut;
		driverInAction = "M113_Driver_EP1";
		displayname = "M163 Machbet";
		model = "\retex_vehicles\m113\M163_Machbet.p3d";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenselectionstextures[] = {"\retex_vehicles\m113\data\m163_vulcan_01_co.paa", "\retex_vehicles\m113\data\m163_vulcan_02_co.paa"};
		vehicleclass = "ArmouredW";
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				magazines[] = {"2100Rnd_20mm_M168", "ACE_1Rnd_Stinger", "ACE_1Rnd_Stinger", "ACE_1Rnd_Stinger", "ACE_1Rnd_Stinger"};
				weapons[] = {"M168", "StingerLaucher"};
			};
		};
		class Damage {
			tex[] = {};
			mat[] = {"retex_vehicles\m113\data\detailmapy\m163_01_metal.rvmat", "retex_vehicles\m113\data\detailmapy\m163_01_metal_damage.rvmat", "retex_vehicles\m113\data\detailmapy\m163_01_metal_destruct.rvmat", "retex_vehicles\m113\data\detailmapy\m163_02_metal.rvmat", "retex_vehicles\m113\data\detailmapy\m163_02_metal_damage.rvmat", "retex_vehicles\m113\data\detailmapy\m163_02_metal_destruct.rvmat", "Ca\Tracked_E\M113\data\m113_track.rvmat", "Ca\Tracked_E\M113\data\m113_track.rvmat", "Ca\Tracked_E\M113\data\m113_track_destruct.rvmat", "Ca\Tracked_E\M113\data\cargo.rvmat", "Ca\Tracked_E\M113\data\cargo.rvmat", "Ca\Tracked_E\M113\data\cargo_destruct.rvmat", "Ca\Tracked_E\M113\data\walls.rvmat", "Ca\Tracked_E\M113\data\walls.rvmat", "retex_vehicles\m113\data\walls_destruct.rvmat", "Ca\Ca_E\data\default.rvmat", "Ca\Ca_E\data\default.rvmat", "Ca\Ca_E\data\default_destruct.rvmat"};
		};
		class AnimationSources {
			class Cannon {
				source = "revolving"; //"reload";
				weapon = M168;
			};
		};
	};
	
	class TU_Vulcan_Machbet_D: TU_Vulcan_Machbet {
		hiddenselectionstextures[] = {"\retex_vehicles\m113\data\m163_vulcan_desert_01_co.paa", "\retex_vehicles\m113\data\m163_vulcan_desert_02_co.paa"};
		vehicleclass = "ArmouredD";
	};
	
	class LAV25;
	
	class LAV25_D: LAV25 {
		vehicleClass = "ArmouredD";
		crew = "ACE_USMC_Soldier_Crew_D";
		typicalCargo[] = {"ACE_USMC_Soldier_Crew_D","ACE_USMC_Soldier_Crew_D","ACE_USMC_Soldier_Crew_D"};
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"retex_vehicles\lav\lavbody_d_co.paa","retex_vehicles\lav\lavbody2_d_co.paa"};
	};
	
	class LAV25_HQ;
	
	class LAV25_HQ_D: LAV25_HQ {
		vehicleClass = "ArmouredD";
		crew = "ACE_USMC_Soldier_Crew_D";
		typicalCargo[] = {"ACE_USMC_Soldier_Crew_D","ACE_USMC_Soldier_Crew_D","ACE_USMC_Soldier_Crew_D"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"retex_vehicles\lav\lavbody_d_co.paa","retex_vehicles\lav\lavbody2_d_co.paa","retex_vehicles\lav\lav_hq_d_co.paa"};
	};
	
	class AAV;
	
	class AAV_D: AAV {
		vehicleClass = "ArmouredD";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"retex_vehicles\aav\aav_ext_d_co.paa","retex_vehicles\aav\aav_ext2_d_co.paa"};
		crew = "ACE_USMC_Soldier_Crew_D";
		typicalCargo[] = {"ACE_USMC_Soldier_Crew_D","ACE_USMC_Soldier_Crew_D","ACE_USMC_Soldier_Crew_D"};
	};
	
	class ACE_Stryker_MGS;
	
	class ACE_Stryker_MGS_Slat;
	
	class TU_Stryker_MGS_D : ACE_Stryker_MGS {
		vehicleClass = "ArmouredD";
		displayName = "M1128 Stryker MGS";
		hiddenSelections[] = {SELECTION_SLAT, "camo1", "camo2", "camo3", "camo5", "camo9"};
		HiddenSelectionsTextures[] = {"", "ca\wheeled_e\stryker\data\stryker_body1_des_co.paa", "ca\wheeled_e\stryker\data\stryker_body2_des_co.paa", "ca\wheeled_e\stryker\data\stryker_body1_des_co.paa", "\retex_vehicles\des.paa", "ca\wheeled_e\stryker\data\stryker_alfa_des_ca.paa"};
	};
	
	class TU_Stryker_MGS_SLAT_D : ACE_Stryker_MGS_Slat {
		vehicleClass = "ArmouredD";
		displayName = "M1128 Stryker MGS (SLAT)";
		hiddenSelections[] = {SELECTION_SLAT, "camo1", "camo2", "camo3", "camo5", "camo9"};
		HiddenSelectionsTextures[] = {"ca\wheeled_e\stryker\data\slat_armor_des_ca.paa", "ca\wheeled_e\stryker\data\stryker_body1_des_co.paa", "ca\wheeled_e\stryker\data\stryker_body2_des_co.paa", "ca\wheeled_e\stryker\data\stryker_body1_des_co.paa", "\retex_vehicles\des.paa", "ca\wheeled_e\stryker\data\stryker_alfa_des_ca.paa"};
	};
	
	class HMMWV;
	
	class TU_HMMWV: HMMWV {
		displayname = "M1025 HMMWV (ExA)";
		model = "\retex_vehicles\hmmwv\HMMWV";
		hiddenselections[] = {"Camo1"};
		hiddenselectionstextures[] = {"\retex_vehicles\hmmwv\hmmwv_body_co.paa"};
		vehicleclass = "CarW";
	};
	
	class TU_HMMWV_D: HMMWV {
		displayname = "M1025 HMMWV (ExA)";
		model = "\retex_vehicles\hmmwv\HMMWV_D";
		hiddenselections[] = {"Camo1"};
		hiddenselectionstextures[] = {"\retex_vehicles\hmmwv\hmmwv_body_co_des.paa"};
		vehicleclass = "CarD";
	};
	
	class HMMWV_Ambulance;
	
	class TU_HMMWV_Ambulance: HMMWV_Ambulance {
		displayname = "M997 HMMWV MEDEVAC (ExA)";
		model = "\retex_vehicles\hmmwv\M997A2_Ambulance";
		hiddenselections[] = {"Camo1", "Camo2"};
		hiddenselectionstextures[] = {"\retex_vehicles\hmmwv\hmmwv_body_co.paa", "\ca\wheeled\hmmwv\data\hmmwv_parts_1_ca.paa"};
		vehicleclass = "CarW";
	};
	/*
	class UralOpen_Base;
	
	class ACE_UralOpen_RU_D: UralOpen_Base {
		displayName = $STR_TU_URALOPEN_MOR;
	};
	
	class Ural_Base;
	
	class ACE_Ural_RU_D: Ural_Base {
		displayName = $STR_TU_URAL_MOR;
	};
	
	class ACE_Ural_RU;
	
	class TU_Ural_RU_D: ACE_Ural_RU {
		crew = "ACE_Ru_Soldier_D";
		hiddenselectionstextures[] = {"\retex_vehicles\ural\ural_kabina_co.paa", "\retex_vehicles\ural\ural_plachta_co.paa"};
		typicalcargo[] = {"ACE_Ru_Soldier_D", "ACE_Ru_Soldier_D"};
		vehicleclass = "CarD";
	};
	
	class ACE_UralOpen_RU;
	
	class TU_UralOpen_RU_D: ACE_UralOpen_RU {
		crew = "ACE_Ru_Soldier_D";
		hiddenselectionstextures[] = {"\retex_vehicles\ural\ural_kabina_co.paa", "\retex_vehicles\ural\ural_open_co.paa"};
		typicalcargo[] = {"ACE_Ru_Soldier_D", "ACE_Ru_Soldier_D"};
		vehicleclass = "CarD";
	};
	
	class ACE_UralReammo_RU;
	
	class TU_UralReammo_RU_D: ACE_UralReammo_RU {
		crew = "ACE_Ru_Soldier_D";
		hiddenselectionstextures[] = {"\retex_vehicles\ural\ural_kabina_co.paa", "\retex_vehicles\ural\ural_ammo_co.paa"};
		typicalcargo[] = {"ACE_Ru_Soldier_D", "ACE_Ru_Soldier_D"};
		vehicleclass = "CarD";
	};
	
	class ACE_UralRefuel_RU;
	
	class TU_UralRefuel_RU_D: ACE_UralRefuel_RU {
		crew = "ACE_Ru_Soldier_D";
		hiddenselectionstextures[] = {"\retex_vehicles\ural\ural_kabina_co.paa", "\retex_vehicles\ural\ural_open_co.paa", "\retex_vehicles\ural\ural_fuel_co.paa"};
		typicalcargo[] = {"ACE_Ru_Soldier_D", "ACE_Ru_Soldier_D"};
		vehicleclass = "CarD";
	};
	
	class ACE_UralRepair_RU;
	
	class TU_UralRepair_RU_D: ACE_UralRepair_RU {
		crew = "ACE_Ru_Soldier_D";
		hiddenselectionstextures[] = {"\retex_vehicles\ural\ural_kabina_co.paa", "\retex_vehicles\ural\ural_repair_co.paa"};
		typicalcargo[] = {"ACE_Ru_Soldier_D", "ACE_Ru_Soldier_D"};
		vehicleclass = "CarD";
	};
	
	class GRAD_RU;
	
	class TU_GRAD_RU_D: GRAD_RU {
		crew = "ACE_Ru_Soldier_D";
		hiddenselectionstextures[] = {"\retex_vehicles\ural\ural_kabina_co.paa", "\retex_vehicles\ural\ural_bm21_co.paa"};
		typicalcargo[] = {"ACE_Ru_Soldier_D", "ACE_Ru_Soldier_D"};
		vehicleclass = "CarD";
	};
	
	class ACE_ZSU_RU;
	
	class TU_ZSU_RU_D: ACE_ZSU_RU {
		crew = "ACE_RU_Soldier_Crew_D";
		hiddenselectionstextures[] = {"\retex_vehicles\zsu\zsu_01_co.paa", "\retex_vehicles\zsu\zsu_02_co.paa", "\retex_vehicles\zsu\zsu_03_co.paa"};
		typicalcargo[] = {"ACE_RU_Soldier_Crew_D", "ACE_RU_Soldier_Crew_D", "ACE_RU_Soldier_Crew_D"};
	};
	
	class UAZ_Unarmed_TK_EP1;
	
	class ACE_UAZ_RU_D: UAZ_Unarmed_TK_EP1 {
		displayName = $STR_TU_UAZ_MOR;
		vehicleclass = "CarD";
	};
	
	class TU_UAZ_RU_D: UAZ_Unarmed_TK_EP1 {
		accuracy = 0.5;
		crew = "ACE_Ru_Soldier_D";
		faction = "RU";
		hiddenselectionstextures[] = {"\retex_vehicles\uaz\uaz_main_co.paa", ""};
		scope = 2;
		side = 0;
		typicalcargo[] = {"ACE_Ru_Soldier_D", "ACE_Ru_Soldier_D"};
		vehicleclass = "CarD";
	};
	
	class BRDM2_Base;
	
	class ACE_BRDM2_RU_D: BRDM2_Base {
		displayName = $STR_TU_BRDM2_MOR;
		vehicleclass = "ArmouredD";
	};
	
	class TU_BRDM2_RU_D: BRDM2_Base {
		accuracy = 0.5;
		crew = "ACE_RU_Soldier_Crew_D";
		faction = "RU";
		hiddenselectionstextures[] = {"\retex_vehicles\brdm\brdm2_co.paa", "\x\acex_ru\addons\t_veh_naval\brdm2_02_d_ca.paa"};
		scope = 2;
		side = 0;
		typicalcargo[] = {"ACE_RU_Soldier_Crew_D", "ACE_Ru_Soldier_D", "ACE_Ru_Soldier_D", "ACE_Ru_Soldier_D"};
		vehicleclass = "ArmouredD";
	};
	*/
	
	class UAZ_Unarmed_Base;
	
	class tu_uaz : UAZ_Unarmed_Base {		
		scope = public;
	};

	class tu_uaz_l : tu_uaz {
		displayName = $STR_TU_UAZ_D;
	};
	
	class BMP2_Base: Tracked_APC {
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				class Turrets : Turrets {};
			};
		};
	};
	
	class ACE_BMP2_RU: BMP2_Base {
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				class Turrets : Turrets {
					class CommanderOptics;
				};
			};
		};
	};
	/*
	class TU_BMP2_RU_D: ACE_BMP2_RU {
		crew = "ACE_Ru_Soldier_D";
		typicalcargo[] = {"ACE_RU_Soldier_Crew_D", "ACE_RU_Soldier_Crew_D", "ACE_RU_Soldier_Crew_D", "ACE_Ru_Soldier_D"};
		hiddenselectionstextures[] = {"\retex_vehicles\bmp2\bmp2_01_co.paa", "\retex_vehicles\bmp2\bmp2_02_co.paa"};
		vehicleclass = ArmouredD;
	};
	*/
	class TU_BMP2M: ACE_BMP2_RU
	{
		ace_tankfcs_digitscolor[] = {1,1,1,1};
		ace_sys_reticles_gunneroptics = 0;
		ace_tankfcs_digitsstyle = 0;
		ace_tankfcs_rdystyle = 0;		
		ace_tankfcs_enabled = 1;
		ace_tankfcs_lrfaccuracy = 20;
		ace_tankfcs_lrfcooldowntime = 3;
		ace_tankfcs_maxlead = 2;
		ace_tankfcs_maxlrfrange = 5200;
		ace_tankfcs_maxranges[] = {"ACE_180Rnd_30mmAP_2A42", 2500, "ACE_120Rnd_30mmHE_2A42", 2500, "250Rnd_762x54_PKT_T90", 1600, "29Rnd_30mm_AGS30_fsc", 1700};
		ace_tankfcs_minlrfrange = 200;
		displayName = $STR_TU_BMP2M;
		ace_sys_turret_indicator_enable = 0;
		model = "\vilas_st\bmp\vil_bmp2m";
		hiddenselections[] = {"camo02", "camo01"};
		hiddenselectionstextures[] = {"\vilas_st\bmp\bmp2m_co_ru.paa", "\x\acex_ru\addons\t_veh_bmp2\bmp2_01_ru_co.paa"};
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				body = "OtocVez";
				gun = "OtocHlaven";
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				animationSourceHatch = "hatchGunner";
				maxverticalrotspeed = 0.121;
				maxhorizontalrotspeed = 0.71;
				memoryPointMissile[] = {"spice rakety", "spice rakety2"};
				memoryPointMissileDir[] = {"konec rakety", "konec rakety2"};				
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				turretInfoType = "RscWeaponZeroing";
				gunnerOpticsColor[] = {1,1,1,1};
				weapons[] = {"ACE_2A42", "PKT_veh", "AP_AGS30_fsc", "AT5LauncherSingle", "ACE_SACLOS_Guidance"};
				magazines[] = {"250Rnd_30mmAP_2A42", "29Rnd_30mm_AGS30_fsc", "29Rnd_30mm_AGS30_fsc", "29Rnd_30mm_AGS30_fsc", "29Rnd_30mm_AGS30_fsc", "29Rnd_30mm_AGS30_fsc", "250Rnd_30mmHE_2A42", "2000Rnd_762x54_PKT", "ACE_AT5B", "ACE_AT5B", "ACE_AT5B", "ACE_AT5B"};
				gunneropticsmodel = "ap_bmp_fix\optika_Vesna-K_gun";
				class OpticsIn
				{
					class Wide
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
							gunneropticsmodel = "ap_bmp_fix\optika_Vesna-K_gun";
							thermalMode[] = {0, 1};
							visionMode[] = {"Normal", "Ti", "NVG"};
							gunnerOpticsEffect[] = {};
						};
				};
				class Turrets : Turrets {
					class CommanderOptics : CommanderOptics {
						body = "OtocVez_2";
						gun = "OtocObserveroko";
						animationSourceBody = "Turret_2";
						animationSourceGun = "OtocObserveroko";
						memoryPointGunnerOptics = "Commanderview";
						forceHideGunner = 0;
					};
				};
			};
		};
		class Damage {
			tex[] = {};
			mat[] = {"vilas_st\bmp\bmp2m.rvmat", "vilas_st\bmp\bmp2m.rvmat", "vilas_st\bmp\bmp2m_de.rvmat", "vilas_st\common\bmp2_01.rvmat", "vilas_st\common\bmp2_01.rvmat", "ca\tracked\data\detailmapy\bmp2_01_destruct.rvmat", "vilas_st\common\bmp2_02.rvmat", "vilas_st\common\bmp2_02.rvmat", "ca\tracked\data\detailmapy\bmp2_01_destruct.rvmat"};
		};
	};
	/*
	class TU_BMP2M_RU_D: TU_BMP2M {
		crew = "ACE_Ru_Soldier_D";
		typicalcargo[] = {"ACE_RU_Soldier_Crew_D", "ACE_RU_Soldier_Crew_D", "ACE_RU_Soldier_Crew_D", "ACE_Ru_Soldier_D"};
		hiddenselectionstextures[] = {"\vilas_st\bmp\bmp2m_co.paa", "\retex_vehicles\bmp2\bmp2_01_co.paa"};
		vehicleclass = ArmouredD;
	};
	*/
	class TU_BMP2M_TK: TU_BMP2M {
		vehicleClass = "Armored";
		faction = "BIS_TK";
		crew = "TK_Soldier_EP1";
		typicalCargo[] = {"TK_Soldier_EP1","TK_Soldier_AAT_EP1","TK_Soldier_MG_EP1","TK_Soldier_HAT_EP1","TK_Soldier_AR_EP1","TK_Commander_EP1","TK_Soldier_Engineer_EP1","TK_Soldier_GL_EP1","TK_Soldier_AMG_EP1"};
		hiddenselections[] = {"camo02", "camo01"};
		hiddenselectionstextures[] = {"\vilas_st\bmp\bmp2m_co.paa", "ca\Tracked_E\BMP\data\BMP2_01_TKA_CO"};
	};
	
	class BMP3: Tracked_APC {
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				class Turrets : Turrets {
					class CommanderOptics;	// External class reference
				};
			};
			class LeftTurret;
			class RightTurret;
		};
	};
	
	class TU_BMP3_BAKHCHA: BMP3 {
		ace_tankfcs_digitsstyle = 0;
		ace_tankfcs_rdystyle = 0;
		ace_tankfcs_digitscolor[] = {1,1,1,1};
		
		displayName = $STR_TU_BMP3_BAKHCHA;
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				turretInfoType = "RscWeaponZeroing";
				magazines[] = {"4Rnd_AT10_BMP3", "34Rnd_100mm_HE_2A70", "250Rnd_30mmAP_2A72", "250Rnd_30mmHE_2A72", "2000Rnd_762x54_PKT"};
				maxhorizontalrotspeed = 1.4;
				maxverticalrotspeed = 1.4;
				gunneropticsmodel = "ap_bmp_fix\optika_Vesna-K_gun";
				gunnerOpticsColor[] = {1,1,1,1};
				class OpticsIn {
					class Wide
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
							gunneropticsmodel = "ap_bmp_fix\optika_Vesna-K_gun";
							thermalMode[] = {0, 1};
							visionMode[] = {"Normal", "Ti", "NVG"};
							gunnerOpticsEffect[] = {};
						};
				};
				class Turrets: Turrets {
					class CommanderOptics: CommanderOptics {
						ace_sys_nvg_nvrange = 720;
						commanderforceoptics = 0;
						forcehidecommander = 0;
						gunneraction = "BMP3_Commander_OUT";
						gunnerforceoptics = 1;
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
					};
				};
			};
			class LeftTurret : LeftTurret
				{
				};
				class RightTurret : RightTurret
				{
				};
		};
	};
	
	class TU_BRM3: BMP3 {
		displayName = $STR_TU_BRM3;
		ace_sys_turret_indicator_enable = 0;
		ace_tankfcs_maxranges[] = {"250Rnd_30mmAP_2A72", 4000, "250Rnd_30mmHE_2A72", 4000, "250Rnd_762x54_PKT_T90", 1600};
		radartype = 2;
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				gunneropticsmodel = "\ca\weapons\2Dscope_BMP3gun";
				magazines[] = {"250Rnd_30mmAP_2A72", "250Rnd_30mmHE_2A72", "2000Rnd_762x54_PKT"};
				weapons[] = {"ACE_2A72", "PKT"};
				class OpticsIn {
					class Wide {
						gunneropticsmodel = "\ca\weapons\2Dscope_BMP3gun";
						initanglex = 0;
						initangley = 0;
						initfov = "0.33333/ 2.6";
						maxanglex = 30;
						maxangley = 100;
						maxfov = "0.33333/ 2.6";
						minanglex = -30;
						minangley = -100;
						minfov = "0.33333/ 2.6";
						visionMode[] = {"Normal","Ti"};
						thermalMode[] = {0,1};
					};
					class Medium: Wide {
						initfov = "0.33333/ 5.5";
						maxfov = "0.33333/ 5.5";
						minfov = "0.33333/ 5.5";
					};
					class Narrow: Wide {
						initfov = "0.33333/ 12";
						maxfov = "0.33333/ 12";
						minfov = "0.33333/ 12";
					};
					class VeryNarrow: Wide {
						initfov = "0.33333/ 5.5";
						maxfov = "0.33333/ 5.5";
						minfov = "0.33333/ 5.5";
						visionmode[] = {"NVG"};
					};
				};
				class Turrets: Turrets {
					class CommanderOptics: CommanderOptics {
						ace_sys_nvg_nvrange = 720;
						commanderforceoptics = 0;
						forcehidecommander = 0;
						gunneraction = "BMP3_Commander_OUT";
						gunnerforceoptics = 1;
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
								gunneropticseffect[] = {};
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
								visionmode[] = {"Normal", "Ti"};
								thermalMode[] = {0,1};
							};
							class CMedium: CWide {
								gunneropticsmodel = "\ca\weapons\2Dscope_com3";
								initfov = "0.33333/ 5.5";
								maxfov = "0.33333/ 5.5";
								minfov = "0.33333/ 5.5";
							};
							class CNarrow: CWide {
								initfov = "0.33333/ 12";
								maxfov = "0.33333/ 12";
								minfov = "0.33333/ 12";
							};
							class CVeryNarrow: CWide {
								initfov = "0.33333/ 5.5";
								maxfov = "0.33333/ 5.5";
								minfov = "0.33333/ 5.5";
								visionmode[] = {"NVG"};
							};
						};
					};
				};
			};
			class LeftTurret: LeftTurret {};
			class RightTurret : RightTurret {};
		};
	};
	
	class BTR90;
	
	class BTR90_TK: BTR90 {
		vehicleClass = "Armored";
		faction = "BIS_TK";
		crew = "TK_Soldier_EP1";
		typicalCargo[] = {"TK_Soldier_EP1","TK_Soldier_AAT_EP1","TK_Soldier_MG_EP1","TK_Soldier_HAT_EP1","TK_Soldier_AR_EP1","TK_Commander_EP1","TK_Soldier_Engineer_EP1","TK_Soldier_GL_EP1","TK_Soldier_AMG_EP1"};
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"retex_vehicles\btr90\body_tk_co.paa","retex_vehicles\btr90\body2_tk_co.paa"};
	};
	
	class BTR90_HQ;

	class BTR90_HQ_TK: BTR90_HQ {
		vehicleClass = "Armored";
		faction = "BIS_TK";
		crew = "TK_Soldier_EP1";
		typicalCargo[] = {"TK_Soldier_EP1","TK_Soldier_AAT_EP1","TK_Soldier_MG_EP1","TK_Soldier_HAT_EP1","TK_Soldier_AR_EP1","TK_Commander_EP1","TK_Soldier_Engineer_EP1","TK_Soldier_GL_EP1","TK_Soldier_AMG_EP1"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"retex_vehicles\btr90\body_tk_co.paa","retex_vehicles\btr90\body2_tk_co.paa","retex_vehicles\btr90\btr_hq_tk_co.paa"};
	};
	
	class GAZ_Vodnik_HMG;
	
	class GAZ_Vodnik_HMG_TK: GAZ_Vodnik_HMG	{
		vehicleClass = "Armored";
		faction = "BIS_TK";
		crew = "TK_Soldier_EP1";
		typicalCargo[] = {"TK_Soldier_EP1","TK_Soldier_AAT_EP1","TK_Soldier_MG_EP1","TK_Soldier_HAT_EP1","TK_Soldier_AR_EP1","TK_Commander_EP1","TK_Soldier_Engineer_EP1","TK_Soldier_GL_EP1","TK_Soldier_AMG_EP1"};
		hiddenselections[] = {"Camo1", "Camo2", "Camo3"};
		hiddenselectionstextures[] = {"\retex_vehicles\vodnik\gaz39371_vodnik_basis_01_tk_co.paa", "\retex_vehicles\vodnik\gaz39371_vodnik_cabin_tk_co.paa", "\retex_vehicles\vodnik\gaz39371_vodnik_mod_out_tk_co.paa"};
		model = "\retex_vehicles\vodnik\GAZ39371_Vodnik_HMG_TK.p3d";
	};
	
	class GAZ_Vodnik;
	
	class GAZ_Vodnik_TK: GAZ_Vodnik	{
		vehicleClass = "Armored";
		faction = "BIS_TK";
		crew = "TK_Soldier_EP1";
		typicalCargo[] = {"TK_Soldier_EP1","TK_Soldier_AAT_EP1","TK_Soldier_MG_EP1","TK_Soldier_HAT_EP1","TK_Soldier_AR_EP1","TK_Commander_EP1","TK_Soldier_Engineer_EP1","TK_Soldier_GL_EP1","TK_Soldier_AMG_EP1"};
		hiddenselections[] = {"Camo1", "Camo2", "Camo3"};
		hiddenselectionstextures[] = {"\retex_vehicles\vodnik\gaz39371_vodnik_basis_01_tk_co.paa", "\retex_vehicles\vodnik\gaz39371_vodnik_cabin_tk_co.paa", "\retex_vehicles\vodnik\gaz39371_vodnik_mod_out_tk_co.paa"};
		model = "\retex_vehicles\vodnik\GAZ39371_Vodnik_TK.p3d";	
	};
	
	class GAZ_Vodnik_MedEvac;
	
	class GAZ_Vodnik_MedEvac_TK: GAZ_Vodnik_MedEvac {
		vehicleClass = "Armored";
		faction = "BIS_TK";
		crew = "TK_Soldier_EP1";
		typicalCargo[] = {"TK_Soldier_EP1","TK_Soldier_AAT_EP1","TK_Soldier_MG_EP1","TK_Soldier_HAT_EP1","TK_Soldier_AR_EP1","TK_Commander_EP1","TK_Soldier_Engineer_EP1","TK_Soldier_GL_EP1","TK_Soldier_AMG_EP1"};
		hiddenselections[] = {"Camo1", "Camo2", "Camo3"};
		hiddenselectionstextures[] = {"\retex_vehicles\vodnik\gaz39371_vodnik_basis_01_tk_co.paa", "\retex_vehicles\vodnik\gaz39371_vodnik_cabin_tk_co.paa", "\retex_vehicles\vodnik\gaz39371_vodnik_mod_out_tk_co.paa"};
		model = "\retex_vehicles\vodnik\GAZ39371_Vodnik_MedEvac_TK.p3d";
	};
	
	class BMP3_TK: BMP3 {
		faction = "BIS_TK";
		vehicleClass = "Armored";
		crew = "TK_Soldier_Crew_EP1";
		typicalCargo[] = {"TK_Soldier_AAT_EP1","TK_Soldier_MG_EP1","TK_Soldier_AR_EP1","TK_Soldier_Engineer_EP1","TK_Soldier_GL_EP1","TK_Soldier_AMG_EP1","TK_Soldier_Medic_EP1","TK_Soldier_Officer_EP1","TK_Soldier_EP1","TK_Soldier_LAT_EP1","TK_Soldier_SL_EP1"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"retex_vehicles\bmp3\bmp3_body_des_co.paa","retex_vehicles\bmp3\bmp3_body2_des_co.paa","retex_vehicles\bmp3\bmp3_wheels_des_co.paa"};
	};
	
	class TU_BMP3_BAKHCHA_TK: TU_BMP3_BAKHCHA {
		faction = "BIS_TK";
		vehicleClass = "Armored";
		crew = "TK_Soldier_Crew_EP1";
		typicalCargo[] = {"TK_Soldier_AAT_EP1","TK_Soldier_MG_EP1","TK_Soldier_AR_EP1","TK_Soldier_Engineer_EP1","TK_Soldier_GL_EP1","TK_Soldier_AMG_EP1","TK_Soldier_Medic_EP1","TK_Soldier_Officer_EP1","TK_Soldier_EP1","TK_Soldier_LAT_EP1","TK_Soldier_SL_EP1"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"retex_vehicles\bmp3\bmp3_body_des_co.paa","retex_vehicles\bmp3\bmp3_body2_des_co.paa","retex_vehicles\bmp3\bmp3_wheels_des_co.paa"};
	};
	
	class RU_Soldier_Base;	// External class reference	
	
	class RU_Soldier : RU_Soldier_Base {
		model = "\retex_vehicles\Soldier2.p3d";
	};
	
	class TU_RU_Soldier2 : RU_Soldier_Base {
		model = "\retex_vehicles\Soldier2.p3d";
		displayname = $STR_RU_SOLD;
	};
	
	class ACE_RU_Soldier_Engineer: RU_Soldier {
		model = "\ca\characters2\Rus\Soldier";
	};
	
	class ACE_RU_Soldier_RPOM: RU_Soldier {
		model = "\ca\characters2\Rus\Soldier";
	};
	
	class RU_Soldier_AA: RU_Soldier_Base {
		model = "\retex_vehicles\Soldier2.p3d";
	};
	
	class RU_Soldier_AR : RU_Soldier_Base {
		model = "\retex_vehicles\Soldier2.p3d";
	};
	
	class RU_Soldier_AT : RU_Soldier_Base {
		model = "\retex_vehicles\Soldier2.p3d";
	};
	
	class RU_Soldier_GL: RU_Soldier_Base {
		model = "\ca\characters2\Rus\Soldier";
	};
	
	class RU_Soldier_HAT: RU_Soldier_Base {
		model = "\ca\characters2\Rus\Soldier";
	};
	
	class RU_Soldier_LAT: RU_Soldier_Base {
		model = "\retex_vehicles\Soldier2.p3d";
	};
	
	class RU_Soldier_Marksman: RU_Soldier_Base {
		model = "\ca\characters2\Rus\Soldier";
	};
	
	class RU_Soldier_Medic: RU_Soldier_Base {
		model = "\retex_vehicles\Soldier2.p3d";
	};
	
	class RU_Soldier_MG: RU_Soldier_Base {
		model = "\retex_vehicles\Soldier2.p3d";
	};
	
	class RU_Soldier_TL: RU_Soldier_Base {
		model = "\ca\characters2\Rus\Soldier";
	};
	
	class RU_Soldier2: RU_Soldier_Base {
		model = "\retex_vehicles\Soldier2.p3d";
	};
	
	class SMD_RACS_MP;
	
	class TU_CDF_SpecOps : SMD_RACS_MP {
		faction = "CDF";
		vehicleClass = "TU_CDF_SPN";
		glassesenabled = 0;
		TextPlural = $STR_DN_SpecialForces;
		TextSingular = $STR_DN_SpecialForce;
		nameSound = veh_SpecialForce;
		canDeactivateMines = "true";
		picture = "\Ca\characters\data\Ico\i_SF_CA.paa";
		icon = "\Ca\characters2\data\icon\i_special_CA.paa";
		displayName = $STR_TU_SPECOPS;
		model = "\SMD\smd_units\smd_vilas_cops\smd_vil_swat";
		hiddenSelections[] = {"Camo01"};
		hiddenSelectionsTextures[] = {"\retex_vehicles\data\shirt_co.paa"};
		magazines[] = {"30Rnd_545x39_AK", "30Rnd_545x39_AK", "30Rnd_545x39_AK", "30Rnd_545x39_AK", "30Rnd_545x39_AK", "30Rnd_545x39_AK", "HandGrenade_East", "HandGrenade_East"};
		weapons[] = {"ACE_AK105_Kobra", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnmagazines[] = {"30Rnd_545x39_AK", "30Rnd_545x39_AK", "30Rnd_545x39_AK", "30Rnd_545x39_AK", "HandGrenade_East"};
		respawnweapons[] = {"ACE_AK105_Kobra", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class TU_CDF_SpecOps_MED : TU_CDF_SpecOps {
		attendant = 1;
		namesound = "veh_Medic";
		textplural = "Medics";
		textsingular = "Medic";
		displayName = $STR_DN_MEDIC;
		magazines[] = {"30Rnd_545x39_AK", "30Rnd_545x39_AK", "30Rnd_545x39_AK", "30Rnd_545x39_AK", "30Rnd_545x39_AK", "30Rnd_545x39_AK", "HandGrenade_East", "HandGrenade_East"};
		weapons[] = {"ACE_AK105", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnmagazines[] = {"30Rnd_545x39_AK", "30Rnd_545x39_AK", "30Rnd_545x39_AK", "30Rnd_545x39_AK", "HandGrenade_East"};
		respawnweapons[] = {"ACE_AK105", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class TU_CDF_SpecOps_SL : TU_CDF_SpecOps {
		displayName = $STR_DN_MVD_SOLDIER_TL;
		magazines[] = {"30Rnd_545x39_AK", "30Rnd_545x39_AK", "30Rnd_545x39_AK", "30Rnd_545x39_AK", "30Rnd_545x39_AK", "30Rnd_545x39_AK", "HandGrenade_East", "HandGrenade_East"};
		weapons[] = {"ACE_AK105_1P29", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnmagazines[] = {"30Rnd_545x39_AK", "30Rnd_545x39_AK", "30Rnd_545x39_AK", "30Rnd_545x39_AK", "HandGrenade_East"};
		respawnweapons[] = {"ACE_AK105_1P29", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class TU_CDF_SpecOps_MG : TU_CDF_SpecOps {
		displayName = $STR_DN_MVD_SOLDIER_MG;
		magazines[] = {"75Rnd_545x39_RPK", "75Rnd_545x39_RPK", "75Rnd_545x39_RPK", "75Rnd_545x39_RPK", "75Rnd_545x39_RPK", "75Rnd_545x39_RPK", "HandGrenade_East", "HandGrenade_East"};
		weapons[] = {"ACE_RPK74M_1P29", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnmagazines[] = {"75Rnd_545x39_RPK", "75Rnd_545x39_RPK", "75Rnd_545x39_RPK", "75Rnd_545x39_RPK", "HandGrenade_East"};
		respawnweapons[] = {"ACE_RPK74M_1P29", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
};