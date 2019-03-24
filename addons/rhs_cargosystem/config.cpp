////////////////////////////////////////////////////////////////////
//DeRap: rhs_cargosystem\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Sun Mar 25 13:04:53 2018 : 'file' last modified on Mon May 02 18:22:48 2011
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class rhs_cargosystem
	{
		units[] = {"rhs_cargo_btr70","rhs_cargo_brdm2"};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {};
	};
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		rhs_anim_btr70_cargo_top_left_1 = "rhs_anim_btr70_cargo_top_left_1";
		rhs_anim_btr70_cargo_top_left_2 = "rhs_anim_btr70_cargo_top_left_2";
		rhs_anim_btr70_cargo_top_left_3 = "rhs_anim_btr70_cargo_top_left_3";
		rhs_anim_btr70_cargo_top_left_4 = "rhs_anim_btr70_cargo_top_left_4";
		rhs_anim_btr70_cargo_top_right_1 = "rhs_anim_btr70_cargo_top_right_1";
		rhs_anim_btr70_cargo_top_right_2 = "rhs_anim_btr70_cargo_top_right_2";
		rhs_anim_btr70_cargo_top_right_3 = "rhs_anim_btr70_cargo_top_right_3";
		rhs_anim_brdm2_cargo_top_left_1 = "rhs_anim_brdm2_cargo_top_left_1";
		rhs_anim_brdm2_cargo_top_right_1 = "rhs_anim_brdm2_cargo_top_right_1";
		rhs_anim_brdm2_cargo_top_left_2 = "rhs_anim_brdm2_cargo_top_left_2";
		rhs_anim_brdm2_cargo_top_right_2 = "rhs_anim_brdm2_cargo_top_right_2";
		rhs_anim_btr60_cargo_top_left_1 = "rhs_anim_btr60_cargo_top_left_1";
		rhs_anim_btr60_cargo_top_right_1 = "rhs_anim_btr60_cargo_top_right_1";
		rhs_anim_btr60_cargo_top_left_2 = "rhs_anim_btr60_cargo_top_left_2";
		rhs_anim_btr60_cargo_top_right_2 = "rhs_anim_btr60_cargo_top_right_2";
		rhs_anim_btr60_cargo_top_left_3 = "rhs_anim_btr60_cargo_top_left_3";
		rhs_anim_btr60_cargo_top_right_3 = "rhs_anim_btr60_cargo_top_right_3";
		rhs_anim_btr60_cargo_top_right_4 = "rhs_anim_btr60_cargo_top_right_4";
		rhs_anim_btr70p_cargo_top_right_1 = "rhs_anim_btr70p_cargo_top_right_1";
		rhs_anim_btr70p_cargo_top_right_2 = "rhs_anim_btr70p_cargo_top_right_2";
		rhs_anim_bmp2_cargo_top_left_1 = "rhs_anim_bmp2_cargo_top_left_1";
		rhs_anim_bmp2_cargo_top_left_2 = "rhs_anim_bmp2_cargo_top_left_2";
		rhs_anim_bmp2_cargo_top_left_3 = "rhs_anim_bmp2_cargo_top_left_3";
		rhs_anim_bmp2_cargo_top_right_1 = "rhs_anim_bmp2_cargo_top_right_1";
		rhs_anim_bmp2_cargo_top_right_2 = "rhs_anim_bmp2_cargo_top_right_2";
		rhs_anim_bmp2_cargo_top_right_3 = "rhs_anim_bmp2_cargo_top_right_3";
		rhs_anim_bmp2_cargo_top_right_4 = "rhs_anim_bmp2_cargo_top_right_4";
		rhs_anim_bmp2_cargo_top_right_5 = "rhs_anim_bmp2_cargo_top_right_5";
		rhs_anim_t72_cargo_top_left_1 = "rhs_anim_t72_cargo_top_left_1";
		rhs_anim_t72_cargo_top_right_1 = "rhs_anim_t72_cargo_top_right_1";
		rhs_anim_t55_cargo_top_left_1 = "rhs_anim_t55_cargo_top_left_1";
		rhs_anim_t55_cargo_top_right_1 = "rhs_anim_t55_cargo_top_right_1";
		rhs_anim_t55_cargo_top_left_2 = "rhs_anim_t55_cargo_top_left_2";
		rhs_anim_t55_cargo_top_right_2 = "rhs_anim_t55_cargo_top_right_2";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class AmovPercMstpSnonWnonDnon;
		class rhs_anim_btr70_cargo_top_left_1: AmovPercMstpSnonWnonDnon
		{
			file = "\rhs_cargosystem\anims\btr_70\cargo1.rtm";
			speed = -1e+010;
			looped = 1;
			boundingSphere = 1.5;
			interpolateFrom[] = {};
			interpolateTo[] = {};
			initAngleX = 15;
			minAngleX = -65;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
		};
		class rhs_anim_btr70_cargo_top_left_2: rhs_anim_btr70_cargo_top_left_1
		{
			file = "\rhs_cargosystem\anims\btr_70\cargo2.rtm";
		};
		class rhs_anim_btr70_cargo_top_left_3: rhs_anim_btr70_cargo_top_left_1
		{
			file = "\rhs_cargosystem\anims\btr_70\cargo3.rtm";
		};
		class rhs_anim_btr70_cargo_top_left_4: rhs_anim_btr70_cargo_top_left_1
		{
			file = "\rhs_cargosystem\anims\btr_70\cargo4.rtm";
		};
		class rhs_anim_btr70_cargo_top_right_1: rhs_anim_btr70_cargo_top_left_1
		{
			file = "\rhs_cargosystem\anims\btr_70\cargo6.rtm";
		};
		class rhs_anim_btr70_cargo_top_right_2: rhs_anim_btr70_cargo_top_left_1
		{
			file = "\rhs_cargosystem\anims\btr_70\cargo5.rtm";
		};
		class rhs_anim_btr70_cargo_top_right_3: rhs_anim_btr70_cargo_top_left_1
		{
			file = "\rhs_cargosystem\anims\btr_70\cargo7.rtm";
		};
		class rhs_anim_brdm2_cargo_top_left_1: rhs_anim_btr70_cargo_top_left_1
		{
			file = "\rhs_cargosystem\anims\brdm2\cargo1.rtm";
		};
		class rhs_anim_brdm2_cargo_top_right_1: rhs_anim_btr70_cargo_top_left_1
		{
			file = "\rhs_cargosystem\anims\brdm2\cargo2.rtm";
		};
		class rhs_anim_brdm2_cargo_top_left_2: rhs_anim_btr70_cargo_top_left_1
		{
			file = "\rhs_cargosystem\anims\brdm2\cargo3.rtm";
		};
		class rhs_anim_brdm2_cargo_top_right_2: rhs_anim_btr70_cargo_top_left_1
		{
			file = "\rhs_cargosystem\anims\brdm2\cargo4.rtm";
		};
		class rhs_anim_btr60_cargo_top_left_1: rhs_anim_btr70_cargo_top_left_1
		{
			file = "\rhs_cargosystem\anims\btr_60\cargo1.rtm";
		};
		class rhs_anim_btr60_cargo_top_left_2: rhs_anim_btr70_cargo_top_left_1
		{
			file = "\rhs_cargosystem\anims\btr_60\cargo3.rtm";
		};
		class rhs_anim_btr60_cargo_top_left_3: rhs_anim_btr70_cargo_top_left_1
		{
			file = "\rhs_cargosystem\anims\btr_60\cargo7.rtm";
		};
		class rhs_anim_btr60_cargo_top_right_1: rhs_anim_btr70_cargo_top_left_1
		{
			file = "\rhs_cargosystem\anims\btr_60\cargo6.rtm";
		};
		class rhs_anim_btr60_cargo_top_right_2: rhs_anim_btr70_cargo_top_left_1
		{
			file = "\rhs_cargosystem\anims\btr_60\cargo2.rtm";
		};
		class rhs_anim_btr60_cargo_top_right_3: rhs_anim_btr70_cargo_top_left_1
		{
			file = "\rhs_cargosystem\anims\btr_60\cargo5.rtm";
		};
		class rhs_anim_btr60_cargo_top_right_4: rhs_anim_btr70_cargo_top_left_1
		{
			file = "\rhs_cargosystem\anims\btr_60\cargo4.rtm";
		};
		class rhs_anim_btr70p_cargo_top_right_1: rhs_anim_btr70_cargo_top_left_1
		{
			file = "\rhs_cargosystem\anims\btr_70\cargop1.rtm";
		};
		class rhs_anim_btr70p_cargo_top_right_2: rhs_anim_btr70_cargo_top_left_1
		{
			file = "\rhs_cargosystem\anims\btr_70\cargop2.rtm";
		};
		class rhs_anim_bmp2_cargo_top_right_1: rhs_anim_btr70_cargo_top_left_1
		{
			file = "\rhs_cargosystem\anims\bmp2\cargo1.rtm";
		};
		class rhs_anim_bmp2_cargo_top_right_2: rhs_anim_btr70_cargo_top_left_1
		{
			file = "\rhs_cargosystem\anims\bmp2\cargo2.rtm";
		};
		class rhs_anim_bmp2_cargo_top_right_3: rhs_anim_btr70_cargo_top_left_1
		{
			file = "\rhs_cargosystem\anims\bmp2\cargo3.rtm";
		};
		class rhs_anim_bmp2_cargo_top_right_4: rhs_anim_btr70_cargo_top_left_1
		{
			file = "\rhs_cargosystem\anims\bmp2\cargo4.rtm";
		};
		class rhs_anim_bmp2_cargo_top_right_5: rhs_anim_btr70_cargo_top_left_1
		{
			file = "\rhs_cargosystem\anims\bmp2\cargo5.rtm";
		};
		class rhs_anim_bmp2_cargo_top_left_1: rhs_anim_btr70_cargo_top_left_1
		{
			file = "\rhs_cargosystem\anims\bmp2\cargo6.rtm";
		};
		class rhs_anim_bmp2_cargo_top_left_2: rhs_anim_btr70_cargo_top_left_1
		{
			file = "\rhs_cargosystem\anims\bmp2\cargo7.rtm";
		};
		class rhs_anim_bmp2_cargo_top_left_3: rhs_anim_btr70_cargo_top_left_1
		{
			file = "\rhs_cargosystem\anims\bmp2\cargo8.rtm";
		};
		class rhs_anim_t72_cargo_top_left_1: rhs_anim_btr70_cargo_top_left_1
		{
			file = "\rhs_cargosystem\anims\t72\cargo1.rtm";
		};
		class rhs_anim_t72_cargo_top_right_1: rhs_anim_btr70_cargo_top_left_1
		{
			file = "\rhs_cargosystem\anims\t72\cargo2.rtm";
		};
		class rhs_anim_t55_cargo_top_left_1: rhs_anim_btr70_cargo_top_left_1
		{
			file = "\rhs_cargosystem\anims\t55\cargo3.rtm";
		};
		class rhs_anim_t55_cargo_top_right_1: rhs_anim_btr70_cargo_top_left_1
		{
			file = "\rhs_cargosystem\anims\t55\cargo0.rtm";
		};
		class rhs_anim_t55_cargo_top_left_2: rhs_anim_btr70_cargo_top_left_1
		{
			file = "\rhs_cargosystem\anims\t55\cargo2.rtm";
		};
		class rhs_anim_t55_cargo_top_right_2: rhs_anim_btr70_cargo_top_left_1
		{
			file = "\rhs_cargosystem\anims\t55\cargo1.rtm";
		};
	};
};
class CfgVehicles
{
	class Logic;
	class RHS_CargoSystem_Enable: Logic
	{
		rhs_version = 0.6047;
		displayName = "$STR_rhs_cargosystem_modul";
		icon = "\rhs_cargosystem\img\rhs_cargosystem_icon.paa";
		picture = "\rhs_cargosystem\img\rhs_cargosystem_icon.paa";
		vehicleClass = "Modules";
		class Eventhandlers
		{
			init = "MoveOnCargo = compile preprocessFileLineNumbers '\rhs_cargosystem\scripts\bgr_MoveOnCargo.sqf'; rhs_enableCS = compile preprocessFileLineNumbers '\rhs_cargosystem\scripts\enableCS.sqf'; RHS_cargoSystem_geton_group = compile preprocessFileLineNumbers '\rhs_cargosystem\scripts\f_geton_group.sqf'; _ok = _this execVM '\rhs_cargosystem\scripts\cargoSystem_init.sqf';";
		};
		RHS_cargoSystem_wfList[] = {{"AP_M1117_base","not"},{"T90","not"},{"ACE_M88","not"},{"ACE_Vulcan","not"},{"p85_m88a1_base","not"},{"pzn_chaparel_base","not"},{"pzn_mtlbu_base","not"},{"pzn_mtlb_sa13_base","not"},{"AP_SPRUT_base","not"},{"pzn_mtlb_amb_base","rhs_cargo_mtlbR"},{"pzn_mtlb_apc_base","rhs_cargo_mtlb"},{"M113Ambul_Base","rhs_cargo_m113ambul"},{"m113_Base","rhs_cargo_m113"},{"TU_BTRRD","rhs_cargo_btrd"},{"TU_BTRD","rhs_cargo_btrd"},{"TU_BTRZD","rhs_cargo_btrd"},{"T72_Base","rhs_cargo_t72"},{"T55_Base","rhs_cargo_t55"},{"BMP2_Ambul_Base","rhs_cargo_bmp2ambul"},{"ACE_BMP2D_RU","rhs_cargo_bmp2aceD"},{"rhs_bmp_base","rhs_cargo_bmp2RHS"},{"rhs_bmd_base","rhs_cargo_bmd2"},{"BMP2_HQ_Base","not"},{"BMP2_Base","rhs_cargo_bmp2"},{"ACE_BTR70_Base","rhs_cargo_btr70"},{"AP_BTR80","rhs_cargo_btr80"},{"AP_BTR82A","rhs_cargo_btr82a"},{"BTR60_TK_EP1","rhs_cargo_btr60"},{"BRDM2_ATGM_Base","not"},{"BRDM2_HQ_Base","not"},{"BRDM2_Base","rhs_cargo_brdm2"}};
	};
	class StaticCannon;
	class rhs_cargo_base: StaticCannon
	{
		hasGunner = 0;
		hideUnitInfo = 1;
		scope = 0;
		cargoAction[] = {};
		typicalCargo[] = {};
		transportSoldier = 0;
		gunnerHasFlares = 0;
		camouflage = 1;
		audible = 0.05;
		memoryPointsGetInCargo = "getincargo";
		memoryPointsGetInCargoDir = "getincargodir";
		class Turrets{};
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 450;
		model = "";
		ARTY_IsArtyVehicle = 0;
		unloadInCombat = 1;
		RHS_attachToPos[] = {0,0,0};
		RHS_animPos[] = {};
		RHS_animDeg[] = {};
		RHS_blokTurret = 0;
	};
	class rhs_cargo_m113: rhs_cargo_base
	{
		scope = 1;
		faction="USMC";
		nameSound = "veh_apc";
		displayName = "$STR_rhs_cargosystem_M113_Mount";
		side = 1;
		picture = "\ca\tracked_e\Data\ui\Picture_m113_CA.paa";
		Icon = "\Ca\tracked_e\Data\ui\Icon_m113_CA.paa";
		mapSize = 7.5;
		cargoAction[] = {"rhs_anim_btr70_cargo_top_right_2","rhs_anim_btr70_cargo_top_right_1","rhs_anim_btr70_cargo_top_left_3","rhs_anim_btr70_cargo_top_left_4","rhs_anim_btr70_cargo_top_left_4","rhs_anim_btr70_cargo_top_right_3","rhs_anim_btr70_cargo_top_left_1"};
		typicalCargo[] = {"RU_Soldier","RU_Soldier","RU_Soldier","RU_Soldier","RU_Soldier","RU_Soldier","RU_Soldier"};
		transportSoldier = 7;
		model = "\rhs_cargosystem\cargomodels\m113.p3d";
		RHS_attachToPos[] = {0.4,-0.35,-0.6};
		RHS_animPos[] = {{-2.5,0.5,0},{-2.5,3.5,0},{2,0.5,0},{2,-0.5,0},{2,2,0},{-2.5,-0.5,0},{2,3,0}};
		RHS_animDeg[] = {-90,-45,90,90,70,-90,30};
		RHS_ejectZPos[] = {-2,-2,-2,-2,-2,-2,-2};
	};
	class rhs_cargo_m113ambul: rhs_cargo_m113
	{
		RHS_attachToPos[] = {0,2.9,-0.6};
	};
	class rhs_cargo_btr70: rhs_cargo_base
	{
		scope = 1;
		faction = "RU";
		nameSound = "veh_apc";
		displayName = "$STR_rhs_cargosystem_BTR_70_Mount";
		side = 0;
		picture = "\rhs_cargosystem\img\rhs_btr70_icon_ca.paa";
		icon = "\rhs_cargosystem\img\rhs_btr70_icon_ca.paa";
		mapSize = 7.5;
		cargoAction[] = {"rhs_anim_btr60_cargo_top_left_1","rhs_anim_btr60_cargo_top_right_2","rhs_anim_btr60_cargo_top_left_2","rhs_anim_btr60_cargo_top_right_4","rhs_anim_btr60_cargo_top_right_3","rhs_anim_btr60_cargo_top_right_1","rhs_anim_btr60_cargo_top_left_3"};
		typicalCargo[] = {"RU_Soldier","RU_Soldier","RU_Soldier","RU_Soldier","RU_Soldier","RU_Soldier","RU_Soldier"};
		transportSoldier = 7;
		model = "\rhs_cargosystem\cargomodels\btr70.p3d";
		RHS_attachToPos[] = {-0.02,0.6,0};
		RHS_animPos[] = {{-2.5,0.5,0},{-2.5,3.5,0},{2,0.5,0},{2,-0.5,0},{2,2,0},{-2.5,-0.5,0},{2,3,0}};
		RHS_animDeg[] = {-90,-45,90,90,70,-90,30};
		RHS_ejectZPos[] = {-1,-1,-1,-1,-1,-1,-1};
	};
	class rhs_cargo_brdm2: rhs_cargo_btr70
	{
		icon = "\CA\wheeled\Data\ico\brdm2_CA.paa";
		picture = "\CA\wheeled_e\Data\UI\Picture_btr60_CA.paa";
		displayName = "$STR_rhs_cargosystem_BRDM2_Mount";
		cargoAction[] = {"rhs_anim_brdm2_cargo_top_left_1","rhs_anim_brdm2_cargo_top_right_1","rhs_anim_brdm2_cargo_top_left_2","rhs_anim_brdm2_cargo_top_right_2"};
		typicalCargo[] = {"RU_Soldier","RU_Soldier","RU_Soldier","RU_Soldier"};
		transportSoldier = 4;
		model = "\rhs_cargosystem\cargomodels\brdm2.p3d";
		RHS_attachToPos[] = {0.16,0.32,-0.46};
		RHS_animPos[] = {{-2.5,0.5,-0.85},{2,0.5,-0.85},{-2.5,-0.5,-0.85},{2,-0.5,-0.85}};
		RHS_animDeg[] = {-90,90,-90,90};
		RHS_ejectZPos[] = {-0.5,-0.5,-0.5,-0.5};
	};
	class rhs_cargo_btr60: rhs_cargo_btr70
	{
		icon = "\CA\wheeled_e\Data\UI\Icon_btr60_CA.paa";
		picture = "\CA\wheeled_e\Data\UI\Picture_btr60_CA.paa";
		displayName = "$STR_rhs_cargosystem_BTR_60_Mount";
		cargoAction[] = {"rhs_anim_btr60_cargo_top_left_1","rhs_anim_btr60_cargo_top_right_2","rhs_anim_btr60_cargo_top_left_2","rhs_anim_btr60_cargo_top_right_4","rhs_anim_btr60_cargo_top_right_3","rhs_anim_btr60_cargo_top_right_1","rhs_anim_btr60_cargo_top_left_3"};
		typicalCargo[] = {"RU_Soldier","RU_Soldier","RU_Soldier","RU_Soldier","RU_Soldier","RU_Soldier","RU_Soldier"};
		transportSoldier = 7;
		model = "\rhs_cargosystem\cargomodels\btr60.p3d";
		RHS_attachToPos[] = {0.16,0.48,0.35};
		RHS_animPos[] = {{-2.5,0.5,0},{-2.5,3.5,0},{2,0.5,0},{2,-0.5,0},{2,2,0},{-2.5,-0.5,0},{2,3,0}};
		RHS_animDeg[] = {-90,-45,90,90,70,-90,30};
		RHS_ejectZPos[] = {-2,-2,-2,-2,-2,-2,-2};
	};
	class rhs_cargo_btr80: rhs_cargo_btr70
	{
		displayName = "$STR_rhs_cargosystem_BTR_80_Mount";
		cargoAction[] = {"rhs_anim_btr60_cargo_top_left_1","rhs_anim_btr60_cargo_top_right_2","rhs_anim_btr60_cargo_top_left_2","rhs_anim_btr60_cargo_top_right_4","rhs_anim_btr60_cargo_top_right_3","rhs_anim_btr60_cargo_top_left_3","rhs_anim_btr60_cargo_top_left_3"};
		typicalCargo[] = {"RU_Soldier","RU_Soldier","RU_Soldier","RU_Soldier","RU_Soldier","RU_Soldier","RU_Soldier"};
		transportSoldier = 7;
		model = "\rhs_cargosystem\cargomodels\btr80.p3d";
		RHS_attachToPos[] = {0.06,-1.01,0.8};
		RHS_animPos[] = {{-2.5,0.5,0},{-2.5,3.5,0},{2,0.5,0},{2,-0.5,0},{2,2,0},{-2.5,-0.5,0},{2,3,0}};
		RHS_animDeg[] = {-90,-45,90,90,70,-90,30};
		RHS_ejectZPos[] = {-2,-2,-2,-2,-2,-2,-2};
	};
	class rhs_cargo_btr82a: rhs_cargo_btr70
	{
		displayName = "$STR_rhs_cargosystem_BTR_82a_Mount";
		cargoAction[] = {"rhs_anim_btr60_cargo_top_right_2","rhs_anim_btr60_cargo_top_right_1","rhs_anim_btr60_cargo_top_left_2","rhs_anim_btr60_cargo_top_right_4","rhs_anim_btr60_cargo_top_right_3","rhs_anim_btr60_cargo_top_left_3","rhs_anim_btr60_cargo_top_left_3"};
		typicalCargo[] = {"RU_Soldier","RU_Soldier","RU_Soldier","RU_Soldier","RU_Soldier","RU_Soldier","RU_Soldier"};
		transportSoldier = 7;
		model = "\rhs_cargosystem\cargomodels\btr80.p3d";
		RHS_attachToPos[] = {0.06,-0.97,0.6};
		RHS_animPos[] = {{-2.5,0.5,0},{-2.5,3.5,0},{2,0.5,0},{2,-0.5,0},{2,2,0},{-2.5,-0.5,0},{2,3,0}};
		RHS_animDeg[] = {-90,-45,90,90,70,-90,30};
		RHS_ejectZPos[] = {-2,-2,-2,-2,-2,-2,-2};
	};
	class rhs_cargo_bmp2: rhs_cargo_btr70
	{
		Icon = "\Ca\tracked\Data\map_ico\icomap_bmp2_CA.paa";
		picture = "\ca\tracked\Data\ico\bmp2_CA.paa";
		displayName = "$STR_rhs_cargosystem_BMP2_Mount";
		nameSound = "veh_apc";
		cargoAction[] = {"rhs_anim_bmp2_cargo_top_left_1","rhs_anim_bmp2_cargo_top_right_1","rhs_anim_bmp2_cargo_top_right_2","rhs_anim_bmp2_cargo_top_right_3","rhs_anim_bmp2_cargo_top_right_4","rhs_anim_bmp2_cargo_top_left_2","rhs_anim_bmp2_cargo_top_left_3","rhs_anim_bmp2_cargo_top_right_5"};
		typicalCargo[] = {"RU_Soldier","RU_Soldier","RU_Soldier","RU_Soldier","RU_Soldier","RU_Soldier","RU_Soldier","RU_Soldier"};
		transportSoldier = 8;
		model = "\rhs_cargosystem\cargomodels\bmp2.p3d";
		RHS_attachToPos[] = {0.15,-0.93,-0.98};
		RHS_animPos[] = {{-2.8,0.5,-0.2},{2.3,2.5,-0.2},{2.3,0.5,-0.2},{2.3,-0.5,-0.2},{2.3,-1.5,-0.2},{-2.8,-1,-0.2},{-1.2,-3.2,-0.2},{1,-3.2,-0.2}};
		RHS_animDeg[] = {-90,45,90,90,120,-90,-180,160};
		RHS_ejectZPos[] = {-2,-2,-2,-2,-2,-2,-2,-2};
	};
	class rhs_cargo_bmp2ambul: rhs_cargo_bmp2
	{
		Icon = "\Ca\tracked\Data\map_ico\icomap_bmp2_CA.paa";
		picture = "\ca\tracked\Data\ico\bmp2_CA.paa";
		displayName = "$STR_rhs_cargosystem_BMP2_Mount";
		RHS_attachToPos[] = {0.1,-1.13,-0.23};
	};
	class rhs_cargo_bmp2aceD: rhs_cargo_bmp2
	{
		RHS_attachToPos[] = {0.15,-1.33,-0.98};
	};
	class rhs_cargo_bmp2RHS: rhs_cargo_bmp2
	{
		RHS_attachToPos[] = {0.15,-1.43,-0.9};
	};
	class rhs_cargo_btrd: rhs_cargo_bmp2
	{
		RHS_attachToPos[] = {0.15,-0.85,0.53};
		model = "\rhs_cargosystem\cargomodels\btrd.p3d";
	};
	class rhs_cargo_mtlb: rhs_cargo_bmp2
	{
		RHS_attachToPos[] = {0.15,-1.0,-0.53};
		model = "\rhs_cargosystem\cargomodels\mtlb.p3d";
		cargoAction[] = {"rhs_anim_bmp2_cargo_top_left_1","rhs_anim_bmp2_cargo_top_right_1","rhs_anim_bmp2_cargo_top_right_1","rhs_anim_bmp2_cargo_top_right_3","rhs_anim_bmp2_cargo_top_right_4","rhs_anim_bmp2_cargo_top_left_2","rhs_anim_bmp2_cargo_top_left_3","rhs_anim_bmp2_cargo_top_right_5","rhs_anim_bmp2_cargo_top_right_3","rhs_anim_bmp2_cargo_top_right_2"};
		typicalCargo[] = {"RU_Soldier","RU_Soldier","RU_Soldier","RU_Soldier","RU_Soldier","RU_Soldier","RU_Soldier","RU_Soldier","RU_Soldier","RU_Soldier"};
		transportSoldier = 10;
	};
	class rhs_cargo_mtlbR: rhs_cargo_mtlb
	{
		RHS_attachToPos[] = {0.45,-1.0,-0.18};
		cargoAction[] = {"rhs_anim_bmp2_cargo_top_left_1","rhs_anim_bmp2_cargo_top_right_1","rhs_anim_bmp2_cargo_top_right_1","rhs_anim_bmp2_cargo_top_right_3","rhs_anim_bmp2_cargo_top_right_4","rhs_anim_bmp2_cargo_top_left_2"};
		typicalCargo[] = {"RU_Soldier","RU_Soldier","RU_Soldier","RU_Soldier","RU_Soldier","RU_Soldier"};
		transportSoldier = 6;		
	};
	class rhs_cargo_bmd2: rhs_cargo_bmp2
	{
		displayName = "$STR_rhs_cargosystem_BMD2_Mount";
		RHS_attachToPos[] = {0,-1.13,-0.98};
		model = "\rhs_cargosystem\cargomodels\bmd2.p3d";
	};
	class rhs_cargo_t72: rhs_cargo_btr70
	{
		Icon = "\Ca\tracked\Data\map_ico\icomap_bmp2_CA.paa";
		picture = "\ca\tracked\Data\ico\bmp2_CA.paa";
		displayName = "$STR_rhs_cargosystem_T72_Mount";
		nameSound = "tank";
		cargoAction[] = {"rhs_anim_t72_cargo_top_left_1","rhs_anim_t72_cargo_top_right_1"};
		typicalCargo[] = {"RU_Soldier","RU_Soldier"};
		transportSoldier = 2;
		model = "\rhs_cargosystem\cargomodels\t72.p3d";
		RHS_attachToPos[] = {0.15,-1.0,-0.25};
		RHS_animPos[] = {{-2.5,0.5,0},{2,2.5,0}};
		RHS_animDeg[] = {-90,90};
		RHS_ejectZPos[] = {-2,-2};
		RHS_blokTurret = 0;
	};
	class rhs_cargo_t90: rhs_cargo_t72
	{
		Icon = "\Ca\tracked\Data\map_ico\icomap_bmp2_CA.paa";
		picture = "\ca\tracked\Data\ico\bmp2_CA.paa";
		displayName = "$STR_rhs_cargosystem_T90_Mount";
		RHS_attachToPos[] = {0,0,0};
	};
	class rhs_cargo_t55: rhs_cargo_t72
	{
		Icon = "\Ca\tracked\Data\map_ico\icomap_bmp2_CA.paa";
		picture = "\ca\tracked\Data\ico\bmp2_CA.paa";
		displayName = "$STR_rhs_cargosystem_T55_Mount";
		cargoAction[] = {"rhs_anim_t55_cargo_top_right_1","rhs_anim_t55_cargo_top_right_2","rhs_anim_t55_cargo_top_left_1","rhs_anim_t55_cargo_top_left_2"};
		typicalCargo[] = {"RU_Soldier","RU_Soldier","RU_Soldier","RU_Soldier"};
		transportSoldier = 4;
		model = "\rhs_cargosystem\cargomodels\t55.p3d";
		RHS_attachToPos[] = {0.15,-1.9,0.34};
		RHS_animPos[] = {{3,-2,0},{3,-2,0},{-3.5,-3,0},{-3.5,-3,0}};
		RHS_animDeg[] = {90,120,-60,-90};
		RHS_ejectZPos[] = {-2,-2,-2,-2};
		RHS_blokTurret = 0;
	};
};
