////////////////////////////////////////////////////////////////////
//DeRap: fortification\config.bin
//Produced from mikero's Dos Tools Dll version 6.24
//'now' is Mon Oct 14 21:58:45 2019 : 'file' last modified on Mon Oct 14 21:53:59 2019
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Fortification_Pack
	{
		units[] = {"cage","Dot_Little","Dot_Little_F","Dot_Big","Dot_Big_tr","Dot_Big_tr_D","Dot_Wall","Dot_Wall_30","Dot_Wall_90","Trench_L_Cov","Trench_T_Cov","Trench_F_Cov","Trench_30_Cov","Trench_90_Cov","Trench_L","Trench_T","Trench_F","Trench_30","Trench_90","Trench_L_Cov_D","Trench_T_Cov_D","Trench_F_Cov_D","Trench_30_Cov_D","Trench_90_Cov_D","Trench_L_D","Trench_T_D","Trench_F_D","Trench_30_D","Trench_90_D","Concertainer_pillbox","Concertainer_pillbox_30","Concertainer_pillbox_90","Concertainer_triple_WC","Concertainer_triple_W","Concertainer_triple","Concertainer_x1","Concertainer_x2","Concertainer_x3","Concertainer_x4","Concertainer_W2","Concertainer_pillbox_D","Concertainer_pillbox_30_D","Concertainer_pillbox_90_D","Concertainer_triple_WC_D","Concertainer_triple_W_D","Concertainer_triple_D","Concertainer_x1_D","Concertainer_x2_D","Concertainer_x3_D","Concertainer_x4_D","Concertainer_W2_D"};
		weapons[] = {};
		requiredVersion = 1.5;
		requiredAddons[] = {"CAStructures"};
	};
};
class CfgVehicleClasses
{
	class Fortification_Trench_AP
	{
		displayName = "$STR_NAME_Fortification_Trench_AP";
	};
	class Fortification_Concertainer_AP
	{
		displayName = "$STR_NAME_Fortification_Concertainer_AP";
	};
	class Fortification_DOT_AP
	{
		displayName = "$STR_NAME_Fortification_DOT_AP";
	};
	class Fortification_decor_AP
	{
		displayName = "$STR_NAME_Fortification_decor_AP";
	};
};
class CfgVehicles
{
	class Shed;
	class cage: Shed
	{
		scope = 2;
		vehicleClass = "Fortification_decor_AP";
		displayName = "$STR_NAME_cage";
		destrType = "DestructNo";
		placement = "vertical";
		mapSize = 48;
		icon = "\Fortification\data\ico_cage_ca.paa";
		model = "\Fortification\cage.p3d";
		ladders[] = {};
		class AnimationSources
		{
			class door
			{
				animPeriod = 1.5;
				source = "user";
			};
		};
		class UserActions
		{
			class OpenDoor
			{
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "door";
				radius = 3;
				condition = "this animationPhase ""door"" < 0.5";
				statement = "this animate[""door"",1];";
				onlyforplayer = 0;
			};
			class CloseDoor
			{
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "door";
				radius = 3;
				condition = "this animationPhase ""door"" > 0.5";
				statement = "this animate[""door"",0];";
				onlyforplayer = 0;
			};
		};
	};
	class cage_close: Shed
	{
		scope = 2;
		vehicleClass = "Fortification_decor_AP";
		displayName = "$STR_NAME_cage_close";
		destrType = "DestructNo";
		placement = "vertical";
		mapSize = 48;
		icon = "\Fortification\data\ico_cage_ca.paa";
		model = "\Fortification\cage.p3d";
		ladders[] = {};
		class AnimationSources
		{
			class door
			{
				animPeriod = 1.5;
				source = "user";
			};
		};
	};
	class Dot_Wall: Shed
	{
		scope = 2;
		vehicleClass = "Fortification_DOT_AP";
		displayName = "$STR_NAME_Dot_Wall";
		destrType = "DestructNo";
		placement = "vertical";
		mapSize = 24;
		icon = "\Fortification\data\ico_Dot_Wall_ca.paa";
		model = "\Fortification\Dot_Wall.p3d";
		ladders[] = {};
	};
	class Dot_Wall_30: Shed
	{
		scope = 2;
		vehicleClass = "Fortification_DOT_AP";
		displayName = "$STR_NAME_Dot_Wall_30";
		destrType = "DestructNo";
		placement = "vertical";
		mapSize = 24;
		icon = "\Fortification\data\ico_Dot_Wall_30_ca.paa";
		model = "\Fortification\Dot_Wall_30.p3d";
		ladders[] = {};
	};
	class Dot_Wall_90: Shed
	{
		scope = 2;
		vehicleClass = "Fortification_DOT_AP";
		displayName = "$STR_NAME_Dot_Wall_90";
		destrType = "DestructNo";
		placement = "vertical";
		mapSize = 24;
		icon = "\Fortification\data\ico_Dot_Wall_90_ca.paa";
		model = "\Fortification\Dot_Wall_90.p3d";
		ladders[] = {};
	};
	class Dot_Little: Shed
	{
		scope = 2;
		vehicleClass = "Fortification_DOT_AP";
		displayName = "$STR_NAME_Dot_little";
		destrType = "DestructNo";
		placement = "vertical";
		mapSize = 24;
		icon = "\Fortification\data\ico_Dot_little_ca.paa";
		model = "\Fortification\Dot_little.p3d";
		ladders[] = {};
	};
	class Dot_Little_F: Shed
	{
		scope = 2;
		vehicleClass = "Fortification_DOT_AP";
		displayName = "$STR_NAME_Dot_little_F";
		destrType = "DestructNo";
		placement = "vertical";
		mapSize = 24;
		icon = "\Fortification\data\ico_Dot_little_ca.paa";
		model = "\Fortification\Dot_little_F.p3d";
		ladders[] = {};
	};
	class Dot_Big: Shed
	{
		scope = 2;
		vehicleClass = "Fortification_DOT_AP";
		displayName = "$STR_NAME_Dot_Big";
		destrType = "DestructNo";
		placement = "vertical";
		mapSize = 48;
		icon = "\Fortification\data\ico_Dot_Big_ca.paa";
		model = "\Fortification\Dot_Big.p3d";
		ladders[] = {};
	};
	class Dot_Big_tr: Shed
	{
		scope = 2;
		vehicleClass = "Fortification_DOT_AP";
		displayName = "$STR_NAME_Dot_Big_tr";
		destrType = "DestructNo";
		placement = "vertical";
		mapSize = 48;
		icon = "\Fortification\data\ico_Dot_Big_tr_ca.paa";
		model = "\Fortification\Dot_Big_tr.p3d";
		ladders[] = {};
		hiddenSelections[] = {"Nest","main"};
		hiddenSelectionsTextures[] = {"fortification\data\bagfence_co.paa","fortification\data\hlina_co.paa"};
	};
	class Dot_Big_tr_D: Dot_Big_tr
	{
		vehicleClass = "Fortification_DOT_AP";
		displayName = "$STR_NAME_Dot_Big_tr_D";
		hiddenSelections[] = {"Nest","main"};
		hiddenSelectionsTextures[] = {"fortification\data\bagfence_D_co.paa","fortification\data\hlina_D_co.paa"};
	};
	class Trench_L_Cov: Shed
	{
		scope = 2;
		vehicleClass = "Fortification_Trench_AP";
		displayName = "$STR_NAME_Trench_L_Cov";
		destrType = "DestructNo";
		placement = "vertical";
		mapSize = 24;
		icon = "\Fortification\data\ico_Trench_L_Cov_ca.paa";
		model = "\Fortification\Trench_L_Cov.p3d";
		ladders[] = {};
		hiddenSelections[] = {"Nest","main"};
		hiddenSelectionsTextures[] = {"fortification\data\bagfence_co.paa","fortification\data\hlina_co.paa"};
	};
	class Trench_T_Cov: Shed
	{
		scope = 2;
		vehicleClass = "Fortification_Trench_AP";
		displayName = "$STR_NAME_Trench_T_Cov";
		destrType = "DestructNo";
		placement = "vertical";
		mapSize = 24;
		icon = "\Fortification\data\ico_Trench_T_Cov_ca.paa";
		model = "\Fortification\Trench_T_Cov.p3d";
		ladders[] = {};
		hiddenSelections[] = {"Nest","main"};
		hiddenSelectionsTextures[] = {"fortification\data\bagfence_co.paa","fortification\data\hlina_co.paa"};
	};
	class Trench_F_Cov: Shed
	{
		scope = 2;
		vehicleClass = "Fortification_Trench_AP";
		displayName = "$STR_NAME_Trench_F_Cov";
		destrType = "DestructNo";
		placement = "vertical";
		mapSize = 24;
		icon = "\Fortification\data\ico_Trench_F_Cov_ca.paa";
		model = "\Fortification\Trench_F_Cov.p3d";
		ladders[] = {};
		hiddenSelections[] = {"Nest","main"};
		hiddenSelectionsTextures[] = {"fortification\data\bagfence_co.paa","fortification\data\hlina_co.paa"};
	};
	class Trench_30_Cov: Shed
	{
		scope = 2;
		vehicleClass = "Fortification_Trench_AP";
		displayName = "$STR_NAME_Trench_30_Cov";
		destrType = "DestructNo";
		placement = "vertical";
		mapSize = 24;
		icon = "\Fortification\data\ico_Trench_30_Cov_ca.paa";
		model = "\Fortification\Trench_30_Cov.p3d";
		ladders[] = {};
		hiddenSelections[] = {"Nest","main"};
		hiddenSelectionsTextures[] = {"fortification\data\bagfence_co.paa","fortification\data\hlina_co.paa"};
	};
	class Trench_90_Cov: Shed
	{
		scope = 2;
		vehicleClass = "Fortification_Trench_AP";
		displayName = "$STR_NAME_Trench_90_Cov";
		destrType = "DestructNo";
		placement = "vertical";
		mapSize = 24;
		icon = "\Fortification\data\ico_Trench_90_Cov_ca.paa";
		model = "\Fortification\Trench_90_Cov.p3d";
		ladders[] = {};
		hiddenSelections[] = {"Nest","main"};
		hiddenSelectionsTextures[] = {"fortification\data\bagfence_co.paa","fortification\data\hlina_co.paa"};
	};
	class Trench_L: Shed
	{
		scope = 2;
		vehicleClass = "Fortification_Trench_AP";
		displayName = "$STR_NAME_Trench_L";
		destrType = "DestructNo";
		placement = "vertical";
		mapSize = 24;
		icon = "\Fortification\data\ico_Trench_L_ca.paa";
		model = "\Fortification\Trench_L.p3d";
		ladders[] = {};
		hiddenSelections[] = {"Nest","main"};
		hiddenSelectionsTextures[] = {"fortification\data\bagfence_co.paa","fortification\data\hlina_co.paa"};
	};
	class Trench_T: Shed
	{
		scope = 2;
		vehicleClass = "Fortification_Trench_AP";
		displayName = "$STR_NAME_Trench_T";
		destrType = "DestructNo";
		placement = "vertical";
		mapSize = 24;
		icon = "\Fortification\data\ico_Trench_T_ca.paa";
		model = "\Fortification\Trench_T.p3d";
		ladders[] = {};
		hiddenSelections[] = {"Nest","main"};
		hiddenSelectionsTextures[] = {"fortification\data\bagfence_co.paa","fortification\data\hlina_co.paa"};
	};
	class Trench_F: Shed
	{
		scope = 2;
		vehicleClass = "Fortification_Trench_AP";
		displayName = "$STR_NAME_Trench_F";
		destrType = "DestructNo";
		placement = "vertical";
		mapSize = 24;
		icon = "\Fortification\data\ico_Trench_F_ca.paa";
		model = "\Fortification\Trench_F.p3d";
		ladders[] = {};
		hiddenSelections[] = {"Nest","main"};
		hiddenSelectionsTextures[] = {"fortification\data\bagfence_co.paa","fortification\data\hlina_co.paa"};
	};
	class Trench_30: Shed
	{
		scope = 2;
		vehicleClass = "Fortification_Trench_AP";
		displayName = "$STR_NAME_Trench_30";
		destrType = "DestructNo";
		placement = "vertical";
		mapSize = 24;
		icon = "\Fortification\data\ico_Trench_30_ca.paa";
		model = "\Fortification\Trench_30.p3d";
		ladders[] = {};
		hiddenSelections[] = {"Nest","main"};
		hiddenSelectionsTextures[] = {"fortification\data\bagfence_co.paa","fortification\data\hlina_co.paa"};
	};
	class Trench_90: Shed
	{
		scope = 2;
		vehicleClass = "Fortification_Trench_AP";
		displayName = "$STR_NAME_Trench_90";
		destrType = "DestructNo";
		placement = "vertical";
		mapSize = 24;
		icon = "\Fortification\data\ico_Trench_90_ca.paa";
		model = "\Fortification\Trench_90.p3d";
		ladders[] = {};
		hiddenSelections[] = {"Nest","main"};
		hiddenSelectionsTextures[] = {"fortification\data\bagfence_co.paa","fortification\data\hlina_co.paa"};
	};
	class Trench_L_D: Trench_L
	{
		vehicleClass = "Fortification_Trench_AP";
		displayName = "$STR_NAME_Trench_L_D";
		hiddenSelections[] = {"Nest","main"};
		hiddenSelectionsTextures[] = {"fortification\data\bagfence_D_co.paa","fortification\data\hlina_D_co.paa"};
	};
	class Trench_L_Cov_D: Trench_L_Cov
	{
		vehicleClass = "Fortification_Trench_AP";
		displayName = "$STR_NAME_Trench_L_Cov_D";
		hiddenSelections[] = {"Nest","main"};
		hiddenSelectionsTextures[] = {"fortification\data\bagfence_D_co.paa","fortification\data\hlina_D_co.paa"};
	};
	class Trench_T_D: Trench_T
	{
		vehicleClass = "Fortification_Trench_AP";
		displayName = "$STR_NAME_Trench_T_D";
		hiddenSelections[] = {"Nest","main"};
		hiddenSelectionsTextures[] = {"fortification\data\bagfence_D_co.paa","fortification\data\hlina_D_co.paa"};
	};
	class Trench_T_Cov_D: Trench_T_Cov
	{
		vehicleClass = "Fortification_Trench_AP";
		displayName = "$STR_NAME_Trench_T_Cov_D";
		hiddenSelections[] = {"Nest","main"};
		hiddenSelectionsTextures[] = {"fortification\data\bagfence_D_co.paa","fortification\data\hlina_D_co.paa"};
	};
	class Trench_F_D: Trench_F
	{
		vehicleClass = "Fortification_Trench_AP";
		displayName = "$STR_NAME_Trench_F_D";
		hiddenSelections[] = {"Nest","main"};
		hiddenSelectionsTextures[] = {"fortification\data\bagfence_D_co.paa","fortification\data\hlina_D_co.paa"};
	};
	class Trench_F_Cov_D: Trench_F_Cov
	{
		vehicleClass = "Fortification_Trench_AP";
		displayName = "$STR_NAME_Trench_F_Cov_D";
		hiddenSelections[] = {"Nest","main"};
		hiddenSelectionsTextures[] = {"fortification\data\bagfence_D_co.paa","fortification\data\hlina_D_co.paa"};
	};
	class Trench_30_D: Trench_30
	{
		vehicleClass = "Fortification_Trench_AP";
		displayName = "$STR_NAME_Trench_30_D";
		hiddenSelections[] = {"Nest","main"};
		hiddenSelectionsTextures[] = {"fortification\data\bagfence_D_co.paa","fortification\data\hlina_D_co.paa"};
	};
	class Trench_30_Cov_D: Trench_30_Cov
	{
		vehicleClass = "Fortification_Trench_AP";
		displayName = "$STR_NAME_Trench_30_Cov_D";
		hiddenSelections[] = {"Nest","main"};
		hiddenSelectionsTextures[] = {"fortification\data\bagfence_D_co.paa","fortification\data\hlina_D_co.paa"};
	};
	class Trench_90_D: Trench_90
	{
		vehicleClass = "Fortification_Trench_AP";
		displayName = "$STR_NAME_Trench_90_D";
		hiddenSelections[] = {"Nest","main"};
		hiddenSelectionsTextures[] = {"fortification\data\bagfence_D_co.paa","fortification\data\hlina_D_co.paa"};
	};
	class Trench_90_Cov_D: Trench_90_Cov
	{
		vehicleClass = "Fortification_Trench_AP";
		displayName = "$STR_NAME_Trench_90_Cov_D";
		hiddenSelections[] = {"Nest","main"};
		hiddenSelectionsTextures[] = {"fortification\data\bagfence_D_co.paa","fortification\data\hlina_D_co.paa"};
	};
	class Concertainer_pillbox: Shed
	{
		scope = 2;
		vehicleClass = "Fortification_Concertainer_AP";
		displayName = "$STR_NAME_Concertainer_pillbox";
		destrType = "DestructNo";
		placement = "vertical";
		mapSize = 24;
		icon = "\Fortification\data\ico_Concertainer_pillbox_ca.paa";
		model = "\Fortification\Concertainer_pillbox.p3d";
		ladders[] = {};
		hiddenSelections[] = {"camonet","hesco"};
		hiddenSelectionsTextures[] = {"fortification\data\camonet_ca.paa","fortification\data\hesco_co.paa"};
	};
	class Concertainer_triple_WC: Shed
	{
		scope = 2;
		vehicleClass = "Fortification_Concertainer_AP";
		displayName = "$STR_NAME_Concertainer_triple_WC";
		destrType = "DestructNo";
		placement = "vertical";
		mapSize = 24;
		icon = "\Fortification\data\ico_Concertainer_triple_WC_ca.paa";
		model = "\Fortification\Concertainer_triple_WC.p3d";
		ladders[] = {};
		hiddenSelections[] = {"camonet","hesco"};
		hiddenSelectionsTextures[] = {"fortification\data\camonet_ca.paa","fortification\data\hesco_co.paa"};
	};
	class Concertainer_triple_W: Shed
	{
		scope = 2;
		vehicleClass = "Fortification_Concertainer_AP";
		displayName = "$STR_NAME_Concertainer_triple_W";
		destrType = "DestructNo";
		placement = "vertical";
		mapSize = 24;
		icon = "\Fortification\data\ico_Concertainer_triple_W_ca.paa";
		model = "\Fortification\Concertainer_triple_W.p3d";
		ladders[] = {};
		hiddenSelections[] = {"hesco"};
		hiddenSelectionsTextures[] = {"fortification\data\hesco_co.paa"};
	};
	class Concertainer_triple_90: Shed
	{
		scope = 2;
		vehicleClass = "Fortification_Concertainer_AP";
		displayName = "$STR_NAME_Concertainer_triple_90";
		destrType = "DestructNo";
		placement = "vertical";
		mapSize = 24;
		icon = "\Fortification\data\ico_Concertainer_triple_90_ca.paa";
		model = "\Fortification\Concertainer_triple_90.p3d";
		ladders[] = {};
		hiddenSelections[] = {"hesco"};
		hiddenSelectionsTextures[] = {"fortification\data\hesco_co.paa"};
	};
	class Concertainer_triple_30: Shed
	{
		scope = 2;
		vehicleClass = "Fortification_Concertainer_AP";
		displayName = "$STR_NAME_Concertainer_triple_30";
		destrType = "DestructNo";
		placement = "vertical";
		mapSize = 24;
		icon = "\Fortification\data\ico_Concertainer_triple_30_ca.paa";
		model = "\Fortification\Concertainer_triple_30.p3d";
		ladders[] = {};
		hiddenSelections[] = {"hesco"};
		hiddenSelectionsTextures[] = {"fortification\data\hesco_co.paa"};
	};
	class Concertainer_triple: Shed
	{
		scope = 2;
		vehicleClass = "Fortification_Concertainer_AP";
		displayName = "$STR_NAME_Concertainer_triple";
		destrType = "DestructNo";
		placement = "vertical";
		mapSize = 24;
		icon = "\Fortification\data\ico_Concertainer_triple_ca.paa";
		model = "\Fortification\Concertainer_triple.p3d";
		ladders[] = {};
		hiddenSelections[] = {"hesco"};
		hiddenSelectionsTextures[] = {"fortification\data\hesco_co.paa"};
	};
	class Concertainer_x1: Shed
	{
		scope = 2;
		vehicleClass = "Fortification_Concertainer_AP";
		displayName = "$STR_NAME_Concertainer_x1";
		destrType = "DestructNo";
		placement = "vertical";
		mapSize = 24;
		icon = "\Fortification\data\ico_Concertainer_x1_ca.paa";
		model = "\Fortification\Concertainer_X1.p3d";
		ladders[] = {};
		hiddenSelections[] = {"hesco"};
		hiddenSelectionsTextures[] = {"fortification\data\hesco_co.paa"};
	};
	class Concertainer_x2: Shed
	{
		scope = 2;
		vehicleClass = "Fortification_Concertainer_AP";
		displayName = "$STR_NAME_Concertainer_x2";
		destrType = "DestructNo";
		placement = "vertical";
		mapSize = 24;
		icon = "\Fortification\data\ico_Concertainer_x2_ca.paa";
		model = "\Fortification\Concertainer_X2.p3d";
		ladders[] = {};
		hiddenSelections[] = {"hesco"};
		hiddenSelectionsTextures[] = {"fortification\data\hesco_co.paa"};
	};
	class Concertainer_x3: Shed
	{
		scope = 2;
		vehicleClass = "Fortification_Concertainer_AP";
		displayName = "$STR_NAME_Concertainer_x3";
		destrType = "DestructNo";
		placement = "vertical";
		mapSize = 24;
		icon = "\Fortification\data\ico_Concertainer_x3_ca.paa";
		model = "\Fortification\Concertainer_X3.p3d";
		ladders[] = {};
		hiddenSelections[] = {"hesco"};
		hiddenSelectionsTextures[] = {"fortification\data\hesco_co.paa"};
	};
	class Concertainer_x4: Shed
	{
		scope = 2;
		vehicleClass = "Fortification_Concertainer_AP";
		displayName = "$STR_NAME_Concertainer_x4";
		destrType = "DestructNo";
		placement = "vertical";
		mapSize = 24;
		icon = "\Fortification\data\ico_Concertainer_x4_ca.paa";
		model = "\Fortification\Concertainer_X4.p3d";
		ladders[] = {};
		hiddenSelections[] = {"hesco"};
		hiddenSelectionsTextures[] = {"fortification\data\hesco_co.paa"};
	};
	class Concertainer_W2: Shed
	{
		scope = 2;
		vehicleClass = "Fortification_Concertainer_AP";
		displayName = "$STR_NAME_Concertainer_W2";
		destrType = "DestructNo";
		placement = "vertical";
		mapSize = 24;
		icon = "\Fortification\data\ico_Concertainer_W2_ca.paa";
		model = "\Fortification\Concertainer_W2.p3d";
		ladders[] = {};
		hiddenSelections[] = {"hesco"};
		hiddenSelectionsTextures[] = {"fortification\data\hesco_co.paa"};
	};
	class Concertainer_pillbox_D: Concertainer_pillbox
	{
		vehicleClass = "Fortification_Concertainer_AP";
		displayName = "$STR_NAME_Concertainer_pillbox_D";
		hiddenSelections[] = {"camonet","hesco"};
		hiddenSelectionsTextures[] = {"fortification\data\camonet_D_ca.paa","fortification\data\hesco_D_co.paa"};
	};
	class Concertainer_triple_WC_D: Concertainer_triple_WC
	{
		vehicleClass = "Fortification_Concertainer_AP";
		displayName = "$STR_NAME_Concertainer_triple_WC_D";
		hiddenSelections[] = {"camonet","hesco"};
		hiddenSelectionsTextures[] = {"fortification\data\camonet_D_ca.paa","fortification\data\hesco_D_co.paa"};
	};
	class Concertainer_triple_W_D: Concertainer_triple_W
	{
		vehicleClass = "Fortification_Concertainer_AP";
		displayName = "$STR_NAME_Concertainer_triple_W_D";
		hiddenSelections[] = {"hesco"};
		hiddenSelectionsTextures[] = {"fortification\data\hesco_D_co.paa"};
	};
	class Concertainer_triple_90_D: Concertainer_triple_90
	{
		vehicleClass = "Fortification_Concertainer_AP";
		displayName = "$STR_NAME_Concertainer_triple_90_D";
		hiddenSelections[] = {"hesco"};
		hiddenSelectionsTextures[] = {"fortification\data\hesco_D_co.paa"};
	};
	class Concertainer_triple_30_D: Concertainer_triple_30
	{
		vehicleClass = "Fortification_Concertainer_AP";
		displayName = "$STR_NAME_Concertainer_triple_30_D";
		hiddenSelections[] = {"hesco"};
		hiddenSelectionsTextures[] = {"fortification\data\hesco_D_co.paa"};
	};
	class Concertainer_triple_D: Concertainer_triple
	{
		vehicleClass = "Fortification_Concertainer_AP";
		displayName = "$STR_NAME_Concertainer_triple_D";
		hiddenSelections[] = {"hesco"};
		hiddenSelectionsTextures[] = {"fortification\data\hesco_D_co.paa"};
	};
	class Concertainer_x1_D: Concertainer_x1
	{
		vehicleClass = "Fortification_Concertainer_AP";
		displayName = "$STR_NAME_Concertainer_x1_D";
		hiddenSelections[] = {"hesco"};
		hiddenSelectionsTextures[] = {"fortification\data\hesco_D_co.paa"};
	};
	class Concertainer_x2_D: Concertainer_x2
	{
		vehicleClass = "Fortification_Concertainer_AP";
		displayName = "$STR_NAME_Concertainer_x2_D";
		hiddenSelections[] = {"hesco"};
		hiddenSelectionsTextures[] = {"fortification\data\hesco_D_co.paa"};
	};
	class Concertainer_x3_D: Concertainer_x3
	{
		vehicleClass = "Fortification_Concertainer_AP";
		displayName = "$STR_NAME_Concertainer_x3_D";
		hiddenSelections[] = {"hesco"};
		hiddenSelectionsTextures[] = {"fortification\data\hesco_D_co.paa"};
	};
	class Concertainer_x4_D: Concertainer_x4
	{
		vehicleClass = "Fortification_Concertainer_AP";
		displayName = "$STR_NAME_Concertainer_x4_D";
		hiddenSelections[] = {"hesco"};
		hiddenSelectionsTextures[] = {"fortification\data\hesco_D_co.paa"};
	};
	class Concertainer_W2_D: Concertainer_W2
	{
		vehicleClass = "Fortification_Concertainer_AP";
		displayName = "$STR_NAME_Concertainer_W2_D";
		hiddenSelections[] = {"hesco"};
		hiddenSelectionsTextures[] = {"fortification\data\hesco_D_co.paa"};
	};
};
