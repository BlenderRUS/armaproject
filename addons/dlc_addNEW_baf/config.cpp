class CfgPatches
{
	class dlc_addNEW_baf
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAData", "CACharacters", "CAweapons2", "CACharacters2", "CAWeapons", "CAWeapons_e", "CASounds", "CAtracked"};
	};
};

class CfgVehicleClasses
{
	class Armored_bafM
	{
		
		side = "TWest";
		faction = "BIS_BAF";
		displayName = "$STR_ArmoredBAFM";
	};
};

class CfgVehicles
{
	class PRACS_FV101;
	class BAF_FV101_D: PRACS_FV101
	{
		displayName = "$STR_BAF_FV101_D";
		vehicleClass = "Armored_bafM";
		faction = "BIS_BAF";
		hiddenSelections[] =
		{
			"camo01",
			"camo02",
			"camo03"
		};
		hiddenSelectionsTextures[] =
		{
			"\dlc_addNEW_baf\data\fv101_desert_co.paa",
			"pracs_tracked\tex\fv\icv_D_co.paa",
			"pracs_tracked\tex\m60\m60_can_d_co.paa"
		};		
	};
	class BAF_FV101_W: BAF_FV101_D
	{
		displayName = "$STR_BAF_FV101_W";
		hiddenSelectionsTextures[] =
		{
			"\dlc_addNEW_baf\data\fv101_co.paa",
			"pracs_tracked\tex\fv\icv_co.paa",
			"pracs_tracked\tex\m60\m60_can_g_co.paa"
		};		
	};
	class PRACS_FV107;
	class BAF_FV107_D: PRACS_FV107
	{
		displayName = "$STR_BAF_FV107_D";
		vehicleClass = "Armored_bafM";
		faction = "BIS_BAF";
		hiddenSelections[] =
		{
			"camo01",
			"camo02",
			"camo03"
		};
		hiddenSelectionsTextures[] =
		{
			"\dlc_addNEW_baf\data\fv107_desert_co.paa",
			"pracs_tracked\tex\fv\icv_D_co.paa",
			"pracs_tracked\tex\m60\m60_can_d_co.paa"
		};
	};
	class BAF_FV107_W: BAF_FV107_D
	{
		displayName = "$STR_BAF_FV107_W";
		hiddenSelectionsTextures[] =
		{
			"\dlc_addNEW_baf\data\fv107_co.paa",
			"pracs_tracked\tex\fv\icv_co.paa",
			"pracs_tracked\tex\m60\m60_can_g_co.paa"
		};
	};
	//usa/baf add m113
	class PRACS_M113_Mk19;
	class PRACS_M113_M2_M60;
	class PRACS_M113_FSV;
	class M113A3_Mk19: PRACS_M113_Mk19
	{
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\ca\Tracked_E\M113\Data\m113a3_01_co.paa"};
		faction = "BIS_US";
		vehicleclass = "ArmouredW";
	};
	class M113A3_D_Mk19: M113A3_Mk19
	{
		hiddenselectionstextures[] = {"\retex_vehicles\m113\data\m113a3_01_co_D.paa"};
		vehicleclass = "ArmouredD";
	};
	class M113_M2_M60: PRACS_M113_M2_M60
	{
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\ca\Tracked_E\M113\Data\m113a3_01_co.paa"};
		faction = "BIS_US";
		vehicleclass = "ArmouredW";
	};
	class M113A3_D_M2_M60: M113_M2_M60
	{
		hiddenselectionstextures[] = {"\retex_vehicles\m113\data\m113a3_01_co_D.paa"};
		vehicleclass = "ArmouredD";
	};
	class M113_FSV: PRACS_M113_FSV
	{
		hiddenSelections[] = {"Camo01","Camo02","Camo03"};
		hiddenselectionstextures[] =
		{
			"\retex_vehicles\m113\data\m163_vulcan_01_co.paa",
			"\retex_vehicles\m113\data\m163_vulcan_02_co.paa",
			"\ca\Tracked_E\M113\Data\m113a3_01_co.paa"
		};
	faction = "BIS_US";
		vehicleclass = "ArmouredW";
	};
	class M113A3_D_FSV: M113_FSV
	{
		hiddenselectionstextures[] =
		{
			"\retex_vehicles\m113\data\m163_vulcan_desert_01_co.paa",
			"\retex_vehicles\m113\data\m163_vulcan_desert_02_co.paa",
			"\retex_vehicles\m113\data\m113a3_01_co_D.paa"
		};
		vehicleclass = "ArmouredD";
	};
};