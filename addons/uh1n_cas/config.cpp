#define _ARMA_

class CfgPatches
{
	class uh1N_CAS
	{
		units[] = {"pzn_uh1_h_cas"};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"CAData","CACharacters","CACharacters2","CAWeapons","CAWeapons_E","CAAir","CAAir_e","ace_sys_eject"};
		version = 1;
	};
};
class cfgvehicles
{
	class UH1H_TK_EP1;
	class pzn_uh1_h_cas: UH1H_TK_EP1
	{
		displayName = "UH-1H (CAS)";
		model = "\uh1N_CAS\UH1h.p3d";
		gunBeg[] = {"muzzle_6","muzzle_7","muzzle_8","muzzle_9"};
		gunEnd[] = {"chamber_6","chamber_7","chamber_8","chamber_9"};
		weapons[] = {"PRACS_UH1N_M240","FFARLauncher_14","CMFlareLauncher"};
		magazines[] = {"4200Rnd_762x51_M240","14Rnd_FFAR","120Rnd_CMFlare_Chaff_Magazine"};
	};
};
