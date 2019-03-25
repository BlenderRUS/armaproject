class CfgPatches
{
	class CACharacters_W_BAF
	{
		units[]=
		{
			"BAF_soldier_W",
			"BAF_Asoldier_W",
			"BAF_soldier_GL_W",
			"BAF_soldier_AAR_W",
			"BAF_soldier_AMG_W",
			"BAF_soldier_AAT_W",
			"BAF_soldier_AHAT_W",
			"BAF_soldier_AHAA_W",
			"BAF_soldier_L_W",
			"BAF_soldier_Officer_W",
			"BAF_soldier_SL_W",
			"BAF_soldier_TL_W",
			"BAF_soldier_AR_W",
			"BAF_soldier_MG_W",
			"BAF_soldier_AT_W",
			"BAF_soldier_AA_W",
			"BAF_soldier_HAT_W",
			"BAF_soldier_Marksman_W",
			"BAF_soldier_Sniper_W",
			"BAF_soldier_SniperH_W",
			"BAF_soldier_SniperN_W",
			"BAF_soldier_spotter_W",
			"BAF_soldier_Medic_W",
			"BAF_Soldier_FAC_W",
			"BAF_soldier_EN_W",
			"BAF_pilot_W",
			"BAF_creWman_W"
		};
		Weapons[]={};
		requiredVersion=1.54;
		requiredAddons[]=
		{
			"CACharacters_BAF"
		};
	};
};
class CfgTalkSentences_E;
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class TalkTopics;
		class HitPoints
		{
			class HitHead;
			class HitBody;
		};
	};
	class SoldierWB: CAManBase
	{
		class TalkTopics: TalkTopics
		{
		};
		threat[]={1,0.1,0.1};
	};
	class BAF_Soldier_base_EP1: SoldierWB
	{
		class Wounds;
		class HitPoints;
		class TalkTopics;
		class EventHandlers;
	};
	class BAF_Soldier_MTP;
	class BAF_Soldier_W: BAF_Soldier_MTP
	{
		hiddenSelectionsTextures[]=
		{
			"\ca\characters_W_baf\data\camo_dpm_co.paa",
			"\ca\characters_W_baf\data\armour_dpm_co.paa",
			"\ca\characters_W_baf\data\equip_dpm_co.paa"
		};
		vehicleClass="MenW";
		weapons[]=
		{
			"BAF_L85A2_RIS_SUSAT",
			"NVGoggles",
			"ThroW",
			"Put",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnWeapons[]=
		{
			"BAF_L85A2_RIS_SUSAT",
			"NVGoggles",
			"ThroW",
			"Put",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class BAF_Soldier_GL_MTP;
	class BAF_Soldier_GL_W: BAF_Soldier_GL_MTP
	{
		hiddenSelectionsTextures[]=
		{
			"\ca\characters_W_baf\data\camo_dpm_co.paa",
			"\ca\characters_W_baf\data\armour_dpm_co.paa",
			"\ca\characters_W_baf\data\equip_dpm_co.paa"
		};
		vehicleClass="MenW";
	};
	class BAF_Soldier_N_MTP;
	class BAF_Soldier_N_W: BAF_Soldier_N_MTP
	{
		hiddenSelectionsTextures[]=
		{
			"\ca\characters_W_baf\data\camo_dpm_co.paa",
			"\ca\characters_W_baf\data\armour_dpm_co.paa",
			"\ca\characters_W_baf\data\equip_dpm_co.paa"
		};
		vehicleClass="MenW";
	};
	class BAF_Soldier_L_MTP;
	class BAF_Soldier_L_W: BAF_Soldier_L_MTP
	{
		hiddenSelectionsTextures[]=
		{
			"\ca\characters_W_baf\data\camo_dpm_co.paa",
			"\ca\characters_W_baf\data\armour_dpm_co.paa",
			"\ca\characters_W_baf\data\equip_dpm_co.paa"
		};
		vehicleClass="MenW";
	};
	class BAF_ASoldier_MTP;
	class BAF_ASoldier_W: BAF_ASoldier_MTP
	{
		hiddenSelectionsTextures[]=
		{
			"\ca\characters_W_baf\data\camo_dpm_co.paa",
			"\ca\characters_W_baf\data\armour_dpm_co.paa",
			"\ca\characters_W_baf\data\equip_dpm_co.paa"
		};
		vehicleClass="MenW";
	};
	class BAF_Soldier_AAR_MTP;
	class BAF_Soldier_AAR_W: BAF_Soldier_AAR_MTP
	{
		hiddenSelectionsTextures[]=
		{
			"\ca\characters_W_baf\data\camo_dpm_co.paa",
			"\ca\characters_W_baf\data\armour_dpm_co.paa",
			"\ca\characters_W_baf\data\equip_dpm_co.paa"
		};
		vehicleClass="MenW";
	};
	class BAF_Soldier_AMG_MTP;
	class BAF_Soldier_AMG_W: BAF_Soldier_AMG_MTP
	{
		hiddenSelectionsTextures[]=
		{
			"\ca\characters_W_baf\data\camo_dpm_co.paa",
			"\ca\characters_W_baf\data\armour_dpm_co.paa",
			"\ca\characters_W_baf\data\equip_dpm_co.paa"
		};
		vehicleClass="MenW";
	};
	class BAF_Soldier_AAT_MTP;
	class BAF_Soldier_AAT_W: BAF_Soldier_AAT_MTP
	{
		hiddenSelectionsTextures[]=
		{
			"\ca\characters_W_baf\data\camo_dpm_co.paa",
			"\ca\characters_W_baf\data\armour_dpm_co.paa",
			"\ca\characters_W_baf\data\equip_dpm_co.paa"
		};
		vehicleClass="MenW";
	};
	class BAF_Soldier_AHAT_MTP;
	class BAF_Soldier_AHAT_W: BAF_Soldier_AHAT_MTP
	{
		hiddenSelectionsTextures[]=
		{
			"\ca\characters_W_baf\data\camo_dpm_co.paa",
			"\ca\characters_W_baf\data\armour_dpm_co.paa",
			"\ca\characters_W_baf\data\equip_dpm_co.paa"
		};
		vehicleClass="MenW";
	};
	class BAF_Soldier_AAA_MTP;
	class BAF_Soldier_AAA_W: BAF_Soldier_AAA_MTP
	{
		hiddenSelectionsTextures[]=
		{
			"\ca\characters_W_baf\data\camo_dpm_co.paa",
			"\ca\characters_W_baf\data\armour_dpm_co.paa",
			"\ca\characters_W_baf\data\equip_dpm_co.paa"
		};
		vehicleClass="MenW";
	};
	class BAF_Soldier_Officer_MTP;
	class BAF_Soldier_Officer_W: BAF_Soldier_Officer_MTP
	{
		hiddenSelectionsTextures[]=
		{
			"\ca\characters_W_baf\data\camo_dpm_co.paa",
			"\ca\characters_W_baf\data\armour_dpm_co.paa",
			"\ca\characters_W_baf\data\equip_dpm_co.paa"
		};
		vehicleClass="MenW";
	};
	class BAF_Soldier_SL_MTP;
	class BAF_Soldier_SL_W: BAF_Soldier_SL_MTP
	{
		hiddenSelectionsTextures[]=
		{
			"\ca\characters_W_baf\data\camo_dpm_co.paa",
			"\ca\characters_W_baf\data\armour_dpm_co.paa",
			"\ca\characters_W_baf\data\equip_dpm_co.paa"
		};
		vehicleClass="MenW";
	};
	class BAF_Soldier_TL_MTP;
	class BAF_Soldier_TL_W: BAF_Soldier_TL_MTP
	{
		hiddenSelectionsTextures[]=
		{
			"\ca\characters_W_baf\data\camo_dpm_co.paa",
			"\ca\characters_W_baf\data\armour_dpm_co.paa",
			"\ca\characters_W_baf\data\equip_dpm_co.paa"
		};
		vehicleClass="MenW";
	};
	class BAF_Soldier_AR_MTP;
	class BAF_Soldier_AR_W: BAF_Soldier_AR_MTP
	{
		hiddenSelectionsTextures[]=
		{
			"\ca\characters_W_baf\data\camo_dpm_co.paa",
			"\ca\characters_W_baf\data\armour_dpm_co.paa",
			"\ca\characters_W_baf\data\equip_dpm_co.paa"
		};
		vehicleClass="MenW";
	};
	class BAF_Soldier_MG_MTP;
	class BAF_Soldier_MG_W: BAF_Soldier_MG_MTP
	{
		hiddenSelectionsTextures[]=
		{
			"\ca\characters_W_baf\data\camo_dpm_co.paa",
			"\ca\characters_W_baf\data\armour_dpm_co.paa",
			"\ca\characters_W_baf\data\equip_dpm_co.paa"
		};
		vehicleClass="MenW";
	};
	class BAF_Soldier_AT_MTP;
	class BAF_Soldier_AT_W: BAF_Soldier_AT_MTP
	{
		hiddenSelectionsTextures[]=
		{
			"\ca\characters_W_baf\data\camo_dpm_co.paa",
			"\ca\characters_W_baf\data\armour_dpm_co.paa",
			"\ca\characters_W_baf\data\equip_dpm_co.paa"
		};
		vehicleClass="MenW";
	};
	class BAF_Soldier_HAT_MTP;
	class BAF_Soldier_HAT_W: BAF_Soldier_HAT_MTP
	{
		hiddenSelectionsTextures[]=
		{
			"\ca\characters_W_baf\data\camo_dpm_co.paa",
			"\ca\characters_W_baf\data\armour_dpm_co.paa",
			"\ca\characters_W_baf\data\equip_dpm_co.paa"
		};
		vehicleClass="MenW";
	};
	class BAF_Soldier_AA_MTP;
	class BAF_Soldier_AA_W: BAF_Soldier_AA_MTP
	{
		hiddenSelectionsTextures[]=
		{
			"\ca\characters_W_baf\data\camo_dpm_co.paa",
			"\ca\characters_W_baf\data\armour_dpm_co.paa",
			"\ca\characters_W_baf\data\equip_dpm_co.paa"
		};
		vehicleClass="MenW";
	};
	class BAF_Soldier_Marksman_MTP;
	class BAF_Soldier_Marksman_W: BAF_Soldier_Marksman_MTP
	{
		hiddenSelectionsTextures[]=
		{
			"\ca\characters_W_baf\data\camo_dpm_co.paa",
			"\ca\characters_W_baf\data\armour_dpm_co.paa",
			"\ca\characters_W_baf\data\equip_dpm_co.paa"
		};
		vehicleClass="MenW";
	};
	class BAF_Soldier_scout_MTP;
	class BAF_Soldier_scout_W: BAF_Soldier_scout_MTP
	{
		hiddenSelectionsTextures[]=
		{
			"\ca\characters_W_baf\data\camo_dpm_co.paa",
			"\ca\characters_W_baf\data\armour_dpm_co.paa",
			"\ca\characters_W_baf\data\equip_dpm_co.paa"
		};
		vehicleClass="MenW";
		Weapons[]=
		{
			"BAF_LRR_scoped_W",
			"NVGoggles",
			"ThroW",
			"Put",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"Binocular_Vector",
			"ItemGPS",
			"Colt1911"
		};
		respaWnWeapons[]=
		{
			"BAF_LRR_scoped_W",
			"NVGoggles",
			"ThroW",
			"Put",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"Binocular_Vector",
			"ItemGPS",
			"Colt1911"
		};
	};
	class BAF_Soldier_Sniper_MTP;
	class BAF_Soldier_Sniper_W: BAF_Soldier_Sniper_MTP
	{
		Weapons[]=
		{
			"BAF_LRR_scoped_W",
			"NVGoggles",
			"ThroW",
			"Put",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"Binocular_Vector",
			"ItemGPS",
			"Colt1911"
		};
		respaWnWeapons[]=
		{
			"BAF_LRR_scoped_W",
			"NVGoggles",
			"ThroW",
			"Put",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"Binocular_Vector",
			"ItemGPS",
			"Colt1911"
		};
		vehicleClass="MenW";
		hiddenSelectionsTextures[]=
		{
			"\ca\characters_W_baf\data\Ghillie_Overall2_co.paa",
			"\ca\characters_W_baf\data\armour_dpm_co.paa",
			"\ca\characters_W_baf\data\equip_dpm_co.paa"
		};
	};
	class BAF_Soldier_SniperH_MTP;
	class BAF_Soldier_SniperH_W: BAF_Soldier_SniperH_MTP
	{
		vehicleClass="MenW";
		hiddenSelectionsTextures[]=
		{
			"\ca\characters_W_baf\data\Ghillie_Overall2_co.paa",
			"\ca\characters_W_baf\data\armour_dpm_co.paa",
			"\ca\characters_W_baf\data\equip_dpm_co.paa"
		};
	};
	class BAF_Soldier_SniperN_MTP;
	class BAF_Soldier_SniperN_W: BAF_Soldier_SniperN_MTP
	{
		vehicleClass="MenW";
		hiddenSelectionsTextures[]=
		{
			"\ca\characters_W_baf\data\Ghillie_Overall2_co.paa",
			"\ca\characters_W_baf\data\armour_dpm_co.paa",
			"\ca\characters_W_baf\data\equip_dpm_co.paa"
		};
	};
	class BAF_Soldier_spotter_MTP;
	class BAF_Soldier_spotter_W: BAF_Soldier_spotter_MTP
	{
		vehicleClass="MenW";
		hiddenSelectionsTextures[]=
		{
			"\ca\characters_W_baf\data\Ghillie_Overall2_co.paa",
			"\ca\characters_W_baf\data\armour_dpm_co.paa",
			"\ca\characters_W_baf\data\equip_dpm_co.paa"
		};
	};
	class BAF_Soldier_spotterN_MTP;
	class BAF_Soldier_spotterN_W: BAF_Soldier_spotterN_MTP
	{
		vehicleClass="MenW";
		hiddenSelectionsTextures[]=
		{
			"\ca\characters_W_baf\data\Ghillie_Overall2_co.paa",
			"\ca\characters_W_baf\data\armour_dpm_co.paa",
			"\ca\characters_W_baf\data\equip_dpm_co.paa"
		};
	};
	class BAF_Pilot_MTP;
	class BAF_Pilot_W: BAF_Pilot_MTP
	{
		hiddenSelectionsTextures[]=
		{
			"\ca\characters_W_baf\data\camo_dpm_co.paa",
			"\ca\characters_W_baf\data\armour_dpm_co.paa",
			"\ca\characters_W_baf\data\equip_dpm_co.paa"
		};
		vehicleClass="MenW";
	};
	class BAF_creWman_MTP;
	class BAF_creWman_W: BAF_creWman_MTP
	{
		hiddenSelectionsTextures[]=
		{
			"\ca\characters_W_baf\data\camo_dpm_co.paa",
			"\ca\characters_W_baf\data\armour_dpm_co.paa",
			"\ca\characters_W_baf\data\equip_dpm_co.paa"
		};
		vehicleClass="MenW";
	};
	class BAF_Soldier_Medic_MTP;
	class BAF_Soldier_Medic_W: BAF_Soldier_Medic_MTP
	{
		hiddenSelectionsTextures[]=
		{
			"\ca\characters_W_baf\data\camo_dpm_co.paa",
			"\ca\characters_W_baf\data\armour_dpm_co.paa",
			"\ca\characters_W_baf\data\equip_dpm_co.paa"
		};
		vehicleClass="MenW";
	};
	class BAF_Soldier_FAC_MTP;
	class BAF_Soldier_FAC_W: BAF_Soldier_FAC_MTP
	{
		hiddenSelectionsTextures[]=
		{
			"\ca\characters_W_baf\data\camo_dpm_co.paa",
			"\ca\characters_W_baf\data\armour_dpm_co.paa",
			"\ca\characters_W_baf\data\equip_dpm_co.paa"
		};
		vehicleClass="MenW";
	};
	class BAF_Soldier_EN_MTP;
	class BAF_Soldier_EN_W: BAF_Soldier_EN_MTP
	{
		hiddenSelectionsTextures[]=
		{
			"\ca\characters_W_baf\data\camo_dpm_co.paa",
			"\ca\characters_W_baf\data\armour_dpm_co.paa",
			"\ca\characters_W_baf\data\equip_dpm_co.paa"
		};
		vehicleClass="MenW";
	};
};
