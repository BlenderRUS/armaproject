class CfgPatches
{
	class Fortification_Pack
	{
		units[]={
			"Dot_Big",
			"Dot_Big_tr",
			"Trench_L_Cov",
			"Trench_T_Cov",
			"Trench_F_Cov",
			"Trench_30_Cov",
			"Trench_90_Cov",
			"Trench_L",
			"Trench_T",
			"Trench_F",
			"Trench_30",
			"Trench_90"
		};
		weapons[]={};
		requiredVersion=1.5;
		requiredAddons[]=
		{
			"CAStructures"
		};
	};
};
class CfgVehicleClasses
{
	class Fortification_Pack_AP
	{
		displayName="$STR_NAME_Fortification_AP";
	};
	class Fortification_desert_Pack_AP
	{
		displayName="$STR_NAME_Fortification_desert_AP";
	};
};

class CfgVehicles
{
	class HouseBase;
	class Dot_Big: HouseBase
	{
		scope=2;
		vehicleClass="Fortification_Pack_AP";
		displayName="$STR_NAME_Dot_Big";
		destrType = "DestructNo";
		placement="vertical";
		mapSize=48;
		icon = "\Fortification\data\ico_Dot_Big_ca.paa";
		model="\Fortification\Dot_Big.p3d";
		ladders[]={};
		hiddenSelections[]=
		{
			"Nest",
			"main"
		};
		hiddenSelectionsTextures[]=
		{
			"fortification\data\bagfence_co.paa",
			"fortification\data\hlina_co.paa"
		};
	};
	class Dot_Big_tr: HouseBase
	{
		scope=2;
		vehicleClass="Fortification_Pack_AP";
		displayName="$STR_NAME_Dot_Big_tr";
		destrType = "DestructNo";
		placement="vertical";
		mapSize=48;
		icon = "\Fortification\data\ico_Dot_Big_tr_ca.paa";
		model="\Fortification\Dot_Big_tr.p3d";
		ladders[]={};
		hiddenSelections[]=
		{
			"Nest",
			"main"
		};
		hiddenSelectionsTextures[]=
		{
			"fortification\data\bagfence_co.paa",
			"fortification\data\hlina_co.paa"
		};
	};
	class Trench_L_Cov: HouseBase
	{
		scope=2;
		vehicleClass="Fortification_Pack_AP";
		displayName="$STR_NAME_Trench_L_Cov";
		destrType = "DestructNo";
		placement="vertical";
		mapSize=24;
		icon = "\Fortification\data\ico_Trench_L_Cov_ca.paa";
		model="\Fortification\Trench_L_Cov.p3d";
		ladders[]={};
		hiddenSelections[]=
		{
			"Nest",
			"main"
		};
		hiddenSelectionsTextures[]=
		{
			"fortification\data\bagfence_co.paa",
			"fortification\data\hlina_co.paa"
		};
	};
	class Trench_T_Cov: HouseBase
	{
		scope=2;
		vehicleClass="Fortification_Pack_AP";
		displayName="$STR_NAME_Trench_T_Cov";
		destrType = "DestructNo";
		placement="vertical";
		mapSize=24;
		icon = "\Fortification\data\ico_Trench_T_Cov_ca.paa";
		model="\Fortification\Trench_T_Cov.p3d";
		ladders[]={};
		hiddenSelections[]=
		{
			"Nest",
			"main"
		};
		hiddenSelectionsTextures[]=
		{
			"fortification\data\bagfence_co.paa",
			"fortification\data\hlina_co.paa"
		};
	};
	class Trench_F_Cov: HouseBase
	{
		scope=2;
		vehicleClass="Fortification_Pack_AP";
		displayName="$STR_NAME_Trench_F_Cov";
		destrType = "DestructNo";
		placement="vertical";
		mapSize=24;
		icon = "\Fortification\data\ico_Trench_F_Cov_ca.paa";
		model="\Fortification\Trench_F_Cov.p3d";
		ladders[]={};
		hiddenSelections[]=
		{
			"Nest",
			"main"
		};
		hiddenSelectionsTextures[]=
		{
			"fortification\data\bagfence_co.paa",
			"fortification\data\hlina_co.paa"
		};
	};
	class Trench_30_Cov: HouseBase
	{
		scope=2;
		vehicleClass="Fortification_Pack_AP";
		displayName="$STR_NAME_Trench_30_Cov";
		destrType = "DestructNo";
		placement="vertical";
		mapSize=24;
		icon = "\Fortification\data\ico_Trench_30_Cov_ca.paa";
		model="\Fortification\Trench_30_Cov.p3d";
		ladders[]={};
		hiddenSelections[]=
		{
			"Nest",
			"main"
		};
		hiddenSelectionsTextures[]=
		{
			"fortification\data\bagfence_co.paa",
			"fortification\data\hlina_co.paa"
		};
	};
	class Trench_90_Cov: HouseBase
	{
		scope=2;
		vehicleClass="Fortification_Pack_AP";
		displayName="$STR_NAME_Trench_90_Cov";
		destrType = "DestructNo";
		placement="vertical";
		mapSize=24;
		icon = "\Fortification\data\ico_Trench_90_Cov_ca.paa";
		model="\Fortification\Trench_90_Cov.p3d";
		ladders[]={};
		hiddenSelections[]=
		{
			"Nest",
			"main"
		};
		hiddenSelectionsTextures[]=
		{
			"fortification\data\bagfence_co.paa",
			"fortification\data\hlina_co.paa"
		};
	};
	class Trench_L: HouseBase
	{
		scope=2;
		vehicleClass="Fortification_Pack_AP";
		displayName="$STR_NAME_Trench_L";
		destrType = "DestructNo";
		placement="vertical";
		mapSize=24;
		icon = "\Fortification\data\ico_Trench_L_ca.paa";
		model="\Fortification\Trench_L.p3d";
		ladders[]={};
		hiddenSelections[]=
		{
			"Nest",
			"main"
		};
		hiddenSelectionsTextures[]=
		{
			"fortification\data\bagfence_co.paa",
			"fortification\data\hlina_co.paa"
		};
	};
	class Trench_T: HouseBase
	{
		scope=2;
		vehicleClass="Fortification_Pack_AP";
		displayName="$STR_NAME_Trench_T";
		destrType = "DestructNo";
		placement="vertical";
		mapSize=24;
		icon = "\Fortification\data\ico_Trench_T_ca.paa";
		model="\Fortification\Trench_T.p3d";
		ladders[]={};
		hiddenSelections[]=
		{
			"Nest",
			"main"
		};
		hiddenSelectionsTextures[]=
		{
			"fortification\data\bagfence_co.paa",
			"fortification\data\hlina_co.paa"
		};
	};
	class Trench_F: HouseBase
	{
		scope=2;
		vehicleClass="Fortification_Pack_AP";
		displayName="$STR_NAME_Trench_F";
		destrType = "DestructNo";
		placement="vertical";
		mapSize=24;
		icon = "\Fortification\data\ico_Trench_F_ca.paa";
		model="\Fortification\Trench_F.p3d";
		ladders[]={};
		hiddenSelections[]=
		{
			"Nest",
			"main"
		};
		hiddenSelectionsTextures[]=
		{
			"fortification\data\bagfence_co.paa",
			"fortification\data\hlina_co.paa"
		};
	};
	class Trench_30: HouseBase
	{
		scope=2;
		vehicleClass="Fortification_Pack_AP";
		displayName="$STR_NAME_Trench_30";
		destrType = "DestructNo";
		placement="vertical";
		mapSize=24;
		icon = "\Fortification\data\ico_Trench_30_ca.paa";
		model="\Fortification\Trench_30.p3d";
		ladders[]={};
		hiddenSelections[]=
		{
			"Nest",
			"main"
		};
		hiddenSelectionsTextures[]=
		{
			"fortification\data\bagfence_co.paa",
			"fortification\data\hlina_co.paa"
		};
	};
	class Trench_90: HouseBase
	{
		scope=2;
		vehicleClass="Fortification_Pack_AP";
		displayName="$STR_NAME_Trench_90";
		destrType = "DestructNo";
		placement="vertical";
		mapSize=24;
		icon = "\Fortification\data\ico_Trench_90_ca.paa";
		model="\Fortification\Trench_90.p3d";
		ladders[]={};
		hiddenSelections[]=
		{
			"Nest",
			"main"
		};
		hiddenSelectionsTextures[]=
		{
			"fortification\data\bagfence_co.paa",
			"fortification\data\hlina_co.paa"
		};
	};
	//Траншеи Пустыня
	class Trench_L_D: Trench_L
	{
		vehicleClass="Fortification_desert_Pack_AP";
		displayName="$STR_NAME_Trench_L_D";
		hiddenSelections[]=
		{
			"Nest",
			"main"
		};
		hiddenSelectionsTextures[]=
		{
			"fortification\data\bagfence_D_co.paa",
			"fortification\data\hlina_D_co.paa"
		};
	};
	class Trench_L_Cov_D: Trench_L_Cov
	{
		vehicleClass="Fortification_desert_Pack_AP";
		displayName="$STR_NAME_Trench_L_Cov_D";
		hiddenSelections[]=
		{
			"Nest",
			"main"
		};
		hiddenSelectionsTextures[]=
		{
			"fortification\data\bagfence_D_co.paa",
			"fortification\data\hlina_D_co.paa"
		};
	};
	class Trench_T_D: Trench_T
	{
		vehicleClass="Fortification_desert_Pack_AP";
		displayName="$STR_NAME_Trench_T_D";
		hiddenSelections[]=
		{
			"Nest",
			"main"
		};
		hiddenSelectionsTextures[]=
		{
			"fortification\data\bagfence_D_co.paa",
			"fortification\data\hlina_D_co.paa"
		};
	};
	class Trench_T_Cov_D: Trench_T_Cov
	{
		vehicleClass="Fortification_desert_Pack_AP";
		displayName="$STR_NAME_Trench_T_Cov_D";
		hiddenSelections[]=
		{
			"Nest",
			"main"
		};
		hiddenSelectionsTextures[]=
		{
			"fortification\data\bagfence_D_co.paa",
			"fortification\data\hlina_D_co.paa"
		};
	};
	class Trench_F_D: Trench_F
	{
		vehicleClass="Fortification_desert_Pack_AP";
		displayName="$STR_NAME_Trench_F_D";
		hiddenSelections[]=
		{
			"Nest",
			"main"
		};
		hiddenSelectionsTextures[]=
		{
			"fortification\data\bagfence_D_co.paa",
			"fortification\data\hlina_D_co.paa"
		};
	};
	class Trench_F_Cov_D: Trench_F_Cov
	{
		vehicleClass="Fortification_desert_Pack_AP";
		displayName="$STR_NAME_Trench_F_Cov_D";
		hiddenSelections[]=
		{
			"Nest",
			"main"
		};
		hiddenSelectionsTextures[]=
		{
			"fortification\data\bagfence_D_co.paa",
			"fortification\data\hlina_D_co.paa"
		};
	};
	class Trench_30_D: Trench_30
	{
		vehicleClass="Fortification_desert_Pack_AP";
		displayName="$STR_NAME_Trench_30_D";
		hiddenSelections[]=
		{
			"Nest",
			"main"
		};
		hiddenSelectionsTextures[]=
		{
			"fortification\data\bagfence_D_co.paa",
			"fortification\data\hlina_D_co.paa"
		};
	};
	class Trench_30_Cov_D: Trench_30_Cov
	{
		vehicleClass="Fortification_desert_Pack_AP";
		displayName="$STR_NAME_Trench_30_Cov_D";
		hiddenSelections[]=
		{
			"Nest",
			"main"
		};
		hiddenSelectionsTextures[]=
		{
			"fortification\data\bagfence_D_co.paa",
			"fortification\data\hlina_D_co.paa"
		};
	};
	class Trench_90_D: Trench_90
	{
		vehicleClass="Fortification_desert_Pack_AP";
		displayName="$STR_NAME_Trench_90_D";
		hiddenSelections[]=
		{
			"Nest",
			"main"
		};
		hiddenSelectionsTextures[]=
		{
			"fortification\data\bagfence_D_co.paa",
			"fortification\data\hlina_D_co.paa"
		};
	};
	class Trench_90_Cov_D: Trench_90_Cov
	{
		vehicleClass="Fortification_desert_Pack_AP";
		displayName="$STR_NAME_Trench_90_Cov_D";
		hiddenSelections[]=
		{
			"Nest",
			"main"
		};
		hiddenSelectionsTextures[]=
		{
			"fortification\data\bagfence_D_co.paa",
			"fortification\data\hlina_D_co.paa"
		};
	};
	//Экспорт с FATA, переделаны
	class Concertainer_pillbox: HouseBase
	{
		scope=2;
		vehicleClass="Fortification_Pack_AP";
		displayName="$STR_NAME_Concertainer_pillbox";
		destrType = "DestructNo";
		placement="vertical";
		mapSize=24;
		icon = "";
		model="\Fortification\Concertainer_pillbox.p3d";
		ladders[]={};
		hiddenSelections[]=
		{
			"camonet",
			"hesco"
		};
		hiddenSelectionsTextures[]=
		{
			"fortification\data\camonet_ca.paa",
			"fortification\data\hesco_co.paa"
		};
	};
	class Concertainer_triple_WC: HouseBase
	{
		scope=2;
		vehicleClass="Fortification_Pack_AP";
		displayName="$STR_NAME_Concertainer_triple_WC";
		destrType = "DestructNo";
		placement="vertical";
		mapSize=24;
		icon = "";
		model="\Fortification\Concertainer_triple_WC.p3d";
		ladders[]={};
		hiddenSelections[]=
		{
			"camonet",
			"hesco"
		};
		hiddenSelectionsTextures[]=
		{
			"fortification\data\camonet_ca.paa",
			"fortification\data\hesco_co.paa"
		};
	};
	class Concertainer_triple_W: HouseBase
	{
		scope=2;
		vehicleClass="Fortification_Pack_AP";
		displayName="$STR_NAME_Concertainer_triple_W";
		destrType = "DestructNo";
		placement="vertical";
		mapSize=24;
		icon = "";
		model="\Fortification\Concertainer_triple_W.p3d";
		ladders[]={};
		hiddenSelections[]=
		{
			"hesco"
		};
		hiddenSelectionsTextures[]=
		{
			"fortification\data\hesco_co.paa"
		};
	};
	class Concertainer_triple: HouseBase
	{
		scope=2;
		vehicleClass="Fortification_Pack_AP";
		displayName="$STR_NAME_Concertainer_triple";
		destrType = "DestructNo";
		placement="vertical";
		mapSize=24;
		icon = "";
		model="\Fortification\Concertainer_triple.p3d";
		ladders[]={};
		hiddenSelections[]=
		{
			"hesco"
		};
		hiddenSelectionsTextures[]=
		{
			"fortification\data\hesco_co.paa"
		};
	};
	class Concertainer_x1: HouseBase
	{
		scope=2;
		vehicleClass="Fortification_Pack_AP";
		displayName="$STR_NAME_Concertainer_x1";
		destrType = "DestructNo";
		placement="vertical";
		mapSize=24;
		icon = "";
		model="\Fortification\Concertainer_X1.p3d";
		ladders[]={};
		hiddenSelections[]=
		{
			"hesco"
		};
		hiddenSelectionsTextures[]=
		{
			"fortification\data\hesco_co.paa"
		};
	};
	class Concertainer_x2: HouseBase
	{
		scope=2;
		vehicleClass="Fortification_Pack_AP";
		displayName="$STR_NAME_Concertainer_x2";
		destrType = "DestructNo";
		placement="vertical";
		mapSize=24;
		icon = "";
		model="\Fortification\Concertainer_X2.p3d";
		ladders[]={};
		hiddenSelections[]=
		{
			"hesco"
		};
		hiddenSelectionsTextures[]=
		{
			"fortification\data\hesco_co.paa"
		};
	};
	class Concertainer_x3: HouseBase
	{
		scope=2;
		vehicleClass="Fortification_Pack_AP";
		displayName="$STR_NAME_Concertainer_x3";
		destrType = "DestructNo";
		placement="vertical";
		mapSize=24;
		icon = "";
		model="\Fortification\Concertainer_X3.p3d";
		ladders[]={};
		hiddenSelections[]=
		{
			"hesco"
		};
		hiddenSelectionsTextures[]=
		{
			"fortification\data\hesco_co.paa"
		};
	};
	class Concertainer_x4: HouseBase
	{
		scope=2;
		vehicleClass="Fortification_Pack_AP";
		displayName="$STR_NAME_Concertainer_x4";
		destrType = "DestructNo";
		placement="vertical";
		mapSize=24;
		icon = "";
		model="\Fortification\Concertainer_X4.p3d";
		ladders[]={};
		hiddenSelections[]=
		{
			"hesco"
		};
		hiddenSelectionsTextures[]=
		{
			"fortification\data\hesco_co.paa"
		};
	};
	class Concertainer_W2: HouseBase
	{
		scope=2;
		vehicleClass="Fortification_Pack_AP";
		displayName="$STR_NAME_Concertainer_W2";
		destrType = "DestructNo";
		placement="vertical";
		mapSize=24;
		icon = "";
		model="\Fortification\Concertainer_W2.p3d";
		ladders[]={};
		hiddenSelections[]=
		{
			"hesco"
		};
		hiddenSelectionsTextures[]=
		{
			"fortification\data\hesco_co.paa"
		};
	};
	//Экспорт с FATA, переделаны, Пустыня
	class Concertainer_pillbox_D: Concertainer_pillbox
	{
		vehicleClass="Fortification_desert_Pack_AP";
		displayName="$STR_NAME_Concertainer_pillbox_D";
		hiddenSelections[]=
		{
			"camonet",
			"hesco"
		};
		hiddenSelectionsTextures[]=
		{
			"fortification\data\camonet_D_ca.paa",
			"fortification\data\hesco_D_co.paa"
		};
	};
	class Concertainer_triple_WC_D: Concertainer_triple_WC
	{
		vehicleClass="Fortification_desert_Pack_AP";
		displayName="$STR_NAME_Concertainer_triple_WC_D";
		hiddenSelections[]=
		{
			"camonet",
			"hesco"
		};
		hiddenSelectionsTextures[]=
		{
			"fortification\data\camonet_D_ca.paa",
			"fortification\data\hesco_D_co.paa"
		};
	};
	class Concertainer_triple_W_D: Concertainer_triple_W
	{
		vehicleClass="Fortification_desert_Pack_AP";
		displayName="$STR_NAME_Concertainer_triple_W_D";
		hiddenSelections[]=
		{
			"hesco"
		};
		hiddenSelectionsTextures[]=
		{
			"fortification\data\hesco_D_co.paa"
		};
	};
	class Concertainer_triple_D: Concertainer_triple
	{
		vehicleClass="Fortification_desert_Pack_AP";
		displayName="$STR_NAME_Concertainer_triple_D";
		hiddenSelections[]=
		{
			"hesco"
		};
		hiddenSelectionsTextures[]=
		{
			"fortification\data\hesco_D_co.paa"
		};
	};
	class Concertainer_x1_D: Concertainer_x1
	{
		vehicleClass="Fortification_desert_Pack_AP";
		displayName="$STR_NAME_Concertainer_x1_D";
		hiddenSelections[]=
		{
			"hesco"
		};
		hiddenSelectionsTextures[]=
		{
			"fortification\data\hesco_D_co.paa"
		};
	};
	class Concertainer_x2_D: Concertainer_x2
	{
		vehicleClass="Fortification_desert_Pack_AP";
		displayName="$STR_NAME_Concertainer_x2_D";
		hiddenSelections[]=
		{
			"hesco"
		};
		hiddenSelectionsTextures[]=
		{
			"fortification\data\hesco_D_co.paa"
		};
	};
	class Concertainer_x3_D: Concertainer_x3
	{
		vehicleClass="Fortification_desert_Pack_AP";
		displayName="$STR_NAME_Concertainer_x3_D";
		hiddenSelections[]=
		{
			"hesco"
		};
		hiddenSelectionsTextures[]=
		{
			"fortification\data\hesco_D_co.paa"
		};
	};
	class Concertainer_x4_D: Concertainer_x4
	{
		vehicleClass="Fortification_desert_Pack_AP";
		displayName="$STR_NAME_Concertainer_x4_D";
		hiddenSelections[]=
		{
			"hesco"
		};
		hiddenSelectionsTextures[]=
		{
			"fortification\data\hesco_D_co.paa"
		};
	};
	class Concertainer_W2_D: Concertainer_W2
	{
		vehicleClass="Fortification_desert_Pack_AP";
		displayName="$STR_NAME_Concertainer_W2_D";
		hiddenSelections[]=
		{
			"hesco"
		};
		hiddenSelectionsTextures[]=
		{
			"fortification\data\hesco_D_co.paa"
		};
	};
};