class CfgPatches
{
	class pzn_PRACS_infantry
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAData", "CACharacters", "CAweapons2", "CACharacters2", "CAWeapons", "CAWeapons_e", "CASounds", "CAtracked"};
	};
};

class CfgVehicleClasses
{
	class smd_sla_regilar
	{
		
		side = 0;
		faction = "smd_sla_faction";
		displayName = "SLA Regilar Army";
	};
	class smd_sla_D_regilar
	{
		
		side = 0;
		faction = "smd_sla_faction";
		displayName = "SLA Regilar Army (Desert)";
	};
	class smd_pracs_regilar
	{
		
		side = 1;
		faction = "smd_racs_faction";
		displayName = "RACS Regilar Army";
	};
	class smd_pracs_D_regilar
	{
		
		side = 1;
		faction = "smd_racs_faction";
		displayName = "RACS Regilar Army (Desert)";
	};
};
class CfgVehicles
{
	//move all to standart
	class USMC_Soldier2;
	class SMD_SLA_MP : USMC_Soldier2
	{
		side = 0;
	};
	class SMD_SLA_SWAT : SMD_SLA_MP
	{
		side = 0;
	};
	class SMD_SLA_MP_URBAN : SMD_SLA_MP
	{
		side = 0;
	};
	class SMD_SLA_MP_GREEN : SMD_SLA_MP
	{
		side = 0;
	};
	class SMD_SLA_MP_DESERT : SMD_SLA_MP
	{
		side = 0;
	};
	class SMD_SLA_MP_BLACK : SMD_SLA_MP
	{
		side = 0;
	};
	class SMD_SLA_SWAT_URBAN : SMD_SLA_SWAT
	{
		side = 0;
	};
	class SMD_SLA_SWAT_GREEN : SMD_SLA_SWAT
	{
		side = 0;
	};
	class SMD_SLA_SWAT_DESERT : SMD_SLA_SWAT
	{
		side = 0;
	};
	class SMD_SLA_SWAT_BLACK : SMD_SLA_SWAT
	{
		side = 0;
	};
	class SMD_RACS_MP;
	class GUE_Soldier_Scout;
	class BAF_Soldier_SniperH_W;
	class SMD_US_SpecOps_MP_DIGI : SMD_RACS_MP
	{
		faction = "smd_racs_faction";
	};
	class SMD_US_SpecOps_DIGI : SMD_RACS_MP
	{
		faction = "smd_racs_faction";
	};
	class SMD_US_SpecOps : SMD_RACS_MP
	{
		faction = "smd_racs_faction";
	};
	class SMD_TIGER_CAMO : SMD_RACS_MP
	{
		faction = "smd_racs_faction";
	};
	class SMD_ATACS_URBAN : SMD_RACS_MP
	{
		faction = "smd_racs_faction";
	};
	class SMD_ATACS_DES : SMD_RACS_MP
	{
		faction = "smd_racs_faction";
	};
	class SMD_Sniper_D_Upper : GUE_Soldier_Scout
	{
		faction = "smd_racs_faction";
	};
	class SMD_Sniper_D : BAF_Soldier_SniperH_W
	{
		faction = "smd_racs_faction";
	};
	class SMD_Sniper_L : SMD_Sniper_D
	{
		faction = "smd_racs_faction";
	};
	class SMD_Sniper_G_Upper : SMD_Sniper_D_Upper
	{
		faction = "smd_racs_faction";
	};
	class SMD_Sniper_G : SMD_Sniper_D
	{
		faction = "smd_racs_faction";
	};
	class smd_vilas_swat : USMC_Soldier2
	{
		faction = "smd_racs_faction";
	};
	class smd_vilas_cop3 : USMC_Soldier2
	{
		faction = "smd_racs_faction";
	};
	class smd_vilas_cop : USMC_Soldier2
	{
		faction = "smd_racs_faction";
	};	
	class SMD_RSPD_SWAT_DIGI : SMD_RACS_MP
	{
		faction = "smd_racs_faction";
	};
	class SMD_RSPD_SWAT : SMD_RACS_MP
	{
		faction = "smd_racs_faction";
	};
	class SMD_RSPD_Sheriff : SMD_RACS_MP
	{
		faction = "smd_racs_faction";
	};
	class SMD_RSPD_BLUE_DIGI : SMD_RACS_MP
	{
		faction = "smd_racs_faction";
	};
	class SMD_RSPD_BLUE : SMD_RACS_MP
	{
		faction = "smd_racs_faction";
	};
	class SMD_RSPD_BLACK : SMD_RACS_MP
	{
		faction = "smd_racs_faction";
	};
	//SLA regular
	class pzn_sv_vest_soldier_tl;
	class pzn_sv_vest_soldier_sn;
	class pzn_sv_vest_soldier_san;	
	class pzn_sv_vest_soldier_rpk;
	class pzn_sv_vest_soldier_rpg2;
	class pzn_sv_vest_soldier_rpg;
	class pzn_sv_vest_soldier_of_h;
	class pzn_sv_vest_soldier_of;
	class pzn_sv_vest_soldier_mg2;
	class pzn_sv_vest_soldier_mg;
	class pzn_sv_vest_soldier_lat;
	class pzn_sv_vest_soldier_gl;
	class pzn_sv_vest_soldier_crew_com;
	class pzn_sv_vest_soldier_crew;
	class pzn_sv_vest_soldier;
	class SMD_SLA_soldier_tl : pzn_sv_vest_soldier_tl
	{
		faction = "smd_sla_faction";
		vehicleClass = "smd_sla_regilar";
		side = 0;
		hiddenSelectionstextures[] = {"pracs_infantry\data\butan_SLA_co.paa", "", "", "", "", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "", "", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "", "", "", "", "", "", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_st\data\vilas\p85_troop\data\nx_steelhelmet.paa", "pzn_rhs_st_a2\data\sv_cap_co.paa", "", "pzn_st\data\gassumk_co.paa", "", "rhs\addons\rhs_infantry_msv\data\gearpack2_rpg_co.paa", "", "rhs\addons\rhs_infantry_msv\data\gearpack2_rpg_co.paa", "", "", "pzn_rhs_st_a2\data\6b5_co.paa", "rhs\addons\rhs_infantry_msv\data\crew_equip_co.paa", "", "", "", "", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa", "", "", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa"};
	};
	class SMD_SLA_soldier_sn : pzn_sv_vest_soldier_sn
	{
		faction = "smd_sla_faction";
		vehicleClass = "smd_sla_regilar";
		side = 0;
		hiddenSelectionstextures[] = {"pracs_infantry\data\butan_SLA_co.paa", "", "", "", "", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "", "", "", "", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "", "", "", "", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_st\data\vilas\p85_troop\data\nx_steelhelmet.paa", "pzn_rhs_st_a2\data\sv_cap_co.paa", "", "pzn_st\data\gassumk_co.paa", "", "", "", "", "", "pzn_st\data\ts75_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "", "rhs\addons\rhs_infantry_msv\data\gearpack2_rpg_co.paa", "", "", "", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa", "", "", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa"};
	};
	class SMD_SLA_soldier_san : pzn_sv_vest_soldier_san
	{
		faction = "smd_sla_faction";
		vehicleClass = "smd_sla_regilar";
		side = 0;
		hiddenSelectionstextures[] = {"pracs_infantry\data\butan_SLA_co.paa", "", "", "", "", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "", "", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "", "", "", "", "", "", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_st\data\vilas\p85_troop\data\nx_steelhelmet.paa", "pzn_rhs_st_a2\data\sv_cap_co.paa", "", "pzn_st\data\gassumk_co.paa", "", "", "", "", "", "", "pzn_rhs_st_a2\data\6b5_co.paa", "", "", "", "", "", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa", "rhs\addons\rhs_infantry_msv\data\gearpack3_ranets_co.paa", "", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa"};
	};	
	class SMD_SLA_soldier_rpk : pzn_sv_vest_soldier_rpk
	{
		faction = "smd_sla_faction";
		vehicleClass = "smd_sla_regilar";
		side = 0;
		hiddenSelectionstextures[] = {"pracs_infantry\data\butan_SLA_co.paa", "", "", "", "", "", "", "", "", "", "", "", "", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_st\data\vilas\p85_troop\data\nx_steelhelmet.paa", "pzn_rhs_st_a2\data\sv_cap_co.paa", "", "pzn_st\data\gassumk_co.paa", "", "", "", "", "", "", "pzn_rhs_st_a2\data\6b5_co.paa", "", "", "", "", "", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa", "", "rhs\addons\rhs_infantry_msv\data\crew_equip_co.paa", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa"};
	};
	class SMD_SLA_soldier_rpg2 : pzn_sv_vest_soldier_rpg2
	{
		faction = "smd_sla_faction";
		vehicleClass = "smd_sla_regilar";
		side = 0;
		hiddenSelectionstextures[] = {"pracs_infantry\data\butan_SLA_co.paa", "", "", "", "", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "", "", "", "", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "", "", "", "", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_st\data\vilas\p85_troop\data\nx_steelhelmet.paa", "pzn_rhs_st_a2\data\sv_cap_co.paa", "", "pzn_st\data\gassumk_co.paa", "", "", "", "", "", "", "pzn_rhs_st_a2\data\6b5_co.paa", "rhs\addons\rhs_infantry_msv\data\crew_equip_co.paa", "", "", "", "", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa", "", "", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa"};
	};
	class SMD_SLA_soldier_rpg : pzn_sv_vest_soldier_rpg
	{
		faction = "smd_sla_faction";
		vehicleClass = "smd_sla_regilar";
		side = 0;
		hiddenSelectionstextures[] = {"pracs_infantry\data\butan_SLA_co.paa", "", "", "", "", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "", "", "", "", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "", "", "", "", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_st\data\vilas\p85_troop\data\nx_steelhelmet.paa", "pzn_rhs_st_a2\data\sv_cap_co.paa", "", "pzn_st\data\gassumk_co.paa", "", "", "", "", "", "", "pzn_rhs_st_a2\data\6b5_co.paa", "rhs\addons\rhs_infantry_msv\data\crew_equip_co.paa", "", "", "", "", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa", "", "", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa"};
	};
	class SMD_SLA_soldier_of_h : pzn_sv_vest_soldier_of_h
	{
		faction = "smd_sla_faction";
		vehicleClass = "smd_sla_regilar";
		side = 0;
		hiddenSelectionstextures[] = {"pracs_infantry\data\butan_SLA_co.paa", "", "", "", "", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "", "", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "", "", "", "", "", "", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_st\data\vilas\p85_troop\data\nx_steelhelmet.paa", "pzn_rhs_st_a2\data\sv_cap_co.paa", "", "pzn_st\data\gassumk_co.paa", "", "rhs\addons\rhs_infantry_msv\data\gearpack2_rpg_co.paa", "", "rhs\addons\rhs_infantry_msv\data\gearpack2_rpg_co.paa", "", "", "pzn_rhs_st_a2\data\6b5_co.paa", "", "", "", "rhs\addons\rhs_infantry_msv\data\gearpack2_rpg_co.paa", "", "", "", "", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa", ""};
};
	class SMD_SLA_soldier_of : pzn_sv_vest_soldier_of
	{
		faction = "smd_sla_faction";
		vehicleClass = "smd_sla_regilar";
		side = 0;
		hiddenSelectionstextures[] = {"pracs_infantry\data\butan_SLA_co.paa", "", "", "", "", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "", "", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "", "", "", "", "", "", "pzn_rhs_st_a2\data\6b5_co.paa", "", "pzn_rhs_st_a2\data\sv_cap_co.paa", "", "pzn_st\data\gassumk_co.paa", "", "rhs\addons\rhs_infantry_msv\data\gearpack2_rpg_co.paa", "", "rhs\addons\rhs_infantry_msv\data\gearpack2_rpg_co.paa", "", "", "pzn_rhs_st_a2\data\6b5_co.paa", "", "", "", "rhs\addons\rhs_infantry_msv\data\gearpack2_rpg_co.paa", "", "", "", "", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa", ""};
	};
	class SMD_SLA_soldier_mg2 : pzn_sv_vest_soldier_mg2
	{
		faction = "smd_sla_faction";
		vehicleClass = "smd_sla_regilar";
		side = 0;
		hiddenSelectionstextures[] = {"pracs_infantry\data\butan_SLA_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "", "", "", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "", "", "", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "", "", "", "", "", "", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_st\data\vilas\p85_troop\data\nx_steelhelmet.paa", "pzn_rhs_st_a2\data\sv_cap_co.paa", "", "pzn_st\data\gassumk_co.paa", "", "", "", "", "", "", "pzn_rhs_st_a2\data\6b5_co.paa", "rhs\addons\rhs_infantry_msv\data\crew_equip_co.paa", "", "", "", "", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa", "", "", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa"};
	};	
	class SMD_SLA_soldier_mg : pzn_sv_vest_soldier_mg
	{
		faction = "smd_sla_faction";
		vehicleClass = "smd_sla_regilar";
		side = 0;
		hiddenSelectionstextures[] = {"pracs_infantry\data\butan_SLA_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "", "", "", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "", "", "", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "", "", "", "", "", "", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_st\data\vilas\p85_troop\data\nx_steelhelmet.paa", "pzn_rhs_st_a2\data\sv_cap_co.paa", "", "pzn_st\data\gassumk_co.paa", "", "", "", "", "", "", "pzn_rhs_st_a2\data\6b5_co.paa", "rhs\addons\rhs_infantry_msv\data\crew_equip_co.paa", "", "", "", "", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa", "", "", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa"};
	};
	class SMD_SLA_soldier_lat : pzn_sv_vest_soldier_lat
	{
		faction = "smd_sla_faction";
		vehicleClass = "smd_sla_regilar";
		side = 0;
		hiddenSelectionstextures[] = {"pracs_infantry\data\butan_SLA_co.paa", "", "", "", "", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "", "", "", "", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "", "", "", "", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_st\data\vilas\p85_troop\data\nx_steelhelmet.paa", "pzn_rhs_st_a2\data\sv_cap_co.paa", "", "pzn_st\data\gassumk_co.paa", "", "", "", "", "rhs\addons\rhs_infantry_msv\data\gearpack2_rpg_co.paa", "", "pzn_rhs_st_a2\data\6b5_co.paa", "rhs\addons\rhs_infantry_msv\data\crew_equip_co.paa", "", "", "", "", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa", "", "", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa"};
	};	
	class SMD_SLA_soldier_gl : pzn_sv_vest_soldier_gl
	{
		faction = "smd_sla_faction";
		vehicleClass = "smd_sla_regilar";
		side = 0;
		hiddenSelectionstextures[] = {"pracs_infantry\data\butan_SLA_co.paa", "", "", "", "", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "", "", "", "", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "", "", "", "", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_st\data\vilas\p85_troop\data\nx_steelhelmet.paa", "pzn_rhs_st_a2\data\sv_cap_co.paa", "", "pzn_st\data\gassumk_co.paa", "pzn_st\data\gassumk_co.paa", "", "", "", "", "", "pzn_rhs_st_a2\data\6b5_co.paa", "rhs\addons\rhs_infantry_msv\data\crew_equip_co.paa", "", "", "", "", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa", "", "", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa"};
	};
	class SMD_SLA_soldier_crew_com : pzn_sv_vest_soldier_crew_com
	{
		faction = "smd_sla_faction";
		vehicleClass = "smd_sla_regilar";
		side = 0;
		hiddenSelectionstextures[] = {"pracs_infantry\data\butan_SLA_co.paa", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "pzn_st\data\gassumk_co.paa", "", "", "", "", "", "rhs\addons\rhs_infantry_msv\data\gearpack2_rpg_co.paa", "", "", "", "", "rhs\addons\rhs_infantry_msv\data\gearpack2_rpg_co.paa", "", "", "", "", "", "", ""};
	};
	class SMD_SLA_soldier_crew : pzn_sv_vest_soldier_crew
	{
		faction = "smd_sla_faction";
		vehicleClass = "smd_sla_regilar";
		side = 0;
		hiddenSelectionstextures[] = {"pracs_infantry\data\butan_SLA_co.paa", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "pzn_st\data\gassumk_co.paa", "", "", "", "", "", "", "", "", "rhs\addons\rhs_infantry_msv\data\crew_equip_co.paa", "", "", "", "", "", "", "", "", ""};
	};
	class SMD_SLA_soldier : pzn_sv_vest_soldier
	{
		faction = "smd_sla_faction";
		vehicleClass = "smd_sla_regilar";
		side = 0;
		hiddenSelectionstextures[] = {"pracs_infantry\data\butan_SLA_co.paa", "", "", "", "", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "", "", "", "", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_rhs_st_a2\data\6b5_co.paa", "", "", "", "", "pzn_rhs_st_a2\data\6b5_co.paa", "pzn_st\data\vilas\p85_troop\data\nx_steelhelmet.paa", "pzn_rhs_st_a2\data\sv_cap_co.paa", "", "pzn_st\data\gassumk_co.paa", "", "", "", "", "rhs\addons\rhs_infantry_msv\data\gearpack2_rpg_co.paa", "", "pzn_rhs_st_a2\data\6b5_co.paa", "rhs\addons\rhs_infantry_msv\data\crew_equip_co.paa", "", "", "", "", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa", "", "", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa"};
	};
	//SLA DESERT
	class SMD_SLA_D_soldier_tl : pzn_sv_vest_soldier_tl
	{
		faction = "SMD_SLA_faction";
		vehicleClass = "SMD_SLA_D_regilar";
		side = 0;
		hiddenSelectionstextures[] = {"pracs_infantry\data\butan_SLA_D_co.paa", "", "", "", "", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "", "", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "", "", "", "", "", "", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\nx_steelhelmet_D.paa", "pracs_infantry\data\sv_cap_D_co.paa", "", "pzn_st\data\gassumk_co.paa", "", "rhs\addons\rhs_infantry_msv\data\gearpack2_rpg_co.paa", "", "rhs\addons\rhs_infantry_msv\data\gearpack2_rpg_co.paa", "", "", "pracs_infantry\data\6b5_D_co.paa", "rhs\addons\rhs_infantry_msv\data\crew_equip_co.paa", "", "", "", "", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa", "", "", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa"};
	};
	class SMD_SLA_D_soldier_sn : pzn_sv_vest_soldier_sn
	{
		faction = "SMD_SLA_faction";
		vehicleClass = "SMD_SLA_D_regilar";
		side = 0;
		hiddenSelectionstextures[] = {"pracs_infantry\data\butan_SLA_D_co.paa", "", "", "", "", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "", "", "", "", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "", "", "", "", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\nx_steelhelmet_D.paa", "pracs_infantry\data\sv_cap_D_co.paa", "", "pzn_st\data\gassumk_co.paa", "", "", "", "", "", "pzn_st\data\ts75_co.paa", "pracs_infantry\data\6b5_D_co.paa", "", "rhs\addons\rhs_infantry_msv\data\gearpack2_rpg_co.paa", "", "", "", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa", "", "", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa"};
	};
	class SMD_SLA_D_soldier_san : pzn_sv_vest_soldier_san
	{
		faction = "SMD_SLA_faction";
		vehicleClass = "SMD_SLA_D_regilar";
		side = 0;
		hiddenSelectionstextures[] = {"pracs_infantry\data\butan_SLA_D_co.paa", "", "", "", "", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "", "", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "", "", "", "", "", "", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\nx_steelhelmet_D.paa", "pracs_infantry\data\sv_cap_D_co.paa", "", "pzn_st\data\gassumk_co.paa", "", "", "", "", "", "", "pracs_infantry\data\6b5_D_co.paa", "", "", "", "", "", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa", "rhs\addons\rhs_infantry_msv\data\gearpack3_ranets_co.paa", "", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa"};
	};	
	class SMD_SLA_D_soldier_rpk : pzn_sv_vest_soldier_rpk
	{
		faction = "SMD_SLA_faction";
		vehicleClass = "SMD_SLA_D_regilar";
		side = 0;
		hiddenSelectionstextures[] = {"pracs_infantry\data\butan_SLA_D_co.paa", "", "", "", "", "", "", "", "", "", "", "", "", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\nx_steelhelmet_D.paa", "pracs_infantry\data\sv_cap_D_co.paa", "", "pzn_st\data\gassumk_co.paa", "", "", "", "", "", "", "pracs_infantry\data\6b5_D_co.paa", "", "", "", "", "", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa", "", "rhs\addons\rhs_infantry_msv\data\crew_equip_co.paa", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa"};
	};
	class SMD_SLA_D_soldier_rpg2 : pzn_sv_vest_soldier_rpg2
	{
		faction = "SMD_SLA_faction";
		vehicleClass = "SMD_SLA_D_regilar";
		side = 0;
		hiddenSelectionstextures[] = {"pracs_infantry\data\butan_SLA_D_co.paa", "", "", "", "", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "", "", "", "", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "", "", "", "", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\nx_steelhelmet_D.paa", "pracs_infantry\data\sv_cap_D_co.paa", "", "pzn_st\data\gassumk_co.paa", "", "", "", "", "", "", "pracs_infantry\data\6b5_D_co.paa", "rhs\addons\rhs_infantry_msv\data\crew_equip_co.paa", "", "", "", "", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa", "", "", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa"};
	};
	class SMD_SLA_D_soldier_rpg : pzn_sv_vest_soldier_rpg
	{
		faction = "SMD_SLA_faction";
		vehicleClass = "SMD_SLA_D_regilar";
		side = 0;
		hiddenSelectionstextures[] = {"pracs_infantry\data\butan_SLA_D_co.paa", "", "", "", "", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "", "", "", "", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "", "", "", "", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\nx_steelhelmet_D.paa", "pracs_infantry\data\sv_cap_D_co.paa", "", "pzn_st\data\gassumk_co.paa", "", "", "", "", "", "", "pracs_infantry\data\6b5_D_co.paa", "rhs\addons\rhs_infantry_msv\data\crew_equip_co.paa", "", "", "", "", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa", "", "", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa"};
	};
	class SMD_SLA_D_soldier_of_h : pzn_sv_vest_soldier_of_h
	{
		faction = "SMD_SLA_faction";
		vehicleClass = "SMD_SLA_D_regilar";
		side = 0;
		hiddenSelectionstextures[] = {"pracs_infantry\data\butan_SLA_D_co.paa", "", "", "", "", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "", "", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "", "", "", "", "", "", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\nx_steelhelmet_D.paa", "pracs_infantry\data\sv_cap_D_co.paa", "", "pzn_st\data\gassumk_co.paa", "", "rhs\addons\rhs_infantry_msv\data\gearpack2_rpg_co.paa", "", "rhs\addons\rhs_infantry_msv\data\gearpack2_rpg_co.paa", "", "", "pracs_infantry\data\6b5_D_co.paa", "", "", "", "rhs\addons\rhs_infantry_msv\data\gearpack2_rpg_co.paa", "", "", "", "", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa", ""};
};
	class SMD_SLA_D_soldier_of : pzn_sv_vest_soldier_of
	{
		faction = "SMD_SLA_faction";
		vehicleClass = "SMD_SLA_D_regilar";
		side = 0;
		hiddenSelectionstextures[] = {"pracs_infantry\data\butan_SLA_D_co.paa", "", "", "", "", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "", "", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "", "", "", "", "", "", "pracs_infantry\data\6b5_D_co.paa", "", "pracs_infantry\data\sv_cap_D_co.paa", "", "pzn_st\data\gassumk_co.paa", "", "rhs\addons\rhs_infantry_msv\data\gearpack2_rpg_co.paa", "", "rhs\addons\rhs_infantry_msv\data\gearpack2_rpg_co.paa", "", "", "pracs_infantry\data\6b5_D_co.paa", "", "", "", "rhs\addons\rhs_infantry_msv\data\gearpack2_rpg_co.paa", "", "", "", "", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa", ""};
	};
	class SMD_SLA_D_soldier_mg2 : pzn_sv_vest_soldier_mg2
	{
		faction = "SMD_SLA_faction";
		vehicleClass = "SMD_SLA_D_regilar";
		side = 0;
		hiddenSelectionstextures[] = {"pracs_infantry\data\butan_SLA_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "", "", "", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "", "", "", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "", "", "", "", "", "", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\nx_steelhelmet_D.paa", "pracs_infantry\data\sv_cap_D_co.paa", "", "pzn_st\data\gassumk_co.paa", "", "", "", "", "", "", "pracs_infantry\data\6b5_D_co.paa", "rhs\addons\rhs_infantry_msv\data\crew_equip_co.paa", "", "", "", "", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa", "", "", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa"};
	};	
	class SMD_SLA_D_soldier_mg : pzn_sv_vest_soldier_mg
	{
		faction = "SMD_SLA_faction";
		vehicleClass = "SMD_SLA_D_regilar";
		side = 0;
		hiddenSelectionstextures[] = {"pracs_infantry\data\butan_SLA_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "", "", "", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "", "", "", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "", "", "", "", "", "", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\nx_steelhelmet_D.paa", "pracs_infantry\data\sv_cap_D_co.paa", "", "pzn_st\data\gassumk_co.paa", "", "", "", "", "", "", "pracs_infantry\data\6b5_D_co.paa", "rhs\addons\rhs_infantry_msv\data\crew_equip_co.paa", "", "", "", "", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa", "", "", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa"};
	};
	class SMD_SLA_D_soldier_lat : pzn_sv_vest_soldier_lat
	{
		faction = "SMD_SLA_faction";
		vehicleClass = "SMD_SLA_D_regilar";
		side = 0;
		hiddenSelectionstextures[] = {"pracs_infantry\data\butan_SLA_D_co.paa", "", "", "", "", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "", "", "", "", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "", "", "", "", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\nx_steelhelmet_D.paa", "pracs_infantry\data\sv_cap_D_co.paa", "", "pzn_st\data\gassumk_co.paa", "", "", "", "", "rhs\addons\rhs_infantry_msv\data\gearpack2_rpg_co.paa", "", "pracs_infantry\data\6b5_D_co.paa", "rhs\addons\rhs_infantry_msv\data\crew_equip_co.paa", "", "", "", "", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa", "", "", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa"};
	};	
	class SMD_SLA_D_soldier_gl : pzn_sv_vest_soldier_gl
	{
		faction = "SMD_SLA_faction";
		vehicleClass = "SMD_SLA_D_regilar";
		side = 0;
		hiddenSelectionstextures[] = {"pracs_infantry\data\butan_SLA_D_co.paa", "", "", "", "", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "", "", "", "", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "", "", "", "", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\nx_steelhelmet_D.paa", "pracs_infantry\data\sv_cap_D_co.paa", "", "pzn_st\data\gassumk_co.paa", "pzn_st\data\gassumk_co.paa", "", "", "", "", "", "pracs_infantry\data\6b5_D_co.paa", "rhs\addons\rhs_infantry_msv\data\crew_equip_co.paa", "", "", "", "", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa", "", "", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa"};
	};
	class SMD_SLA_D_soldier_crew_com : pzn_sv_vest_soldier_crew_com
	{
		faction = "SMD_SLA_faction";
		vehicleClass = "SMD_SLA_D_regilar";
		side = 0;
		hiddenSelectionstextures[] = {"pracs_infantry\data\butan_SLA_D_co.paa", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "pzn_st\data\gassumk_co.paa", "", "", "", "", "", "rhs\addons\rhs_infantry_msv\data\gearpack2_rpg_co.paa", "", "", "", "", "rhs\addons\rhs_infantry_msv\data\gearpack2_rpg_co.paa", "", "", "", "", "", "", ""};
	};
	class SMD_SLA_D_soldier_crew : pzn_sv_vest_soldier_crew
	{
		faction = "SMD_SLA_faction";
		vehicleClass = "SMD_SLA_D_regilar";
		side = 0;
		hiddenSelectionstextures[] = {"pracs_infantry\data\butan_SLA_D_co.paa", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "pzn_st\data\gassumk_co.paa", "", "", "", "", "", "", "", "", "rhs\addons\rhs_infantry_msv\data\crew_equip_co.paa", "", "", "", "", "", "", "", "", ""};
	};
	class SMD_SLA_D_soldier : pzn_sv_vest_soldier
	{
		faction = "SMD_SLA_faction";
		vehicleClass = "SMD_SLA_D_regilar";
		side = 0;
		hiddenSelectionstextures[] = {"pracs_infantry\data\butan_SLA_D_co.paa", "", "", "", "", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "", "", "", "", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\6b5_D_co.paa", "", "", "", "", "pracs_infantry\data\6b5_D_co.paa", "pracs_infantry\data\nx_steelhelmet_D.paa", "pracs_infantry\data\sv_cap_D_co.paa", "", "pzn_st\data\gassumk_co.paa", "", "", "", "", "rhs\addons\rhs_infantry_msv\data\gearpack2_rpg_co.paa", "", "pracs_infantry\data\6b5_D_co.paa", "rhs\addons\rhs_infantry_msv\data\crew_equip_co.paa", "", "", "", "", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa", "", "", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa", "pzn_rhs_st_a2\data\gearpack1_6sh92_co.paa"};
	};
	//pracs regilar
	class USMC_Soldier;
	class USMC_Soldier_Medic;
	class USMC_Soldier_GL;
	class USMC_Soldier_MG;
	class USMC_Soldier_AT;
	class USMC_Soldier_AA;
	class USMC_Soldier_AR;
	class USMC_SoldierM_Marksman;
	class USMC_SoldierS_Engineer;
	class USMC_SoldierS_Sniper;
	class USMC_Soldier_Officer;
	class USMC_Soldier_SL;
	class USMC_Soldier_TL;
	class USMC_Soldier_Crew;
	class USMC_Soldier_Pilot;
	class USMC_SoldierS;
	class USMC_Soldier_Light;
	class USMC_SoldierS_Spotter;
	class Civilian;
	class SRA_SoldierGB: USMC_Soldier
	{
		faction = "smd_racs_faction";
		vehicleClass = "smd_pracs_D_regilar";
		side = 1;
		model = "\pracs_infantry\res_soldier_b";
	};
	class SRA_SoldierAR: USMC_Soldier_AR
	{
		faction = "smd_racs_faction";
		vehicleClass = "smd_pracs_D_regilar";
		side = 1;
		model = "\pracs_infantry\res_soldier_ar";
	};
	class SRA_SoldierGG: USMC_Soldier_GL
	{
		faction = "smd_racs_faction";
		vehicleClass = "smd_pracs_D_regilar";
		side = 1;
		model = "\pracs_infantry\res_soldier_g";
	};
	class SRA_SoldierGMG: USMC_Soldier_MG
	{
		faction = "smd_racs_faction";
		vehicleClass = "smd_pracs_D_regilar";
		side = 1;
		model = "\pracs_infantry\res_soldier_mg";
	};
	class SRA_SoldierGAT: USMC_Soldier_AT
	{
		faction = "smd_racs_faction";
		vehicleClass = "smd_pracs_D_regilar";
		side = 1;
		model = "\pracs_infantry\res_soldier_at";
	};
	class SRA_SoldierGAA: USMC_Soldier_AA
	{
		faction = "smd_racs_faction";
		vehicleClass = "smd_pracs_D_regilar";
		side = 1;
		model = "\pracs_infantry\res_soldier_at";
	};
	class SRA_SoldierGMedic: USMC_Soldier_Medic
	{
		faction = "smd_racs_faction";
		vehicleClass = "smd_pracs_D_regilar";
		side = 1;
		model = "\pracs_infantry\res_soldier_medic";		
	};
	class SRA_SoldierGMiner: USMC_SoldierS_Engineer
	{
		faction = "smd_racs_faction";
		vehicleClass = "smd_pracs_D_regilar";
		side = 1;
		model = "\pracs_infantry\res_soldier_mine";
	};
	class SRA_SoldierGSniper: USMC_SoldierS_Sniper
	{
		faction = "smd_racs_faction";
		vehicleClass = "smd_pracs_D_regilar";
		side = 1;
		model = "\pracs_infantry\res_soldier_sniper";
	};
	class SRA_OfficerG: USMC_Soldier_Officer
	{
		faction = "smd_racs_faction";
		vehicleClass = "smd_pracs_D_regilar";
		side = 1;
		model = "\pracs_infantry\res_soldier_officer";
	};
	class SRA_SquadLeaderG: USMC_Soldier_SL
	{
		faction = "smd_racs_faction";
		vehicleClass = "smd_pracs_D_regilar";
		side = 1;
		model = "\pracs_infantry\res_soldier_sqleader";
	};
	class SRA_TeamLeaderG: USMC_Soldier_TL
	{
		faction = "smd_racs_faction";
		vehicleClass = "smd_pracs_D_regilar";
		side = 1;
		model = "\pracs_infantry\res_soldier_teamlead";
	};
	class SRA_SoldierGCrew: USMC_Soldier_Crew
	{
		faction = "smd_racs_faction";
		vehicleClass = "smd_pracs_D_regilar";
		side = 1;
		model = "\pracs_infantry\res_soldier_crew";
	};
	class SRA_SoldierGPilot: USMC_Soldier_Pilot
	{
		faction = "smd_racs_faction";
		vehicleClass = "smd_pracs_D_regilar";
		side = 1;
		model = "\pracs_infantry\res_soldier_pilot";
	};
	class SRA_SoldierGCaptive: USMC_Soldier_Light
	{
		faction = "smd_racs_faction";
		vehicleClass = "smd_pracs_D_regilar";
		side = 1;
		model = "\pracs_infantry\res_soldier_captive";
	};
	class SRA_SoldierGCommando: USMC_SoldierS
	{
		faction = "smd_racs_faction";
		vehicleClass = "smd_pracs_D_regilar";
		side = 1;
		model = "\pracs_infantry\res_soldier_sabot";
	};
	class SRA_SoldierGGuard: USMC_SoldierS_Spotter
	{
		faction = "smd_racs_faction";
		vehicleClass = "smd_pracs_D_regilar";
		side = 1;
		model = "\pracs_infantry\res_soldier_sabass";
	};
	class SRA_SoldierGMarksman: USMC_SoldierM_Marksman
	{
		faction = "smd_racs_faction";
		vehicleClass = "smd_pracs_D_regilar";
		side = 1;
		model = "\pracs_infantry\res_soldier_sabmark";
	};
	class SRA_King: USMC_Soldier_Light
	{
		faction = "smd_racs_faction";
		vehicleClass = "smd_pracs_D_regilar";
		side = 1;
		model = "\pracs_infantry\civil_King";
		displayName =	"Monarch of the Kingdom of South Sahrani (Joseph III)";
	};
	//green
	class SRA_SoldierGB_G: USMC_Soldier
	{
		faction = "smd_racs_faction";
		vehicleClass = "smd_pracs_regilar";
		side = 1;
		model = "\pracs_infantry\green\res_soldier_b";
	};
	class SRA_SoldierAR_G: USMC_Soldier_AR
	{
		faction = "smd_racs_faction";
		vehicleClass = "smd_pracs_regilar";
		side = 1;
		model = "\pracs_infantry\green\res_soldier_ar";
	};
	class SRA_SoldierGG_G: USMC_Soldier_GL
	{
		faction = "smd_racs_faction";
		vehicleClass = "smd_pracs_regilar";
		side = 1;
		model = "\pracs_infantry\green\res_soldier_g";
	};
	class SRA_SoldierGMG_G: USMC_Soldier_MG
	{
		faction = "smd_racs_faction";
		vehicleClass = "smd_pracs_regilar";
		side = 1;
		model = "\pracs_infantry\green\res_soldier_mg";
	};
	class SRA_SoldierGAT_G: USMC_Soldier_AT
	{
		faction = "smd_racs_faction";
		vehicleClass = "smd_pracs_regilar";
		side = 1;
		model = "\pracs_infantry\green\res_soldier_at";
	};
	class SRA_SoldierGAA_G: USMC_Soldier_AA
	{
		faction = "smd_racs_faction";
		vehicleClass = "smd_pracs_regilar";
		side = 1;
		model = "\pracs_infantry\green\res_soldier_at";
	};
	class SRA_SoldierGMedic_G: USMC_Soldier_Medic
	{
		faction = "smd_racs_faction";
		vehicleClass = "smd_pracs_regilar";
		side = 1;
		model = "\pracs_infantry\green\res_soldier_medic";		
	};
	class SRA_SoldierGMiner_G: USMC_SoldierS_Engineer
	{
		faction = "smd_racs_faction";
		vehicleClass = "smd_pracs_regilar";
		side = 1;
		model = "\pracs_infantry\green\res_soldier_mine";
	};
	class SRA_SoldierGSniper_G: USMC_SoldierS_Sniper
	{
		faction = "smd_racs_faction";
		vehicleClass = "smd_pracs_regilar";
		side = 1;
		model = "\pracs_infantry\green\res_soldier_sniper";
	};
	class SRA_OfficerG_G: USMC_Soldier_Officer
	{
		faction = "smd_racs_faction";
		vehicleClass = "smd_pracs_regilar";
		side = 1;
		model = "\pracs_infantry\green\res_soldier_officer";
	};
	class SRA_SquadLeaderG_G: USMC_Soldier_SL
	{
		faction = "smd_racs_faction";
		vehicleClass = "smd_pracs_regilar";
		side = 1;
		model = "\pracs_infantry\green\res_soldier_sqleader";
	};
	class SRA_TeamLeaderG_G: USMC_Soldier_TL
	{
		faction = "smd_racs_faction";
		vehicleClass = "smd_pracs_regilar";
		side = 1;
		model = "\pracs_infantry\green\res_soldier_teamlead";
	};
	class SRA_SoldierGCrew_G: USMC_Soldier_Crew
	{
		faction = "smd_racs_faction";
		vehicleClass = "smd_pracs_regilar";
		side = 1;
		model = "\pracs_infantry\green\res_soldier_crew";
	};
	class SRA_SoldierGPilot_G: USMC_Soldier_Pilot
	{
		faction = "smd_racs_faction";
		vehicleClass = "smd_pracs_regilar";
		side = 1;
		model = "\pracs_infantry\green\res_soldier_pilot";
	};
	class SRA_SoldierGCaptive_G: USMC_Soldier_Light
	{
		faction = "smd_racs_faction";
		vehicleClass = "smd_pracs_regilar";
		side = 1;
		model = "\pracs_infantry\green\res_soldier_captive";
	};
	class SRA_SoldierGCommando_G: USMC_SoldierS
	{
		faction = "smd_racs_faction";
		vehicleClass = "smd_pracs_regilar";
		side = 1;
		model = "\pracs_infantry\green\res_soldier_sabot";
	};
	class SRA_SoldierGGuard_G: USMC_SoldierS_Spotter
	{
		faction = "smd_racs_faction";
		vehicleClass = "smd_pracs_regilar";
		side = 1;
		model = "\pracs_infantry\green\res_soldier_sabass";
	};
	class SRA_SoldierGMarksman_G: USMC_SoldierM_Marksman
	{
		faction = "smd_racs_faction";
		vehicleClass = "smd_pracs_regilar";
		side = 1;
		model = "\pracs_infantry\green\res_soldier_sabmark";
	};
	class SMD_SLA_General: USMC_Soldier_Light
	{
		faction = "smd_sla_faction";
		vehicleClass = "smd_sla_regilar";
		side = 0;
		model = "\pracs_infantry\green\civil_King";
		displayName =	"President of the Democratic Republic of Sahrani (Ramirez)";
	};
};
