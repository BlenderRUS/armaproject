#define TEast		0
#define TWest		1
#define TGuerrila		2
#define TCivilian		3
#define TSideUnknown		4
#define TEnemy		5
#define TFriendly		6
#define TLogic		7

#define true	1
#define false	0

#define private		0
#define protected		1
#define public		2

#define VSoft		0
#define VArmor		1
#define VAir		2

class CfgPatches {
	class tu_air {
		units[] = {"Mi24_V"};
		weapons[] = {};
		requiredAddons[] = {"CACharacters","CAWeapons","CA_Anims_Char","CAData","CA_E","CACharacters","CACharacters2","CAWeapons","CAWeapons_E","CAAir","CAAir_e","CAAir2","CAAir_E_AH6J", "ace_c_vehicle", "acex_ru_veh_su25", "acex_ru_veh_su27", "acex_ru_veh_su30", "acex_ru_veh_su34", "tu_UH1", "tu_ah1", "acex_veh_mah6","Extended_EventHandlers", "ace_main", "ace_sys_vehicle", "ace_sys_missileguidance", "ace_sys_mfd", "ace_sys_air_fcs","tu_vehicles_sov","smd_assets","tu_missilebox_cfg"};
	};
};

class DefaultEventhandlers;

class Extended_FiredBIS_EventHandlers {
	class TU_KA52_Ataka {
		ace_sys_missileguidance = "if ((_this select 4) isKindOf 'MissileBase' || (_this select 4) isKindOf 'LaserBombCore' || (_this select 4) isKindOf 'BombCore') then { if (local ((_this call CBA_fnc_getFirer) select 0)) then { _this call ace_sys_missileguidance_fnc_fired }}";
	};
	class TU_KA52B_Ataka {
		ace_sys_missileguidance = "if ((_this select 4) isKindOf 'MissileBase' || (_this select 4) isKindOf 'LaserBombCore' || (_this select 4) isKindOf 'BombCore') then { if (local ((_this call CBA_fnc_getFirer) select 0)) then { _this call ace_sys_missileguidance_fnc_fired }}";
	};
	class TU_KA52_OD_Ataka {
		ace_sys_missileguidance = "if ((_this select 4) isKindOf 'MissileBase' || (_this select 4) isKindOf 'LaserBombCore' || (_this select 4) isKindOf 'BombCore') then { if (local ((_this call CBA_fnc_getFirer) select 0)) then { _this call ace_sys_missileguidance_fnc_fired }}";
	};
	class TU_KA52B_OD_Ataka {
		ace_sys_missileguidance = "if ((_this select 4) isKindOf 'MissileBase' || (_this select 4) isKindOf 'LaserBombCore' || (_this select 4) isKindOf 'BombCore') then { if (local ((_this call CBA_fnc_getFirer) select 0)) then { _this call ace_sys_missileguidance_fnc_fired }}";
	};
};

class CfgMovesBasic {
	class DefaultDie;	// External class reference
	class Actions;	// External class reference
	
	class ManActions {
		UH60_Pilot = "UH60_Pilot";
		UH60_Gunner = "UH60_Gunner";
		UH60_Cargo01 = "UH60_Cargo01";
		UH60_Cargo02 = "UH60_Cargo02";
		M134_Gunner = "M134_Gunner";
		csla_mig29_pilot = "csla_mig29_pilot";
		fz_f18_pilot = "fz_f18_pilot";
		fz_f18_commander = "fz_f18_commander";
	};
};

class CfgMovesMaleSdr : CfgMovesBasic {
	class States {
		class Crew;	// External class reference
		
		class m134_Gunner : Crew {
			file = "\uh60\anims\m134_Gunner_2.rtm";
			connectTo[] = {"Static_Dead", 1};
		};
		
		class csla_mig29_pilot_dead : DefaultDie {
			actions = "DeadActions";
			file = "\csla_air\Anims\csla_mig29_pilot_dead.rtm";
			speed = 0.5;
			looped = false;
			terminal = true;
			connectTo[] = {"DeadState", 0.1};
			soundEnabled = false;
		};
		
		class csla_mig29_pilot : Crew {
			file = "\csla_air\Anims\csla_mig29_pilot.rtm";
			interpolateTo[] = {"csla_mig29_pilot_dead", 1};
		};		
		
		class fz_f18_pilot_dead : DefaultDie {
			actions = "DeadActions";
			speed = 0.5;
			looped = "false";
			terminal = true;
			file = "\js_fa18\anim\fz_f18_pilot_kia.rtm";
			connectTo[] = {"DeadState", 0.1};
		};
		
		class fz_f18_pilot : Crew {
			file = "\js_fa18\anim\fz_f18_pilot.rtm";
			interpolateTo[] = {"fz_f18_pilot_dead", 1};
		};
		
		class fz_f18_commander : Crew {
			file = "\js_fa18\anim\fz_f18_commander.rtm";
			interpolateTo[] = {"fz_f18_pilot_dead", 1};
		};
	};
};

class CfgSounds {
	class FA18_foldwing_sound {
		sound[] = {"\js_fa18\sounds\FA18_foldwing_sound.wav", db0, 1};
		name = "FA18_foldwing_sound";
		titles[] = {};
	};
	
	class FA18_nimitz_wire_snap_sound {
		sound[] = {"\CA\sounds\Weapons\hits\rico_hit_wood_03.wss", db5, 1};
		name = "FA18_nimitz_wire_snap_sound ";
		titles[] = {};
	};
};

class CfgVehicleClasses {
	class TU_VVS_RF {
		side = "TEast";
		faction = "RU";
		displayName = $STR_TU_VVS_RF;
	};
	class TU_VVS_RF_D {
		side = "TEast";
		faction = "RU";
		displayName = $STR_TU_VVS_RF_D;
	};
	class TU_VVS_TK {
		side = "TEast";
		faction = "BIS_TK";
		displayName = $STR_TU_VVS_TK;
	};
	class TU_VVS_CDF {
		side = "TWest";
		faction = "CDF";
		displayName = $STR_TU_VVS_CDF;
	};
	class TU_USMC_AIR_D {
		side = "TWest";
		faction = "USMC";
		displayName = $STR_TU_USMC_AIR_D;
	};
	class TU_USMC_AIR {
		side = "TWest";
		faction = "USMC";
		displayName = $STR_TU_USMC_AIR;
	};
	class TU_USNAVY_AIR {
		side = "TWest";
		faction = "ACE_USNAVY";
		displayName = $STR_TU_USNAVY_AIR;
	};
	class TU_USARMY_AIR {
		side = "TWest";
		faction = "BIS_US";
		displayName = $STR_TU_USARMY_AIR;
	};
	class TU_USAF {
		side = "TWest";
		faction = "ACE_USAF";
		displayName = $STR_TU_USAF;
	};
	class TU_USAF_W {
		side = "TWest";
		faction = "ACE_USAF";
		displayName = $STR_TU_USAF_W;
	};
	class TU_RAF {
		side = "TWest";
		faction = "BIS_BAF";
		displayName = $STR_TU_RAF;
	};
	class TU_AAF {
		side = "TWest";
		faction = "BIS_BAF";
		displayName = $STR_TU_AAF;
	};
	class TU_PARACHUTE {
		displayName = "PARACHUTE";
	};
};

class CfgAmmo {
	class M_Stinger_AA;
	
	class TU_Stinger_AA: M_Stinger_AA {
		hit = 500;
		indirecthit = 100;
		indirecthitrange = 2.5;
	};
	
	class M_Igla_AA;
	
	class TU_Igla_AA: M_Igla_AA {
		hit = 310;
		indirecthit = 150;
		indirecthitrange = 8;
	};
	
	class B_23mm_APHE;
	
	class TU_23mm_APHE: B_23mm_APHE {
		ace_hit = 25;
		ace_mass = 40;
		airfriction = -0.000265;
		hit = 50;
		indirecthit = 20;
		indirecthitrange = 1.5;
		timetolive = 10;
		tracerendtime = 2;
		tracerscale = 2;
		tracerstarttime = 0.1;
		typicalspeed = 1120;
		visiblefire = 32;
		visiblefiretime = 3;
	};
};

/*
class CfgMagazines {
	class 150Rnd_127x108_KORD;	
	class TU_700Rnd_127x108_A127: 150Rnd_127x108_KORD {
		count = 700;
	};
};

class CfgWeapons {
	class KORD;
	class ACE_NSVT: KORD {
		class manual;
	};
	class TU_A127: ACE_NSVT {
		displayname = "12.7mm Afanasev";
		displaynameshort = "A-12.7";
		magazines[] = {"TU_700Rnd_127x108_A127"};
		class manual: manual {
			dispersion = 0.002;
			displayname = "";
		};
	};
};
*/
class CfgMagazines {
	class ACE_1Rnd_Stinger;
	
	class TU_1Rnd_Stinger : ACE_1Rnd_Stinger {
		ammo = "TU_Stinger_AA";
	};
	
	class Igla;
	
	class TU_1Rnd_Igla : Igla {
		ammo = "TU_Igla_AA";
	};
	
	class 520Rnd_23mm_GSh23L;
	
	class TU_460Rnd_23mm_GSh23L : 520Rnd_23mm_GSh23L {
		ace_air_fcs_drop[] = {0, 0.037, 0.16, 0.369, 0.657, 1.048, 1.553, 2.121, 2.895, 3.678, 4.68, 5.797, 7.022, 8.362, 9.817, 11.391, 13.482, 15.734, 17.641, 20.158, 22.826, 25.676, 28.977, 32.147, 35.753, 39.882, 44.212, 48.379, 53.492, 58.447, 64.129, 69.974, 76.48, 83.372, 90.407, 98.297, 106.374, 115.314, 124.625, 134.297, 144.81, 155.82, 167.811, 180.148, 193.726, 207.617};
		ace_air_fcs_maxrange = 4500;
		ace_air_fcs_time[] = {0, 0.1, 0.2, 0.29, 0.39, 0.49, 0.59, 0.69, 0.8, 0.91, 1.03, 1.15, 1.27, 1.4, 1.52, 1.63, 1.8, 1.93, 2.05, 2.2, 2.35, 2.5, 2.67, 2.82, 3, 3.17, 3.34, 3.51, 3.71, 3.89, 4.09, 4.28, 4.49, 4.71, 4.92, 5.15, 5.37, 5.61, 5.87, 6.1, 6.37, 6.61, 6.88, 7.16, 7.44, 7.73};
		ammo = "TU_23mm_APHE";
		count = 460;
		displayname = "23x115mm";
		displaynameshort = "23x115mm";
		initspeed = 1120;
		maxleadspeed = 200;
		namesound = "cannon";
		scope = 2;
		tracersevery = 1;
	};
};

class CfgWeapons {
	class StingerLaucher;
	
	class TU_StingerLaucher : StingerLaucher {
		magazines[] = {"TU_1Rnd_Stinger"};
	};
	
	class Igla_twice;
	
	class TU_IglaLauncher : Igla_twice {
		magazines[] = {"TU_1Rnd_Igla"};
	};
	
	class CannonCore;
	
	class GSh302: CannonCore {
		cursor = "Air_E_MG";
		cursoraim = "Air_Dot";
	};
	
	class GSh23L;
	
	class TU_GSh23L: GSh23L {
		magazines[] = {"TU_460Rnd_23mm_GSh23L"};
	};
	
	class GSh301: CannonCore {
		class manual;
	};
	
	class ACE_GSh301: GSh301 {
		class manual: manual {
			burst = 2;
		};
	};
};	

class RscMapControl;	// External class reference

class RscText;	// External class reference
class RscIGUIText;	// External class reference
class RscIGUIValue;	// External class reference
class RscEdit;	// External class reference
class RscPicture;	// External class reference
class RscProgress;	// External class reference
class RscIGProgress;	// External class reference
class RscOpticsText;	// External class reference
class RscOpticsValue;	// External class reference
class RscListBox;	// External class reference

class RscInGameUI {
	class RscUnitInfo;	// External class reference
	class RscUnitInfo_AH64D_gunner;	// External class reference
	
	class FA18_RscUnitInfoAir : RscUnitInfo {
		idd = 300;
		updateWidthByWeapon = 0;
		updateHeightByCrew = 0;
		updateWidthByCrew = 0;
		onLoad = "uiNamespace setVariable ['HUD', _this select 0];";
		onUnLoad = "uiNamespace setVariable ['HUD', nil]";
		controls[] = {"CA_Weapon", "CA_Mode", "CA_Ammo", "CA_ValueFuelBackground", "CA_ValueFuel", "CA_GunnerWeapon", "CA_SpeedBackground", "CA_TextSpeed", "CA_Speed", "CA_AltBackground", "CA_TextAlt", "CA_Alt", "CA_HeadingBackground", "CA_Heading", "CA_ValueArmor", "CA_TextFlares", "CA_TextFlaresMode"};
		
		class CA_Mode : RscIGUIText {
			idc = 149;
			style = 0;
			x = "(SafeZoneW + SafeZoneX) - (1 - 0.761)";
			y = "0.054 + SafeZoneY";
			w = 0.214;
			h = 0.039;
		};
		
		class CA_Ammo : RscIGUIValue {
			idc = 119;
			style = 1;
			x = "(SafeZoneW + SafeZoneX) - (1 - 0.761)";
			y = "0.054 + SafeZoneY";
			w = 0.214;
			h = 0.039;
		};
		
		class CA_Weapon : RscIGUIText {
			idc = 118;
			style = 0;
			x = "(SafeZoneW + SafeZoneX) - (1 - 0.761)";
			y = "0.015 + SafeZoneY";
			w = 0.214;
			h = 0.039;
		};
		
		class CA_GunnerWeapon : RscIGUIText {
			idc = 150;
			style = 0;
			x = "(SafeZoneW + SafeZoneX) - (1 - 0.761)";
			y = "0.132 + SafeZoneY";
			w = 0.214;
			h = 0.039;
			SizeEx = 0.034;
		};
		
		class CA_SpeedBackground : RscEdit {
			idc = -1;
			sizeEx = 0.034;
			colorBackground[] = {0, 0, 0, 0};
			colorText[] = {0.4, 0.6745, 0.2784, 1.0};
			colorSelection[] = {0, 0, 0, 0};
			style = 0x02 + 0x40;
			shadow = 2;
			type = VSoft;
			x = 0.314;
			y = "0.017 + SafeZoneY";
			w = 0.06;
			h = 0.033;
		};
		
		class CA_TextSpeed : RscIGUIText {
			style = 0;
			x = 0.257;
			y = "0.015 + SafeZoneY";
			w = 0.12;
			text = SPD;
		};
		
		class CA_Speed : RscIGUIValue {
			idc = 121;
			style = 1;
			x = 0.257;
			y = "0.015 + SafeZoneY";
			w = 0.12;
		};
		
		class CA_AltBackground : RscEdit {
			idc = -1;
			sizeEx = 0.034;
			colorBackground[] = {0, 0, 0, 0};
			colorText[] = {0.4, 0.6745, 0.2784, 1.0};
			colorSelection[] = {0, 0, 0, 0};
			style = 0x02 + 0x40;
			type = VSoft;
			x = 0.625;
			y = "0.017 + SafeZoneY";
			w = 0.06;
			h = 0.033;
		};
		
		class CA_TextAlt : RscIGUIText {
			style = 1;
			x = 0.625;
			y = "0.015 + SafeZoneY";
			w = 0.12;
			text = ALT;
		};
		
		class CA_Alt : RscIGUIValue {
			idc = 122;
			style = 0;
			x = 0.625;
			y = "0.015 + SafeZoneY";
			w = 0.12;
		};
		
		class CA_HeadingBackground : RscEdit {
			idc = -1;
			sizeEx = 0.034;
			colorBackground[] = {0, 0, 0, 0};
			colorText[] = {0.4, 0.6745, 0.2784, 1.0};
			colorSelection[] = {0, 0, 0, 0};
			style = 0x02 + 0x40;
			type = VSoft;
			x = 0.469;
			y = "0.017 + SafeZoneY";
			w = 0.061;
			h = 0.033;
		};
		
		class CA_Heading : RscIGUIValue {
			idc = 148;
			style = 2;
			x = 0.45;
			y = "0.015 + SafeZoneY";
			w = 0.1;
		};
		
		class CA_ValueFuelBackground : RscPicture {
			idc = -1;
			shadow = 2;
			x = "0.018 + SafeZoneX";
			y = "0.01 + SafeZoneY";
			w = 0.0196078;
			h = 0.20915;
			colorText[] = {0.4, 0.6745, 0.2784, 1.0};
			text = "\ca\ui\data\ui_fuel_background.paa";
		};
		
		class CA_ValueFuel : RscIGProgress {
			idc = 113;
			x = "0.02 + SafeZoneX";
			y = "0.036 + SafeZoneY";
			w = 0.01;
			h = 0.18;
			texture = "\ca\ui\data\igui_fuel_progress.paa";
		};
		
		class CA_ValueArmor : RscListBox {
			idc = 111;
			sizeEx = 0.03525;
			x = "0.040 + SafeZoneX";
			y = "0.016 + SafeZoneY";
			w = 0.0357;
			h = 0.76;
		};
		
		class CA_TextFlaresMode : RscIGUIText {
			idc = 152;
			style = 0;
			sizeEx = 0.02674;
			x = "0.078 + SafeZoneX";
			y = "0.012 + SafeZoneY";
			w = "0.161*SafezoneW";
		};
		
		class CA_TextFlares : RscIGUIValue {
			idc = 151;
			style = 1;
			sizeEx = 0.02674;
			x = "0.078  + SafeZoneX";
			y = "0.012 + SafeZoneY";
			w = "0.161*SafezoneW";
		};
	};
	
	class FA18_Gunner_Turret_Info : RscUnitInfo_AH64D_gunner {
		idd = 300;
		onLoad = "uiNamespace setVariable ['WSO_HUD', _this select 0];";
		onUnLoad = "uiNamespace setVariable ['WSO_HUD', nil]";
		controls[] = {"CA_Distance", "CA_VisionMode", "CA_FlirMode", "CA_FOVMode", "CA_Compass", "CA_Heading", "CA_Autohover", "CA_BalisticComputer", "CA_BallRange", "CA_LaserMarker", "CA_WeaponZeroingText", "CA_WeaponZeroing"};
		
		class CA_WeaponZeroingText : RscIGUIText {
			idc = 169;
			style = 0;
			x = "(SafeZoneW + SafeZoneX) - (1 - 0.761)";
			y = "0.095 + SafeZoneY";
			w = 0.214;
			h = 0.039;
			SizeEx = 0.034;
			text = $STR_DISP_ZEROING;
		};
		
		class CA_WeaponZeroing : RscIGUIText {
			idc = 168;
			style = 1;
			x = "(SafeZoneW + SafeZoneX) - (1 - 0.761)";
			y = "0.095 + SafeZoneY";
			w = 0.214;
			h = 0.039;
			SizeEx = 0.034;
		};
		
		class CA_Distance : RscOpticsValue {
			sizeEx = "0.028*SafezoneH";
			idc = 151;
			x = 0.438;
			y = 0.85;
			w = 0.123;
			style = 2;
		};
		
		class CA_LaserMarker : RscOpticsText {
			idc = 158;
			x = 0.27;
			y = 0.908;
			w = 0.154;
			text = "LASE TRGT";
		};
		
		class CA_BallRange : RscOpticsValue {
			idc = 164;
			x = 0.626;
			y = 0.908;
			w = 0.3;
		};
		
		class CA_BalisticComputer : RscOpticsText {
			idc = 165;
			x = 0.594;
			y = 0.908;
			text = "*";
			sizeEx = 0.06;
		};
		
		class CA_FOVMode : RscOpticsText {
			idc = 154;
			x = 0.052;
			y = 0.248;
		};
		
		class CA_VisionMode : RscOpticsText {
			idc = 152;
			x = 0.1;
			y = 0.4;
		};
		
		class CA_Autohover : RscOpticsText {
			idc = 157;
			x = 0.664;
			y = 0.248;
			style = 1;
			text = HOV;
		};
		
		class CA_FlirMode : RscOpticsText {
			idc = 153;
			x = 0.664;
			y = 0.296;
			style = 1;
		};
		
		class CA_Compass : RscOpticsText {
			idc = 155;
			x = 0;
			y = 0.7;
			w = 0.3;
			h = 0.05;
		};
		
		class CA_Heading : RscOpticsText {
			idc = 156;
			x = 0;
			y = 0.75;
			w = 0.3;
			h = 0.05;
		};
	};
};

class CfgVehicles {
	class All;	// External class reference

	class AllVehicles : All {
		class NewTurret {};
	};
	
	class Air : AllVehicles {
		class NewTurret;	// External class reference
		class MainTurret;	// External class reference
		class ViewPilot;	// External class reference
		class AnimationSources;	// External class reference
		class Sounds;	// External class reference
	};
	
	class Helicopter : Air {
		class Turrets {
			class MainTurret: NewTurret {};
		};
		class NewTurret;	// External class reference
		class ViewPilot;	// External class reference
		class AnimationSources;	// External class reference
		
		class Sounds : Sounds {
			class Engine;	// External class reference
			class Movement;	// External class reference
		};
	};
	
	class UH60_Base : Helicopter {};
	
	class MH60S: UH60_Base {};
	
	class UH60M_base_EP1 : UH60_Base {};
	
	class UH60M_US_base_EP1 : UH60M_base_EP1 {};
	
	class UH60M_EP1 : UH60M_US_base_EP1 {
		vehicleclass = "TU_USARMY_AIR";
		class ACE;
	};
	
	class ACE_UH60M : UH60M_EP1 {
		class AnimationSources;
		class ACE: ACE {
			class ACE_MISSILEGUIDANCE;
		};
	};
	
	class TU_UH60L_MED_NF : ACE_UH60M {
		ace_camshake_enabled = 1;
		ace_canbecargo = 0;
		ace_canbeload = 1;
		ace_canfastrope = 1;
		ace_cangear = 0;
		ace_canlift = 1;
		ace_canloadfront = 0;
		ace_cargo_exposed = 0;
		ace_ejection_seat = "ParachuteC";
		ace_exposed = 0;
		ace_lademeister = 1;
		ace_maxload = 5886;
		ace_geolifterattachment[] = {{0, 2, -4.5}};
		ace_ropeattachment[] = {{-1.4, 2, -0.5}, {1.4, 2, -0.5}};
		ace_sys_air_rwr_type = "ACE_Default";
		ace_sys_autorotation_horizontal_gain = "1.0/75";
		ace_sys_autorotation_vertical_gain = "0.6/1.5";
		ace_sys_eject_eject = 0;
		ace_sys_eject_jump = 1;
		ace_sys_eject_side = 1;
		ace_sys_eject_weaponcheck = 1;
		ace_sys_repair_rearm = 0;
		ace_sys_repair_refuel = 0;
		ace_sys_repair_repair = 0;
		ace_sys_repair_spare_tyres = 0;
		ace_sys_repair_threshold = 0.8;
		ace_sys_repair_threshold_refuel = 1;
		ace_sys_repair_time = 900;
		ace_sys_tracking_marker = "b_air";
		ace_tankfcs_enabled = 0;
		ace_weight = 5224;		
		accuracy = 0.5;
		armor = 20;
		cargoAction[] = {"MH60_Gunner", "UH60_Cargo02", "UH60_Cargo02", "MH60_Gunner", "UH60_Pilot", "BMP2_Cargo04", "BMP2_Cargo04"};
		cargocompartments[] = {2};
		castDriverShadow = 0;
		castCargoShadow = 0;
		crew = "US_Soldier_Pilot_EP1";
		cost = 10000000;
		damageResistance = 0.004;
		destrtype = "DestructWreck";
		displayname = "UH-60L Medevac";
		driverCompartments = 1;
		driverInAction = "UH60_Pilot";
		driverAction = "UH60_Pilot";
		dustEffect = "HeliDust";
		enablemanualfire = 0;
		faction = BIS_US;		
		forceHideDriver = 0;
		Icon = "\uh60\ico\icomap_uh60l_ca.paa";
		incommingMisslieDetectionSystem = 0;
		initCargoAngleY = 10;
		irscanground = 1;
		irscanrangemax = 10000;
		irscanrangemin = 500;
		irscantoeyefactor = 2;
		irtarget = 1;
		laserscanner = 1;
		lasertarget = 0;
		lockDetectionSystem = 8 + 4;
		maxspeed = 295;
		memoryPointCM[] = {"flare_launcher1", "flare_launcher2"};
		memoryPointCMDir[] = {"flare_launcher1_dir", "flare_launcher2_dir"};
		memoryPointLMissile = "Missile_1";
		memoryPointRMissile = "Missile_2";
		memorypointsgetincargo = "pos cargo";
		memorypointsgetincargodir = "pos cargo dir";
		memorypointsgetindriver = "pos driver";
		memorypointsgetindriverdir = "pos driver dir";
		memorypointsgetingunner = "pos cargo";
		memorypointsgetingunnerdir = "pos cargo dir";
		namesound = "veh_Helicopter";
		radarType = 0;
		mainRotorSpeed = 1.2;
		magazines[] = {"TU_20Rnd_Empty", "60Rnd_CMFlareMagazine"};
		mapSize = 17;
		maxCargoAngleY = 120;
		model = "\uh60\tu_uh60_med_nf";
		minCargoAngleY = -60;
		picture = "\uh60\ico\uh_60q_ca.paa";
		scope = public;
		side = TWest;
		supplyRadius = 2;
		threat[] = {0.8, 0.1, 0.3};
		transportMaxMagazines = 9999;
		transportMaxWeapons = 9999;
		transportSoldier = 7;
		type = 2;
		typicalCargo[] = {"SoldierWPilot", "SoldierWPilot", "SoldierWAT", "SoldierWAT"};
		waterEffect = "HeliWater";
		weapons[] = {"CMFlareLauncher"};
		
		class MarkerLights {
			class RedStill {
				name = "cerveny pozicni";
				color[] = {0.2, 0.02, 0.02, 1};
				ambient[] = {0.3, 0.03, 0.03, 1};
				brightness = 0.005;
				blinking = false;
			};
			
			class BlueStill {
				name = "siniy pozicni";
				color[] = {0.02, 0.1, 0.2, 1};
				ambient[] = {0.03, 0.15, 0.3, 1};
				brightness = 0.005;
				blinking = false;
			};
			
			class WhiteStill {
				name = "bily pozicni";
				color[] = {0.2, 0.2, 0.2, 1};
				ambient[] = {0.03, 0.03, 0.03, 1};
				brightness = 0.005;
				blinking = false;
			};
			
			class WhiteBlinking {
				name = "bily pozicni blik";
				color[] = {1.0, 1.0, 1.0, 1};
				ambient[] = {0.2, 0.2, 0.2, 1};
				brightness = 0.01;
				blinking = true;
			};
			
			class RedBlinking {
				name = "cerveny pozicni blik";
				color[] = {1.0, 0.05, 0.05, 1};
				ambient[] = {0.2, 0.02, 0.02, 1};
				brightness = 0.01;
				blinking = true;
			};
		};
		
		class HitPoints {
			class HitHull {
				armor = 0.25;
				material = 51;
				name = "NEtrup";
				visual = "trup";
				passThrough = true;
			};
			
			class HitEngine {
				armor = 0.15;
				material = 51;
				name = "motor";
				visual = "motor";
				passThrough = true;
			};
			
			class HitAvionics {
				armor = 0.15;
				material = 51;
				name = "elektronika";
				visual = "elektronika";
				passThrough = true;
			};
			
			class HitVRotor {
				armor = 0.25;
				material = 51;
				name = "mala vrtule";
				visual = "mala vrtule staticka";
				passThrough = false;
			};
			
			class HitHRotor {
				armor = 0.2;
				material = 51;
				name = "velka vrtule";
				visual = "velka vrtule staticka";
				passThrough = false;
			};
			class HitMissiles {
				armor = 0.1;
				material = 51;
				name = "";
				passthrough = 0.5;
				visual = "";
			};
			class HitRGlass {
				armor = 0.1;
				convexcomponent = "sklo predni P";
				material = 51;
				name = "sklo predni P";
				passthrough = 0;
				visual = "sklo predni P";
			};
			class HitLGlass {
				armor = 0.1;
				convexcomponent = "sklo predni L";
				material = 51;
				name = "sklo predni L";
				passthrough = 0;
				visual = "sklo predni L";
			};
		};
				
		class Library {
			libTextDesc = $STR_POPIS;
		};
		
		class Damage {
			tex[] = {};
			mat[] = {"uh60\t\glasses.rvmat", "uh60\t\glasses_damage.rvmat", "uh60\t\glasses_damage.rvmat", "uh60\t\uh60l01_504.rvmat", "uh60\t\uh60l01_damage.rvmat", "uh60\t\uh60l01_destruct.rvmat", "uh60\t\uh60q02.rvmat", "uh60\t\uh60q02_damage.rvmat", "uh60\t\uh60q02_destruct.rvmat", "uh60\t\uh60q03.rvmat", "uh60\t\uh60q03_damage.rvmat", "uh60\t\uh60q03_destruct.rvmat", "uh60\t\uh60l04_504.rvmat", "uh60\t\uh60l04_damage.rvmat", "uh60\t\uh60l04_destruct.rvmat", "uh60\t\uh60l05_504.rvmat", "uh60\t\uh60l05_damage.rvmat", "uh60\t\uh60l05_destruct.rvmat", "uh60\t\rotorQ.rvmat", "uh60\t\rotorQ_damage.rvmat", "uh60\t\rotorQ_destruct.rvmat", "uh60\t\akabine.rvmat", "uh60\t\akabine_damage.rvmat", "uh60\t\akabine_destruct.rvmat", "uh60\t\intA_1.rvmat", "uh60\t\intA_1_damage.rvmat", "uh60\t\intA_1_destruct.rvmat", "uh60\t\intA_2.rvmat", "uh60\t\intA_2_damage.rvmat", "uh60\t\intA_2_destruct.rvmat", "uh60\t\intA3.rvmat", "uh60\t\intA3_damage.rvmat", "uh60\t\intA3_destruct.rvmat", "uh60\t\upperpanel.rvmat", "uh60\t\upperpanel.rvmat", "uh60\t\upperpanel_destruct.rvmat", "uh60\t\panel2A.rvmat", "uh60\t\panel2A.rvmat", "uh60\t\panel2A_destruct.rvmat", "uh60\t\panel3A.rvmat", "uh60\t\panel3A.rvmat", "uh60\t\panel3A_destruct.rvmat", "uh60\t\modern_seat.rvmat", "uh60\t\modern_seat.rvmat", "uh60\t\modern_seat_destruct.rvmat", "uh60\t\panelA_low.rvmat", "uh60\t\panelA_low.rvmat", "uh60\t\panelA_low_destruct.rvmat", "uh60\t\flirQ.rvmat", "uh60\t\flirQ_damage.rvmat", "uh60\t\flirQ_destruct.rvmat"};
		};
		
		class Eventhandlers {
			init = "_this execVM ""uh60\scripts\init.sqf"";";
		};
		
		class Turrets {};
		
		class AnimationSources {
			class TiltBlade_1 {
				source = "user";
				animPeriod = 0;
				initPhase = 0.3;
			};
			
			class TiltBlade_2 {
				source = "user";
				animPeriod = 0;
				initPhase = 0.3;
			};
			
			class TiltBlade_3 {
				source = "user";
				animPeriod = 0;
				initPhase = 0.3;
			};
			
			class TiltBlade_4 {
				source = "user";
				animPeriod = 0;
				initPhase = 0.3;
			};
			
			class TiltTailBlade_1 {
				source = "user";
				animPeriod = 0;
				initPhase = 0.3;
			};
			
			class TiltTailBlade_2 {
				source = "user";
				animPeriod = 0;
				initPhase = 0.3;
			};
			
			class TiltTailBlade_3 {
				source = "user";
				animPeriod = 0;
				initPhase = 0.3;
			};
			
			class TiltTailBlade_4 {
				source = "user";
				animPeriod = 0;
				initPhase = 0.3;
			};
			
			class TiltTailRotor {
				source = "user";
				animPeriod = 0;
				initPhase = 0.3;
			};
			
			class MovePilotDoor {
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			
			class MoveCopilotDoor {
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			
			class MoveCargoDoor {
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			
			class MoveCargo2Door {
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			
			class formation_lights {
				source = "user";
				animPeriod = 0;
				initPhase = 1;
			};
			
			class tail_lights : formation_lights {};
		};
		
		class Reflectors {
			class Left {
				color[] = {0.8, 0.8, 1.0, 1.0};
				ambient[] = {0.07, 0.07, 0.07, 1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				brightness = 1.0;
			};
			
			class Right {
				color[] = {0.8, 0.8, 1.0, 1.0};
				ambient[] = {0.07, 0.07, 0.07, 1.0};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 1;
				brightness = 1.0;
			};
		};
		
		class UserActions {
			class FormationLightsOn {
				displayName = $STR_FORM_LIGHTS_ON;
				position = "pos driver";
				radius = 2;
				condition = "(this animationPhase ""formation_lights"" > 0.5) and (player == driver this)";
				statement = "this animate[""formation_lights"",0];this animate[""tail_lights"",0]";
				onlyforplayer = 0;
				showWindow = 0;
			};
			
			class FormationLightsOff : FormationLightsOn {
				displayName = $STR_FORM_LIGHTS_OFF;
				condition = "(this animationPhase ""formation_lights"" < 0.5) and (player == driver this)";
				statement = "this animate[""formation_lights"",1];this animate[""tail_lights"",1]";
			};
			
			class OpenCargoDoor {
				displayName = $STR_OPEN_RDOOR;
				displayNameDefault = "<img image='\uh60\ico\ui_action_cargodoor_ca.paa' size='1.8' shadow='false' />";
				position = "cargo_door_l_pos";
				radius = 2;
				condition = "this animationPhase ""MoveCargoDoor"" < 0.5";
				statement = "this animate[""MoveCargoDoor"",1]";
				onlyforplayer = 0;
				showWindow = 0;
			};
			
			class CloseCargoDoor {
				displayName = $STR_CLOSE_RDOOR;
				position = "cargo_door_l_pos";
				radius = 2;
				condition = "this animationPhase ""MoveCargoDoor"" > 0.5";
				statement = "this animate[""MoveCargoDoor"",0]";
				onlyforplayer = 0;
				showWindow = 0;
				displayNameDefault = "<img image='\uh60\ico\ui_action_cargodoor_ca.paa' size='1.8' shadow='false' />";
			};
			
			class OpenCargo2Door {
				displayName = $STR_OPEN_LDOOR;
				position = "cargo_door_r_pos";
				radius = 2;
				condition = "this animationPhase ""MoveCargo2Door"" < 0.5";
				statement = "this animate[""MoveCargo2Door"",1]";
				onlyforplayer = 0;
				showWindow = 0;
				displayNameDefault = "<img image='\uh60\ico\ui_action_cargodoor_ca.paa' size='1.8' shadow='false' />";
			};
			
			class CloseCargo2Door {
				displayName = $STR_CLOSE_LDOOR;
				position = "cargo_door_r_pos";
				radius = 2;
				condition = "this animationPhase ""MoveCargo2Door"" > 0.5";
				statement = "this animate[""MoveCargo2Door"",0]";
				onlyforplayer = 0;
				showWindow = 0;
				displayNameDefault = "<img image='\uh60\ico\ui_action_cargodoor_ca.paa' size='1.8' shadow='false' />";
			};
			
			class OpenCargoDoor1 {
				displayName = $STR_OPEN_RDOOR;
				position = "pos driver";
				radius = 2;
				condition = "(this animationPhase ""MoveCargoDoor"" < 0.5) and (player == driver this)";
				statement = "this animate[""MoveCargoDoor"",1]";
				onlyforplayer = 0;
				showWindow = 0;
				displayNameDefault = "<img image='\uh60\ico\ui_action_cargodoor_ca.paa' size='1.8' shadow='false' />";
			};
			
			class CloseCargoDoor1 {
				displayName = $STR_CLOSE_RDOOR;
				position = "pos driver";
				radius = 2;
				condition = "(this animationPhase ""MoveCargoDoor"" > 0.5) and (player == driver this)";
				statement = "this animate[""MoveCargoDoor"",0]";
				onlyforplayer = 0;
				showWindow = 0;
				displayNameDefault = "<img image='\uh60\ico\ui_action_cargodoor_ca.paa' size='1.8' shadow='false' />";
			};
			
			class OpenCargoDoor2 {
				displayName = $STR_OPEN_LDOOR;
				position = "pos driver";
				radius = 2;
				condition = "(this animationPhase ""MoveCargo2Door"" < 0.5) and (player == driver this)";
				statement = "this animate[""MoveCargo2Door"",1]";
				onlyforplayer = 0;
				showWindow = 0;
				displayNameDefault = "<img image='\uh60\ico\ui_action_cargodoor_ca.paa' size='1.8' shadow='false' />";
			};
			
			class CloseCargoDoor2 {
				displayName = $STR_CLOSE_LDOOR;
				position = "pos driver";
				radius = 2;
				condition = "(this animationPhase ""MoveCargo2Door"" > 0.5) and (player == driver this)";
				statement = "this animate[""MoveCargo2Door"",0]";
				onlyforplayer = 0;
				showWindow = 0;
				displayNameDefault = "<img image='\uh60\ico\ui_action_cargodoor_ca.paa' size='1.8' shadow='false' />";
			};
		};
	};
	
	class TU_UH60L_MED : ACE_UH60M {
		ace_air_fcs_enabled = 1;
		ace_camshake_enabled = 1;
		ace_canbecargo = 0;
		ace_canbeload = 1;
		ace_canfastrope = 1;
		ace_cangear = 0;
		ace_canlift = 1;
		ace_canloadfront = 0;
		ace_cargo_exposed = 0;
		ace_ejection_seat = "ParachuteC";
		ace_exposed = 0;
		ace_lademeister = 1;
		ace_maxload = 5886;
		ace_mfdclass = "ace_sys_mfd_AH64D_MFD_Dialog";
		ace_geolifterattachment[] = {{0, 2, -4.5}};
		ace_ropeattachment[] = {{-1.4, 2, -0.5}, {1.4, 2, -0.5}};
		ace_sys_air_rwr_type = "ACE_Default";
		ace_sys_autorotation_horizontal_gain = "1.0/75";
		ace_sys_autorotation_vertical_gain = "0.6/1.5";
		ace_sys_eject_eject = 0;
		ace_sys_eject_jump = 1;
		ace_sys_eject_side = 1;
		ace_sys_eject_weaponcheck = 1;
		ace_sys_repair_rearm = 0;
		ace_sys_repair_refuel = 0;
		ace_sys_repair_repair = 0;
		ace_sys_repair_spare_tyres = 0;
		ace_sys_repair_threshold = 0.8;
		ace_sys_repair_threshold_refuel = 1;
		ace_sys_repair_time = 900;
		ace_sys_tracking_marker = "b_air";
		ace_tankfcs_enabled = 0;
		ace_weight = 5224;		
		accuracy = 0.5;
		armor = 20;
		cargoAction[] = {"MH60_Gunner", "UH60_Cargo02", "UH60_Cargo02", "MH60_Gunner", "BMP2_Cargo04", "BMP2_Cargo04"};
		cargocompartments[] = {2};
		castDriverShadow = 0;
		castCargoShadow = 0;
		crew = "US_Soldier_Pilot_EP1";
		cost = 10000000;
		damageResistance = 0.004;
		destrtype = "DestructWreck";
		displayname = "UH-60L Medevac (FLIR)";
		driverCompartments = 1;
		driverInAction = "UH60_Pilot";
		driverAction = "UH60_Pilot";
		driveropticsmodel = "\ca\air_e\gunnerOptics_ah64";
		dustEffect = "HeliDust";
		enablemanualfire = 0;
		faction = BIS_US;		
		forceHideDriver = 0;
		Icon = "\uh60\ico\icomap_uh60l_ca.paa";
		incommingMisslieDetectionSystem = 0;
		initCargoAngleY = 10;
		irscanground = 1;
		irscanrangemax = 10000;
		irscanrangemin = 500;
		irscantoeyefactor = 2;
		irtarget = 1;
		laserscanner = 1;
		lasertarget = 0;
		lockDetectionSystem = 8 + 4;
		maxspeed = 295;
		memoryPointCM[] = {"flare_launcher1", "flare_launcher2"};
		memoryPointCMDir[] = {"flare_launcher1_dir", "flare_launcher2_dir"};
		memorypointdriveroptics = "gunnerview";
		memoryPointLMissile = "Missile_1";
		memoryPointRMissile = "Missile_2";
		memorypointsgetincargo = "pos cargo";
		memorypointsgetincargodir = "pos cargo dir";
		memorypointsgetindriver = "pos driver";
		memorypointsgetindriverdir = "pos driver dir";
		memorypointsgetingunner = "pos cargo";
		memorypointsgetingunnerdir = "pos cargo dir";
		namesound = "veh_Helicopter";
		radarType = 0;
		mainRotorSpeed = 1.2;
		magazines[] = {"TU_20Rnd_Empty", "60Rnd_CMFlareMagazine"};
		mapSize = 17;
		maxCargoAngleY = 120;
		model = "\uh60\tu_uh60_med";
		minCargoAngleY = -60;
		picture = "\uh60\ico\uh_60q_ca.paa";
		scope = public;
		side = TWest;
		supplyRadius = 2;
		threat[] = {0.8, 0.1, 0.3};
		transportMaxMagazines = 9999;
		transportMaxWeapons = 9999;
		transportSoldier = 6;
		type = 2;
		typicalCargo[] = {"SoldierWPilot", "SoldierWPilot", "SoldierWAT", "SoldierWAT"};
		waterEffect = "HeliWater";
		weapons[] = {"CMFlareLauncher"};
		
		class MarkerLights {
			class RedStill {
				name = "cerveny pozicni";
				color[] = {0.2, 0.02, 0.02, 1};
				ambient[] = {0.3, 0.03, 0.03, 1};
				brightness = 0.005;
				blinking = false;
			};
			
			class BlueStill {
				name = "siniy pozicni";
				color[] = {0.02, 0.1, 0.2, 1};
				ambient[] = {0.03, 0.15, 0.3, 1};
				brightness = 0.005;
				blinking = false;
			};
			
			class WhiteStill {
				name = "bily pozicni";
				color[] = {0.2, 0.2, 0.2, 1};
				ambient[] = {0.03, 0.03, 0.03, 1};
				brightness = 0.005;
				blinking = false;
			};
			
			class WhiteBlinking {
				name = "bily pozicni blik";
				color[] = {1.0, 1.0, 1.0, 1};
				ambient[] = {0.2, 0.2, 0.2, 1};
				brightness = 0.01;
				blinking = true;
			};
			
			class RedBlinking {
				name = "cerveny pozicni blik";
				color[] = {1.0, 0.05, 0.05, 1};
				ambient[] = {0.2, 0.02, 0.02, 1};
				brightness = 0.01;
				blinking = true;
			};
		};
		
		class HitPoints {
			class HitHull {
				armor = 0.25;
				material = 51;
				name = "NEtrup";
				visual = "trup";
				passThrough = true;
			};
			
			class HitEngine {
				armor = 0.15;
				material = 51;
				name = "motor";
				visual = "motor";
				passThrough = true;
			};
			
			class HitAvionics {
				armor = 0.15;
				material = 51;
				name = "elektronika";
				visual = "elektronika";
				passThrough = true;
			};
			
			class HitVRotor {
				armor = 0.25;
				material = 51;
				name = "mala vrtule";
				visual = "mala vrtule staticka";
				passThrough = false;
			};
			
			class HitHRotor {
				armor = 0.2;
				material = 51;
				name = "velka vrtule";
				visual = "velka vrtule staticka";
				passThrough = false;
			};
			class HitMissiles {
				armor = 0.1;
				material = 51;
				name = "";
				passthrough = 0.5;
				visual = "";
			};
			class HitRGlass {
				armor = 0.1;
				convexcomponent = "sklo predni P";
				material = 51;
				name = "sklo predni P";
				passthrough = 0;
				visual = "sklo predni P";
			};
			class HitLGlass {
				armor = 0.1;
				convexcomponent = "sklo predni L";
				material = 51;
				name = "sklo predni L";
				passthrough = 0;
				visual = "sklo predni L";
			};
		};
				
		class Library {
			libTextDesc = $STR_POPIS;
		};
		
		class Damage {
			tex[] = {};
			mat[] = {"uh60\t\glasses.rvmat", "uh60\t\glasses_damage.rvmat", "uh60\t\glasses_damage.rvmat", "uh60\t\uh60l01_504.rvmat", "uh60\t\uh60l01_damage.rvmat", "uh60\t\uh60l01_destruct.rvmat", "uh60\t\uh60q02.rvmat", "uh60\t\uh60q02_damage.rvmat", "uh60\t\uh60q02_destruct.rvmat", "uh60\t\uh60q03.rvmat", "uh60\t\uh60q03_damage.rvmat", "uh60\t\uh60q03_destruct.rvmat", "uh60\t\uh60l04_504.rvmat", "uh60\t\uh60l04_damage.rvmat", "uh60\t\uh60l04_destruct.rvmat", "uh60\t\uh60l05_504.rvmat", "uh60\t\uh60l05_damage.rvmat", "uh60\t\uh60l05_destruct.rvmat", "uh60\t\rotorQ.rvmat", "uh60\t\rotorQ_damage.rvmat", "uh60\t\rotorQ_destruct.rvmat", "uh60\t\akabine.rvmat", "uh60\t\akabine_damage.rvmat", "uh60\t\akabine_destruct.rvmat", "uh60\t\intA_1.rvmat", "uh60\t\intA_1_damage.rvmat", "uh60\t\intA_1_destruct.rvmat", "uh60\t\intA_2.rvmat", "uh60\t\intA_2_damage.rvmat", "uh60\t\intA_2_destruct.rvmat", "uh60\t\intA3.rvmat", "uh60\t\intA3_damage.rvmat", "uh60\t\intA3_destruct.rvmat", "uh60\t\upperpanel.rvmat", "uh60\t\upperpanel.rvmat", "uh60\t\upperpanel_destruct.rvmat", "uh60\t\panel2A.rvmat", "uh60\t\panel2A.rvmat", "uh60\t\panel2A_destruct.rvmat", "uh60\t\panel3A.rvmat", "uh60\t\panel3A.rvmat", "uh60\t\panel3A_destruct.rvmat", "uh60\t\modern_seat.rvmat", "uh60\t\modern_seat.rvmat", "uh60\t\modern_seat_destruct.rvmat", "uh60\t\panelA_low.rvmat", "uh60\t\panelA_low.rvmat", "uh60\t\panelA_low_destruct.rvmat", "uh60\t\flirQ.rvmat", "uh60\t\flirQ_damage.rvmat", "uh60\t\flirQ_destruct.rvmat"};
		};
		
		class Eventhandlers {
			init = "_this execVM ""uh60\scripts\init.sqf"";";
		};
		
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				animationSourceBody = "flir_base";
				animationSourceGun = "flir";
				body = "flir_base";
				castGunnerShadow = true;
				commanding = 1;
				gun = "flir";
				gunBeg = "gun";
				gunEnd = "gunnerview";
				gunnerAction = "UH60_Pilot";
				gunnerCompartments = 2;
				gunnerForceOptics = false;
				gunnerInAction = "UH60_Pilot";
				gunnerName = $STR_COPILOT;
				gunnerOpticsModel = "\ca\air_e\gunnerOptics_ah64";
				gunnerOpticsShowCursor = 0;
				initElev = 0;
				initTurn = 0;
				magazines[] = {"Laserbatteries"};
				maxElev = 10;
				maxTurn = 180;
				memoryPointGun = "gun";
				memoryPointGunnerOptics = "gunnerview";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";				
				minElev = -90;
				minTurn = -180;
				outGunnerMayFire = true;
				inGunnerMayFire = true;
				primaryGunner = 1;				
				soundservo[] = {"", 0.01, 1};
				stabilizedInAxes = "StabilizedInAxesBoth";
				startengine = 0;
				viewGunnerShadow = false;
				weapons[] = {"Laserdesignator_mounted"};
				
				lockWhenDriverOut = false;
				gunnerOutOpticsShowCursor = 0;				
				
				class ViewOptics {
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.42;
					minFov = 0.022;
					maxFov = 0.94;
				};
				class OpticsIn {
					class Wide {
						gunneropticsmodel = "\ca\air_e\gunnerOptics_ah64";
						initanglex = 0;
						initangley = 0;
						initfov = "0.33333/1";
						maxanglex = 30;
						maxangley = 100;
						maxfov = "0.33333/1";
						minanglex = -30;
						minangley = -100;
						minfov = "0.33333/1";
						opticsdisplayname = "W";
						thermalmode[] = {0, 1};
						visionmode[] = {"Normal", "TI"};
					};
					class Medium: Wide {
						gunneropticsmodel = "\ca\air_e\gunnerOptics_ah64";
						initfov = "0.33333/6";
						maxfov = "0.33333/6";
						minfov = "0.33333/6";
						opticsdisplayname = "M";
					};
					class Narrow: Wide {
						gunneropticsmodel = "\ca\air_e\gunnerOptics_ah64_3";
						initfov = "0.33333/18";
						maxfov = "0.33333/18";
						minfov = "0.33333/18";
						opticsdisplayname = "N";
					};
				};
				
				class OpticsOut {
					class Monocular {
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 1.1;
						minFov = 0.133;
						maxFov = 1.1;
						visionMode[] = {"Normal", NVG};
						gunnerOpticsModel = "";
						gunnerOpticsEffect[] = {};
					};
				};
			};
		};
				
		class ViewOptics {
			initanglex = 0;
			initangley = -3;
			initfov = 0.33333;
			maxanglex = 30;
			maxangley = 100;
			maxfov = 0.33333;
			minanglex = -30;
			minangley = -100;
			minfov = 0.33333;
			thermalmode[] = {0, 1};
			visionmode[] = {"Normal", "TI"};
		};
		
		class AnimationSources {
			class TiltBlade_1 {
				source = "user";
				animPeriod = 0;
				initPhase = 0.3;
			};
			
			class TiltBlade_2 {
				source = "user";
				animPeriod = 0;
				initPhase = 0.3;
			};
			
			class TiltBlade_3 {
				source = "user";
				animPeriod = 0;
				initPhase = 0.3;
			};
			
			class TiltBlade_4 {
				source = "user";
				animPeriod = 0;
				initPhase = 0.3;
			};
			
			class TiltTailBlade_1 {
				source = "user";
				animPeriod = 0;
				initPhase = 0.3;
			};
			
			class TiltTailBlade_2 {
				source = "user";
				animPeriod = 0;
				initPhase = 0.3;
			};
			
			class TiltTailBlade_3 {
				source = "user";
				animPeriod = 0;
				initPhase = 0.3;
			};
			
			class TiltTailBlade_4 {
				source = "user";
				animPeriod = 0;
				initPhase = 0.3;
			};
			
			class TiltTailRotor {
				source = "user";
				animPeriod = 0;
				initPhase = 0.3;
			};
			
			class MovePilotDoor {
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			
			class MoveCopilotDoor {
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			
			class MoveCargoDoor {
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			
			class MoveCargo2Door {
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			
			class formation_lights {
				source = "user";
				animPeriod = 0;
				initPhase = 1;
			};
			
			class tail_lights : formation_lights {};
		};
		
		class Reflectors {
			class Left {
				color[] = {0.8, 0.8, 1.0, 1.0};
				ambient[] = {0.07, 0.07, 0.07, 1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				brightness = 1.0;
			};
			
			class Right {
				color[] = {0.8, 0.8, 1.0, 1.0};
				ambient[] = {0.07, 0.07, 0.07, 1.0};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 1;
				brightness = 1.0;
			};
		};
		
		class UserActions {
			class FormationLightsOn {
				displayName = $STR_FORM_LIGHTS_ON;
				position = "pos driver";
				radius = 2;
				condition = "(this animationPhase ""formation_lights"" > 0.5) and (player == driver this)";
				statement = "this animate[""formation_lights"",0];this animate[""tail_lights"",0]";
				onlyforplayer = 0;
				showWindow = 0;
			};
			
			class FormationLightsOff : FormationLightsOn {
				displayName = $STR_FORM_LIGHTS_OFF;
				condition = "(this animationPhase ""formation_lights"" < 0.5) and (player == driver this)";
				statement = "this animate[""formation_lights"",1];this animate[""tail_lights"",1]";
			};
			
			class OpenCargoDoor {
				displayName = $STR_OPEN_RDOOR;
				displayNameDefault = "<img image='\uh60\ico\ui_action_cargodoor_ca.paa' size='1.8' shadow='false' />";
				position = "cargo_door_l_pos";
				radius = 2;
				condition = "this animationPhase ""MoveCargoDoor"" < 0.5";
				statement = "this animate[""MoveCargoDoor"",1]";
				onlyforplayer = 0;
				showWindow = 0;
			};
			
			class CloseCargoDoor {
				displayName = $STR_CLOSE_RDOOR;
				position = "cargo_door_l_pos";
				radius = 2;
				condition = "this animationPhase ""MoveCargoDoor"" > 0.5";
				statement = "this animate[""MoveCargoDoor"",0]";
				onlyforplayer = 0;
				showWindow = 0;
				displayNameDefault = "<img image='\uh60\ico\ui_action_cargodoor_ca.paa' size='1.8' shadow='false' />";
			};
			
			class OpenCargo2Door {
				displayName = $STR_OPEN_LDOOR;
				position = "cargo_door_r_pos";
				radius = 2;
				condition = "this animationPhase ""MoveCargo2Door"" < 0.5";
				statement = "this animate[""MoveCargo2Door"",1]";
				onlyforplayer = 0;
				showWindow = 0;
				displayNameDefault = "<img image='\uh60\ico\ui_action_cargodoor_ca.paa' size='1.8' shadow='false' />";
			};
			
			class CloseCargo2Door {
				displayName = $STR_CLOSE_LDOOR;
				position = "cargo_door_r_pos";
				radius = 2;
				condition = "this animationPhase ""MoveCargo2Door"" > 0.5";
				statement = "this animate[""MoveCargo2Door"",0]";
				onlyforplayer = 0;
				showWindow = 0;
				displayNameDefault = "<img image='\uh60\ico\ui_action_cargodoor_ca.paa' size='1.8' shadow='false' />";
			};
			
			class OpenCargoDoor1 {
				displayName = $STR_OPEN_RDOOR;
				position = "pos driver";
				radius = 2;
				condition = "(this animationPhase ""MoveCargoDoor"" < 0.5) and (player == driver this)";
				statement = "this animate[""MoveCargoDoor"",1]";
				onlyforplayer = 0;
				showWindow = 0;
				displayNameDefault = "<img image='\uh60\ico\ui_action_cargodoor_ca.paa' size='1.8' shadow='false' />";
			};
			
			class CloseCargoDoor1 {
				displayName = $STR_CLOSE_RDOOR;
				position = "pos driver";
				radius = 2;
				condition = "(this animationPhase ""MoveCargoDoor"" > 0.5) and (player == driver this)";
				statement = "this animate[""MoveCargoDoor"",0]";
				onlyforplayer = 0;
				showWindow = 0;
				displayNameDefault = "<img image='\uh60\ico\ui_action_cargodoor_ca.paa' size='1.8' shadow='false' />";
			};
			
			class OpenCargoDoor2 {
				displayName = $STR_OPEN_LDOOR;
				position = "pos driver";
				radius = 2;
				condition = "(this animationPhase ""MoveCargo2Door"" < 0.5) and (player == driver this)";
				statement = "this animate[""MoveCargo2Door"",1]";
				onlyforplayer = 0;
				showWindow = 0;
				displayNameDefault = "<img image='\uh60\ico\ui_action_cargodoor_ca.paa' size='1.8' shadow='false' />";
			};
			
			class CloseCargoDoor2 {
				displayName = $STR_CLOSE_LDOOR;
				position = "pos driver";
				radius = 2;
				condition = "(this animationPhase ""MoveCargo2Door"" > 0.5) and (player == driver this)";
				statement = "this animate[""MoveCargo2Door"",0]";
				onlyforplayer = 0;
				showWindow = 0;
				displayNameDefault = "<img image='\uh60\ico\ui_action_cargodoor_ca.paa' size='1.8' shadow='false' />";
			};
		};
	};
	
	class TU_MH60L : TU_UH60L_MED {
		enablemanualfire = 0;
		model = "\uh60\tu_mh60";
		displayname = "MH-60L Blackhawk";
		transportSoldier = 13;
		cargoAction[] = {"BRDM2_Cargo02", "BRDM2_Cargo02", "BRDM2_Cargo02", "BRDM2_Cargo02", "BRDM2_Cargo02", "BRDM2_Cargo02", "AAV_Cargo03", "Mutt_Cargo02", "Mutt_Cargo02", "AAV_Cargo03", "Mutt_Cargo02"};
		
		class Damage {
			tex[] = {};
			mat[] = {"uh60\t\glasses.rvmat", "uh60\t\glasses_damage.rvmat", "uh60\t\glasses_damage.rvmat", "uh60\t1\mh60l01.rvmat", "uh60\t1\mh60l01_damage.rvmat", "uh60\t1\mh60l01_destruct.rvmat", "uh60\t1\mh60l02.rvmat", "uh60\t1\mh60l02_damage.rvmat", "uh60\t1\mh60l02_destruct.rvmat", "uh60\t1\mh60l03.rvmat", "uh60\t1\mh60l03_damage.rvmat", "uh60\t1\mh60l03_destruct.rvmat", "uh60\t1\mh60l04.rvmat", "uh60\t1\mh60l04_damage.rvmat", "uh60\t1\mh60l04_destruct.rvmat", "uh60\t1\mh60l05.rvmat", "uh60\t1\mh60l05_damage.rvmat", "uh60\t1\mh60l05_destruct.rvmat", "uh60\t1\gloss.rvmat", "uh60\t1\gloss.rvmat", "uh60\t1\mh60l05_destruct.rvmat", "uh60\t1\rotorl.rvmat", "uh60\t1\rotorl_damage.rvmat", "uh60\t1\rotorl_destruct.rvmat", "uh60\t\akabine.rvmat", "uh60\t\akabine_damage.rvmat", "uh60\t\akabine_destruct.rvmat", "uh60\t1\intl_1.rvmat", "uh60\t1\intl_1_damage.rvmat", "uh60\t1\intl_1_destruct.rvmat", "uh60\t1\intl_2.rvmat", "uh60\t1\intl_2_damage.rvmat", "uh60\t1\intl_2_destruct.rvmat", "uh60\t\inta3.rvmat", "uh60\t\inta3_damage.rvmat", "uh60\t\inta3_destruct.rvmat", "uh60\t\lifepack10.rvmat", "uh60\t\lifepack10_damage.rvmat", "uh60\t\lifepack10_destruct.rvmat", "uh60\t\upperpanel.rvmat", "uh60\t\upperpanel.rvmat", "uh60\t\upperpanel_destruct.rvmat", "uh60\t\panel2Q.rvmat", "uh60\t\panel2Q.rvmat", "uh60\t\panel2Q_destruct.rvmat", "uh60\t\panel3A.rvmat", "uh60\t\panel3A.rvmat", "uh60\t\panel3A_destruct.rvmat", "uh60\t\modern_seat.rvmat", "uh60\t\modern_seat.rvmat", "uh60\t\modern_seat_destruct.rvmat", "uh60\t1\panell_low.rvmat", "uh60\t1\panell_low.rvmat", "uh60\t1\panell_low_destruct.rvmat", "uh60\t1\flirl.rvmat", "uh60\t1\flirl_damage.rvmat", "uh60\t1\flirl_destruct.rvmat"};
		};
		
		class Library {
			libTextDesc = $STR_POPIS_3;
		};
		
		class Turrets : Turrets {	
		
			class MainTurret : MainTurret {
				commanding = 2;
			};
			
			class RightTurret : NewTurret {
				ace_lademeister = 1;
				ace_viewport = 90;
				animationSourceBody = "otocvez";
				animationSourceGun = "otochlaven";
				animationSourceHatch = "";
				body = "otocvez";
				castGunnerShadow = true;
				commanding = -1;
				gun = "otochlaven";
				gunBeg = "mgun_beg_2";	// endpoint of the gun
				gunEnd = "mgun_end_2";	// chamber of the gun
				gunnerAction = "MH60_Gunner";
				gunnerCompartments = 2;
				gunnerForceOptics = false;
				gunnerInAction = "MH60_Gunner";
				gunnerName = $STR_POSITION_CREWCHIEF;
				gunnerOpticsModel = "\ca\weapons\optika_empty";
				gunnerOpticsShowCursor = 1;
				initElev = 0;
				initTurn = 0;
				magazines[] = {"2000Rnd_762x51_M134"};
				maxElev = 30;
				maxTurn = 183;
				memoryPointGun = "mgun_2";
				memoryPointGunnerOptics = "gunneroptic_2";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";				
				minElev = -60;
				minTurn = -7;
				outGunnerMayFire = true;
				proxyIndex = 3;
				primaryGunner = 1;
				selectionFireAnim = "zasleh";		
				soundservo[] = {"", 0.01, 1};
				stabilizedInAxes = "StabilizedInAxesNone";
				startengine = 0;
				viewGunnerShadow = false;				
				weapons[] = {M134};
				
				lockWhenDriverOut = false;
				gunnerOutOpticsShowCursor = 1;					
				
				class ViewGunner {
					initanglex = 5;
					initangley = 0;
					initfov = 0.7;
					maxanglex = 85;
					maxangley = 150;
					maxfov = 0.85;
					minanglex = -85;
					minangley = -150;
					minfov = 0.42;
				};
					
				class ViewOptics {
					initanglex = 0;
					initangley = 0;
					initfov = "0.33333+ 0.41667";
					maxanglex = 30;
					maxangley = 100;
					maxfov = "0.33333+ 0.41667";
					minanglex = -30;
					minangley = -100;
					minfov = 0.33333;
				};
			};
			
			class LeftGun : RightTurret {
				body = "otocvez_1";
				gun = "otochlaven_1";
				animationSourceBody = "otocvez_1";
				animationSourceGun = "otochlaven_1";
				animationSourceHatch = "";
				selectionFireAnim = "zasleh_2";
				proxyIndex = 2;
				gunnerName = $STR_POSITION_DOORGUNNER;
				commanding = -1;
				minTurn = -183;
				maxTurn = 7;
				weapons[] = {M134_2};
				magazines[] = {"2000Rnd_762x51_M134"};
				stabilizedInAxes = "StabilizedInAxesNone";
				gunBeg = "mgun_beg_1";	// endpoint of the gun
				gunEnd = "mgun_end_1";	// chamber of the gun
				primaryGunner = 0;
				memoryPointGun = "mgun_1";
				memoryPointGunnerOptics = "gunneroptic_1";
				gunnerCompartments = 2;
			};
		};
		
		class AnimationSources : AnimationSources {
			
			class TiltBlade_1 {
				source = "user";
				animPeriod = 0;
				initPhase = 0.3;
			};
			
			class TiltBlade_2 {
				source = "user";
				animPeriod = 0;
				initPhase = 0.3;
			};
			
			class TiltBlade_3 {
				source = "user";
				animPeriod = 0;
				initPhase = 0.3;
			};
			
			class TiltBlade_4 {
				source = "user";
				animPeriod = 0;
				initPhase = 0.3;
			};
			
			class TiltTailBlade_1 {
				source = "user";
				animPeriod = 0;
				initPhase = 0.3;
			};
			
			class TiltTailBlade_2 {
				source = "user";
				animPeriod = 0;
				initPhase = 0.3;
			};
			
			class TiltTailBlade_3 {
				source = "user";
				animPeriod = 0;
				initPhase = 0.3;
			};
			
			class TiltTailBlade_4 {
				source = "user";
				animPeriod = 0;
				initPhase = 0.3;
			};
			
			class TiltTailRotor {
				source = "user";
				animPeriod = 0;
				initPhase = 0.3;
			};
			
			class formation_lights {
				source = "user";
				animPeriod = 0;
				initPhase = 1;
			};
			
			class tail_lights : formation_lights {};
			
			class Gatling_1 {
				source = "revolving";
				weapon = M134;
			};
			
			class Gatling_2 {
				source = "revolving";
				weapon = M134_2;
			};
			
			class rope1hide {
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			
			class rope2hide {
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
		};
		
		class UserActions {
			
			class FormationLightsOn {
				displayName = $STR_FORM_LIGHTS_ON;
				position = "pos driver";
				radius = 2;
				condition = "(this animationPhase ""formation_lights"" > 0.5) and (player == driver this)";
				statement = "this animate[""formation_lights"",0];this animate[""tail_lights"",0]";
				onlyforplayer = 0;
				showWindow = 0;
			};
			
			class FormationLightsOff : FormationLightsOn {
				displayName = $STR_FORM_LIGHTS_OFF;
				condition = "(this animationPhase ""formation_lights"" < 0.5) and (player == driver this)";
				statement = "this animate[""formation_lights"",1];this animate[""tail_lights"",1]";
			};
		};
	};

	class TU_UH60L_ESSS : ACE_UH60M {
		ace_camshake_enabled = 1;
		ace_canbecargo = 0;
		ace_canbeload = 1;
		ace_canfastrope = 1;
		ace_cangear = 0;
		ace_canlift = 1;
		ace_canloadfront = 0;
		ace_cargo_exposed = 0;
		ace_ejection_seat = "ParachuteC";
		ace_exposed = 0;
		ace_lademeister = 1;
		ace_maxload = 5886;
		ace_geolifterattachment[] = {{0, 2, -4.5}};
		ace_ropeattachment[] = {{-1.4, 2, -0.5}, {1.4, 2, -0.5}};
		ace_sys_air_rwr_type = "ACE_Default";
		ace_sys_autorotation_horizontal_gain = "1.0/75";
		ace_sys_autorotation_vertical_gain = "0.6/1.5";
		ace_sys_eject_eject = 0;
		ace_sys_eject_jump = 1;
		ace_sys_eject_side = 1;
		ace_sys_eject_weaponcheck = 1;
		ace_sys_repair_rearm = 0;
		ace_sys_repair_refuel = 0;
		ace_sys_repair_repair = 0;
		ace_sys_repair_spare_tyres = 0;
		ace_sys_repair_threshold = 0.8;
		ace_sys_repair_threshold_refuel = 1;
		ace_sys_repair_time = 900;
		ace_sys_tracking_marker = "b_air";
		ace_tankfcs_enabled = 0;
		ace_weight = 5224;		
		accuracy = 0.5;
		armor = 20;
		cargoAction[] = {"UH60_Cargo02", "UH60_Cargo02", "UH60_Cargo02", "UH60_Cargo02", "UH60_Cargo02", "UH60_Cargo02", "UH60_Cargo02", "UH60_Cargo02", "UH60_Cargo02", "UH60_Cargo02", "UH60_Cargo02", "MH60_Gunner", "MH60_Gunner", "UH60_Pilot"};
		cargocompartments[] = {2};
		castDriverShadow = 0;
		castCargoShadow = 0;
		crew = "USMC_Soldier_Pilot";
		cost = 10000000;
		damageResistance = 0.004;
		destrtype = "DestructWreck";
		displayname = "UH-60L Blackhawk (ESSS wings)";
		driverCompartments = 1;
		driverInAction = "UH60_Pilot";
		driverAction = "UH60_Pilot";
		dustEffect = "HeliDust";
		enablemanualfire = 0;
		enableSweep = false;
		faction = BIS_US;		
		forceHideDriver = 0;
		Icon = "\uh60\ico\icomap_uh60q_ca.paa";
		incommingMisslieDetectionSystem = 0;
		initCargoAngleY = 10;
		lockDetectionSystem = 8 + 4;
		mainRotorSpeed = 1.2;
		magazines[] = {"60Rnd_CMFlareMagazine"};
		mapSize = 17;
		maxCargoAngleY = 120;
		maxspeed = 295;
		memoryPointCM[] = {"flare_launcher1", "flare_launcher2"};
		memoryPointCMDir[] = {"flare_launcher1_dir", "flare_launcher2_dir"};
		memoryPointLMissile = "missile_1";
		memoryPointRMissile = "missile_2";
		memorypointsgetincargo = "pos cargo";
		memorypointsgetincargodir = "pos cargo dir";
		memorypointsgetindriver = "pos driver";
		memorypointsgetindriverdir = "pos driver dir";
		memorypointsgetingunner = "pos cargo";
		memorypointsgetingunnerdir = "pos cargo dir";
		minCargoAngleY = -60;
		model = "\uh60\tu_uh60_ess";
		namesound = "veh_Helicopter";
		radarType = 0;
		picture = "\uh60\ico\uh_60q_ca.paa";
		scope = public;
		side = TWest;
		supplyRadius = 2;
		threat[] = {0.8, 0.1, 0.3};
		transportMaxMagazines = 9999;
		transportMaxWeapons = 9999;
		transportSoldier = 14;
		type = 2;
		typicalCargo[] = {"SoldierWPilot", "SoldierWPilot", "SoldierWAT", "SoldierWAT"};
		waterEffect = "HeliWater";
		weapons[] = {"CMFlareLauncher"};
		
		PilotCanSee = "CanSeeOptics+CanSeeEar+CanSeeCompass";
		gunnerCanSee = "CanSeeOptics+CanSeeEar+CanSeeCompass";
		
		class MarkerLights {
			class RedStill {
				name = "cerveny pozicni";
				color[] = {0.2, 0.02, 0.02, 1};
				ambient[] = {0.3, 0.03, 0.03, 1};
				brightness = 0.005;
				blinking = false;
			};
			
			class BlueStill {
				name = "siniy pozicni";
				color[] = {0.02, 0.1, 0.2, 1};
				ambient[] = {0.03, 0.15, 0.3, 1};
				brightness = 0.005;
				blinking = false;
			};
			
			class WhiteStill {
				name = "bily pozicni";
				color[] = {0.2, 0.2, 0.2, 1};
				ambient[] = {0.03, 0.03, 0.03, 1};
				brightness = 0.005;
				blinking = false;
			};
			
			class WhiteBlinking {
				name = "bily pozicni blik";
				color[] = {1.0, 1.0, 1.0, 1};
				ambient[] = {0.2, 0.2, 0.2, 1};
				brightness = 0.01;
				blinking = true;
			};
			
			class RedBlinking {
				name = "cerveny pozicni blik";
				color[] = {1.0, 0.05, 0.05, 1};
				ambient[] = {0.2, 0.02, 0.02, 1};
				brightness = 0.01;
				blinking = true;
			};
		};
		
		class HitPoints {
			class HitHull {
				armor = 0.25;
				material = 51;
				name = "NEtrup";
				visual = "trup";
				passThrough = true;
			};
			
			class HitEngine {
				armor = 0.15;
				material = 51;
				name = "motor";
				visual = "motor";
				passThrough = true;
			};
			
			class HitAvionics {
				armor = 0.15;
				material = 51;
				name = "elektronika";
				visual = "elektronika";
				passThrough = true;
			};
			
			class HitVRotor {
				armor = 0.25;
				material = 51;
				name = "mala vrtule";
				visual = "mala vrtule staticka";
				passThrough = false;
			};
			
			class HitHRotor {
				armor = 0.2;
				material = 51;
				name = "velka vrtule";
				visual = "velka vrtule staticka";
				passThrough = false;
			};
			class HitMissiles {
				armor = 0.1;
				material = 51;
				name = "";
				passthrough = 0.5;
				visual = "";
			};
			class HitRGlass {
				armor = 0.1;
				convexcomponent = "sklo predni P";
				material = 51;
				name = "sklo predni P";
				passthrough = 0;
				visual = "sklo predni P";
			};
			class HitLGlass {
				armor = 0.1;
				convexcomponent = "sklo predni L";
				material = 51;
				name = "sklo predni L";
				passthrough = 0;
				visual = "sklo predni L";
			};
		};
				
		class Library {
			libTextDesc = $STR_POPIS;
		};
		
		class Damage {
			tex[] = {};
			mat[] = {"uh60\t\glasses.rvmat", "uh60\t\glasses_damage.rvmat", "uh60\t\glasses_damage.rvmat", "uh60\t\uh60l01.rvmat", "uh60\t\uh60l01_damage.rvmat", "uh60\t\uh60l01_destruct.rvmat", "uh60\t\uh60q02.rvmat", "uh60\t\uh60q02_damage.rvmat", "uh60\t\uh60q02_destruct.rvmat", "uh60\t\uh60q03.rvmat", "uh60\t\uh60q03_damage.rvmat", "uh60\t\uh60q03_destruct.rvmat", "uh60\t\uh60l04.rvmat", "uh60\t\uh60l04_damage.rvmat", "uh60\t\uh60l04_destruct.rvmat", "uh60\t\uh60l05.rvmat", "uh60\t\uh60l05_damage.rvmat", "uh60\t\uh60l05_destruct.rvmat", "uh60\t\rotorQ.rvmat", "uh60\t\rotorQ_damage.rvmat", "uh60\t\rotorQ_destruct.rvmat", "uh60\t\akabine.rvmat", "uh60\t\akabine_damage.rvmat", "uh60\t\akabine_destruct.rvmat", "uh60\t\intA_1.rvmat", "uh60\t\intA_1_damage.rvmat", "uh60\t\intA_1_destruct.rvmat", "uh60\t\intA_2.rvmat", "uh60\t\intA_2_damage.rvmat", "uh60\t\intA_2_destruct.rvmat", "uh60\t\intA3.rvmat", "uh60\t\intA3_damage.rvmat", "uh60\t\intA3_destruct.rvmat", "uh60\t\upperpanel.rvmat", "uh60\t\upperpanel.rvmat", "uh60\t\upperpanel_destruct.rvmat", "uh60\t\panel2A.rvmat", "uh60\t\panel2A.rvmat", "uh60\t\panel2A_destruct.rvmat", "uh60\t\panel3A.rvmat", "uh60\t\panel3A.rvmat", "uh60\t\panel3A_destruct.rvmat", "uh60\t\modern_seat.rvmat", "uh60\t\modern_seat.rvmat", "uh60\t\modern_seat_destruct.rvmat", "uh60\t\panelA_low.rvmat", "uh60\t\panelA_low.rvmat", "uh60\t\panelA_low_destruct.rvmat"};
		};
		
		class Eventhandlers {
			init = "_this execVM ""uh60\scripts\init.sqf"";";
		};
				
		class Turrets {};
		
		class AnimationSources {
			class TiltBlade_1 {
				source = "user";
				animPeriod = 0;
				initPhase = 0.3;
			};
			
			class TiltBlade_2 {
				source = "user";
				animPeriod = 0;
				initPhase = 0.3;
			};
			
			class TiltBlade_3 {
				source = "user";
				animPeriod = 0;
				initPhase = 0.3;
			};
			
			class TiltBlade_4 {
				source = "user";
				animPeriod = 0;
				initPhase = 0.3;
			};
			
			class TiltTailBlade_1 {
				source = "user";
				animPeriod = 0;
				initPhase = 0.3;
			};
			
			class TiltTailBlade_2 {
				source = "user";
				animPeriod = 0;
				initPhase = 0.3;
			};
			
			class TiltTailBlade_3 {
				source = "user";
				animPeriod = 0;
				initPhase = 0.3;
			};
			
			class TiltTailBlade_4 {
				source = "user";
				animPeriod = 0;
				initPhase = 0.3;
			};
			
			class TiltTailRotor {
				source = "user";
				animPeriod = 0;
				initPhase = 0.3;
			};
			
			class MovePilotDoor {
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			
			class MoveCopilotDoor {
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			
			class MoveCargoDoor {
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			
			class MoveCargo2Door {
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			
			class formation_lights {
				source = "user";
				animPeriod = 0;
				initPhase = 1;
			};
			
			class tail_lights : formation_lights {};
		};
		
		class Reflectors {
			class Left {
				color[] = {0.8, 0.8, 1.0, 1.0};
				ambient[] = {0.07, 0.07, 0.07, 1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				brightness = 1.0;
			};
			
			class Right {
				color[] = {0.8, 0.8, 1.0, 1.0};
				ambient[] = {0.07, 0.07, 0.07, 1.0};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 1;
				brightness = 1.0;
			};
		};
		
		class UserActions {
			class FormationLightsOn {
				displayName = $STR_FORM_LIGHTS_ON;
				position = "pos driver";
				radius = 2;
				condition = "(this animationPhase ""formation_lights"" > 0.5) and (player == driver this)";
				statement = "this animate[""formation_lights"",0];this animate[""tail_lights"",0]";
				onlyforplayer = 0;
				showWindow = 0;
			};
			
			class FormationLightsOff : FormationLightsOn {
				displayName = $STR_FORM_LIGHTS_OFF;
				condition = "(this animationPhase ""formation_lights"" < 0.5) and (player == driver this)";
				statement = "this animate[""formation_lights"",1];this animate[""tail_lights"",1]";
			};
			
			class OpenCargoDoor {
				displayName = $STR_OPEN_RDOOR;
				displayNameDefault = "<img image='\uh60\ico\ui_action_cargodoor_ca.paa' size='1.8' shadow='false' />";
				position = "cargo_door_l_pos";
				radius = 2;
				condition = "this animationPhase ""MoveCargoDoor"" < 0.5";
				statement = "this animate[""MoveCargoDoor"",1]";
				onlyforplayer = 0;
				showWindow = 0;
			};
			
			class CloseCargoDoor {
				displayName = $STR_CLOSE_RDOOR;
				position = "cargo_door_l_pos";
				radius = 2;
				condition = "this animationPhase ""MoveCargoDoor"" > 0.5";
				statement = "this animate[""MoveCargoDoor"",0]";
				onlyforplayer = 0;
				showWindow = 0;
				displayNameDefault = "<img image='\uh60\ico\ui_action_cargodoor_ca.paa' size='1.8' shadow='false' />";
			};
			
			class OpenCargo2Door {
				displayName = $STR_OPEN_LDOOR;
				position = "cargo_door_r_pos";
				radius = 2;
				condition = "this animationPhase ""MoveCargo2Door"" < 0.5";
				statement = "this animate[""MoveCargo2Door"",1]";
				onlyforplayer = 0;
				showWindow = 0;
				displayNameDefault = "<img image='\uh60\ico\ui_action_cargodoor_ca.paa' size='1.8' shadow='false' />";
			};
			
			class CloseCargo2Door {
				displayName = $STR_CLOSE_LDOOR;
				position = "cargo_door_r_pos";
				radius = 2;
				condition = "this animationPhase ""MoveCargo2Door"" > 0.5";
				statement = "this animate[""MoveCargo2Door"",0]";
				onlyforplayer = 0;
				showWindow = 0;
				displayNameDefault = "<img image='\uh60\ico\ui_action_cargodoor_ca.paa' size='1.8' shadow='false' />";
			};
			
			class OpenCargoDoor1 {
				displayName = $STR_OPEN_RDOOR;
				position = "pos driver";
				radius = 2;
				condition = "(this animationPhase ""MoveCargoDoor"" < 0.5) and (player == driver this)";
				statement = "this animate[""MoveCargoDoor"",1]";
				onlyforplayer = 0;
				showWindow = 0;
				displayNameDefault = "<img image='\uh60\ico\ui_action_cargodoor_ca.paa' size='1.8' shadow='false' />";
			};
			
			class CloseCargoDoor1 {
				displayName = $STR_CLOSE_RDOOR;
				position = "pos driver";
				radius = 2;
				condition = "(this animationPhase ""MoveCargoDoor"" > 0.5) and (player == driver this)";
				statement = "this animate[""MoveCargoDoor"",0]";
				onlyforplayer = 0;
				showWindow = 0;
				displayNameDefault = "<img image='\uh60\ico\ui_action_cargodoor_ca.paa' size='1.8' shadow='false' />";
			};
			
			class OpenCargoDoor2 {
				displayName = $STR_OPEN_LDOOR;
				position = "pos driver";
				radius = 2;
				condition = "(this animationPhase ""MoveCargo2Door"" < 0.5) and (player == driver this)";
				statement = "this animate[""MoveCargo2Door"",1]";
				onlyforplayer = 0;
				showWindow = 0;
				displayNameDefault = "<img image='\uh60\ico\ui_action_cargodoor_ca.paa' size='1.8' shadow='false' />";
			};
			
			class CloseCargoDoor2 {
				displayName = $STR_CLOSE_LDOOR;
				position = "pos driver";
				radius = 2;
				condition = "(this animationPhase ""MoveCargo2Door"" > 0.5) and (player == driver this)";
				statement = "this animate[""MoveCargo2Door"",0]";
				onlyforplayer = 0;
				showWindow = 0;
				displayNameDefault = "<img image='\uh60\ico\ui_action_cargodoor_ca.paa' size='1.8' shadow='false' />";
			};
		};
	};
	
	class TU_UH60L_ESSS_FLIR : ACE_UH60M {
		ace_air_fcs_enabled = 1;
		ace_camshake_enabled = 1;
		ace_canbecargo = 0;
		ace_canbeload = 1;
		ace_canfastrope = 1;
		ace_cangear = 0;
		ace_canlift = 1;
		ace_canloadfront = 0;
		ace_cargo_exposed = 0;
		ace_ejection_seat = "ParachuteC";
		ace_exposed = 0;
		ace_lademeister = 1;
		ace_maxload = 5886;
		ace_mfdclass = "ace_sys_mfd_AH64D_MFD_Dialog";
		ace_geolifterattachment[] = {{0, 2, -4.5}};
		ace_ropeattachment[] = {{-1.4, 2, -0.5}, {1.4, 2, -0.5}};
		ace_sys_air_rwr_type = "ACE_Default";
		ace_sys_autorotation_horizontal_gain = "1.0/75";
		ace_sys_autorotation_vertical_gain = "0.6/1.5";
		ace_sys_eject_eject = 0;
		ace_sys_eject_jump = 1;
		ace_sys_eject_side = 1;
		ace_sys_eject_weaponcheck = 1;
		ace_sys_repair_rearm = 0;
		ace_sys_repair_refuel = 0;
		ace_sys_repair_repair = 0;
		ace_sys_repair_spare_tyres = 0;
		ace_sys_repair_threshold = 0.8;
		ace_sys_repair_threshold_refuel = 1;
		ace_sys_repair_time = 900;
		ace_sys_tracking_marker = "b_air";
		ace_sys_turret_indicator_enable = 1;
		ace_tankfcs_enabled = 0;
		ace_weight = 5224;		
		accuracy = 0.5;
		armor = 20;
		cargoAction[] = {"UH60_Cargo02", "UH60_Cargo02", "UH60_Cargo02", "UH60_Cargo02", "UH60_Cargo02", "UH60_Cargo02", "UH60_Cargo02", "UH60_Cargo02", "UH60_Cargo02", "UH60_Cargo02", "UH60_Cargo02", "MH60_Gunner", "MH60_Gunner"};
		cargocompartments[] = {2};
		castDriverShadow = 0;
		castCargoShadow = 0;
		crew = "USMC_Soldier_Pilot";
		cost = 10000000;
		damageResistance = 0.004;
		destrtype = "DestructWreck";
		displayname = "UH-60L Blackhawk (ESSS wings/FLIR)";
		driverCompartments = 1;
		driverInAction = "UH60_Pilot";
		driverAction = "UH60_Pilot";
		driveropticsmodel = "\ca\air_e\gunnerOptics_ah64";
		dustEffect = "HeliDust";
		enablemanualfire = 0;
		enableSweep = false;
		faction = BIS_US;		
		forceHideDriver = 0;
		Icon = "\uh60\ico\icomap_uh60q_ca.paa";
		incommingMisslieDetectionSystem = 0;
		initCargoAngleY = 10;
		lockDetectionSystem = 8 + 4;
		mainRotorSpeed = 1.2;
		magazines[] = {"60Rnd_CMFlareMagazine"};
		mapSize = 17;
		maxCargoAngleY = 120;
		maxspeed = 295;
		memoryPointCM[] = {"flare_launcher1", "flare_launcher2"};
		memoryPointCMDir[] = {"flare_launcher1_dir", "flare_launcher2_dir"};
		memorypointdriveroptics = "gunnerview";
		memoryPointLMissile = "missile_1";
		memoryPointRMissile = "missile_2";
		memorypointsgetincargo = "pos cargo";
		memorypointsgetincargodir = "pos cargo dir";
		memorypointsgetindriver = "pos driver";
		memorypointsgetindriverdir = "pos driver dir";
		memorypointsgetingunner = "pos cargo";
		memorypointsgetingunnerdir = "pos cargo dir";
		minCargoAngleY = -60;
		model = "\uh60\tu_uh60_ess_flir";
		namesound = "veh_Helicopter";
		radarType = 0;
		picture = "\uh60\ico\uh_60q_ca.paa";
		scope = public;
		side = TWest;
		supplyRadius = 2;
		threat[] = {0.8, 0.1, 0.3};
		transportMaxMagazines = 9999;
		transportMaxWeapons = 9999;
		transportSoldier = 13;
		type = 2;
		typicalCargo[] = {"SoldierWPilot", "SoldierWPilot", "SoldierWAT", "SoldierWAT"};
		waterEffect = "HeliWater";
		weapons[] = {"CMFlareLauncher"};
		
		PilotCanSee = "CanSeeOptics+CanSeeEar+CanSeeCompass";
		gunnerCanSee = "CanSeeOptics+CanSeeEar+CanSeeCompass";
		
		class MarkerLights {
			class RedStill {
				name = "cerveny pozicni";
				color[] = {0.2, 0.02, 0.02, 1};
				ambient[] = {0.3, 0.03, 0.03, 1};
				brightness = 0.005;
				blinking = false;
			};
			
			class BlueStill {
				name = "siniy pozicni";
				color[] = {0.02, 0.1, 0.2, 1};
				ambient[] = {0.03, 0.15, 0.3, 1};
				brightness = 0.005;
				blinking = false;
			};
			
			class WhiteStill {
				name = "bily pozicni";
				color[] = {0.2, 0.2, 0.2, 1};
				ambient[] = {0.03, 0.03, 0.03, 1};
				brightness = 0.005;
				blinking = false;
			};
			
			class WhiteBlinking {
				name = "bily pozicni blik";
				color[] = {1.0, 1.0, 1.0, 1};
				ambient[] = {0.2, 0.2, 0.2, 1};
				brightness = 0.01;
				blinking = true;
			};
			
			class RedBlinking {
				name = "cerveny pozicni blik";
				color[] = {1.0, 0.05, 0.05, 1};
				ambient[] = {0.2, 0.02, 0.02, 1};
				brightness = 0.01;
				blinking = true;
			};
		};
		
		class HitPoints {
			class HitHull {
				armor = 0.25;
				material = 51;
				name = "NEtrup";
				visual = "trup";
				passThrough = true;
			};
			
			class HitEngine {
				armor = 0.15;
				material = 51;
				name = "motor";
				visual = "motor";
				passThrough = true;
			};
			
			class HitAvionics {
				armor = 0.15;
				material = 51;
				name = "elektronika";
				visual = "elektronika";
				passThrough = true;
			};
			
			class HitVRotor {
				armor = 0.25;
				material = 51;
				name = "mala vrtule";
				visual = "mala vrtule staticka";
				passThrough = false;
			};
			
			class HitHRotor {
				armor = 0.2;
				material = 51;
				name = "velka vrtule";
				visual = "velka vrtule staticka";
				passThrough = false;
			};
			class HitMissiles {
				armor = 0.1;
				material = 51;
				name = "";
				passthrough = 0.5;
				visual = "";
			};
			class HitRGlass {
				armor = 0.1;
				convexcomponent = "sklo predni P";
				material = 51;
				name = "sklo predni P";
				passthrough = 0;
				visual = "sklo predni P";
			};
			class HitLGlass {
				armor = 0.1;
				convexcomponent = "sklo predni L";
				material = 51;
				name = "sklo predni L";
				passthrough = 0;
				visual = "sklo predni L";
			};
		};
				
		class Library {
			libTextDesc = $STR_POPIS;
		};
		
		class Damage {
			tex[] = {};
			mat[] = {"uh60\t\glasses.rvmat", "uh60\t\glasses_damage.rvmat", "uh60\t\glasses_damage.rvmat", "uh60\t\uh60l01.rvmat", "uh60\t\uh60l01_damage.rvmat", "uh60\t\uh60l01_destruct.rvmat", "uh60\t\uh60q02.rvmat", "uh60\t\uh60q02_damage.rvmat", "uh60\t\uh60q02_destruct.rvmat", "uh60\t\uh60q03.rvmat", "uh60\t\uh60q03_damage.rvmat", "uh60\t\uh60q03_destruct.rvmat", "uh60\t\uh60l04.rvmat", "uh60\t\uh60l04_damage.rvmat", "uh60\t\uh60l04_destruct.rvmat", "uh60\t\uh60l05.rvmat", "uh60\t\uh60l05_damage.rvmat", "uh60\t\uh60l05_destruct.rvmat", "uh60\t\rotorQ.rvmat", "uh60\t\rotorQ_damage.rvmat", "uh60\t\rotorQ_destruct.rvmat", "uh60\t\akabine.rvmat", "uh60\t\akabine_damage.rvmat", "uh60\t\akabine_destruct.rvmat", "uh60\t\intA_1.rvmat", "uh60\t\intA_1_damage.rvmat", "uh60\t\intA_1_destruct.rvmat", "uh60\t\intA_2.rvmat", "uh60\t\intA_2_damage.rvmat", "uh60\t\intA_2_destruct.rvmat", "uh60\t\intA3.rvmat", "uh60\t\intA3_damage.rvmat", "uh60\t\intA3_destruct.rvmat", "uh60\t\upperpanel.rvmat", "uh60\t\upperpanel.rvmat", "uh60\t\upperpanel_destruct.rvmat", "uh60\t\panel2A.rvmat", "uh60\t\panel2A.rvmat", "uh60\t\panel2A_destruct.rvmat", "uh60\t\panel3A.rvmat", "uh60\t\panel3A.rvmat", "uh60\t\panel3A_destruct.rvmat", "uh60\t\modern_seat.rvmat", "uh60\t\modern_seat.rvmat", "uh60\t\modern_seat_destruct.rvmat", "uh60\t\panelA_low.rvmat", "uh60\t\panelA_low.rvmat", "uh60\t\panelA_low_destruct.rvmat"};
		};
		
		class Eventhandlers {
			init = "_this execVM ""uh60\scripts\init.sqf"";";
		};
		
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				ace_sys_missileguidance_limits[] = {20, 20, 0, 0};
				ace_sys_missileguidance_limitson = 1;
				ace_sys_missileguidance_tracker = "ACE_SACLOS_Guidance";
				ace_sys_missileguidance_tracklimits[] = {30, 30};
				animationSourceBody = "flir_base";
				animationSourceGun = "flir";
				body = "flir_base";
				castGunnerShadow = true;
				commanding = 1;
				gun = "flir";
				gunBeg = "gun";
				gunEnd = "gunnerview";
				gunnerAction = "UH60_Pilot";
				gunnerCompartments = 2;
				gunnerForceOptics = false;
				gunnerInAction = "UH60_Pilot";
				gunnerName = $STR_COPILOT;
				gunnerOpticsModel = "\ca\air_e\gunnerOptics_ah64";
				gunnerOpticsShowCursor = 0;
				initElev = 0;
				initTurn = 0;
				magazines[] = {"ACE_SACLOS_Guidance"};
				maxElev = 10;
				maxTurn = 180;
				memoryPointGun = "gun";
				memoryPointGunnerOptics = "gunnerview";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";				
				minElev = -90;
				minTurn = -180;
				outGunnerMayFire = true;
				inGunnerMayFire = true;
				primaryGunner = 1;				
				soundservo[] = {"", 0.01, 1};
				stabilizedInAxes = "StabilizedInAxesBoth";
				startengine = 0;
				viewGunnerShadow = false;
				weapons[] = {"ACE_SACLOS_Guidance"};
				
				lockWhenDriverOut = false;
				gunnerOutOpticsShowCursor = 0;				
				
				class ViewOptics {
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.42;
					minFov = 0.022;
					maxFov = 0.94;
				};
				class OpticsIn {
					class Wide {
						gunneropticsmodel = "\ca\air_e\gunnerOptics_ah64";
						initanglex = 0;
						initangley = 0;
						initfov = "0.33333/1";
						maxanglex = 30;
						maxangley = 100;
						maxfov = "0.33333/1";
						minanglex = -30;
						minangley = -100;
						minfov = "0.33333/1";
						opticsdisplayname = "W";
						thermalmode[] = {0, 1};
						visionmode[] = {"Normal", "TI"};
					};
					class Medium: Wide {
						gunneropticsmodel = "\ca\air_e\gunnerOptics_ah64";
						initfov = "0.33333/6";
						maxfov = "0.33333/6";
						minfov = "0.33333/6";
						opticsdisplayname = "M";
					};
					class Narrow: Wide {
						gunneropticsmodel = "\ca\air_e\gunnerOptics_ah64_3";
						initfov = "0.33333/18";
						maxfov = "0.33333/18";
						minfov = "0.33333/18";
						opticsdisplayname = "N";
					};
				};
				
				class OpticsOut {
					class Monocular {
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 1.1;
						minFov = 0.133;
						maxFov = 1.1;
						visionMode[] = {"Normal", NVG};
						gunnerOpticsModel = "";
						gunnerOpticsEffect[] = {};
					};
				};
			};
		};
		
		class ViewOptics {
			initanglex = 0;
			initangley = -3;
			initfov = 0.33333;
			maxanglex = 30;
			maxangley = 100;
			maxfov = 0.33333;
			minanglex = -30;
			minangley = -100;
			minfov = 0.33333;
			thermalmode[] = {0, 1};
			visionmode[] = {"Normal", "TI"};
		};
		
		class AnimationSources {
			class TiltBlade_1 {
				source = "user";
				animPeriod = 0;
				initPhase = 0.3;
			};
			
			class TiltBlade_2 {
				source = "user";
				animPeriod = 0;
				initPhase = 0.3;
			};
			
			class TiltBlade_3 {
				source = "user";
				animPeriod = 0;
				initPhase = 0.3;
			};
			
			class TiltBlade_4 {
				source = "user";
				animPeriod = 0;
				initPhase = 0.3;
			};
			
			class TiltTailBlade_1 {
				source = "user";
				animPeriod = 0;
				initPhase = 0.3;
			};
			
			class TiltTailBlade_2 {
				source = "user";
				animPeriod = 0;
				initPhase = 0.3;
			};
			
			class TiltTailBlade_3 {
				source = "user";
				animPeriod = 0;
				initPhase = 0.3;
			};
			
			class TiltTailBlade_4 {
				source = "user";
				animPeriod = 0;
				initPhase = 0.3;
			};
			
			class TiltTailRotor {
				source = "user";
				animPeriod = 0;
				initPhase = 0.3;
			};
			
			class MovePilotDoor {
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			
			class MoveCopilotDoor {
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			
			class MoveCargoDoor {
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			
			class MoveCargo2Door {
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			
			class formation_lights {
				source = "user";
				animPeriod = 0;
				initPhase = 1;
			};
			
			class tail_lights : formation_lights {};
		};
		
		class Reflectors {
			class Left {
				color[] = {0.8, 0.8, 1.0, 1.0};
				ambient[] = {0.07, 0.07, 0.07, 1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				brightness = 1.0;
			};
			
			class Right {
				color[] = {0.8, 0.8, 1.0, 1.0};
				ambient[] = {0.07, 0.07, 0.07, 1.0};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 1;
				brightness = 1.0;
			};
		};
		
		class UserActions {
			class FormationLightsOn {
				displayName = $STR_FORM_LIGHTS_ON;
				position = "pos driver";
				radius = 2;
				condition = "(this animationPhase ""formation_lights"" > 0.5) and (player == driver this)";
				statement = "this animate[""formation_lights"",0];this animate[""tail_lights"",0]";
				onlyforplayer = 0;
				showWindow = 0;
			};
			
			class FormationLightsOff : FormationLightsOn {
				displayName = $STR_FORM_LIGHTS_OFF;
				condition = "(this animationPhase ""formation_lights"" < 0.5) and (player == driver this)";
				statement = "this animate[""formation_lights"",1];this animate[""tail_lights"",1]";
			};
			
			class OpenCargoDoor {
				displayName = $STR_OPEN_RDOOR;
				displayNameDefault = "<img image='\uh60\ico\ui_action_cargodoor_ca.paa' size='1.8' shadow='false' />";
				position = "cargo_door_l_pos";
				radius = 2;
				condition = "this animationPhase ""MoveCargoDoor"" < 0.5";
				statement = "this animate[""MoveCargoDoor"",1]";
				onlyforplayer = 0;
				showWindow = 0;
			};
			
			class CloseCargoDoor {
				displayName = $STR_CLOSE_RDOOR;
				position = "cargo_door_l_pos";
				radius = 2;
				condition = "this animationPhase ""MoveCargoDoor"" > 0.5";
				statement = "this animate[""MoveCargoDoor"",0]";
				onlyforplayer = 0;
				showWindow = 0;
				displayNameDefault = "<img image='\uh60\ico\ui_action_cargodoor_ca.paa' size='1.8' shadow='false' />";
			};
			
			class OpenCargo2Door {
				displayName = $STR_OPEN_LDOOR;
				position = "cargo_door_r_pos";
				radius = 2;
				condition = "this animationPhase ""MoveCargo2Door"" < 0.5";
				statement = "this animate[""MoveCargo2Door"",1]";
				onlyforplayer = 0;
				showWindow = 0;
				displayNameDefault = "<img image='\uh60\ico\ui_action_cargodoor_ca.paa' size='1.8' shadow='false' />";
			};
			
			class CloseCargo2Door {
				displayName = $STR_CLOSE_LDOOR;
				position = "cargo_door_r_pos";
				radius = 2;
				condition = "this animationPhase ""MoveCargo2Door"" > 0.5";
				statement = "this animate[""MoveCargo2Door"",0]";
				onlyforplayer = 0;
				showWindow = 0;
				displayNameDefault = "<img image='\uh60\ico\ui_action_cargodoor_ca.paa' size='1.8' shadow='false' />";
			};
			
			class OpenCargoDoor1 {
				displayName = $STR_OPEN_RDOOR;
				position = "pos driver";
				radius = 2;
				condition = "(this animationPhase ""MoveCargoDoor"" < 0.5) and (player == driver this)";
				statement = "this animate[""MoveCargoDoor"",1]";
				onlyforplayer = 0;
				showWindow = 0;
				displayNameDefault = "<img image='\uh60\ico\ui_action_cargodoor_ca.paa' size='1.8' shadow='false' />";
			};
			
			class CloseCargoDoor1 {
				displayName = $STR_CLOSE_RDOOR;
				position = "pos driver";
				radius = 2;
				condition = "(this animationPhase ""MoveCargoDoor"" > 0.5) and (player == driver this)";
				statement = "this animate[""MoveCargoDoor"",0]";
				onlyforplayer = 0;
				showWindow = 0;
				displayNameDefault = "<img image='\uh60\ico\ui_action_cargodoor_ca.paa' size='1.8' shadow='false' />";
			};
			
			class OpenCargoDoor2 {
				displayName = $STR_OPEN_LDOOR;
				position = "pos driver";
				radius = 2;
				condition = "(this animationPhase ""MoveCargo2Door"" < 0.5) and (player == driver this)";
				statement = "this animate[""MoveCargo2Door"",1]";
				onlyforplayer = 0;
				showWindow = 0;
				displayNameDefault = "<img image='\uh60\ico\ui_action_cargodoor_ca.paa' size='1.8' shadow='false' />";
			};
			
			class CloseCargoDoor2 {
				displayName = $STR_CLOSE_LDOOR;
				position = "pos driver";
				radius = 2;
				condition = "(this animationPhase ""MoveCargo2Door"" > 0.5) and (player == driver this)";
				statement = "this animate[""MoveCargo2Door"",0]";
				onlyforplayer = 0;
				showWindow = 0;
				displayNameDefault = "<img image='\uh60\ico\ui_action_cargodoor_ca.paa' size='1.8' shadow='false' />";
			};
			
			class Laser_On {
				condition = "(alive this) && (player == gunner this) && isNil {this getVariable 'ace_sys_missileguidance_laser_designation'}";
				displayname = "$STR_ACE_UA_LASER_ON";
				onlyforplayer = 1;
				position = "HitGlass3";
				radius = 6;
				statement = "this setVariable ['ace_sys_missileguidance_laser_designation',true]; [this, currentWeapon this, true] spawn ace_sys_missileguidance_fnc_opt_laserloop";
			};
			class Laser_Off: Laser_On {
				condition = "(alive this) && (player == gunner this) && (this getVariable 'ace_sys_missileguidance_laser_designation')";
				displayname = "$STR_ACE_UA_LASER_OFF";
				onlyforplayer = 1;
				position = "HitGlass3";
				radius = 6;
				statement = "this setVariable ['ace_sys_missileguidance_laser_off',true]";
			};
		};
		
		class ACE: ACE {
			class ACE_MISSILEGUIDANCE: ACE_MISSILEGUIDANCE {
				ace_designator = 1;
				ace_rangefinder = 0;
			};
		};
	};
		
	class TU_UH60L_4Stinger : TU_UH60L_ESSS_FLIR {
		displayname = "UH-60L Blackhawk (4xStinger)";
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {
		"60Rnd_CMFlareMagazine"
		};		
		
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				magazines[] = {
				"TU_1Rnd_Stinger_x2_Pod", "TU_1Rnd_Stinger_x2_Pod", 
				"TU_18Rnd_Empty", 
				"TU_1Rnd_Stinger", "TU_1Rnd_Stinger", "TU_1Rnd_Stinger", "TU_1Rnd_Stinger", "ACE_SACLOS_Guidance"};
				weapons[] = {"TU_StingerLaucher", "ACE_SACLOS_Guidance"};
			};
		};
	};
	
	class TU_UH60L_AGM_4Stinger : TU_UH60L_ESSS_FLIR {
		displayname = "UH-60L Blackhawk (4xAGM-114/4xStinger)";
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {
		"60Rnd_CMFlareMagazine"
		};
		
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				magazines[] = {
				"TU_1Rnd_Stinger_x2_Pod", "TU_1Rnd_Stinger_x2_Pod", "TU_Hellfire2Pod", "TU_Hellfire2Pod", 
				"TU_8Rnd_Empty", 
				"ACE_1Rnd_Hellfire", "ACE_1Rnd_Hellfire", "TU_2Rnd_Empty", "ACE_1Rnd_Hellfire", "ACE_1Rnd_Hellfire", "TU_2Rnd_Empty", 
				"TU_1Rnd_Stinger", "TU_1Rnd_Stinger", "TU_1Rnd_Stinger", "TU_1Rnd_Stinger", "ACE_SACLOS_Guidance"};
				weapons[] = {"HellfireLauncher", "TU_StingerLaucher", "ACE_SACLOS_Guidance"};
			};
		};
	};
	
	class TU_UH60L_2AGM_4Stinger : TU_UH60L_ESSS_FLIR {
		displayname = "UH-60L Blackhawk (8xAGM-114/4xStinger)";
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {
		"60Rnd_CMFlareMagazine"
		};
		
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				magazines[] = {
				"TU_1Rnd_Stinger_x2_Pod", "TU_1Rnd_Stinger_x2_Pod", "TU_HellfirePod", "TU_HellfirePod", 
				"TU_8Rnd_Empty", 
				"ACE_8Rnd_Hellfire", 
				"TU_1Rnd_Stinger", "TU_1Rnd_Stinger", "TU_1Rnd_Stinger", "TU_1Rnd_Stinger", "ACE_SACLOS_Guidance"};
				weapons[] = {"HellfireLauncher", "TU_StingerLaucher", "ACE_SACLOS_Guidance"};
			};
		};
	};
	
	class TU_UH60L_2FFAR_4Stinger : TU_UH60L_ESSS_FLIR {
		displayname = "UH-60L Blackhawk (2xFFAR/4xStinger)";
		weapons[] = {"FFARLauncher", "CMFlareLauncher"};
		magazines[] = {
		"38Rnd_FFAR", "60Rnd_CMFlareMagazine"
		};
		
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				magazines[] = {
				"TU_1Rnd_Stinger_x2_Pod", "TU_1Rnd_Stinger_x2_Pod", "1Rnd_M200Pod", "1Rnd_M200Pod", 
				"TU_16Rnd_Empty",
				"TU_1Rnd_Stinger", "TU_1Rnd_Stinger", "TU_1Rnd_Stinger", "TU_1Rnd_Stinger", "ACE_SACLOS_Guidance"};
				weapons[] = {"TU_StingerLaucher", "ACE_SACLOS_Guidance"};
			};
		};
	};
		
	class TU_UH60L_AGM_FFAR_4Stinger : TU_UH60L_ESSS_FLIR {	
		memoryPointLMissile = "missile_2";
		memoryPointRMissile = "missile_2";
		displayname = "UH-60L Blackhawk (4xAGM-114/1xFFAR/4xStinger)";
		weapons[] = {"FFARLauncher", "CMFlareLauncher"};
		magazines[] = {
		"ACE_19Rnd_70mm_FFAR_HE", "60Rnd_CMFlareMagazine"
		};
		
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				magazines[] = {
				"TU_1Rnd_Stinger_x2_Pod", "TU_1Rnd_Stinger_x2_Pod", "1Rnd_M200Pod", "TU_HellfirePod", 
				"TU_8Rnd_Empty",
				"TU_4Rnd_Empty", "ACE_4Rnd_Hellfire", 
				"TU_1Rnd_Stinger", "TU_1Rnd_Stinger", "TU_1Rnd_Stinger", "TU_1Rnd_Stinger", "ACE_SACLOS_Guidance"};
				weapons[] = {"HellfireLauncher", "TU_StingerLaucher", "ACE_SACLOS_Guidance"};
			};
		};
	};
	
	class TU_UH60L_AGM_2FFAR_2Stinger : TU_UH60L_ESSS_FLIR {
		displayname = "UH-60L Blackhawk (4xAGM-114/2xFFAR/2xStinger)";
		weapons[] = {"FFARLauncher", "CMFlareLauncher"};
		magazines[] = {
		"38Rnd_FFAR", "60Rnd_CMFlareMagazine"
		};
		
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				magazines[] = {
				"TU_HellfirePod", "TU_1Rnd_Stinger_x2_Pod", "1Rnd_M200Pod", "1Rnd_M200Pod", 
				"ACE_4Rnd_Hellfire", "TU_12Rnd_Empty",
				"TU_1Rnd_Stinger", "TU_1Rnd_Stinger", "ACE_SACLOS_Guidance"};
				weapons[] = {"HellfireLauncher", "TU_StingerLaucher", "ACE_SACLOS_Guidance"};
			};
		};
	};
	
	class TU_UH60L_AGM : TU_UH60L_ESSS_FLIR {
		displayname = "UH-60L Blackhawk (4xAGM-114)";
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {
		"60Rnd_CMFlareMagazine"
		};
		
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				magazines[] = {
				"TU_Hellfire2Pod", "TU_Hellfire2Pod", "TU_2Rnd_Empty", 
				"ACE_1Rnd_Hellfire", "ACE_1Rnd_Hellfire", "TU_2Rnd_Empty", "ACE_1Rnd_Hellfire", "ACE_1Rnd_Hellfire", "TU_2Rnd_Empty", 
				"TU_8Rnd_Empty", 
				"ACE_SACLOS_Guidance"};
				weapons[] = {"HellfireLauncher", "ACE_SACLOS_Guidance"};
			};
		};
	};
	
	class TU_UH60L_2AGM : TU_UH60L_ESSS_FLIR {
		displayname = "UH-60L Blackhawk (8xAGM-114)";
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {
		"60Rnd_CMFlareMagazine"
		};
		
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				magazines[] = {
				"TU_HellfirePod", "TU_HellfirePod", "TU_2Rnd_Empty", 
				"ACE_8Rnd_Hellfire", 
				"TU_8Rnd_Empty", 
				"ACE_SACLOS_Guidance"};
				weapons[] = {"HellfireLauncher", "ACE_SACLOS_Guidance"};
			};
		};
	};
	
	class TU_UH60L_4FFAR : TU_UH60L_ESSS {
		displayname = "UH-60L Blackhawk (4xFFAR)";
		weapons[] = {"CMFlareLauncher", "FFARLauncher"};
		magazines[] = {"1Rnd_M200Pod", "1Rnd_M200Pod", "1Rnd_M200Pod", "1Rnd_M200Pod", "TU_16Rnd_Empty", "76Rnd_FFAR", "60Rnd_CMFlareMagazine"};
	};
	
	class TU_UH60L_2FFAR : TU_UH60L_ESSS {
		displayname = "UH-60L Blackhawk (2xFFAR)";
		weapons[] = {"CMFlareLauncher", "FFARLauncher"};
		magazines[] = {"TU_2Rnd_Empty", "1Rnd_M200Pod", "1Rnd_M200Pod", "TU_16Rnd_Empty", "38Rnd_FFAR", "60Rnd_CMFlareMagazine"};
	};
	
	class TU_UH60L_4FFAR_FLIR : TU_UH60L_ESSS_FLIR {
		displayname = "UH-60L Blackhawk (4xFFAR/FLIR)";
		weapons[] = {"CMFlareLauncher", "FFARLauncher"};
		magazines[] = {"1Rnd_M200Pod", "1Rnd_M200Pod", "1Rnd_M200Pod", "1Rnd_M200Pod", "TU_16Rnd_Empty", "76Rnd_FFAR", "60Rnd_CMFlareMagazine"};
	};
	
	class TU_UH60L_2FFAR_FLIR : TU_UH60L_ESSS_FLIR {
		displayname = "UH-60L Blackhawk (2xFFAR/FLIR)";
		weapons[] = {"CMFlareLauncher", "FFARLauncher"};
		magazines[] = {"TU_2Rnd_Empty", "1Rnd_M200Pod", "1Rnd_M200Pod", "TU_16Rnd_Empty", "38Rnd_FFAR", "60Rnd_CMFlareMagazine"};
	};
	
	class TU_UH60L_2AGM_2FFAR : TU_UH60L_ESSS_FLIR {
		displayname = "UH-60L Blackhawk (8xAGM-114/2xFFAR)";
		weapons[] = {"FFARLauncher", "CMFlareLauncher"};
		magazines[] = {
		"38Rnd_FFAR", "60Rnd_CMFlareMagazine"
		};
		
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				magazines[] = {
				"TU_HellfirePod", "TU_HellfirePod", "1Rnd_M200Pod", "1Rnd_M200Pod", 
				"ACE_8Rnd_Hellfire", 
				"TU_8Rnd_Empty", 
				"ACE_SACLOS_Guidance"};
				weapons[] = {"HellfireLauncher", "ACE_SACLOS_Guidance"};
			};
		};
	};
	
	class TU_UH60L_AGM_2FFAR : TU_UH60L_ESSS_FLIR {
		displayname = "UH-60L Blackhawk (4xAGM-114/2xFFAR)";
		weapons[] = {"FFARLauncher", "CMFlareLauncher"};
		magazines[] = {
		"38Rnd_FFAR", "60Rnd_CMFlareMagazine"
		};
		
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				magazines[] = {
				"TU_Hellfire2Pod", "TU_Hellfire2Pod", "1Rnd_M200Pod", "1Rnd_M200Pod", 
				"ACE_1Rnd_Hellfire", "ACE_1Rnd_Hellfire", "TU_2Rnd_Empty", "ACE_1Rnd_Hellfire", "ACE_1Rnd_Hellfire", "TU_2Rnd_Empty", 
				"TU_8Rnd_Empty", 
				"ACE_SACLOS_Guidance"};
				weapons[] = {"HellfireLauncher", "ACE_SACLOS_Guidance"};
			};
		};
	};
	
	class TU_UH60L : UH60M_EP1 {
		ace_camshake_enabled = 1;
		ace_canbecargo = 0;
		ace_canbeload = 1;
		ace_canfastrope = 1;
		ace_cangear = 0;
		ace_canlift = 1;
		ace_canloadfront = 0;
		ace_cargo_exposed = 0;
		ace_ejection_seat = "ParachuteC";
		ace_exposed = 0;
		ace_lademeister = 1;
		ace_maxload = 5886;
		ace_geolifterattachment[] = {{0, 2, -4.5}};
		ace_ropeattachment[] = {{-1.4, 2, -0.5}, {1.4, 2, -0.5}};
		ace_sys_air_rwr_type = "ACE_Default";
		ace_sys_autorotation_horizontal_gain = "1.0/75";
		ace_sys_autorotation_vertical_gain = "0.6/1.5";
		ace_sys_eject_eject = 0;
		ace_sys_eject_jump = 1;
		ace_sys_eject_side = 1;
		ace_sys_eject_weaponcheck = 1;
		ace_sys_repair_rearm = 0;
		ace_sys_repair_refuel = 0;
		ace_sys_repair_repair = 0;
		ace_sys_repair_spare_tyres = 0;
		ace_sys_repair_threshold = 0.8;
		ace_sys_repair_threshold_refuel = 1;
		ace_sys_repair_time = 900;
		ace_sys_tracking_marker = "b_air";
		ace_tankfcs_enabled = 0;
		ace_weight = 5224;		
		accuracy = 0.5;
		armor = 20;
		cargoAction[] = {"UH60_Cargo02", "UH60_Cargo02", "UH60_Cargo02", "UH60_Cargo02", "UH60_Cargo02", "UH60_Cargo02", "UH60_Cargo02", "UH60_Cargo02", "UH60_Cargo02", "UH60_Cargo02", "UH60_Cargo02", "UH60_Pilot"};
		cargocompartments[] = {2};
		castDriverShadow = 0;
		castCargoShadow = 0;
		crew = "US_Soldier_Pilot_EP1";
		cost = 10000000;
		damageResistance = 0.004;
		destrtype = "DestructWreck";
		displayname = "UH-60L Blackhawk";
		driverCompartments = 1;
		driverInAction = "UH60_Pilot";
		driverAction = "UH60_Pilot";
		dustEffect = "HeliDust";
		enablemanualfire = 0;
		faction = BIS_US;		
		forceHideDriver = 0;
		Icon = "\uh60\ico\icomap_uh60l_ca.paa";
		incommingMisslieDetectionSystem = 0;
		initCargoAngleY = 10;
		irscanground = 1;
		irscanrangemax = 10000;
		irscanrangemin = 500;
		irscantoeyefactor = 2;
		irtarget = 1;
		laserscanner = 1;
		lasertarget = 0;
		lockDetectionSystem = 8 + 4;
		maxspeed = 295;
		memoryPointCM[] = {"flare_launcher1", "flare_launcher2"};
		memoryPointCMDir[] = {"flare_launcher1_dir", "flare_launcher2_dir"};
		memoryPointLMissile = "Missile_1";
		memoryPointRMissile = "Missile_2";
		memorypointsgetincargo = "pos cargo";
		memorypointsgetincargodir = "pos cargo dir";
		memorypointsgetindriver = "pos driver";
		memorypointsgetindriverdir = "pos driver dir";
		memorypointsgetingunner = "pos cargo";
		memorypointsgetingunnerdir = "pos cargo dir";
		namesound = "veh_Helicopter";
		radarType = 0;
		mainRotorSpeed = 1.2;
		magazines[] = {"60Rnd_CMFlareMagazine"};
		mapSize = 17;
		maxCargoAngleY = 120;
		model = "\uh60\tu_uh60";
		minCargoAngleY = -60;
		picture = "\uh60\ico\uh_60q_ca.paa";
		scope = public;
		side = TWest;
		supplyRadius = 2;
		threat[] = {0.8, 0.1, 0.3};
		transportMaxMagazines = 9999;
		transportMaxWeapons = 9999;
		transportSoldier = 12;
		type = 2;
		typicalCargo[] = {"SoldierWPilot", "SoldierWPilot", "SoldierWAT", "SoldierWAT"};
		waterEffect = "HeliWater";
		weapons[] = {"CMFlareLauncher"};
		
		class MarkerLights {
			class RedStill {
				name = "cerveny pozicni";
				color[] = {0.2, 0.02, 0.02, 1};
				ambient[] = {0.3, 0.03, 0.03, 1};
				brightness = 0.005;
				blinking = false;
			};
			
			class BlueStill {
				name = "siniy pozicni";
				color[] = {0.02, 0.1, 0.2, 1};
				ambient[] = {0.03, 0.15, 0.3, 1};
				brightness = 0.005;
				blinking = false;
			};
			
			class WhiteStill {
				name = "bily pozicni";
				color[] = {0.2, 0.2, 0.2, 1};
				ambient[] = {0.03, 0.03, 0.03, 1};
				brightness = 0.005;
				blinking = false;
			};
			
			class WhiteBlinking {
				name = "bily pozicni blik";
				color[] = {1.0, 1.0, 1.0, 1};
				ambient[] = {0.2, 0.2, 0.2, 1};
				brightness = 0.01;
				blinking = true;
			};
			
			class RedBlinking {
				name = "cerveny pozicni blik";
				color[] = {1.0, 0.05, 0.05, 1};
				ambient[] = {0.2, 0.02, 0.02, 1};
				brightness = 0.01;
				blinking = true;
			};
		};
		
		class HitPoints {
			class HitHull {
				armor = 0.25;
				material = 51;
				name = "NEtrup";
				visual = "trup";
				passThrough = true;
			};
			
			class HitEngine {
				armor = 0.15;
				material = 51;
				name = "motor";
				visual = "motor";
				passThrough = true;
			};
			
			class HitAvionics {
				armor = 0.15;
				material = 51;
				name = "elektronika";
				visual = "elektronika";
				passThrough = true;
			};
			
			class HitVRotor {
				armor = 0.25;
				material = 51;
				name = "mala vrtule";
				visual = "mala vrtule staticka";
				passThrough = false;
			};
			
			class HitHRotor {
				armor = 0.2;
				material = 51;
				name = "velka vrtule";
				visual = "velka vrtule staticka";
				passThrough = false;
			};
			class HitMissiles {
				armor = 0.1;
				material = 51;
				name = "";
				passthrough = 0.5;
				visual = "";
			};
			class HitRGlass {
				armor = 0.1;
				convexcomponent = "sklo predni P";
				material = 51;
				name = "sklo predni P";
				passthrough = 0;
				visual = "sklo predni P";
			};
			class HitLGlass {
				armor = 0.1;
				convexcomponent = "sklo predni L";
				material = 51;
				name = "sklo predni L";
				passthrough = 0;
				visual = "sklo predni L";
			};
		};
				
		class Library {
			libTextDesc = $STR_POPIS;
		};
		
		class Damage {
			tex[] = {};
			mat[] = {"uh60\t\glasses.rvmat", "uh60\t\glasses_damage.rvmat", "uh60\t\glasses_damage.rvmat", "uh60\t\uh60l01_504.rvmat", "uh60\t\uh60l01_damage.rvmat", "uh60\t\uh60l01_destruct.rvmat", "uh60\t\uh60q02.rvmat", "uh60\t\uh60q02_damage.rvmat", "uh60\t\uh60q02_destruct.rvmat", "uh60\t\uh60q03.rvmat", "uh60\t\uh60q03_damage.rvmat", "uh60\t\uh60q03_destruct.rvmat", "uh60\t\uh60l04_504.rvmat", "uh60\t\uh60l04_damage.rvmat", "uh60\t\uh60l04_destruct.rvmat", "uh60\t\uh60l05_504.rvmat", "uh60\t\uh60l05_damage.rvmat", "uh60\t\uh60l05_destruct.rvmat", "uh60\t\rotorQ.rvmat", "uh60\t\rotorQ_damage.rvmat", "uh60\t\rotorQ_destruct.rvmat", "uh60\t\akabine.rvmat", "uh60\t\akabine_damage.rvmat", "uh60\t\akabine_destruct.rvmat", "uh60\t\intA_1.rvmat", "uh60\t\intA_1_damage.rvmat", "uh60\t\intA_1_destruct.rvmat", "uh60\t\intA_2.rvmat", "uh60\t\intA_2_damage.rvmat", "uh60\t\intA_2_destruct.rvmat", "uh60\t\intA3.rvmat", "uh60\t\intA3_damage.rvmat", "uh60\t\intA3_destruct.rvmat", "uh60\t\upperpanel.rvmat", "uh60\t\upperpanel.rvmat", "uh60\t\upperpanel_destruct.rvmat", "uh60\t\panel2A.rvmat", "uh60\t\panel2A.rvmat", "uh60\t\panel2A_destruct.rvmat", "uh60\t\panel3A.rvmat", "uh60\t\panel3A.rvmat", "uh60\t\panel3A_destruct.rvmat", "uh60\t\modern_seat.rvmat", "uh60\t\modern_seat.rvmat", "uh60\t\modern_seat_destruct.rvmat", "uh60\t\panelA_low.rvmat", "uh60\t\panelA_low.rvmat", "uh60\t\panelA_low_destruct.rvmat", "uh60\t\flirQ.rvmat", "uh60\t\flirQ_damage.rvmat", "uh60\t\flirQ_destruct.rvmat"};
		};
		
		class Eventhandlers {
			init = "_this execVM ""uh60\scripts\init.sqf"";";
		};
		
		class Turrets : Turrets {
			class MainTurret : NewTurret {
				ace_lademeister = 1;
				ace_viewport = 90;
				animationSourceBody = "otocvez";
				animationSourceGun = "otochlaven";
				animationSourceHatch = "";
				body = "otocvez";
				castGunnerShadow = true;
				commanding = -1;
				gun = "otochlaven";
				gunBeg = "mgun_beg_1";	// endpoint of the gun
				gunEnd = "mgun_end_1";	// chamber of the gun
				gunnerAction = "MH60_Gunner";
				gunnerCompartments = 2;
				gunnerForceOptics = false;
				gunnerInAction = "MH60_Gunner";
				gunnerName = $STR_POSITION_CREWCHIEF;
				gunnerOpticsModel = "\ca\weapons\optika_empty";
				gunnerOpticsShowCursor = 1;
				initElev = 0;
				initTurn = 0;
				magazines[] = {"100Rnd_762x51_M240", "100Rnd_762x51_M240", "100Rnd_762x51_M240", "100Rnd_762x51_M240", "100Rnd_762x51_M240", "100Rnd_762x51_M240", "100Rnd_762x51_M240"};
				maxElev = 30;
				maxTurn = 7;
				minTurn = -183;
				memoryPointGun = "mgun_1";
				memoryPointGunnerOptics = "gunneroptic_1";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";				
				minElev = -60;
				outGunnerMayFire = true;
				proxyIndex = 2;
				primaryGunner = 1;
				selectionFireAnim = "zasleh";		
				soundservo[] = {"", 0.01, 1};
				stabilizedInAxes = "StabilizedInAxesNone";
				startengine = 0;
				viewGunnerShadow = false;				
				weapons[] = {ACE_M240H_veh_out};
				
				lockWhenDriverOut = false;
				gunnerOutOpticsShowCursor = 1;					
				
				class ViewGunner {
					initanglex = 5;
					initangley = 0;
					initfov = 0.7;
					maxanglex = 85;
					maxangley = 150;
					maxfov = 0.85;
					minanglex = -85;
					minangley = -150;
					minfov = 0.42;
				};
					
				class ViewOptics {
					initanglex = 0;
					initangley = 0;
					initfov = "0.33333+ 0.41667";
					maxanglex = 30;
					maxangley = 100;
					maxfov = "0.33333+ 0.41667";
					minanglex = -30;
					minangley = -100;
					minfov = 0.33333;
				};
			};
			
			class LeftGun : MainTurret {
				body = "otocvez_2";
				gun = "otochlaven_2";
				animationSourceBody = "otocvez_2";
				animationSourceGun = "otochlaven_2";
				animationSourceHatch = "";
				selectionFireAnim = "zasleh_1";
				proxyIndex = 1;
				gunnerName = $STR_POSITION_DOORGUNNER;
				commanding = -1;
				minTurn = -7;
				maxTurn = 183;
				weapons[] = {ACE_M240H_veh_out2};
				magazines[] = {"100Rnd_762x51_M240", "100Rnd_762x51_M240", "100Rnd_762x51_M240", "100Rnd_762x51_M240", "100Rnd_762x51_M240", "100Rnd_762x51_M240", "100Rnd_762x51_M240"};
				stabilizedInAxes = "StabilizedInAxesNone";
				gunBeg = "mgun_beg_2";	// endpoint of the gun
				gunEnd = "mgun_end_2";	// chamber of the gun
				primaryGunner = 0;
				memoryPointGun = "mgun_2";
				memoryPointGunnerOptics = "gunneroptic_2";
				gunnerCompartments = 2;
			};
		};
		
		class AnimationSources {
			class TiltBlade_1 {
				source = "user";
				animPeriod = 0;
				initPhase = 0.3;
			};
			
			class TiltBlade_2 {
				source = "user";
				animPeriod = 0;
				initPhase = 0.3;
			};
			
			class TiltBlade_3 {
				source = "user";
				animPeriod = 0;
				initPhase = 0.3;
			};
			
			class TiltBlade_4 {
				source = "user";
				animPeriod = 0;
				initPhase = 0.3;
			};
			
			class TiltTailBlade_1 {
				source = "user";
				animPeriod = 0;
				initPhase = 0.3;
			};
			
			class TiltTailBlade_2 {
				source = "user";
				animPeriod = 0;
				initPhase = 0.3;
			};
			
			class TiltTailBlade_3 {
				source = "user";
				animPeriod = 0;
				initPhase = 0.3;
			};
			
			class TiltTailBlade_4 {
				source = "user";
				animPeriod = 0;
				initPhase = 0.3;
			};
			
			class TiltTailRotor {
				source = "user";
				animPeriod = 0;
				initPhase = 0.3;
			};
			
			class MovePilotDoor {
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			
			class MoveCopilotDoor {
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			
			class MoveCargoDoor {
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			
			class MoveCargo2Door {
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			
			class formation_lights {
				source = "user";
				animPeriod = 0;
				initPhase = 1;
			};
			
			class tail_lights : formation_lights {};
		};
		
		class Reflectors {
			class Left {
				color[] = {0.8, 0.8, 1.0, 1.0};
				ambient[] = {0.07, 0.07, 0.07, 1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				brightness = 1.0;
			};
			
			class Right {
				color[] = {0.8, 0.8, 1.0, 1.0};
				ambient[] = {0.07, 0.07, 0.07, 1.0};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 1;
				brightness = 1.0;
			};
		};
		
		class UserActions {
			class FormationLightsOn {
				displayName = $STR_FORM_LIGHTS_ON;
				position = "pos driver";
				radius = 2;
				condition = "(this animationPhase ""formation_lights"" > 0.5) and (player == driver this)";
				statement = "this animate[""formation_lights"",0];this animate[""tail_lights"",0]";
				onlyforplayer = 0;
				showWindow = 0;
			};
			
			class FormationLightsOff : FormationLightsOn {
				displayName = $STR_FORM_LIGHTS_OFF;
				condition = "(this animationPhase ""formation_lights"" < 0.5) and (player == driver this)";
				statement = "this animate[""formation_lights"",1];this animate[""tail_lights"",1]";
			};
			
			class OpenCargoDoor {
				displayName = $STR_OPEN_RDOOR;
				displayNameDefault = "<img image='\uh60\ico\ui_action_cargodoor_ca.paa' size='1.8' shadow='false' />";
				position = "cargo_door_l_pos";
				radius = 2;
				condition = "this animationPhase ""MoveCargoDoor"" < 0.5";
				statement = "this animate[""MoveCargoDoor"",1]";
				onlyforplayer = 0;
				showWindow = 0;
			};
			
			class CloseCargoDoor {
				displayName = $STR_CLOSE_RDOOR;
				position = "cargo_door_l_pos";
				radius = 2;
				condition = "this animationPhase ""MoveCargoDoor"" > 0.5";
				statement = "this animate[""MoveCargoDoor"",0]";
				onlyforplayer = 0;
				showWindow = 0;
				displayNameDefault = "<img image='\uh60\ico\ui_action_cargodoor_ca.paa' size='1.8' shadow='false' />";
			};
			
			class OpenCargo2Door {
				displayName = $STR_OPEN_LDOOR;
				position = "cargo_door_r_pos";
				radius = 2;
				condition = "this animationPhase ""MoveCargo2Door"" < 0.5";
				statement = "this animate[""MoveCargo2Door"",1]";
				onlyforplayer = 0;
				showWindow = 0;
				displayNameDefault = "<img image='\uh60\ico\ui_action_cargodoor_ca.paa' size='1.8' shadow='false' />";
			};
			
			class CloseCargo2Door {
				displayName = $STR_CLOSE_LDOOR;
				position = "cargo_door_r_pos";
				radius = 2;
				condition = "this animationPhase ""MoveCargo2Door"" > 0.5";
				statement = "this animate[""MoveCargo2Door"",0]";
				onlyforplayer = 0;
				showWindow = 0;
				displayNameDefault = "<img image='\uh60\ico\ui_action_cargodoor_ca.paa' size='1.8' shadow='false' />";
			};
			
			class OpenCargoDoor1 {
				displayName = $STR_OPEN_RDOOR;
				position = "pos driver";
				radius = 2;
				condition = "(this animationPhase ""MoveCargoDoor"" < 0.5) and (player == driver this)";
				statement = "this animate[""MoveCargoDoor"",1]";
				onlyforplayer = 0;
				showWindow = 0;
				displayNameDefault = "<img image='\uh60\ico\ui_action_cargodoor_ca.paa' size='1.8' shadow='false' />";
			};
			
			class CloseCargoDoor1 {
				displayName = $STR_CLOSE_RDOOR;
				position = "pos driver";
				radius = 2;
				condition = "(this animationPhase ""MoveCargoDoor"" > 0.5) and (player == driver this)";
				statement = "this animate[""MoveCargoDoor"",0]";
				onlyforplayer = 0;
				showWindow = 0;
				displayNameDefault = "<img image='\uh60\ico\ui_action_cargodoor_ca.paa' size='1.8' shadow='false' />";
			};
			
			class OpenCargoDoor2 {
				displayName = $STR_OPEN_LDOOR;
				position = "pos driver";
				radius = 2;
				condition = "(this animationPhase ""MoveCargo2Door"" < 0.5) and (player == driver this)";
				statement = "this animate[""MoveCargo2Door"",1]";
				onlyforplayer = 0;
				showWindow = 0;
				displayNameDefault = "<img image='\uh60\ico\ui_action_cargodoor_ca.paa' size='1.8' shadow='false' />";
			};
			
			class CloseCargoDoor2 {
				displayName = $STR_CLOSE_LDOOR;
				position = "pos driver";
				radius = 2;
				condition = "(this animationPhase ""MoveCargo2Door"" > 0.5) and (player == driver this)";
				statement = "this animate[""MoveCargo2Door"",0]";
				onlyforplayer = 0;
				showWindow = 0;
				displayNameDefault = "<img image='\uh60\ico\ui_action_cargodoor_ca.paa' size='1.8' shadow='false' />";
			};
		};
	};
	
	class CH47_base_EP1: Helicopter {};
	
	class CH_47F_EP1: CH47_base_EP1 {
		vehicleclass = "TU_USARMY_AIR";
	};
	
	class CH_47F_black: CH_47F_EP1 {
	
		hiddenSelections[] = {"camo3"};
		hiddenselectionstextures[] = {"\tu_air\usa_g.paa"};
		model="\tu_air\CH_47.p3d";
		displayName="CH-47F Chinook (Black)";
		vehicleclass = "TU_USARMY_AIR";
	};
	
	class Ka60_Base_PMC: Helicopter {
		model="\tu_air\ka60_pmc.p3d";
	};
	
	class Ka60_PMC: Ka60_Base_PMC {};

	class TU_KA60: Ka60_PMC {
		vehicleclass = "TU_VVS_RF";
		memorypointcm[] = {"l strela", "p strela"};
		memorypointcmdir[] = {"p strela", "l strela"};
		model="\tu_air\ka60_camo.p3d";
		crew = "RU_Soldier_Pilot";
		scope = 2;
		faction = "RU";
		side = 0;
		weapons[] = {"57mmLauncher", "CMFlareLauncher"};
		magazines[] = {"14Rnd_57mm", "60Rnd_CMFlareMagazine"};
	};
	
	class TU_KA60_B: TU_KA60 {
		vehicleclass = "TU_VVS_RF";
		model="\tu_air\ka60.p3d";
		displayname = $STR_KA60_B;
	};
	
	class Mi24_Base: Helicopter
	{
		memorypointlmissile = "Missile_1";
		memorypointlrocket = "Rocket_1";
		memorypointrmissile = "Missile_2";
		memorypointrrocket = "Rocket_2";
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	
	class Mi24_Base_CDF: Mi24_Base {
		displayname = $STR_Mi35;
		vehicleclass = "TU_VVS_CDF";
	};
	
	class Mi24_D: Mi24_Base_CDF {
		memorypointlmissile = "Missile_1";
		memorypointlrocket = "Rocket_1";
		memorypointrmissile = "Missile_2";
		memorypointrrocket = "Rocket_2";
		displayname = $STR_Mi25;
		vehicleclass = "TU_VVS_CDF";
	};
	
	class Mi24_D_Base: Mi24_Base_CDF {
		displayname = $STR_Mi25;
		vehicleclass = "TU_VVS_CDF";
	};
	
	class Mi24_Base_TK_EP1: Mi24_Base {
		displayname = $STR_Mi35;
		vehicleclass = "TU_VVS_TK";
	};
	
	class Mi24_D_Base_TK_EP1: Mi24_Base_TK_EP1 {
		displayname = $STR_Mi25;
		vehicleclass = "TU_VVS_TK";
	};
	
	class Mi24_D_TK_EP1: Mi24_D_Base_TK_EP1 {
		memorypointlmissile = "Missile_1";
		memorypointlrocket = "Rocket_1";
		memorypointrmissile = "Missile_2";
		memorypointrrocket = "Rocket_2";
		displayname = $STR_Mi25;
		vehicleclass = "TU_VVS_TK";
	};

	class Mi24_Base_RU: Mi24_Base {
		vehicleclass = "TU_VVS_RF";
		class Turrets: Turrets {
			class MainTurret: MainTurret {};
		};
	};
	
	class Mi24_P: Mi24_Base_RU {
		vehicleclass = "TU_VVS_RF";
	};
	
	class Mi24_V: Mi24_Base_RU {		
		vehicleclass = "TU_VVS_RF";
		magazines[] = {"80Rnd_80mm", "120Rnd_CMFlareMagazine"};
		weapons[] = {"ACE_S8Launcher", "CMFlareLauncher"};
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				magazines[] = {"1470Rnd_127x108_YakB", "ACE_1Rnd_B8V20", "ACE_1Rnd_B8V20", "ACE_1Rnd_B8V20", "ACE_1Rnd_B8V20", "ACE_4Rnd_AT9_Mi24V"};
				weapons[] = {"YakB", "TU_AT9Launcher_Mi24"};
			};
		};
	};
	
	class Mi24_V_base: Mi24_V {
		scope = 0;
		vehicleclass = "TU_VVS_RF";
		model = "\FRL_Mi24\frl_mi24v.p3d";
		selectionFireAnim = "zasleh_1";
		gunBeg[] = {"muzzle_4", "muzzle_5"};
		gunEnd[] = {"chamber_4", "chamber_5"};
		magazines[] = {"80Rnd_80mm", "120Rnd_CMFlareMagazine"};
		weapons[] = {"ACE_S8Launcher", "CMFlareLauncher"};
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				weapons[] = {"YakB", "TU_AT9Launcher_Mi24"};
				magazines[] = {"1470Rnd_127x108_YakB",
		//outer pod 1,2
				"TU_2Rnd_AT6_pod",
		//mid pod 3,4
				"TU_2Rnd_S8_Heli_Pod",
		//inner pod 5,6
				"TU_2Rnd_S8_Heli_Pod",
		//outer 2x rack 7-10
				"TU_4Rnd_Empty",
		//mid 2x rack 11-14
				"TU_4Rnd_Empty",
		//outer igla 1x 15,16
				"TU_2Rnd_Empty",
		//mid 4x rack 17-24
				"TU_8Rnd_Empty",
		//inner 4x rack 25-32
				"TU_8Rnd_Empty",
		//invisible
				"ACE_4Rnd_AT9_Mi24V"
				};
			};
		};
	};
	
	class ACE_Mi24_Base_INS: Mi24_Base {
		class Turrets: Turrets {
			class MainTurret: MainTurret {};
		};
	};
	
	class ACE_Mi24_D_INS: ACE_Mi24_Base_INS {
		memorypointlmissile = "Missile_1";
		memorypointlrocket = "Rocket_1";
		memorypointrmissile = "Missile_2";
		memorypointrrocket = "Rocket_2";
		class Turrets: Turrets {
			class MainTurret: MainTurret {};
		};
	};
	
	class ACE_Mi24_V_CDF: Mi24_D {
		displayname = $STR_Mi35;
		vehicleclass = "TU_VVS_CDF";
	};
	
	class ACE_Mi24_V_FAB250_CDF: ACE_Mi24_V_CDF {
		displayname = $STR_MI35_FAB250;
		vehicleclass = "TU_VVS_CDF";
	};
	
	class ACE_Mi24_V_UPK23_CDF: ACE_Mi24_V_CDF {
		displayname = $STR_MI35_UPK23;
		vehicleclass = "TU_VVS_CDF";
	};
	
	class TU_Mi24_V_8AT_CDF: Mi24_V_base {
		scope = 2;
		displayName = $STR_Mi35_8AT;
		hiddenselectionstextures[] = {"\ca\air2\mi35\data\mi35_001_co.paa", "\ca\air2\mi35\data\mi35_002_co.paa"};
		faction = "CDF";
		side = 1;
		vehicleclass = "TU_VVS_CDF";
		magazines[] = {"64Rnd_57mm", "120Rnd_CMFlareMagazine"};
		weapons[] = {"57mmLauncher", "CMFlareLauncher"};
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				weapons[] = {"YakB", "AT6Launcher"};
				magazines[] = {"1470Rnd_127x108_YakB",
		//outer pod 1,2
				"TU_2Rnd_AT6_pod",
		//mid pod 3,4
				"TU_2Rnd_AT6_pod",
		//inner pod 5,6
				"TU_2Rnd_UB32_Pod",
		//outer 2x rack 7-10
				"TU_4Rnd_Empty",
		//mid 2x rack 11-14
				"TU_4Rnd_Empty",
		//outer igla 1x 15,16
				"TU_2Rnd_Empty",
		//mid 4x rack 17-24
				"TU_8Rnd_Empty",
		//inner 4x rack 25-32
				"TU_8Rnd_Empty",
		//invisible
				"8Rnd_AT6_Mi24V"
				};
			};
		};
	};
	
	class TU_Mi24_V_4AT_4AA_CDF: Mi24_V_base {
		scope = 2;
		displayName = $STR_Mi35_4AT_4AA;
		hiddenselectionstextures[] = {"\ca\air2\mi35\data\mi35_001_co.paa", "\ca\air2\mi35\data\mi35_002_co.paa"};
		faction = "CDF";
		side = 1;
		vehicleclass = "TU_VVS_CDF";
		crew = "CDF_Soldier_Pilot";
		magazines[] = {"64Rnd_57mm", "120Rnd_CMFlareMagazine"};
		weapons[] = {"57mmLauncher", "CMFlareLauncher"};
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				weapons[] = {"YakB", "AT6Launcher","TU_IglaLauncher"};
				magazines[] = {"1470Rnd_127x108_YakB",
		//outer pod 1,2
				"TU_2Rnd_Igla_Pod",
		//mid pod 3,4
				"TU_2Rnd_AT6_pod",
		//inner pod 5,6
				"TU_2Rnd_UB32_Pod",
		//outer 2x rack 7-10
				"TU_4Rnd_Empty",
		//mid 2x rack 11-14
				"TU_4Rnd_Empty",
		//outer igla 1x 15,16
				"TU_2Rnd_Empty",
		//mid 4x rack 17-24
				"TU_8Rnd_Empty",
		//inner 4x rack 25-32
				"TU_8Rnd_Empty",
		//invisible
				"4Rnd_AT6_Mi24V", "TU_1Rnd_Igla", "TU_1Rnd_Igla", "TU_1Rnd_Igla", "TU_1Rnd_Igla"
				};
			};
		};
	};
	 
	class TU_Mi24_V_4AA_CDF: Mi24_V_base {
		scope = 2;
		displayName = $STR_Mi35_4AA;
		hiddenselectionstextures[] = {"\ca\air2\mi35\data\mi35_001_co.paa", "\ca\air2\mi35\data\mi35_002_co.paa"};
		faction = "CDF";
		side = 1;
		vehicleclass = "TU_VVS_CDF";
		crew = "CDF_Soldier_Pilot";
		magazines[] = {"64Rnd_57mm", "40Rnd_80mm", "120Rnd_CMFlareMagazine"};
		weapons[] = {"57mmLauncher", "ACE_S8Launcher", "CMFlareLauncher"};
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				weapons[] = {"YakB","TU_IglaLauncher"};
				magazines[] = {"1470Rnd_127x108_YakB",
		//outer pod 1,2
				"TU_2Rnd_Igla_Pod",
		//mid pod 3,4
				"TU_2Rnd_S8_Heli_Pod",
		//inner pod 5,6
				"TU_2Rnd_UB32_Pod",
		//outer 2x rack 7-10
				"TU_4Rnd_Empty",
		//mid 2x rack 11-14
				"TU_4Rnd_Empty",
		//outer igla 1x 15,16
				"TU_2Rnd_Empty",
		//mid 4x rack 17-24
				"TU_8Rnd_Empty",
		//inner 4x rack 25-32
				"TU_8Rnd_Empty", "TU_1Rnd_Igla", "TU_1Rnd_Igla", "TU_1Rnd_Igla", "TU_1Rnd_Igla"
		//invisible
				};
			};
		};
	};
	
	class ACE_Mi24_V_FAB250_RU: Mi24_V {
		vehicleclass = "TU_VVS_RF";
	};
	
	class ACE_Mi24_V_UPK23_RU: Mi24_V {
		vehicleclass = "TU_VVS_RF";
	};
	
	class TU_Mi24_V_8AT: Mi24_V_base {
		scope = 2;
		vehicleclass = "TU_VVS_RF";
		displayname = $STR_Mi24_V_8AT;
		model = "\FRL_Mi24\frl_mi24v.p3d";
		magazines[] = {"40Rnd_80mm", "120Rnd_CMFlareMagazine"};
		weapons[] = {"ACE_S8Launcher", "CMFlareLauncher"};
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				weapons[] = {"YakB", "TU_AT9Launcher_Mi24"};
				magazines[] = {"1470Rnd_127x108_YakB",
		//outer pod 1,2
				"TU_2Rnd_AT6_pod",
		//mid pod 3,4
				"TU_2Rnd_AT6_pod",
		//inner pod 5,6
				"TU_2Rnd_S8_Heli_Pod",
		//outer 2x rack 7-10
				"TU_4Rnd_Empty",
		//mid 2x rack 11-14
				"TU_4Rnd_Empty",
		//outer igla 1x 15,16
				"TU_2Rnd_Empty",
		//mid 4x rack 17-24
				"TU_8Rnd_Empty",
		//inner 4x rack 25-32
				"TU_8Rnd_Empty",
		//invisible
				"TU_8Rnd_AT9_Mi24V"
				};
			};
		};
	};
	 
	class TU_Mi24_V_4AT_4AA: Mi24_V_base {
		scope = 2;
		vehicleclass = "TU_VVS_RF";
		displayname = $STR_Mi24_V_4AT_4AA;
		model = "\FRL_Mi24\frl_mi24v.p3d";		
		magazines[] = {"40Rnd_80mm", "120Rnd_CMFlareMagazine"};
		weapons[] = {"ACE_S8Launcher", "CMFlareLauncher"};
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				weapons[] = {"YakB", "TU_AT9Launcher_Mi24","TU_IglaLauncher"};
				magazines[] = {"1470Rnd_127x108_YakB",
		//outer pod 1,2
				"TU_2Rnd_Igla_Pod",
		//mid pod 3,4
				"TU_2Rnd_AT6_pod",
		//inner pod 5,6
				"TU_2Rnd_S8_Heli_Pod",
		//outer 2x rack 7-10
				"TU_4Rnd_Empty",
		//mid 2x rack 11-14
				"TU_4Rnd_Empty",
		//outer igla 1x 15,16
				"TU_2Rnd_Empty",
		//mid 4x rack 17-24
				"TU_8Rnd_Empty",
		//inner 4x rack 25-32
				"TU_8Rnd_Empty",
		//invisible
				"ACE_4Rnd_AT9_Mi24V", "TU_1Rnd_Igla", "TU_1Rnd_Igla", "TU_1Rnd_Igla", "TU_1Rnd_Igla"
				};
			};
		};
	};
	 
	class TU_Mi24_V_4AA: Mi24_V_base {
		scope = 2;
		vehicleclass = "TU_VVS_RF";
		displayname = $STR_Mi24_V_4AA;
		model = "\FRL_Mi24\frl_mi24v.p3d";		
		magazines[] = {"80Rnd_80mm", "120Rnd_CMFlareMagazine"};
		weapons[] = {"ACE_S8Launcher", "CMFlareLauncher"};
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				weapons[] = {"YakB","TU_IglaLauncher"};
				magazines[] = {"1470Rnd_127x108_YakB",
		//outer pod 1,2
				"TU_2Rnd_Igla_Pod",
		//mid pod 3,4
				"TU_2Rnd_S8_Heli_Pod",
		//inner pod 5,6
				"TU_2Rnd_S8_Heli_Pod",
		//outer 2x rack 7-10
				"TU_4Rnd_Empty",
		//mid 2x rack 11-14
				"TU_4Rnd_Empty",
		//outer igla 1x 15,16
				"TU_2Rnd_Empty",
		//mid 4x rack 17-24
				"TU_8Rnd_Empty",
		//inner 4x rack 25-32
				"TU_8Rnd_Empty", "TU_1Rnd_Igla", "TU_1Rnd_Igla", "TU_1Rnd_Igla", "TU_1Rnd_Igla"
		//invisible
				};
			};
		};
	};
	
	class TU_Mi24_VP: Mi24_V {
		displayname = $STR_Mi24_VP;
		vehicleclass = "TU_VVS_RF";
		magazines[] = {"80Rnd_80mm", "120Rnd_CMFlareMagazine"};
		weapons[] = {"ACE_S8Launcher", "CMFlareLauncher"};
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				ace_sys_missileguidance_tracker = "TU_GSh23L";
				magazines[] = {"TU_460Rnd_23mm_GSh23L", "ACE_1Rnd_B8V20", "ACE_1Rnd_B8V20", "ACE_1Rnd_B8V20", "ACE_1Rnd_B8V20", "ACE_4Rnd_AT9_Mi24V"};
				weapons[] = {"TU_GSh23L", "TU_AT9Launcher_Mi24"};
			};
		};
	};
	
	class TU_Mi24_VP2: Mi24_V_base {
		scope = 2;
		displayname = $STR_Mi24_VP2;
		vehicleclass = "TU_VVS_RF";
		magazines[] = {"80Rnd_80mm", "120Rnd_CMFlareMagazine"};
		weapons[] = {"ACE_S8Launcher", "CMFlareLauncher"};
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				ace_sys_missileguidance_tracker = "TU_GSh23L";
				weapons[] = {"TU_GSh23L", "TU_AT9Launcher_Mi24","TU_IglaLauncher"};
				magazines[] = {"TU_460Rnd_23mm_GSh23L",
		//outer pod 1,2
				"TU_2Rnd_AT6_pod",
		//mid pod 3,4
				"TU_2Rnd_S8_Heli_Pod",
		//inner pod 5,6
				"TU_2Rnd_S8_Heli_Pod",
		//outer 2x rack 7-10
				"TU_4Rnd_Empty",
		//mid 2x rack 11-14
				"TU_4Rnd_Empty",
		//outer igla 1x 15,16
				"TU_2Rnd_Igla_solo_Pod",
		//mid 4x rack 17-24
				"TU_8Rnd_Empty",
		//inner 4x rack 25-32
				"TU_8Rnd_Empty",
		//invisible
				"ACE_4Rnd_AT9_Mi24V", "TU_1Rnd_Igla", "TU_1Rnd_Igla"
				};
			};
		};
	};
	
	class TU_Mi24_VP_8AT: Mi24_V_base {
		scope = 2;
		displayname = $STR_Mi24_VP_8AT;
		vehicleclass = "TU_VVS_RF";
		magazines[] = {"80Rnd_80mm", "120Rnd_CMFlareMagazine"};
		weapons[] = {"ACE_S8Launcher", "CMFlareLauncher"};
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				ace_sys_missileguidance_tracker = "TU_GSh23L";
				weapons[] = {"TU_GSh23L", "TU_AT9Launcher_Mi24"};
				magazines[] = {"TU_460Rnd_23mm_GSh23L",
		//outer pod 1,2
				"TU_2Rnd_AT6_x4pod",
		//mid pod 3,4
				"TU_2Rnd_S8_Heli_Pod",
		//inner pod 5,6
				"TU_2Rnd_S8_Heli_Pod",
		//outer 2x rack 7-10
				"TU_4Rnd_Empty",
		//mid 2x rack 11-14
				"TU_4Rnd_Empty",
		//outer igla 1x 15,16
				"TU_2Rnd_Empty",
		//mid 4x rack 17-24
				"TU_8Rnd_Empty",
		//inner 4x rack 25-32
				"TU_8Rnd_Empty",
		//invisible
				"TU_8Rnd_AT9_Mi24V"
				};
			};
		};
	};
	
	class TU_Mi24_VP_4AT_2AA: Mi24_V_base {
		scope = 2;
		displayname = $STR_Mi24_VP_4AT_2AA;
		vehicleclass = "TU_VVS_RF";
		magazines[] = {"40Rnd_80mm", "120Rnd_CMFlareMagazine"};
		weapons[] = {"ACE_S8Launcher", "CMFlareLauncher"};
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				ace_sys_missileguidance_tracker = "TU_GSh23L";
				weapons[] = {"TU_GSh23L", "TU_AT9Launcher_Mi24","R60MLauncher"};
				magazines[] = {"TU_460Rnd_23mm_GSh23L","TU_2Rnd_AT6_pod","TU_2Rnd_R60M",
		//inner pod 5,6
				"TU_2Rnd_S8_Heli_Pod",
		//outer 2x rack 7-10
				"TU_4Rnd_Empty",
		//mid 2x rack 11-14
				"TU_4Rnd_Empty",
		//outer igla 1x 15,16
				"TU_2Rnd_Empty",
		//mid 4x rack 17-24
				"TU_8Rnd_Empty",
		//inner 4x rack 25-32
				"TU_8Rnd_Empty",
				"ACE_4Rnd_AT9_Mi24V"};
			};
		};
	};
	
	class TU_Mi24_VP_4AT_4AA: Mi24_V_base {
		scope = 2;
		displayname = $STR_Mi24_VP_4AT_4AA;
		vehicleclass = "TU_VVS_RF";
		magazines[] = {"40Rnd_80mm", "120Rnd_CMFlareMagazine"};
		weapons[] = {"ACE_S8Launcher", "CMFlareLauncher"};
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				ace_sys_missileguidance_tracker = "TU_GSh23L";
				weapons[] = {"TU_GSh23L", "TU_AT9Launcher_Mi24","TU_IglaLauncher"};
				magazines[] = {"TU_460Rnd_23mm_GSh23L","TU_2Rnd_Igla_Pod",
		//mid pod 3,4
				"TU_2Rnd_AT6_pod",
		//inner pod 5,6
				"TU_2Rnd_S8_Heli_Pod",
		//outer 2x rack 7-10
				"TU_4Rnd_Empty",
		//mid 2x rack 11-14
				"TU_4Rnd_Empty",
		//outer igla 1x 15,16
				"TU_2Rnd_Empty",
		//mid 4x rack 17-24
				"TU_8Rnd_Empty",
		//inner 4x rack 25-32
				"TU_8Rnd_Empty",
				"ACE_4Rnd_AT9_Mi24V", "TU_1Rnd_Igla", "TU_1Rnd_Igla", "TU_1Rnd_Igla", "TU_1Rnd_Igla"};
			};
		};
	};
	
	class TU_Mi24_VP_4AA: Mi24_V_base {
		scope = 2;
		displayname = $STR_Mi24_VP_4AA;
		vehicleclass = "TU_VVS_RF";
		magazines[] = {"80Rnd_80mm", "120Rnd_CMFlareMagazine"};
		weapons[] = {"ACE_S8Launcher", "CMFlareLauncher"};
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				ace_sys_missileguidance_tracker = "TU_GSh23L";
				weapons[] = {"TU_GSh23L","TU_IglaLauncher"};
				magazines[] = {"TU_460Rnd_23mm_GSh23L",
		//outer pod 1,2
				"TU_2Rnd_Igla_Pod",
		//mid pod 3,4
				"TU_2Rnd_S8_Heli_Pod",
		//inner pod 5,6
				"TU_2Rnd_S8_Heli_Pod",
		//outer 2x rack 7-10
				"TU_4Rnd_Empty",
		//mid 2x rack 11-14
				"TU_4Rnd_Empty",
		//outer igla 1x 15,16
				"TU_2Rnd_Igla_solo_Pod",
		//mid 4x rack 17-24
				"TU_8Rnd_Empty",
		//inner 4x rack 25-32
				"TU_8Rnd_Empty", "TU_1Rnd_Igla", "TU_1Rnd_Igla", "TU_1Rnd_Igla", "TU_1Rnd_Igla", "TU_1Rnd_Igla", "TU_1Rnd_Igla"
				};
			};
		};
	};
		
	class TU_Mi24_V_TK: ACE_Mi24_V_CDF {
		hiddenselections[] = {"Camo1", "Camo2", "Camo3"};
		hiddenselectionstextures[] = {"\Ca\Air_E\Data\mi35_001_IND_co.paa", "\Ca\Air_E\Data\mi35_002_IND_co.paa", "\Ca\Air_E\Data\mi35_mlod_IND_co.paa"};
		side = 0;
		faction = "BIS_TK";
		vehicleclass = "TU_VVS_TK";
		crew = "TK_Soldier_Pilot_EP1";
	};
	
	class TU_Mi24_V_UPK23_TK: ACE_Mi24_V_UPK23_CDF {
		hiddenselections[] = {"Camo1", "Camo2", "Camo3"};
		hiddenselectionstextures[] = {"\Ca\Air_E\Data\mi35_001_IND_co.paa", "\Ca\Air_E\Data\mi35_002_IND_co.paa", "\Ca\Air_E\Data\mi35_mlod_IND_co.paa"};
		side = 0;
		faction = "BIS_TK";
		vehicleclass = "TU_VVS_TK";
		crew = "TK_Soldier_Pilot_EP1";
	};
	
	class TU_Mi24_V_FAB250_TK: ACE_Mi24_V_FAB250_CDF {
		hiddenselections[] = {"Camo1", "Camo2", "Camo3"};
		hiddenselectionstextures[] = {"\Ca\Air_E\Data\mi35_001_IND_co.paa", "\Ca\Air_E\Data\mi35_002_IND_co.paa", "\Ca\Air_E\Data\mi35_mlod_IND_co.paa"};
		side = 0;
		faction = "BIS_TK";
		vehicleclass = "TU_VVS_TK";
		crew = "TK_Soldier_Pilot_EP1";
	};
	
	class TU_Mi24_V_8AT_TK: TU_Mi24_V_8AT_CDF {
		hiddenselections[] = {"Camo1", "Camo2", "Camo3"};
		hiddenselectionstextures[] = {"\Ca\Air_E\Data\mi35_001_IND_co.paa", "\Ca\Air_E\Data\mi35_002_IND_co.paa", "\Ca\Air_E\Data\mi35_mlod_IND_co.paa"};
		side = 0;
		faction = "BIS_TK";
		vehicleclass = "TU_VVS_TK";		
		crew = "TK_Soldier_Pilot_EP1";
	};
	
	class TU_Mi24_V_4AT_4AA_TK: TU_Mi24_V_4AT_4AA_CDF {
		hiddenselections[] = {"Camo1", "Camo2", "Camo3"};
		hiddenselectionstextures[] = {"\Ca\Air_E\Data\mi35_001_IND_co.paa", "\Ca\Air_E\Data\mi35_002_IND_co.paa", "\Ca\Air_E\Data\mi35_mlod_IND_co.paa"};
		side = 0;
		faction = "BIS_TK";
		vehicleclass = "TU_VVS_TK";		
		crew = "TK_Soldier_Pilot_EP1";
	};
		 
	class TU_Mi24_V_4AA_TK: TU_Mi24_V_4AA_CDF {
		hiddenselections[] = {"Camo1", "Camo2", "Camo3"};
		hiddenselectionstextures[] = {"\Ca\Air_E\Data\mi35_001_IND_co.paa", "\Ca\Air_E\Data\mi35_002_IND_co.paa", "\Ca\Air_E\Data\mi35_mlod_IND_co.paa"};
		side = 0;
		faction = "BIS_TK";
		vehicleclass = "TU_VVS_TK";		
		crew = "TK_Soldier_Pilot_EP1";
	};
	
	class TU_Mi24_V_UN : ACE_Mi24_V_CDF {
		scope = 2;
		displayName = $STR_Mi35;
		crew = "UN_CDF_Soldier_Pilot_EP1";
		typicalCargo[] = {""};
		side = 2;
		faction = "BIS_UN";
		vehicleclass = "Air";
		hiddenSelectionsTextures[] = {"tu_air\data\mi24v_UN1.paa", "tu_air\data\mi24v_UN2.paa", "tu_air\data\UN_Mi24_Mlod.paa"};
	};
	
	class TU_Mi24_V_FAB250_UN : ACE_Mi24_V_FAB250_CDF {
		scope = 2;
		displayName = $STR_MI35_FAB250;
		crew = "UN_CDF_Soldier_Pilot_EP1";
		typicalCargo[] = {""};
		side = 2;
		faction = "BIS_UN";
		vehicleclass = "Air";
		hiddenSelectionsTextures[] = {"tu_air\data\mi24v_UN1.paa", "tu_air\data\mi24v_UN2.paa", "tu_air\data\UN_Mi24_Mlod.paa"};
	};
	
	class TU_Mi24_V_UPK23_UN : ACE_Mi24_V_UPK23_CDF {
		scope = 2;
		displayName = $STR_MI35_UPK23;
		crew = "UN_CDF_Soldier_Pilot_EP1";
		typicalCargo[] = {""};
		side = 2;
		faction = "BIS_UN";
		vehicleclass = "Air";
		hiddenSelectionsTextures[] = {"tu_air\data\mi24v_UN1.paa", "tu_air\data\mi24v_UN2.paa", "tu_air\data\UN_Mi24_Mlod.paa"};
	};
		
	class TU_Mi24_D_UN : Mi24_D {
		memorypointlmissile = "Missile_1";
		memorypointlrocket = "Rocket_1";
		memorypointrmissile = "Missile_2";
		memorypointrrocket = "Rocket_2";
		scope = 2;
		displayName = $STR_Mi25;
		crew = "UN_CDF_Soldier_Pilot_EP1";
		typicalCargo[] = {""};
		side = 2;
		faction = "BIS_UN";
		vehicleclass = "Air";
		hiddenSelectionsTextures[] = {"tu_air\data\mi24v_UN1.paa", "tu_air\data\mi24v_UN2.paa", "tu_air\data\UN_Mi24_Mlod.paa"};
	};
		
	class Mi17_base: Helicopter {
		displayName = $STR_TU_MI8_MTV;
		model = "\ca\Air_E\Mi17\Mi_8MT";
  		driverAction = "Mi8_Pilot";
  		cargoIsCoDriver[] = {1,1,0};
  		cargoAction[] = {"Mi8_Cargo","Mi17_Cargo02"};
  		driverCompartments = "Compartment1";
  		cargoCompartments[] = {"Compartment1","Compartment1","Compartment2"};
		transportsoldier = 15;
		class Turrets: Turrets {
			class MainTurret;
			class BackTurret;
		};
	};
	class Mi17_base_RU: Mi17_base	{};
	class Mi17_base_Ins: Mi17_base {};
	class Mi17_base_CDF: Mi17_base {};
	class Mi17_base_TK_EP1: Mi17_base {};
	class Mi17_base_UN_EP1: Mi17_base {};
	class Mi17_Civilian_base_Ru: Mi17_base {};
	class Mi17_medevac_base: Mi17_base {
		displayName = $STR_TU_MI8_MTVM;
		magazines[] = {"120Rnd_CMFlare_Chaff_Magazine"};
		weapons[] = {"CMFlareLauncher"};
		model = "\ca\Air_E\Mi17\Mi_8AMT";
		transportsoldier = 17;
	};
	class Mi17_medevac_base_Ru: Mi17_medevac_base {};
	class Mi17_medevac_base_Ins: Mi17_medevac_base {};
	class Mi17_medevac_base_CDF: Mi17_medevac_base {};


/////////////////////////////////////////////////////////////
//Mi8MTVM
	class Mi17_medevac_RU: Mi17_medevac_base_Ru {
		displayName = $STR_TU_MI8_MTVM;
		model = "\ca\Air_E\Mi17\Mi_8AMT";
		typicalCargo[] = {"RU_Soldier_Pilot","RU_Soldier_Pilot","RU_Soldier_Medic","RU_Soldier_Medic"};
	};	
	class mi17_medevac_Ins: Mi17_medevac_base_Ins {
		displayName = $STR_TU_MI8_MTVM;
		model = "\ca\Air_E\Mi17\Mi_8AMT";
		typicalCargo[] = {"INS_Soldier_Pilot","INS_Soldier_Pilot","INS_Soldier_Medic","INS_Soldier_Medic"};
	};
//Mi17-1VA
	class mi17_medevac_CDF: Mi17_medevac_base_CDF {
		crew = "CDF_Soldier_Pilot";
		displayName = $STR_TU_MI17_1VA;
		model = "\ca\Air_E\Mi17\Mi_8AMT";
		typicalCargo[] = {"CDF_Soldier_Pilot","CDF_Soldier_Pilot","CDF_Soldier_Medic","CDF_Soldier_Medic"};
	};
	class TU_Mi17_1VA_TAK: Mi17_medevac_RU {
		crew = "TK_Soldier_Pilot_EP1";
		displayName = $STR_TU_MI17_1VA;
		faction = "BIS_TK";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"\ca\air_E\Data\mi17_body_IND_CO.paa","\ca\air_E\Data\mi17_det_IND_CO.paa","\ca\air\data\clear_empty.paa","\ca\air\data\mi8_decals_ca.paa"};
		model = "\ca\Air_E\Mi17\Mi_8AMT";
		typicalCargo[] = {"TK_Soldier_Pilot_EP1","TK_Soldier_Pilot_EP1","TK_Soldier_Medic_EP1","TK_Soldier_Medic_EP1"};
		side = 0;
	};
	class TU_Mi17_1VA_UN: mi17_medevac_CDF {
		crew = "UN_CDF_Soldier_pilot_EP1";
		displayName = $STR_TU_MI17_1VA;
		faction = "BIS_UN";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"\ca\air_E\Data\mi17_body_UN_CO.paa","\ca\air_E\Data\mi17_det_UN_CO.paa","\ca\air_E\Data\mi17_decals2_UN_CA.paa","\ca\air_E\Data\mi17_decals_UN_CA.paa"};
		model = "\ca\Air_E\Mi17\Mi_8AMT";
		typicalCargo[] = {"UN_CDF_Soldier_pilot_EP1","UN_CDF_Soldier_pilot_EP1","CDF_Soldier_Medic","CDF_Soldier_Medic"};
		side = 2;
	};
	class TU_Mi17_1VA_CZ: mi17_medevac_CDF {
		crew = "CZ_Soldier_Pilot_EP1";
		displayName = $STR_TU_MI17_1VA;
		faction = "BIS_CZ";
		side = 1;
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenselectionstextures[] = {"\CA\air_E\data\mi17_body_ACR_CO.paa", "\CA\air_E\data\mi17_det_ACR_CO.paa", "\ca\air_E\Data\mi17_decals2_ACR_CA.paa", "\ca\air\data\mi8_decals_ca.paa"};
		model = "\ca\Air_E\Mi17\Mi_8AMT";
		typicalCargo[] = {"CZ_Soldier_Pilot_EP1","CZ_Soldier_Pilot_EP1","CZ_Soldier_Medic_Wdl_ACR","CZ_Soldier_Medic_Wdl_ACR"};
	};
//Mi-8MTVM
	class TU_Mi8_MTVM_CIV: Mi17_medevac_RU {
		crew = "RU_Pilot";
		displayName = $STR_TU_MI8_MTVM;
		faction = "CIV";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"\FRL_Mi17\data\mi8mchs_body_g_CO.paa","\ca\air\data\mi8civil_det_g_CO.paa","\ca\air\data\clear_empty.paa","\ca\air\data\mi8_decals_ca.paa"};
		model = "\ca\Air_E\Mi17\Mi_8AMT";
		typicalCargo[] = {"RU_Pilot","RU_Pilot","RU_Doctor","RU_Doctor"};
		side = 3;
	};
/////////////////////////////////////////////////////////////////////
//Mi8MTV
	class Mi17_Ins: Mi17_base_Ins {
		displayName = $STR_TU_MI8_MTV;
		model = "\ca\Air_E\Mi17\Mi_8MT";
	};	
//Mi17-1V
	class Mi17_CDF: Mi17_base_CDF {
		displayName = $STR_TU_MI17_1V;
		model = "\ca\Air_E\Mi17\Mi_8MT";
		vehicleclass = "TU_VVS_CDF";
	};	
	class Mi17_TK_EP1: Mi17_base_TK_EP1	{
		displayName = $STR_TU_MI17_1V;
		model = "\ca\Air_E\Mi17\Mi_8MT";
		vehicleClass = "TU_VVS_TK";
	};
	class Mi17_UN_CDF_EP1: Mi17_base_UN_EP1 {
		displayName = $STR_TU_MI17_1V;
		model = "\ca\Air_E\Mi17\Mi_8MT";
	};
//////////////////////////////////////////////////////////////////////////
//Mi8MTV3 and Mi17-3V base

	class ACE_Mi17_RU: Mi17_base_RU {
		selectionFireAnim = "zasleh_1";
		gunBeg[] = {"muzzle_4", "muzzle_5"};
		gunEnd[] = {"chamber_4", "chamber_5"};
		accuracy = 1000;
		ace_lademeister = 1;
		crew = "RU_Soldier_Pilot";
		displayname = $STR_TU_MI8_MTV3;
		enablesweep = 1;
		faction = "RU";
		gunnerusespilotview = 1;
  		transportSoldier = 14;
		hiddenselectionstextures[] = {"\ca\air\data\mi8_body_g_vsr_co.paa", "ca\air\data\mi8_det_g_co.paa", "ca\air\data\clear_empty.paa", "ca\air\data\mi8_decals_ca.paa"};
		icon = "\ca\air\data\map_ico\icomap_mi17_CA.paa";
		magazines[] = {"TU_18Rnd_Empty", "120Rnd_CMFlareMagazine"};
		mapsize = 25;
		model = "\FRL_Mi17\FRL_Mi8_TV";
		scope = 2;
		side = 0;
		threat[] = {0.8, 0.8, 0.6};
		typicalcargo[] = {"RU_Soldier_Pilot", "RU_Soldier_Pilot", "RU_Soldier_AT", "RU_Soldier_MG"};
		vehicleclass = "TU_VVS_RF";
		weapons[] = {"CMFlareLauncher"};
		class Turrets: Turrets {
			class SideTurret: MainTurret {
				ace_lademeister = 1;
				ace_viewport = -90;
				commanding = -1;
				gunnerName = "$STR_POSITION_DOORGUNNER";
				primarygunner = 0;
				proxyindex = 2;
			};
			class BackTurret: BackTurret {
				ace_lademeister = 1;
				ace_viewport = 110;
				commanding = -3;
				gunnerName = "$STR_POSITION_REARGUNNER";
				primarygunner = 0;
				proxyindex = 3;
			};
			class FrontTurret: MainTurret {
				ace_lademeister = 0;
				ace_viewport = 360;
				animationsourcebody = "Turret_3";
				animationsourcegun = "Gun_3";
				body = "Turret_3";
				commanding = -1;
				gun = "Gun_3";
				gunbeg = "muzzle_3";
				gunend = "chamber_3";
				gunneraction = "Mi8_Gunner";
				gunnerinaction = "Mi8_Gunner";
				gunnerName = "$STR_POSITION_CREWCHIEF";
				initelev = -10;
				initturn = 0;
				maxelev = 25;
				maxturn = 44;
				memorypointgun = "muzzle_3";
				memorypointgunneroptics = "gunnerview3";
				minelev = -80;
				minturn = -44;
				primarygunner = 1;
				proxyindex = 1;
				selectionfireanim = "zasleh3";
				stabilizedinaxes = "StabilizedInAxesNone";
				weapons[] = {"ACE_PKT_out_3"};
			};
		};
		class AnimationSources: AnimationSources {
			class HUDaction {
				animperiod = 0;
				initphase = 1;
				source = "user";
			};
			class HUDaction_Hide
			{
				source = "user";
				animPeriod = 2;
				initPhase = 1;
			};	
			class ReloadAnim_3 {
				source = "reload";
				weapon = "ACE_PKT_out_3";
			};
			class ReloadMagazine_3 {
				source = "reloadmagazine";
				weapon = "ACE_PKT_out_3";
			};
			class Revolving_3 {
				source = "revolving";
				weapon = "ACE_PKT_out_3";
			};
			class HIDE_weapon_holders{
				source = "user";
				animPeriod = 1e-007;
				initPhase = 1;
			};
			class HIDE_front_armor: HIDE_weapon_holders	{
				initPhase = 0;
			};
			class HIDE_exhaust: HIDE_weapon_holders	{
				initPhase = 0;
			};
		};
		class MarkerLights {};
	};
//civ transport
	class Mi17_Civilian: Mi17_Civilian_base_Ru {
		displayName = $STR_TU_MI17_1V;
		model = "\ca\Air_E\Mi17\Mi_8AMT";
		transportsoldier = 17;
	};
//////////////////////////////////////////////////////////////////////////
//Mi8MTV3
	class Mi17_rockets_RU: ACE_Mi17_RU {
		accuracy = 1000;
		ace_lademeister = 1;
		crew = "RU_Soldier_Pilot";
		displayname = $STR_TU_MI8_MTV3_S8;
		enablesweep = 1;
		faction = "RU";
		gunnerusespilotview = 1;
		icon = "\ca\air\data\map_ico\icomap_mi17_CA.paa";
		mapsize = 25;
		model = "\FRL_Mi17\FRL_Mi8_MTV3";
		picture = "\ca\air\data\ico\mi17_HIP_CA.paa";
		scope = 2;
		side = 0;
		threat[] = {0.8, 0.8, 0.6};
		typicalcargo[] = {"RU_Soldier_Pilot", "RU_Soldier_Pilot", "RU_Soldier_AT", "RU_Soldier_MG"};
		vehicleclass = "TU_VVS_RF";
		weapons[] = {"ACE_S8Launcher", "CMFlareLauncher"};
		magazines[] = {
		//outer
		"TU_2Rnd_S8_Heli_Pod",
		//inner
		"TU_2Rnd_S8_Heli_Pod",
		//invisible
		"80Rnd_80mm","120Rnd_CMFlareMagazine"};
		class AnimationSources {
			class HitGlass1 {
				hitpoint = "HitGlass1";
				raw = 1;
				source = "Hit";
			};
			class HitGlass2: HitGlass1 {
				hitpoint = "HitGlass2";
				raw = 1;
				source = "Hit";
			};
			class HitGlass3: HitGlass1 {
				hitpoint = "HitGlass3";
				raw = 1;
				source = "Hit";
			};
			class HitGlass4: HitGlass1 {
				hitpoint = "HitGlass4";
				raw = 1;
				source = "Hit";
			};
			class HitGlass5: HitGlass1 {
				hitpoint = "HitGlass5";
				raw = 1;
				source = "Hit";
			};
			class HitGlass6: HitGlass1 {
				hitpoint = "HitGlass6";
				raw = 1;
				source = "Hit";
			};
			class ReloadAnim {
				source = "reload";
				weapon = "ACE_PKT_out";
			};
			class ReloadMagazine {
				source = "reloadmagazine";
				weapon = "ACE_PKT_out";
			};
			class Revolving {
				source = "revolving";
				weapon = "ACE_PKT_out";
			};
			class ReloadAnim_2 {
				source = "reload";
				weapon = "ACE_PKT_out_2";
			};
			class ReloadMagazine_2 {
				source = "reloadmagazine";
				weapon = "ACE_PKT_out_2";
			};
			class Revolving_2 {
				source = "revolving";
				weapon = "ACE_PKT_out_2";
			};
			class HUDaction {
				animperiod = 1;
				initphase = 0;
				source = "user";
			};
			class HUDaction_Hide: HUDaction {
				animperiod = 1;
				initphase = 0;
				source = "user";
			};
			class ReloadAnim_3 {
				source = "reload";
				weapon = "ACE_PKT_out_3";
			};
			class ReloadMagazine_3 {
				source = "reloadmagazine";
				weapon = "ACE_PKT_out_3";
			};
			class Revolving_3 {
				source = "revolving";
				weapon = "ACE_PKT_out_3";
			};
		};
		class MarkerLights {
			class RedStill {
				ambient[] = {0.1, 0.01, 0.01, 1};
				blinking = 0;
				brightness = 0.001;
				color[] = {0.12, 0.006, 0.006, 1};
				name = "cerveny pozicni";
			};
			class GreenStill {
				ambient[] = {0.01, 0.1, 0.01, 1};
				blinking = 0;
				brightness = 0.001;
				color[] = {0.006, 0.12, 0.006, 1};
				name = "zeleny pozicni";
			};
			class WhiteStill {
				ambient[] = {0.03, 0.023, 0.0056, 1};
				blinking = 0;
				brightness = 0.001;
				color[] = {0.0388, 0.0388, 0.0388, 1};
				name = "bily pozicni";
			};
			class WhiteBlinking {
				ambient[] = {0.03, 0.023, 0.0056, 1};
				blinking = 1;
				brightness = 0.001;
				color[] = {0.0388, 0.0388, 0.0388, 1};
				name = "bily pozicni blik";
			};
			class RedBlinking {
				ambient[] = {0.1, 0.01, 0.01, 1};
				blinking = 1;
				brightness = 0.001;
				color[] = {0.12, 0.006, 0.006, 1};
				name = "cerveny pozicni blik";
			};
		};
	};
	class TU_Mi8_MTV3_S5_RU: Mi17_rockets_RU {
		displayname = $STR_TU_MI8_MTV3_S5;
		weapons[] = {"57mmLauncher", "CMFlareLauncher"};
		magazines[] = {
		//outer
		"TU_2Rnd_UB32_Pod",
		//inner
		"TU_2Rnd_UB32_Pod",
		//invisible
		"128Rnd_57mm","120Rnd_CMFlareMagazine"};
	};
	class TU_Mi8_MTV3_UPK23_RU: Mi17_rockets_RU {
		displayname = $STR_TU_MI8_MTV3_UPK23;
		weapons[] = {"ACE_S8Launcher", "ACE_UPK23", "CMFlareLauncher"};
		magazines[] = {
		//outer
		"TU_2Rnd_UPK23_Pod",
		//inner
		"TU_2Rnd_S8_Heli_Pod",
		//invisible
		"ACE_500Rnd_23mm_UPK23","40Rnd_80mm","120Rnd_CMFlareMagazine"};
	};
	class TU_Mi8_MTV3_Ins: Mi17_rockets_RU {
		crew = "Ins_Soldier_Pilot";
		typicalcargo[] = {"Ins_Soldier_Pilot", "Ins_Soldier_Pilot", "Ins_Soldier_AT", "Ins_Soldier_MG"};
		faction = "INS";
		side = 0;
		vehicleclass = "Air";
		hiddenselectionstextures[] = {"\ca\air\Data\mi8_body_g_CHDKZ_CO.paa", "ca\air\data\mi8_det_g_co.paa", "ca\air\data\clear_empty.paa", "ca\air\data\mi8_decals_ca.paa"};
		displayname = $STR_TU_MI8_MTV3_S5;
		weapons[] = {"57mmLauncher", "CMFlareLauncher"};
		magazines[] = {
		//outer
		"TU_2Rnd_UB32_Pod",
		//inner
		"TU_2Rnd_UB32_Pod",
		//invisible
		"128Rnd_57mm","120Rnd_CMFlareMagazine"};
	};
//Mi17-3V
	class TU_Mi17_3V_CDF: Mi17_rockets_RU {
		crew = "CDF_Soldier_Pilot";
		typicalcargo[] = {"CDF_Soldier_Pilot", "CDF_Soldier_Pilot", "CDF_Soldier_AT", "CDF_Soldier_MG"};
		faction = "CDF";
		side = 1;
		hiddenselectionstextures[] = {"\CA\air\data\mi8_body_g_CDF_CO.paa", "ca\air\data\mi8_det_g_co.paa", "ca\air\data\clear_empty.paa", "ca\air\data\mi8_decals_ca.paa"};
		vehicleclass = "TU_VVS_CDF";
		displayname = $STR_TU_MI17_3V_S8;
		weapons[] = {"ACE_S8Launcher", "CMFlareLauncher"};
		magazines[] = {
		//outer
		"TU_2Rnd_S8_Heli_Pod",
		//inner
		"TU_2Rnd_S8_Heli_Pod",
		//invisible
		"80Rnd_80mm","120Rnd_CMFlareMagazine"};
	};	
	class TU_Mi17_3V_S5_CDF: TU_Mi17_3V_CDF	{
		displayname = $STR_TU_MI17_3V_S5;
		weapons[] = {"57mmLauncher", "CMFlareLauncher"};
		magazines[] = {
		//outer
		"TU_2Rnd_UB32_Pod",
		//inner
		"TU_2Rnd_UB32_Pod",
		//invisible
		"128Rnd_57mm","120Rnd_CMFlareMagazine"};
	};
	class TU_Mi17_3V_UPK23_CDF: TU_Mi17_3V_CDF {
		displayname = $STR_TU_MI17_3V_UPK23;
		weapons[] = {"57mmLauncher", "ACE_UPK23", "CMFlareLauncher"};
		magazines[] = {
		//outer
		"TU_2Rnd_UPK23_Pod",
		//inner
		"TU_2Rnd_UB32_Pod",
		//invisible
		"ACE_500Rnd_23mm_UPK23","64Rnd_57mm","120Rnd_CMFlareMagazine"};
	};
	class TU_Mi17_3V_TK: Mi17_rockets_RU {
		crew = "TK_Soldier_Pilot_EP1";
		typicalcargo[] = {"TK_Soldier_Pilot_EP1","TK_Soldier_Pilot_EP1"};
		faction = "BIS_TK";
		side = 0;
		hiddenselectionstextures[] = {"\ca\air_E\Data\mi17_body_IND_CO.paa", "\ca\air_E\Data\mi17_det_IND_CO.paa", "\ca\air\data\clear_empty.paa", "\ca\air\data\mi8_decals_ca.paa"};
		vehicleclass = "TU_VVS_TK";
		displayname = $STR_TU_MI17_3V_S8;
		weapons[] = {"ACE_S8Launcher", "CMFlareLauncher"};
		magazines[] = {
		//outer
		"TU_2Rnd_S8_Heli_Pod",
		//inner
		"TU_2Rnd_S8_Heli_Pod",
		//invisible
		"80Rnd_80mm","120Rnd_CMFlareMagazine"};
	};
	class TU_Mi17_3V_S5_TK: TU_Mi17_3V_TK {
		displayname = $STR_TU_MI17_3V_S5;
		weapons[] = {"57mmLauncher", "CMFlareLauncher"};
		magazines[] = {
		//outer
		"TU_2Rnd_UB32_Pod",
		//inner
		"TU_2Rnd_UB32_Pod",
		//invisible
		"128Rnd_57mm","120Rnd_CMFlareMagazine"};
	};
	class TU_Mi17_3V_UPK23_TK: TU_Mi17_3V_TK {
		displayname = $STR_TU_MI17_3V_UPK23;
		weapons[] = {"57mmLauncher", "ACE_UPK23", "CMFlareLauncher"};
		magazines[] = {
		//outer
		"TU_2Rnd_UPK23_Pod",
		//inner
		"TU_2Rnd_UB32_Pod",
		//invisible
		"ACE_500Rnd_23mm_UPK23","64Rnd_57mm","120Rnd_CMFlareMagazine"};
	};
	class TU_Mi17_3V_UN: Mi17_rockets_RU {
		crew = "UN_CDF_Soldier_pilot_EP1";
		typicalcargo[] = {"UN_CDF_Soldier_pilot_EP1", "UN_CDF_Soldier_pilot_EP1", "UN_CDF_Soldier_EP1", "UN_CDF_Soldier_EP1"};
		faction = "BIS_UN";
		side = 2;
		hiddenselectionstextures[] = {"\CA\air_E\data\mi17_body_UN_CO.paa", "\CA\air_E\data\mi17_det_UN_CO.paa", "\ca\air_E\Data\mi17_decals2_UN_CA.paa", "\ca\air_E\Data\mi17_decals_UN_CA.paa"};
		vehicleclass = "Air";
		displayname = $STR_TU_MI17_3V_S5;
		weapons[] = {"57mmLauncher", "CMFlareLauncher"};
		magazines[] = {
		//outer
		"TU_2Rnd_UB32_Pod",
		//inner
		"TU_2Rnd_UB32_Pod",
		//invisible
		"128Rnd_57mm","120Rnd_CMFlareMagazine"};
	};
//////////////////////////////////////////////////////////////////////////
//Mi8AMT and Mi171 base
	class TU_Mi8_AMT_Base: Mi17_base {
		scope = 0;
		displayName = $STR_TU_MI8_AMT;
		faction = "RU";
		crew = "RU_Soldier_Pilot";
		typicalCargo[] = {"RU_Soldier_Pilot","RU_Soldier_Pilot","RU_Soldier_Pilot","RUS_Soldier_AT","RUS_Soldier_MG"};
		accuracy = 1000;
		model = "\FRL_Mi17\FRL_Mi8_AMT";
		hiddenSelections[] = {"Camo5","Camo7"};
		hiddenSelectionsTextures[] = {"\FRL_Mi17\data\mi171_nov_co.paa","\ca\air\data\clear_empty.paa"};
  		armor = 35;
  		transportSoldier = 14;
		threat[] = {1,0.6,0.3};
		enableSweep = 1;
		side = 0;
		incommingmissliedetectionsystem = 16;
		lockdetectionsystem = 8;
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"120Rnd_CMFlare_Chaff_Magazine","TU_6Rnd_Empty"};
		class Turrets: Turrets
		{
			class LeftTurret: MainTurret
			{
				ace_lademeister = 1;
				ace_viewport = -90;
				commanding = -1;
				gunnerName = "$STR_POSITION_DOORGUNNER";
				initelev = 11;
				initturn = 80;
				maxelev = 30;
				maxturn = 155;
				minelev = -50;
				minturn = 20;
				primarygunner = 0;
				proxyindex = 2;
			};
			class BackTurret: BackTurret
			{
				ace_lademeister = 1;
				ace_viewport = -180;
				commanding = -3;
				gunneraction = "Mi171_Gunner_EP1";
				gunnerinaction = "Mi171_Gunner_EP1";
				gunnerName = "$STR_POSITION_REARGUNNER";
				initelev = 0;
				initturn = 180;
				maxelev = 10;
				maxturn = 230;
				minelev = -50;
				minturn = 130;
				primarygunner = 1;
				proxyindex = 3;
			};
			class RightTurret: MainTurret
			{
				ace_lademeister = 1;
				ace_viewport = 90;
				animationsourcebody = "Turret_3";
				animationsourcegun = "Gun_3";
				body = "Turret_3";
				commanding = -1;
				gun = "Gun_3";
				gunbeg = "muzzle_3";
				gunend = "chamber_3";
				gunneraction = "Mi8_Gunner";
				gunnerinaction = "Mi8_Gunner";
				gunnerName = "$STR_POSITION_CREWCHIEF";
				initelev = 11;
				initturn = -70;
				maxelev = 30;
				maxturn = -30;
				memorypointgun = "muzzle_3";
				memorypointgunneroptics = "gunnerview3";
				minelev = -60;
				minturn = -155;
				primarygunner = 0;
				proxyindex = 1;
				selectionfireanim = "zasleh3";
				stabilizedinaxes = "StabilizedInAxesNone";
				weapons[] = {"ACE_PKT_out_3"};
			};
		};
		class AnimationSources: AnimationSources
		{
			class HUDaction
			{
				source = "user";
				animPeriod = 2;
				initPhase = 1;
			};
			class HUDaction_Hide
			{
				source = "user";
				animPeriod = 2;
				initPhase = 1;
			};			
			class ReloadAnim_3 {
				source = "reload";
				weapon = "ACE_PKT_out_3";
			};
			class ReloadMagazine_3 {
				source = "reloadmagazine";
				weapon = "ACE_PKT_out_3";
			};
			class Revolving_3 {
				source = "revolving";
				weapon = "ACE_PKT_out_3";
			};
			class HIDE_weapon_holders{
				source = "user";
				animPeriod = 1e-007;
				initPhase = 1;
			};
			class HIDE_front_armor: HIDE_weapon_holders	{
				initPhase = 0;
			};
			class HIDE_exhaust: HIDE_weapon_holders	{
				initPhase = 0;
			};
		};
	};	
//////////////////////////////////////////////////////////////////////////
//Mi8AMT
	class TU_Mi8_AMT_RU: TU_Mi8_AMT_Base {
		vehicleclass = "TU_VVS_RF";
		selectionFireAnim = "zasleh_1";
		gunBeg[] = {"muzzle_4", "muzzle_5"};
		gunEnd[] = {"chamber_4", "chamber_5"};
		model = "\FRL_Mi17\FRL_Mi8_AMT_RU";
		scope = 2;
	};
//Mi171
	class Mi17_base_CZ_EP1: TU_Mi8_AMT_Base {	
		lockdetectionsystem = 0;
		accuracy = 0.5;
		expansion = 1;
		faction = "BIS_CZ";
		side = 1;
	};
	class Mi171Sh_Base_EP1: Mi17_base_CZ_EP1 {
		model = "\FRL_Mi17\FRL_Mi8_AMT";
		hiddenselectionstextures[] = {"\ca\air_e\Mi17\data\mi_171_co.paa", "\ca\air_E\Data\mi17_decals2_ACR_CA.paa"};
	};
	class Mi171Sh_CZ_EP1: Mi171Sh_Base_EP1 {
		selectionFireAnim = "zasleh_1";
		gunBeg[] = {"muzzle_4", "muzzle_5"};
		gunEnd[] = {"chamber_4", "chamber_5"};
		displayname = $STR_TU_MI171;
		scope = 2;
		class AnimationSources: AnimationSources {
			class HUDaction
			{
				source = "user";
				animPeriod = 2;
				initPhase = 1;
			};
			class HUDaction_Hide
			{
				source = "user";
				animPeriod = 2;
				initPhase = 1;
			};			
			class ReloadAnim_3 {
				source = "reload";
				weapon = "ACE_PKT_out_3";
			};
			class ReloadMagazine_3 {
				source = "reloadmagazine";
				weapon = "ACE_PKT_out_3";
			};
			class Revolving_3 {
				source = "revolving";
				weapon = "ACE_PKT_out_3";
			};
			class HIDE_weapon_holders{
				source = "user";
				animPeriod = 1e-007;
				initPhase = 1;
			};
			class HIDE_front_armor: HIDE_weapon_holders	{
				initPhase = 0;
			};
			class HIDE_exhaust: HIDE_weapon_holders	{
				initPhase = 0;
			};
		};
		class UserActions {};
	};
//////////////////////////////////////////////////////////////////////////
//Mi171Sh
	class Mi171Sh_rockets_CZ_EP1: Mi171Sh_Base_EP1 {	
		selectionFireAnim = "zasleh_1";
		gunBeg[] = {"muzzle_4", "muzzle_5"};
		gunEnd[] = {"chamber_4", "chamber_5"};	
		model = "\FRL_Mi17\FRL_Mi8_AMT";
		hiddenselectionstextures[] = {"\ca\air_e\Mi17\data\mi_171_co.paa", "\ca\air_E\Data\mi17_decals2_ACR_CA.paa"};
		displayname = $STR_TU_MI171Sh_S5;
		scope = 2;
		weapons[] = {"57mmLauncher", "CMFlareLauncher"};
		magazines[] = {
		//outer
		"TU_2Rnd_UB16_Pod",
		//mid lower
		"TU_2Rnd_UB16_Pod",
		//inner
		"TU_2Rnd_UB32_Pod",
		//invisible
		"128Rnd_57mm","120Rnd_CMFlareMagazine"};
		class AnimationSources: AnimationSources {
			class HUDaction {
				animperiod = 1;
				initphase = 0;
				source = "user";
			};
			class HUDaction_Hide: HUDaction {
			};
			class ReloadAnim_3 {
				source = "reload";
				weapon = "ACE_PKT_out_3";
			};
			class ReloadMagazine_3 {
				source = "reloadmagazine";
				weapon = "ACE_PKT_out_3";
			};
			class Revolving_3 {
				source = "revolving";
				weapon = "ACE_PKT_out_3";
			};
			class HIDE_weapon_holders {
				animperiod = "1e-007";
				initphase = 0;
				source = "user";
			};
			class HIDE_front_armor: HIDE_weapon_holders {
				initphase = 0;
			};
			class HIDE_exhaust: HIDE_weapon_holders {
				initphase = 0;
			};
		};
	};
//Mi8AMTSh
	class TU_Mi8_AMTSh_RU: Mi171Sh_rockets_CZ_EP1 {	
		vehicleclass = "TU_VVS_RF";
		lockdetectionsystem = 8;
		side = 0;
		faction = "RU";
		crew = "RU_Soldier_Pilot";
		model = "\FRL_Mi17\FRL_Mi8_AMT_RU";
		typicalCargo[] = {"RU_Soldier_Pilot","RU_Soldier_Pilot","RU_Soldier_Pilot","RUS_Soldier_AT","RUS_Soldier_MG"};
		hiddenSelectionsTextures[] = {"\FRL_Mi17\data\mi171_nov_co.paa","\ca\air\data\clear_empty.paa"};
		displayname = $STR_TU_MI8_AMTSh_S8;
		scope = 2;
		weapons[] = {"ACE_S8Launcher", "CMFlareLauncher"};
		magazines[] = {
		//outer
		"TU_2Rnd_S8_Heli_Pod",
		//mid
		"TU_2Rnd_S8_Heli_Pod",
		//inner
		"TU_2Rnd_S8_Heli_Pod",
		//invisible
		"120Rnd_80mm","120Rnd_CMFlareMagazine"};
	};
	class TU_Mi8_AMTSh_UPK23_RU: TU_Mi8_AMTSh_RU {
		displayname = $STR_TU_MI8_AMTSh_UPK23;
		weapons[] = {"ACE_S8Launcher", "ACE_UPK23", "CMFlareLauncher"};
		magazines[] = {
		//outer
		"TU_2Rnd_S8_Heli_Pod",
		//mid
		"TU_2Rnd_UPK23_Pod",
		//inner
		"TU_2Rnd_S8_Heli_Pod",
		//invisible
		"80Rnd_80mm","ACE_500Rnd_23mm_UPK23","120Rnd_CMFlareMagazine"};
	};
	class TU_Mi8_AMTSh_S5_RU: TU_Mi8_AMTSh_RU {
		displayname = $STR_TU_MI8_AMTSh_S5;
		weapons[] = {"57mmLauncher", "CMFlareLauncher"};
		magazines[] = {
		//outer
		"TU_2Rnd_UB16_Pod",
		//mid lower
		"TU_2Rnd_UB16_Pod",
		//inner
		"TU_2Rnd_UB32_Pod",
		//invisible
		"128Rnd_57mm","120Rnd_CMFlareMagazine"};
	};
	class TU_Mi8_AMTSh_FAB250_RU: TU_Mi8_AMTSh_RU {
		displayname = $STR_TU_MI8_AMTSh_FAB250;
		weapons[] = {"ACE_S8Launcher", "HeliBombLauncher", "CMFlareLauncher"};
		magazines[] = {
		//outer
		"TU_2Rnd_S8_Heli_Pod",
		//mid
		"TU_2Rnd_S8_Heli_Pod",
		//inner
		"TU_2Rnd_FAB_250",
		//invisible
		"80Rnd_80mm","120Rnd_CMFlareMagazine"};
	};
	class TU_Mi8_AMTSh_Ataka_RU: TU_Mi8_AMTSh_RU {
		displayname = $STR_TU_MI8_AMTSh_Ataka;
		weapons[] = {"ACE_S8Launcher", "AT9Launcher", "CMFlareLauncher"};
		magazines[] = {
		//outer
		"TU_2Rnd_AT6_pod",
		//mid
		"TU_2Rnd_S8_Heli_Pod",
		//inner
		"TU_2Rnd_S8_Heli_Pod",
		//invisible
		"80Rnd_80mm","4Rnd_AT9_Mi24P","120Rnd_CMFlareMagazine"};
	};
//////////////////////////////////////////////////////////////////////////
//Mi8TV
/*	class TU_Mi8_TV_RU: ACE_Mi17_RU {
		access = 0;
		accuracy = 1000;
		ace_air_fcs_enabled = 1;
		ace_camshake_enabled = 1;
		ace_canbecargo = 0;
		ace_canbeload = 1;
		ace_canfastrope = 1;
		ace_cangear = 0;
		ace_canlift = 1;
		ace_canloadfront = 0;
		ace_cargo_exposed = 0;
		ace_ejection_seat = "ParachuteC";
		ace_exposed = 0;
		ace_geolifterattachment[] = {{0, 1.9, -5.5}};
		ace_lademeister = 1;
		ace_maxload = 5900;
		ace_ropeattachment[] = {{0.03, -2.5, 0}, {-1.05, 5.1, -2.25}};
		ace_sys_air_rwr_type = "ACE_Default";
		ace_sys_autorotation_horizontal_gain = "1.0/75";
		ace_sys_autorotation_vertical_gain = "0.6/1.5";
		ace_sys_eject_eject = 0;
		ace_sys_eject_jump = 1;
		ace_sys_eject_side = 0;
		ace_sys_eject_weaponcheck = 1;
		ace_sys_repair_rearm = 0;
		ace_sys_repair_refuel = 0;
		ace_sys_repair_repair = 0;
		ace_sys_repair_spare_tyres = 0;
		ace_sys_repair_threshold = 0.8;
		ace_sys_repair_threshold_refuel = 1;
		ace_sys_repair_time = 900;
		ace_sys_tracking_marker = "b_air";
		ace_tankfcs_enabled = 0;
		ace_weight = 7100;
		ace_sa_defaultelevation = 0;
		ace_sa_defaultwindage = 0;
		ace_sa_enabled = 1;
		ace_sa_te_enabled = 1;
		afmax = 200;
		aggregatereflectors[] = {{"Left", "Right"}};
		alwaystarget = 0;
		animated = 1;
		armor = 25;
		armorlights = 0.4;
		armorstructural = 4;
		artilleryscanner = 0;
		artillerytarget = 0;
		attendant = 0;
		audible = 6;
		autocenter = 1;
		backrotorspeed = -3;
		brakedistance = 200;
		camouflage = 100;
		cargoaction[] = {"Mi8_Cargo", "Mi17_Cargo02"};
		cargocompartments[] = {"Compartment2"};
		cargogetinaction[] = {"GetInLow"};
		cargogetoutaction[] = {"GetOutLow"};
		cargoiscodriver[] = {1, 0};
		castcargoshadow = 0;
		castdrivershadow = 0;
		commandercansee = "1+2+4+16";
		cost = "3e+006";
		crew = "RU_Soldier_Pilot";
		crewvulnerable = 1;
		damageeffect = "DamageSmokeHeli";
		damageresistance = 0.00172;
		dammagefull[] = {};
		dammagehalf[] = {};
		destrtype = "DestructWreck";
		displayname = "Mi-8TV";
		driveraction = "Mi8_Pilot";
		drivercansee = "1+2+4+16";
		drivercompartments = "Compartment1";
		driverforceoptics = 0;
		driverinaction = "";
		driveropticscolor[] = {1, 1, 1, 1};
		driveropticseffect[] = {};
		driveropticsmodel = "";
		dusteffect = "HeliDust";
		ejectdamagelimit = 0.9999;
		ejectdeadcargo = 0;
		ejectdeaddriver = 0;
		enablegps = 1;
		enablemanualfire = 0;
		enableradio = 0;
		enablesweep = 1;
		enablewatch = 0;
		engineer = 0;
		envelope[] = {0, 0.2, 0.9, 2.1, 2.5, 3.3, 3.5, 3.6, 3.7, 3.8, 3.8, 3, 0.9, 0.7, 0.5};
		extcameraposition[] = {0, 2, -20};
		faction = "RU";
		featuresize = 0;
		flarevelocity = 100;
		forcehidedriver = 0;
		formationtime = 10;
		formationx = 50;
		formationz = 100;
		fuelcapacity = 1000;
		geardowntime = 2;
		gearretracting = 0;
		gearuptime = 3.33;
		getinaction = "GetInLow";
		getinradius = 5;
		getoutaction = "GetOutLow";
		ghostpreview = "";
		groupcameraposition[] = {0, 5, -30};
		gunnercansee = "1+2+4+8+16";
		gunnerhasflares = 1;
		gunnerusespilotview = 1;
		hasdriver = 1;
		headaimdown = 0;
		hiddenselections[] = {"Camo1", "Camo2", "Camo3", "Camo4"};
		hiddenselectionstextures[] = {"\tu_vehicles\data\mi8_body_sov_co.paa", "ca\air\data\mi8_det_g_co.paa", "ca\air\data\clear_empty.paa", "ca\air\data\mi8_decals_ca.paa"};
		hideproxyincombat = 0;
		hideunitinfo = 0;
		hideweaponscargo = 0;
		hideweaponsdriver = 1;
		htmax = 1800;
		htmin = 60;
		icon = "\ca\air\data\map_ico\icomap_mi17_CA.paa";
		incommingmissliedetectionsystem = 8;
		insidesoundcoef = 0.5;
		irscanground = 1;
		irscanrangemax = 2000;
		irscanrangemin = 500;
		irscantoeyefactor = 2;
		irtarget = 1;
		laserscanner = 0;
		lasertarget = 0;
		limitedspeedcoef = 0.22;
		lockdetectionsystem = 8;
		
		model = "\FRL_Mi17\FRL_Mi8_TV";
		vehicleclass = "TU_VVS_RF";
		weapons[] = {"57mmLauncher", "CMFlareLauncher"};
		magazines[] = {"128Rnd_57mm","120Rnd_CMFlareMagazine"};		
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				ace_sys_missileguidance_limits[] = {15, 15, -4, 0};
				ace_sys_missileguidance_limitson = 1;
				ace_sys_missileguidance_tracker = "TU_A127";
				ace_sys_missileguidance_tracklimits[] = {60, 30};
				ace_sa_enabled = 1;
				ace_sa_te_enabled = 1;
				weapons[] = {"TU_A127","AT2Launcher"};
				magazines[] = {		
				//outer lower
				"TU_2Rnd_UB16_Pod",
				//mid lower
				"TU_2Rnd_UB16_Pod",
				//inner lower
				"TU_2Rnd_UB32_Pod",
				//outer / mid / inner AT2 rails
				"TU_2Rnd_AT2Rack",
				"TU_2Rnd_AT2Rack",
				"TU_2Rnd_Empty",
				//outer / mid / inner AT missile
				"TU_4Rnd_AT2_Mi24D",
				"TU_2Rnd_Empty",
				//invisible
				"TU_700Rnd_127x108_A127"};
				proxyIndex = 1;
				gunnerName = "$STR_POSITION_CREWCHIEF";
				body = "Turret_3";
				gun = "Gun_3";
				animationSourceBody = "Turret_3";
				animationSourceGun = "Gun_3";
				minElev = -80;
				maxElev = 25;
				initElev = -10;
				minTurn = -44;
				maxTurn = 44;
				initTurn = 0;
				stabilizedinaxes = "StabilizedInAxesBoth";
				gunBeg = "muzzle_3";
				gunEnd = "chamber_3";
				gunnerAction = "Mi8_Gunner";
				gunnerInAction = "Mi8_Gunner";
				memoryPointGun = "muzzle_3";
				memoryPointGunnerOptics = "gunnerview3";
				selectionFireAnim = "zasleh3";
				primaryGunner = 1;
				commanding = 1;
			};
			class SideTurret: MainTurret {
				ace_lademeister = 1;
				ace_viewport = -90;
				commanding = -1;
				gunnername = "door gunner";
				primarygunner = 0;
				proxyindex = 2;
			};
			class BackTurret: BackTurret {
				ace_lademeister = 1;
				ace_viewport = 110;
				commanding = -3;
				primarygunner = 0;
				proxyindex = 3;
			};
		};
		class AnimationSources {
			class HitGlass1 {
				hitpoint = "HitGlass1";
				raw = 1;
				source = "Hit";
			};
			class HitGlass2: HitGlass1 {
				hitpoint = "HitGlass2";
				raw = 1;
				source = "Hit";
			};
			class HitGlass3: HitGlass1 {
				hitpoint = "HitGlass3";
				raw = 1;
				source = "Hit";
			};
			class HitGlass4: HitGlass1 {
				hitpoint = "HitGlass4";
				raw = 1;
				source = "Hit";
			};
			class HitGlass5: HitGlass1 {
				hitpoint = "HitGlass5";
				raw = 1;
				source = "Hit";
			};
			class HitGlass6: HitGlass1 {
				hitpoint = "HitGlass6";
				raw = 1;
				source = "Hit";
			};
			class ReloadAnim {
				source = "reload";
				weapon = "ACE_PKT_out";
			};
			class ReloadMagazine {
				source = "reloadmagazine";
				weapon = "ACE_PKT_out";
			};
			class Revolving {
				source = "revolving";
				weapon = "ACE_PKT_out";
			};
			class ReloadAnim_2 {
				source = "reload";
				weapon = "ACE_PKT_out_2";
			};
			class ReloadMagazine_2 {
				source = "reloadmagazine";
				weapon = "ACE_PKT_out_2";
			};
			class Revolving_2 {
				source = "revolving";
				weapon = "ACE_PKT_out_2";
			};
			class HUDaction {
				animperiod = 1;
				initphase = 0;
				source = "user";
			};
			class HUDaction_Hide: HUDaction {
				animperiod = 1;
				initphase = 0;
				source = "user";
			};
			class ReloadAnim_3 {
				source = "reload";
				weapon = "TU_A127";
			};
			class ReloadMagazine_3 {
				source = "reloadmagazine";
				weapon = "TU_A127";
			};
			class Revolving_3 {
				source = "revolving";
				weapon = "TU_A127";
			};
			class HIDE_weapon_holders {
				animperiod = "1e-007";
				initphase = 0;
				source = "user";
			};
			class HIDE_front_armor: HIDE_weapon_holders {
				initphase = 0;
			};
			class HIDE_exhaust: HIDE_weapon_holders {
				initphase = 0;
			};
		};
		class ACE {
			class ACE_MISSILEGUIDANCE {
				ace_designator = 0;
				ace_rangefinder = 0;
			};
		};
	};
	class TU_Mi8_TV_Ins: TU_Mi8_TV_RU
	{
		crew = "CDF_Soldier_Pilot";
		typicalcargo[] = {"Ins_Soldier_Pilot", "Ins_Soldier_Pilot", "Ins_Soldier_AT", "Ins_Soldier_MG"};
		faction = "INS";
		side = 0;
		vehicleclass = "Air";
		hiddenselectionstextures[] = {"\ca\air\Data\mi8_body_g_CHDKZ_CO.paa", "ca\air\data\mi8_det_g_co.paa", "ca\air\data\clear_empty.paa", "ca\air\data\mi8_decals_ca.paa"};
	};
//Mi8TBK
	class TU_Mi8_TBK_CDF: TU_Mi8_TV_RU {
		crew = "CDF_Soldier_Pilot";
		typicalcargo[] = {"CDF_Soldier_Pilot", "CDF_Soldier_Pilot", "CDF_Soldier_AT", "CDF_Soldier_MG"};
		faction = "CDF";
		side = 1;
		hiddenselectionstextures[] = {"\CA\air\data\mi8_body_g_CDF_CO.paa", "ca\air\data\mi8_det_g_co.paa", "ca\air\data\clear_empty.paa", "ca\air\data\mi8_decals_ca.paa"};
		vehicleclass = "TU_VVS_CDF";
		displayname = "Mi-8TBK";
	};	
	class TU_Mi8_TBK_TK: TU_Mi8_TV_RU
	{
		crew = "TK_Soldier_Pilot_EP1";
		typicalcargo[] = {"TK_Soldier_Pilot_EP1","TK_Soldier_Pilot_EP1"};
		faction = "BIS_TK";
		side = 0;
		hiddenselectionstextures[] = {"\ca\air_E\Data\mi17_body_IND_CO.paa", "\ca\air_E\Data\mi17_det_IND_CO.paa", "\ca\air\data\clear_empty.paa", "\ca\air\data\mi8_decals_ca.paa"};
		vehicleclass = "TU_VVS_TK";
		displayname = "Mi-8TBK";
	};	
	class TU_Mi8_TBK_UN: TU_Mi8_TV_RU
	{
		crew = "UN_CDF_Soldier_pilot_EP1";
		typicalcargo[] = {"UN_CDF_Soldier_pilot_EP1", "UN_CDF_Soldier_pilot_EP1", "UN_CDF_Soldier_EP1", "UN_CDF_Soldier_EP1"};
		faction = "BIS_UN";
		side = 2;
		hiddenselectionstextures[] = {"\CA\air_E\data\mi17_body_UN_CO.paa", "\CA\air_E\data\mi17_det_UN_CO.paa", "\ca\air_E\Data\mi17_decals2_UN_CA.paa", "\ca\air_E\Data\mi17_decals_UN_CA.paa"};
		vehicleclass = "Air";
		displayname = "Mi-8TBK";
		class AnimationSources: AnimationSources {
			class HIDE_front_armor: HIDE_front_armor {
				initphase = 1;
			};
		};
	};
*/
////////////////////////////////////////////////////////////	
//wreck	
	class HelicopterWreck;
	class TU_Mi17Wreck: HelicopterWreck {
		scope = 1;
		class Armory
		{
			disabled = 1;
		};
		model = "\FRL_Mi17\FRL_Mi8Wreck.p3d";
		typicalCargo[] = {};
		irTarget = 0;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		transportSoldier = 18;
		class Eventhandlers{};
	};	
	
	class Kamov_Base: Helicopter {
		class Turrets: Turrets {
			class MainTurret;
		};
	};
	
	class Ka52: Kamov_Base {
		displayname = $STR_TU_KA52_OD;
		vehicleclass = "TU_VVS_RF";
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				class OpticsIn {				
					class Wide {
						gunneropticsmodel = "\ca\air\optika_Ka50_gun";
						initfov = "0.33333/1.1";
						maxfov = "0.33333/1.1";
						minfov = "0.33333/1.1";
						opticsdisplayname = "VW";
						gunneropticseffect[] = {"TVOptics", "OpticsBlur2", "OpticsCHAbera2"};
						initanglex = 0;
						initangley = 0;
						maxanglex = 30;
						maxangley = 100;
						minanglex = -30;
						minangley = -100;
						thermalmode[] = {0, 1};
						visionmode[] = {"Normal", "NVG", "Ti"};
					};
					class Narrow: Wide {
						gunneropticsmodel = "\ca\air\optika_Ka50_gun";
						initfov = "0.33333/6";
						maxfov = "0.33333/6";
						minfov = "0.33333/6";
						opticsdisplayname = "W";
					};
					class Medium: Wide {
						gunneropticsmodel = "\ca\air\optika_Ka50_rocket";
						initfov = "0.33333/18";
						maxfov = "0.33333/18";
						minfov = "0.33333/18";
						opticsdisplayname = "M";
					};
					class Narrowest: Wide {
						gunneropticsmodel = "\ca\air\optika_Ka50_rocket";
						initfov = "0.33333/32";
						maxfov = "0.33333/32";
						minfov = "0.33333/32";
						opticsdisplayname = "N";
					};
				};
			};
		};
	};
	
	class Ka52Black: Ka52 {
		displayname = $STR_TU_KA52B_OD;
		class Turrets: Turrets {
			class MainTurret: MainTurret {};
		};
	};
	
	class TU_KA52_OD_Ataka: Ka52 {
		displayname = $STR_TU_KA52_OD_ATAKA;
		selectionFireAnim = "zasleh_1";
		gunBeg[] = {"muzzle_1", "muzzle_2"};
		gunEnd[] = {"chamber_1", "chamber_2"};
		model = "\tu_air\FRL_Ka52.p3d";
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				weapons[] = {"ACE_2A42", "TU_AT9Launcher_Mi24"};
				magazines[] = {
//wing pylons
				"TU_2Rnd_Empty",
//outer pylon
				"TU_2Rnd_AT6_x6pod",
//inner pylon
				"TU_2Rnd_S8_Heli_Pod",
//invisible
				"TU_12Rnd_AT9_Mi24V","230Rnd_30mmHE_2A42","230Rnd_30mmAP_2A42"};
			};
		};
	};
	
	class TU_KA52_OD_Kh25: Ka52 {
		displayname = $STR_TU_KA52_OD_KH25;
		selectionFireAnim = "zasleh_1";
		gunBeg[] = {"muzzle_1", "muzzle_2"};
		gunEnd[] = {"chamber_1", "chamber_2"};
		model = "\tu_air\FRL_Ka52.p3d";
		scope = private;
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				weapons[] = {"ACE_2A42", "ACE_Kh25Launcher", "R73MLauncher"};
				magazines[] = {
//wing pylons
				"TU_2Rnd_Empty",
//outer pylon
				"TU_2Rnd_R73M",
//inner pylon
				"ACE_2Rnd_Kh25",
//invisible
				"230Rnd_30mmHE_2A42","230Rnd_30mmAP_2A42"};
			};
		};
	};
	
	class TU_KA52B_OD_Ataka: Ka52Black {
		displayname = $STR_TU_KA52B_OD_ATAKA;
		selectionFireAnim = "zasleh_1";
		gunBeg[] = {"muzzle_1", "muzzle_2"};
		gunEnd[] = {"chamber_1", "chamber_2"};
		model = "\tu_air\FRL_Ka52.p3d";
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				weapons[] = {"ACE_2A42", "TU_AT9Launcher_Mi24"};
				magazines[] = {
//wing pylons
				"TU_2Rnd_Empty",
//outer pylon
				"TU_2Rnd_AT6_x6pod",
//inner pylon
				"TU_2Rnd_S8_Heli_Pod",
//invisible
				"TU_12Rnd_AT9_Mi24V","230Rnd_30mmHE_2A42","230Rnd_30mmAP_2A42"};
			};
		};
	};
	
	class TU_KA52B_OD_Kh25: Ka52Black {
		displayname = $STR_TU_KA52B_OD_KH25;
		selectionFireAnim = "zasleh_1";
		gunBeg[] = {"muzzle_1", "muzzle_2"};
		gunEnd[] = {"chamber_1", "chamber_2"};
		model = "\tu_air\FRL_Ka52.p3d";
		scope = private;
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				weapons[] = {"ACE_2A42", "ACE_Kh25Launcher", "R73MLauncher"};
				magazines[] = {
//wing pylons
				"TU_2Rnd_Empty",
//outer pylon
				"TU_2Rnd_R73M",
//inner pylon
				"ACE_2Rnd_Kh25",
//invisible
				"230Rnd_30mmHE_2A42","230Rnd_30mmAP_2A42"};
			};
		};
	};
	
	class TU_KA52: Ka52 {
		displayname = $STR_TU_KA52;
		vehicleclass = "TU_VVS_RF";
		incommingmissliedetectionsystem = 8;
		lockdetectionsystem = 8;
		class Turrets: Turrets {
			class MainTurret: MainTurret {};
		};
	};
	
	class TU_KA52B: Ka52Black {
		displayname = $STR_TU_KA52B;
		vehicleclass = "TU_VVS_RF";
		incommingmissliedetectionsystem = 8;
		lockdetectionsystem = 8;
		class Turrets: Turrets {
			class MainTurret: MainTurret {};
		};
	};
		
	class TU_KA52_Ataka: TU_KA52 {
		displayname = $STR_TU_KA52_ATAKA;
		selectionFireAnim = "zasleh_1";
		gunBeg[] = {"muzzle_1", "muzzle_2"};
		gunEnd[] = {"chamber_1", "chamber_2"};
		model = "\tu_air\FRL_Ka52.p3d";
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				weapons[] = {"ACE_2A42", "TU_AT9Launcher_Mi24"};
				magazines[] = {
//wing pylons
				"TU_2Rnd_Empty",
//outer pylon
				"TU_2Rnd_AT6_x6pod",
//inner pylon
				"TU_2Rnd_S8_Heli_Pod",
//invisible
				"TU_12Rnd_AT9_Mi24V","230Rnd_30mmHE_2A42","230Rnd_30mmAP_2A42"};
			};
		};
	};
	
	class TU_KA52_Kh25: TU_KA52 {
		displayname = $STR_TU_KA52_KH25;
		selectionFireAnim = "zasleh_1";
		gunBeg[] = {"muzzle_1", "muzzle_2"};
		gunEnd[] = {"chamber_1", "chamber_2"};
		model = "\tu_air\FRL_Ka52.p3d";
		scope = private;
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				weapons[] = {"ACE_2A42", "ACE_Kh25Launcher", "R73MLauncher"};
				magazines[] = {
//wing pylons
				"TU_2Rnd_Empty",
//outer pylon
				"TU_2Rnd_R73M",
//inner pylon
				"ACE_2Rnd_Kh25",
//invisible
				"230Rnd_30mmHE_2A42","230Rnd_30mmAP_2A42"};
			};
		};
	};
	
	class TU_KA52B_Ataka: TU_KA52B {
		displayname = $STR_TU_KA52B_ATAKA;
		selectionFireAnim = "zasleh_1";
		gunBeg[] = {"muzzle_1", "muzzle_2"};
		gunEnd[] = {"chamber_1", "chamber_2"};
		model = "\tu_air\FRL_Ka52.p3d";
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				weapons[] = {"ACE_2A42", "TU_AT9Launcher_Mi24"};
				magazines[] = {
//wing pylons
				"TU_2Rnd_Empty",
//outer pylon
				"TU_2Rnd_AT6_x6pod",
//inner pylon
				"TU_2Rnd_S8_Heli_Pod",
//invisible
				"TU_12Rnd_AT9_Mi24V","230Rnd_30mmHE_2A42","230Rnd_30mmAP_2A42"};
			};
		};
	};
	
	class TU_KA52B_Kh25: TU_KA52B {
		displayname = $STR_TU_KA52B_KH25;
		selectionFireAnim = "zasleh_1";
		gunBeg[] = {"muzzle_1", "muzzle_2"};
		gunEnd[] = {"chamber_1", "chamber_2"};
		model = "\tu_air\FRL_Ka52.p3d";
		scope = private;
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				weapons[] = {"ACE_2A42", "ACE_Kh25Launcher", "R73MLauncher"};
				magazines[] = {
//wing pylons
				"TU_2Rnd_Empty",
//outer pylon
				"TU_2Rnd_R73M",
//inner pylon
				"ACE_2Rnd_Kh25",
//invisible
				"230Rnd_30mmHE_2A42","230Rnd_30mmAP_2A42"};
			};
		};
	};
	
	class ACE_Ka50_base;
	
	class ACE_Ka50: ACE_Ka50_base {
		displayname = $STR_TU_KA50_OD;
		radartype = 0;
	};
	
	class TU_Ka50: ACE_Ka50 {
		displayname = $STR_TU_KA50;
		incommingmissliedetectionsystem = 8;
		lockdetectionsystem = 8;
		radartype = 0;
	};
	
	class UH1H_base;
	
	class UH1H_TK_EP1: UH1H_base {
		vehicleclass = "TU_VVS_TK";
	};	
	
	class UH1H_CDF: UH1H_base {
		vehicleclass = "TU_VVS_CDF";
	};
	
	class UH1H_US: UH1H_base {
		vehicleclass = "TU_USARMY_AIR";
	};
	
	class TU_UH1 : UH1H_base {
		vehicleclass = "TU_USARMY_AIR";
	};
	
	class TU_UH1C_GUNSHIP : UH1H_base {
		vehicleclass = "TU_USARMY_AIR";
	};
	
	class AH1_Base;
	
	class ACE_AH1W_AGM;
	
	class ACE_AH1W_AGM_D: ACE_AH1W_AGM {
		vehicleClass = "TU_USMC_AIR_D";
	};
	
	class ACE_AH1W_AGM_W: ACE_AH1W_AGM {
		vehicleClass = "TU_USMC_AIR";
	};
	
	class ACE_AH1W_TOW;
	
	class ACE_AH1W_TOW_D: ACE_AH1W_TOW {
		vehicleclass = "TU_USMC_AIR_D";
	};
	
	class ACE_AH1W_TOW_W: ACE_AH1W_TOW {
		vehicleclass = "TU_USMC_AIR";
	};
	
	class ACE_AH1W_TOW_TOW;
	
	class ACE_AH1W_TOW_TOW_D: ACE_AH1W_TOW_TOW {
		vehicleclass = "TU_USMC_AIR_D";
	};
	
	class ACE_AH1W_TOW_TOW_W: ACE_AH1W_TOW_TOW {
		vehicleclass = "TU_USMC_AIR";
	};
	
	class ACE_AH1Z_AGM_AGM;
	
	class ACE_AH1Z_AGM_AGM_D: ACE_AH1Z_AGM_AGM {
		vehicleclass = "TU_USMC_AIR_D";
	};

	class ACE_AH1Z_AGM_AGM_W: ACE_AH1Z_AGM_AGM {
		vehicleclass = "TU_USMC_AIR";
	};
	
	class ACE_AH1Z_AGM;
	
	class ACE_AH1Z_AGM_D: ACE_AH1Z_AGM {
		vehicleclass = "TU_USMC_AIR_D";
	};
	
	class AH1Z: AH1_Base {
		vehicleclass = "TU_USMC_AIR";
	};
	
	class UAV;
	
	class MQ9PredatorB: UAV {
		vehicleclass = "TU_USMC_AIR";
	};
	
	class UH1_Base;
	
	class UH1Y: UH1_Base {
		vehicleclass = "TU_USMC_AIR";
	};
	
	class AH6_Base_EP1: Helicopter {
		class Turrets
		{
			class MainTurret;
		};
	};
	
	class AH6X_EP1: AH6_Base_EP1 {
		vehicleClass = "TU_USARMY_AIR";
		scope = 1;
	};
	
	class AH6J_EP1: AH6_Base_EP1 {
		vehicleClass = "TU_USARMY_AIR";
	};
	
//////////////////////////////////////////////////////
//MH-6J Transport version with 5 passenger seats
/////////////////////////////////////////////////////
	class MH6J_EP1: AH6_Base_EP1 {
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"60Rnd_CMFlareMagazine"};
		class Turrets {};
		vehicleclass = "TU_USARMY_AIR";
	};
//////////////////////////////////////////////////////
//AH-6J with laser designator and FLIR
/////////////////////////////////////////////////////
	class ACE_AH6_GAU19_FLIR: AH6_Base_EP1 {
		class Turrets;
	};
	
	class ACE_AH6J_DAGR_FLIR: ACE_AH6_GAU19_FLIR {
		displayname = "AH-6J Little Bird (DAGR/FLIR)";
		vehicleclass = "TU_USARMY_AIR";
		class Turrets: Turrets {
			class MainTurret;
		};
	};
	
	class TU_AH6J_AGM_FLIR: ACE_AH6J_DAGR_FLIR {
		memorypointsgetindriver = "pos gunner";
		memorypointsgetindriverdir = "pos gunner dir";
		scope = 2;	
		displayname = "AH-6J Little Bird (AGM-114/FLIR)";
		weapons[] = {"TwinM134", "CMFlareLauncher"};
		magazines[] = {"ACE_5250Rnd_762x51_M134", "60Rnd_CMFlareMagazine"};
		model = "\FRL_AH6\FRL_ah6M";
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				gunnerAction = "AH6j_Cargo_EP1";//AH6_Gunner
				gunnerInAction = "AH6j_Cargo_EP1";//AH6_Gunner
				body = "FLIR_turret";
				gun = "FLIR_gun";
				gunBeg = "FLIR_end";
				gunEnd = "FLIR_begin";
				memoryPointGun = "FLIR_end";
				memoryPointGunnerOptics = "FLIR_end";
				magazines[] = {"TU_Hellfire2Pod","TU_Hellfire2Pod","TU_4Rnd_Hellfire"};
				weapons[] = {"ACE_HellfireLauncher"};
			};
		};
	};
//////////////////////////////////////////////////////
//EH-6E Commandversion with laser designator and FLIR
/////////////////////////////////////////////////////
	class TU_EH6E: TU_AH6J_AGM_FLIR {
		scope = 2;	
		displayName = "EH-6E Little Bird";
		model = "\FRL_AH6\FRL_AH6X";
		picture = "\ca\air_e\data\UI\Picture_ah6x_CA.paa";
		icon = "\ca\air_e\data\UI\Icon_ah6x_CA.paa";
		transportSoldier = 0;
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"60Rnd_CMFlareMagazine"};
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				gunnerAction = "AH6j_Cargo_EP1";//AH6_Gunner
				gunnerInAction = "AH6j_Cargo_EP1";//AH6_Gunner
				magazines[] = {"ACE_SACLOS_Guidance"};
				weapons[] = {"FakeWeapon", "ACE_SACLOS_Guidance"};
			};
		};
	};
	
	class ACE_MQ8B_Base;
	
	class ACE_MQ8B_hellfire: ACE_MQ8B_Base {
		vehicleclass = "TU_USARMY_AIR";
	};
	
	class ACE_MQ8B_cargo: ACE_MQ8B_Base {
		vehicleclass = "TU_USARMY_AIR";
	};
	
	class AH64_base_EP1: Helicopter {
		class Turrets: Turrets {
			class MainTurret;
		};
	};
	
	class AH64D_EP1: AH64_base_EP1 {
		vehicleclass = "TU_USARMY_AIR";
		displayname = "AH-64D Apache Longbow LR w OD";
	};
	
	class TU_AH64D_LR_wo_OD: AH64D_EP1 {
		vehicleclass = "TU_USARMY_AIR";
		displayname = "AH-64D Apache Longbow LR";
		incommingmissliedetectionsystem = 8;
		lockdetectionsystem = 8;
	};
		
	class TU_AH64D: AH64D_EP1 {
		displayname = "AH-64D Apache Longbow";
		incommingmissliedetectionsystem = 8;
		lockdetectionsystem = 8;
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				magazines[] = {"1200Rnd_30x113mm_M789_HEDP", "ACE_8Rnd_Hellfire"};
				weapons[] = {"M230", "HellfireLauncher"};
			};
		};
	};
		
	class TU_AH64D_OD: AH64D_EP1 {
		displayname = "AH-64D Apache Longbow w OD";
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				magazines[] = {"1200Rnd_30x113mm_M789_HEDP", "ACE_8Rnd_Hellfire"};
				weapons[] = {"M230", "HellfireLauncher"};
			};
		};
	};
	
	class TU_AH64A: AH64D_EP1 {
		radartype = 0;
		vehicleclass = "TU_USARMY_AIR";
		displayname = "AH-64A Apache";
		incommingmissliedetectionsystem = 8;
		lockdetectionsystem = 8;
		model = "\tu_air\ah64a";
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				magazines[] = {"1200Rnd_30x113mm_M789_HEDP", "ACE_8Rnd_Hellfire"};
				weapons[] = {"M230", "HellfireLauncher"};
			};
		};
		class Damage {
			tex[] = {};
			mat[] = {"ca\air_e\ah64\data\ah64d_body.rvmat", "ca\air_e\ah64\Data\AH64D_body_damage.rvmat", "ca\air_e\ah64\Data\AH64D_body_destruct.rvmat", "ca\air_e\ah64\data\ah64d_details.rvmat", "ca\air_e\ah64\data\ah64d_details_damage.rvmat", "ca\air_e\ah64\data\ah64d_details_destruct.rvmat", "ca\air_e\ah64\data\ah64d_inter.rvmat", "ca\air_e\ah64\data\ah64d_inter_damage.rvmat", "ca\air_e\ah64\data\ah64d_inter_destruct.rvmat", "ca\air_e\ah64\data\ah64d_glass.rvmat", "ca\air_e\ah64\data\ah64d_glass_damage.rvmat", "ca\air_e\ah64\data\ah64d_glass_damage.rvmat", "ca\air_e\ah64\data\ah64d_glass_in.rvmat", "ca\air_e\ah64\data\ah64d_glass_in_damage.rvmat", "ca\air_e\ah64\data\ah64d_glass_in_damage.rvmat", "ca\ca_e\data\default.rvmat", "ca\ca_e\data\default.rvmat", "ca\ca_e\data\default_destruct.rvmat"};
		};
	};
	
	class TU_AH64A_OD: TU_AH64A {
		displayname = "AH-64A Apache w OD";
		incommingmissliedetectionsystem = 16;
		lockdetectionsystem = "8 + 4";
	};
	
	class MQ9PredatorB_US_EP1: MQ9PredatorB {
		vehicleclass = "TU_USARMY_AIR";
	};
	
	class TU_AH1F: ACE_AH1W_TOW_TOW {
		vehicleclass = "TU_USARMY_AIR";
	};	
	
	class AW159_Lynx_BAF: Helicopter {
		vehicleclass = "TU_AAF";
	};
	
	class BAF_Apache_AH1_D: AH64D_EP1 {
		vehicleclass = "TU_AAF";
	};
	
	class BAF_Merlin_HC3_D: Helicopter {
		vehicleclass = "TU_AAF";
	};
	
	class CH_47F_BAF: CH_47F_EP1 {
		vehicleclass = "TU_AAF";
	};

	class Plane: Air {
		class ViewOptics;
	};
	
	class Plane_LG: Plane {
		class viewpilot;	// External class reference
		class viewgunner;	// External class reference
		class ViewOptics;
		class Turrets;	// External class reference
		class NewTurret;	// External class reference
		class AnimationSources;	// External class reference		
		class ACE
		{
			class ACE_MISSILEGUIDANCE
			{
				ACE_DESIGNATOR = 0;
				ACE_RANGEFINDER = 0;
			};
		};
	};
	
	class C130J: Plane {
		vehicleclass = "TU_USMC_AIR";
	};
	
	class C130J_base;
	
	class C130J_US_EP1: C130J_base {
		vehicleclass = "TU_USAF";
	};	
	
	class MV22: Plane {
		vehicleclass = "TU_USMC_AIR";
	};
	
	class Pchela1T: UAV {
		vehicleclass = "TU_VVS_RF";
	};
	
	class L39_base;
	
	class ACE_L39_base;
	
	class L39_TK_EP1: L39_base {
		vehicleclass = "TU_VVS_TK";
	};
	
	class ACE_L39_TK_FAB250: L39_TK_EP1 {
		vehicleclass = "TU_VVS_TK";
	};
	
	class ACE_L39_RU: ACE_L39_base {
		vehicleclass = "TU_VVS_RF";
	};
	
	class ACE_L39_RU_BO: ACE_L39_RU {
		vehicleclass = "TU_VVS_RF";
	};
	
	class An2_Base_EP1;
	
	class An2_TK_EP1: An2_Base_EP1 {
		vehicleclass = "TU_VVS_TK";
	};
	
	class Su25_base: Plane {};
	
	class Su25_CDF: Su25_base {
		scope = protected;
	};
	
	class Su25_Ins: Su25_base {
		scope = protected;
	};
	
	class Su25_TK_EP1: Su25_base {
		scope = protected;
	};

	class Su39: Su25_base {
		scope = protected;
	};
	
	class ACE_Su25: Su39 {
		scope = protected;
	};
	
	class ACE_Su39: ACE_Su25 {
		scope = protected;
	};

	class TU_SU25: Su39 {
		scope = protected;
		displayname = $STR_ACE_VDN_SU25_FAB250;
		magazines[] = {"ACE_250Rnd_30mm_GSh302", "4Rnd_FAB_250", "2Rnd_R73", "40Rnd_S8T", "40Rnd_80mm", "120Rnd_CMFlare_Chaff_Magazine"};
		weapons[] = {"GSh302", "AirBombLauncher", "R73Launcher_2", "ACE_S8Launcher_Plane", "CMFlareLauncher"};
	};
	
	class TU_Su25_Kh25: Su39 {
		scope = protected;
		displayname = $STR_Su25_Kh25;
		magazines[] = {"ACE_250Rnd_30mm_GSh302", "ACE_4Rnd_Kh25", "2Rnd_R73", "40Rnd_S8T", "40Rnd_80mm", "120Rnd_CMFlare_Chaff_Magazine"};
		weapons[] = {"GSh302", "ACE_Kh25Launcher", "R73Launcher_2", "ACE_S8Launcher_Plane", "CMFlareLauncher"};
	};
	
	class TU_Su25_Kh25_D: ACE_Su39 {
		scope = protected;
		displayname = $STR_Su25_Kh25;
		magazines[] = {"ACE_250Rnd_30mm_GSh302", "ACE_4Rnd_Kh25", "2Rnd_R73", "40Rnd_S8T", "40Rnd_80mm", "120Rnd_CMFlare_Chaff_Magazine"};
		weapons[] = {"GSh302", "ACE_Kh25Launcher", "R73Launcher_2", "ACE_S8Launcher_Plane", "CMFlareLauncher"};
	};

	class TU_Su25BKO_Kh29: Su39 {
		scope = protected;
		displayname = $STR_Su25BKO_Kh29;
		incommingmissliedetectionsystem = 16;
	};
	
	class TU_Su25BKO_Kh25: Su39 {
		scope = protected;
		displayname = $STR_Su25BKO_Kh25;
		magazines[] = {"ACE_250Rnd_30mm_GSh302", "ACE_4Rnd_Kh25", "2Rnd_R73", "40Rnd_S8T", "40Rnd_80mm", "120Rnd_CMFlare_Chaff_Magazine"};
		incommingmissliedetectionsystem = 16;
		weapons[] = {"GSh302", "ACE_Kh25Launcher", "R73Launcher_2", "ACE_S8Launcher_Plane", "CMFlareLauncher"};
	};

	class TU_Su25BKO: Su39 {
		scope = protected;
		displayname = $STR_Su25BKO;
		incommingmissliedetectionsystem = 16;
		magazines[] = {"ACE_250Rnd_30mm_GSh302", "4Rnd_FAB_250", "2Rnd_R73", "40Rnd_S8T", "40Rnd_80mm", "120Rnd_CMFlare_Chaff_Magazine"};
		weapons[] = {"GSh302", "AirBombLauncher", "R73Launcher_2", "ACE_S8Launcher_Plane", "CMFlareLauncher"};
	};

	class TU_Su25BKO_Kh29_D: ACE_Su39 {
		scope = protected;
		displayname = $STR_Su25BKO_Kh29;
		incommingmissliedetectionsystem = 16;
	};
	
	class TU_Su25BKO_Kh25_D: ACE_Su39 {
		scope = protected;
		displayname = $STR_Su25BKO_Kh25;
		magazines[] = {"ACE_250Rnd_30mm_GSh302", "ACE_4Rnd_Kh25", "2Rnd_R73", "40Rnd_S8T", "40Rnd_80mm", "120Rnd_CMFlare_Chaff_Magazine"};
		incommingmissliedetectionsystem = 16;
		weapons[] = {"GSh302", "ACE_Kh25Launcher", "R73Launcher_2", "ACE_S8Launcher_Plane", "CMFlareLauncher"};
	};

	class TU_Su25BKO_D: ACE_Su25 {
		scope = protected;
		displayname = $STR_Su25BKO;
		incommingmissliedetectionsystem = 16;
		magazines[] = {"ACE_250Rnd_30mm_GSh302", "4Rnd_FAB_250", "2Rnd_R73", "40Rnd_S8T", "40Rnd_80mm", "120Rnd_CMFlare_Chaff_Magazine"};
		weapons[] = {"GSh302", "AirBombLauncher", "R73Launcher_2", "ACE_S8Launcher_Plane", "CMFlareLauncher"};
	};	
	
	class TU_Su25_250_S8: Su39 {
		hiddenselections[] = 
        {
            "camo1",
            "camo2",
            "clan_sign"
        };
		hiddenSelectionsTextures[]=
        {
            "\Ca\air2\Su25\data\su25_body1_rus_co.paa",
            "\Ca\air2\Su25\data\su25_body2_rus_co.paa"
        };
		vehicleclass = "TU_VVS_RF";
		scope = public;
		displayname = $STR_TU_Su25_250_S8;
		model = "\frl_su25\FRL_su25";
		weapons[] = {"GSh302","ACE_AirBombLauncher","R60MLauncher","ACE_S8Launcher_Plane","CMFlareLauncher"};
		magazines[] = {
		"ACE_250Rnd_30mm_GSh302", "120Rnd_CMFlare_Chaff_Magazine", "40Rnd_S8T", "40Rnd_80mm",
//station 1
		"TU_2Rnd_R60M",
//station 2
//station 3
		"TU_4Rnd_FAB_250",
//station 4
		"TU_2Rnd_S8_Pod",
//station 5
		"TU_2Rnd_S8_Pod",
//2x4
		"TU_36Rnd_Empty",
//3x4
//4x4
//5x4
//INVISIBLE		
		};
	};
	
	class TU_Su25_250_S8_D: TU_Su25_250_S8 {
		accuracy = 1000;
		vehicleclass = "TU_VVS_RF_D";
		crew = "ACE_RU_Soldier_Pilot_D";
		displayname = $STR_TU_Su25_250_S8;
		hiddenselectionstextures[] = {"\x\acex_ru\addons\t_veh_su25\su25_body1_rus_des_co.paa", "\x\acex_ru\addons\t_veh_su25\su25_body2_rus_des_co.paa"};
	};
	
	class TU_Su25_250_S8_CDF: TU_Su25_250_S8 {
		vehicleclass = "TU_VVS_CDF";
		accuracy = 1.5;
		crew = "CDF_Soldier_Pilot";
		displayname = $STR_TU_Su25K_250_S8;
		faction = "CDF";
		hiddenselectionstextures[] = {"\Ca\air2\Su25\data\su25_body1_cdf_co.paa", "\Ca\air2\Su25\data\su25_body2_cdf_co.paa"};
		scope = 2;
		side = 1;
		typicalcargo[] = {"CDF_Soldier_Pilot"};
	};
	
	class TU_Su25_250_S8_TK: TU_Su25_250_S8 {
		vehicleclass = "TU_VVS_TK";
		accuracy = 1.5;
		crew = "TK_Soldier_Pilot_EP1";
		displayname = $STR_TU_Su25K_250_S8;
		expansion = 1;
		faction = "BIS_TK";
		hiddenselectionstextures[] = {"Ca\Air_E\Data\su25_body1_IND_co.paa", "Ca\Air_E\Data\su25_body2_IND_co.paa"};
		scope = 2;
		side = 0;
		typicalcargo[] = {"TK_Soldier_Pilot_EP1"};
	};
	
	class TU_Su25_500_S8: Su39 {
		hiddenselections[] = 
        {
            "camo1",
            "camo2",
            "clan_sign"
        };
		hiddenSelectionsTextures[]=
        {
            "\Ca\air2\Su25\data\su25_body1_rus_co.paa",
            "\Ca\air2\Su25\data\su25_body2_rus_co.paa"
        };
		vehicleclass = "TU_VVS_RF";
		scope = public;
		displayname = $STR_TU_Su25_500_S8;
		model = "\frl_su25\FRL_su25";
		weapons[] = {"GSh302","ACE_FAB500M62Launcher","R60MLauncher","ACE_S8Launcher_Plane","CMFlareLauncher"};
		magazines[] = {
		"ACE_250Rnd_30mm_GSh302", "120Rnd_CMFlare_Chaff_Magazine", "40Rnd_S8T", "40Rnd_80mm",
//station 1
		"TU_2Rnd_R60M",
//station 2
//station 3
		"ACE_4Rnd_FAB500M62",
//station 4
		"TU_2Rnd_S8_Pod",
//station 5
		"TU_2Rnd_S8_Pod",
//2x4
		"TU_36Rnd_Empty",
//3x4
//4x4
//5x4
//INVISIBLE		
		};
	};
	
	class TU_Su25_500_S8_D: TU_Su25_500_S8 {
		accuracy = 1000;
		vehicleclass = "TU_VVS_RF_D";
		crew = "ACE_RU_Soldier_Pilot_D";
		displayname = $STR_TU_Su25_500_S8;
		hiddenselectionstextures[] = {"\x\acex_ru\addons\t_veh_su25\su25_body1_rus_des_co.paa", "\x\acex_ru\addons\t_veh_su25\su25_body2_rus_des_co.paa"};
	};
	
	class TU_Su25_500_S8_CDF: TU_Su25_500_S8 {
		vehicleclass = "TU_VVS_CDF";
		accuracy = 1.5;
		crew = "CDF_Soldier_Pilot";
		displayname = $STR_TU_Su25K_500_S8;
		faction = "CDF";
		hiddenselectionstextures[] = {"\Ca\air2\Su25\data\su25_body1_cdf_co.paa", "\Ca\air2\Su25\data\su25_body2_cdf_co.paa"};
		scope = 2;
		side = 1;
		typicalcargo[] = {"CDF_Soldier_Pilot"};
	};
	
	class TU_Su25_500_S8_TK: TU_Su25_500_S8 {
		vehicleclass = "TU_VVS_TK";
		accuracy = 1.5;
		crew = "TK_Soldier_Pilot_EP1";
		displayname = $STR_TU_Su25K_500_S8;
		expansion = 1;
		faction = "BIS_TK";
		hiddenselectionstextures[] = {"Ca\Air_E\Data\su25_body1_IND_co.paa", "Ca\Air_E\Data\su25_body2_IND_co.paa"};
		scope = 2;
		side = 0;
		typicalcargo[] = {"TK_Soldier_Pilot_EP1"};
	};
	
	class TU_Su25_250_S13: Su39 {
		hiddenselections[] = 
        {
            "camo1",
            "camo2",
            "clan_sign"
        };
		hiddenSelectionsTextures[]=
        {
            "\Ca\air2\Su25\data\su25_body1_rus_co.paa",
            "\Ca\air2\Su25\data\su25_body2_rus_co.paa"
        };
		vehicleclass = "TU_VVS_RF";
		scope = public;
		displayname = $STR_TU_Su25_250_S13;
		model = "\frl_su25\FRL_su25";
		weapons[] = {"GSh302","ACE_AirBombLauncher","R60MLauncher","TU_S13Launcher","CMFlareLauncher"};
		magazines[] = {
		"ACE_250Rnd_30mm_GSh302", "120Rnd_CMFlare_Chaff_Magazine", "10Rnd_S13T", "10Rnd_S13",
//station 1
		"TU_2Rnd_R60M",
//station 2
//station 3
		"TU_4Rnd_FAB_250",
//station 4
		"TU_2Rnd_S13_Pod",
//station 5
		"TU_2Rnd_S13_Pod",
//2x4
		"TU_36Rnd_Empty",
//3x4
//4x4
//5x4
//INVISIBLE		
		};
	};
	
	class TU_Su25_250_S13_D: TU_Su25_250_S13 {
		accuracy = 1000;
		vehicleclass = "TU_VVS_RF_D";
		crew = "ACE_RU_Soldier_Pilot_D";
		displayname = $STR_TU_Su25_250_S13;
		hiddenselectionstextures[] = {"\x\acex_ru\addons\t_veh_su25\su25_body1_rus_des_co.paa", "\x\acex_ru\addons\t_veh_su25\su25_body2_rus_des_co.paa"};
		
	};
	
	class TU_Su25_250_S13_CDF: TU_Su25_250_S13 {
		vehicleclass = "TU_VVS_CDF";
		accuracy = 1.5;
		crew = "CDF_Soldier_Pilot";
		displayname = $STR_TU_Su25K_250_S13;
		faction = "CDF";
		hiddenselectionstextures[] = {"\Ca\air2\Su25\data\su25_body1_cdf_co.paa", "\Ca\air2\Su25\data\su25_body2_cdf_co.paa"};
		scope = 2;
		side = 1;
		typicalcargo[] = {"CDF_Soldier_Pilot"};
	};
	
	class TU_Su25_250_S13_TK: TU_Su25_250_S13 {
		vehicleclass = "TU_VVS_TK";
		accuracy = 1.5;
		crew = "TK_Soldier_Pilot_EP1";
		displayname = $STR_TU_Su25K_250_S13;
		expansion = 1;
		faction = "BIS_TK";
		hiddenselectionstextures[] = {"Ca\Air_E\Data\su25_body1_IND_co.paa", "Ca\Air_E\Data\su25_body2_IND_co.paa"};
		scope = 2;
		side = 0;
		typicalcargo[] = {"TK_Soldier_Pilot_EP1"};
	};
	
	class TU_Su25_S24: Su39 {
		hiddenselections[] = 
        {
            "camo1",
            "camo2",
            "clan_sign"
        };
		hiddenSelectionsTextures[]=
        {
            "\Ca\air2\Su25\data\su25_body1_rus_co.paa",
            "\Ca\air2\Su25\data\su25_body2_rus_co.paa"
        };
		vehicleclass = "TU_VVS_RF";
		scope = public;
		displayname = $STR_TU_Su25_S24;
		model = "\frl_su25\FRL_su25";
		weapons[] = {"GSh302","R60MLauncher","TU_S24Launcher","CMFlareLauncher"};
		magazines[] = {
		"ACE_250Rnd_30mm_GSh302", "120Rnd_CMFlare_Chaff_Magazine",
//station 1
		"TU_2Rnd_R60M",
//station 2
		"TU_1Rnd_S24","TU_1Rnd_S24",
//station 3
		"TU_1Rnd_S24","TU_1Rnd_S24",
//station 4
		"TU_1Rnd_S24","TU_1Rnd_S24",
//station 5
		"TU_1Rnd_S24","TU_1Rnd_S24",
//2x4
		"TU_36Rnd_Empty",
//3x4
//4x4
//5x4
//INVISIBLE		
		};
	};
	
	class TU_Su25_S24_D: TU_Su25_S24 {
		accuracy = 1000;
		vehicleclass = "TU_VVS_RF_D";
		crew = "ACE_RU_Soldier_Pilot_D";
		displayname = $STR_TU_Su25_S24;
		hiddenselectionstextures[] = {"\x\acex_ru\addons\t_veh_su25\su25_body1_rus_des_co.paa", "\x\acex_ru\addons\t_veh_su25\su25_body2_rus_des_co.paa"};
		
	};
	
	class TU_Su25_S24_CDF: TU_Su25_S24 {
		vehicleclass = "TU_VVS_CDF";
		accuracy = 1.5;
		crew = "CDF_Soldier_Pilot";
		displayname = $STR_TU_Su25K_S24;
		faction = "CDF";
		hiddenselectionstextures[] = {"\Ca\air2\Su25\data\su25_body1_cdf_co.paa", "\Ca\air2\Su25\data\su25_body2_cdf_co.paa"};
		scope = 2;
		side = 1;
		typicalcargo[] = {"CDF_Soldier_Pilot"};
	};
	
	class TU_Su25_S24_TK: TU_Su25_S24 {
		vehicleclass = "TU_VVS_TK";
		accuracy = 1.5;
		crew = "TK_Soldier_Pilot_EP1";
		displayname = $STR_TU_Su25K_S24;
		expansion = 1;
		faction = "BIS_TK";
		hiddenselectionstextures[] = {"Ca\Air_E\Data\su25_body1_IND_co.paa", "Ca\Air_E\Data\su25_body2_IND_co.paa"};
		scope = 2;
		side = 0;
		typicalcargo[] = {"TK_Soldier_Pilot_EP1"};
	};
	
	class TU_Su25_S24_Kh25: Su39 {
		hiddenselections[] = 
        {
            "camo1",
            "camo2",
            "clan_sign"
        };
		hiddenSelectionsTextures[]=
        {
            "\Ca\air2\Su25\data\su25_body1_rus_co.paa",
            "\Ca\air2\Su25\data\su25_body2_rus_co.paa"
        };
		vehicleclass = "TU_VVS_RF";
		scope = public;
		displayname = $STR_TU_Su25_S24_Kh25;
		model = "\frl_su25\FRL_su25";
		weapons[] = {"GSh302","ACE_Kh25Launcher","R60MLauncher","TU_S24Launcher","CMFlareLauncher"};
		magazines[] = {
		"ACE_250Rnd_30mm_GSh302", "120Rnd_CMFlare_Chaff_Magazine",
//station 1
		"TU_2Rnd_R60M",
//station 2
		"TU_1Rnd_S24","TU_1Rnd_S24",
//station 3
		"TU_1Rnd_S24","TU_1Rnd_S24",
//station 4
		"ACE_4Rnd_Kh25",
//station 5
//2x4
		"TU_36Rnd_Empty",
//3x4
//4x4
//5x4
//INVISIBLE		
		};
	};
	
	class TU_Su25_S24_Kh25_D: TU_Su25_S24_Kh25 {
		accuracy = 1000;
		vehicleclass = "TU_VVS_RF_D";
		crew = "ACE_RU_Soldier_Pilot_D";
		displayname = $STR_TU_Su25_S24_Kh25;
		hiddenselectionstextures[] = {"\x\acex_ru\addons\t_veh_su25\su25_body1_rus_des_co.paa", "\x\acex_ru\addons\t_veh_su25\su25_body2_rus_des_co.paa"};
		
	};
	
	class TU_Su25_S24_Kh25_CDF: TU_Su25_S24_Kh25 {
		vehicleclass = "TU_VVS_CDF";
		accuracy = 1.5;
		crew = "CDF_Soldier_Pilot";
		displayname = $STR_TU_Su25K_S24_Kh25;
		faction = "CDF";
		hiddenselectionstextures[] = {"\Ca\air2\Su25\data\su25_body1_cdf_co.paa", "\Ca\air2\Su25\data\su25_body2_cdf_co.paa"};
		scope = 2;
		side = 1;
		typicalcargo[] = {"CDF_Soldier_Pilot"};
	};
	
	class TU_Su25_S24_Kh25_TK: TU_Su25_S24_Kh25 {
		vehicleclass = "TU_VVS_TK";
		accuracy = 1.5;
		crew = "TK_Soldier_Pilot_EP1";
		displayname = $STR_TU_Su25K_S24_Kh25;
		expansion = 1;
		faction = "BIS_TK";
		hiddenselectionstextures[] = {"Ca\Air_E\Data\su25_body1_IND_co.paa", "Ca\Air_E\Data\su25_body2_IND_co.paa"};
		scope = 2;
		side = 0;
		typicalcargo[] = {"TK_Soldier_Pilot_EP1"};
	};
	/*
	class TU_Su25_500_S13: Su39 {
		vehicleclass = "TU_VVS_RF";
		scope = public;
		displayname = $STR_TU_Su25_500_S13;
		model = "\frl_su25\FRL_su25";
		weapons[] = {"GSh302","ACE_FAB500M62Launcher","TU_S13Launcher","CMFlareLauncher"};
		magazines[] = {
		"ACE_250Rnd_30mm_GSh302", "120Rnd_CMFlare_Chaff_Magazine", "10Rnd_S13T", "10Rnd_S13",
//station 1
		"TU_2Rnd_Empty",
//station 2
//station 3
		"ACE_4Rnd_FAB500M62",
//station 4
		"TU_2Rnd_S13_Pod",
//station 5
		"TU_2Rnd_S13_Pod",
//2x4
		"TU_36Rnd_Empty",
//3x4
//4x4
//5x4
//INVISIBLE		
		};
	};
	
	class TU_Su25_500_S13_D: TU_Su25_500_S13 {
		accuracy = 1000;
		vehicleclass = "TU_VVS_RF_D";
		crew = "ACE_RU_Soldier_Pilot_D";
		displayname = $STR_TU_Su25_500_S13;
		hiddenselectionstextures[] = {"\x\acex_ru\addons\t_veh_su25\su25_body1_rus_des_co.paa", "\x\acex_ru\addons\t_veh_su25\su25_body2_rus_des_co.paa"};
		
	};
	
	class TU_Su25_500_S13_CDF: TU_Su25_500_S13 {
		vehicleclass = "TU_VVS_CDF";
		accuracy = 1.5;
		crew = "CDF_Soldier_Pilot";
		displayname = $STR_TU_Su25K_500_S13;
		faction = "CDF";
		hiddenselectionstextures[] = {"\Ca\air2\Su25\data\su25_body1_cdf_co.paa", "\Ca\air2\Su25\data\su25_body2_cdf_co.paa"};
		scope = 2;
		side = 1;
		typicalcargo[] = {"CDF_Soldier_Pilot"};
	};
	
	class TU_Su25_500_S13_TK: TU_Su25_500_S13 {
		vehicleclass = "TU_VVS_TK";
		accuracy = 1.5;
		crew = "TK_Soldier_Pilot_EP1";
		displayname = $STR_TU_Su25K_500_S13;
		expansion = 1;
		faction = "BIS_TK";
		hiddenselectionstextures[] = {"Ca\Air_E\Data\su25_body1_IND_co.paa", "Ca\Air_E\Data\su25_body2_IND_co.paa"};
		scope = 2;
		side = 0;
		typicalcargo[] = {"TK_Soldier_Pilot_EP1"};
	};
	*/
	class TU_Su25_S13: Su39 {
		hiddenselections[] = 
        {
            "camo1",
            "camo2",
            "clan_sign"
        };
		hiddenSelectionsTextures[]=
        {
            "\Ca\air2\Su25\data\su25_body1_rus_co.paa",
            "\Ca\air2\Su25\data\su25_body2_rus_co.paa"
        };
		vehicleclass = "TU_VVS_RF";
		scope = public;
		displayname = $STR_TU_Su25_S13;
		model = "\frl_su25\FRL_su25";
		weapons[] = {"GSh302","TU_S13Launcher","CMFlareLauncher"};
		magazines[] = {
		"ACE_250Rnd_30mm_GSh302", "120Rnd_CMFlare_Chaff_Magazine", "20Rnd_S13T", "20Rnd_S13",
//station 1
		"TU_2Rnd_Empty",
//station 2
		"TU_2Rnd_S13_Pod",
//station 3
		"TU_2Rnd_S13_Pod",
//station 4
		"TU_2Rnd_S13_Pod",
//station 5
		"TU_2Rnd_S13_Pod",
//2x4
		"TU_36Rnd_Empty",
//3x4
//4x4
//5x4
//INVISIBLE		
		};
	};
	
	class TU_Su25_S13_D: TU_Su25_S13 {
		accuracy = 1000;
		vehicleclass = "TU_VVS_RF_D";
		crew = "ACE_RU_Soldier_Pilot_D";
		displayname = $STR_TU_Su25_S13;
		hiddenselectionstextures[] = {"\x\acex_ru\addons\t_veh_su25\su25_body1_rus_des_co.paa", "\x\acex_ru\addons\t_veh_su25\su25_body2_rus_des_co.paa"};
		
	};
	
	class TU_Su25_S13_CDF: TU_Su25_S13 {
		vehicleclass = "TU_VVS_CDF";
		accuracy = 1.5;
		crew = "CDF_Soldier_Pilot";
		displayname = $STR_TU_Su25K_S13;
		faction = "CDF";
		hiddenselectionstextures[] = {"\Ca\air2\Su25\data\su25_body1_cdf_co.paa", "\Ca\air2\Su25\data\su25_body2_cdf_co.paa"};
		scope = 2;
		side = 1;
		typicalcargo[] = {"CDF_Soldier_Pilot"};
	};
	
	class TU_Su25_S13_TK: TU_Su25_S13 {
		vehicleclass = "TU_VVS_TK";
		accuracy = 1.5;
		crew = "TK_Soldier_Pilot_EP1";
		displayname = $STR_TU_Su25K_S13;
		expansion = 1;
		faction = "BIS_TK";
		hiddenselectionstextures[] = {"Ca\Air_E\Data\su25_body1_IND_co.paa", "Ca\Air_E\Data\su25_body2_IND_co.paa"};
		scope = 2;
		side = 0;
		typicalcargo[] = {"TK_Soldier_Pilot_EP1"};
	};
	
	class TU_Su25_S8: Su39 {
		hiddenselections[] = 
        {
            "camo1",
            "camo2",
            "clan_sign"
        };
		hiddenSelectionsTextures[]=
        {
            "\Ca\air2\Su25\data\su25_body1_rus_co.paa",
            "\Ca\air2\Su25\data\su25_body2_rus_co.paa"
        };
		vehicleclass = "TU_VVS_RF";
		scope = public;
		displayname = $STR_TU_Su25_S8;
		model = "\frl_su25\FRL_su25";
		weapons[] = {"GSh302","ACE_S8Launcher_Plane","CMFlareLauncher"};
		magazines[] = {
		"ACE_250Rnd_30mm_GSh302", "120Rnd_CMFlare_Chaff_Magazine", "80Rnd_S8T", "80Rnd_80mm",
//station 1
		"TU_2Rnd_Empty",
//station 2
		"TU_2Rnd_S8_Pod",
//station 3
		"TU_2Rnd_S8_Pod",
//station 4
		"TU_2Rnd_S8_Pod",
//station 5
		"TU_2Rnd_S8_Pod",
//2x4
		"TU_36Rnd_Empty",
//3x4
//4x4
//5x4
//INVISIBLE		
		};
	};
	
	class TU_Su25_S8_D: TU_Su25_S8 {
		accuracy = 1000;
		vehicleclass = "TU_VVS_RF_D";
		crew = "ACE_RU_Soldier_Pilot_D";
		displayname = $STR_TU_Su25_S8;
		hiddenselectionstextures[] = {"\x\acex_ru\addons\t_veh_su25\su25_body1_rus_des_co.paa", "\x\acex_ru\addons\t_veh_su25\su25_body2_rus_des_co.paa"};
		
	};
	
	class TU_Su25_S8_CDF: TU_Su25_S8 {
		vehicleclass = "TU_VVS_CDF";
		accuracy = 1.5;
		crew = "CDF_Soldier_Pilot";
		displayname = $STR_TU_Su25K_S8;
		faction = "CDF";
		hiddenselectionstextures[] = {"\Ca\air2\Su25\data\su25_body1_cdf_co.paa", "\Ca\air2\Su25\data\su25_body2_cdf_co.paa"};
		scope = 2;
		side = 1;
		typicalcargo[] = {"CDF_Soldier_Pilot"};
	};
	
	class TU_Su25_S8_TK: TU_Su25_S8 {
		vehicleclass = "TU_VVS_TK";
		accuracy = 1.5;
		crew = "TK_Soldier_Pilot_EP1";
		displayname = $STR_TU_Su25K_S8;
		expansion = 1;
		faction = "BIS_TK";
		hiddenselectionstextures[] = {"Ca\Air_E\Data\su25_body1_IND_co.paa", "Ca\Air_E\Data\su25_body2_IND_co.paa"};
		scope = 2;
		side = 0;
		typicalcargo[] = {"TK_Soldier_Pilot_EP1"};
	};
	
	class TU_Su25_250: Su39 {
		hiddenselections[] = 
        {
            "camo1",
            "camo2",
            "clan_sign"
        };
		hiddenSelectionsTextures[]=
        {
            "\Ca\air2\Su25\data\su25_body1_rus_co.paa",
            "\Ca\air2\Su25\data\su25_body2_rus_co.paa"
        };
		vehicleclass = "TU_VVS_RF";
		scope = public;
		displayname = $STR_TU_Su25_250;
		model = "\frl_su25\FRL_su25";
		weapons[] = {"GSh302","ACE_AirBombLauncher","CMFlareLauncher"};
		magazines[] = {
		"ACE_250Rnd_30mm_GSh302", "120Rnd_CMFlare_Chaff_Magazine",
//station 1
		"TU_2Rnd_Empty",
//station 2
//station 3
//station 4
//station 5
		"TU_8Rnd_FAB_250",
//2x4
		"TU_36Rnd_Empty",
//3x4
//4x4
//5x4
//INVISIBLE		
		};
	};
	
	class TU_Su25_250_D: TU_Su25_250 {
		accuracy = 1000;
		vehicleclass = "TU_VVS_RF_D";
		crew = "ACE_RU_Soldier_Pilot_D";
		displayname = $STR_TU_Su25_250;
		hiddenselectionstextures[] = {"\x\acex_ru\addons\t_veh_su25\su25_body1_rus_des_co.paa", "\x\acex_ru\addons\t_veh_su25\su25_body2_rus_des_co.paa"};
		
	};
	
	class TU_Su25_250_CDF: TU_Su25_250 {
		vehicleclass = "TU_VVS_CDF";
		accuracy = 1.5;
		crew = "CDF_Soldier_Pilot";
		displayname = $STR_TU_Su25K_250;
		faction = "CDF";
		hiddenselectionstextures[] = {"\Ca\air2\Su25\data\su25_body1_cdf_co.paa", "\Ca\air2\Su25\data\su25_body2_cdf_co.paa"};
		scope = 2;
		side = 1;
		typicalcargo[] = {"CDF_Soldier_Pilot"};
	};
	
	class TU_Su25_250_TK: TU_Su25_250 {
		vehicleclass = "TU_VVS_TK";
		accuracy = 1.5;
		crew = "TK_Soldier_Pilot_EP1";
		displayname = $STR_TU_Su25K_250;
		expansion = 1;
		faction = "BIS_TK";
		hiddenselectionstextures[] = {"Ca\Air_E\Data\su25_body1_IND_co.paa", "Ca\Air_E\Data\su25_body2_IND_co.paa"};
		scope = 2;
		side = 0;
		typicalcargo[] = {"TK_Soldier_Pilot_EP1"};
	};
	/*
	class TU_Su25_500: Su39 {
		vehicleclass = "TU_VVS_RF";
		scope = public;
		displayname = $STR_TU_Su25_500;
		model = "\frl_su25\FRL_su25";
		weapons[] = {"GSh302","ACE_FAB500M62Launcher","CMFlareLauncher"};
		magazines[] = {
		"ACE_250Rnd_30mm_GSh302", "120Rnd_CMFlare_Chaff_Magazine",
//station 1
		"TU_2Rnd_Empty",
//station 2
//station 3
//station 4
//station 5
		"ACE_8Rnd_FAB500M62",
//2x4
		"TU_36Rnd_Empty",
//3x4
//4x4
//5x4
//INVISIBLE		
		};
	};
	
	class TU_Su25_500_D: TU_Su25_500 {
		accuracy = 1000;
		vehicleclass = "TU_VVS_RF_D";
		crew = "ACE_RU_Soldier_Pilot_D";
		displayname = $STR_TU_Su25_500;
		hiddenselectionstextures[] = {"\x\acex_ru\addons\t_veh_su25\su25_body1_rus_des_co.paa", "\x\acex_ru\addons\t_veh_su25\su25_body2_rus_des_co.paa"};
		
	};
	
	class TU_Su25_500_CDF: TU_Su25_500 {
		vehicleclass = "TU_VVS_CDF";
		accuracy = 1.5;
		crew = "CDF_Soldier_Pilot";
		displayname = $STR_TU_Su25K_500;
		faction = "CDF";
		hiddenselectionstextures[] = {"\Ca\air2\Su25\data\su25_body1_cdf_co.paa", "\Ca\air2\Su25\data\su25_body2_cdf_co.paa"};
		scope = 2;
		side = 1;
		typicalcargo[] = {"CDF_Soldier_Pilot"};
	};
	
	class TU_Su25_500_TK: TU_Su25_500 {
		vehicleclass = "TU_VVS_TK";
		accuracy = 1.5;
		crew = "TK_Soldier_Pilot_EP1";
		displayname = $STR_TU_Su25K_500;
		expansion = 1;
		faction = "BIS_TK";
		hiddenselectionstextures[] = {"Ca\Air_E\Data\su25_body1_IND_co.paa", "Ca\Air_E\Data\su25_body2_IND_co.paa"};
		scope = 2;
		side = 0;
		typicalcargo[] = {"TK_Soldier_Pilot_EP1"};
	};
	*/
	class TU_Su25_Kh25_S8: Su39 {
		hiddenselections[] = 
        {
            "camo1",
            "camo2",
            "clan_sign"
        };
		hiddenSelectionsTextures[]=
        {
            "\Ca\air2\Su25\data\su25_body1_rus_co.paa",
            "\Ca\air2\Su25\data\su25_body2_rus_co.paa"
        };
		vehicleclass = "TU_VVS_RF";
		scope = public;
		displayname = $STR_TU_Su25_Kh25_S8;
		model = "\frl_su25\FRL_su25";
		weapons[] = {"GSh302","ACE_Kh25Launcher","ACE_S8Launcher_Plane","CMFlareLauncher"};
		magazines[] = {
		"ACE_250Rnd_30mm_GSh302", "120Rnd_CMFlare_Chaff_Magazine", "40Rnd_S8T", "40Rnd_80mm",
//station 1
		"TU_2Rnd_Empty",
//station 2
		"TU_2Rnd_S8_Pod",
//station 3
		"TU_2Rnd_S8_Pod",
//station 4
//station 5
		"ACE_4Rnd_Kh25",
//2x4
		"TU_36Rnd_Empty",
//3x4
//4x4
//5x4
//INVISIBLE		
		};
	};
	
	class TU_Su25_Kh25_S8_D: TU_Su25_Kh25_S8 {
		accuracy = 1000;
		vehicleclass = "TU_VVS_RF_D";
		crew = "ACE_RU_Soldier_Pilot_D";
		displayname = $STR_TU_Su25_Kh25_S8;
		hiddenselectionstextures[] = {"\x\acex_ru\addons\t_veh_su25\su25_body1_rus_des_co.paa", "\x\acex_ru\addons\t_veh_su25\su25_body2_rus_des_co.paa"};
		
	};
	
	class TU_Su25_Kh25_S8_CDF: TU_Su25_Kh25_S8 {
		vehicleclass = "TU_VVS_CDF";
		accuracy = 1.5;
		crew = "CDF_Soldier_Pilot";
		displayname = $STR_TU_Su25K_Kh25_S8;
		faction = "CDF";
		hiddenselectionstextures[] = {"\Ca\air2\Su25\data\su25_body1_cdf_co.paa", "\Ca\air2\Su25\data\su25_body2_cdf_co.paa"};
		scope = 2;
		side = 1;
		typicalcargo[] = {"CDF_Soldier_Pilot"};
	};
	
	class TU_Su25_Kh25_S8_TK: TU_Su25_Kh25_S8 {
		vehicleclass = "TU_VVS_TK";
		accuracy = 1.5;
		crew = "TK_Soldier_Pilot_EP1";
		displayname = $STR_TU_Su25K_Kh25_S8;
		expansion = 1;
		faction = "BIS_TK";
		hiddenselectionstextures[] = {"Ca\Air_E\Data\su25_body1_IND_co.paa", "Ca\Air_E\Data\su25_body2_IND_co.paa"};
		scope = 2;
		side = 0;
		typicalcargo[] = {"TK_Soldier_Pilot_EP1"};
	};
	
	class TU_Su25_Kh29L_Kh25_S8: Su39 {
		hiddenselections[] = 
        {
            "camo1",
            "camo2",
            "clan_sign"
        };
		hiddenSelectionsTextures[]=
        {
            "\Ca\air2\Su25\data\su25_body1_rus_co.paa",
            "\Ca\air2\Su25\data\su25_body2_rus_co.paa"
        };
		vehicleclass = "TU_VVS_RF";
		scope = public;
		displayname = $STR_TU_Su25_Kh29L_Kh25_S8;
		model = "\frl_su25\FRL_su25";
		weapons[] = {"GSh302","ACE_Kh29Launcher","ACE_Kh25Launcher","ACE_S8Launcher_Plane","CMFlareLauncher"};
		magazines[] = {
		"ACE_250Rnd_30mm_GSh302", "120Rnd_CMFlare_Chaff_Magazine", "40Rnd_S8T", "40Rnd_80mm",
//station 1
		"TU_2Rnd_Empty",
//station 2
		"TU_2Rnd_S8_Pod",
//station 3
		"TU_2Rnd_S8_Pod",
//station 4
		"ACE_2Rnd_Kh25",
//station 5
		"ACE_2Rnd_Kh29",
//2x4
		"TU_36Rnd_Empty",
//3x4
//4x4
//5x4
//INVISIBLE		
		};
	};
	
	class TU_Su25_Kh29L_Kh25_S8_D: TU_Su25_Kh29L_Kh25_S8 {
		accuracy = 1000;
		vehicleclass = "TU_VVS_RF_D";
		crew = "ACE_RU_Soldier_Pilot_D";
		displayname = $STR_TU_Su25_Kh29L_Kh25_S8;
		hiddenselectionstextures[] = {"\x\acex_ru\addons\t_veh_su25\su25_body1_rus_des_co.paa", "\x\acex_ru\addons\t_veh_su25\su25_body2_rus_des_co.paa"};
		
	};
	
	class TU_Su25_Kh29L_Kh25_S8_CDF: TU_Su25_Kh29L_Kh25_S8 {
		vehicleclass = "TU_VVS_CDF";
		accuracy = 1.5;
		crew = "CDF_Soldier_Pilot";
		displayname = $STR_TU_Su25K_Kh29L_Kh25_S8;
		faction = "CDF";
		hiddenselectionstextures[] = {"\Ca\air2\Su25\data\su25_body1_cdf_co.paa", "\Ca\air2\Su25\data\su25_body2_cdf_co.paa"};
		scope = 2;
		side = 1;
		typicalcargo[] = {"CDF_Soldier_Pilot"};
	};
	
	class TU_Su25_Kh29L_Kh25_S8_TK: TU_Su25_Kh29L_Kh25_S8 {
		vehicleclass = "TU_VVS_TK";
		accuracy = 1.5;
		crew = "TK_Soldier_Pilot_EP1";
		displayname = $STR_TU_Su25K_Kh29L_Kh25_S8;
		expansion = 1;
		faction = "BIS_TK";
		hiddenselectionstextures[] = {"Ca\Air_E\Data\su25_body1_IND_co.paa", "Ca\Air_E\Data\su25_body2_IND_co.paa"};
		scope = 2;
		side = 0;
		typicalcargo[] = {"TK_Soldier_Pilot_EP1"};
	};
	
	class TU_Su25_Kh29L_FAB250_S8: Su39 {
		hiddenselections[] = 
        {
            "camo1",
            "camo2",
            "clan_sign"
        };
		hiddenSelectionsTextures[]=
        {
            "\Ca\air2\Su25\data\su25_body1_rus_co.paa",
            "\Ca\air2\Su25\data\su25_body2_rus_co.paa"
        };
		vehicleclass = "TU_VVS_RF";
		scope = public;
		displayname = $STR_TU_Su25_Kh29L_FAB250_S8;
		model = "\frl_su25\FRL_su25";
		weapons[] = {"GSh302","ACE_Kh29Launcher","ACE_AirBombLauncher","ACE_S8Launcher_Plane","CMFlareLauncher"};
		magazines[] = {
		"ACE_250Rnd_30mm_GSh302", "120Rnd_CMFlare_Chaff_Magazine", "40Rnd_S8T", "40Rnd_80mm",
//station 1
		"TU_2Rnd_Empty",
//station 2
		"TU_2Rnd_FAB_250",
//station 3
		"TU_2Rnd_S8_Pod",
//station 4
		"TU_2Rnd_S8_Pod",
//station 5
		"ACE_2Rnd_Kh29",
//2x4
		"TU_36Rnd_Empty",
//3x4
//4x4
//5x4
//INVISIBLE		
		};
	};
	
	class TU_Su25_Kh29L_FAB250_S8_D: TU_Su25_Kh29L_FAB250_S8 {
		accuracy = 1000;
		vehicleclass = "TU_VVS_RF_D";
		crew = "ACE_RU_Soldier_Pilot_D";
		hiddenselectionstextures[] = {"\x\acex_ru\addons\t_veh_su25\su25_body1_rus_des_co.paa", "\x\acex_ru\addons\t_veh_su25\su25_body2_rus_des_co.paa"};
		
	};
	
	class TU_Su25_Kh29L_FAB250_S8_CDF: TU_Su25_Kh29L_FAB250_S8 {
		vehicleclass = "TU_VVS_CDF";
		accuracy = 1.5;
		crew = "CDF_Soldier_Pilot";
		displayname = $STR_TU_Su25K_Kh29L_FAB250_S8;
		faction = "CDF";
		hiddenselectionstextures[] = {"\Ca\air2\Su25\data\su25_body1_cdf_co.paa", "\Ca\air2\Su25\data\su25_body2_cdf_co.paa"};
		scope = 2;
		side = 1;
		typicalcargo[] = {"CDF_Soldier_Pilot"};
	};
	
	class TU_Su25_Kh29L_FAB250_S8_TK: TU_Su25_Kh29L_FAB250_S8 {
		vehicleclass = "TU_VVS_TK";
		accuracy = 1.5;
		crew = "TK_Soldier_Pilot_EP1";
		displayname = $STR_TU_Su25K_Kh29L_FAB250_S8;
		expansion = 1;
		faction = "BIS_TK";
		hiddenselectionstextures[] = {"Ca\Air_E\Data\su25_body1_IND_co.paa", "Ca\Air_E\Data\su25_body2_IND_co.paa"};
		scope = 2;
		side = 0;
		typicalcargo[] = {"TK_Soldier_Pilot_EP1"};
	};
	
	class TU_Su25_Kh29L_S8: Su39 {
		hiddenselections[] = 
        {
            "camo1",
            "camo2",
            "clan_sign"
        };
		hiddenSelectionsTextures[]=
        {
            "\Ca\air2\Su25\data\su25_body1_rus_co.paa",
            "\Ca\air2\Su25\data\su25_body2_rus_co.paa"
        };
		vehicleclass = "TU_VVS_RF";
		scope = public;
		displayname = $STR_TU_Su25_Kh29L_S8;
		model = "\frl_su25\FRL_su25";
		weapons[] = {"GSh302","ACE_Kh29Launcher","R60MLauncher","ACE_S8Launcher_Plane","CMFlareLauncher"};
		magazines[] = {
		"ACE_250Rnd_30mm_GSh302", "120Rnd_CMFlare_Chaff_Magazine", "40Rnd_S8T", "40Rnd_80mm",
//station 1
		"TU_2Rnd_R60M",
//station 2
		"TU_2Rnd_Empty",
//station 3
		"TU_2Rnd_S8_Pod",
//station 4
		"TU_2Rnd_S8_Pod",
//station 5
		"ACE_2Rnd_Kh29",
//2x4
		"TU_36Rnd_Empty",
//3x4
//4x4
//5x4
//INVISIBLE		
		};
	};
	
	class TU_Su25_Kh29L_S8_D: TU_Su25_Kh29L_S8 {
		accuracy = 1000;
		vehicleclass = "TU_VVS_RF_D";
		crew = "ACE_RU_Soldier_Pilot_D";
		displayname = $STR_TU_Su25_Kh29L_S8;
		hiddenselectionstextures[] = {"\x\acex_ru\addons\t_veh_su25\su25_body1_rus_des_co.paa", "\x\acex_ru\addons\t_veh_su25\su25_body2_rus_des_co.paa"};
		
	};
	
	class TU_Su25_Kh29L_S8_CDF: TU_Su25_Kh29L_S8 {
		vehicleclass = "TU_VVS_CDF";
		accuracy = 1.5;
		crew = "CDF_Soldier_Pilot";
		displayname = $STR_TU_Su25K_Kh29L_S8;
		faction = "CDF";
		hiddenselectionstextures[] = {"\Ca\air2\Su25\data\su25_body1_cdf_co.paa", "\Ca\air2\Su25\data\su25_body2_cdf_co.paa"};
		scope = 2;
		side = 1;
		typicalcargo[] = {"CDF_Soldier_Pilot"};
	};
	
	class TU_Su25_Kh29L_S8_TK: TU_Su25_Kh29L_S8 {
		vehicleclass = "TU_VVS_TK";
		accuracy = 1.5;
		crew = "TK_Soldier_Pilot_EP1";
		displayname = $STR_TU_Su25K_Kh29L_S8;
		expansion = 1;
		faction = "BIS_TK";
		hiddenselectionstextures[] = {"Ca\Air_E\Data\su25_body1_IND_co.paa", "Ca\Air_E\Data\su25_body2_IND_co.paa"};
		scope = 2;
		side = 0;
		typicalcargo[] = {"TK_Soldier_Pilot_EP1"};
	};
	/*
	class TU_Su25_R73: Su39 {
		vehicleclass = "TU_VVS_RF";
		scope = public;
		displayname = $STR_TU_Su25_R73;
		model = "\frl_su25\FRL_su25";
		weapons[] = {"GSh302","ACE_AirBombLauncher","R60MLauncher","ACE_R73Launcher","ACE_S8Launcher_Plane","CMFlareLauncher"};
		magazines[] = {
		"ACE_250Rnd_30mm_GSh302", "120Rnd_CMFlare_Chaff_Magazine", "40Rnd_S8T", "40Rnd_80mm",
//station 1
		"TU_2Rnd_R60M",
//station 2
		"TU_2Rnd_R73",
//station 3
		"TU_2Rnd_FAB_250",
//station 4
		"TU_2Rnd_S8_Pod",
//station 5
		"TU_2Rnd_S8_Pod",
//2x4
		"TU_36Rnd_Empty",
//3x4
//4x4
//5x4
//INVISIBLE		
		};
	};
	
	class TU_Su25_R73_D: TU_Su25_R73 {
		accuracy = 1000;
		vehicleclass = "TU_VVS_RF_D";
		crew = "ACE_RU_Soldier_Pilot_D";
		displayname = $STR_TU_Su25_R73;
		hiddenselectionstextures[] = {"\x\acex_ru\addons\t_veh_su25\su25_body1_rus_des_co.paa", "\x\acex_ru\addons\t_veh_su25\su25_body2_rus_des_co.paa"};
		
	};
	
	class TU_Su25_R73_CDF: TU_Su25_R73 {
		vehicleclass = "TU_VVS_CDF";
		accuracy = 1.5;
		crew = "CDF_Soldier_Pilot";
		displayname = $STR_TU_Su25K_R73;
		faction = "CDF";
		hiddenselectionstextures[] = {"\Ca\air2\Su25\data\su25_body1_cdf_co.paa", "\Ca\air2\Su25\data\su25_body2_cdf_co.paa"};
		scope = 2;
		side = 1;
		typicalcargo[] = {"CDF_Soldier_Pilot"};
	};
	
	class TU_Su25_R73_TK: TU_Su25_R73 {
		vehicleclass = "TU_VVS_TK";
		accuracy = 1.5;
		crew = "TK_Soldier_Pilot_EP1";
		displayname = $STR_TU_Su25K_R73;
		expansion = 1;
		faction = "BIS_TK";
		hiddenselectionstextures[] = {"Ca\Air_E\Data\su25_body1_IND_co.paa", "Ca\Air_E\Data\su25_body2_IND_co.paa"};
		scope = 2;
		side = 0;
		typicalcargo[] = {"TK_Soldier_Pilot_EP1"};
	};
	*/
	class TU_Su25SM_250_S8: Su39 {
		hiddenselections[] = 
        {
            "camo1",
            "camo2",
            "clan_sign"
        };
		hiddenSelectionsTextures[]=
        {
            "\Ca\air2\Su25\data\su25_body1_rus_co.paa",
            "\Ca\air2\Su25\data\su25_body2_rus_co.paa"
        };
		vehicleclass = "TU_VVS_RF";
		incommingmissliedetectionsystem = 16;
		scope = public;
		optics = 1;
		displayname = $STR_TU_Su25SM_250_S8;
		model = "\frl_su25\FRL_su25";
		driveropticsmodel = "\ca\air\optika_Ka50_gun";
		memorypointdriveroptics = "kulomet";
		class ViewOptics {
			gunneropticseffect[] = {"TVOptics", "OpticsBlur2", "OpticsCHAbera2"};
			gunneropticsmodel = "\ca\air\optika_Ka50_gun";
			initanglex = 0;
			initangley = 0;
			initfov = 0.14;
			maxanglex = 30;
			maxangley = 100;
			maxfov = 0.4;
			minanglex = -30;
			minangley = -100;
			minfov = 0.14;
			visionmode[] = {"Normal", "NVG"};
		};
		weapons[] = {"GSh302","ACE_AirBombLauncher","R73MLauncher","ACE_S8Launcher_Plane","CMFlareLauncher"};
		magazines[] = {
		"ACE_250Rnd_30mm_GSh302", "120Rnd_CMFlare_Chaff_Magazine", "40Rnd_S8T", "40Rnd_80mm",
//station 1
		"TU_2Rnd_R73M",
//station 2
//station 3
		"TU_4Rnd_FAB_250",
//station 4
		"TU_2Rnd_S8_Pod",
//station 5
		"TU_2Rnd_S8_Pod",
//2x4
		"TU_36Rnd_Empty",
//3x4
//4x4
//5x4
//INVISIBLE		
		};
	};
		
	class TU_Su25SM_250_S8_CDF: TU_Su25SM_250_S8 {
		vehicleclass = "TU_VVS_CDF";
		incommingmissliedetectionsystem = 16;
		accuracy = 1.5;
		crew = "CDF_Soldier_Pilot";
		displayname = $STR_TU_Su25SMK_250_S8;
		faction = "CDF";
		hiddenselectionstextures[] = {"\Ca\air2\Su25\data\su25_body1_cdf_co.paa", "\Ca\air2\Su25\data\su25_body2_cdf_co.paa"};
		scope = 2;
		side = 1;
		typicalcargo[] = {"CDF_Soldier_Pilot"};
	};
	
	class TU_Su25SM_250_S8_TK: TU_Su25SM_250_S8 {
		vehicleclass = "TU_VVS_TK";
		incommingmissliedetectionsystem = 16;
		accuracy = 1.5;
		crew = "TK_Soldier_Pilot_EP1";
		displayname = $STR_TU_Su25SMK_250_S8;
		expansion = 1;
		faction = "BIS_TK";
		hiddenselectionstextures[] = {"Ca\Air_E\Data\su25_body1_IND_co.paa", "Ca\Air_E\Data\su25_body2_IND_co.paa"};
		scope = 2;
		side = 0;
		typicalcargo[] = {"TK_Soldier_Pilot_EP1"};
	};
	
	class TU_Su25SM_500_S8: Su39 {
		hiddenselections[] = 
        {
            "camo1",
            "camo2",
            "clan_sign"
        };
		hiddenSelectionsTextures[]=
        {
            "\Ca\air2\Su25\data\su25_body1_rus_co.paa",
            "\Ca\air2\Su25\data\su25_body2_rus_co.paa"
        };
		vehicleclass = "TU_VVS_RF";
		incommingmissliedetectionsystem = 16;
		scope = public;
		optics = 1;
		displayname = $STR_TU_Su25SM_500_S8;
		memorypointdriveroptics = "kulomet";
		model = "\frl_su25\FRL_su25";
		driveropticsmodel = "\ca\air\optika_Ka50_gun";
		class ViewOptics {
			gunneropticseffect[] = {"TVOptics", "OpticsBlur2", "OpticsCHAbera2"};
			gunneropticsmodel = "\ca\air\optika_Ka50_gun";
			initanglex = 0;
			initangley = 0;
			initfov = 0.14;
			maxanglex = 30;
			maxangley = 100;
			maxfov = 0.4;
			minanglex = -30;
			minangley = -100;
			minfov = 0.14;
			visionmode[] = {"Normal", "NVG"};
		};
		weapons[] = {"GSh302","ACE_FAB500M62Launcher","R73MLauncher","ACE_S8Launcher_Plane","CMFlareLauncher"};
		magazines[] = {
		"ACE_250Rnd_30mm_GSh302", "120Rnd_CMFlare_Chaff_Magazine", "40Rnd_S8T", "40Rnd_80mm",
//station 1
		"TU_2Rnd_R73M",
//station 2
//station 3
		"ACE_4Rnd_FAB500M62",
//station 4
		"TU_2Rnd_S8_Pod",
//station 5
		"TU_2Rnd_S8_Pod",
//2x4
		"TU_36Rnd_Empty",
//3x4
//4x4
//5x4
//INVISIBLE		
		};
	};
		
	class TU_Su25SM_500_S8_CDF: TU_Su25SM_500_S8 {
		vehicleclass = "TU_VVS_CDF";
		incommingmissliedetectionsystem = 16;
		accuracy = 1.5;
		crew = "CDF_Soldier_Pilot";
		displayname = $STR_TU_Su25SMK_500_S8;
		faction = "CDF";
		hiddenselectionstextures[] = {"\Ca\air2\Su25\data\su25_body1_cdf_co.paa", "\Ca\air2\Su25\data\su25_body2_cdf_co.paa"};
		scope = 2;
		side = 1;
		typicalcargo[] = {"CDF_Soldier_Pilot"};
	};
	
	class TU_Su25SM_500_S8_TK: TU_Su25SM_500_S8 {
		vehicleclass = "TU_VVS_TK";
		incommingmissliedetectionsystem = 16;
		accuracy = 1.5;
		crew = "TK_Soldier_Pilot_EP1";
		displayname = $STR_TU_Su25SMK_500_S8;
		expansion = 1;
		faction = "BIS_TK";
		hiddenselectionstextures[] = {"Ca\Air_E\Data\su25_body1_IND_co.paa", "Ca\Air_E\Data\su25_body2_IND_co.paa"};
		scope = 2;
		side = 0;
		typicalcargo[] = {"TK_Soldier_Pilot_EP1"};
	};
	
	class TU_Su25SM_250_S13: Su39 {
		hiddenselections[] = 
        {
            "camo1",
            "camo2",
            "clan_sign"
        };
		hiddenSelectionsTextures[]=
        {
            "\Ca\air2\Su25\data\su25_body1_rus_co.paa",
            "\Ca\air2\Su25\data\su25_body2_rus_co.paa"
        };
		vehicleclass = "TU_VVS_RF";
		incommingmissliedetectionsystem = 16;
		scope = public;
		optics = 1;
		displayname = $STR_TU_Su25SM_250_S13;
		memorypointdriveroptics = "kulomet";
		model = "\frl_su25\FRL_su25";
		driveropticsmodel = "\ca\air\optika_Ka50_gun";
		class ViewOptics {
			gunneropticseffect[] = {"TVOptics", "OpticsBlur2", "OpticsCHAbera2"};
			gunneropticsmodel = "\ca\air\optika_Ka50_gun";
			initanglex = 0;
			initangley = 0;
			initfov = 0.14;
			maxanglex = 30;
			maxangley = 100;
			maxfov = 0.4;
			minanglex = -30;
			minangley = -100;
			minfov = 0.14;
			visionmode[] = {"Normal", "NVG"};
		};
		weapons[] = {"GSh302","ACE_AirBombLauncher","R73MLauncher","TU_S13Launcher","CMFlareLauncher"};
		magazines[] = {
		"ACE_250Rnd_30mm_GSh302", "120Rnd_CMFlare_Chaff_Magazine", "10Rnd_S13T", "10Rnd_S13",
//station 1
		"TU_2Rnd_R73M",
//station 2
//station 3
		"TU_4Rnd_FAB_250",
//station 4
		"TU_2Rnd_S13_Pod",
//station 5
		"TU_2Rnd_S13_Pod",
//2x4
		"TU_36Rnd_Empty",
//3x4
//4x4
//5x4
//INVISIBLE		
		};
	};
	
	class TU_Su25SM_250_S13_CDF: TU_Su25SM_250_S13 {
		vehicleclass = "TU_VVS_CDF";
		incommingmissliedetectionsystem = 16;
		accuracy = 1.5;
		crew = "CDF_Soldier_Pilot";
		displayname = $STR_TU_Su25SMK_250_S13;
		faction = "CDF";
		hiddenselectionstextures[] = {"\Ca\air2\Su25\data\su25_body1_cdf_co.paa", "\Ca\air2\Su25\data\su25_body2_cdf_co.paa"};
		scope = 2;
		side = 1;
		typicalcargo[] = {"CDF_Soldier_Pilot"};
	};
	
	class TU_Su25SM_250_S13_TK: TU_Su25SM_250_S13 {
		vehicleclass = "TU_VVS_TK";
		incommingmissliedetectionsystem = 16;
		accuracy = 1.5;
		crew = "TK_Soldier_Pilot_EP1";
		displayname = $STR_TU_Su25SMK_250_S13;
		expansion = 1;
		faction = "BIS_TK";
		hiddenselectionstextures[] = {"Ca\Air_E\Data\su25_body1_IND_co.paa", "Ca\Air_E\Data\su25_body2_IND_co.paa"};
		scope = 2;
		side = 0;
		typicalcargo[] = {"TK_Soldier_Pilot_EP1"};
	};
	
	class TU_Su25SM_S24: Su39 {
		hiddenselections[] = 
        {
            "camo1",
            "camo2",
            "clan_sign"
        };
		hiddenSelectionsTextures[]=
        {
            "\Ca\air2\Su25\data\su25_body1_rus_co.paa",
            "\Ca\air2\Su25\data\su25_body2_rus_co.paa"
        };
		vehicleclass = "TU_VVS_RF";
		scope = public;
		displayname = $STR_TU_Su25SM_S24;
		model = "\frl_su25\FRL_su25";
		weapons[] = {"GSh302","R60MLauncher","TU_S24Launcher","CMFlareLauncher"};
		magazines[] = {
		"ACE_250Rnd_30mm_GSh302", "120Rnd_CMFlare_Chaff_Magazine",
//station 1
		"TU_2Rnd_R60M",
//station 2
		"TU_1Rnd_S24","TU_1Rnd_S24",
//station 3
		"TU_1Rnd_S24","TU_1Rnd_S24",
//station 4
		"TU_1Rnd_S24","TU_1Rnd_S24",
//station 5
		"TU_1Rnd_S24","TU_1Rnd_S24",
//2x4
		"TU_36Rnd_Empty",
//3x4
//4x4
//5x4
//INVISIBLE		
		};
	};
	
	class TU_Su25SM_S24_CDF: TU_Su25_S24 {
		vehicleclass = "TU_VVS_CDF";
		accuracy = 1.5;
		crew = "CDF_Soldier_Pilot";
		displayname = $STR_TU_Su25SMK_S24;
		faction = "CDF";
		hiddenselectionstextures[] = {"\Ca\air2\Su25\data\su25_body1_cdf_co.paa", "\Ca\air2\Su25\data\su25_body2_cdf_co.paa"};
		scope = 2;
		side = 1;
		typicalcargo[] = {"CDF_Soldier_Pilot"};
	};
	
	class TU_Su25SM_S24_TK: TU_Su25_S24 {
		vehicleclass = "TU_VVS_TK";
		accuracy = 1.5;
		crew = "TK_Soldier_Pilot_EP1";
		displayname = $STR_TU_Su25SMK_S24;
		expansion = 1;
		faction = "BIS_TK";
		hiddenselectionstextures[] = {"Ca\Air_E\Data\su25_body1_IND_co.paa", "Ca\Air_E\Data\su25_body2_IND_co.paa"};
		scope = 2;
		side = 0;
		typicalcargo[] = {"TK_Soldier_Pilot_EP1"};
	};
	
	class TU_Su25SM_S24_Kh25: Su39 {
		hiddenselections[] = 
        {
            "camo1",
            "camo2",
            "clan_sign"
        };
		hiddenSelectionsTextures[]=
        {
            "\Ca\air2\Su25\data\su25_body1_rus_co.paa",
            "\Ca\air2\Su25\data\su25_body2_rus_co.paa"
        };
		vehicleclass = "TU_VVS_RF";
		scope = public;
		displayname = $STR_TU_Su25SM_S24_Kh25;
		model = "\frl_su25\FRL_su25";
		weapons[] = {"GSh302","ACE_Kh25Launcher","R60MLauncher","TU_S24Launcher","CMFlareLauncher"};
		magazines[] = {
		"ACE_250Rnd_30mm_GSh302", "120Rnd_CMFlare_Chaff_Magazine",
//station 1
		"TU_2Rnd_R60M",
//station 2
		"TU_1Rnd_S24","TU_1Rnd_S24",
//station 3
		"TU_1Rnd_S24","TU_1Rnd_S24",
//station 4
		"ACE_4Rnd_Kh25",
//station 5
//2x4
		"TU_36Rnd_Empty",
//3x4
//4x4
//5x4
//INVISIBLE		
		};
	};
	
	class TU_Su25SM_S24_Kh25_CDF: TU_Su25_S24_Kh25 {
		vehicleclass = "TU_VVS_CDF";
		accuracy = 1.5;
		crew = "CDF_Soldier_Pilot";
		displayname = $STR_TU_Su25SMK_S24_Kh25;
		faction = "CDF";
		hiddenselectionstextures[] = {"\Ca\air2\Su25\data\su25_body1_cdf_co.paa", "\Ca\air2\Su25\data\su25_body2_cdf_co.paa"};
		scope = 2;
		side = 1;
		typicalcargo[] = {"CDF_Soldier_Pilot"};
	};
	
	class TU_Su25SM_S24_Kh25_TK: TU_Su25_S24_Kh25 {
		vehicleclass = "TU_VVS_TK";
		accuracy = 1.5;
		crew = "TK_Soldier_Pilot_EP1";
		displayname = $STR_TU_Su25SMK_S24_Kh25;
		expansion = 1;
		faction = "BIS_TK";
		hiddenselectionstextures[] = {"Ca\Air_E\Data\su25_body1_IND_co.paa", "Ca\Air_E\Data\su25_body2_IND_co.paa"};
		scope = 2;
		side = 0;
		typicalcargo[] = {"TK_Soldier_Pilot_EP1"};
	};
	/*
	class TU_Su25SM_500_S13: Su39 {
		vehicleclass = "TU_VVS_RF";
		incommingmissliedetectionsystem = 16;
		scope = public;
		optics = 1;
		displayname = $STR_TU_Su25SM_500_S13;
		memorypointdriveroptics = "kulomet";
		model = "\frl_su25\FRL_su25";
		driveropticsmodel = "\ca\air\optika_Ka50_gun";
		class ViewOptics {
			gunneropticseffect[] = {"TVOptics", "OpticsBlur2", "OpticsCHAbera2"};
			gunneropticsmodel = "\ca\air\optika_Ka50_gun";
			initanglex = 0;
			initangley = 0;
			initfov = 0.14;
			maxanglex = 30;
			maxangley = 100;
			maxfov = 0.4;
			minanglex = -30;
			minangley = -100;
			minfov = 0.14;
			visionmode[] = {"Normal", "NVG"};
		};
		weapons[] = {"GSh302","ACE_FAB500M62Launcher","TU_S13Launcher","CMFlareLauncher"};
		magazines[] = {
		"ACE_250Rnd_30mm_GSh302", "120Rnd_CMFlare_Chaff_Magazine", "10Rnd_S13T", "10Rnd_S13",
//station 1
		"TU_2Rnd_Empty",
//station 2
//station 3
		"ACE_4Rnd_FAB500M62",
//station 4
		"TU_2Rnd_S13_Pod",
//station 5
		"TU_2Rnd_S13_Pod",
//2x4
		"TU_36Rnd_Empty",
//3x4
//4x4
//5x4
//INVISIBLE		
		};
	};
	
	class TU_Su25SM_500_S13_D: TU_Su25SM_500_S13 {
		accuracy = 1000;
		vehicleclass = "TU_VVS_RF_D";
		crew = "ACE_RU_Soldier_Pilot_D";
		displayname = $STR_TU_Su25SM_500_S13;
		hiddenselectionstextures[] = {"\x\acex_ru\addons\t_veh_su25\su25_body1_rus_des_co.paa", "\x\acex_ru\addons\t_veh_su25\su25_body2_rus_des_co.paa"};
		
	};
	
	class TU_Su25SM_500_S13_CDF: TU_Su25SM_500_S13 {
		vehicleclass = "TU_VVS_CDF";
		incommingmissliedetectionsystem = 16;
		accuracy = 1.5;
		crew = "CDF_Soldier_Pilot";
		displayname = $STR_TU_Su25SMK_500_S13;
		faction = "CDF";
		hiddenselectionstextures[] = {"\Ca\air2\Su25\data\su25_body1_cdf_co.paa", "\Ca\air2\Su25\data\su25_body2_cdf_co.paa"};
		scope = 2;
		side = 1;
		typicalcargo[] = {"CDF_Soldier_Pilot"};
	};
	
	class TU_Su25SM_500_S13_TK: TU_Su25SM_500_S13 {
		vehicleclass = "TU_VVS_TK";
		incommingmissliedetectionsystem = 16;
		accuracy = 1.5;
		crew = "TK_Soldier_Pilot_EP1";
		displayname = $STR_TU_Su25SMK_500_S13;
		expansion = 1;
		faction = "BIS_TK";
		hiddenselectionstextures[] = {"Ca\Air_E\Data\su25_body1_IND_co.paa", "Ca\Air_E\Data\su25_body2_IND_co.paa"};
		scope = 2;
		side = 0;
		typicalcargo[] = {"TK_Soldier_Pilot_EP1"};
	};
	*/
	class TU_Su25SM_S13: Su39 {
		hiddenselections[] = 
        {
            "camo1",
            "camo2",
            "clan_sign"
        };
		hiddenSelectionsTextures[]=
        {
            "\Ca\air2\Su25\data\su25_body1_rus_co.paa",
            "\Ca\air2\Su25\data\su25_body2_rus_co.paa"
        };
		vehicleclass = "TU_VVS_RF";
		incommingmissliedetectionsystem = 16;
		scope = public;
		optics = 1;
		displayname = $STR_TU_Su25SM_S13;
		memorypointdriveroptics = "kulomet";
		model = "\frl_su25\FRL_su25";
		driveropticsmodel = "\ca\air\optika_Ka50_gun";
		class ViewOptics {
			gunneropticseffect[] = {"TVOptics", "OpticsBlur2", "OpticsCHAbera2"};
			gunneropticsmodel = "\ca\air\optika_Ka50_gun";
			initanglex = 0;
			initangley = 0;
			initfov = 0.14;
			maxanglex = 30;
			maxangley = 100;
			maxfov = 0.4;
			minanglex = -30;
			minangley = -100;
			minfov = 0.14;
			visionmode[] = {"Normal", "NVG"};
		};
		weapons[] = {"GSh302","TU_S13Launcher","CMFlareLauncher"};
		magazines[] = {
		"ACE_250Rnd_30mm_GSh302", "120Rnd_CMFlare_Chaff_Magazine", "20Rnd_S13T", "20Rnd_S13",
//station 1
		"TU_2Rnd_Empty",
//station 2
		"TU_2Rnd_S13_Pod",
//station 3
		"TU_2Rnd_S13_Pod",
//station 4
		"TU_2Rnd_S13_Pod",
//station 5
		"TU_2Rnd_S13_Pod",
//2x4
		"TU_36Rnd_Empty",
//3x4
//4x4
//5x4
//INVISIBLE		
		};
	};
	
	class TU_Su25SM_S13_CDF: TU_Su25SM_S13 {
		vehicleclass = "TU_VVS_CDF";
		incommingmissliedetectionsystem = 16;
		accuracy = 1.5;
		crew = "CDF_Soldier_Pilot";
		displayname = $STR_TU_Su25SMK_S13;
		faction = "CDF";
		hiddenselectionstextures[] = {"\Ca\air2\Su25\data\su25_body1_cdf_co.paa", "\Ca\air2\Su25\data\su25_body2_cdf_co.paa"};
		scope = 2;
		side = 1;
		typicalcargo[] = {"CDF_Soldier_Pilot"};
	};
	
	class TU_Su25SM_S13_TK: TU_Su25SM_S13 {
		vehicleclass = "TU_VVS_TK";
		incommingmissliedetectionsystem = 16;
		accuracy = 1.5;
		crew = "TK_Soldier_Pilot_EP1";
		displayname = $STR_TU_Su25SMK_S13;
		expansion = 1;
		faction = "BIS_TK";
		hiddenselectionstextures[] = {"Ca\Air_E\Data\su25_body1_IND_co.paa", "Ca\Air_E\Data\su25_body2_IND_co.paa"};
		scope = 2;
		side = 0;
		typicalcargo[] = {"TK_Soldier_Pilot_EP1"};
	};
	
	class TU_Su25SM_S8: Su39 {
		hiddenselections[] = 
        {
            "camo1",
            "camo2",
            "clan_sign"
        };
		hiddenSelectionsTextures[]=
        {
            "\Ca\air2\Su25\data\su25_body1_rus_co.paa",
            "\Ca\air2\Su25\data\su25_body2_rus_co.paa"
        };
		vehicleclass = "TU_VVS_RF";
		incommingmissliedetectionsystem = 16;
		scope = public;
		optics = 1;
		displayname = $STR_TU_Su25SM_S8;
		memorypointdriveroptics = "kulomet";
		model = "\frl_su25\FRL_su25";
		driveropticsmodel = "\ca\air\optika_Ka50_gun";
		class ViewOptics {
			gunneropticseffect[] = {"TVOptics", "OpticsBlur2", "OpticsCHAbera2"};
			gunneropticsmodel = "\ca\air\optika_Ka50_gun";
			initanglex = 0;
			initangley = 0;
			initfov = 0.14;
			maxanglex = 30;
			maxangley = 100;
			maxfov = 0.4;
			minanglex = -30;
			minangley = -100;
			minfov = 0.14;
			visionmode[] = {"Normal", "NVG"};
		};
		weapons[] = {"GSh302","ACE_S8Launcher_Plane","CMFlareLauncher"};
		magazines[] = {
		"ACE_250Rnd_30mm_GSh302", "120Rnd_CMFlare_Chaff_Magazine", "80Rnd_S8T", "80Rnd_80mm",
//station 1
		"TU_2Rnd_Empty",
//station 2
		"TU_2Rnd_S8_Pod",
//station 3
		"TU_2Rnd_S8_Pod",
//station 4
		"TU_2Rnd_S8_Pod",
//station 5
		"TU_2Rnd_S8_Pod",
//2x4
		"TU_36Rnd_Empty",
//3x4
//4x4
//5x4
//INVISIBLE		
		};
	};
	
	class TU_Su25SM_S8_CDF: TU_Su25SM_S8 {
		vehicleclass = "TU_VVS_CDF";
		incommingmissliedetectionsystem = 16;
		accuracy = 1.5;
		crew = "CDF_Soldier_Pilot";
		displayname = $STR_TU_Su25SMK_S8;
		faction = "CDF";
		hiddenselectionstextures[] = {"\Ca\air2\Su25\data\su25_body1_cdf_co.paa", "\Ca\air2\Su25\data\su25_body2_cdf_co.paa"};
		scope = 2;
		side = 1;
		typicalcargo[] = {"CDF_Soldier_Pilot"};
	};
	
	class TU_Su25SM_S8_TK: TU_Su25SM_S8 {
		vehicleclass = "TU_VVS_TK";
		incommingmissliedetectionsystem = 16;
		accuracy = 1.5;
		crew = "TK_Soldier_Pilot_EP1";
		displayname = $STR_TU_Su25SMK_S8;
		expansion = 1;
		faction = "BIS_TK";
		hiddenselectionstextures[] = {"Ca\Air_E\Data\su25_body1_IND_co.paa", "Ca\Air_E\Data\su25_body2_IND_co.paa"};
		scope = 2;
		side = 0;
		typicalcargo[] = {"TK_Soldier_Pilot_EP1"};
	};
	
	class TU_Su25SM_250: Su39 {
		hiddenselections[] = 
        {
            "camo1",
            "camo2",
            "clan_sign"
        };
		hiddenSelectionsTextures[]=
        {
            "\Ca\air2\Su25\data\su25_body1_rus_co.paa",
            "\Ca\air2\Su25\data\su25_body2_rus_co.paa"
        };
		vehicleclass = "TU_VVS_RF";
		incommingmissliedetectionsystem = 16;
		scope = public;
		optics = 1;
		displayname = $STR_TU_Su25SM_250;
		memorypointdriveroptics = "kulomet";
		model = "\frl_su25\FRL_su25";
		driveropticsmodel = "\ca\air\optika_Ka50_gun";
		class ViewOptics {
			gunneropticseffect[] = {"TVOptics", "OpticsBlur2", "OpticsCHAbera2"};
			gunneropticsmodel = "\ca\air\optika_Ka50_gun";
			initanglex = 0;
			initangley = 0;
			initfov = 0.14;
			maxanglex = 30;
			maxangley = 100;
			maxfov = 0.4;
			minanglex = -30;
			minangley = -100;
			minfov = 0.14;
			visionmode[] = {"Normal", "NVG"};
		};
		weapons[] = {"GSh302","ACE_AirBombLauncher","CMFlareLauncher"};
		magazines[] = {
		"ACE_250Rnd_30mm_GSh302", "120Rnd_CMFlare_Chaff_Magazine",
//station 1
		"TU_2Rnd_Empty",
//station 2
//station 3
//station 4
//station 5
		"TU_8Rnd_FAB_250",
//2x4
		"TU_36Rnd_Empty",
//3x4
//4x4
//5x4
//INVISIBLE		
		};
	};
	
	class TU_Su25SM_250_CDF: TU_Su25SM_250 {
		vehicleclass = "TU_VVS_CDF";
		incommingmissliedetectionsystem = 16;
		accuracy = 1.5;
		crew = "CDF_Soldier_Pilot";
		displayname = $STR_TU_Su25SMK_250;
		faction = "CDF";
		hiddenselectionstextures[] = {"\Ca\air2\Su25\data\su25_body1_cdf_co.paa", "\Ca\air2\Su25\data\su25_body2_cdf_co.paa"};
		scope = 2;
		side = 1;
		typicalcargo[] = {"CDF_Soldier_Pilot"};
	};
	
	class TU_Su25SM_250_TK: TU_Su25SM_250 {
		vehicleclass = "TU_VVS_TK";
		incommingmissliedetectionsystem = 16;
		accuracy = 1.5;
		crew = "TK_Soldier_Pilot_EP1";
		displayname = $STR_TU_Su25SMK_250;
		expansion = 1;
		faction = "BIS_TK";
		hiddenselectionstextures[] = {"Ca\Air_E\Data\su25_body1_IND_co.paa", "Ca\Air_E\Data\su25_body2_IND_co.paa"};
		scope = 2;
		side = 0;
		typicalcargo[] = {"TK_Soldier_Pilot_EP1"};
	};
	/*
	class TU_Su25SM_500: Su39 {
		vehicleclass = "TU_VVS_RF";
		incommingmissliedetectionsystem = 16;
		scope = public;
		optics = 1;
		displayname = $STR_TU_Su25SM_500;
		memorypointdriveroptics = "kulomet";
		model = "\frl_su25\FRL_su25";
		driveropticsmodel = "\ca\air\optika_Ka50_gun";
		class ViewOptics {
			gunneropticseffect[] = {"TVOptics", "OpticsBlur2", "OpticsCHAbera2"};
			gunneropticsmodel = "\ca\air\optika_Ka50_gun";
			initanglex = 0;
			initangley = 0;
			initfov = 0.14;
			maxanglex = 30;
			maxangley = 100;
			maxfov = 0.4;
			minanglex = -30;
			minangley = -100;
			minfov = 0.14;
			visionmode[] = {"Normal", "NVG"};
		};
		weapons[] = {"GSh302","ACE_FAB500M62Launcher","CMFlareLauncher"};
		magazines[] = {
		"ACE_250Rnd_30mm_GSh302", "120Rnd_CMFlare_Chaff_Magazine",
//station 1
		"TU_2Rnd_Empty",
//station 2
//station 3
//station 4
//station 5
		"ACE_8Rnd_FAB500M62",
//2x4
		"TU_36Rnd_Empty",
//3x4
//4x4
//5x4
//INVISIBLE		
		};
	};
	
	class TU_Su25SM_500_D: TU_Su25SM_500 {
		accuracy = 1000;
		vehicleclass = "TU_VVS_RF_D";
		crew = "ACE_RU_Soldier_Pilot_D";
		displayname = $STR_TU_Su25SM_500;
		hiddenselectionstextures[] = {"\x\acex_ru\addons\t_veh_su25\su25_body1_rus_des_co.paa", "\x\acex_ru\addons\t_veh_su25\su25_body2_rus_des_co.paa"};
		
	};
	
	class TU_Su25SM_500_CDF: TU_Su25SM_500 {
		vehicleclass = "TU_VVS_CDF";
		incommingmissliedetectionsystem = 16;
		accuracy = 1.5;
		crew = "CDF_Soldier_Pilot";
		displayname = $STR_TU_Su25SMK_500;
		faction = "CDF";
		hiddenselectionstextures[] = {"\Ca\air2\Su25\data\su25_body1_cdf_co.paa", "\Ca\air2\Su25\data\su25_body2_cdf_co.paa"};
		scope = 2;
		side = 1;
		typicalcargo[] = {"CDF_Soldier_Pilot"};
	};
	
	class TU_Su25SM_500_TK: TU_Su25SM_500 {
		vehicleclass = "TU_VVS_TK";
		incommingmissliedetectionsystem = 16;
		accuracy = 1.5;
		crew = "TK_Soldier_Pilot_EP1";
		displayname = $STR_TU_Su25SMK_500;
		expansion = 1;
		faction = "BIS_TK";
		hiddenselectionstextures[] = {"Ca\Air_E\Data\su25_body1_IND_co.paa", "Ca\Air_E\Data\su25_body2_IND_co.paa"};
		scope = 2;
		side = 0;
		typicalcargo[] = {"TK_Soldier_Pilot_EP1"};
	};
	*/
	class TU_Su25SM_Kh25_S8: Su39 {
		hiddenselections[] = 
        {
            "camo1",
            "camo2",
            "clan_sign"
        };
		hiddenSelectionsTextures[]=
        {
            "\Ca\air2\Su25\data\su25_body1_rus_co.paa",
            "\Ca\air2\Su25\data\su25_body2_rus_co.paa"
        };
		vehicleclass = "TU_VVS_RF";
		incommingmissliedetectionsystem = 16;
		scope = public;
		optics = 1;
		displayname = $STR_TU_Su25SM_Kh25_S8;
		memorypointdriveroptics = "kulomet";
		model = "\frl_su25\FRL_su25";
		driveropticsmodel = "\ca\air\optika_Ka50_gun";
		class ViewOptics {
			gunneropticseffect[] = {"TVOptics", "OpticsBlur2", "OpticsCHAbera2"};
			gunneropticsmodel = "\ca\air\optika_Ka50_gun";
			initanglex = 0;
			initangley = 0;
			initfov = 0.14;
			maxanglex = 30;
			maxangley = 100;
			maxfov = 0.4;
			minanglex = -30;
			minangley = -100;
			minfov = 0.14;
			visionmode[] = {"Normal", "NVG"};
		};
		weapons[] = {"GSh302","ACE_Kh25Launcher","ACE_S8Launcher_Plane","CMFlareLauncher"};
		magazines[] = {
		"ACE_250Rnd_30mm_GSh302", "120Rnd_CMFlare_Chaff_Magazine", "40Rnd_S8T", "40Rnd_80mm",
//station 1
		"TU_2Rnd_Empty",
//station 2
		"TU_2Rnd_S8_Pod",
//station 3
		"TU_2Rnd_S8_Pod",
//station 4
//station 5
		"ACE_4Rnd_Kh25",
//2x4
		"TU_36Rnd_Empty",
//3x4
//4x4
//5x4
//INVISIBLE		
		};
	};
	
	class TU_Su25SM_Kh25_S8_CDF: TU_Su25SM_Kh25_S8 {
		vehicleclass = "TU_VVS_CDF";
		incommingmissliedetectionsystem = 16;
		accuracy = 1.5;
		crew = "CDF_Soldier_Pilot";
		displayname = $STR_TU_Su25SMK_Kh25_S8;
		faction = "CDF";
		hiddenselectionstextures[] = {"\Ca\air2\Su25\data\su25_body1_cdf_co.paa", "\Ca\air2\Su25\data\su25_body2_cdf_co.paa"};
		scope = 2;
		side = 1;
		typicalcargo[] = {"CDF_Soldier_Pilot"};
	};
	
	class TU_Su25SM_Kh25_S8_TK: TU_Su25SM_Kh25_S8 {
		vehicleclass = "TU_VVS_TK";
		incommingmissliedetectionsystem = 16;
		accuracy = 1.5;
		crew = "TK_Soldier_Pilot_EP1";
		displayname = $STR_TU_Su25SMK_Kh25_S8;
		expansion = 1;
		faction = "BIS_TK";
		hiddenselectionstextures[] = {"Ca\Air_E\Data\su25_body1_IND_co.paa", "Ca\Air_E\Data\su25_body2_IND_co.paa"};
		scope = 2;
		side = 0;
		typicalcargo[] = {"TK_Soldier_Pilot_EP1"};
	};
	
	class TU_Su25SM_Kh29L_Kh25_S8: Su39 {
		hiddenselections[] = 
        {
            "camo1",
            "camo2",
            "clan_sign"
        };
		hiddenSelectionsTextures[]=
        {
            "\Ca\air2\Su25\data\su25_body1_rus_co.paa",
            "\Ca\air2\Su25\data\su25_body2_rus_co.paa"
        };
		vehicleclass = "TU_VVS_RF";
		incommingmissliedetectionsystem = 16;
		scope = public;
		displayname = $STR_TU_Su25SM_Kh29L_Kh25_S8;
		optics = 1;
		memorypointdriveroptics = "kulomet";
		model = "\frl_su25\FRL_su25";
		driveropticsmodel = "\ca\air\optika_Ka50_gun";
		class ViewOptics {
			gunneropticseffect[] = {"TVOptics", "OpticsBlur2", "OpticsCHAbera2"};
			gunneropticsmodel = "\ca\air\optika_Ka50_gun";
			initanglex = 0;
			initangley = 0;
			initfov = 0.14;
			maxanglex = 30;
			maxangley = 100;
			maxfov = 0.4;
			minanglex = -30;
			minangley = -100;
			minfov = 0.14;
			visionmode[] = {"Normal", "NVG"};
		};
		weapons[] = {"GSh302","ACE_Kh29Launcher","ACE_Kh25Launcher","ACE_S8Launcher_Plane","CMFlareLauncher"};
		magazines[] = {
		"ACE_250Rnd_30mm_GSh302", "120Rnd_CMFlare_Chaff_Magazine", "40Rnd_S8T", "40Rnd_80mm",
//station 1
		"TU_2Rnd_Empty",
//station 2
		"TU_2Rnd_S8_Pod",
//station 3
		"TU_2Rnd_S8_Pod",
//station 4
		"ACE_2Rnd_Kh25",
//station 5
		"ACE_2Rnd_Kh29",
//2x4
		"TU_36Rnd_Empty",
//3x4
//4x4
//5x4
//INVISIBLE		
		};
	};
	
	class TU_Su25SM_Kh29L_Kh25_S8_CDF: TU_Su25SM_Kh29L_Kh25_S8 {
		vehicleclass = "TU_VVS_CDF";
		incommingmissliedetectionsystem = 16;
		accuracy = 1.5;
		crew = "CDF_Soldier_Pilot";
		displayname = $STR_TU_Su25SMK_Kh29L_Kh25_S8;
		faction = "CDF";
		hiddenselectionstextures[] = {"\Ca\air2\Su25\data\su25_body1_cdf_co.paa", "\Ca\air2\Su25\data\su25_body2_cdf_co.paa"};
		scope = 2;
		side = 1;
		typicalcargo[] = {"CDF_Soldier_Pilot"};
	};
	
	class TU_Su25SM_Kh29L_Kh25_S8_TK: TU_Su25SM_Kh29L_Kh25_S8 {
		vehicleclass = "TU_VVS_TK";
		incommingmissliedetectionsystem = 16;
		accuracy = 1.5;
		crew = "TK_Soldier_Pilot_EP1";
		displayname = $STR_TU_Su25SMK_Kh29L_Kh25_S8;
		expansion = 1;
		faction = "BIS_TK";
		hiddenselectionstextures[] = {"Ca\Air_E\Data\su25_body1_IND_co.paa", "Ca\Air_E\Data\su25_body2_IND_co.paa"};
		scope = 2;
		side = 0;
		typicalcargo[] = {"TK_Soldier_Pilot_EP1"};
	};
	/*
	class TU_Su25SM_Kh29T_Kh25_S8: Su39 {
		vehicleclass = "TU_VVS_RF";
		incommingmissliedetectionsystem = 16;
		optics = 1;
		scope = public;
		displayname = $STR_TU_Su25SM_Kh29T_Kh25_S8;
		memorypointdriveroptics = "kulomet";
		model = "\frl_su25\FRL_su25";
		driveropticsmodel = "\ca\air\optika_Ka50_gun";
		class ViewOptics {
			gunneropticseffect[] = {"TVOptics", "OpticsBlur2", "OpticsCHAbera2"};
			gunneropticsmodel = "\ca\air\optika_Ka50_gun";
			initanglex = 0;
			initangley = 0;
			initfov = 0.14;
			maxanglex = 30;
			maxangley = 100;
			maxfov = 0.4;
			minanglex = -30;
			minangley = -100;
			minfov = 0.14;
			visionmode[] = {"Normal", "NVG"};
		};
		weapons[] = {"GSh302","Kh29TLauncher","ACE_Kh25Launcher","ACE_S8Launcher_Plane","CMFlareLauncher"};
		magazines[] = {
		"ACE_250Rnd_30mm_GSh302", "120Rnd_CMFlare_Chaff_Magazine", "40Rnd_S8T", "40Rnd_80mm",
//station 1
		"TU_2Rnd_Empty",
//station 2
		"TU_2Rnd_S8_Pod",
//station 3
		"TU_2Rnd_S8_Pod",
//station 4
		"ACE_2Rnd_Kh25",
//station 5
		"TU_2Rnd_Ch29T",
//2x4
		"TU_36Rnd_Empty",
//3x4
//4x4
//5x4
//INVISIBLE		
		};
	};
	
	class TU_Su25SM_Kh29T_Kh25_S8_D: TU_Su25SM_Kh29T_Kh25_S8 {
		accuracy = 1000;
		vehicleclass = "TU_VVS_RF_D";
		crew = "ACE_RU_Soldier_Pilot_D";
		displayname = $STR_TU_Su25SM_Kh29T_Kh25_S8;
		hiddenselectionstextures[] = {"\x\acex_ru\addons\t_veh_su25\su25_body1_rus_des_co.paa", "\x\acex_ru\addons\t_veh_su25\su25_body2_rus_des_co.paa"};
		
	};
	
	class TU_Su25SM_Kh29T_Kh25_S8_CDF: TU_Su25SM_Kh29T_Kh25_S8 {
		vehicleclass = "TU_VVS_CDF";
		incommingmissliedetectionsystem = 16;
		accuracy = 1.5;
		crew = "CDF_Soldier_Pilot";
		displayname = $STR_TU_Su25SMK_Kh29T_Kh25_S8;
		faction = "CDF";
		hiddenselectionstextures[] = {"\Ca\air2\Su25\data\su25_body1_cdf_co.paa", "\Ca\air2\Su25\data\su25_body2_cdf_co.paa"};
		scope = 2;
		side = 1;
		typicalcargo[] = {"CDF_Soldier_Pilot"};
	};
	
	class TU_Su25SM_Kh29T_Kh25_S8_TK: TU_Su25SM_Kh29T_Kh25_S8 {
		vehicleclass = "TU_VVS_TK";
		incommingmissliedetectionsystem = 16;
		accuracy = 1.5;
		crew = "TK_Soldier_Pilot_EP1";
		displayname = $STR_TU_Su25SMK_Kh29T_Kh25_S8;
		expansion = 1;
		faction = "BIS_TK";
		hiddenselectionstextures[] = {"Ca\Air_E\Data\su25_body1_IND_co.paa", "Ca\Air_E\Data\su25_body2_IND_co.paa"};
		scope = 2;
		side = 0;
		typicalcargo[] = {"TK_Soldier_Pilot_EP1"};
	};
	*/
	class TU_Su25SM_Kh29L_FAB250_S8: Su39 {
		hiddenselections[] = 
        {
            "camo1",
            "camo2",
            "clan_sign"
        };
		hiddenSelectionsTextures[]=
        {
            "\Ca\air2\Su25\data\su25_body1_rus_co.paa",
            "\Ca\air2\Su25\data\su25_body2_rus_co.paa"
        };
		vehicleclass = "TU_VVS_RF";
		incommingmissliedetectionsystem = 16;
		scope = public;
		displayname = $STR_TU_Su25SM_Kh29L_FAB250_S8;
		optics = 1;
		memorypointdriveroptics = "kulomet";
		model = "\frl_su25\FRL_su25";
		driveropticsmodel = "\ca\air\optika_Ka50_gun";
		class ViewOptics {
			gunneropticseffect[] = {"TVOptics", "OpticsBlur2", "OpticsCHAbera2"};
			gunneropticsmodel = "\ca\air\optika_Ka50_gun";
			initanglex = 0;
			initangley = 0;
			initfov = 0.14;
			maxanglex = 30;
			maxangley = 100;
			maxfov = 0.4;
			minanglex = -30;
			minangley = -100;
			minfov = 0.14;
			visionmode[] = {"Normal", "NVG"};
		};
		weapons[] = {"GSh302","ACE_Kh29Launcher","ACE_AirBombLauncher","ACE_S8Launcher_Plane","CMFlareLauncher"};
		magazines[] = {
		"ACE_250Rnd_30mm_GSh302", "120Rnd_CMFlare_Chaff_Magazine", "40Rnd_S8T", "40Rnd_80mm",
//station 1
		"TU_2Rnd_Empty",
//station 2
		"TU_2Rnd_FAB_250",
//station 3
		"TU_2Rnd_S8_Pod",
//station 4
		"TU_2Rnd_S8_Pod",
//station 5
		"ACE_2Rnd_Kh29",
//2x4
		"TU_36Rnd_Empty",
//3x4
//4x4
//5x4
//INVISIBLE		
		};
	};
		
	class TU_Su25SM_Kh29L_FAB250_S8_CDF: TU_Su25SM_Kh29L_FAB250_S8 {
		vehicleclass = "TU_VVS_CDF";
		incommingmissliedetectionsystem = 16;
		accuracy = 1.5;
		crew = "CDF_Soldier_Pilot";
		displayname = $STR_TU_Su25SMK_Kh29L_FAB250_S8;
		faction = "CDF";
		hiddenselectionstextures[] = {"\Ca\air2\Su25\data\su25_body1_cdf_co.paa", "\Ca\air2\Su25\data\su25_body2_cdf_co.paa"};
		scope = 2;
		side = 1;
		typicalcargo[] = {"CDF_Soldier_Pilot"};
	};
	
	class TU_Su25SM_Kh29L_FAB250_S8_TK: TU_Su25SM_Kh29L_FAB250_S8 {
		vehicleclass = "TU_VVS_TK";
		incommingmissliedetectionsystem = 16;
		accuracy = 1.5;
		crew = "TK_Soldier_Pilot_EP1";
		displayname = $STR_TU_Su25SMK_Kh29L_FAB250_S8;
		expansion = 1;
		faction = "BIS_TK";
		hiddenselectionstextures[] = {"Ca\Air_E\Data\su25_body1_IND_co.paa", "Ca\Air_E\Data\su25_body2_IND_co.paa"};
		scope = 2;
		side = 0;
		typicalcargo[] = {"TK_Soldier_Pilot_EP1"};
	};
	
	class TU_Su25SM_Kh29L_S8: Su39 {
		hiddenselections[] = 
        {
            "camo1",
            "camo2",
            "clan_sign"
        };
		hiddenSelectionsTextures[]=
        {
            "\Ca\air2\Su25\data\su25_body1_rus_co.paa",
            "\Ca\air2\Su25\data\su25_body2_rus_co.paa"
        };
		vehicleclass = "TU_VVS_RF";
		incommingmissliedetectionsystem = 16;
		scope = public;
		displayname = $STR_TU_Su25SM_Kh29L_S8;
		memorypointdriveroptics = "kulomet";
		optics = 1;
		model = "\frl_su25\FRL_su25";
		driveropticsmodel = "\ca\air\optika_Ka50_gun";
		class ViewOptics {
			gunneropticseffect[] = {"TVOptics", "OpticsBlur2", "OpticsCHAbera2"};
			gunneropticsmodel = "\ca\air\optika_Ka50_gun";
			initanglex = 0;
			initangley = 0;
			initfov = 0.14;
			maxanglex = 30;
			maxangley = 100;
			maxfov = 0.4;
			minanglex = -30;
			minangley = -100;
			minfov = 0.14;
			visionmode[] = {"Normal", "NVG"};
		};
		weapons[] = {"GSh302","ACE_Kh29Launcher","R73MLauncher","ACE_S8Launcher_Plane","CMFlareLauncher"};
		magazines[] = {
		"ACE_250Rnd_30mm_GSh302", "120Rnd_CMFlare_Chaff_Magazine", "40Rnd_S8T", "40Rnd_80mm",
//station 1
		"TU_2Rnd_R73M",
//station 2
		"TU_2Rnd_Empty",
//station 3
		"TU_2Rnd_S8_Pod",
//station 4
		"TU_2Rnd_S8_Pod",
//station 5
		"ACE_2Rnd_Kh29",
//2x4
		"TU_36Rnd_Empty",
//3x4
//4x4
//5x4
//INVISIBLE		
		};
	};
		
	class TU_Su25SM_Kh29L_S8_CDF: TU_Su25SM_Kh29L_S8 {
		vehicleclass = "TU_VVS_CDF";
		incommingmissliedetectionsystem = 16;
		accuracy = 1.5;
		crew = "CDF_Soldier_Pilot";
		displayname = $STR_TU_Su25SMK_Kh29L_S8;
		faction = "CDF";
		hiddenselectionstextures[] = {"\Ca\air2\Su25\data\su25_body1_cdf_co.paa", "\Ca\air2\Su25\data\su25_body2_cdf_co.paa"};
		scope = 2;
		side = 1;
		typicalcargo[] = {"CDF_Soldier_Pilot"};
	};
	
	class TU_Su25SM_Kh29L_S8_TK: TU_Su25SM_Kh29L_S8 {
		vehicleclass = "TU_VVS_TK";
		incommingmissliedetectionsystem = 16;
		accuracy = 1.5;
		crew = "TK_Soldier_Pilot_EP1";
		displayname = $STR_TU_Su25SMK_Kh29L_S8;
		expansion = 1;
		faction = "BIS_TK";
		hiddenselectionstextures[] = {"Ca\Air_E\Data\su25_body1_IND_co.paa", "Ca\Air_E\Data\su25_body2_IND_co.paa"};
		scope = 2;
		side = 0;
		typicalcargo[] = {"TK_Soldier_Pilot_EP1"};
	};
	/*
	class TU_Su25SM_Kh29T_S8: Su39 {
		vehicleclass = "TU_VVS_RF";
		incommingmissliedetectionsystem = 16;
		scope = public;
		displayname = $STR_TU_Su25SM_Kh29T_S8;
		memorypointdriveroptics = "kulomet";
		model = "\frl_su25\FRL_su25";
		optics = 1;
		driveropticsmodel = "\ca\air\optika_Ka50_gun";
		class ViewOptics {
			gunneropticseffect[] = {"TVOptics", "OpticsBlur2", "OpticsCHAbera2"};
			gunneropticsmodel = "\ca\air\optika_Ka50_gun";
			initanglex = 0;
			initangley = 0;
			initfov = 0.14;
			maxanglex = 30;
			maxangley = 100;
			maxfov = 0.4;
			minanglex = -30;
			minangley = -100;
			minfov = 0.14;
			visionmode[] = {"Normal", "NVG"};
		};
		weapons[] = {"GSh302","Kh29TLauncher","R73MLauncher","ACE_S8Launcher_Plane","CMFlareLauncher"};
		magazines[] = {
		"ACE_250Rnd_30mm_GSh302", "120Rnd_CMFlare_Chaff_Magazine", "40Rnd_S8T", "40Rnd_80mm",
//station 1
		"TU_2Rnd_R73M",
//station 2
		"TU_2Rnd_Empty",
//station 3
		"TU_2Rnd_S8_Pod",
//station 4
		"TU_2Rnd_S8_Pod",
//station 5
		"TU_2Rnd_Ch29T",
//2x4
		"TU_36Rnd_Empty",
//3x4
//4x4
//5x4
//INVISIBLE		
		};
	};
	
	class TU_Su25SM_Kh29T_S8_D: TU_Su25SM_Kh29T_S8 {
		accuracy = 1000;
		vehicleclass = "TU_VVS_RF_D";
		crew = "ACE_RU_Soldier_Pilot_D";
		displayname = $STR_TU_Su25SM_Kh29T_S8;
		hiddenselectionstextures[] = {"\x\acex_ru\addons\t_veh_su25\su25_body1_rus_des_co.paa", "\x\acex_ru\addons\t_veh_su25\su25_body2_rus_des_co.paa"};
		
	};
	
	class TU_Su25SM_Kh29T_S8_CDF: TU_Su25SM_Kh29T_S8 {
		vehicleclass = "TU_VVS_CDF";
		incommingmissliedetectionsystem = 16;
		accuracy = 1.5;
		crew = "CDF_Soldier_Pilot";
		displayname = $STR_TU_Su25SMK_Kh29T_S8;
		faction = "CDF";
		hiddenselectionstextures[] = {"\Ca\air2\Su25\data\su25_body1_cdf_co.paa", "\Ca\air2\Su25\data\su25_body2_cdf_co.paa"};
		scope = 2;
		side = 1;
		typicalcargo[] = {"CDF_Soldier_Pilot"};
	};
	
	class TU_Su25SM_Kh29T_S8_TK: TU_Su25SM_Kh29T_S8 {
		vehicleclass = "TU_VVS_TK";
		incommingmissliedetectionsystem = 16;
		accuracy = 1.5;
		crew = "TK_Soldier_Pilot_EP1";
		displayname = $STR_TU_Su25SMK_Kh29T_S8;
		expansion = 1;
		faction = "BIS_TK";
		hiddenselectionstextures[] = {"Ca\Air_E\Data\su25_body1_IND_co.paa", "Ca\Air_E\Data\su25_body2_IND_co.paa"};
		scope = 2;
		side = 0;
		typicalcargo[] = {"TK_Soldier_Pilot_EP1"};
	};
	
	class TU_Su25SM_R73: Su39 {
		vehicleclass = "TU_VVS_RF";
		incommingmissliedetectionsystem = 16;
		scope = public;
		displayname = $STR_TU_Su25SM_R73;
		optics = 1;
		memorypointdriveroptics = "kulomet";
		model = "\frl_su25\FRL_su25";
		driveropticsmodel = "\ca\air\optika_Ka50_gun";
		class ViewOptics {
			gunneropticseffect[] = {"TVOptics", "OpticsBlur2", "OpticsCHAbera2"};
			gunneropticsmodel = "\ca\air\optika_Ka50_gun";
			initanglex = 0;
			initangley = 0;
			initfov = 0.14;
			maxanglex = 30;
			maxangley = 100;
			maxfov = 0.4;
			minanglex = -30;
			minangley = -100;
			minfov = 0.14;
			visionmode[] = {"Normal", "NVG"};
		};
		weapons[] = {"GSh302","ACE_AirBombLauncher","R73MLauncher","ACE_S8Launcher_Plane","CMFlareLauncher"};
		magazines[] = {
		"ACE_250Rnd_30mm_GSh302", "120Rnd_CMFlare_Chaff_Magazine", "40Rnd_S8T", "40Rnd_80mm",
//station 1
//station 2
		"TU_4Rnd_R73M",
//station 3
		"TU_2Rnd_FAB_250",
//station 4
		"TU_2Rnd_S8_Pod",
//station 5
		"TU_2Rnd_S8_Pod",
//2x4
		"TU_36Rnd_Empty",
//3x4
//4x4
//5x4
//INVISIBLE		
		};
	};
	
	class TU_Su25SM_R73_D: TU_Su25SM_R73 {
		accuracy = 1000;
		vehicleclass = "TU_VVS_RF_D";
		crew = "ACE_RU_Soldier_Pilot_D";
		displayname = $STR_TU_Su25SM_R73;
		hiddenselectionstextures[] = {"\x\acex_ru\addons\t_veh_su25\su25_body1_rus_des_co.paa", "\x\acex_ru\addons\t_veh_su25\su25_body2_rus_des_co.paa"};
		
	};
	
	class TU_Su25SM_R73_CDF: TU_Su25SM_R73 {
		vehicleclass = "TU_VVS_CDF";
		incommingmissliedetectionsystem = 16;
		accuracy = 1.5;
		crew = "CDF_Soldier_Pilot";
		displayname = $STR_TU_Su25SMK_R73;
		faction = "CDF";
		hiddenselectionstextures[] = {"\Ca\air2\Su25\data\su25_body1_cdf_co.paa", "\Ca\air2\Su25\data\su25_body2_cdf_co.paa"};
		scope = 2;
		side = 1;
		typicalcargo[] = {"CDF_Soldier_Pilot"};
	};
	
	class TU_Su25SM_R73_TK: TU_Su25SM_R73 {
		vehicleclass = "TU_VVS_TK";
		incommingmissliedetectionsystem = 16;
		accuracy = 1.5;
		crew = "TK_Soldier_Pilot_EP1";
		displayname = $STR_TU_Su25SMK_R73;
		expansion = 1;
		faction = "BIS_TK";
		hiddenselectionstextures[] = {"Ca\Air_E\Data\su25_body1_IND_co.paa", "Ca\Air_E\Data\su25_body2_IND_co.paa"};
		scope = 2;
		side = 0;
		typicalcargo[] = {"TK_Soldier_Pilot_EP1"};
	};
	*/
	class ACE_Su30: Plane {
		vehicleclass = "TU_VVS_RF";
		scope = public;
		irScanGround = 0;
		irscanrangemax = 11000;
		irscantoeyefactor = 3;
		displayname = $STR_Su30;
		optics = 1;
		drivercansee = "1+2+4+16";
		gunnercansee = "1+2+4+16+32";
		driveropticsmodel = "\x\acex_ru\addons\m_veh_su30\optika_SU30_gunner";
		memorypointdriveroptics = "gunnerview";	
		magazines[] = {"ACE_150Rnd_30mm_GSh301", "120Rnd_CMFlare_Chaff_Magazine"};
		weapons[] = {"ACE_GSh301", "CMFlareLauncher"};
		class ViewOptics: ViewOptics {
			initanglex = 0;
			initangley = 0;
			maxanglex = 0;
			maxangley = 0;
			maxfov = 0.4;
			minanglex = 0;
			minangley = 0;
			minfov = 0.14;
			initfov = 0.14;
			visionmode[] = {"Normal", "NVG", "TI"};
			thermalmode[] = {0, 1};
		};
		class Turrets {
			class MainTurret: NewTurret {
				optics = 1;
				magazines[] = {"4Rnd_R73M", "ACE_6Rnd_Kh29", "TU_2Rnd_R77"};
				weapons[] = {"R73MLauncher", "TU_R77Launcher", "ACE_Kh29Launcher"};
				gunneropticsmodel = "\x\acex_ru\addons\m_veh_su30\optika_SU30_gunner";
				class ViewOptics: ViewOptics {
					gunneropticsmodel = "\x\acex_ru\addons\m_veh_su30\optika_SU30_gunner";
					initanglex = 0;
					initangley = 0;
					maxanglex = 0;
					maxangley = 0;
					maxfov = 0.4;
					minanglex = 0;
					minangley = 0;
					minfov = 0.09;
					initfov = 0.14;
					visionmode[] = {"Normal", "NVG", "TI"};
					thermalmode[] = {0, 1};
				};
			};
		};
	};
	
	class TU_Su30_MR: ACE_Su30 {
		vehicleclass = "TU_VVS_RF";
		accuracy = 1000;
		displayname = $STR_Su30_MR;
		optics = 1;
		magazines[] = {"ACE_150Rnd_30mm_GSh301", "120Rnd_CMFlare_Chaff_Magazine"};
		weapons[] = {"ACE_GSh301", "CMFlareLauncher"};
		scope = 2;
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				optics = 1;
				magazines[] = {"4Rnd_R73M", "ACE_4Rnd_KAB500L", "ACE_2Rnd_FAB500M62", "TU_2Rnd_R77"};
				weapons[] = {"R73MLauncher", "TU_R77Launcher", "ACE_FAB500M62Launcher", "ACE_KAB500LLauncher"};
			};
		};
	};

	class ACE_Su30_Des: ACE_Su30 {
		vehicleclass = "TU_VVS_RF_D";
		drivercansee = "1+2+4+16";
		optics = 1;
		gunnercansee = "1+2+4+16+32";
		displayname = $STR_Su30_MR;
		magazines[] = {"ACE_150Rnd_30mm_GSh301", "120Rnd_CMFlare_Chaff_Magazine"};
		weapons[] = {"ACE_GSh301", "CMFlareLauncher"};
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				magazines[] = {"4Rnd_R73M", "ACE_4Rnd_KAB500L", "ACE_2Rnd_FAB500M62", "TU_2Rnd_R77"};
				weapons[] = {"R73MLauncher", "TU_R77Launcher", "ACE_FAB500M62Launcher", "ACE_KAB500LLauncher"};
				optics = 1;
			};
		};
	};
	
	class TU_Su30_KAB250: TU_Su30_MR {
		vehicleclass = "TU_VVS_RF";
		accuracy = 1000;
		optics = 1;
		displayname = $STR_Su30_KAB250;
		magazines[] = {"ACE_150Rnd_30mm_GSh301", "40Rnd_S8T", "120Rnd_CMFlare_Chaff_Magazine"};
		weapons[] = {"ACE_GSh301", "CMFlareLauncher"};
		scope = 2;
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				magazines[] = {"4Rnd_R73M", "TU_2Rnd_R77", "ACE_2Rnd_Kh25", "TU_4Rnd_KAB250L"};
				weapons[] = {"R73MLauncher", "TU_R77Launcher", "ACE_Kh25Launcher", "KAB250LLauncher"};
				optics = 1;
			};
		};
	};
	
	class TU_Su30_KAB250_D: ACE_Su30_Des {
		accuracy = 1000;
		vehicleclass = "TU_VVS_RF_D";
		displayname = $STR_Su30_KAB250;
		optics = 1;
		magazines[] = {"ACE_150Rnd_30mm_GSh301", "40Rnd_S8T", "120Rnd_CMFlare_Chaff_Magazine"};
		weapons[] = {"ACE_GSh301", "CMFlareLauncher"};
		scope = 2;
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				magazines[] = {"4Rnd_R73M", "TU_2Rnd_R77", "ACE_2Rnd_Kh25", "TU_4Rnd_KAB250L"};
				weapons[] = {"R73MLauncher", "TU_R77Launcher", "ACE_Kh25Launcher", "KAB250LLauncher"};
				optics = 1;
			};
		};
	};

	class TU_Su30_D: ACE_Su30_Des {
		vehicleclass = "TU_VVS_RF_D";
		displayname = $STR_Su30;
		magazines[] = {"ACE_150Rnd_30mm_GSh301", "120Rnd_CMFlare_Chaff_Magazine"};
		weapons[] = {"ACE_GSh301", "CMFlareLauncher"};
		optics = 1;
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				magazines[] = {"4Rnd_R73M", "ACE_6Rnd_Kh29", "TU_2Rnd_R77"};
				weapons[] = {"R73MLauncher", "TU_R77Launcher", "ACE_Kh29Launcher"};
				optics = 1;
			};
		};
	};

	class TU_Su30_CAP: ACE_Su30 {
		vehicleclass = "TU_VVS_RF";
		displayname = $STR_Su30_CAP;
		magazines[] = {"ACE_150Rnd_30mm_GSh301", "120Rnd_CMFlare_Chaff_Magazine"};
		weapons[] = {"ACE_GSh301", "CMFlareLauncher"};
		optics = 1;
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				magazines[] = {"6Rnd_R73M", "TU_2Rnd_Empty", "TU_4Rnd_R77"};
				weapons[] = {"R73MLauncher", "TU_R77Launcher"};
				optics = 1;
			};
		};
	};

	class TU_Su30_CAP_D: ACE_Su30_Des {
		vehicleclass = "TU_VVS_RF_D";
		displayname = $STR_Su30_CAP;
		magazines[] = {"ACE_150Rnd_30mm_GSh301", "120Rnd_CMFlare_Chaff_Magazine"};
		weapons[] = {"ACE_GSh301", "CMFlareLauncher"};
		optics = 1;
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				magazines[] = {"6Rnd_R73M", "TU_2Rnd_Empty", "TU_4Rnd_R77"};
				weapons[] = {"R73MLauncher", "TU_R77Launcher"};
				optics = 1;
			};
		};
	};
/*
	class TU_Su30_Kh29: ACE_Su30 {
		vehicleclass = "TU_VVS_RF";
		displayname = $STR_Su30_Kh29;
		magazines[] = {"ACE_150Rnd_30mm_GSh301", "120Rnd_CMFlare_Chaff_Magazine"};
		weapons[] = {"ACE_GSh301", "CMFlareLauncher"};
		optics = 1;
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				magazines[] = {"4Rnd_R73M", "TU_2Rnd_Ch29T", "ACE_4Rnd_Kh29", "TU_4Rnd_R77"};
				weapons[] = {"R73MLauncher", "TU_R77Launcher", "ACE_Kh29Launcher", "Kh29TLauncher" };
				optics = 1;
			};
		};
	};

	class TU_Su30_Kh29_D: ACE_Su30_Des {
		vehicleclass = "TU_VVS_RF_D";
		displayname = $STR_Su30_Kh29;
		magazines[] = {"ACE_150Rnd_30mm_GSh301", "4Rnd_R73M", "TU_2Rnd_Ch29T", "ACE_4Rnd_Kh29", "TU_4Rnd_R77", "120Rnd_CMFlare_Chaff_Magazine"};
		weapons[] = {"ACE_GSh301", "R73MLauncher", "TU_R77Launcher", "ACE_Kh29Launcher", "Kh29TLauncher" , "CMFlareLauncher"};
		optics = 1;
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				magazines[] = {};
				weapons[] = {"TU_fakelaserweapon"};
				optics = 1;
			};
		};
	};
	*/
	class TU_Su30BKO: ACE_Su30 {
		displayname = $STR_Su30BKO;
		incommingmissliedetectionsystem = 16;
	};

	class TU_Su30BKO_D: TU_Su30_D {
		displayname = $STR_Su30BKO;
		incommingmissliedetectionsystem = 16;
	};

	class TU_Su30BKO_MR: TU_Su30_MR {
		displayname = $STR_Su30BKO_MR;
		incommingmissliedetectionsystem = 16;
	};

	class TU_Su30BKO_Des: ACE_Su30_Des {
		displayname = $STR_Su30BKO_MR;
		incommingmissliedetectionsystem = 16;
	};
	
	class TU_Su30BKO_KAB250: TU_Su30_KAB250 {
		displayname = $STR_Su30BKO_KAB250;
		incommingmissliedetectionsystem = 16;
	};
	
	class TU_Su30BKO_KAB250_D: TU_Su30_KAB250_D {
		displayname = $STR_Su30BKO_KAB250;
		incommingmissliedetectionsystem = 16;
	};

	class TU_Su30BKO_CAP: TU_Su30_CAP {
		displayname = $STR_Su30BKO_CAP;
		incommingmissliedetectionsystem = 16;
	};

	class TU_Su30BKO_CAP_D: TU_Su30_CAP_D {
		displayname = $STR_Su30BKO_CAP;
		incommingmissliedetectionsystem = 16;
	};
/*
	class TU_Su30BKO_Kh29: ACE_Su30 {
		vehicleclass = "TU_VVS_RF";
		displayname = $STR_Su30BKO_Kh29;
		incommingmissliedetectionsystem = 16;
		magazines[] = {"ACE_150Rnd_30mm_GSh301", "4Rnd_R73M", "TU_2Rnd_Ch29T", "ACE_4Rnd_Kh29", "TU_4Rnd_R77", "120Rnd_CMFlare_Chaff_Magazine"};
		weapons[] = {"ACE_GSh301", "R73MLauncher", "TU_R77Launcher", "ACE_Kh29Launcher", "Kh29TLauncher" , "CMFlareLauncher"};
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				magazines[] = {};
				weapons[] = {"TU_fakelaserweapon"};
			};
		};
	};

	class TU_Su30BKO_Kh29_D: ACE_Su30_Des {
		vehicleclass = "TU_VVS_RF_D";
		displayname = $STR_Su30BKO_Kh29;
		incommingmissliedetectionsystem = 16;
		magazines[] = {"ACE_150Rnd_30mm_GSh301", "4Rnd_R73M", "TU_2Rnd_Ch29T", "ACE_4Rnd_Kh29", "TU_4Rnd_R77", "120Rnd_CMFlare_Chaff_Magazine"};
		weapons[] = {"ACE_GSh301", "R73MLauncher", "TU_R77Launcher", "ACE_Kh29Launcher", "Kh29TLauncher" , "CMFlareLauncher"};
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				magazines[] = {};
				weapons[] = {"TU_fakelaserweapon"};
			};
		};
	};
	*/
	class Su34: Plane {
		vehicleclass = "TU_VVS_RF";
		irscanrangemax = 13000;
		irscantoeyefactor = 3;
		drivercansee = "1+2+4+16";
		gunnercansee = "1+2+4+16+32";
		displayname = $STR_Su34;
		driveropticsmodel = "\ca\air\optika_Ka50_gun";
		memorypointdriveroptics = "gunnerview";	
		hiddenselections[] = {"Camo1", "Camo2", "num1", "num2", "num3", "ExtraJAM", "ExtraMH", "clan_sign"};
		optics = 1;
		magazines[] = {"ACE_180Rnd_30mm_GSh301", "120Rnd_CMFlare_Chaff_Magazine"};
		weapons[] = {"ACE_GSh301", "CMFlareLauncher"};
		class ViewOptics {
			gunneropticseffect[] = {"TVOptics", "OpticsBlur2", "OpticsCHAbera2"};
			initanglex = 0;
			initangley = 0;
			initfov = 0.14;
			maxanglex = 30;
			maxangley = 100;
			maxfov = 0.4;
			minanglex = -30;
			minangley = -100;
			minfov = 0.09;
			thermalmode[] = {0, 1};
			visionmode[] = {"Normal", "NVG", "Ti"};
		};
		class Turrets {
			class MainTurret: NewTurret {
				optics = 1;
				magazines[] = {"4Rnd_R73M", "ACE_6Rnd_Kh29", "TU_2Rnd_R77"};
				weapons[] = {"R73MLauncher", "TU_R77Launcher", "ACE_Kh29Launcher"};
				gunnerforceoptics = 0;
				gunneropticsmodel = "\ca\air\optika_Ka50_gun";
				class ViewOptics {
					gunneropticseffect[] = {"TVOptics", "OpticsBlur2", "OpticsCHAbera2"};
					initanglex = 0;
					initangley = 0;
					initfov = 0.14;
					maxanglex = 30;
					maxangley = 100;
					maxfov = 0.4;
					minanglex = -30;
					minangley = -100;
					minfov = 0.06;
					thermalmode[] = {0, 1};
					visionmode[] = {"Normal", "NVG", "Ti"};
				};
			};
		};
	};
	
	class ACE_Su34: Su34 {
		vehicleclass = "TU_VVS_RF";
	};
	
	class ACE_Su34_Des: ACE_Su34 {
		vehicleclass = "TU_VVS_RF_D";
		hiddenselections[] = {"Camo1", "Camo2", "num1", "num2", "num3", "ExtraJAM", "ExtraMH", "clan_sign"};
	};
	
	class ACE_Su34_MR: ACE_Su34 {
		vehicleclass = "TU_VVS_RF";
		displayname = $STR_Su34_MR;
		magazines[] = {"ACE_180Rnd_30mm_GSh301", "120Rnd_CMFlare_Chaff_Magazine"};
		weapons[] = {"ACE_GSh301", "CMFlareLauncher"};
		hiddenselections[] = {"Camo1", "Camo2", "num1", "num2", "num3", "ExtraJAM", "ExtraMH", "clan_sign"};
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				magazines[] = {"4Rnd_R73M", "ACE_2Rnd_Kh25", "ACE_4Rnd_KAB500L", "TU_2Rnd_R77"};
				weapons[] = {"R73MLauncher", "TU_R77Launcher", "ACE_Kh25Launcher", "ACE_KAB500LLauncher"};
				optics = 1;
			};
		};
	};
	
	class TU_Su34_KAB1500: ACE_Su34_MR {
		vehicleclass = "TU_VVS_RF";
		displayname = $STR_Su34_KAB1500;
		magazines[] = {"ACE_180Rnd_30mm_GSh301", "120Rnd_CMFlare_Chaff_Magazine"};
		weapons[] = {"ACE_GSh301", "CMFlareLauncher"};
		hiddenselections[] = {"Camo1", "Camo2", "num1", "num2", "num3", "ExtraJAM", "ExtraMH", "clan_sign"};
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				magazines[] = {"4Rnd_R73M", "TU_2Rnd_R77", "ACE_2Rnd_Kh25", "ACE_2Rnd_KAB500L", "TU_1Rnd_Empty", "TU_1Rnd_KAB1500L"};
				weapons[] = {"R73MLauncher", "TU_R77Launcher", "ACE_Kh25Launcher", "ACE_KAB500LLauncher", "KAB1500LLauncher"};
				optics = 1;
			};
		};
	};
	
	class ACE_Su34_MR_Des: ACE_Su34_MR {
		vehicleclass = "TU_VVS_RF_D";
		hiddenselections[] = {"Camo1", "Camo2", "num1", "num2", "num3", "ExtraJAM", "ExtraMH", "clan_sign"};
	};
	
	class TU_Su34_KAB1500_D: ACE_Su34_MR_Des {
		vehicleclass = "TU_VVS_RF_D";
		displayname = $STR_Su34_KAB1500;
		hiddenselections[] = {"Camo1", "Camo2", "num1", "num2", "num3", "ExtraJAM", "ExtraMH", "clan_sign"};
		magazines[] = {"ACE_180Rnd_30mm_GSh301", "120Rnd_CMFlare_Chaff_Magazine"};
		weapons[] = {"ACE_GSh301", "CMFlareLauncher"};
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				magazines[] = {"4Rnd_R73M", "TU_2Rnd_R77", "ACE_2Rnd_Kh25", "ACE_2Rnd_KAB500L", "TU_1Rnd_Empty", "TU_1Rnd_KAB1500L"};
				weapons[] = {"R73MLauncher", "TU_R77Launcher", "ACE_Kh25Launcher", "ACE_KAB500LLauncher", "KAB1500LLauncher"};
				optics = 1;
			};
		};
	};
	
	class ACE_T10: Plane_LG {
		class ACE: ACE {
			class ACE_MISSILEGUIDANCE: ACE_MISSILEGUIDANCE
			{
				ACE_DESIGNATOR = 1;
				ACE_RANGEFINDER = 0;
			};
		};
	};

	class ACE_Su27: ACE_T10 {
		irScanGround = 0;
		irscanrangemax = 9000;
		irscantoeyefactor = 2;
		class Eventhandlers;
	};
	
	class ACE_Su27_CAP: ACE_Su27 {
		vehicleclass = "TU_VVS_RF";
		displayname = $STR_Su27_CAP;
	};
	
	class TU_Su27_CAP2: ACE_Su27_CAP {
		vehicleclass = "TU_VVS_RF";
		displayname = $STR_Su27_CAP2;
		magazines[] = {"ACE_150Rnd_30mm_GSh301", "ACE_6Rnd_R73", "ACE_4Rnd_R27", "120Rnd_CMFlare_Chaff_Magazine"};
	};
	
	class ACE_Su27_CASP: ACE_Su27 {
		vehicleclass = "TU_VVS_RF";
		displayname = $STR_Su27_CASP;
	};
	
	class ACE_Su27_CAS: ACE_Su27 {
		vehicleclass = "TU_VVS_RF";
		displayname = $STR_Su27_CAS;
	};
	
	class TU_Su27BKO_CAP: ACE_Su27_CAP {
		vehicleclass = "TU_VVS_RF";
		displayname = $STR_Su27BKO_CAP;
		magazines[] = {"ACE_150Rnd_30mm_GSh301", "4Rnd_R73M", "6Rnd_R77", "120Rnd_CMFlare_Chaff_Magazine"};
		weapons[] = {"ACE_GSh301", "R73MLauncher", "TU_R77Launcher", "CMFlareLauncher"};
		incommingmissliedetectionsystem = 16;	
		irScanGround = 0;
		irscanrangemax = 10000;
		irscantoeyefactor = 2.1;
	};
	
	class TU_Su27BKO_CAP2: ACE_Su27_CAP {
		vehicleclass = "TU_VVS_RF";
		displayname = $STR_Su27BKO_CAP2;
		magazines[] = {"ACE_150Rnd_30mm_GSh301", "6Rnd_R73M", "4Rnd_R77", "120Rnd_CMFlare_Chaff_Magazine"};
		weapons[] = {"ACE_GSh301", "R73MLauncher", "TU_R77Launcher", "CMFlareLauncher"};
		incommingmissliedetectionsystem = 16;	
		irScanGround = 0;
		irscanrangemax = 10000;
		irscantoeyefactor = 2.1;
	};
	
	class TU_Su27BKO_CASP: ACE_Su27_CASP {
		vehicleclass = "TU_VVS_RF";
		displayname = $STR_Su27BKO_CASP;
		magazines[] = {"ACE_150Rnd_30mm_GSh301", "4Rnd_R73M", "ACE_2Rnd_S8T", "ACE_2Rnd_S8T", "4Rnd_R77", "ACE_80Rnd_S8T", "120Rnd_CMFlare_Chaff_Magazine"};
		weapons[] = {"ACE_GSh301", "R73MLauncher", "TU_R77Launcher", "ACE_S8Launcher", "CMFlareLauncher"};
		incommingmissliedetectionsystem = 16;	
		irScanGround = 0;
		irscanrangemax = 10000;
		irscantoeyefactor = 2.1;
	};

	class TU_Su27BKO_CAS: ACE_Su27_CAS {
		vehicleclass = "TU_VVS_RF";
		displayname = $STR_Su27BKO_CAS;
		magazines[] = {"ACE_150Rnd_30mm_GSh301", "4Rnd_R73M", "ACE_2Rnd_S8T", "ACE_2Rnd_S8T", "ACE_1Rnd_S8T", "ACE_1Rnd_S8T", "2Rnd_R77", "ACE_120Rnd_S8T", "120Rnd_CMFlare_Chaff_Magazine"};
		weapons[] = {"ACE_GSh301", "R73MLauncher", "TU_R77Launcher", "ACE_S8Launcher", "CMFlareLauncher"};
		incommingmissliedetectionsystem = 16;
		irScanGround = 0;
		irscanrangemax = 10000;
		irscantoeyefactor = 2.1;
	};
	
	class TU_Su27_CAP_D: ACE_Su27_CAP {
		hiddenselectionstextures[] = {"\x\acex_ru\addons\t_veh_su30\body1_des_co.paa", "\x\acex_ru\addons\t_veh_su30\body2_des_co.paa"};
		vehicleclass = "TU_VVS_RF_D";
	};
	
	class TU_Su27_CAP2_D: TU_Su27_CAP2 {
		hiddenselectionstextures[] = {"\x\acex_ru\addons\t_veh_su30\body1_des_co.paa", "\x\acex_ru\addons\t_veh_su30\body2_des_co.paa"};
		vehicleclass = "TU_VVS_RF_D";
	};
	
	class TU_Su27_CASP_D: ACE_Su27_CASP {
		hiddenselectionstextures[] = {"\x\acex_ru\addons\t_veh_su30\body1_des_co.paa", "\x\acex_ru\addons\t_veh_su30\body2_des_co.paa"};
		vehicleclass = "TU_VVS_RF_D";
	};
	
	class TU_Su27_CAS_D: ACE_Su27_CAS {
		hiddenselectionstextures[] = {"\x\acex_ru\addons\t_veh_su30\body1_des_co.paa", "\x\acex_ru\addons\t_veh_su30\body2_des_co.paa"};
		vehicleclass = "TU_VVS_RF_D";
	};
	
	class TU_Su27BKO_CAP_D: TU_Su27BKO_CAP {
		hiddenselectionstextures[] = {"\x\acex_ru\addons\t_veh_su30\body1_des_co.paa", "\x\acex_ru\addons\t_veh_su30\body2_des_co.paa"};
		vehicleclass = "TU_VVS_RF_D";
	};
	
	class TU_Su27BKO_CAP2_D: TU_Su27BKO_CAP2 {
		hiddenselectionstextures[] = {"\x\acex_ru\addons\t_veh_su30\body1_des_co.paa", "\x\acex_ru\addons\t_veh_su30\body2_des_co.paa"};
		vehicleclass = "TU_VVS_RF_D";
	};
	
	class TU_Su27BKO_CASP_D: TU_Su27BKO_CASP {
		hiddenselectionstextures[] = {"\x\acex_ru\addons\t_veh_su30\body1_des_co.paa", "\x\acex_ru\addons\t_veh_su30\body2_des_co.paa"};
		vehicleclass = "TU_VVS_RF_D";
	};

	class TU_Su27BKO_CAS_D: TU_Su27BKO_CAS {
		hiddenselectionstextures[] = {"\x\acex_ru\addons\t_veh_su30\body1_des_co.paa", "\x\acex_ru\addons\t_veh_su30\body2_des_co.paa"};
		vehicleclass = "TU_VVS_RF_D";
	};
	
	class TU_MiG29_R73M : ACE_Su27 {
		ace_afterburner_engines[] = {{0.9, -6.5, -0.1}, {-0.9, -6.5, -0.1}};
		destrtype = "DestructDefault";
		scope = public;
		vehicleclass = "TU_VVS_RF";
		displayname = $STR_TU_MiG29_R73M;
		textSingular = "Mig-29";
		textPlural = "Mig-29s";
		class Eventhandlers: DefaultEventhandlers {
			killed = "{_this removeWeapon _x} forEach weapons _this; _this call SLX_XEH_EH_Killed;";
		};
		
		class Library {
			libTextDesc = "$STR_TU_MiG29_LIB";
		};
		
		picture = "\csla_air\Icons\mig29A.paa";
		icon = "\csla_air\Icons\Ico_mig29.paa";
		mapSize = 16;
		model = "\csla_air\mig29\csla_mig29_ru.p3d";
		supplyRadius = 8;
		memoryPointGun = "machinegun";
		memoryPointLMissile = "Missile_1";
		memoryPointRMissile = "Missile_2";
		memoryPointLRocket = "Rocket_1";
		memoryPointRRocket = "Rocket_2";
		speechSingular[] = {"MiG-29"};
		speechPlural[] = {"MiG-29s"};
		gunAimDown = 0.01;
		
		// threat (VSoft, VArmor, VAir), how threatening vehicle is to unit types
		threat[] = {1, 1, 1};

		DriverAction = "csla_mig29_pilot";
		weapons[] = {"ACE_GSh301", "R73MLauncher", "CMFlareLauncher"};
		magazines[] = {"ACE_150Rnd_30mm_GSh301", "6Rnd_R73M", "120Rnd_CMFlare_Chaff_Magazine"};
		gunBeg = "gun_muzzle";	// endpoint of the gun
		gunEnd = "gun_chamber";	// chamber of the gun
		
		hiddenSelections[] = {"cislo1", "cislo2", "cislo3", "cislo4", "cisloN", "ru_cislo1", "ru_cislo2"};
		hiddenselectionstextures[] = {};
		armor = 60;
		damageResistance = 0.00336;
		armorStructured = 1;
		landingAoa = "rad 8.5";
		maxSpeed = 1500;	// max speed on level road, km/h
		gearUpTime = 4.5;
		gearDownTime = 3;
		envelope[] = {0, 0.4, 2, 5, 8, 8, 8, 8, 8, 7, 5, 4, 1.5, 1, 0.5, 0};
		aileronSensitivity = 1.2;	// relative aileron sensitivity
		elevatorSensitivity = 1;	// relative elevator sensitivity
		flaps = 2;
		
		class Damage {
			tex[] = {};
			mat[] = {"csla_air\mig29\data\mig29_trup.rvmat", "csla_air\mig29\data\mig29_trup.rvmat", "csla_air\mig29\data\mig29_trup_destruct.rvmat", "csla_air\mig29\data\mig29_int_01.rvmat", "csla_air\mig29\data\mig29_int_01.rvmat", "csla_air\mig29\data\mig29_int_01_destruct.rvmat", "csla_air\mig29\data\mig29_int_02.rvmat", "csla_air\mig29\data\mig29_int_02.rvmat", "csla_air\mig29\data\mig29_int_02_destruct.rvmat", "ca\air3\su34\data\Su34_wheels.rvmat", "ca\air3\su34\data\Su34_wheels.rvmat", "ca\air3\su34\data\Su34_wheels_destruct.rvmat"};
		};
		
		class HitHull {
			armor = 1;
			material = 0;
			name = "trup";
			visual = "trup";
			passThrough = true;
		};
		
		class HitEngine {
			armor = 0.55;
			material = 0;
			name = "motor";
			visual = "motor";
			passThrough = true;
		};
		
		class HitAvionics {
			armor = 0.15;
			material = 0;
			name = "elektronika";
			visual = "elektronika";
			passThrough = false;
		};
		
		class HitMissiles {
			armor = 0.1;
			material = 0;
			name = "munice";
			visual = "munice";
			passThrough = true;
		};
		
		class Reflectors {
			class Left {
				color[] = {0.8, 0.8, 1.0, 1.0};
				ambient[] = {0.07, 0.07, 0.07, 1.0};
				position = "light_1_2_source";
				direction = "light_1_2_target";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				brightness = 1.0;
			};
			
			class Right {
				color[] = {0.8, 0.8, 1.0, 1.0};
				ambient[] = {0.07, 0.07, 0.07, 1.0};
				position = "light_1_3_source";
				direction = "light_1_3_target";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 1;
				brightness = 1.0;
			};
			
			class Front {
				color[] = {0.8, 0.8, 1.0, 1.0};
				ambient[] = {0.07, 0.07, 0.07, 1.0};
				position = "light_1_1_source";
				direction = "light_1_1_target";
				hitpoint = "P svetlo";
				selection = "F svetlo";
				size = 1;
				brightness = 1.0;
			};
		};
		aggregateReflectors[] = {{"Left", "Right"}, {"Front"}};
		
		class MarkerLights {
			class RedStill {
				name = "cerveny pozicni";
				color[] = {1.0, 0.1, 0.1, 1};
				ambient[] = {0.1, 0.01, 0.01, 1};
				brightness = 0.01;
				blinking = false;
			};
			
			class GreenStill {
				name = "zeleny pozicni";
				color[] = {0.1, 1.0, 0.1, 1};
				ambient[] = {0.01, 0.1, 0.01, 1};
				brightness = 0.01;
				blinking = false;
			};
			
			class WhiteStill {
				name = "bily pozicni";
				color[] = {1.0, 1.0, 1.0, 1};
				ambient[] = {0.1, 0.1, 0.1, 1};
				brightness = 0.01;
				blinking = false;
			};
		};
		class MFD {
			class AirplaneHUD {
				borderbottom = 0;
				borderleft = 0;
				borderright = 0;
				bordertop = 0;
				bottomleft = "HUD LD";
				color[] = {0, 1, 0, 0.1};
				enableparallax = 1;
				topleft = "HUD LH";
				topright = "HUD PH";
				class Pos10Vector {
					pos0[] = {0.512, 0.325};
					pos10[] = {2.02, 1.23};
					type = "vector";
				};
				class Bones {
					class ILS_H {
						pos0[] = {0.5, 0.5};
						pos3[] = {0.95, "(0.50)"};
						type = "ils";
					};
					class ILS_W: ILS_H {
						pos3[] = {0.5, 0.86};
					};
					class PlaneW {
						pos[] = {0.5, 0.5};
						type = "fixed";
					};
					class HorizonBankMGun {
						aspectratio = 0.8;
						center[] = {0, 0};
						max = 6.28319;
						maxangle = 360;
						min = -6.28319;
						minangle = -360;
						source = "HorizonBank";
						type = "rotational";
					};
					class HorizonBankReverted {
						aspectratio = 0.8;
						center[] = {0, 0};
						max = "3.14159265*2";
						maxangle = -360;
						min = "-3.14159265*2";
						minangle = 360;
						source = "HorizonBank";
						type = "rotational";
					};
					class HorizonDive {
						max = 1;
						maxpos[] = {0, 0};
						min = -1;
						minpos[] = {0, 1};
						source = "horizonDive";
						type = "linear";
					};
					class WeaponAim: Pos10Vector {
						source = "weapon";
					};
					class rocketAim: Pos10Vector {
						pos0[] = {0.512, 0.32};
						source = "weapon";
					};
					class Target: Pos10Vector {
						source = "target";
					};
					class VelocityNotCenter: Pos10Vector {
						pos0[] = {0, 0};
						pos10[] = {1.5, 1.2};
						source = "velocity";
						type = "vector";
					};
					class SpdMove2 {
						max = 200;
						maxpos[] = {0, 1};
						min = 0;
						minpos[] = {0, 0};
						source = "speed";
						type = "linear";
					};
					class ASLMove1 {
						max = 500;
						maxpos[] = {0, 0.8};
						min = 0;
						minpos[] = {0, 0.1};
						source = "altitudeASL";
						type = "linear";
					};
					class Heading {
						max = 36;
						maxpos[] = {1, 0};
						min = -36;
						minpos[] = {0, 0};
						source = "Heading";
						type = "linear";
					};
				};
				class Draw {
					alpha = 0.6;
					color[] = {0, 0.3, 0.05};
					condition = "on";
					class Static {
						clipbr[] = {1, 0};
						cliptl[] = {0, 0.1};
						points[] = {{"PlaneW", {-0.21, "7.34351e-009"}, 1}, {"PlaneW", {-0.28, "9.79135e-009"}, 1}, {}, {"PlaneW", {0.21, "-2.00338e-009"}, 1}, {"PlaneW", {0.28, "-2.67117e-009"}, 1}, {}, {"PlaneW", {-0.105, 0.145492}, 1}, {"PlaneW", {-0.14, 0.19399}, 1}, {}, {"PlaneW", {0.105, 0.145492}, 1}, {"PlaneW", {0.14, 0.19399}, 1}, {}, {"PlaneW", {-0.181865, 0.084}, 1}, {"PlaneW", {-0.242487, 0.112}, 1}, {}, {"PlaneW", {0.181865, 0.084}, 1}, {"PlaneW", {0.242487, 0.112}, 1}, {}, {"PlaneW", {-0.202844, 0.0434816}, 1}, {"PlaneW", {-0.270459, 0.0579755}, 1}, {}, {"PlaneW", {0.202844, 0.0434816}, 1}, {"PlaneW", {0.270459, 0.0579755}, 1}, {}, {"PlaneW", {-0.209201, 0.0146422}, 1}, {"PlaneW", {-0.244068, 0.0170825}, 1}, {}, {"PlaneW", {-0.20681, 0.0291729}, 1}, {"PlaneW", {-0.241278, 0.034035}, 1}, {}, {"PlaneW", {0.20681, 0.0291729}, 1}, {"PlaneW", {0.241278, 0.034035}, 1}, {}, {"PlaneW", {0.209201, 0.0146422}, 1}, {"PlaneW", {0.244068, 0.0170825}, 1}, {}};
						type = "line";
					};
					class HorizonBank {
						clipbr[] = {1, 0.9};
						cliptl[] = {0, 0.1};
						points[] = {{"PlaneW", 1, "HorizonBankReverted", {0.21, 0}, 1}, {"PlaneW", 1, "HorizonBankReverted", {0.07, 0}, 1}, {}, {"PlaneW", 1, "HorizonBankReverted", {-0.21, 0}, 1}, {"PlaneW", 1, "HorizonBankReverted", {-0.07, 0}, 1}, {}, {"PlaneW", 1, "HorizonBankReverted", {0, 0.14}, 1}, {"PlaneW", 1, "HorizonBankReverted", {0, 0.07}, 1}};
						type = "line";
					};
					class HorizonDive {
						clipbr[] = {1, 0};
						cliptl[] = {0, 0.1};
						points[] = {{"HorizonDive", {0.8, 0}, 1}, {"HorizonDive", {0.2, 0}, 1}};
						type = "line";
					};
					class Missile {
						condition = "missile";
						class Target {
							points[] = {{"Target", {0, -0.08}, 1}, {"Target", {0.05, -0.0696}, 1}, {"Target", {0.087, "-0.50*(0.10)*((1.2/1.5))"}, 1}, {"Target", {"+(0.10)", 0}, 1}, {"Target", {0.087, 0.04}, 1}, {"Target", {0.05, "+0.87*(0.10)*((1.2/1.5))"}, 1}, {"Target", {0, 0.08}, 1}, {"Target", {-0.05, 0.0696}, 1}, {"Target", {-0.087, "+0.50*(0.10)*((1.2/1.5))"}, 1}, {"Target", {"-(0.10)", 0}, 1}, {"Target", {-0.087, -0.04}, 1}, {"Target", {-0.05, "-0.87*(0.10)*((1.2/1.5))"}, 1}, {"Target", {0, -0.08}, 1}};
							type = "line";
						};
					};
					class Cros {
						condition = "on";
						class Cros {
							points[] = {{"WeaponAim", {0.05, 0}, 1}, {"WeaponAim", {0.015, 0}, 1}, {}, {"WeaponAim", {0, 0.04}, 1}, {"WeaponAim", {0, 0.012}, 1}, {}, {"WeaponAim", {-0.05, 0}, 1}, {"WeaponAim", {-0.015, 0}, 1}, {}, {"WeaponAim", {0, -0.04}, 1}, {"WeaponAim", {0, -0.012}, 1}};
							type = "line";
						};
					};
					class SpeedNumber {
						align = "right";
						down[] = {{0.06, 0.12}, 1};
						pos[] = {{0.06, 0.07}, 1};
						right[] = {{0.14, 0.07}, 1};
						scale = 1;
						source = "speed";
						sourcescale = 3.6;
						type = "text";
					};
					class AltNumber: SpeedNumber {
						down[] = {{0.86, 0.12}, 1};
						pos[] = {{0.86, 0.07}, 1};
						right[] = {{0.94, 0.07}, 1};
						source = "altitudeASL";
						sourcescale = 1;
					};
					class HeadingNumber: SpeedNumber {
						align = "right";
						down[] = {"HorizonDive", {0.81, 0}, 1};
						pos[] = {"HorizonDive", {0.81, -0.05}, 1};
						right[] = {"HorizonDive", {0.89, -0.05}, 1};
						source = "HorizonDive";
						sourcescale = 57.2958;
					};
					class MGun {
						condition = "mgun";
						class Lines {
							points[] = {{"VelocityNotCenter", 0.001, "WeaponAim", 1, "HorizonBankMGun", {0.2, 0}, 1}, {"VelocityNotCenter", 0.1, "WeaponAim", 1, "HorizonBankMGun", {0.18, -0.01}, 1}, {"VelocityNotCenter", 0.2, "WeaponAim", 1, "HorizonBankMGun", {0.16, -0.03}, 1}, {"VelocityNotCenter", 0.3, "WeaponAim", 1, "HorizonBankMGun", {0.14, -0.06}, 1}, {"VelocityNotCenter", 0.4, "WeaponAim", 1, "HorizonBankMGun", {0.12, -0.1}, 1}, {"VelocityNotCenter", 0.5, "WeaponAim", 1, "HorizonBankMGun", {0.1, -0.15}, 1}, {"VelocityNotCenter", 0.6, "WeaponAim", 1, "HorizonBankMGun", {0.08, -0.21}, 1}, {"VelocityNotCenter", 0.7, "WeaponAim", 1, "HorizonBankMGun", {0.06, -0.28}, 1}, {"VelocityNotCenter", 0.8, "WeaponAim", 1, "HorizonBankMGun", {0.04, -0.4}, 1}, {}, {"VelocityNotCenter", 0.001, "WeaponAim", 1, "HorizonBankMGun", {-0.2, 0}, 1}, {"VelocityNotCenter", 0.1, "WeaponAim", 1, "HorizonBankMGun", {-0.18, -0.01}, 1}, {"VelocityNotCenter", 0.2, "WeaponAim", 1, "HorizonBankMGun", {-0.16, -0.03}, 1}, {"VelocityNotCenter", 0.3, "WeaponAim", 1, "HorizonBankMGun", {-0.14, -0.06}, 1}, {"VelocityNotCenter", 0.4, "WeaponAim", 1, "HorizonBankMGun", {-0.12, -0.1}, 1}, {"VelocityNotCenter", 0.5, "WeaponAim", 1, "HorizonBankMGun", {-0.1, -0.15}, 1}, {"VelocityNotCenter", 0.6, "WeaponAim", 1, "HorizonBankMGun", {-0.08, -0.21}, 1}, {"VelocityNotCenter", 0.7, "WeaponAim", 1, "HorizonBankMGun", {-0.06, -0.28}, 1}, {"VelocityNotCenter", 0.8, "WeaponAim", 1, "HorizonBankMGun", {-0.04, -0.4}, 1}};
							type = "line";
						};
					};
					class ATMissile {
						condition = "ATmissile";
						class Circle {
							points[] = {{"VelocityNotCenter", 0.001, "WeaponAim", 1, "HorizonBankMGun", {0.2, 0}, 1}, {"VelocityNotCenter", 0.1, "WeaponAim", 1, "HorizonBankMGun", {0.18, -0.01}, 1}, {"VelocityNotCenter", 0.2, "WeaponAim", 1, "HorizonBankMGun", {0.16, -0.03}, 1}, {"VelocityNotCenter", 0.3, "WeaponAim", 1, "HorizonBankMGun", {0.14, -0.06}, 1}, {"VelocityNotCenter", 0.4, "WeaponAim", 1, "HorizonBankMGun", {0.12, -0.1}, 1}, {"VelocityNotCenter", 0.5, "WeaponAim", 1, "HorizonBankMGun", {0.1, -0.15}, 1}, {"VelocityNotCenter", 0.6, "WeaponAim", 1, "HorizonBankMGun", {0.08, -0.21}, 1}, {"VelocityNotCenter", 0.7, "WeaponAim", 1, "HorizonBankMGun", {0.06, -0.28}, 1}, {"VelocityNotCenter", 0.8, "WeaponAim", 1, "HorizonBankMGun", {0.04, -0.4}, 1}, {}, {"VelocityNotCenter", 0.001, "WeaponAim", 1, "HorizonBankMGun", {-0.2, 0}, 1}, {"VelocityNotCenter", 0.1, "WeaponAim", 1, "HorizonBankMGun", {-0.18, -0.01}, 1}, {"VelocityNotCenter", 0.2, "WeaponAim", 1, "HorizonBankMGun", {-0.16, -0.03}, 1}, {"VelocityNotCenter", 0.3, "WeaponAim", 1, "HorizonBankMGun", {-0.14, -0.06}, 1}, {"VelocityNotCenter", 0.4, "WeaponAim", 1, "HorizonBankMGun", {-0.12, -0.1}, 1}, {"VelocityNotCenter", 0.5, "WeaponAim", 1, "HorizonBankMGun", {-0.1, -0.15}, 1}, {"VelocityNotCenter", 0.6, "WeaponAim", 1, "HorizonBankMGun", {-0.08, -0.21}, 1}, {"VelocityNotCenter", 0.7, "WeaponAim", 1, "HorizonBankMGun", {-0.06, -0.28}, 1}, {"VelocityNotCenter", 0.8, "WeaponAim", 1, "HorizonBankMGun", {-0.04, -0.4}, 1}};
							type = "line";
						};
					};
					class Rockets {
						condition = "Rocket";
						class Circle {
							points[] = {{"VelocityNotCenter", 0.001, "WeaponAim", 1, "HorizonBankMGun", {0.2, 0}, 1}, {"VelocityNotCenter", 0.1, "WeaponAim", 1, "HorizonBankMGun", {0.18, -0.01}, 1}, {"VelocityNotCenter", 0.2, "WeaponAim", 1, "HorizonBankMGun", {0.16, -0.03}, 1}, {"VelocityNotCenter", 0.3, "WeaponAim", 1, "HorizonBankMGun", {0.14, -0.06}, 1}, {"VelocityNotCenter", 0.4, "WeaponAim", 1, "HorizonBankMGun", {0.12, -0.1}, 1}, {"VelocityNotCenter", 0.5, "WeaponAim", 1, "HorizonBankMGun", {0.1, -0.15}, 1}, {"VelocityNotCenter", 0.6, "WeaponAim", 1, "HorizonBankMGun", {0.08, -0.21}, 1}, {"VelocityNotCenter", 0.7, "WeaponAim", 1, "HorizonBankMGun", {0.06, -0.28}, 1}, {"VelocityNotCenter", 0.8, "WeaponAim", 1, "HorizonBankMGun", {0.04, -0.4}, 1}, {}, {"VelocityNotCenter", 0.001, "WeaponAim", 1, "HorizonBankMGun", {-0.2, 0}, 1}, {"VelocityNotCenter", 0.1, "WeaponAim", 1, "HorizonBankMGun", {-0.18, -0.01}, 1}, {"VelocityNotCenter", 0.2, "WeaponAim", 1, "HorizonBankMGun", {-0.16, -0.03}, 1}, {"VelocityNotCenter", 0.3, "WeaponAim", 1, "HorizonBankMGun", {-0.14, -0.06}, 1}, {"VelocityNotCenter", 0.4, "WeaponAim", 1, "HorizonBankMGun", {-0.12, -0.1}, 1}, {"VelocityNotCenter", 0.5, "WeaponAim", 1, "HorizonBankMGun", {-0.1, -0.15}, 1}, {"VelocityNotCenter", 0.6, "WeaponAim", 1, "HorizonBankMGun", {-0.08, -0.21}, 1}, {"VelocityNotCenter", 0.7, "WeaponAim", 1, "HorizonBankMGun", {-0.06, -0.28}, 1}, {"VelocityNotCenter", 0.8, "WeaponAim", 1, "HorizonBankMGun", {-0.04, -0.4}, 1}};
							type = "line";
						};
					};				
					class AAMissile {
						condition = "AAmissile";
						class Circle {
							points[] = {{"VelocityNotCenter", 0.001, "WeaponAim", 1, "HorizonBankMGun", {0.2, 0}, 1}, {"VelocityNotCenter", 0.1, "WeaponAim", 1, "HorizonBankMGun", {0.18, -0.01}, 1}, {"VelocityNotCenter", 0.2, "WeaponAim", 1, "HorizonBankMGun", {0.16, -0.03}, 1}, {"VelocityNotCenter", 0.3, "WeaponAim", 1, "HorizonBankMGun", {0.14, -0.06}, 1}, {"VelocityNotCenter", 0.4, "WeaponAim", 1, "HorizonBankMGun", {0.12, -0.1}, 1}, {"VelocityNotCenter", 0.5, "WeaponAim", 1, "HorizonBankMGun", {0.1, -0.15}, 1}, {"VelocityNotCenter", 0.6, "WeaponAim", 1, "HorizonBankMGun", {0.08, -0.21}, 1}, {"VelocityNotCenter", 0.7, "WeaponAim", 1, "HorizonBankMGun", {0.06, -0.28}, 1}, {"VelocityNotCenter", 0.8, "WeaponAim", 1, "HorizonBankMGun", {0.04, -0.4}, 1}, {}, {"VelocityNotCenter", 0.001, "WeaponAim", 1, "HorizonBankMGun", {-0.2, 0}, 1}, {"VelocityNotCenter", 0.1, "WeaponAim", 1, "HorizonBankMGun", {-0.18, -0.01}, 1}, {"VelocityNotCenter", 0.2, "WeaponAim", 1, "HorizonBankMGun", {-0.16, -0.03}, 1}, {"VelocityNotCenter", 0.3, "WeaponAim", 1, "HorizonBankMGun", {-0.14, -0.06}, 1}, {"VelocityNotCenter", 0.4, "WeaponAim", 1, "HorizonBankMGun", {-0.12, -0.1}, 1}, {"VelocityNotCenter", 0.5, "WeaponAim", 1, "HorizonBankMGun", {-0.1, -0.15}, 1}, {"VelocityNotCenter", 0.6, "WeaponAim", 1, "HorizonBankMGun", {-0.08, -0.21}, 1}, {"VelocityNotCenter", 0.7, "WeaponAim", 1, "HorizonBankMGun", {-0.06, -0.28}, 1}, {"VelocityNotCenter", 0.8, "WeaponAim", 1, "HorizonBankMGun", {-0.04, -0.4}, 1}};
							type = "line";
						};
					};
					class Bomb {
						condition = "bomb";
						class Circle {
							points[] = {};
							type = "line";
						};
					};
					class weapons {
						align = "right";
						down[] = {{0.06, 0.92}, 1};
						pos[] = {{0.06, 0.88}, 1};
						right[] = {{0.12, 0.88}, 1};
						scale = 1;
						source = "weapon";
						sourcescale = 1;
						type = "text";
					};
					class ammo {
						align = "right";
						down[] = {{0.06, 0.97}, 1};
						pos[] = {{0.06, 0.93}, 1};
						right[] = {{0.12, 0.93}, 1};
						scale = 1;
						source = "ammo";
						sourcescale = 1;
						type = "text";
					};
					class ILS {
						condition = "ils";
						class Glideslope {
							clipbr[] = {1, 1};
							cliptl[] = {0, 0};
							class ILS {
								points[] = {{"ILS_W", {-0.4, 0}, 1}, {"ILS_W", {0.4, 0}, 1}, {}, {"ILS_W", {0, 0.04}, 1}, {"ILS_W", {0, -0.04}, 1}, {}, {"ILS_W", {0.2, 0.04}, 1}, {"ILS_W", {0.2, -0.04}, 1}, {}, {"ILS_W", {0.4, 0.04}, 1}, {"ILS_W", {0.4, -0.04}, 1}, {}, {"ILS_W", {-0.2, 0.04}, 1}, {"ILS_W", {-0.2, -0.04}, 1}, {}, {"ILS_W", {-0.4, 0.04}, 1}, {"ILS_W", {-0.4, -0.04}, 1}, {}, {"ILS_H", {0, -0.4}, 1}, {"ILS_H", {0, 0.4}, 1}, {}, {"ILS_H", {0.04, 0}, 1}, {"ILS_H", {-0.04, 0}, 1}, {}, {"ILS_H", {0.04, 0.2}, 1}, {"ILS_H", {-0.04, 0.2}, 1}, {}, {"ILS_H", {0.04, 0.4}, 1}, {"ILS_H", {-0.04, 0.4}, 1}, {}, {"ILS_H", {0.04, -0.2}, 1}, {"ILS_H", {-0.04, -0.2}, 1}, {}, {"ILS_H", {0.04, -0.4}, 1}, {"ILS_H", {-0.04, -0.4}, 1}, {}};
								type = "line";
							};
						};
					};
				};
			};
		};
	};
	
	class TU_MiG29_R77 : TU_MiG29_R73M {
		weapons[] = {"ACE_GSh301", "R73MLauncher", "TU_R77Launcher", "CMFlareLauncher"};
		magazines[] = {"ACE_150Rnd_30mm_GSh301", "4Rnd_R73M", "2Rnd_R77", "120Rnd_CMFlare_Chaff_Magazine"};
		displayname = $STR_TU_MiG29_R77;
	};
	
	class TU_MiG29_4FAB250 : TU_MiG29_R73M {
		weapons[] = {"ACE_GSh301", "R73MLauncher", "ACE_AirBombLauncher", "CMFlareLauncher"};
		magazines[] = {"ACE_150Rnd_30mm_GSh301", "2Rnd_R73M", "TU_BIS_4Rnd_FAB_250", "120Rnd_CMFlare_Chaff_Magazine"};
		displayname = $STR_TU_MiG29_4FAB250;
	};
	
	class TU_MiG29_4FAB500 : TU_MiG29_R73M {
		weapons[] = {"ACE_GSh301", "R73MLauncher", "ACE_FAB500M62Launcher", "CMFlareLauncher"};
		magazines[] = {"ACE_150Rnd_30mm_GSh301", "2Rnd_R73M", "TU_BIS_4Rnd_FAB500", "120Rnd_CMFlare_Chaff_Magazine"};
		displayname = $STR_TU_MiG29_4FAB500;
	};
	
	class TU_MiG29_4S8 : TU_MiG29_R73M {
		weapons[] = {"ACE_GSh301", "R73MLauncher", "ACE_S8Launcher_Plane", "CMFlareLauncher"};
		magazines[] = {"ACE_150Rnd_30mm_GSh301", "2Rnd_R73M", "ACE_1Rnd_S8T", "ACE_1Rnd_S8T", "ACE_1Rnd_S8T", "ACE_1Rnd_S8T", "40Rnd_S8T", "40Rnd_80mm", "120Rnd_CMFlare_Chaff_Magazine"};
		displayname = $STR_TU_MiG29_4S8;
	};
	
	class TU_MiG29_R73M_BKO: TU_MiG29_R73M {
		displayname = $STR_TU_MiG29_R73M_BKO;
		incommingmissliedetectionsystem = 16;	
		irScanGround = 0;
		irscanrangemax = 10000;
		irscantoeyefactor = 2.1;
	};
	
	class TU_MiG29_R77_BKO: TU_MiG29_R77 {
		displayname = $STR_TU_MiG29_R77_BKO;
		incommingmissliedetectionsystem = 16;
		irScanGround = 0;
		irscanrangemax = 10000;
		irscantoeyefactor = 2.1;	
	};
	
	class TU_MiG29_4FAB250_BKO: TU_MiG29_4FAB250 {
		displayname = $STR_TU_MiG29_4FAB250_BKO;
		incommingmissliedetectionsystem = 16;	
		irScanGround = 0;
		irscanrangemax = 10000;
		irscantoeyefactor = 2.1;
	};
	
	class TU_MiG29_4FAB500_BKO: TU_MiG29_4FAB500 {
		displayname = $STR_TU_MiG29_4FAB500_BKO;
		incommingmissliedetectionsystem = 16;	
		irScanGround = 0;
		irscanrangemax = 10000;
		irscantoeyefactor = 2.1;
	};
	
	class TU_MiG29_4S8_BKO: TU_MiG29_4S8 {
		displayname = $STR_TU_MiG29_4S8_BKO;
		incommingmissliedetectionsystem = 16;
		irScanGround = 0;
		irscanrangemax = 10000;
		irscantoeyefactor = 2.1;	
	};
	
	class TU_MiG29_R73A_CDF: TU_MiG29_R73M {
		vehicleclass = "TU_VVS_CDF";
		crew = "CDF_Soldier_Pilot";
		displayname = $STR_TU_MiG29_R73A_CDF;
		faction = "CDF";
		model = "\csla_air\mig29\csla_mig29.p3d";
		scope = 2;
		side = 1;
		typicalcargo[] = {"CDF_Soldier_Pilot"};
		weapons[] = {"ACE_GSh301", "ACE_R73Launcher", "CMFlareLauncher"};
		magazines[] = {"ACE_150Rnd_30mm_GSh301", "ACE_6Rnd_R73", "120Rnd_CMFlare_Chaff_Magazine"};
		irScanGround = 0;
		irscanrangemax = 8000;
		irscantoeyefactor = 2;
	};
	
	class TU_MiG29_R27_CDF: TU_MiG29_R77 {
		vehicleclass = "TU_VVS_CDF";
		crew = "CDF_Soldier_Pilot";
		displayname = $STR_TU_MiG29_R27_CDF;
		faction = "CDF";
		model = "\csla_air\mig29\csla_mig29.p3d";
		scope = 2;
		side = 1;
		typicalcargo[] = {"CDF_Soldier_Pilot"};
		weapons[] = {"ACE_GSh301", "ACE_R73Launcher", "ACE_R27Launcher", "CMFlareLauncher"};
		magazines[] = {"ACE_150Rnd_30mm_GSh301", "ACE_4Rnd_R73", "ACE_2Rnd_R27", "120Rnd_CMFlare_Chaff_Magazine"};
		irScanGround = 0;
		irscanrangemax = 8000;
		irscantoeyefactor = 2;
	};
	
	class TU_MiG29_4FAB250_CDF: TU_MiG29_4FAB250 {
		vehicleclass = "TU_VVS_CDF";
		crew = "CDF_Soldier_Pilot";
		displayname = $STR_TU_MiG29_4FAB250_CDF;
		faction = "CDF";
		model = "\csla_air\mig29\csla_mig29.p3d";
		scope = 2;
		side = 1;
		typicalcargo[] = {"CDF_Soldier_Pilot"};
		weapons[] = {"ACE_GSh301", "ACE_R73Launcher", "ACE_AirBombLauncher", "CMFlareLauncher"};
		magazines[] = {"ACE_150Rnd_30mm_GSh301", "ACE_2Rnd_R73", "TU_BIS_4Rnd_FAB_250", "120Rnd_CMFlare_Chaff_Magazine"};
		irScanGround = 0;
		irscanrangemax = 8000;
		irscantoeyefactor = 2;
	};
	
	class TU_MiG29_4FAB500_CDF: TU_MiG29_4FAB500 {
		vehicleclass = "TU_VVS_CDF";
		crew = "CDF_Soldier_Pilot";
		displayname = $STR_TU_MiG29_4FAB500_CDF;
		faction = "CDF";
		model = "\csla_air\mig29\csla_mig29.p3d";
		scope = 2;
		side = 1;
		typicalcargo[] = {"CDF_Soldier_Pilot"};
		weapons[] = {"ACE_GSh301", "ACE_R73Launcher", "ACE_FAB500M62Launcher", "CMFlareLauncher"};
		magazines[] = {"ACE_150Rnd_30mm_GSh301", "ACE_2Rnd_R73", "TU_BIS_4Rnd_FAB500", "120Rnd_CMFlare_Chaff_Magazine"};
		irScanGround = 0;
		irscanrangemax = 8000;
		irscantoeyefactor = 2;
	};
	
	class TU_MiG29_4S8_CDF: TU_MiG29_4S8 {
		vehicleclass = "TU_VVS_CDF";
		crew = "CDF_Soldier_Pilot";
		displayname = $STR_TU_MiG29_4S8_CDF;
		faction = "CDF";
		model = "\csla_air\mig29\csla_mig29.p3d";
		scope = 2;
		side = 1;
		typicalcargo[] = {"CDF_Soldier_Pilot"};
		weapons[] = {"ACE_GSh301", "ACE_R73Launcher", "ACE_S8Launcher_Plane", "CMFlareLauncher"};
		magazines[] = {"ACE_150Rnd_30mm_GSh301", "ACE_2Rnd_R73", "ACE_1Rnd_S8T", "ACE_1Rnd_S8T", "ACE_1Rnd_S8T", "ACE_1Rnd_S8T", "40Rnd_S8T", "40Rnd_80mm", "120Rnd_CMFlare_Chaff_Magazine"};
		irScanGround = 0;
		irscanrangemax = 8000;
		irscantoeyefactor = 2;
	};
	
	class A10: Plane_LG {	
		class UserActions {
			class LaseKh29
			{
				displayName = "$STR_ACE_UA_LASER_ON";
				position = "HitGlass3";
				radius = 6;
				onlyForPlayer = 1;
				condition = "(player in [gunner this, driver this]) && {(getNumber(configFile>>'cfgWeapons'>>currentWeapon this>>'ace_sys_missileguidance_enableAirDesignator') == 1)}";
				statement = "[this,0,0] call ace_sys_missileguidance_fnc_Kh29_Lase";
			};
			
			class LaseKh29Off: LaseKh29
			{
				displayName = "$STR_ACE_UA_LASER_OFF";
				condition = "(player in [gunner this, driver this]) && {(this getVariable 'ace_sys_missileguidance_tracking')}";
				statement = "this setVariable ['ace_sys_missileguidance_tracking',nil]";
			};
		};		
		class ACE: ACE {
			class ACE_MISSILEGUIDANCE: ACE_MISSILEGUIDANCE
			{
				ACE_DESIGNATOR = 1;
				ACE_RANGEFINDER = 0;
			};
		};
		class MFD {
			class AirplaneHUD {
				borderbottom = 0;
				borderleft = 0;
				borderright = 0;
				bordertop = 0;
				bottomleft = "HUD LD";
				color[] = {0, 1, 0, 0.1};
				enableparallax = 1;
				topleft = "HUD LH";
				topright = "HUD PH";
				class Pos10Vector {
					pos0[] = {0.51, 0.305};
					pos10[] = {1.31, 1.185};
					type = "vector";
				};
				class Bones {
					class PlaneW {
						pos[] = {0.51, 0.375};
						type = "fixed";
					};
					class WeaponAim: Pos10Vector {
						source = "weapon";
					};
					class Target: Pos10Vector {
						source = "target";
					};
					class Velocity: Pos10Vector {
						pos0[] = {0.5, 0.305};
						pos10[] = {1.3, 1.185};
						source = "velocity";
						type = "vector";
					};
					class ILS_H {
						pos0[] = {0.5, 0.305};
						pos3[] = {0.74, 0.305};
						type = "ils";
					};
					class ILS_W: ILS_H {
						pos3[] = {0.5, 0.569};
					};
					class Level0: Pos10Vector {
						angle = 0;
						pos0[] = {0.5, 0.375};
						pos10[] = {1.3, 1.255};
						type = "horizon";
					};
					class LevelP5: Level0 {
						angle = 5;
					};
					class LevelM5: Level0 {
						angle = -5;
					};
					class LevelP10: Level0 {
						angle = 10;
					};
					class LevelM10: Level0 {
						angle = -10;
					};
					class LevelP15: Level0 {
						angle = 15;
					};
					class LevelM15: Level0 {
						angle = -15;
					};
					class LevelP20: Level0 {
						angle = 20;
					};
					class LevelM20: Level0 {
						angle = -20;
					};
					class LevelP25: Level0 {
						angle = 25;
					};
					class LevelM25: Level0 {
						angle = -25;
					};
					class LevelP30: Level0 {
						angle = 30;
					};
					class LevelM30: Level0 {
						angle = -30;
					};
					class LevelP35: Level0 {
						angle = 35;
					};
					class LevelM35: Level0 {
						angle = -35;
					};
					class LevelP40: Level0 {
						angle = 40;
					};
					class LevelM40: Level0 {
						angle = -40;
					};
					class LevelP45: Level0 {
						angle = 45;
					};
					class LevelM45: Level0 {
						angle = -45;
					};
					class LevelP50: Level0 {
						angle = 50;
					};
					class LevelM50: Level0 {
						angle = -50;
					};
				};
				class Draw {
					alpha = 0.4;
					color[] = {0, 0.3, 0.05};
					condition = "on";
					class PlaneW {
						clipbr[] = {1, 0};
						cliptl[] = {0, 1};
						points[] = {{"PlaneW", {-0.08, 0}, 1}, {"PlaneW", {-0.03, 0}, 1}, {"PlaneW", {-0.015, 0.033}, 1}, {"PlaneW", {0, 0}, 1}, {"PlaneW", {0.015, 0.033}, 1}, {"PlaneW", {0.03, 0}, 1}, {"PlaneW", {0.08, 0}, 1}};
						type = "line";
					};
					class PlaneHeading {
						clipbr[] = {1, 0};
						cliptl[] = {0, 1};
						points[] = {};
						type = "line";
					};
					class Static {
						clipbr[] = {1, 0};
						cliptl[] = {0, 0.1};
						points[] = {{{0.21, 0.52}, 1}, {{0.19, 0.5}, 1}, {{0.21, 0.48}, 1}, {}, {{0.18, 0.2}, 1}, {{0.18, 0.85}, 1}, {}, {{0.79, 0.52}, 1}, {{0.81, 0.5}, 1}, {{0.79, 0.48}, 1}, {}, {{0.82, 0.2}, 1}, {{0.82, 0.85}, 1}, {}, {{0.52, 0.09}, 1}, {{0.5, 0.07}, 1}, {{0.48, 0.09}, 1}, {}, {{0.2, 0.065}, 1}, {{0.8, 0.065}, 1}, {}};
						type = "line";
					};
					class Horizont {
						clipbr[] = {1, 1};
						cliptl[] = {0, 0};
						class Dimmed {
							class Level0 {
								points[] = {{"Level0", {-0.2, 0}, 1}, {"Level0", {-0.05, 0}, 1}, {}, {"Level0", {0.05, 0}, 1}, {"Level0", {0.2, 0}, 1}};
								type = "line";
							};
							class VALM_1_0 {
								align = "left";
								down[] = {"Level0", {-0.23, 0.025}, 1};
								pos[] = {"Level0", {-0.23, -0.025}, 1};
								right[] = {"Level0", {-0.13, -0.025}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = 0;
								type = "text";
							};
							class VALM_2_0: VALM_1_0 {
								align = "right";
								down[] = {"Level0", {0.22, 0.025}, 1};
								pos[] = {"Level0", {0.22, -0.025}, 1};
								right[] = {"Level0", {0.32, -0.025}, 1};
							};
							class LevelM5: Level0 {
								points[] = {{"LevelM5", {-0.2, -0.03}, 1}, {"LevelM5", {-0.2, 0}, 1}, {"LevelM5", {-0.15, 0}, 1}, {}, {"LevelM5", {-0.1, 0}, 1}, {"LevelM5", {-0.05, 0}, 1}, {}, {"LevelM5", {0.05, 0}, 1}, {"LevelM5", {0.1, 0}, 1}, {}, {"LevelM5", {0.15, 0}, 1}, {"LevelM5", {0.2, 0}, 1}, {"LevelM5", {0.2, -0.03}, 1}};
								type = "line";
							};
							class VALM_1_5 {
								align = "left";
								down[] = {"LevelM5", {-0.23, -0.035}, 1};
								pos[] = {"LevelM5", {-0.23, -0.085}, 1};
								right[] = {"LevelM5", {-0.13, -0.085}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = -5;
								type = "text";
							};
							class VALM_2_5: VALM_1_5 {
								align = "right";
								down[] = {"LevelM5", {0.22, -0.035}, 1};
								pos[] = {"LevelM5", {0.22, -0.085}, 1};
								right[] = {"LevelM5", {0.32, -0.085}, 1};
							};
							class LevelP5: Level0 {
								points[] = {{"LevelP5", {-0.2, 0.03}, 1}, {"LevelP5", {-0.2, 0}, 1}, {"LevelP5", {-0.05, 0}, 1}, {}, {"LevelP5", {0.05, 0}, 1}, {"LevelP5", {0.2, 0}, 1}, {"LevelP5", {0.2, 0.03}, 1}};
								type = "line";
							};
							class VALP_1_5 {
								align = "left";
								down[] = {"LevelP5", {-0.23, 0.085}, 1};
								pos[] = {"LevelP5", {-0.23, 0.035}, 1};
								right[] = {"LevelP5", {-0.13, 0.035}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = 5;
								type = "text";
							};
							class VALP_2_5: VALP_1_5 {
								align = "right";
								down[] = {"LevelP5", {0.22, 0.085}, 1};
								pos[] = {"LevelP5", {0.22, 0.035}, 1};
								right[] = {"LevelP5", {0.32, 0.035}, 1};
							};
							class LevelM10: Level0 {
								points[] = {{"LevelM10", {-0.2, -0.03}, 1}, {"LevelM10", {-0.2, 0}, 1}, {"LevelM10", {-0.15, 0}, 1}, {}, {"LevelM10", {-0.1, 0}, 1}, {"LevelM10", {-0.05, 0}, 1}, {}, {"LevelM10", {0.05, 0}, 1}, {"LevelM10", {0.1, 0}, 1}, {}, {"LevelM10", {0.15, 0}, 1}, {"LevelM10", {0.2, 0}, 1}, {"LevelM10", {0.2, -0.03}, 1}};
								type = "line";
							};
							class VALM_1_10 {
								align = "left";
								down[] = {"LevelM10", {-0.23, -0.035}, 1};
								pos[] = {"LevelM10", {-0.23, -0.085}, 1};
								right[] = {"LevelM10", {-0.13, -0.085}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = -10;
								type = "text";
							};
							class VALM_2_10: VALM_1_10 {
								align = "right";
								down[] = {"LevelM10", {0.22, -0.035}, 1};
								pos[] = {"LevelM10", {0.22, -0.085}, 1};
								right[] = {"LevelM10", {0.32, -0.085}, 1};
							};
							class LevelP10: Level0 {
								points[] = {{"LevelP10", {-0.2, 0.03}, 1}, {"LevelP10", {-0.2, 0}, 1}, {"LevelP10", {-0.05, 0}, 1}, {}, {"LevelP10", {0.05, 0}, 1}, {"LevelP10", {0.2, 0}, 1}, {"LevelP10", {0.2, 0.03}, 1}};
								type = "line";
							};
							class VALP_1_10 {
								align = "left";
								down[] = {"LevelP10", {-0.23, 0.085}, 1};
								pos[] = {"LevelP10", {-0.23, 0.035}, 1};
								right[] = {"LevelP10", {-0.13, 0.035}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = 10;
								type = "text";
							};
							class VALP_2_10: VALP_1_10 {
								align = "right";
								down[] = {"LevelP10", {0.22, 0.085}, 1};
								pos[] = {"LevelP10", {0.22, 0.035}, 1};
								right[] = {"LevelP10", {0.32, 0.035}, 1};
							};
							class LevelM15: Level0 {
								points[] = {{"LevelM15", {-0.2, -0.03}, 1}, {"LevelM15", {-0.2, 0}, 1}, {"LevelM15", {-0.15, 0}, 1}, {}, {"LevelM15", {-0.1, 0}, 1}, {"LevelM15", {-0.05, 0}, 1}, {}, {"LevelM15", {0.05, 0}, 1}, {"LevelM15", {0.1, 0}, 1}, {}, {"LevelM15", {0.15, 0}, 1}, {"LevelM15", {0.2, 0}, 1}, {"LevelM15", {0.2, -0.03}, 1}};
								type = "line";
							};
							class VALM_1_15 {
								align = "left";
								down[] = {"LevelM15", {-0.23, -0.035}, 1};
								pos[] = {"LevelM15", {-0.23, -0.085}, 1};
								right[] = {"LevelM15", {-0.13, -0.085}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = -15;
								type = "text";
							};
							class VALM_2_15: VALM_1_15 {
								align = "right";
								down[] = {"LevelM15", {0.22, -0.035}, 1};
								pos[] = {"LevelM15", {0.22, -0.085}, 1};
								right[] = {"LevelM15", {0.32, -0.085}, 1};
							};
							class LevelP15: Level0 {
								points[] = {{"LevelP15", {-0.2, 0.03}, 1}, {"LevelP15", {-0.2, 0}, 1}, {"LevelP15", {-0.05, 0}, 1}, {}, {"LevelP15", {0.05, 0}, 1}, {"LevelP15", {0.2, 0}, 1}, {"LevelP15", {0.2, 0.03}, 1}};
								type = "line";
							};
							class VALP_1_15 {
								align = "left";
								down[] = {"LevelP15", {-0.23, 0.085}, 1};
								pos[] = {"LevelP15", {-0.23, 0.035}, 1};
								right[] = {"LevelP15", {-0.13, 0.035}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = 15;
								type = "text";
							};
							class VALP_2_15: VALP_1_15 {
								align = "right";
								down[] = {"LevelP15", {0.22, 0.085}, 1};
								pos[] = {"LevelP15", {0.22, 0.035}, 1};
								right[] = {"LevelP15", {0.32, 0.035}, 1};
							};
							class LevelM20: Level0 {
								points[] = {{"LevelM20", {-0.2, -0.03}, 1}, {"LevelM20", {-0.2, 0}, 1}, {"LevelM20", {-0.15, 0}, 1}, {}, {"LevelM20", {-0.1, 0}, 1}, {"LevelM20", {-0.05, 0}, 1}, {}, {"LevelM20", {0.05, 0}, 1}, {"LevelM20", {0.1, 0}, 1}, {}, {"LevelM20", {0.15, 0}, 1}, {"LevelM20", {0.2, 0}, 1}, {"LevelM20", {0.2, -0.03}, 1}};
								type = "line";
							};
							class VALM_1_20 {
								align = "left";
								down[] = {"LevelM20", {-0.23, -0.035}, 1};
								pos[] = {"LevelM20", {-0.23, -0.085}, 1};
								right[] = {"LevelM20", {-0.13, -0.085}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = -20;
								type = "text";
							};
							class VALM_2_20: VALM_1_20 {
								align = "right";
								down[] = {"LevelM20", {0.22, -0.035}, 1};
								pos[] = {"LevelM20", {0.22, -0.085}, 1};
								right[] = {"LevelM20", {0.32, -0.085}, 1};
							};
							class LevelP20: Level0 {
								points[] = {{"LevelP20", {-0.2, 0.03}, 1}, {"LevelP20", {-0.2, 0}, 1}, {"LevelP20", {-0.05, 0}, 1}, {}, {"LevelP20", {0.05, 0}, 1}, {"LevelP20", {0.2, 0}, 1}, {"LevelP20", {0.2, 0.03}, 1}};
								type = "line";
							};
							class VALP_1_20 {
								align = "left";
								down[] = {"LevelP20", {-0.23, 0.085}, 1};
								pos[] = {"LevelP20", {-0.23, 0.035}, 1};
								right[] = {"LevelP20", {-0.13, 0.035}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = 20;
								type = "text";
							};
							class VALP_2_20: VALP_1_20 {
								align = "right";
								down[] = {"LevelP20", {0.22, 0.085}, 1};
								pos[] = {"LevelP20", {0.22, 0.035}, 1};
								right[] = {"LevelP20", {0.32, 0.035}, 1};
							};
							class LevelM25: Level0 {
								points[] = {{"LevelM25", {-0.2, -0.03}, 1}, {"LevelM25", {-0.2, 0}, 1}, {"LevelM25", {-0.15, 0}, 1}, {}, {"LevelM25", {-0.1, 0}, 1}, {"LevelM25", {-0.05, 0}, 1}, {}, {"LevelM25", {0.05, 0}, 1}, {"LevelM25", {0.1, 0}, 1}, {}, {"LevelM25", {0.15, 0}, 1}, {"LevelM25", {0.2, 0}, 1}, {"LevelM25", {0.2, -0.03}, 1}};
								type = "line";
							};
							class VALM_1_25 {
								align = "left";
								down[] = {"LevelM25", {-0.23, -0.035}, 1};
								pos[] = {"LevelM25", {-0.23, -0.085}, 1};
								right[] = {"LevelM25", {-0.13, -0.085}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = -25;
								type = "text";
							};
							class VALM_2_25: VALM_1_25 {
								align = "right";
								down[] = {"LevelM25", {0.22, -0.035}, 1};
								pos[] = {"LevelM25", {0.22, -0.085}, 1};
								right[] = {"LevelM25", {0.32, -0.085}, 1};
							};
							class LevelP25: Level0 {
								points[] = {{"LevelP25", {-0.2, 0.03}, 1}, {"LevelP25", {-0.2, 0}, 1}, {"LevelP25", {-0.05, 0}, 1}, {}, {"LevelP25", {0.05, 0}, 1}, {"LevelP25", {0.2, 0}, 1}, {"LevelP25", {0.2, 0.03}, 1}};
								type = "line";
							};
							class VALP_1_25 {
								align = "left";
								down[] = {"LevelP25", {-0.23, 0.085}, 1};
								pos[] = {"LevelP25", {-0.23, 0.035}, 1};
								right[] = {"LevelP25", {-0.13, 0.035}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = 25;
								type = "text";
							};
							class VALP_2_25: VALP_1_25 {
								align = "right";
								down[] = {"LevelP25", {0.22, 0.085}, 1};
								pos[] = {"LevelP25", {0.22, 0.035}, 1};
								right[] = {"LevelP25", {0.32, 0.035}, 1};
							};
							class LevelM30: Level0 {
								points[] = {{"LevelM30", {-0.2, -0.03}, 1}, {"LevelM30", {-0.2, 0}, 1}, {"LevelM30", {-0.15, 0}, 1}, {}, {"LevelM30", {-0.1, 0}, 1}, {"LevelM30", {-0.05, 0}, 1}, {}, {"LevelM30", {0.05, 0}, 1}, {"LevelM30", {0.1, 0}, 1}, {}, {"LevelM30", {0.15, 0}, 1}, {"LevelM30", {0.2, 0}, 1}, {"LevelM30", {0.2, -0.03}, 1}};
								type = "line";
							};
							class VALM_1_30 {
								align = "left";
								down[] = {"LevelM30", {-0.23, -0.035}, 1};
								pos[] = {"LevelM30", {-0.23, -0.085}, 1};
								right[] = {"LevelM30", {-0.13, -0.085}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = -30;
								type = "text";
							};
							class VALM_2_30: VALM_1_30 {
								align = "right";
								down[] = {"LevelM30", {0.22, -0.035}, 1};
								pos[] = {"LevelM30", {0.22, -0.085}, 1};
								right[] = {"LevelM30", {0.32, -0.085}, 1};
							};
							class LevelP30: Level0 {
								points[] = {{"LevelP30", {-0.2, 0.03}, 1}, {"LevelP30", {-0.2, 0}, 1}, {"LevelP30", {-0.05, 0}, 1}, {}, {"LevelP30", {0.05, 0}, 1}, {"LevelP30", {0.2, 0}, 1}, {"LevelP30", {0.2, 0.03}, 1}};
								type = "line";
							};
							class VALP_1_30 {
								align = "left";
								down[] = {"LevelP30", {-0.23, 0.085}, 1};
								pos[] = {"LevelP30", {-0.23, 0.035}, 1};
								right[] = {"LevelP30", {-0.13, 0.035}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = 30;
								type = "text";
							};
							class VALP_2_30: VALP_1_30 {
								align = "right";
								down[] = {"LevelP30", {0.22, 0.085}, 1};
								pos[] = {"LevelP30", {0.22, 0.035}, 1};
								right[] = {"LevelP30", {0.32, 0.035}, 1};
							};
							class LevelM35: Level0 {
								points[] = {{"LevelM35", {-0.2, -0.03}, 1}, {"LevelM35", {-0.2, 0}, 1}, {"LevelM35", {-0.15, 0}, 1}, {}, {"LevelM35", {-0.1, 0}, 1}, {"LevelM35", {-0.05, 0}, 1}, {}, {"LevelM35", {0.05, 0}, 1}, {"LevelM35", {0.1, 0}, 1}, {}, {"LevelM35", {0.15, 0}, 1}, {"LevelM35", {0.2, 0}, 1}, {"LevelM35", {0.2, -0.03}, 1}};
								type = "line";
							};
							class VALM_1_35 {
								align = "left";
								down[] = {"LevelM35", {-0.23, -0.035}, 1};
								pos[] = {"LevelM35", {-0.23, -0.085}, 1};
								right[] = {"LevelM35", {-0.13, -0.085}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = -35;
								type = "text";
							};
							class VALM_2_35: VALM_1_35 {
								align = "right";
								down[] = {"LevelM35", {0.22, -0.035}, 1};
								pos[] = {"LevelM35", {0.22, -0.085}, 1};
								right[] = {"LevelM35", {0.32, -0.085}, 1};
							};
							class LevelP35: Level0 {
								points[] = {{"LevelP35", {-0.2, 0.03}, 1}, {"LevelP35", {-0.2, 0}, 1}, {"LevelP35", {-0.05, 0}, 1}, {}, {"LevelP35", {0.05, 0}, 1}, {"LevelP35", {0.2, 0}, 1}, {"LevelP35", {0.2, 0.03}, 1}};
								type = "line";
							};
							class VALP_1_35 {
								align = "left";
								down[] = {"LevelP35", {-0.23, 0.085}, 1};
								pos[] = {"LevelP35", {-0.23, 0.035}, 1};
								right[] = {"LevelP35", {-0.13, 0.035}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = 35;
								type = "text";
							};
							class VALP_2_35: VALP_1_35 {
								align = "right";
								down[] = {"LevelP35", {0.22, 0.085}, 1};
								pos[] = {"LevelP35", {0.22, 0.035}, 1};
								right[] = {"LevelP35", {0.32, 0.035}, 1};
							};
							class LevelM40: Level0 {
								points[] = {{"LevelM40", {-0.2, -0.03}, 1}, {"LevelM40", {-0.2, 0}, 1}, {"LevelM40", {-0.15, 0}, 1}, {}, {"LevelM40", {-0.1, 0}, 1}, {"LevelM40", {-0.05, 0}, 1}, {}, {"LevelM40", {0.05, 0}, 1}, {"LevelM40", {0.1, 0}, 1}, {}, {"LevelM40", {0.15, 0}, 1}, {"LevelM40", {0.2, 0}, 1}, {"LevelM40", {0.2, -0.03}, 1}};
								type = "line";
							};
							class VALM_1_40 {
								align = "left";
								down[] = {"LevelM40", {-0.23, -0.035}, 1};
								pos[] = {"LevelM40", {-0.23, -0.085}, 1};
								right[] = {"LevelM40", {-0.13, -0.085}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = -40;
								type = "text";
							};
							class VALM_2_40: VALM_1_40 {
								align = "right";
								down[] = {"LevelM40", {0.22, -0.035}, 1};
								pos[] = {"LevelM40", {0.22, -0.085}, 1};
								right[] = {"LevelM40", {0.32, -0.085}, 1};
							};
							class LevelP40: Level0 {
								points[] = {{"LevelP40", {-0.2, 0.03}, 1}, {"LevelP40", {-0.2, 0}, 1}, {"LevelP40", {-0.05, 0}, 1}, {}, {"LevelP40", {0.05, 0}, 1}, {"LevelP40", {0.2, 0}, 1}, {"LevelP40", {0.2, 0.03}, 1}};
								type = "line";
							};
							class VALP_1_40 {
								align = "left";
								down[] = {"LevelP40", {-0.23, 0.085}, 1};
								pos[] = {"LevelP40", {-0.23, 0.035}, 1};
								right[] = {"LevelP40", {-0.13, 0.035}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = 40;
								type = "text";
							};
							class VALP_2_40: VALP_1_40 {
								align = "right";
								down[] = {"LevelP40", {0.22, 0.085}, 1};
								pos[] = {"LevelP40", {0.22, 0.035}, 1};
								right[] = {"LevelP40", {0.32, 0.035}, 1};
							};
							class LevelM45: Level0 {
								points[] = {{"LevelM45", {-0.2, -0.03}, 1}, {"LevelM45", {-0.2, 0}, 1}, {"LevelM45", {-0.15, 0}, 1}, {}, {"LevelM45", {-0.1, 0}, 1}, {"LevelM45", {-0.05, 0}, 1}, {}, {"LevelM45", {0.05, 0}, 1}, {"LevelM45", {0.1, 0}, 1}, {}, {"LevelM45", {0.15, 0}, 1}, {"LevelM45", {0.2, 0}, 1}, {"LevelM45", {0.2, -0.03}, 1}};
								type = "line";
							};
							class VALM_1_45 {
								align = "left";
								down[] = {"LevelM45", {-0.23, -0.035}, 1};
								pos[] = {"LevelM45", {-0.23, -0.085}, 1};
								right[] = {"LevelM45", {-0.13, -0.085}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = -45;
								type = "text";
							};
							class VALM_2_45: VALM_1_45 {
								align = "right";
								down[] = {"LevelM45", {0.22, -0.035}, 1};
								pos[] = {"LevelM45", {0.22, -0.085}, 1};
								right[] = {"LevelM45", {0.32, -0.085}, 1};
							};
							class LevelP45: Level0 {
								points[] = {{"LevelP45", {-0.2, 0.03}, 1}, {"LevelP45", {-0.2, 0}, 1}, {"LevelP45", {-0.05, 0}, 1}, {}, {"LevelP45", {0.05, 0}, 1}, {"LevelP45", {0.2, 0}, 1}, {"LevelP45", {0.2, 0.03}, 1}};
								type = "line";
							};
							class VALP_1_45 {
								align = "left";
								down[] = {"LevelP45", {-0.23, 0.085}, 1};
								pos[] = {"LevelP45", {-0.23, 0.035}, 1};
								right[] = {"LevelP45", {-0.13, 0.035}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = 45;
								type = "text";
							};
							class VALP_2_45: VALP_1_45 {
								align = "right";
								down[] = {"LevelP45", {0.22, 0.085}, 1};
								pos[] = {"LevelP45", {0.22, 0.035}, 1};
								right[] = {"LevelP45", {0.32, 0.035}, 1};
							};
							class LevelM50: Level0 {
								points[] = {{"LevelM50", {-0.2, -0.03}, 1}, {"LevelM50", {-0.2, 0}, 1}, {"LevelM50", {-0.15, 0}, 1}, {}, {"LevelM50", {-0.1, 0}, 1}, {"LevelM50", {-0.05, 0}, 1}, {}, {"LevelM50", {0.05, 0}, 1}, {"LevelM50", {0.1, 0}, 1}, {}, {"LevelM50", {0.15, 0}, 1}, {"LevelM50", {0.2, 0}, 1}, {"LevelM50", {0.2, -0.03}, 1}};
								type = "line";
							};
							class VALM_1_50 {
								align = "left";
								down[] = {"LevelM50", {-0.23, -0.035}, 1};
								pos[] = {"LevelM50", {-0.23, -0.085}, 1};
								right[] = {"LevelM50", {-0.13, -0.085}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = -50;
								type = "text";
							};
							class VALM_2_50: VALM_1_50 {
								align = "right";
								down[] = {"LevelM50", {0.22, -0.035}, 1};
								pos[] = {"LevelM50", {0.22, -0.085}, 1};
								right[] = {"LevelM50", {0.32, -0.085}, 1};
							};
							class LevelP50: Level0 {
								points[] = {{"LevelP50", {-0.2, 0.03}, 1}, {"LevelP50", {-0.2, 0}, 1}, {"LevelP50", {-0.05, 0}, 1}, {}, {"LevelP50", {0.05, 0}, 1}, {"LevelP50", {0.2, 0}, 1}, {"LevelP50", {0.2, 0.03}, 1}};
								type = "line";
							};
							class VALP_1_50 {
								align = "left";
								down[] = {"LevelP50", {-0.23, 0.085}, 1};
								pos[] = {"LevelP50", {-0.23, 0.035}, 1};
								right[] = {"LevelP50", {-0.13, 0.035}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = 50;
								type = "text";
							};
							class VALP_2_50: VALP_1_50 {
								align = "right";
								down[] = {"LevelP50", {0.22, 0.085}, 1};
								pos[] = {"LevelP50", {0.22, 0.035}, 1};
								right[] = {"LevelP50", {0.32, 0.035}, 1};
							};
						};
					};
					class RadarTargets {
						points[] = {};
						pos0[] = {0.51, 0.305};
						pos10[] = {1.31, 1.185};
						type = "radar";
					};
					class MGun {
						condition = "mgun";
						class Circle {
							points[] = {};
							type = "line";
						};
					};
					class Bomb {
						condition = "bomb";
						class Circle {
							points[] = {};
							type = "line";
						};
					};
					class AAMissile {
						condition = "AAmissile";
						class Circle {
							points[] = {{"WeaponAim", {0, -0.275}, 1}, {"WeaponAim", {0.125, -0.23925}, 1}, {"WeaponAim", {0.2175, -0.1375}, 1}, {"WeaponAim", {0.25, 0}, 1}, {"WeaponAim", {0.2175, 0.1375}, 1}, {"WeaponAim", {0.125, 0.23925}, 1}, {"WeaponAim", {0, 0.275}, 1}, {"WeaponAim", {-0.125, 0.23925}, 1}, {"WeaponAim", {-0.2175, 0.1375}, 1}, {"WeaponAim", {-0.25, 0}, 1}, {"WeaponAim", {-0.2175, -0.1375}, 1}, {"WeaponAim", {-0.125, -0.23925}, 1}, {"WeaponAim", {0, -0.275}, 1}, {}, {"Target", {0, -0.077}, 1}, {"Target", {0.07, 0}, 1}, {"Target", {0, 0.077}, 1}, {"Target", {-0.07, 0}, 1}, {"Target", {0, -0.077}, 1}};
							type = "line";
						};
					};
					class ATMissile {
						condition = "ATmissile";						
						class Cros {
							type = "line";
							points[] = {{"WeaponAim", {0.05, 0}, 1}, {"WeaponAim", {0.015, 0}, 1}, {}, {"WeaponAim", {0, 0.04}, 1}, {"WeaponAim", {0, 0.012}, 1}, {}, {"WeaponAim", {-0.05, 0}, 1}, {"WeaponAim", {-0.015, 0}, 1}, {}, {"WeaponAim", {0, -0.04}, 1}, {"WeaponAim", {0, -0.012}, 1}};
						};
					};
					
					class Missile {
						condition = "missile";
						class Cros {
							points[] = {{"WeaponAim", {0.05, 0}, 1}, {"WeaponAim", {0.015, 0}, 1}, {}, {"WeaponAim", {0, 0.04}, 1}, {"WeaponAim", {0, 0.012}, 1}, {}, {"WeaponAim", {-0.05, 0}, 1}, {"WeaponAim", {-0.015, 0}, 1}, {}, {"WeaponAim", {0, -0.04}, 1}, {"WeaponAim", {0, -0.012}, 1}};
							type = "line";
						};
					};
					class Rockets {
						condition = "Rocket";
						class Circle {
							points[] = {{"WeaponAim", {0.01, 0}, 1}, {"WeaponAim", {-0.01, 0}, 1}, {}, {"WeaponAim", {0, 0.011}, 1}, {"WeaponAim", {0, -0.011}, 1}, {}, {"WeaponAim", {0, -0.132}, 1}, {"WeaponAim", {0.06, -0.11484}, 1}, {"WeaponAim", {0.1044, -0.066}, 1}, {"WeaponAim", {0.12, 0}, 1}, {"WeaponAim", {0.1044, 0.066}, 1}, {"WeaponAim", {0.06, 0.11484}, 1}, {"WeaponAim", {0, 0.132}, 1}, {"WeaponAim", {-0.06, 0.11484}, 1}, {"WeaponAim", {-0.1044, 0.066}, 1}, {"WeaponAim", {-0.12, 0}, 1}, {"WeaponAim", {-0.1044, -0.066}, 1}, {"WeaponAim", {-0.06, -0.11484}, 1}, {"WeaponAim", {0, -0.132}, 1}, {}};
							type = "line";
						};
					};
					class AltScale {
						align = "right";
						bottom = 0.2;
						center = 0.5;
						down[] = {0.86, 0.87};
						horizontal = 0;
						linexleft = 0.825;
						linexleftmajor = 0.825;
						lineyright = 0.835;
						lineyrightmajor = 0.845;
						majorlineeach = 5;
						max = "none";
						min = "none";
						numbereach = 5;
						pos[] = {0.86, 0.82};
						right[] = {0.94, 0.82};
						scale = 1;
						source = "altitudeASL";
						sourcescale = 1;
						step = 20;
						stepsize = 0.0325;
						top = 0.85;
						type = "scale";
					};
					class SpeedScale {
						align = "right";
						bottom = 0.85;
						center = 0.5;
						down[] = {0.06, 0.22};
						horizontal = 0;
						linexleft = 0.175;
						linexleftmajor = 0.175;
						lineyright = 0.165;
						lineyrightmajor = 0.155;
						majorlineeach = 5;
						max = "none";
						min = "none";
						numbereach = 5;
						pos[] = {0.06, 0.17};
						right[] = {0.14, 0.17};
						scale = 1;
						source = "speed";
						sourcescale = 3.6;
						step = 20;
						stepsize = 0.0325;
						top = 0.2;
						type = "scale";
					};
					class Gear {
						condition = "ils";
						class text {
							align = "right";
							down[] = {{0.84, 0.92}, 1};
							pos[] = {{0.84, 0.88}, 1};
							right[] = {{0.9, 0.88}, 1};
							scale = 0.5;
							source = "static";
							sourcescale = 1;
							text = "GEAR";
							type = "text";
						};
					};
					class Flaps {
						condition = "flaps";
						class text {
							align = "right";
							down[] = {{0.84, 0.97}, 1};
							pos[] = {{0.84, 0.93}, 1};
							right[] = {{0.9, 0.93}, 1};
							scale = 0.5;
							source = "static";
							sourcescale = 1;
							text = "FLAPS";
							type = "text";
						};
					};
					class weapons {
						align = "right";
						down[] = {{0.1, 0.92}, 1};
						pos[] = {{0.1, 0.88}, 1};
						right[] = {{0.16, 0.88}, 1};
						scale = 0.5;
						source = "weapon";
						sourcescale = 1;
						type = "text";
					};
					class ammo {
						align = "right";
						down[] = {{0.1, 0.97}, 1};
						pos[] = {{0.1, 0.93}, 1};
						right[] = {{0.16, 0.93}, 1};
						scale = 0.5;
						source = "ammo";
						sourcescale = 1;
						type = "text";
					};
					class VspeedNumber {
						align = "right";
						down[] = {{0.86, 0.17}, 1};
						pos[] = {{0.86, 0.12}, 1};
						right[] = {{0.94, 0.12}, 1};
						scale = 1;
						source = "vspeed";
						sourcescale = 1;
						type = "text";
					};
					class HeadingScale {
						align = "center";
						bottom = 0.8;
						center = 0.5;
						down[] = {0.2, 0.05};
						horizontal = 1;
						linexleft = 0.06;
						linexleftmajor = 0.06;
						lineyright = 0.05;
						lineyrightmajor = 0.04;
						majorlineeach = 5;
						max = "none";
						min = "none";
						numbereach = 5;
						pos[] = {0.2, 0};
						right[] = {0.28, 0};
						scale = 1;
						source = "Heading";
						sourcescale = 1;
						step = 2;
						stepsize = 0.03;
						top = 0.2;
						type = "scale";
					};
					class ILS {
						condition = "ils";
						class Glideslope {
							clipbr[] = {1, 1};
							cliptl[] = {0, 0};
							class ILS {
								points[] = {{"ILS_W", {-0.24, 0}, 1}, {"ILS_W", {0.24, 0}, 1}, {}, {"ILS_W", {0, 0.0264}, 1}, {"ILS_W", {0, -0.0264}, 1}, {}, {"ILS_W", {0.12, 0.0264}, 1}, {"ILS_W", {0.12, -0.0264}, 1}, {}, {"ILS_W", {0.24, 0.0264}, 1}, {"ILS_W", {0.24, -0.0264}, 1}, {}, {"ILS_W", {-0.12, 0.0264}, 1}, {"ILS_W", {-0.12, -0.0264}, 1}, {}, {"ILS_W", {-0.24, 0.0264}, 1}, {"ILS_W", {-0.24, -0.0264}, 1}, {}, {"ILS_H", {0, -0.264}, 1}, {"ILS_H", {0, 0.264}, 1}, {}, {"ILS_H", {0.024, 0}, 1}, {"ILS_H", {-0.024, 0}, 1}, {}, {"ILS_H", {0.024, 0.132}, 1}, {"ILS_H", {-0.024, 0.132}, 1}, {}, {"ILS_H", {0.024, 0.264}, 1}, {"ILS_H", {-0.024, 0.264}, 1}, {}, {"ILS_H", {0.024, -0.132}, 1}, {"ILS_H", {-0.024, -0.132}, 1}, {}, {"ILS_H", {0.024, -0.264}, 1}, {"ILS_H", {-0.024, -0.264}, 1}};
								type = "line";
							};
						};
					};
				};
			};
		};
	};
	
	class A10_base: A10 {};
	
	class A10_US_EP1: A10_base {	
		scope = 1;
		class NewTurret;
		class ViewPilot;
		class EventHandlers;
	};
	
	class TU_A10C_4GBU: A10_US_EP1 {
//type changes
		lockdetectionsystem = 8;
		incommingmissliedetectionsystem = 16;
		scope = 2;
		displayName = "A-10C Thunderbolt II (4xGBU-12)";
		vehicleClass = "TU_USAF";
		model = "\FRL_A10\FRL_A10.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {
//		"\FRL_A10\data\black\a10_01_co_black.paa",
//		"\FRL_A10\data\black\a10_02_co_black.paa",
//		"\FRL_A10\data\desert\a10_01_co_desert.paa",
//		"\FRL_A10\data\desert\a10_02_co_desert.paa"
//		"\FRL_A10\data\green\a10_01_co_green.paa",
//		"\FRL_A10\data\green\a10_02_co_green.paa"
		"\FRL_A10\data\grey\a10_01_co.paa",
		"\FRL_A10\data\grey\a10_02_co.paa"
//		"\FRL_A10\data\winter\a10_01_co_winter.paa",
//		"\FRL_A10\data\winter\a10_02_co_winter.paa"
		};
		weapons[] = {"ACE_GAU8","AGM65E_Launcher","SidewinderLaucher","ACE_BombLauncher","FFARLauncher","CMFlareLauncher"};
		magazines[] = {"ACE_1350Rnd_30mmAP_A10","14Rnd_FFAR",
//outer 1/2 sidewinders
		"TU_1Rnd_ALQ131","TU_1Rnd_lau2_x2_Rack_Pod",
//outer 3/4 rockets
		"TU_2Rnd_FFAR7Pod",
//inner 5/6 agm
		"TU_2Rnd_AGM65E",	
//inner 7/8 agm	
//body 9/10 bomb
		"TU_4Rnd_GBU12",
//body centre bomb
		"TU_1Rnd_Empty",
//outer 12/15 sidewinders
		"TU_1Rnd_Empty","TU_1Rnd_Sidewinder","TU_1Rnd_Empty","TU_1Rnd_Sidewinder",
//inner 16/21 agm triple racks
		"TU_6Rnd_Empty",
//inner 22/27 agm triple racks
		"TU_6Rnd_Empty",
//body 28/39 bomb 6x racks
		"TU_12Rnd_Empty",
//invisible
		"120Rnd_CMFlare_Chaff_Magazine"};
	};
	
	class TU_A10C_6GBU: A10_US_EP1 {
//type changes
		lockdetectionsystem = 8;
		incommingmissliedetectionsystem = 16;
		scope = 2;
		displayName = "A-10C Thunderbolt II (6xGBU-12)";
		vehicleClass = "TU_USAF";
		model = "\FRL_A10\FRL_A10.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {
//		"\FRL_A10\data\black\a10_01_co_black.paa",
//		"\FRL_A10\data\black\a10_02_co_black.paa",
//		"\FRL_A10\data\desert\a10_01_co_desert.paa",
//		"\FRL_A10\data\desert\a10_02_co_desert.paa"
//		"\FRL_A10\data\green\a10_01_co_green.paa",
//		"\FRL_A10\data\green\a10_02_co_green.paa"
		"\FRL_A10\data\grey\a10_01_co.paa",
		"\FRL_A10\data\grey\a10_02_co.paa"
//		"\FRL_A10\data\winter\a10_01_co_winter.paa",
//		"\FRL_A10\data\winter\a10_02_co_winter.paa"
		};
		weapons[] = {"ACE_GAU8","SidewinderLaucher","ACE_BombLauncher","FFARLauncher","CMFlareLauncher"};
		magazines[] = {"ACE_1350Rnd_30mmAP_A10","14Rnd_FFAR",
//outer 1/2 sidewinders
		"TU_1Rnd_ALQ131","TU_1Rnd_lau2_x2_Rack_Pod",
//outer 3/4 rockets
		"TU_2Rnd_FFAR7Pod",
//inner 5/6 agm
//inner 7/8 agm	
//body 9/10 bomb
		"TU_6Rnd_GBU12",
//body centre bomb
		"TU_1Rnd_Empty",
//outer 12/15 sidewinders
		"TU_1Rnd_Empty","TU_1Rnd_Sidewinder","TU_1Rnd_Empty","TU_1Rnd_Sidewinder",
//inner 16/21 agm triple racks
		"TU_6Rnd_Empty",
//inner 22/27 agm triple racks
		"TU_6Rnd_Empty",
//body 28/39 bomb 6x racks
		"TU_12Rnd_Empty",
//invisible
		"120Rnd_CMFlare_Chaff_Magazine"};
	};
	
	class TU_A10C_HGBU: A10_US_EP1 {
//type changes
		lockdetectionsystem = 8;
		incommingmissliedetectionsystem = 16;
		scope = 2;
		displayName = "A-10C Thunderbolt II (2xGBU-24)";
		vehicleClass = "TU_USAF";
		model = "\FRL_A10\FRL_A10.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {
//		"\FRL_A10\data\black\a10_01_co_black.paa",
//		"\FRL_A10\data\black\a10_02_co_black.paa",
//		"\FRL_A10\data\desert\a10_01_co_desert.paa",
//		"\FRL_A10\data\desert\a10_02_co_desert.paa"
//		"\FRL_A10\data\green\a10_01_co_green.paa",
//		"\FRL_A10\data\green\a10_02_co_green.paa"
		"\FRL_A10\data\grey\a10_01_co.paa",
		"\FRL_A10\data\grey\a10_02_co.paa"
//		"\FRL_A10\data\winter\a10_01_co_winter.paa",
//		"\FRL_A10\data\winter\a10_02_co_winter.paa"
		};
		weapons[] = {"ACE_GAU8","SidewinderLaucher","ACE_BombLauncher","GBU24_BombLauncher","FFARLauncher","CMFlareLauncher"};
		magazines[] = {"ACE_1350Rnd_30mmAP_A10","14Rnd_FFAR",
//outer 1/2 sidewinders
		"TU_1Rnd_ALQ131","TU_1Rnd_lau2_x2_Rack_Pod",
//outer 3/4 rockets
		"TU_2Rnd_FFAR7Pod",
//inner 5/6 agm
		"TU_2Rnd_GBU12",
//inner 7/8 agm	
		"TU_2Rnd_GBU24",
//body 9/10 bomb
		"TU_2Rnd_Empty",
//body centre bomb
		"TU_1Rnd_Empty",
//outer 12/15 sidewinders
		"TU_1Rnd_Empty","TU_1Rnd_Sidewinder","TU_1Rnd_Empty","TU_1Rnd_Sidewinder",
//inner 16/21 agm triple racks
		"TU_6Rnd_Empty",
//inner 22/27 agm triple racks
		"TU_6Rnd_Empty",
//body 28/39 bomb 6x racks
		"TU_12Rnd_Empty",
//invisible
		"120Rnd_CMFlare_Chaff_Magazine"};
	};
	
	class TU_A10C_6BMB: A10_US_EP1 {
//type changes
		lockdetectionsystem = 8;
		incommingmissliedetectionsystem = 16;
		scope = 2;
		displayName = "A-10C Thunderbolt II (6xMk82)";
		vehicleClass = "TU_USAF";
		model = "\FRL_A10\FRL_A10.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {
//		"\FRL_A10\data\black\a10_01_co_black.paa",
//		"\FRL_A10\data\black\a10_02_co_black.paa",
//		"\FRL_A10\data\desert\a10_01_co_desert.paa",
//		"\FRL_A10\data\desert\a10_02_co_desert.paa"
//		"\FRL_A10\data\green\a10_01_co_green.paa",
//		"\FRL_A10\data\green\a10_02_co_green.paa"
		"\FRL_A10\data\grey\a10_01_co.paa",
		"\FRL_A10\data\grey\a10_02_co.paa"
//		"\FRL_A10\data\winter\a10_01_co_winter.paa",
//		"\FRL_A10\data\winter\a10_02_co_winter.paa"
		};
		weapons[] = {"ACE_GAU8","AGM65E_Launcher","SidewinderLaucher","ACE_Mk82BombLauncher","FFARLauncher","CMFlareLauncher"};
		magazines[] = {"ACE_1350Rnd_30mmAP_A10","14Rnd_FFAR",
//outer 1/2 sidewinders
		"TU_1Rnd_ALQ131","TU_1Rnd_lau2_x2_Rack_Pod",
//outer 3/4 rockets
		"TU_2Rnd_FFAR7Pod",
//inner 5/6 agm
		"TU_2Rnd_AGM65E",
//inner 7/8 agm			
		"TU_2Rnd_x3_Rack_Pod",
//body 9/10 bomb
		"TU_2Rnd_Empty",
//body centre bomb
		"TU_1Rnd_Empty",
//outer 12/15 sidewinders
		"TU_1Rnd_Empty","TU_1Rnd_Sidewinder","TU_1Rnd_Empty","TU_1Rnd_Sidewinder",
//inner 16/21 agm triple racks
		"TU_6Rnd_Empty",
//inner 22/27 agm triple racks
		"TU_6Rnd_Mk82",
//body 28/39 bomb 6x racks
		"TU_12Rnd_Empty",
//invisible
		"120Rnd_CMFlare_Chaff_Magazine"};
	};
	
	class TU_A10C_HBMB: A10_US_EP1 {
//type changes
		lockdetectionsystem = 8;
		incommingmissliedetectionsystem = 16;
		scope = 2;
		displayName = "A-10C Thunderbolt II (2xMk84)";
		vehicleClass = "TU_USAF";
		model = "\FRL_A10\FRL_A10.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {
//		"\FRL_A10\data\black\a10_01_co_black.paa",
//		"\FRL_A10\data\black\a10_02_co_black.paa",
//		"\FRL_A10\data\desert\a10_01_co_desert.paa",
//		"\FRL_A10\data\desert\a10_02_co_desert.paa"
//		"\FRL_A10\data\green\a10_01_co_green.paa",
//		"\FRL_A10\data\green\a10_02_co_green.paa"
		"\FRL_A10\data\grey\a10_01_co.paa",
		"\FRL_A10\data\grey\a10_02_co.paa"
//		"\FRL_A10\data\winter\a10_01_co_winter.paa",
//		"\FRL_A10\data\winter\a10_02_co_winter.paa"
		};
		weapons[] = {"ACE_GAU8","AGM65E_Launcher","SidewinderLaucher","ACE_Mk82BombLauncher","Mk84BombLauncher","FFARLauncher","CMFlareLauncher"};
		magazines[] = {"ACE_1350Rnd_30mmAP_A10","14Rnd_FFAR",
//outer 1/2 sidewinders
		"TU_1Rnd_ALQ131","TU_1Rnd_lau2_x2_Rack_Pod",
//outer 3/4 rockets
		"TU_2Rnd_FFAR7Pod",
//inner 5/6 agm
		"TU_2Rnd_AGM65E",
//inner 7/8 agm	
		"TU_2Rnd_Empty",
//body 9/10 bomb
		"TU_2Rnd_Mk84",
//body centre bomb
		"TU_1Rnd_Empty",
//outer 12/15 sidewinders
		"TU_1Rnd_Empty","TU_1Rnd_Sidewinder","TU_1Rnd_Empty","TU_1Rnd_Sidewinder",
//inner 16/21 agm triple racks
		"TU_6Rnd_Empty",
//inner 22/27 agm triple racks
		"TU_6Rnd_Empty",
//body 28/39 bomb 6x racks
		"TU_12Rnd_Empty",
//invisible
		"120Rnd_CMFlare_Chaff_Magazine"};
	};
	
	class TU_A10C_4AT: A10_US_EP1 {
//type changes
		lockdetectionsystem = 8;
		incommingmissliedetectionsystem = 16;
		scope = 2;
		displayName = "A-10C Thunderbolt II (4xAGM-65)";
		vehicleClass = "TU_USAF";
		model = "\FRL_A10\FRL_A10.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {
//		"\FRL_A10\data\black\a10_01_co_black.paa",
//		"\FRL_A10\data\black\a10_02_co_black.paa",
//		"\FRL_A10\data\desert\a10_01_co_desert.paa",
//		"\FRL_A10\data\desert\a10_02_co_desert.paa"
//		"\FRL_A10\data\green\a10_01_co_green.paa",
//		"\FRL_A10\data\green\a10_02_co_green.paa"
		"\FRL_A10\data\grey\a10_01_co.paa",
		"\FRL_A10\data\grey\a10_02_co.paa"
//		"\FRL_A10\data\winter\a10_01_co_winter.paa",
//		"\FRL_A10\data\winter\a10_02_co_winter.paa"
		};
		weapons[] = {"ACE_GAU8","AGM65E_Launcher","SidewinderLaucher","ZuniLauncher","CMFlareLauncher"};
		magazines[] = {"ACE_1350Rnd_30mmAP_A10","16Rnd_Zuni",
//outer 1/2 sidewinders
		"TU_1Rnd_ALQ131","TU_1Rnd_lau2_x2_Rack_Pod",
//outer 3/4 rockets
//inner 5/6 agm
		"TU_4Rnd_AGM65E",
//inner 7/8 agm	
//body 9/10 bomb
		"TU_4Rnd_LAU10Pod",
//body centre bomb
		"TU_1Rnd_Empty",
//outer 12/15 sidewinders
		"TU_1Rnd_Empty","TU_1Rnd_Sidewinder","TU_1Rnd_Empty","TU_1Rnd_Sidewinder",
//inner 16/21 agm triple racks
		"TU_6Rnd_Empty",
//inner 22/27 agm triple racks
		"TU_6Rnd_Empty",
//body 28/39 bomb 6x racks
		"TU_12Rnd_Empty",
//invisible
		"120Rnd_CMFlare_Chaff_Magazine"};
	};
	
	class TU_A10C_6AT: A10_US_EP1 {
//type changes
		lockdetectionsystem = 8;
		incommingmissliedetectionsystem = 16;
		scope = 2;
		displayName = "A-10C Thunderbolt II (6xAGM-65)";
		vehicleClass = "TU_USAF";
		model = "\FRL_A10\FRL_A10.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {
//		"\FRL_A10\data\black\a10_01_co_black.paa",
//		"\FRL_A10\data\black\a10_02_co_black.paa",
//		"\FRL_A10\data\desert\a10_01_co_desert.paa",
//		"\FRL_A10\data\desert\a10_02_co_desert.paa"
//		"\FRL_A10\data\green\a10_01_co_green.paa",
//		"\FRL_A10\data\green\a10_02_co_green.paa"
		"\FRL_A10\data\grey\a10_01_co.paa",
		"\FRL_A10\data\grey\a10_02_co.paa"
//		"\FRL_A10\data\winter\a10_01_co_winter.paa",
//		"\FRL_A10\data\winter\a10_02_co_winter.paa"
		};
		weapons[] = {"ACE_GAU8","AGM65E_Launcher","SidewinderLaucher","ZuniLauncher","CMFlareLauncher"};
		magazines[] = {"ACE_1350Rnd_30mmAP_A10","16Rnd_Zuni",
//outer 1/2 sidewinders
		"TU_1Rnd_ALQ131","TU_1Rnd_lau2_x2_Rack_Pod",
//outer 3/4 rockets
		"TU_2Rnd_Empty",
//inner 5/6 agm
		"TU_2Rnd_x3_Rack_Pod",
//inner 7/8 agm	
//body 9/10 bomb
		"TU_4Rnd_LAU10Pod",
//body centre bomb
		"TU_1Rnd_Empty",
//outer 12/15 sidewinders
		"TU_1Rnd_Empty","TU_1Rnd_Sidewinder","TU_1Rnd_Empty","TU_1Rnd_Sidewinder",
//inner 16/21 agm triple racks
		"TU_6Rnd_AGM65E",
//inner 22/27 agm triple racks
		"TU_6Rnd_Empty",
//body 28/39 bomb 6x racks
		"TU_12Rnd_Empty",
//invisible
		"120Rnd_CMFlare_Chaff_Magazine"};
	};
	
	class TU_A10C_CAS: A10_US_EP1 {
//type changes
		lockdetectionsystem = 8;
		incommingmissliedetectionsystem = 16;
		scope = 2;
		displayName = "A-10C Thunderbolt II (CAS)";
		vehicleClass = "TU_USAF";
		model = "\FRL_A10\FRL_A10.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {
//		"\FRL_A10\data\black\a10_01_co_black.paa",
//		"\FRL_A10\data\black\a10_02_co_black.paa",
//		"\FRL_A10\data\desert\a10_01_co_desert.paa",
//		"\FRL_A10\data\desert\a10_02_co_desert.paa"
//		"\FRL_A10\data\green\a10_01_co_green.paa",
//		"\FRL_A10\data\green\a10_02_co_green.paa"
		"\FRL_A10\data\grey\a10_01_co.paa",
		"\FRL_A10\data\grey\a10_02_co.paa"
//		"\FRL_A10\data\winter\a10_01_co_winter.paa",
//		"\FRL_A10\data\winter\a10_02_co_winter.paa"
		};
		weapons[] = {"ACE_GAU8","SidewinderLaucher","ACE_Mk82BombLauncher","FFARLauncher","CMFlareLauncher"};
		magazines[] = {"ACE_1350Rnd_30mmAP_A10","114Rnd_FFAR",
//outer 1/2 sidewinders
		"TU_1Rnd_ALQ131","TU_1Rnd_lau2_x2_Rack_Pod",
//outer 3/4 rockets
		"TU_2Rnd_FFAR19Pod",
//inner 5/6 agm
		"TU_2Rnd_FFAR19Pod",
//inner 7/8 agm	
		"TU_2Rnd_FFAR19Pod",
//body 9/10 bomb
		"TU_1Rnd_Mk82",
		"TU_1Rnd_Mk82",
//body centre bomb
		"TU_1Rnd_Empty",
//outer 12/15 sidewinders
		"TU_1Rnd_Empty","TU_1Rnd_Sidewinder","TU_1Rnd_Empty","TU_1Rnd_Sidewinder",
//inner 16/21 agm triple racks
		"TU_6Rnd_Empty",
//inner 22/27 agm triple racks
		"TU_6Rnd_Empty",
//body 28/39 bomb 6x racks
		"TU_12Rnd_Empty",
//invisible
		"120Rnd_CMFlare_Chaff_Magazine"};
	};
	
	class TU_A10C_HCAS: A10_US_EP1 {
//type changes
		lockdetectionsystem = 8;
		incommingmissliedetectionsystem = 16;
		scope = 2;
		displayName = "A-10C Thunderbolt II (HCAS)";
		vehicleClass = "TU_USAF";
		model = "\FRL_A10\FRL_A10.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {
//		"\FRL_A10\data\black\a10_01_co_black.paa",
//		"\FRL_A10\data\black\a10_02_co_black.paa",
//		"\FRL_A10\data\desert\a10_01_co_desert.paa",
//		"\FRL_A10\data\desert\a10_02_co_desert.paa"
//		"\FRL_A10\data\green\a10_01_co_green.paa",
//		"\FRL_A10\data\green\a10_02_co_green.paa"
		"\FRL_A10\data\grey\a10_01_co.paa",
		"\FRL_A10\data\grey\a10_02_co.paa"
//		"\FRL_A10\data\winter\a10_01_co_winter.paa",
//		"\FRL_A10\data\winter\a10_02_co_winter.paa"
		};
		weapons[] = {"ACE_GAU8","SidewinderLaucher","ACE_Mk82BombLauncher","ZuniLauncher","CMFlareLauncher"};
		magazines[] = {"ACE_1350Rnd_30mmAP_A10","24Rnd_Zuni",
//outer 1/2 sidewinders
		"TU_1Rnd_ALQ131","TU_1Rnd_lau2_x2_Rack_Pod",
//outer 3/4 rockets
		"TU_2Rnd_LAU10Pod",
//inner 5/6 agm
		"TU_2Rnd_LAU10Pod",
//inner 7/8 agm	
		"TU_2Rnd_LAU10Pod",
//body 9/10 bomb
		"TU_1Rnd_Mk82",
		"TU_1Rnd_Mk82",
//body centre bomb
		"TU_1Rnd_Empty",
//outer 12/15 sidewinders
		"TU_1Rnd_Empty","TU_1Rnd_Sidewinder","TU_1Rnd_Empty","TU_1Rnd_Sidewinder",
//inner 16/21 agm triple racks
		"TU_6Rnd_Empty",
//inner 22/27 agm triple racks
		"TU_6Rnd_Empty",
//body 28/39 bomb 6x racks
		"TU_12Rnd_Empty",
//invisible
		"120Rnd_CMFlare_Chaff_Magazine"};
	};
		
	class TU_A10A_4GBU: A10_US_EP1 {
//type changes
		lockdetectionsystem = 8;
		incommingmissliedetectionsystem = 8;
		scope = 2;
		displayName = "A-10A Thunderbolt II (4xGBU-12)";
		vehicleClass = "TU_USAF";
		model = "\FRL_A10\FRL_A10.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {
//		"\FRL_A10\data\black\a10_01_co_black.paa",
//		"\FRL_A10\data\black\a10_02_co_black.paa",
//		"\FRL_A10\data\desert\a10_01_co_desert.paa",
//		"\FRL_A10\data\desert\a10_02_co_desert.paa"
//		"\FRL_A10\data\green\a10_01_co_green.paa",
//		"\FRL_A10\data\green\a10_02_co_green.paa"
		"\FRL_A10\data\grey\a10_01_co.paa",
		"\FRL_A10\data\grey\a10_02_co.paa"
//		"\FRL_A10\data\winter\a10_01_co_winter.paa",
//		"\FRL_A10\data\winter\a10_02_co_winter.paa"
		};
		weapons[] = {"ACE_GAU8","AGM65E_Launcher","AIM9MLaucher","ACE_BombLauncher","FFARLauncher","CMFlareLauncher"};
		magazines[] = {"ACE_1350Rnd_30mmAP_A10","14Rnd_FFAR",
//outer 1/2 sidewinders
		"TU_2Rnd_AIM9M",
//outer 3/4 rockets
		"TU_2Rnd_FFAR7Pod",
//inner 5/6 agm
		"TU_2Rnd_AGM65E",	
//inner 7/8 agm	
//body 9/10 bomb
		"TU_4Rnd_GBU12",
//body centre bomb
		"TU_1Rnd_Empty",
//outer 12/15 AIM9Ms
		"TU_4Rnd_Empty",
//inner 16/21 agm triple racks
		"TU_6Rnd_Empty",
//inner 22/27 agm triple racks
		"TU_6Rnd_Empty",
//body 28/39 bomb 6x racks
		"TU_12Rnd_Empty",
//invisible
		"120Rnd_CMFlare_Chaff_Magazine"};
	};
	
	class TU_A10A_6GBU: A10_US_EP1 {
//type changes
		lockdetectionsystem = 8;
		incommingmissliedetectionsystem = 8;
		scope = 2;
		displayName = "A-10A Thunderbolt II (6xGBU-12)";
		vehicleClass = "TU_USAF";
		model = "\FRL_A10\FRL_A10.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {
//		"\FRL_A10\data\black\a10_01_co_black.paa",
//		"\FRL_A10\data\black\a10_02_co_black.paa",
//		"\FRL_A10\data\desert\a10_01_co_desert.paa",
//		"\FRL_A10\data\desert\a10_02_co_desert.paa"
//		"\FRL_A10\data\green\a10_01_co_green.paa",
//		"\FRL_A10\data\green\a10_02_co_green.paa"
		"\FRL_A10\data\grey\a10_01_co.paa",
		"\FRL_A10\data\grey\a10_02_co.paa"
//		"\FRL_A10\data\winter\a10_01_co_winter.paa",
//		"\FRL_A10\data\winter\a10_02_co_winter.paa"
		};
		weapons[] = {"ACE_GAU8","AIM9MLaucher","ACE_BombLauncher","FFARLauncher","CMFlareLauncher"};
		magazines[] = {"ACE_1350Rnd_30mmAP_A10","14Rnd_FFAR",
//outer 1/2 AIM9Ms
		"TU_2Rnd_AIM9M",
//outer 3/4 rockets
		"TU_2Rnd_FFAR7Pod",
//inner 5/6 agm
//inner 7/8 agm	
//body 9/10 bomb
		"TU_6Rnd_GBU12",
//body centre bomb
		"TU_1Rnd_Empty",
//outer 12/15 AIM9Ms
		"TU_4Rnd_Empty",
//inner 16/21 agm triple racks
		"TU_6Rnd_Empty",
//inner 22/27 agm triple racks
		"TU_6Rnd_Empty",
//body 28/39 bomb 6x racks
		"TU_12Rnd_Empty",
//invisible
		"120Rnd_CMFlare_Chaff_Magazine"};
	};
	
	class TU_A10A_HGBU: A10_US_EP1 {
//type changes
		lockdetectionsystem = 8;
		incommingmissliedetectionsystem = 8;
		scope = 2;
		displayName = "A-10A Thunderbolt II (2xGBU-24)";
		vehicleClass = "TU_USAF";
		model = "\FRL_A10\FRL_A10.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {
//		"\FRL_A10\data\black\a10_01_co_black.paa",
//		"\FRL_A10\data\black\a10_02_co_black.paa",
//		"\FRL_A10\data\desert\a10_01_co_desert.paa",
//		"\FRL_A10\data\desert\a10_02_co_desert.paa"
//		"\FRL_A10\data\green\a10_01_co_green.paa",
//		"\FRL_A10\data\green\a10_02_co_green.paa"
		"\FRL_A10\data\grey\a10_01_co.paa",
		"\FRL_A10\data\grey\a10_02_co.paa"
//		"\FRL_A10\data\winter\a10_01_co_winter.paa",
//		"\FRL_A10\data\winter\a10_02_co_winter.paa"
		};
		weapons[] = {"ACE_GAU8","AIM9MLaucher","ACE_BombLauncher","GBU24_BombLauncher","FFARLauncher","CMFlareLauncher"};
		magazines[] = {"ACE_1350Rnd_30mmAP_A10","14Rnd_FFAR",
//outer 1/2 AIM9Ms
		"TU_2Rnd_AIM9M",
//outer 3/4 rockets
		"TU_2Rnd_FFAR7Pod",
//inner 5/6 agm
		"TU_2Rnd_GBU12",
//inner 7/8 agm	
		"TU_2Rnd_GBU24",
//body 9/10 bomb
		"TU_2Rnd_Empty",
//body centre bomb
		"TU_1Rnd_Empty",
//outer 12/15 AIM9Ms
		"TU_4Rnd_Empty",
//inner 16/21 agm triple racks
		"TU_6Rnd_Empty",
//inner 22/27 agm triple racks
		"TU_6Rnd_Empty",
//body 28/39 bomb 6x racks
		"TU_12Rnd_Empty",
//invisible
		"120Rnd_CMFlare_Chaff_Magazine"};
	};
	
	class TU_A10A_6BMB: A10_US_EP1 {
//type changes
		lockdetectionsystem = 8;
		incommingmissliedetectionsystem = 8;
		scope = 2;
		displayName = "A-10A Thunderbolt II (6xMk82)";
		vehicleClass = "TU_USAF";
		model = "\FRL_A10\FRL_A10.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {
//		"\FRL_A10\data\black\a10_01_co_black.paa",
//		"\FRL_A10\data\black\a10_02_co_black.paa",
//		"\FRL_A10\data\desert\a10_01_co_desert.paa",
//		"\FRL_A10\data\desert\a10_02_co_desert.paa"
//		"\FRL_A10\data\green\a10_01_co_green.paa",
//		"\FRL_A10\data\green\a10_02_co_green.paa"
		"\FRL_A10\data\grey\a10_01_co.paa",
		"\FRL_A10\data\grey\a10_02_co.paa"
//		"\FRL_A10\data\winter\a10_01_co_winter.paa",
//		"\FRL_A10\data\winter\a10_02_co_winter.paa"
		};
		weapons[] = {"ACE_GAU8","AGM65E_Launcher","AIM9MLaucher","ACE_Mk82BombLauncher","FFARLauncher","CMFlareLauncher"};
		magazines[] = {"ACE_1350Rnd_30mmAP_A10","14Rnd_FFAR",
//outer 1/2 AIM9Ms
		"TU_2Rnd_AIM9M",
//outer 3/4 rockets
		"TU_2Rnd_FFAR7Pod",
//inner 5/6 agm
		"TU_2Rnd_AGM65E",
//inner 7/8 agm			
		"TU_2Rnd_x3_Rack_Pod",
//body 9/10 bomb
		"TU_2Rnd_Empty",
//body centre bomb
		"TU_1Rnd_Empty",
//outer 12/15 AIM9Ms
		"TU_4Rnd_Empty",
//inner 16/21 agm triple racks
		"TU_6Rnd_Empty",
//inner 22/27 agm triple racks
		"TU_6Rnd_Mk82",
//body 28/39 bomb 6x racks
		"TU_12Rnd_Empty",
//invisible
		"120Rnd_CMFlare_Chaff_Magazine"};
	};
	
	class TU_A10A_HBMB: A10_US_EP1 {
//type changes
		lockdetectionsystem = 8;
		incommingmissliedetectionsystem = 8;
		scope = 2;
		displayName = "A-10A Thunderbolt II (2xMk84)";
		vehicleClass = "TU_USAF";
		model = "\FRL_A10\FRL_A10.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {
//		"\FRL_A10\data\black\a10_01_co_black.paa",
//		"\FRL_A10\data\black\a10_02_co_black.paa",
//		"\FRL_A10\data\desert\a10_01_co_desert.paa",
//		"\FRL_A10\data\desert\a10_02_co_desert.paa"
//		"\FRL_A10\data\green\a10_01_co_green.paa",
//		"\FRL_A10\data\green\a10_02_co_green.paa"
		"\FRL_A10\data\grey\a10_01_co.paa",
		"\FRL_A10\data\grey\a10_02_co.paa"
//		"\FRL_A10\data\winter\a10_01_co_winter.paa",
//		"\FRL_A10\data\winter\a10_02_co_winter.paa"
		};
		weapons[] = {"ACE_GAU8","AGM65E_Launcher","AIM9MLaucher","ACE_Mk82BombLauncher","Mk84BombLauncher","FFARLauncher","CMFlareLauncher"};
		magazines[] = {"ACE_1350Rnd_30mmAP_A10","14Rnd_FFAR",
//outer 1/2 AIM9Ms
		"TU_2Rnd_AIM9M",
//outer 3/4 rockets
		"TU_2Rnd_FFAR7Pod",
//inner 5/6 agm
		"TU_2Rnd_AGM65E",
//inner 7/8 agm	
		"TU_2Rnd_Empty",
//body 9/10 bomb
		"TU_2Rnd_Mk84",
//body centre bomb
		"TU_1Rnd_Empty",
//outer 12/15 AIM9Ms
		"TU_4Rnd_Empty",
//inner 16/21 agm triple racks
		"TU_6Rnd_Empty",
//inner 22/27 agm triple racks
		"TU_6Rnd_Empty",
//body 28/39 bomb 6x racks
		"TU_12Rnd_Empty",
//invisible
		"120Rnd_CMFlare_Chaff_Magazine"};
	};
	
	class TU_A10A_4AT: A10_US_EP1 {
//type changes
		lockdetectionsystem = 8;
		incommingmissliedetectionsystem = 8;
		scope = 2;
		displayName = "A-10A Thunderbolt II (4xAGM-65)";
		vehicleClass = "TU_USAF";
		model = "\FRL_A10\FRL_A10.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {
//		"\FRL_A10\data\black\a10_01_co_black.paa",
//		"\FRL_A10\data\black\a10_02_co_black.paa",
//		"\FRL_A10\data\desert\a10_01_co_desert.paa",
//		"\FRL_A10\data\desert\a10_02_co_desert.paa"
//		"\FRL_A10\data\green\a10_01_co_green.paa",
//		"\FRL_A10\data\green\a10_02_co_green.paa"
		"\FRL_A10\data\grey\a10_01_co.paa",
		"\FRL_A10\data\grey\a10_02_co.paa"
//		"\FRL_A10\data\winter\a10_01_co_winter.paa",
//		"\FRL_A10\data\winter\a10_02_co_winter.paa"
		};
		weapons[] = {"ACE_GAU8","AGM65E_Launcher","AIM9MLaucher","ZuniLauncher","CMFlareLauncher"};
		magazines[] = {"ACE_1350Rnd_30mmAP_A10","16Rnd_Zuni",
//outer 1/2 AIM9Ms
		"TU_2Rnd_AIM9M",
//outer 3/4 rockets
//inner 5/6 agm
		"TU_4Rnd_AGM65E",
//inner 7/8 agm	
//body 9/10 bomb
		"TU_4Rnd_LAU10Pod",
//body centre bomb
		"TU_1Rnd_Empty",
//outer 12/15 AIM9Ms
		"TU_4Rnd_Empty",
//inner 16/21 agm triple racks
		"TU_6Rnd_Empty",
//inner 22/27 agm triple racks
		"TU_6Rnd_Empty",
//body 28/39 bomb 6x racks
		"TU_12Rnd_Empty",
//invisible
		"120Rnd_CMFlare_Chaff_Magazine"};
	};
	
	class TU_A10A_6AT: A10_US_EP1 {
//type changes
		lockdetectionsystem = 8;
		incommingmissliedetectionsystem = 8;
		scope = 2;
		displayName = "A-10A Thunderbolt II (6xAGM-65)";
		vehicleClass = "TU_USAF";
		model = "\FRL_A10\FRL_A10.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {
//		"\FRL_A10\data\black\a10_01_co_black.paa",
//		"\FRL_A10\data\black\a10_02_co_black.paa",
//		"\FRL_A10\data\desert\a10_01_co_desert.paa",
//		"\FRL_A10\data\desert\a10_02_co_desert.paa"
//		"\FRL_A10\data\green\a10_01_co_green.paa",
//		"\FRL_A10\data\green\a10_02_co_green.paa"
		"\FRL_A10\data\grey\a10_01_co.paa",
		"\FRL_A10\data\grey\a10_02_co.paa"
//		"\FRL_A10\data\winter\a10_01_co_winter.paa",
//		"\FRL_A10\data\winter\a10_02_co_winter.paa"
		};
		weapons[] = {"ACE_GAU8","AGM65E_Launcher","AIM9MLaucher","ZuniLauncher","CMFlareLauncher"};
		magazines[] = {"ACE_1350Rnd_30mmAP_A10","16Rnd_Zuni",
//outer 1/2 AIM9Ms
		"TU_2Rnd_AIM9M",
//outer 3/4 rockets
		"TU_2Rnd_Empty",
//inner 5/6 agm
		"TU_2Rnd_x3_Rack_Pod",
//inner 7/8 agm	
//body 9/10 bomb
		"TU_4Rnd_LAU10Pod",
//body centre bomb
		"TU_1Rnd_Empty",
//outer 12/15 AIM9Ms
		"TU_4Rnd_Empty",
//inner 16/21 agm triple racks
		"TU_6Rnd_AGM65E",
//inner 22/27 agm triple racks
		"TU_6Rnd_Empty",
//body 28/39 bomb 6x racks
		"TU_12Rnd_Empty",
//invisible
		"120Rnd_CMFlare_Chaff_Magazine"};
	};
	
	class TU_A10A_CAS: A10_US_EP1 {
//type changes
		lockdetectionsystem = 8;
		incommingmissliedetectionsystem = 8;
		scope = 2;
		displayName = "A-10A Thunderbolt II (CAS)";
		vehicleClass = "TU_USAF";
		model = "\FRL_A10\FRL_A10.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {
//		"\FRL_A10\data\black\a10_01_co_black.paa",
//		"\FRL_A10\data\black\a10_02_co_black.paa",
//		"\FRL_A10\data\desert\a10_01_co_desert.paa",
//		"\FRL_A10\data\desert\a10_02_co_desert.paa"
//		"\FRL_A10\data\green\a10_01_co_green.paa",
//		"\FRL_A10\data\green\a10_02_co_green.paa"
		"\FRL_A10\data\grey\a10_01_co.paa",
		"\FRL_A10\data\grey\a10_02_co.paa"
//		"\FRL_A10\data\winter\a10_01_co_winter.paa",
//		"\FRL_A10\data\winter\a10_02_co_winter.paa"
		};
		weapons[] = {"ACE_GAU8","AIM9MLaucher","ACE_Mk82BombLauncher","FFARLauncher","CMFlareLauncher"};
		magazines[] = {"ACE_1350Rnd_30mmAP_A10","114Rnd_FFAR",
//outer 1/2 AIM9Ms
		"TU_2Rnd_AIM9M",
//outer 3/4 rockets
		"TU_2Rnd_FFAR19Pod",
//inner 5/6 agm
		"TU_2Rnd_FFAR19Pod",
//inner 7/8 agm	
		"TU_2Rnd_FFAR19Pod",
//body 9/10 bomb
		"TU_1Rnd_Mk82",
		"TU_1Rnd_Mk82",
//body centre bomb
		"TU_1Rnd_Empty",
//outer 12/15 AIM9Ms
		"TU_4Rnd_Empty",
//inner 16/21 agm triple racks
		"TU_6Rnd_Empty",
//inner 22/27 agm triple racks
		"TU_6Rnd_Empty",
//body 28/39 bomb 6x racks
		"TU_12Rnd_Empty",
//invisible
		"120Rnd_CMFlare_Chaff_Magazine"};
	};
	
	class TU_A10A_HCAS: A10_US_EP1 {
//type changes
		lockdetectionsystem = 8;
		incommingmissliedetectionsystem = 8;
		scope = 2;
		displayName = "A-10A Thunderbolt II (HCAS)";
		vehicleClass = "TU_USAF";
		model = "\FRL_A10\FRL_A10.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {
//		"\FRL_A10\data\black\a10_01_co_black.paa",
//		"\FRL_A10\data\black\a10_02_co_black.paa",
//		"\FRL_A10\data\desert\a10_01_co_desert.paa",
//		"\FRL_A10\data\desert\a10_02_co_desert.paa"
//		"\FRL_A10\data\green\a10_01_co_green.paa",
//		"\FRL_A10\data\green\a10_02_co_green.paa"
		"\FRL_A10\data\grey\a10_01_co.paa",
		"\FRL_A10\data\grey\a10_02_co.paa"
//		"\FRL_A10\data\winter\a10_01_co_winter.paa",
//		"\FRL_A10\data\winter\a10_02_co_winter.paa"
		};
		weapons[] = {"ACE_GAU8","AIM9MLaucher","ACE_Mk82BombLauncher","ZuniLauncher","CMFlareLauncher"};
		magazines[] = {"ACE_1350Rnd_30mmAP_A10","24Rnd_Zuni",
//outer 1/2 AIM9Ms
		"TU_2Rnd_AIM9M",
//outer 3/4 rockets
		"TU_2Rnd_LAU10Pod",
//inner 5/6 agm
		"TU_2Rnd_LAU10Pod",
//inner 7/8 agm	
		"TU_2Rnd_LAU10Pod",
//body 9/10 bomb
		"TU_1Rnd_Mk82",
		"TU_1Rnd_Mk82",
//body centre bomb
		"TU_1Rnd_Empty",
//outer 12/15 AIM9Ms
		"TU_4Rnd_Empty",
//inner 16/21 agm triple racks
		"TU_6Rnd_Empty",
//inner 22/27 agm triple racks
		"TU_6Rnd_Empty",
//body 28/39 bomb 6x racks
		"TU_12Rnd_Empty",
//invisible
		"120Rnd_CMFlare_Chaff_Magazine"};
	};
	
	class TU_A10A_CAP: A10_US_EP1 {
//type changes
		lockdetectionsystem = 8;
		incommingmissliedetectionsystem = 8;
		scope = 2;
		displayName = "A-10A Thunderbolt II (4xAIM-9)";
		vehicleClass = "TU_USAF";
		model = "\FRL_A10\FRL_A10.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {
//		"\FRL_A10\data\black\a10_01_co_black.paa",
//		"\FRL_A10\data\black\a10_02_co_black.paa",
//		"\FRL_A10\data\desert\a10_01_co_desert.paa",
//		"\FRL_A10\data\desert\a10_02_co_desert.paa"
//		"\FRL_A10\data\green\a10_01_co_green.paa",
//		"\FRL_A10\data\green\a10_02_co_green.paa"
		"\FRL_A10\data\grey\a10_01_co.paa",
		"\FRL_A10\data\grey\a10_02_co.paa"
//		"\FRL_A10\data\winter\a10_01_co_winter.paa",
//		"\FRL_A10\data\winter\a10_02_co_winter.paa"
		};
		weapons[] = {"ACE_GAU8","AGM65E_Launcher","AIM9MLaucher","ACE_Mk82BombLauncher","FFARLauncher","CMFlareLauncher"};
		magazines[] = {"ACE_1350Rnd_30mmAP_A10","14Rnd_FFAR",
//outer 1/2 AIM9Ms
		"TU_2Rnd_lau2_x2_Rack_Pod",
//outer 3/4 rockets
		"TU_2Rnd_FFAR7Pod",
//inner 5/6 agm
		"TU_2Rnd_AGM65E",
//inner 7/8 agm	
		"TU_2Rnd_Empty",
//body 9/10 bomb
		"TU_2Rnd_Mk82",
//body centre bomb
		"TU_1Rnd_Empty",
//outer 12/15 AIM9Ms
		"TU_4Rnd_AIM9M",
//inner 16/21 agm triple racks
		"TU_6Rnd_Empty",
//inner 22/27 agm triple racks
		"TU_6Rnd_Empty",
//body 28/39 bomb 6x racks
		"TU_12Rnd_Empty",
//invisible
		"120Rnd_CMFlare_Chaff_Magazine"};
	};
	
	class TU_A10C_4GBU_W: TU_A10C_4GBU {
//type changes
		vehicleClass = "TU_USAF_W";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {
//		"\FRL_A10\data\black\a10_01_co_black.paa",
//		"\FRL_A10\data\black\a10_02_co_black.paa",
//		"\FRL_A10\data\desert\a10_01_co_desert.paa",
//		"\FRL_A10\data\desert\a10_02_co_desert.paa"
		"\FRL_A10\data\green\a10_01_co_green.paa",
		"\FRL_A10\data\green\a10_02_co_green.paa"
//		"\FRL_A10\data\grey\a10_01_co.paa",
//		"\FRL_A10\data\grey\a10_02_co.paa"
//		"\FRL_A10\data\winter\a10_01_co_winter.paa",
//		"\FRL_A10\data\winter\a10_02_co_winter.paa"
		};
	};
	
	class TU_A10C_6GBU_W: TU_A10C_6GBU {
//type changes
		vehicleClass = "TU_USAF_W";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {
//		"\FRL_A10\data\black\a10_01_co_black.paa",
//		"\FRL_A10\data\black\a10_02_co_black.paa",
//		"\FRL_A10\data\desert\a10_01_co_desert.paa",
//		"\FRL_A10\data\desert\a10_02_co_desert.paa"
		"\FRL_A10\data\green\a10_01_co_green.paa",
		"\FRL_A10\data\green\a10_02_co_green.paa"
//		"\FRL_A10\data\grey\a10_01_co.paa",
//		"\FRL_A10\data\grey\a10_02_co.paa"
//		"\FRL_A10\data\winter\a10_01_co_winter.paa",
//		"\FRL_A10\data\winter\a10_02_co_winter.paa"
		};
	};
	
	class TU_A10C_HGBU_W: TU_A10C_HGBU {
//type changes
		vehicleClass = "TU_USAF_W";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {
//		"\FRL_A10\data\black\a10_01_co_black.paa",
//		"\FRL_A10\data\black\a10_02_co_black.paa",
//		"\FRL_A10\data\desert\a10_01_co_desert.paa",
//		"\FRL_A10\data\desert\a10_02_co_desert.paa"
		"\FRL_A10\data\green\a10_01_co_green.paa",
		"\FRL_A10\data\green\a10_02_co_green.paa"
//		"\FRL_A10\data\grey\a10_01_co.paa",
//		"\FRL_A10\data\grey\a10_02_co.paa"
//		"\FRL_A10\data\winter\a10_01_co_winter.paa",
//		"\FRL_A10\data\winter\a10_02_co_winter.paa"
		};
	};
	
	class TU_A10C_6BMB_W: TU_A10C_6BMB {
//type changes
		vehicleClass = "TU_USAF_W";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {
//		"\FRL_A10\data\black\a10_01_co_black.paa",
//		"\FRL_A10\data\black\a10_02_co_black.paa",
//		"\FRL_A10\data\desert\a10_01_co_desert.paa",
//		"\FRL_A10\data\desert\a10_02_co_desert.paa"
		"\FRL_A10\data\green\a10_01_co_green.paa",
		"\FRL_A10\data\green\a10_02_co_green.paa"
//		"\FRL_A10\data\grey\a10_01_co.paa",
//		"\FRL_A10\data\grey\a10_02_co.paa"
//		"\FRL_A10\data\winter\a10_01_co_winter.paa",
//		"\FRL_A10\data\winter\a10_02_co_winter.paa"
		};
	};
	
	class TU_A10C_HBMB_W: TU_A10C_HBMB {
//type changes
		vehicleClass = "TU_USAF_W";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {
//		"\FRL_A10\data\black\a10_01_co_black.paa",
//		"\FRL_A10\data\black\a10_02_co_black.paa",
//		"\FRL_A10\data\desert\a10_01_co_desert.paa",
//		"\FRL_A10\data\desert\a10_02_co_desert.paa"
		"\FRL_A10\data\green\a10_01_co_green.paa",
		"\FRL_A10\data\green\a10_02_co_green.paa"
//		"\FRL_A10\data\grey\a10_01_co.paa",
//		"\FRL_A10\data\grey\a10_02_co.paa"
//		"\FRL_A10\data\winter\a10_01_co_winter.paa",
//		"\FRL_A10\data\winter\a10_02_co_winter.paa"
		};
	};
	
	class TU_A10C_4AT_W: TU_A10C_4AT {
//type changes
		vehicleClass = "TU_USAF_W";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {
//		"\FRL_A10\data\black\a10_01_co_black.paa",
//		"\FRL_A10\data\black\a10_02_co_black.paa",
//		"\FRL_A10\data\desert\a10_01_co_desert.paa",
//		"\FRL_A10\data\desert\a10_02_co_desert.paa"
		"\FRL_A10\data\green\a10_01_co_green.paa",
		"\FRL_A10\data\green\a10_02_co_green.paa"
//		"\FRL_A10\data\grey\a10_01_co.paa",
//		"\FRL_A10\data\grey\a10_02_co.paa"
//		"\FRL_A10\data\winter\a10_01_co_winter.paa",
//		"\FRL_A10\data\winter\a10_02_co_winter.paa"
		};
	};
	
	class TU_A10C_6AT_W: TU_A10C_6AT {
//type changes
		vehicleClass = "TU_USAF_W";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {
//		"\FRL_A10\data\black\a10_01_co_black.paa",
//		"\FRL_A10\data\black\a10_02_co_black.paa",
//		"\FRL_A10\data\desert\a10_01_co_desert.paa",
//		"\FRL_A10\data\desert\a10_02_co_desert.paa"
		"\FRL_A10\data\green\a10_01_co_green.paa",
		"\FRL_A10\data\green\a10_02_co_green.paa"
//		"\FRL_A10\data\grey\a10_01_co.paa",
//		"\FRL_A10\data\grey\a10_02_co.paa"
//		"\FRL_A10\data\winter\a10_01_co_winter.paa",
//		"\FRL_A10\data\winter\a10_02_co_winter.paa"
		};
	};
	
	class TU_A10C_CAS_W: TU_A10C_CAS {
//type changes
		vehicleClass = "TU_USAF_W";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {
//		"\FRL_A10\data\black\a10_01_co_black.paa",
//		"\FRL_A10\data\black\a10_02_co_black.paa",
//		"\FRL_A10\data\desert\a10_01_co_desert.paa",
//		"\FRL_A10\data\desert\a10_02_co_desert.paa"
		"\FRL_A10\data\green\a10_01_co_green.paa",
		"\FRL_A10\data\green\a10_02_co_green.paa"
//		"\FRL_A10\data\grey\a10_01_co.paa",
//		"\FRL_A10\data\grey\a10_02_co.paa"
//		"\FRL_A10\data\winter\a10_01_co_winter.paa",
//		"\FRL_A10\data\winter\a10_02_co_winter.paa"
		};
	};
	
	class TU_A10C_HCAS_W: TU_A10C_HCAS {
//type changes
		vehicleClass = "TU_USAF_W";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {
//		"\FRL_A10\data\black\a10_01_co_black.paa",
//		"\FRL_A10\data\black\a10_02_co_black.paa",
//		"\FRL_A10\data\desert\a10_01_co_desert.paa",
//		"\FRL_A10\data\desert\a10_02_co_desert.paa"
		"\FRL_A10\data\green\a10_01_co_green.paa",
		"\FRL_A10\data\green\a10_02_co_green.paa"
//		"\FRL_A10\data\grey\a10_01_co.paa",
//		"\FRL_A10\data\grey\a10_02_co.paa"
//		"\FRL_A10\data\winter\a10_01_co_winter.paa",
//		"\FRL_A10\data\winter\a10_02_co_winter.paa"
		};
	};
		
	class TU_A10A_4GBU_W: TU_A10A_4GBU {
//type changes
		vehicleClass = "TU_USAF_W";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {
//		"\FRL_A10\data\black\a10_01_co_black.paa",
//		"\FRL_A10\data\black\a10_02_co_black.paa",
//		"\FRL_A10\data\desert\a10_01_co_desert.paa",
//		"\FRL_A10\data\desert\a10_02_co_desert.paa"
		"\FRL_A10\data\green\a10_01_co_green.paa",
		"\FRL_A10\data\green\a10_02_co_green.paa"
//		"\FRL_A10\data\grey\a10_01_co.paa",
//		"\FRL_A10\data\grey\a10_02_co.paa"
//		"\FRL_A10\data\winter\a10_01_co_winter.paa",
//		"\FRL_A10\data\winter\a10_02_co_winter.paa"
		};
	};
	
	class TU_A10A_6GBU_W: TU_A10A_6GBU {
//type changes
		vehicleClass = "TU_USAF_W";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {
//		"\FRL_A10\data\black\a10_01_co_black.paa",
//		"\FRL_A10\data\black\a10_02_co_black.paa",
//		"\FRL_A10\data\desert\a10_01_co_desert.paa",
//		"\FRL_A10\data\desert\a10_02_co_desert.paa"
		"\FRL_A10\data\green\a10_01_co_green.paa",
		"\FRL_A10\data\green\a10_02_co_green.paa"
//		"\FRL_A10\data\grey\a10_01_co.paa",
//		"\FRL_A10\data\grey\a10_02_co.paa"
//		"\FRL_A10\data\winter\a10_01_co_winter.paa",
//		"\FRL_A10\data\winter\a10_02_co_winter.paa"
		};
	};
	
	class TU_A10A_HGBU_W: TU_A10A_HGBU {
//type changes
		vehicleClass = "TU_USAF_W";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {
//		"\FRL_A10\data\black\a10_01_co_black.paa",
//		"\FRL_A10\data\black\a10_02_co_black.paa",
//		"\FRL_A10\data\desert\a10_01_co_desert.paa",
//		"\FRL_A10\data\desert\a10_02_co_desert.paa"
		"\FRL_A10\data\green\a10_01_co_green.paa",
		"\FRL_A10\data\green\a10_02_co_green.paa"
//		"\FRL_A10\data\grey\a10_01_co.paa",
//		"\FRL_A10\data\grey\a10_02_co.paa"
//		"\FRL_A10\data\winter\a10_01_co_winter.paa",
//		"\FRL_A10\data\winter\a10_02_co_winter.paa"
		};
	};
	
	class TU_A10A_6BMB_W: TU_A10A_6BMB {
//type changes
		vehicleClass = "TU_USAF_W";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {
//		"\FRL_A10\data\black\a10_01_co_black.paa",
//		"\FRL_A10\data\black\a10_02_co_black.paa",
//		"\FRL_A10\data\desert\a10_01_co_desert.paa",
//		"\FRL_A10\data\desert\a10_02_co_desert.paa"
		"\FRL_A10\data\green\a10_01_co_green.paa",
		"\FRL_A10\data\green\a10_02_co_green.paa"
//		"\FRL_A10\data\grey\a10_01_co.paa",
//		"\FRL_A10\data\grey\a10_02_co.paa"
//		"\FRL_A10\data\winter\a10_01_co_winter.paa",
//		"\FRL_A10\data\winter\a10_02_co_winter.paa"
		};
	};
	
	class TU_A10A_HBMB_W: TU_A10A_HBMB {
//type changes
		vehicleClass = "TU_USAF_W";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {
//		"\FRL_A10\data\black\a10_01_co_black.paa",
//		"\FRL_A10\data\black\a10_02_co_black.paa",
//		"\FRL_A10\data\desert\a10_01_co_desert.paa",
//		"\FRL_A10\data\desert\a10_02_co_desert.paa"
		"\FRL_A10\data\green\a10_01_co_green.paa",
		"\FRL_A10\data\green\a10_02_co_green.paa"
//		"\FRL_A10\data\grey\a10_01_co.paa",
//		"\FRL_A10\data\grey\a10_02_co.paa"
//		"\FRL_A10\data\winter\a10_01_co_winter.paa",
//		"\FRL_A10\data\winter\a10_02_co_winter.paa"
		};
	};
	
	class TU_A10A_4AT_W: TU_A10A_4AT {
//type changes
		vehicleClass = "TU_USAF_W";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {
//		"\FRL_A10\data\black\a10_01_co_black.paa",
//		"\FRL_A10\data\black\a10_02_co_black.paa",
//		"\FRL_A10\data\desert\a10_01_co_desert.paa",
//		"\FRL_A10\data\desert\a10_02_co_desert.paa"
		"\FRL_A10\data\green\a10_01_co_green.paa",
		"\FRL_A10\data\green\a10_02_co_green.paa"
//		"\FRL_A10\data\grey\a10_01_co.paa",
//		"\FRL_A10\data\grey\a10_02_co.paa"
//		"\FRL_A10\data\winter\a10_01_co_winter.paa",
//		"\FRL_A10\data\winter\a10_02_co_winter.paa"
		};
	};
	
	class TU_A10A_6AT_W: TU_A10A_6AT {
//type changes
		vehicleClass = "TU_USAF_W";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {
//		"\FRL_A10\data\black\a10_01_co_black.paa",
//		"\FRL_A10\data\black\a10_02_co_black.paa",
//		"\FRL_A10\data\desert\a10_01_co_desert.paa",
//		"\FRL_A10\data\desert\a10_02_co_desert.paa"
		"\FRL_A10\data\green\a10_01_co_green.paa",
		"\FRL_A10\data\green\a10_02_co_green.paa"
//		"\FRL_A10\data\grey\a10_01_co.paa",
//		"\FRL_A10\data\grey\a10_02_co.paa"
//		"\FRL_A10\data\winter\a10_01_co_winter.paa",
//		"\FRL_A10\data\winter\a10_02_co_winter.paa"
		};
	};
	
	class TU_A10A_CAS_W: TU_A10A_CAS {
//type changes
		vehicleClass = "TU_USAF_W";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {
//		"\FRL_A10\data\black\a10_01_co_black.paa",
//		"\FRL_A10\data\black\a10_02_co_black.paa",
//		"\FRL_A10\data\desert\a10_01_co_desert.paa",
//		"\FRL_A10\data\desert\a10_02_co_desert.paa"
		"\FRL_A10\data\green\a10_01_co_green.paa",
		"\FRL_A10\data\green\a10_02_co_green.paa"
//		"\FRL_A10\data\grey\a10_01_co.paa",
//		"\FRL_A10\data\grey\a10_02_co.paa"
//		"\FRL_A10\data\winter\a10_01_co_winter.paa",
//		"\FRL_A10\data\winter\a10_02_co_winter.paa"
		};
	};
	
	class TU_A10A_HCAS_W: TU_A10A_HCAS {
//type changes
		vehicleClass = "TU_USAF_W";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {
//		"\FRL_A10\data\black\a10_01_co_black.paa",
//		"\FRL_A10\data\black\a10_02_co_black.paa",
//		"\FRL_A10\data\desert\a10_01_co_desert.paa",
//		"\FRL_A10\data\desert\a10_02_co_desert.paa"
		"\FRL_A10\data\green\a10_01_co_green.paa",
		"\FRL_A10\data\green\a10_02_co_green.paa"
//		"\FRL_A10\data\grey\a10_01_co.paa",
//		"\FRL_A10\data\grey\a10_02_co.paa"
//		"\FRL_A10\data\winter\a10_01_co_winter.paa",
//		"\FRL_A10\data\winter\a10_02_co_winter.paa"
		};
	};
	
	class TU_A10A_CAP_W: TU_A10A_CAP {
//type changes
		vehicleClass = "TU_USAF_W";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {
//		"\FRL_A10\data\black\a10_01_co_black.paa",
//		"\FRL_A10\data\black\a10_02_co_black.paa",
//		"\FRL_A10\data\desert\a10_01_co_desert.paa",
//		"\FRL_A10\data\desert\a10_02_co_desert.paa"
		"\FRL_A10\data\green\a10_01_co_green.paa",
		"\FRL_A10\data\green\a10_02_co_green.paa"
//		"\FRL_A10\data\grey\a10_01_co.paa",
//		"\FRL_A10\data\grey\a10_02_co.paa"
//		"\FRL_A10\data\winter\a10_01_co_winter.paa",
//		"\FRL_A10\data\winter\a10_02_co_winter.paa"
		};
	};
	
	class PlaneWreck;
	
	class TU_A10Wreck: PlaneWreck {
		scope = 1;
		class Armory
		{
			disabled = 1;
		};
		model = "\FRL_A10\FRL_A10Wreck.p3d";
		typicalCargo[] = {};
		irTarget = 0;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		transportSoldier = 1;
		class Eventhandlers{};
	};
	
	class F35_base: Plane {
		class NewTurret;
		class ViewPilot;
		class EventHandlers;
	};
	
	class F35B: F35_base {	
		irScanGround = 1;
		irscanrangemax = 10000;
		irscantoeyefactor = 2.2;
		vehicleclass = "TU_USMC_AIR";
//type changes
		elevatorsensitivity = 0.8;
		aileronsensitivity = 0.9;
		displayName = "F-35B Lightning II (GBU)";
		weapons[] = {"GAU12", "TU_BombLauncher_DB", "SidewinderLaucher", "CMFlareLauncher"};
		vtol = 1;
		magazines[] = {
		"300Rnd_25mm_GAU12",
//outer bay
		"TU_2Rnd_GBU12",
//inner bay
		"TU_2Rnd_Sidewinder",
//TIER2 MERx4 (SDB)
//body_outerx8
		"TU_8Rnd_Empty",
//INVISIBLE		
		"120Rnd_CMFlare_Chaff_Magazine"};
		hiddenSelections[] = {"camo1"};
//		hiddenSelectionsTextures[] = {"\ca\air2\f35b\data\f35_co.paa"};
		hiddenSelectionsTextures[] = {"\FRL_F35B\data\jf_dark_co.paa"};
//		hiddenSelectionsTextures[] = {"\FRL_F35B\data\jf_light_co.paa"};
//		hiddenSelectionsTextures[] = {"\FRL_F35B\data\f35_RAF_co.paa"};
	//standard stuff
		model = "\FRL_F35B\FRL_f35b.p3d";
		memoryPointLRocket = "Rockets_1";
		memoryPointRRocket = "Rockets_2";
		memoryPointLMissile = "Missile_1";
		memoryPointRMissile = "Missile_2";
		
		class AnimationSources
		{
			class vtol
			{
				source = "user";
				animPeriod = 2.5;
			};
			class weaponbay
			{
				source = "User";
				animPeriod = 0.1; //2;
			};
			class Hatch_Weaponbay_1_1
			{
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			class Hatch_Weaponbay_1_2: Hatch_Weaponbay_1_1{};
			class Hatch_Weaponbay_1_3: Hatch_Weaponbay_1_1{};
			class Hatch_Weaponbay_1_4: Hatch_Weaponbay_1_1{};
		};
		
		class Library
		{
			libTextDesc = "F-35/B Lightning II in Vertical Take-Off and Landing mode (VTOL). 4 internal body weapon-bays and no additional wing pylons.";
		};
		class MFD {
			class AirplaneHUD {
				borderbottom = 0;
				borderleft = 0;
				borderright = 0;
				bordertop = 0;
				bottomleft = "HUD LD";
				color[] = {0, 1, 0, 0.1};
				helmetdown[] = {0, -0.05, 0};
				helmetmounteddisplay = 1;
				helmetposition[] = {-0.025, 0.025, 0.1};
				helmetright[] = {0.05, 0, 0};
				topleft = "HUD LH";
				topright = "HUD PH";
				class Pos10Vector {
					pos0[] = {0.5, 0.5};
					pos10[] = {0.85, 0.85};
					type = "vector";
				};
				class Bones {
					class PlaneW {
						pos[] = {0.5, 0.57};
						type = "fixed";
					};
					class WeaponAim: Pos10Vector {
						source = "weapon";
					};
					class bombAim: Pos10Vector {
						pos0[] = {0.5, 0.6};
						source = "weapon";
					};
					class GunnerAim: Pos10Vector {
						pos0[] = {0, -0.0025};
						pos10[] = {0.01, 0.0025};
						source = "weapon";
					};
					class Target: Pos10Vector {
						source = "target";
					};
					class Velocity: Pos10Vector {
						pos0[] = {0.5, 0.5};
						pos10[] = {0.85, 0.85};
						source = "velocity";
						type = "vector";
					};
					class ILS_H {
						pos0[] = {0.5, 0.5};
						pos3[] = {0.605, 0.5};
						type = "ils";
					};
					class ILS_W: ILS_H {
						pos3[] = {0.5, 0.605};
					};
					class Level0: Pos10Vector {
						angle = 0;
						pos0[] = {0.5, 0.57};
						pos10[] = {0.85, 0.92};
						type = "horizon";
					};
					class LevelP10: Level0 {
						angle = 10;
					};
					class LevelM10: Level0 {
						angle = -10;
					};
					class LevelP20: Level0 {
						angle = 20;
					};
					class LevelM20: Level0 {
						angle = -20;
					};
					class LevelP30: Level0 {
						angle = 30;
					};
					class LevelM30: Level0 {
						angle = -30;
					};
					class LevelP40: Level0 {
						angle = 40;
					};
					class LevelM40: Level0 {
						angle = -40;
					};
					class LevelP50: Level0 {
						angle = 50;
					};
					class LevelM50: Level0 {
						angle = -50;
					};
					class LevelP60: Level0 {
						angle = 60;
					};
					class LevelM60: Level0 {
						angle = -60;
					};
					class LevelP70: Level0 {
						angle = 70;
					};
					class LevelM70: Level0 {
						angle = -70;
					};
					class LevelP80: Level0 {
						angle = 80;
					};
					class LevelM80: Level0 {
						angle = -80;
					};
				};
				class Draw {
					alpha = 0.6;
					color[] = {0, 0.5, 0.05};
					condition = "on";
					class PlaneHeading {
						clipbr[] = {1, 0};
						cliptl[] = {0, 1};
						points[] = {{"Velocity", {0, -0.02}, 1}, {"Velocity", {0.014, -0.014}, 1}, {"Velocity", {"+(0.02)", 0}, 1}, {"Velocity", {0.014, 0.014}, 1}, {"Velocity", {0, 0.02}, 1}, {"Velocity", {-0.014, 0.014}, 1}, {"Velocity", {"-(0.02)", 0}, 1}, {"Velocity", {-0.014, -0.014}, 1}, {"Velocity", {0, -0.02}, 1}, {}, {"Velocity", {0.04, 0}, 1}, {"Velocity", {0.02, 0}, 1}, {}, {"Velocity", {-0.04, 0}, 1}, {"Velocity", {-0.02, 0}, 1}, {}, {"Velocity", {0, -0.04}, 1}, {"Velocity", {0, -0.02}, 1}, {}};
						type = "line";
						width = 4;
					};
					class Static {
						clipbr[] = {1, 0};
						cliptl[] = {0, 0.1};
						points[] = {{{0.79, 0.52}, 1}, {{0.81, 0.5}, 1}, {{0.79, 0.48}, 1}, {}, {{0.52, 0.14}, 1}, {{0.5, 0.12}, 1}, {{0.48, 0.14}, 1}, {}};
						type = "line";
						width = 4;
					};
					class Horizont {
						clipbr[] = {1, 1};
						cliptl[] = {0, 0};
						class Dimmed {
							class Level0 {
								points[] = {{"Level0", {-0.2, 0}, 1}, {"Level0", {-0.05, 0}, 1}, {}, {"Level0", {0.05, 0}, 1}, {"Level0", {0.2, 0}, 1}};
								type = "line";
							};
							class VALM_1_0 {
								align = "left";
								down[] = {"Level0", {-0.23, 0.025}, 1};
								pos[] = {"Level0", {-0.23, -0.025}, 1};
								right[] = {"Level0", {-0.13, -0.025}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = 0;
								type = "text";
							};
							class VALM_2_0: VALM_1_0 {
								align = "right";
								down[] = {"Level0", {0.22, 0.025}, 1};
								pos[] = {"Level0", {0.22, -0.025}, 1};
								right[] = {"Level0", {0.32, -0.025}, 1};
							};
							class LevelM10: Level0 {
								points[] = {{"LevelM10", {-0.2, -0.03}, 1}, {"LevelM10", {-0.2, 0}, 1}, {"LevelM10", {-0.15, 0}, 1}, {}, {"LevelM10", {-0.1, 0}, 1}, {"LevelM10", {-0.05, 0}, 1}, {}, {"LevelM10", {0.05, 0}, 1}, {"LevelM10", {0.1, 0}, 1}, {}, {"LevelM10", {0.15, 0}, 1}, {"LevelM10", {0.2, 0}, 1}, {"LevelM10", {0.2, -0.03}, 1}};
								type = "line";
							};
							class VALM_1_10 {
								align = "left";
								down[] = {"LevelM10", {-0.23, -0.035}, 1};
								pos[] = {"LevelM10", {-0.23, -0.085}, 1};
								right[] = {"LevelM10", {-0.13, -0.085}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = -10;
								type = "text";
							};
							class VALM_2_10: VALM_1_10 {
								align = "right";
								down[] = {"LevelM10", {0.22, -0.035}, 1};
								pos[] = {"LevelM10", {0.22, -0.085}, 1};
								right[] = {"LevelM10", {0.32, -0.085}, 1};
							};
							class LevelP10: Level0 {
								points[] = {{"LevelP10", {-0.2, 0.03}, 1}, {"LevelP10", {-0.2, 0}, 1}, {"LevelP10", {-0.05, 0}, 1}, {}, {"LevelP10", {0.05, 0}, 1}, {"LevelP10", {0.2, 0}, 1}, {"LevelP10", {0.2, 0.03}, 1}};
								type = "line";
							};
							class VALP_1_10 {
								align = "left";
								down[] = {"LevelP10", {-0.23, 0.085}, 1};
								pos[] = {"LevelP10", {-0.23, 0.035}, 1};
								right[] = {"LevelP10", {-0.13, 0.035}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = 10;
								type = "text";
							};
							class VALP_2_10: VALP_1_10 {
								align = "right";
								down[] = {"LevelP10", {0.22, 0.085}, 1};
								pos[] = {"LevelP10", {0.22, 0.035}, 1};
								right[] = {"LevelP10", {0.32, 0.035}, 1};
							};
							class LevelM20: Level0 {
								points[] = {{"LevelM20", {-0.2, -0.03}, 1}, {"LevelM20", {-0.2, 0}, 1}, {"LevelM20", {-0.15, 0}, 1}, {}, {"LevelM20", {-0.1, 0}, 1}, {"LevelM20", {-0.05, 0}, 1}, {}, {"LevelM20", {0.05, 0}, 1}, {"LevelM20", {0.1, 0}, 1}, {}, {"LevelM20", {0.15, 0}, 1}, {"LevelM20", {0.2, 0}, 1}, {"LevelM20", {0.2, -0.03}, 1}};
								type = "line";
							};
							class VALM_1_20 {
								align = "left";
								down[] = {"LevelM20", {-0.23, -0.035}, 1};
								pos[] = {"LevelM20", {-0.23, -0.085}, 1};
								right[] = {"LevelM20", {-0.13, -0.085}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = -20;
								type = "text";
							};
							class VALM_2_20: VALM_1_20 {
								align = "right";
								down[] = {"LevelM20", {0.22, -0.035}, 1};
								pos[] = {"LevelM20", {0.22, -0.085}, 1};
								right[] = {"LevelM20", {0.32, -0.085}, 1};
							};
							class LevelP20: Level0 {
								points[] = {{"LevelP20", {-0.2, 0.03}, 1}, {"LevelP20", {-0.2, 0}, 1}, {"LevelP20", {-0.05, 0}, 1}, {}, {"LevelP20", {0.05, 0}, 1}, {"LevelP20", {0.2, 0}, 1}, {"LevelP20", {0.2, 0.03}, 1}};
								type = "line";
							};
							class VALP_1_20 {
								align = "left";
								down[] = {"LevelP20", {-0.23, 0.085}, 1};
								pos[] = {"LevelP20", {-0.23, 0.035}, 1};
								right[] = {"LevelP20", {-0.13, 0.035}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = 20;
								type = "text";
							};
							class VALP_2_20: VALP_1_20 {
								align = "right";
								down[] = {"LevelP20", {0.22, 0.085}, 1};
								pos[] = {"LevelP20", {0.22, 0.035}, 1};
								right[] = {"LevelP20", {0.32, 0.035}, 1};
							};
							class LevelM30: Level0 {
								points[] = {{"LevelM30", {-0.2, -0.03}, 1}, {"LevelM30", {-0.2, 0}, 1}, {"LevelM30", {-0.15, 0}, 1}, {}, {"LevelM30", {-0.1, 0}, 1}, {"LevelM30", {-0.05, 0}, 1}, {}, {"LevelM30", {0.05, 0}, 1}, {"LevelM30", {0.1, 0}, 1}, {}, {"LevelM30", {0.15, 0}, 1}, {"LevelM30", {0.2, 0}, 1}, {"LevelM30", {0.2, -0.03}, 1}};
								type = "line";
							};
							class VALM_1_30 {
								align = "left";
								down[] = {"LevelM30", {-0.23, -0.035}, 1};
								pos[] = {"LevelM30", {-0.23, -0.085}, 1};
								right[] = {"LevelM30", {-0.13, -0.085}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = -30;
								type = "text";
							};
							class VALM_2_30: VALM_1_30 {
								align = "right";
								down[] = {"LevelM30", {0.22, -0.035}, 1};
								pos[] = {"LevelM30", {0.22, -0.085}, 1};
								right[] = {"LevelM30", {0.32, -0.085}, 1};
							};
							class LevelP30: Level0 {
								points[] = {{"LevelP30", {-0.2, 0.03}, 1}, {"LevelP30", {-0.2, 0}, 1}, {"LevelP30", {-0.05, 0}, 1}, {}, {"LevelP30", {0.05, 0}, 1}, {"LevelP30", {0.2, 0}, 1}, {"LevelP30", {0.2, 0.03}, 1}};
								type = "line";
							};
							class VALP_1_30 {
								align = "left";
								down[] = {"LevelP30", {-0.23, 0.085}, 1};
								pos[] = {"LevelP30", {-0.23, 0.035}, 1};
								right[] = {"LevelP30", {-0.13, 0.035}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = 30;
								type = "text";
							};
							class VALP_2_30: VALP_1_30 {
								align = "right";
								down[] = {"LevelP30", {0.22, 0.085}, 1};
								pos[] = {"LevelP30", {0.22, 0.035}, 1};
								right[] = {"LevelP30", {0.32, 0.035}, 1};
							};
							class LevelM40: Level0 {
								points[] = {{"LevelM40", {-0.2, -0.03}, 1}, {"LevelM40", {-0.2, 0}, 1}, {"LevelM40", {-0.15, 0}, 1}, {}, {"LevelM40", {-0.1, 0}, 1}, {"LevelM40", {-0.05, 0}, 1}, {}, {"LevelM40", {0.05, 0}, 1}, {"LevelM40", {0.1, 0}, 1}, {}, {"LevelM40", {0.15, 0}, 1}, {"LevelM40", {0.2, 0}, 1}, {"LevelM40", {0.2, -0.03}, 1}};
								type = "line";
							};
							class VALM_1_40 {
								align = "left";
								down[] = {"LevelM40", {-0.23, -0.035}, 1};
								pos[] = {"LevelM40", {-0.23, -0.085}, 1};
								right[] = {"LevelM40", {-0.13, -0.085}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = -40;
								type = "text";
							};
							class VALM_2_40: VALM_1_40 {
								align = "right";
								down[] = {"LevelM40", {0.22, -0.035}, 1};
								pos[] = {"LevelM40", {0.22, -0.085}, 1};
								right[] = {"LevelM40", {0.32, -0.085}, 1};
							};
							class LevelP40: Level0 {
								points[] = {{"LevelP40", {-0.2, 0.03}, 1}, {"LevelP40", {-0.2, 0}, 1}, {"LevelP40", {-0.05, 0}, 1}, {}, {"LevelP40", {0.05, 0}, 1}, {"LevelP40", {0.2, 0}, 1}, {"LevelP40", {0.2, 0.03}, 1}};
								type = "line";
							};
							class VALP_1_40 {
								align = "left";
								down[] = {"LevelP40", {-0.23, 0.085}, 1};
								pos[] = {"LevelP40", {-0.23, 0.035}, 1};
								right[] = {"LevelP40", {-0.13, 0.035}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = 40;
								type = "text";
							};
							class VALP_2_40: VALP_1_40 {
								align = "right";
								down[] = {"LevelP40", {0.22, 0.085}, 1};
								pos[] = {"LevelP40", {0.22, 0.035}, 1};
								right[] = {"LevelP40", {0.32, 0.035}, 1};
							};
							class LevelM50: Level0 {
								points[] = {{"LevelM50", {-0.2, -0.03}, 1}, {"LevelM50", {-0.2, 0}, 1}, {"LevelM50", {-0.15, 0}, 1}, {}, {"LevelM50", {-0.1, 0}, 1}, {"LevelM50", {-0.05, 0}, 1}, {}, {"LevelM50", {0.05, 0}, 1}, {"LevelM50", {0.1, 0}, 1}, {}, {"LevelM50", {0.15, 0}, 1}, {"LevelM50", {0.2, 0}, 1}, {"LevelM50", {0.2, -0.03}, 1}};
								type = "line";
							};
							class VALM_1_50 {
								align = "left";
								down[] = {"LevelM50", {-0.23, -0.035}, 1};
								pos[] = {"LevelM50", {-0.23, -0.085}, 1};
								right[] = {"LevelM50", {-0.13, -0.085}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = -50;
								type = "text";
							};
							class VALM_2_50: VALM_1_50 {
								align = "right";
								down[] = {"LevelM50", {0.22, -0.035}, 1};
								pos[] = {"LevelM50", {0.22, -0.085}, 1};
								right[] = {"LevelM50", {0.32, -0.085}, 1};
							};
							class LevelP50: Level0 {
								points[] = {{"LevelP50", {-0.2, 0.03}, 1}, {"LevelP50", {-0.2, 0}, 1}, {"LevelP50", {-0.05, 0}, 1}, {}, {"LevelP50", {0.05, 0}, 1}, {"LevelP50", {0.2, 0}, 1}, {"LevelP50", {0.2, 0.03}, 1}};
								type = "line";
							};
							class VALP_1_50 {
								align = "left";
								down[] = {"LevelP50", {-0.23, 0.085}, 1};
								pos[] = {"LevelP50", {-0.23, 0.035}, 1};
								right[] = {"LevelP50", {-0.13, 0.035}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = 50;
								type = "text";
							};
							class VALP_2_50: VALP_1_50 {
								align = "right";
								down[] = {"LevelP50", {0.22, 0.085}, 1};
								pos[] = {"LevelP50", {0.22, 0.035}, 1};
								right[] = {"LevelP50", {0.32, 0.035}, 1};
							};
							class LevelM60: Level0 {
								points[] = {{"LevelM60", {-0.2, -0.03}, 1}, {"LevelM60", {-0.2, 0}, 1}, {"LevelM60", {-0.15, 0}, 1}, {}, {"LevelM60", {-0.1, 0}, 1}, {"LevelM60", {-0.05, 0}, 1}, {}, {"LevelM60", {0.05, 0}, 1}, {"LevelM60", {0.1, 0}, 1}, {}, {"LevelM60", {0.15, 0}, 1}, {"LevelM60", {0.2, 0}, 1}, {"LevelM60", {0.2, -0.03}, 1}};
								type = "line";
							};
							class VALM_1_60 {
								align = "left";
								down[] = {"LevelM60", {-0.23, -0.035}, 1};
								pos[] = {"LevelM60", {-0.23, -0.085}, 1};
								right[] = {"LevelM60", {-0.13, -0.085}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = -60;
								type = "text";
							};
							class VALM_2_60: VALM_1_60 {
								align = "right";
								down[] = {"LevelM60", {0.22, -0.035}, 1};
								pos[] = {"LevelM60", {0.22, -0.085}, 1};
								right[] = {"LevelM60", {0.32, -0.085}, 1};
							};
							class LevelP60: Level0 {
								points[] = {{"LevelP60", {-0.2, 0.03}, 1}, {"LevelP60", {-0.2, 0}, 1}, {"LevelP60", {-0.05, 0}, 1}, {}, {"LevelP60", {0.05, 0}, 1}, {"LevelP60", {0.2, 0}, 1}, {"LevelP60", {0.2, 0.03}, 1}};
								type = "line";
							};
							class VALP_1_60 {
								align = "left";
								down[] = {"LevelP60", {-0.23, 0.085}, 1};
								pos[] = {"LevelP60", {-0.23, 0.035}, 1};
								right[] = {"LevelP60", {-0.13, 0.035}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = 60;
								type = "text";
							};
							class VALP_2_60: VALP_1_60 {
								align = "right";
								down[] = {"LevelP60", {0.22, 0.085}, 1};
								pos[] = {"LevelP60", {0.22, 0.035}, 1};
								right[] = {"LevelP60", {0.32, 0.035}, 1};
							};
							class LevelM70: Level0 {
								points[] = {{"LevelM70", {-0.2, -0.03}, 1}, {"LevelM70", {-0.2, 0}, 1}, {"LevelM70", {-0.15, 0}, 1}, {}, {"LevelM70", {-0.1, 0}, 1}, {"LevelM70", {-0.05, 0}, 1}, {}, {"LevelM70", {0.05, 0}, 1}, {"LevelM70", {0.1, 0}, 1}, {}, {"LevelM70", {0.15, 0}, 1}, {"LevelM70", {0.2, 0}, 1}, {"LevelM70", {0.2, -0.03}, 1}};
								type = "line";
							};
							class VALM_1_70 {
								align = "left";
								down[] = {"LevelM70", {-0.23, -0.035}, 1};
								pos[] = {"LevelM70", {-0.23, -0.085}, 1};
								right[] = {"LevelM70", {-0.13, -0.085}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = -70;
								type = "text";
							};
							class VALM_2_70: VALM_1_70 {
								align = "right";
								down[] = {"LevelM70", {0.22, -0.035}, 1};
								pos[] = {"LevelM70", {0.22, -0.085}, 1};
								right[] = {"LevelM70", {0.32, -0.085}, 1};
							};
							class LevelP70: Level0 {
								points[] = {{"LevelP70", {-0.2, 0.03}, 1}, {"LevelP70", {-0.2, 0}, 1}, {"LevelP70", {-0.05, 0}, 1}, {}, {"LevelP70", {0.05, 0}, 1}, {"LevelP70", {0.2, 0}, 1}, {"LevelP70", {0.2, 0.03}, 1}};
								type = "line";
							};
							class VALP_1_70 {
								align = "left";
								down[] = {"LevelP70", {-0.23, 0.085}, 1};
								pos[] = {"LevelP70", {-0.23, 0.035}, 1};
								right[] = {"LevelP70", {-0.13, 0.035}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = 70;
								type = "text";
							};
							class VALP_2_70: VALP_1_70 {
								align = "right";
								down[] = {"LevelP70", {0.22, 0.085}, 1};
								pos[] = {"LevelP70", {0.22, 0.035}, 1};
								right[] = {"LevelP70", {0.32, 0.035}, 1};
							};
							class LevelM80: Level0 {
								points[] = {{"LevelM80", {-0.2, -0.03}, 1}, {"LevelM80", {-0.2, 0}, 1}, {"LevelM80", {-0.15, 0}, 1}, {}, {"LevelM80", {-0.1, 0}, 1}, {"LevelM80", {-0.05, 0}, 1}, {}, {"LevelM80", {0.05, 0}, 1}, {"LevelM80", {0.1, 0}, 1}, {}, {"LevelM80", {0.15, 0}, 1}, {"LevelM80", {0.2, 0}, 1}, {"LevelM80", {0.2, -0.03}, 1}};
								type = "line";
							};
							class VALM_1_80 {
								align = "left";
								down[] = {"LevelM80", {-0.23, -0.035}, 1};
								pos[] = {"LevelM80", {-0.23, -0.085}, 1};
								right[] = {"LevelM80", {-0.13, -0.085}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = -80;
								type = "text";
							};
							class VALM_2_80: VALM_1_80 {
								align = "right";
								down[] = {"LevelM80", {0.22, -0.035}, 1};
								pos[] = {"LevelM80", {0.22, -0.085}, 1};
								right[] = {"LevelM80", {0.32, -0.085}, 1};
							};
							class LevelP80: Level0 {
								points[] = {{"LevelP80", {-0.2, 0.03}, 1}, {"LevelP80", {-0.2, 0}, 1}, {"LevelP80", {-0.05, 0}, 1}, {}, {"LevelP80", {0.05, 0}, 1}, {"LevelP80", {0.2, 0}, 1}, {"LevelP80", {0.2, 0.03}, 1}};
								type = "line";
							};
							class VALP_1_80 {
								align = "left";
								down[] = {"LevelP80", {-0.23, 0.085}, 1};
								pos[] = {"LevelP80", {-0.23, 0.035}, 1};
								right[] = {"LevelP80", {-0.13, 0.035}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = 80;
								type = "text";
							};
							class VALP_2_80: VALP_1_80 {
								align = "right";
								down[] = {"LevelP80", {0.22, 0.085}, 1};
								pos[] = {"LevelP80", {0.22, 0.035}, 1};
								right[] = {"LevelP80", {0.32, 0.035}, 1};
							};
						};
					};
					class MGun {
						condition = "mgun";
						class Circle {
							points[] = {{"WeaponAim", {0.05, 0}, 1}, {"WeaponAim", {0.015, 0}, 1}, {}, {"WeaponAim", {0, 0.05}, 1}, {"WeaponAim", {0, 0.015}, 1}, {}, {"WeaponAim", {-0.05, 0}, 1}, {"WeaponAim", {-0.015, 0}, 1}, {}, {"WeaponAim", {0, -0.05}, 1}, {"WeaponAim", {0, -0.015}, 1}, {}};
							type = "line";
							width = 4;
						};
					};
					class Bomb {
						condition = "bomb";
						class Circle {
							points[] = {{"bombAim", {0, -0.1}, 1}, {"bombAim", {0.05, -0.087}, 1}, {"bombAim", {0.087, -0.05}, 1}, {"bombAim", {0.1, 0}, 1}, {"bombAim", {0.087, 0.05}, 1}, {"bombAim", {0.05, 0.087}, 1}, {"bombAim", {0, 0.1}, 1}, {"bombAim", {-0.05, 0.087}, 1}, {"bombAim", {-0.087, 0.05}, 1}, {"bombAim", {-0.1, 0}, 1}, {"bombAim", {-0.087, -0.05}, 1}, {"bombAim", {-0.05, -0.087}, 1}, {"bombAim", {0, -0.1}, 1}, {}};
							type = "line";
							width = 4;
						};
					};
					class AAMissile {
						condition = "AAmissile";
						class Circle {
							points[] = {{"WeaponAim", {0, -0.25}, 1}, {"WeaponAim", {0.125, -0.2175}, 1}, {"WeaponAim", {0.2175, -0.125}, 1}, {"WeaponAim", {0.25, 0}, 1}, {"WeaponAim", {0.2175, 0.125}, 1}, {"WeaponAim", {0.125, 0.2175}, 1}, {"WeaponAim", {0, 0.25}, 1}, {"WeaponAim", {-0.125, 0.2175}, 1}, {"WeaponAim", {-0.2175, 0.125}, 1}, {"WeaponAim", {-0.25, 0}, 1}, {"WeaponAim", {-0.2175, -0.125}, 1}, {"WeaponAim", {-0.125, -0.2175}, 1}, {"WeaponAim", {0, -0.25}, 1}, {}};
							type = "line";
							width = 4;
						};
					};
					class ATMissile {
						condition = "ATmissile";
						class Circle {
							points[] = {{"WeaponAim", {-0.15, -0.15}, 1}, {"WeaponAim", {-0.15, "-0.15+0.02"}, 1}, {}, {"WeaponAim", {-0.15, 0.15}, 1}, {"WeaponAim", {-0.15, "+0.15-0.02"}, 1}, {}, {"WeaponAim", {0.15, -0.15}, 1}, {"WeaponAim", {0.15, "-0.15+0.02"}, 1}, {}, {"WeaponAim", {0.15, 0.15}, 1}, {"WeaponAim", {0.15, "+0.15-0.02"}, 1}, {}, {"WeaponAim", {-0.15, -0.15}, 1}, {"WeaponAim", {"-0.15+0.02", -0.15}, 1}, {}, {"WeaponAim", {-0.15, 0.15}, 1}, {"WeaponAim", {"-0.15+0.02", 0.15}, 1}, {}, {"WeaponAim", {0.15, -0.15}, 1}, {"WeaponAim", {"0.15-0.02", -0.15}, 1}, {}, {"WeaponAim", {0.15, 0.15}, 1}, {"WeaponAim", {"0.15-0.02", 0.15}, 1}, {}};
							type = "line";
							width = 4;
						};
					};
					class Rockets {
						condition = "Rocket";
						class Circle {
							points[] = {{"WeaponAim", {-0.25, -0.25}, 1}, {"WeaponAim", {-0.25, "-0.25+0.05"}, 1}, {}, {"WeaponAim", {-0.25, 0.25}, 1}, {"WeaponAim", {-0.25, "+0.25-0.05"}, 1}, {}, {"WeaponAim", {0.25, -0.25}, 1}, {"WeaponAim", {0.25, "-0.25+0.05"}, 1}, {}, {"WeaponAim", {0.25, 0.25}, 1}, {"WeaponAim", {0.25, "+0.25-0.05"}, 1}, {}, {"WeaponAim", {-0.25, -0.25}, 1}, {"WeaponAim", {"-0.25+0.05", -0.25}, 1}, {}, {"WeaponAim", {-0.25, 0.25}, 1}, {"WeaponAim", {"-0.25+0.05", 0.25}, 1}, {}, {"WeaponAim", {0.25, -0.25}, 1}, {"WeaponAim", {"0.25-0.05", -0.25}, 1}, {}, {"WeaponAim", {0.25, 0.25}, 1}, {"WeaponAim", {"0.25-0.05", 0.25}, 1}, {}};
							type = "line";
							width = 4;
						};
					};
					class SpeedNumber {
						align = "right";
						down[] = {{0.06, 0.52}, 1};
						pos[] = {{0.06, 0.47}, 1};
						right[] = {{"0.14-0.02", 0.47}, 1};
						scale = 1;
						source = "speed";
						sourcescale = 3.6;
						type = "text";
					};
					class AltNumber: SpeedNumber {
						down[] = {{"0.86-0.15", 0.52}, 1};
						pos[] = {{"0.86-0.15", 0.47}, 1};
						right[] = {{"0.94-0.15-0.02", 0.47}, 1};
						source = "altitudeAGL";
						sourcescale = 1;
					};
					class AltScale {
						align = "right";
						bottom = 0.2;
						center = 0.5;
						down[] = {0.86, 0.87};
						horizontal = 0;
						linexleft = 0.825;
						linexleftmajor = 0.825;
						lineyright = 0.835;
						lineyrightmajor = 0.845;
						majorlineeach = 5;
						max = "none";
						min = "none";
						numbereach = 5;
						pos[] = {0.86, 0.82};
						right[] = {0.92, 0.82};
						scale = 1;
						source = "altitudeAGL";
						sourcescale = 1;
						step = 20;
						stepsize = 0.0325;
						top = 0.85;
						type = "scale";
						width = 4;
					};
					class weapons {
						align = "right";
						down[] = {{0.1, 0.92}, 1};
						pos[] = {{0.1, 0.88}, 1};
						right[] = {{"0.16-0.02", 0.88}, 1};
						scale = 0.5;
						source = "weapon";
						sourcescale = 1;
						type = "text";
					};
					class ammo {
						align = "right";
						down[] = {{0.1, 0.97}, 1};
						pos[] = {{0.1, 0.93}, 1};
						right[] = {{"0.16-0.02", 0.93}, 1};
						scale = 0.5;
						source = "ammo";
						sourcescale = 1;
						type = "text";
					};
					class HeadingScale {
						align = "center";
						bottom = 0.7;
						center = 0.5;
						down[] = {"0.32-0.01", "0.04+0.05"};
						horizontal = 1;
						linexleft = "0.06+0.05";
						linexleftmajor = "0.07+0.05";
						lineyright = "0.05+0.05";
						lineyrightmajor = "0.04+0.05";
						majorlineeach = 3;
						max = "none";
						min = "none";
						numbereach = 3;
						pos[] = {"0.32-0.01", "0.0+0.05"};
						right[] = {"0.38-0.01", "0.0+0.05"};
						scale = 1;
						source = "Heading";
						sourcescale = 1;
						step = 10;
						stepsize = "(0.70- 0.3)/15";
						top = 0.3;
						type = "scale";
						width = 4;
					};
				};
			};
		};
	};
	
	class TU_F35B_CAP: F35B {
		displayName = "F-35B Lightning II (CAP)";
		weapons[] = {"GAU12", "AIM120Laucher", "SidewinderLaucher", "CMFlareLauncher"};
		magazines[] = {
		"300Rnd_25mm_GAU12",
//outer bay
		"TU_2Rnd_AIM120",
//inner bay
		"TU_2Rnd_Sidewinder",
//TIER2 MERx4 (SDB)
//body_outerx8
		"TU_8Rnd_Empty",
//INVISIBLE		
		"120Rnd_CMFlare_Chaff_Magazine"};
	};
	
	class TU_F35B_HGBU: F35B {
		displayName = "F-35B Lightning II (HGBU)";
		weapons[] = {"GAU12", "TU_GBU24_BombLauncher_DB", "SidewinderLaucher", "CMFlareLauncher"};
		magazines[] = {
		"300Rnd_25mm_GAU12",
//outer bay
		"TU_2Rnd_GBU24",
//inner bay
		"TU_2Rnd_Sidewinder",
//TIER2 MERx4 (SDB)
//body_outerx8
		"TU_8Rnd_Empty",
//INVISIBLE		
		"120Rnd_CMFlare_Chaff_Magazine"};
	};
	
	class TU_F35B_BAF: F35B {	
		vehicleclass = "TU_RAF";
		hiddenSelections[] = {"camo1"};
//		hiddenSelectionsTextures[] = {"\ca\air2\f35b\data\f35_co.paa"};
//		hiddenSelectionsTextures[] = {"\FRL_F35B\data\jf_dark_co.paa"};
//		hiddenSelectionsTextures[] = {"\FRL_F35B\data\jf_light_co.paa"};
//		hiddenSelectionsTextures[] = {"\FRL_F35B\data\f35_RAF_co.paa"};
		hiddenSelectionsTextures[] = {"\FRL_F35B\data\jf8_co.paa"};
		faction = "BIS_BAF";
		crew = "BAF_Pilot_MTP";
		typicalCargo[] = {"BAF_Pilot_MTP"};
	};
	
	class TU_F35B_CAP_BAF: TU_F35B_CAP {	
		vehicleclass = "TU_RAF";
		hiddenSelections[] = {"camo1"};
//		hiddenSelectionsTextures[] = {"\ca\air2\f35b\data\f35_co.paa"};
//		hiddenSelectionsTextures[] = {"\FRL_F35B\data\jf_dark_co.paa"};
//		hiddenSelectionsTextures[] = {"\FRL_F35B\data\jf_light_co.paa"};
//		hiddenSelectionsTextures[] = {"\FRL_F35B\data\f35_RAF_co.paa"};
		hiddenSelectionsTextures[] = {"\FRL_F35B\data\jf8_co.paa"};
		faction = "BIS_BAF";
		crew = "BAF_Pilot_MTP";
		typicalCargo[] = {"BAF_Pilot_MTP"};
	};
	
	class TU_F35B_HGBU_BAF: TU_F35B_HGBU {	
		vehicleclass = "TU_RAF";
		hiddenSelections[] = {"camo1"};
//		hiddenSelectionsTextures[] = {"\ca\air2\f35b\data\f35_co.paa"};
//		hiddenSelectionsTextures[] = {"\FRL_F35B\data\jf_dark_co.paa"};
//		hiddenSelectionsTextures[] = {"\FRL_F35B\data\jf_light_co.paa"};
//		hiddenSelectionsTextures[] = {"\FRL_F35B\data\f35_RAF_co.paa"};
		hiddenSelectionsTextures[] = {"\FRL_F35B\data\jf8_co.paa"};
		faction = "BIS_BAF";
		crew = "BAF_Pilot_MTP";
		typicalCargo[] = {"BAF_Pilot_MTP"};
	};
	
	class TU_F35A_CAP: F35B {	
		faction = "ACE_USAF";
		vehicleclass = "TU_USAF";
//type changes
		elevatorsensitivity = 0.7;
		aileronsensitivity = 0.8;
		incommingmissliedetectionsystem = 8;
		displayName = "F-35A Lightning (CAP)";
		weapons[] = {"GAU12","AIM120Laucher","SidewinderLaucher","CMFlareLauncher"};
		magazines[] = {
		"300Rnd_25mm_GAU12",
//station 1
//station 2
//station 3
		"TU_6Rnd_Sidewinder",
//station 4
//station 5
		"TU_4Rnd_AIM120",
//TIER2 MERx2 (JDAM / JAGM)
//outerx4
		"TU_52Rnd_Empty",
//innerx4
//TIER2 MERx3 (brimstone)
//outerx6
//innerx6
//TIER2 MERx4 (SDB)
//outerx8
//innerx8
//body_frontx4
//body_rearx4
//INVISIBLE		
		"120Rnd_CMFlare_Chaff_Magazine"};
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\ca\air2\f35b\data\f35_co.paa"};
//		hiddenSelectionsTextures[] = {"\FRL_F35B\data\jf_dark_co.paa"};
//		hiddenSelectionsTextures[] = {"\FRL_F35B\data\jf_light_co.paa"};
//		hiddenSelectionsTextures[] = {"\FRL_F35B\data\f35_RAF_co.paa"};
//		hiddenSelectionsTextures[] = {"\FRL_F35B\data\jf8_co.paa"};
	//standard stuff
		model = "\FRL_F35B\FRL_f35a.p3d";
		vtol = 0;
		class Library
		{
			libTextDesc = "F-35/A Lightning II in Conventional Take-Off and Landing mode (CTOL). 6 additional wing pylons, plus 4 internal body weapon-bays";
		};
		class MFD {
			class AirplaneHUD {
				borderbottom = 0;
				borderleft = 0;
				borderright = 0;
				bordertop = 0;
				bottomleft = "HUD LD";
				color[] = {0, 1, 0, 0.1};
				helmetdown[] = {0, -0.05, 0};
				helmetmounteddisplay = 1;
				helmetposition[] = {-0.025, 0.025, 0.1};
				helmetright[] = {0.05, 0, 0};
				topleft = "HUD LH";
				topright = "HUD PH";
				class Pos10Vector {
					pos0[] = {0.5, 0.5};
					pos10[] = {0.85, 0.85};
					type = "vector";
				};
				class Bones {
					class PlaneW {
						pos[] = {0.5, 0.57};
						type = "fixed";
					};
					class WeaponAim: Pos10Vector {
						source = "weapon";
					};
					class bombAim: Pos10Vector {
						pos0[] = {0.5, 0.6};
						source = "weapon";
					};
					class GunnerAim: Pos10Vector {
						pos0[] = {0, -0.0025};
						pos10[] = {0.01, 0.0025};
						source = "weapon";
					};
					class Target: Pos10Vector {
						source = "target";
					};
					class Velocity: Pos10Vector {
						pos0[] = {0.5, 0.5};
						pos10[] = {0.85, 0.85};
						source = "velocity";
						type = "vector";
					};
					class ILS_H {
						pos0[] = {0.5, 0.5};
						pos3[] = {0.605, 0.5};
						type = "ils";
					};
					class ILS_W: ILS_H {
						pos3[] = {0.5, 0.605};
					};
					class Level0: Pos10Vector {
						angle = 0;
						pos0[] = {0.5, 0.57};
						pos10[] = {0.85, 0.92};
						type = "horizon";
					};
					class LevelP10: Level0 {
						angle = 10;
					};
					class LevelM10: Level0 {
						angle = -10;
					};
					class LevelP20: Level0 {
						angle = 20;
					};
					class LevelM20: Level0 {
						angle = -20;
					};
					class LevelP30: Level0 {
						angle = 30;
					};
					class LevelM30: Level0 {
						angle = -30;
					};
					class LevelP40: Level0 {
						angle = 40;
					};
					class LevelM40: Level0 {
						angle = -40;
					};
					class LevelP50: Level0 {
						angle = 50;
					};
					class LevelM50: Level0 {
						angle = -50;
					};
					class LevelP60: Level0 {
						angle = 60;
					};
					class LevelM60: Level0 {
						angle = -60;
					};
					class LevelP70: Level0 {
						angle = 70;
					};
					class LevelM70: Level0 {
						angle = -70;
					};
					class LevelP80: Level0 {
						angle = 80;
					};
					class LevelM80: Level0 {
						angle = -80;
					};
				};
				class Draw {
					alpha = 0.6;
					color[] = {0, 0.5, 0.05};
					condition = "on";
					class PlaneHeading {
						clipbr[] = {1, 0};
						cliptl[] = {0, 1};
						points[] = {{"Velocity", {0, -0.02}, 1}, {"Velocity", {0.014, -0.014}, 1}, {"Velocity", {"+(0.02)", 0}, 1}, {"Velocity", {0.014, 0.014}, 1}, {"Velocity", {0, 0.02}, 1}, {"Velocity", {-0.014, 0.014}, 1}, {"Velocity", {"-(0.02)", 0}, 1}, {"Velocity", {-0.014, -0.014}, 1}, {"Velocity", {0, -0.02}, 1}, {}, {"Velocity", {0.04, 0}, 1}, {"Velocity", {0.02, 0}, 1}, {}, {"Velocity", {-0.04, 0}, 1}, {"Velocity", {-0.02, 0}, 1}, {}, {"Velocity", {0, -0.04}, 1}, {"Velocity", {0, -0.02}, 1}, {}};
						type = "line";
						width = 4;
					};
					class Static {
						clipbr[] = {1, 0};
						cliptl[] = {0, 0.1};
						points[] = {{{0.79, 0.52}, 1}, {{0.81, 0.5}, 1}, {{0.79, 0.48}, 1}, {}, {{0.52, 0.14}, 1}, {{0.5, 0.12}, 1}, {{0.48, 0.14}, 1}, {}};
						type = "line";
						width = 4;
					};
					class Horizont {
						clipbr[] = {1, 1};
						cliptl[] = {0, 0};
						class Dimmed {
							class Level0 {
								points[] = {{"Level0", {-0.2, 0}, 1}, {"Level0", {-0.05, 0}, 1}, {}, {"Level0", {0.05, 0}, 1}, {"Level0", {0.2, 0}, 1}};
								type = "line";
							};
							class VALM_1_0 {
								align = "left";
								down[] = {"Level0", {-0.23, 0.025}, 1};
								pos[] = {"Level0", {-0.23, -0.025}, 1};
								right[] = {"Level0", {-0.13, -0.025}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = 0;
								type = "text";
							};
							class VALM_2_0: VALM_1_0 {
								align = "right";
								down[] = {"Level0", {0.22, 0.025}, 1};
								pos[] = {"Level0", {0.22, -0.025}, 1};
								right[] = {"Level0", {0.32, -0.025}, 1};
							};
							class LevelM10: Level0 {
								points[] = {{"LevelM10", {-0.2, -0.03}, 1}, {"LevelM10", {-0.2, 0}, 1}, {"LevelM10", {-0.15, 0}, 1}, {}, {"LevelM10", {-0.1, 0}, 1}, {"LevelM10", {-0.05, 0}, 1}, {}, {"LevelM10", {0.05, 0}, 1}, {"LevelM10", {0.1, 0}, 1}, {}, {"LevelM10", {0.15, 0}, 1}, {"LevelM10", {0.2, 0}, 1}, {"LevelM10", {0.2, -0.03}, 1}};
								type = "line";
							};
							class VALM_1_10 {
								align = "left";
								down[] = {"LevelM10", {-0.23, -0.035}, 1};
								pos[] = {"LevelM10", {-0.23, -0.085}, 1};
								right[] = {"LevelM10", {-0.13, -0.085}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = -10;
								type = "text";
							};
							class VALM_2_10: VALM_1_10 {
								align = "right";
								down[] = {"LevelM10", {0.22, -0.035}, 1};
								pos[] = {"LevelM10", {0.22, -0.085}, 1};
								right[] = {"LevelM10", {0.32, -0.085}, 1};
							};
							class LevelP10: Level0 {
								points[] = {{"LevelP10", {-0.2, 0.03}, 1}, {"LevelP10", {-0.2, 0}, 1}, {"LevelP10", {-0.05, 0}, 1}, {}, {"LevelP10", {0.05, 0}, 1}, {"LevelP10", {0.2, 0}, 1}, {"LevelP10", {0.2, 0.03}, 1}};
								type = "line";
							};
							class VALP_1_10 {
								align = "left";
								down[] = {"LevelP10", {-0.23, 0.085}, 1};
								pos[] = {"LevelP10", {-0.23, 0.035}, 1};
								right[] = {"LevelP10", {-0.13, 0.035}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = 10;
								type = "text";
							};
							class VALP_2_10: VALP_1_10 {
								align = "right";
								down[] = {"LevelP10", {0.22, 0.085}, 1};
								pos[] = {"LevelP10", {0.22, 0.035}, 1};
								right[] = {"LevelP10", {0.32, 0.035}, 1};
							};
							class LevelM20: Level0 {
								points[] = {{"LevelM20", {-0.2, -0.03}, 1}, {"LevelM20", {-0.2, 0}, 1}, {"LevelM20", {-0.15, 0}, 1}, {}, {"LevelM20", {-0.1, 0}, 1}, {"LevelM20", {-0.05, 0}, 1}, {}, {"LevelM20", {0.05, 0}, 1}, {"LevelM20", {0.1, 0}, 1}, {}, {"LevelM20", {0.15, 0}, 1}, {"LevelM20", {0.2, 0}, 1}, {"LevelM20", {0.2, -0.03}, 1}};
								type = "line";
							};
							class VALM_1_20 {
								align = "left";
								down[] = {"LevelM20", {-0.23, -0.035}, 1};
								pos[] = {"LevelM20", {-0.23, -0.085}, 1};
								right[] = {"LevelM20", {-0.13, -0.085}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = -20;
								type = "text";
							};
							class VALM_2_20: VALM_1_20 {
								align = "right";
								down[] = {"LevelM20", {0.22, -0.035}, 1};
								pos[] = {"LevelM20", {0.22, -0.085}, 1};
								right[] = {"LevelM20", {0.32, -0.085}, 1};
							};
							class LevelP20: Level0 {
								points[] = {{"LevelP20", {-0.2, 0.03}, 1}, {"LevelP20", {-0.2, 0}, 1}, {"LevelP20", {-0.05, 0}, 1}, {}, {"LevelP20", {0.05, 0}, 1}, {"LevelP20", {0.2, 0}, 1}, {"LevelP20", {0.2, 0.03}, 1}};
								type = "line";
							};
							class VALP_1_20 {
								align = "left";
								down[] = {"LevelP20", {-0.23, 0.085}, 1};
								pos[] = {"LevelP20", {-0.23, 0.035}, 1};
								right[] = {"LevelP20", {-0.13, 0.035}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = 20;
								type = "text";
							};
							class VALP_2_20: VALP_1_20 {
								align = "right";
								down[] = {"LevelP20", {0.22, 0.085}, 1};
								pos[] = {"LevelP20", {0.22, 0.035}, 1};
								right[] = {"LevelP20", {0.32, 0.035}, 1};
							};
							class LevelM30: Level0 {
								points[] = {{"LevelM30", {-0.2, -0.03}, 1}, {"LevelM30", {-0.2, 0}, 1}, {"LevelM30", {-0.15, 0}, 1}, {}, {"LevelM30", {-0.1, 0}, 1}, {"LevelM30", {-0.05, 0}, 1}, {}, {"LevelM30", {0.05, 0}, 1}, {"LevelM30", {0.1, 0}, 1}, {}, {"LevelM30", {0.15, 0}, 1}, {"LevelM30", {0.2, 0}, 1}, {"LevelM30", {0.2, -0.03}, 1}};
								type = "line";
							};
							class VALM_1_30 {
								align = "left";
								down[] = {"LevelM30", {-0.23, -0.035}, 1};
								pos[] = {"LevelM30", {-0.23, -0.085}, 1};
								right[] = {"LevelM30", {-0.13, -0.085}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = -30;
								type = "text";
							};
							class VALM_2_30: VALM_1_30 {
								align = "right";
								down[] = {"LevelM30", {0.22, -0.035}, 1};
								pos[] = {"LevelM30", {0.22, -0.085}, 1};
								right[] = {"LevelM30", {0.32, -0.085}, 1};
							};
							class LevelP30: Level0 {
								points[] = {{"LevelP30", {-0.2, 0.03}, 1}, {"LevelP30", {-0.2, 0}, 1}, {"LevelP30", {-0.05, 0}, 1}, {}, {"LevelP30", {0.05, 0}, 1}, {"LevelP30", {0.2, 0}, 1}, {"LevelP30", {0.2, 0.03}, 1}};
								type = "line";
							};
							class VALP_1_30 {
								align = "left";
								down[] = {"LevelP30", {-0.23, 0.085}, 1};
								pos[] = {"LevelP30", {-0.23, 0.035}, 1};
								right[] = {"LevelP30", {-0.13, 0.035}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = 30;
								type = "text";
							};
							class VALP_2_30: VALP_1_30 {
								align = "right";
								down[] = {"LevelP30", {0.22, 0.085}, 1};
								pos[] = {"LevelP30", {0.22, 0.035}, 1};
								right[] = {"LevelP30", {0.32, 0.035}, 1};
							};
							class LevelM40: Level0 {
								points[] = {{"LevelM40", {-0.2, -0.03}, 1}, {"LevelM40", {-0.2, 0}, 1}, {"LevelM40", {-0.15, 0}, 1}, {}, {"LevelM40", {-0.1, 0}, 1}, {"LevelM40", {-0.05, 0}, 1}, {}, {"LevelM40", {0.05, 0}, 1}, {"LevelM40", {0.1, 0}, 1}, {}, {"LevelM40", {0.15, 0}, 1}, {"LevelM40", {0.2, 0}, 1}, {"LevelM40", {0.2, -0.03}, 1}};
								type = "line";
							};
							class VALM_1_40 {
								align = "left";
								down[] = {"LevelM40", {-0.23, -0.035}, 1};
								pos[] = {"LevelM40", {-0.23, -0.085}, 1};
								right[] = {"LevelM40", {-0.13, -0.085}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = -40;
								type = "text";
							};
							class VALM_2_40: VALM_1_40 {
								align = "right";
								down[] = {"LevelM40", {0.22, -0.035}, 1};
								pos[] = {"LevelM40", {0.22, -0.085}, 1};
								right[] = {"LevelM40", {0.32, -0.085}, 1};
							};
							class LevelP40: Level0 {
								points[] = {{"LevelP40", {-0.2, 0.03}, 1}, {"LevelP40", {-0.2, 0}, 1}, {"LevelP40", {-0.05, 0}, 1}, {}, {"LevelP40", {0.05, 0}, 1}, {"LevelP40", {0.2, 0}, 1}, {"LevelP40", {0.2, 0.03}, 1}};
								type = "line";
							};
							class VALP_1_40 {
								align = "left";
								down[] = {"LevelP40", {-0.23, 0.085}, 1};
								pos[] = {"LevelP40", {-0.23, 0.035}, 1};
								right[] = {"LevelP40", {-0.13, 0.035}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = 40;
								type = "text";
							};
							class VALP_2_40: VALP_1_40 {
								align = "right";
								down[] = {"LevelP40", {0.22, 0.085}, 1};
								pos[] = {"LevelP40", {0.22, 0.035}, 1};
								right[] = {"LevelP40", {0.32, 0.035}, 1};
							};
							class LevelM50: Level0 {
								points[] = {{"LevelM50", {-0.2, -0.03}, 1}, {"LevelM50", {-0.2, 0}, 1}, {"LevelM50", {-0.15, 0}, 1}, {}, {"LevelM50", {-0.1, 0}, 1}, {"LevelM50", {-0.05, 0}, 1}, {}, {"LevelM50", {0.05, 0}, 1}, {"LevelM50", {0.1, 0}, 1}, {}, {"LevelM50", {0.15, 0}, 1}, {"LevelM50", {0.2, 0}, 1}, {"LevelM50", {0.2, -0.03}, 1}};
								type = "line";
							};
							class VALM_1_50 {
								align = "left";
								down[] = {"LevelM50", {-0.23, -0.035}, 1};
								pos[] = {"LevelM50", {-0.23, -0.085}, 1};
								right[] = {"LevelM50", {-0.13, -0.085}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = -50;
								type = "text";
							};
							class VALM_2_50: VALM_1_50 {
								align = "right";
								down[] = {"LevelM50", {0.22, -0.035}, 1};
								pos[] = {"LevelM50", {0.22, -0.085}, 1};
								right[] = {"LevelM50", {0.32, -0.085}, 1};
							};
							class LevelP50: Level0 {
								points[] = {{"LevelP50", {-0.2, 0.03}, 1}, {"LevelP50", {-0.2, 0}, 1}, {"LevelP50", {-0.05, 0}, 1}, {}, {"LevelP50", {0.05, 0}, 1}, {"LevelP50", {0.2, 0}, 1}, {"LevelP50", {0.2, 0.03}, 1}};
								type = "line";
							};
							class VALP_1_50 {
								align = "left";
								down[] = {"LevelP50", {-0.23, 0.085}, 1};
								pos[] = {"LevelP50", {-0.23, 0.035}, 1};
								right[] = {"LevelP50", {-0.13, 0.035}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = 50;
								type = "text";
							};
							class VALP_2_50: VALP_1_50 {
								align = "right";
								down[] = {"LevelP50", {0.22, 0.085}, 1};
								pos[] = {"LevelP50", {0.22, 0.035}, 1};
								right[] = {"LevelP50", {0.32, 0.035}, 1};
							};
							class LevelM60: Level0 {
								points[] = {{"LevelM60", {-0.2, -0.03}, 1}, {"LevelM60", {-0.2, 0}, 1}, {"LevelM60", {-0.15, 0}, 1}, {}, {"LevelM60", {-0.1, 0}, 1}, {"LevelM60", {-0.05, 0}, 1}, {}, {"LevelM60", {0.05, 0}, 1}, {"LevelM60", {0.1, 0}, 1}, {}, {"LevelM60", {0.15, 0}, 1}, {"LevelM60", {0.2, 0}, 1}, {"LevelM60", {0.2, -0.03}, 1}};
								type = "line";
							};
							class VALM_1_60 {
								align = "left";
								down[] = {"LevelM60", {-0.23, -0.035}, 1};
								pos[] = {"LevelM60", {-0.23, -0.085}, 1};
								right[] = {"LevelM60", {-0.13, -0.085}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = -60;
								type = "text";
							};
							class VALM_2_60: VALM_1_60 {
								align = "right";
								down[] = {"LevelM60", {0.22, -0.035}, 1};
								pos[] = {"LevelM60", {0.22, -0.085}, 1};
								right[] = {"LevelM60", {0.32, -0.085}, 1};
							};
							class LevelP60: Level0 {
								points[] = {{"LevelP60", {-0.2, 0.03}, 1}, {"LevelP60", {-0.2, 0}, 1}, {"LevelP60", {-0.05, 0}, 1}, {}, {"LevelP60", {0.05, 0}, 1}, {"LevelP60", {0.2, 0}, 1}, {"LevelP60", {0.2, 0.03}, 1}};
								type = "line";
							};
							class VALP_1_60 {
								align = "left";
								down[] = {"LevelP60", {-0.23, 0.085}, 1};
								pos[] = {"LevelP60", {-0.23, 0.035}, 1};
								right[] = {"LevelP60", {-0.13, 0.035}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = 60;
								type = "text";
							};
							class VALP_2_60: VALP_1_60 {
								align = "right";
								down[] = {"LevelP60", {0.22, 0.085}, 1};
								pos[] = {"LevelP60", {0.22, 0.035}, 1};
								right[] = {"LevelP60", {0.32, 0.035}, 1};
							};
							class LevelM70: Level0 {
								points[] = {{"LevelM70", {-0.2, -0.03}, 1}, {"LevelM70", {-0.2, 0}, 1}, {"LevelM70", {-0.15, 0}, 1}, {}, {"LevelM70", {-0.1, 0}, 1}, {"LevelM70", {-0.05, 0}, 1}, {}, {"LevelM70", {0.05, 0}, 1}, {"LevelM70", {0.1, 0}, 1}, {}, {"LevelM70", {0.15, 0}, 1}, {"LevelM70", {0.2, 0}, 1}, {"LevelM70", {0.2, -0.03}, 1}};
								type = "line";
							};
							class VALM_1_70 {
								align = "left";
								down[] = {"LevelM70", {-0.23, -0.035}, 1};
								pos[] = {"LevelM70", {-0.23, -0.085}, 1};
								right[] = {"LevelM70", {-0.13, -0.085}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = -70;
								type = "text";
							};
							class VALM_2_70: VALM_1_70 {
								align = "right";
								down[] = {"LevelM70", {0.22, -0.035}, 1};
								pos[] = {"LevelM70", {0.22, -0.085}, 1};
								right[] = {"LevelM70", {0.32, -0.085}, 1};
							};
							class LevelP70: Level0 {
								points[] = {{"LevelP70", {-0.2, 0.03}, 1}, {"LevelP70", {-0.2, 0}, 1}, {"LevelP70", {-0.05, 0}, 1}, {}, {"LevelP70", {0.05, 0}, 1}, {"LevelP70", {0.2, 0}, 1}, {"LevelP70", {0.2, 0.03}, 1}};
								type = "line";
							};
							class VALP_1_70 {
								align = "left";
								down[] = {"LevelP70", {-0.23, 0.085}, 1};
								pos[] = {"LevelP70", {-0.23, 0.035}, 1};
								right[] = {"LevelP70", {-0.13, 0.035}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = 70;
								type = "text";
							};
							class VALP_2_70: VALP_1_70 {
								align = "right";
								down[] = {"LevelP70", {0.22, 0.085}, 1};
								pos[] = {"LevelP70", {0.22, 0.035}, 1};
								right[] = {"LevelP70", {0.32, 0.035}, 1};
							};
							class LevelM80: Level0 {
								points[] = {{"LevelM80", {-0.2, -0.03}, 1}, {"LevelM80", {-0.2, 0}, 1}, {"LevelM80", {-0.15, 0}, 1}, {}, {"LevelM80", {-0.1, 0}, 1}, {"LevelM80", {-0.05, 0}, 1}, {}, {"LevelM80", {0.05, 0}, 1}, {"LevelM80", {0.1, 0}, 1}, {}, {"LevelM80", {0.15, 0}, 1}, {"LevelM80", {0.2, 0}, 1}, {"LevelM80", {0.2, -0.03}, 1}};
								type = "line";
							};
							class VALM_1_80 {
								align = "left";
								down[] = {"LevelM80", {-0.23, -0.035}, 1};
								pos[] = {"LevelM80", {-0.23, -0.085}, 1};
								right[] = {"LevelM80", {-0.13, -0.085}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = -80;
								type = "text";
							};
							class VALM_2_80: VALM_1_80 {
								align = "right";
								down[] = {"LevelM80", {0.22, -0.035}, 1};
								pos[] = {"LevelM80", {0.22, -0.085}, 1};
								right[] = {"LevelM80", {0.32, -0.085}, 1};
							};
							class LevelP80: Level0 {
								points[] = {{"LevelP80", {-0.2, 0.03}, 1}, {"LevelP80", {-0.2, 0}, 1}, {"LevelP80", {-0.05, 0}, 1}, {}, {"LevelP80", {0.05, 0}, 1}, {"LevelP80", {0.2, 0}, 1}, {"LevelP80", {0.2, 0.03}, 1}};
								type = "line";
							};
							class VALP_1_80 {
								align = "left";
								down[] = {"LevelP80", {-0.23, 0.085}, 1};
								pos[] = {"LevelP80", {-0.23, 0.035}, 1};
								right[] = {"LevelP80", {-0.13, 0.035}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = 80;
								type = "text";
							};
							class VALP_2_80: VALP_1_80 {
								align = "right";
								down[] = {"LevelP80", {0.22, 0.085}, 1};
								pos[] = {"LevelP80", {0.22, 0.035}, 1};
								right[] = {"LevelP80", {0.32, 0.035}, 1};
							};
						};
					};
					class MGun {
						condition = "mgun";
						class Circle {
							points[] = {{"WeaponAim", {0.05, 0}, 1}, {"WeaponAim", {0.015, 0}, 1}, {}, {"WeaponAim", {0, 0.05}, 1}, {"WeaponAim", {0, 0.015}, 1}, {}, {"WeaponAim", {-0.05, 0}, 1}, {"WeaponAim", {-0.015, 0}, 1}, {}, {"WeaponAim", {0, -0.05}, 1}, {"WeaponAim", {0, -0.015}, 1}, {}};
							type = "line";
							width = 4;
						};
					};
					class Bomb {
						condition = "bomb";
						class Circle {
							points[] = {{"bombAim", {0, -0.1}, 1}, {"bombAim", {0.05, -0.087}, 1}, {"bombAim", {0.087, -0.05}, 1}, {"bombAim", {0.1, 0}, 1}, {"bombAim", {0.087, 0.05}, 1}, {"bombAim", {0.05, 0.087}, 1}, {"bombAim", {0, 0.1}, 1}, {"bombAim", {-0.05, 0.087}, 1}, {"bombAim", {-0.087, 0.05}, 1}, {"bombAim", {-0.1, 0}, 1}, {"bombAim", {-0.087, -0.05}, 1}, {"bombAim", {-0.05, -0.087}, 1}, {"bombAim", {0, -0.1}, 1}, {}};
							type = "line";
							width = 4;
						};
					};
					class AAMissile {
						condition = "AAmissile";
						class Circle {
							points[] = {{"WeaponAim", {0, -0.25}, 1}, {"WeaponAim", {0.125, -0.2175}, 1}, {"WeaponAim", {0.2175, -0.125}, 1}, {"WeaponAim", {0.25, 0}, 1}, {"WeaponAim", {0.2175, 0.125}, 1}, {"WeaponAim", {0.125, 0.2175}, 1}, {"WeaponAim", {0, 0.25}, 1}, {"WeaponAim", {-0.125, 0.2175}, 1}, {"WeaponAim", {-0.2175, 0.125}, 1}, {"WeaponAim", {-0.25, 0}, 1}, {"WeaponAim", {-0.2175, -0.125}, 1}, {"WeaponAim", {-0.125, -0.2175}, 1}, {"WeaponAim", {0, -0.25}, 1}, {}};
							type = "line";
							width = 4;
						};
					};
					class ATMissile {
						condition = "ATmissile";
						class Circle {
							points[] = {{"WeaponAim", {-0.15, -0.15}, 1}, {"WeaponAim", {-0.15, "-0.15+0.02"}, 1}, {}, {"WeaponAim", {-0.15, 0.15}, 1}, {"WeaponAim", {-0.15, "+0.15-0.02"}, 1}, {}, {"WeaponAim", {0.15, -0.15}, 1}, {"WeaponAim", {0.15, "-0.15+0.02"}, 1}, {}, {"WeaponAim", {0.15, 0.15}, 1}, {"WeaponAim", {0.15, "+0.15-0.02"}, 1}, {}, {"WeaponAim", {-0.15, -0.15}, 1}, {"WeaponAim", {"-0.15+0.02", -0.15}, 1}, {}, {"WeaponAim", {-0.15, 0.15}, 1}, {"WeaponAim", {"-0.15+0.02", 0.15}, 1}, {}, {"WeaponAim", {0.15, -0.15}, 1}, {"WeaponAim", {"0.15-0.02", -0.15}, 1}, {}, {"WeaponAim", {0.15, 0.15}, 1}, {"WeaponAim", {"0.15-0.02", 0.15}, 1}, {}};
							type = "line";
							width = 4;
						};
					};
					class Rockets {
						condition = "Rocket";
						class Circle {
							points[] = {{"WeaponAim", {-0.25, -0.25}, 1}, {"WeaponAim", {-0.25, "-0.25+0.05"}, 1}, {}, {"WeaponAim", {-0.25, 0.25}, 1}, {"WeaponAim", {-0.25, "+0.25-0.05"}, 1}, {}, {"WeaponAim", {0.25, -0.25}, 1}, {"WeaponAim", {0.25, "-0.25+0.05"}, 1}, {}, {"WeaponAim", {0.25, 0.25}, 1}, {"WeaponAim", {0.25, "+0.25-0.05"}, 1}, {}, {"WeaponAim", {-0.25, -0.25}, 1}, {"WeaponAim", {"-0.25+0.05", -0.25}, 1}, {}, {"WeaponAim", {-0.25, 0.25}, 1}, {"WeaponAim", {"-0.25+0.05", 0.25}, 1}, {}, {"WeaponAim", {0.25, -0.25}, 1}, {"WeaponAim", {"0.25-0.05", -0.25}, 1}, {}, {"WeaponAim", {0.25, 0.25}, 1}, {"WeaponAim", {"0.25-0.05", 0.25}, 1}, {}};
							type = "line";
							width = 4;
						};
					};
					class SpeedNumber {
						align = "right";
						down[] = {{0.06, 0.52}, 1};
						pos[] = {{0.06, 0.47}, 1};
						right[] = {{"0.14-0.02", 0.47}, 1};
						scale = 1;
						source = "speed";
						sourcescale = 3.6;
						type = "text";
					};
					class AltNumber: SpeedNumber {
						down[] = {{"0.86-0.15", 0.52}, 1};
						pos[] = {{"0.86-0.15", 0.47}, 1};
						right[] = {{"0.94-0.15-0.02", 0.47}, 1};
						source = "altitudeAGL";
						sourcescale = 1;
					};
					class AltScale {
						align = "right";
						bottom = 0.2;
						center = 0.5;
						down[] = {0.86, 0.87};
						horizontal = 0;
						linexleft = 0.825;
						linexleftmajor = 0.825;
						lineyright = 0.835;
						lineyrightmajor = 0.845;
						majorlineeach = 5;
						max = "none";
						min = "none";
						numbereach = 5;
						pos[] = {0.86, 0.82};
						right[] = {0.92, 0.82};
						scale = 1;
						source = "altitudeAGL";
						sourcescale = 1;
						step = 20;
						stepsize = 0.0325;
						top = 0.85;
						type = "scale";
						width = 4;
					};
					class weapons {
						align = "right";
						down[] = {{0.1, 0.92}, 1};
						pos[] = {{0.1, 0.88}, 1};
						right[] = {{"0.16-0.02", 0.88}, 1};
						scale = 0.5;
						source = "weapon";
						sourcescale = 1;
						type = "text";
					};
					class ammo {
						align = "right";
						down[] = {{0.1, 0.97}, 1};
						pos[] = {{0.1, 0.93}, 1};
						right[] = {{"0.16-0.02", 0.93}, 1};
						scale = 0.5;
						source = "ammo";
						sourcescale = 1;
						type = "text";
					};
					class HeadingScale {
						align = "center";
						bottom = 0.7;
						center = 0.5;
						down[] = {"0.32-0.01", "0.04+0.05"};
						horizontal = 1;
						linexleft = "0.06+0.05";
						linexleftmajor = "0.07+0.05";
						lineyright = "0.05+0.05";
						lineyrightmajor = "0.04+0.05";
						majorlineeach = 3;
						max = "none";
						min = "none";
						numbereach = 3;
						pos[] = {"0.32-0.01", "0.0+0.05"};
						right[] = {"0.38-0.01", "0.0+0.05"};
						scale = 1;
						source = "Heading";
						sourcescale = 1;
						step = 10;
						stepsize = "(0.70- 0.3)/15";
						top = 0.3;
						type = "scale";
						width = 4;
					};
				};
			};
		};
	};
	
	class TU_F35A_CAP2: TU_F35A_CAP {
//type changes
		displayName = "F-35A Lightning (CAP2)";
		weapons[] = {"GAU12","AIM120Laucher","SidewinderLaucher","CMFlareLauncher"};
		magazines[] = {
		"300Rnd_25mm_GAU12",
//station 1
//station 2
//station 3
		"TU_6Rnd_AIM120",
//station 4
//station 5
		"TU_4Rnd_Sidewinder",
//TIER2 MERx2 (JDAM / JAGM)
//outerx4
		"TU_52Rnd_Empty",
//innerx4
//TIER2 MERx3 (brimstone)
//outerx6
//innerx6
//TIER2 MERx4 (SDB)
//outerx8
//innerx8
//body_frontx4
//body_rearx4
//INVISIBLE		
		"120Rnd_CMFlare_Chaff_Magazine"};
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\ca\air2\f35b\data\f35_co.paa"};
//		hiddenSelectionsTextures[] = {"\FRL_F35B\data\jf_dark_co.paa"};
//		hiddenSelectionsTextures[] = {"\FRL_F35B\data\jf_light_co.paa"};
//		hiddenSelectionsTextures[] = {"\FRL_F35B\data\f35_RAF_co.paa"};
//		hiddenSelectionsTextures[] = {"\FRL_F35B\data\jf8_co.paa"};
	};
	
	class TU_F35A_GBU: TU_F35A_CAP {
//type changes
		displayName = "F-35A Lightning (GBU)";
		weapons[] = {"GAU12","TU_BombLauncher_DB","AIM120Laucher","SidewinderLaucher","CMFlareLauncher"};
		magazines[] = {
		"300Rnd_25mm_GAU12",
//station 1
		"TU_1Rnd_Sidewinder","TU_1Rnd_Sidewinder",
//station 2
//station 3
		"TU_4Rnd_GBU12",
//station 4
		"TU_2Rnd_AIM120",
//station 5
		"TU_1Rnd_Sidewinder","TU_1Rnd_Sidewinder",
//TIER2 MERx2 (JDAM / JAGM)
//outerx4
		"TU_52Rnd_Empty",
//innerx4
//TIER2 MERx3 (brimstone)
//outerx6
//innerx6
//TIER2 MERx4 (SDB)
//outerx8
//innerx8
//body_frontx4
//body_rearx4
//INVISIBLE		
		"120Rnd_CMFlare_Chaff_Magazine"};
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\ca\air2\f35b\data\f35_co.paa"};
//		hiddenSelectionsTextures[] = {"\FRL_F35B\data\jf_dark_co.paa"};
//		hiddenSelectionsTextures[] = {"\FRL_F35B\data\jf_light_co.paa"};
//		hiddenSelectionsTextures[] = {"\FRL_F35B\data\f35_RAF_co.paa"};
//		hiddenSelectionsTextures[] = {"\FRL_F35B\data\jf8_co.paa"};
	};
	
	class TU_F35A_HGBU: TU_F35A_CAP {
//type changes
		displayName = "F-35A Lightning (HGBU)";
		weapons[] = {"GAU12","TU_BombLauncher_DB","TU_GBU24_BombLauncher_DB","AIM120Laucher","SidewinderLaucher","CMFlareLauncher"};
		magazines[] = {
		"300Rnd_25mm_GAU12",
//station 1
//station 2
		"TU_4Rnd_Sidewinder",
//station 3
		"TU_2Rnd_GBU24",
//station 4
		"TU_2Rnd_GBU12",
//station 5
		"TU_2Rnd_AIM120",
//TIER2 MERx2 (JDAM / JAGM)
//outerx4
		"TU_52Rnd_Empty",
//innerx4
//TIER2 MERx3 (brimstone)
//outerx6
//innerx6
//TIER2 MERx4 (SDB)
//outerx8
//innerx8
//body_frontx4
//body_rearx4
//INVISIBLE		
		"120Rnd_CMFlare_Chaff_Magazine"};
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\ca\air2\f35b\data\f35_co.paa"};
//		hiddenSelectionsTextures[] = {"\FRL_F35B\data\jf_dark_co.paa"};
//		hiddenSelectionsTextures[] = {"\FRL_F35B\data\jf_light_co.paa"};
//		hiddenSelectionsTextures[] = {"\FRL_F35B\data\f35_RAF_co.paa"};
//		hiddenSelectionsTextures[] = {"\FRL_F35B\data\jf8_co.paa"};
	};
	
	class TU_F35A_BMB: TU_F35A_CAP {
//type changes
		displayName = "F-35A Lightning (BMB)";
		weapons[] = {"GAU12","TU_BombLauncher_DB","TU_Mk82BombLauncher_DB","SidewinderLaucher","CMFlareLauncher"};
		magazines[] = {
		"300Rnd_25mm_GAU12",
//station 1
		"TU_1Rnd_Sidewinder","TU_1Rnd_Sidewinder",
//station 2
//station 3
		"TU_4Rnd_Mk82_DB",
//station 4
		"TU_2Rnd_GBU12",
//station 5
		"TU_1Rnd_Sidewinder","TU_1Rnd_Sidewinder",
//TIER2 MERx2 (JDAM / JAGM)
//outerx4
		"TU_52Rnd_Empty",
//innerx4
//TIER2 MERx3 (brimstone)
//outerx6
//innerx6
//TIER2 MERx4 (SDB)
//outerx8
//innerx8
//body_frontx4
//body_rearx4
//INVISIBLE		
		"120Rnd_CMFlare_Chaff_Magazine"};
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\ca\air2\f35b\data\f35_co.paa"};
//		hiddenSelectionsTextures[] = {"\FRL_F35B\data\jf_dark_co.paa"};
//		hiddenSelectionsTextures[] = {"\FRL_F35B\data\jf_light_co.paa"};
//		hiddenSelectionsTextures[] = {"\FRL_F35B\data\f35_RAF_co.paa"};
//		hiddenSelectionsTextures[] = {"\FRL_F35B\data\jf8_co.paa"};
	};
	
	class TU_F35A_HBMB: TU_F35A_CAP {
//type changes
		displayName = "F-35A Lightning (HBMB)";
		weapons[] = {"GAU12","TU_BombLauncher_DB","TU_Mk84BombLauncher_DB","SidewinderLaucher","CMFlareLauncher"};
		magazines[] = {
		"300Rnd_25mm_GAU12",
//station 1
		"TU_1Rnd_Sidewinder","TU_1Rnd_Sidewinder",
//station 2
		"TU_1Rnd_GBU12","TU_1Rnd_GBU12",
//station 3
		"TU_2Rnd_Mk84_DB",
//station 4
		"TU_1Rnd_GBU12","TU_1Rnd_GBU12",
//station 5
		"TU_1Rnd_Sidewinder","TU_1Rnd_Sidewinder",
//TIER2 MERx2 (JDAM / JAGM)
//outerx4
		"TU_52Rnd_Empty",
//innerx4
//TIER2 MERx3 (brimstone)
//outerx6
//innerx6
//TIER2 MERx4 (SDB)
//outerx8
//innerx8
//body_frontx4
//body_rearx4
//INVISIBLE		
		"120Rnd_CMFlare_Chaff_Magazine"};
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\ca\air2\f35b\data\f35_co.paa"};
//		hiddenSelectionsTextures[] = {"\FRL_F35B\data\jf_dark_co.paa"};
//		hiddenSelectionsTextures[] = {"\FRL_F35B\data\jf_light_co.paa"};
//		hiddenSelectionsTextures[] = {"\FRL_F35B\data\f35_RAF_co.paa"};
//		hiddenSelectionsTextures[] = {"\FRL_F35B\data\jf8_co.paa"};
	};
	
	class TU_F35A_CAP_BAF: TU_F35A_CAP {
		vehicleclass = "TU_RAF";
		hiddenSelections[] = {"camo1"};
//		hiddenSelectionsTextures[] = {"\ca\air2\f35b\data\f35_co.paa"};
//		hiddenSelectionsTextures[] = {"\FRL_F35B\data\jf_dark_co.paa"};
//		hiddenSelectionsTextures[] = {"\FRL_F35B\data\jf_light_co.paa"};
		hiddenSelectionsTextures[] = {"\FRL_F35B\data\f35_RAF_co.paa"};
//		hiddenSelectionsTextures[] = {"\FRL_F35B\data\jf8_co.paa"};
		faction = "BIS_BAF";
		crew = "BAF_Pilot_MTP";
		typicalCargo[] = {"BAF_Pilot_MTP"};
	};
	
	class TU_F35A_CAP2_BAF: TU_F35A_CAP2 {
		vehicleclass = "TU_RAF";
		hiddenSelections[] = {"camo1"};
//		hiddenSelectionsTextures[] = {"\ca\air2\f35b\data\f35_co.paa"};
//		hiddenSelectionsTextures[] = {"\FRL_F35B\data\jf_dark_co.paa"};
//		hiddenSelectionsTextures[] = {"\FRL_F35B\data\jf_light_co.paa"};
		hiddenSelectionsTextures[] = {"\FRL_F35B\data\f35_RAF_co.paa"};
//		hiddenSelectionsTextures[] = {"\FRL_F35B\data\jf8_co.paa"};
		faction = "BIS_BAF";
		crew = "BAF_Pilot_MTP";
		typicalCargo[] = {"BAF_Pilot_MTP"};
	};
	
	class TU_F35A_GBU_BAF: TU_F35A_GBU {
		vehicleclass = "TU_RAF";
		hiddenSelections[] = {"camo1"};
//		hiddenSelectionsTextures[] = {"\ca\air2\f35b\data\f35_co.paa"};
//		hiddenSelectionsTextures[] = {"\FRL_F35B\data\jf_dark_co.paa"};
//		hiddenSelectionsTextures[] = {"\FRL_F35B\data\jf_light_co.paa"};
		hiddenSelectionsTextures[] = {"\FRL_F35B\data\f35_RAF_co.paa"};
//		hiddenSelectionsTextures[] = {"\FRL_F35B\data\jf8_co.paa"};
		faction = "BIS_BAF";
		crew = "BAF_Pilot_MTP";
		typicalCargo[] = {"BAF_Pilot_MTP"};
	};
	
	class TU_F35A_HGBU_BAF: TU_F35A_HGBU {
		vehicleclass = "TU_RAF";
		hiddenSelections[] = {"camo1"};
//		hiddenSelectionsTextures[] = {"\ca\air2\f35b\data\f35_co.paa"};
//		hiddenSelectionsTextures[] = {"\FRL_F35B\data\jf_dark_co.paa"};
//		hiddenSelectionsTextures[] = {"\FRL_F35B\data\jf_light_co.paa"};
		hiddenSelectionsTextures[] = {"\FRL_F35B\data\f35_RAF_co.paa"};
//		hiddenSelectionsTextures[] = {"\FRL_F35B\data\jf8_co.paa"};
		faction = "BIS_BAF";
		crew = "BAF_Pilot_MTP";
		typicalCargo[] = {"BAF_Pilot_MTP"};
	};
	
	class TU_F35A_BMB_BAF: TU_F35A_BMB {
		vehicleclass = "TU_RAF";
		hiddenSelections[] = {"camo1"};
//		hiddenSelectionsTextures[] = {"\ca\air2\f35b\data\f35_co.paa"};
//		hiddenSelectionsTextures[] = {"\FRL_F35B\data\jf_dark_co.paa"};
//		hiddenSelectionsTextures[] = {"\FRL_F35B\data\jf_light_co.paa"};
		hiddenSelectionsTextures[] = {"\FRL_F35B\data\f35_RAF_co.paa"};
//		hiddenSelectionsTextures[] = {"\FRL_F35B\data\jf8_co.paa"};
		weapons[] = {"GAU12","TU_BombLauncher_DB","TU_500lbBombLauncher_DB","SidewinderLaucher","CMFlareLauncher"};
		magazines[] = {
		"300Rnd_25mm_GAU12",
//station 1
		"TU_1Rnd_Sidewinder","TU_1Rnd_Sidewinder",
//station 2
//station 3
		"TU_4Rnd_500GP_DB",
//station 4
		"TU_2Rnd_GBU12",
//station 5
		"TU_1Rnd_Sidewinder","TU_1Rnd_Sidewinder",
//TIER2 MERx2 (JDAM / JAGM)
//outerx4
		"TU_52Rnd_Empty",
//innerx4
//TIER2 MERx3 (brimstone)
//outerx6
//innerx6
//TIER2 MERx4 (SDB)
//outerx8
//innerx8
//body_frontx4
//body_rearx4
//INVISIBLE		
		"120Rnd_CMFlare_Chaff_Magazine"};
		faction = "BIS_BAF";
		crew = "BAF_Pilot_MTP";
		typicalCargo[] = {"BAF_Pilot_MTP"};
	};
	
	class TU_F35A_HBMB_BAF: TU_F35A_HBMB {
		vehicleclass = "TU_RAF";
		hiddenSelections[] = {"camo1"};
//		hiddenSelectionsTextures[] = {"\ca\air2\f35b\data\f35_co.paa"};
//		hiddenSelectionsTextures[] = {"\FRL_F35B\data\jf_dark_co.paa"};
//		hiddenSelectionsTextures[] = {"\FRL_F35B\data\jf_light_co.paa"};
		hiddenSelectionsTextures[] = {"\FRL_F35B\data\f35_RAF_co.paa"};	
//		hiddenSelectionsTextures[] = {"\FRL_F35B\data\jf8_co.paa"};	
		weapons[] = {"GAU12","TU_BombLauncher_DB","TU_1000GPBombLauncher_DB","SidewinderLaucher","CMFlareLauncher"};
		magazines[] = {
		"300Rnd_25mm_GAU12",
//station 1
		"TU_1Rnd_Sidewinder","TU_1Rnd_Sidewinder",
//station 2
//station 3
		"TU_4Rnd_1000GP_DB",
//station 4
		"TU_1Rnd_GBU12","TU_1Rnd_GBU12",
//station 5
		"TU_1Rnd_Sidewinder","TU_1Rnd_Sidewinder",
//TIER2 MERx2 (JDAM / JAGM)
//outerx4
		"TU_52Rnd_Empty",
//innerx4
//TIER2 MERx3 (brimstone)
//outerx6
//innerx6
//TIER2 MERx4 (SDB)
//outerx8
//innerx8
//body_frontx4
//body_rearx4
//INVISIBLE		
		"120Rnd_CMFlare_Chaff_Magazine"};
		faction = "BIS_BAF";
		crew = "BAF_Pilot_MTP";
		typicalCargo[] = {"BAF_Pilot_MTP"};
	};
	
	class TU_F35A_CAP_BKO: TU_F35A_CAP {
		displayName = "F-35A Lightning w OD (CAP)";
		incommingmissliedetectionsystem = 16;
	};
	
	class TU_F35A_CAP2_BKO: TU_F35A_CAP2 {
		displayName = "F-35A Lightning w OD (CAP2)";
		incommingmissliedetectionsystem = 16;
	};
	
	class TU_F35A_GBU_BKO: TU_F35A_GBU {
		displayName = "F-35A Lightning w OD (GBU)";
		incommingmissliedetectionsystem = 16;
	};
	
	class TU_F35A_HGBU_BKO: TU_F35A_HGBU {
		displayName = "F-35A Lightning w OD (HGBU)";
		incommingmissliedetectionsystem = 16;
	};
	
	class TU_F35A_BMB_BKO: TU_F35A_BMB {
		displayName = "F-35A Lightning w OD (BMB)";
		incommingmissliedetectionsystem = 16;
	};
	
	class TU_F35A_HBMB_BKO: TU_F35A_HBMB {
		displayName = "F-35A Lightning w OD (HBMB)";
		incommingmissliedetectionsystem = 16;
	};
	
	class TU_F35A_CAP_BKO_BAF: TU_F35A_CAP_BAF {
		displayName = "F-35A Lightning w OD (CAP)";
		incommingmissliedetectionsystem = 16;
	};
	
	class TU_F35A_CAP2_BKO_BAF: TU_F35A_CAP2_BAF {
		displayName = "F-35A Lightning w OD (CAP2)";
		incommingmissliedetectionsystem = 16;
	};
	
	class TU_F35A_GBU_BKO_BAF: TU_F35A_GBU_BAF {
		displayName = "F-35A Lightning w OD (GBU)";
		incommingmissliedetectionsystem = 16;
	};
	
	class TU_F35A_HGBU_BKO_BAF: TU_F35A_HGBU_BAF {
		displayName = "F-35A Lightning w OD (HGBU)";
		incommingmissliedetectionsystem = 16;
	};
	
	class TU_F35A_BMB_BKO_BAF: TU_F35A_BMB_BAF {
		displayName = "F-35A Lightning w OD (BMB)";
		incommingmissliedetectionsystem = 16;
	};
	
	class TU_F35A_HBMB_BKO_BAF: TU_F35A_HBMB_BAF {
		displayName = "F-35A Lightning w OD (HBMB)";
		incommingmissliedetectionsystem = 16;
	};
	
	class AV8B2: Plane_LG {
//type changes
		irScanGround = 0;
		irscanrangemax = 8000;
		irscantoeyefactor = 2;
		vehicleclass = "TU_USMC_AIR";
		fuelcapacity = 700;
		displayName = "AV-8B Harrier II Plus CTOL (BMB)";
		memoryPointLRocket = "Rocket_2";
		memoryPointRRocket = "Rocket_1";
		memoryPointLMissile = "Missile_2";
		memoryPointRMissile = "Missile_1";
		aileronSensitivity = 0.3;
		elevatorSensitivity = 0.5;

	//standard stuff
		model = "\FRL_AV8B\FRL_AV8B";
		vtol = 1;
		radarType = 4;
		LockDetectionSystem = "8 + 4";
		IncommingMisslieDetectionSystem = 16;
		weapons[] = {"GAU12","ACE_Mk82BombLauncher","SidewinderLaucher","FFARLauncher","CMFlareLauncher"};
		magazines[] = {
		"300Rnd_25mm_GAU12","14Rnd_FFAR",
//outer 1-2
		"TU_2Rnd_Sidewinder",
//mid 3-4
		"TU_2Rnd_FFAR7Pod",
//inner 5-6
		"TU_2Rnd_x3_Rack_Pod",
//body 7
		"TU_1Rnd_Empty",
//mid rack x2 8-11
		"TU_4Rnd_Empty",
//inner rack x2 12-15
		"TU_4Rnd_Empty",
//inner rack x3 16-21
		"TU_6Rnd_Mk82",
// rack x3 
//invisible		
		"120Rnd_CMFlare_Chaff_Magazine"};
		
		class UserActions {		
			class LaseKh29
			{
				displayName = "$STR_ACE_UA_LASER_ON";
				position = "HitGlass3";
				radius = 6;
				onlyForPlayer = 1;
				condition = "(player in [gunner this, driver this]) && {(getNumber(configFile>>'cfgWeapons'>>currentWeapon this>>'ace_sys_missileguidance_enableAirDesignator') == 1)}";
				statement = "[this,0,0] call ace_sys_missileguidance_fnc_Kh29_Lase";
			};
			
			class LaseKh29Off: LaseKh29
			{
				displayName = "$STR_ACE_UA_LASER_OFF";
				condition = "(player in [gunner this, driver this]) && {(this getVariable 'ace_sys_missileguidance_tracking')}";
				statement = "this setVariable ['ace_sys_missileguidance_tracking',nil]";
			};
		};
		
		class ACE: ACE {
			class ACE_MISSILEGUIDANCE: ACE_MISSILEGUIDANCE
			{
				ACE_DESIGNATOR = 1;
				ACE_RANGEFINDER = 0;
			};
		};
		
		class MFD {
			class HUD {
				borderbottom = 0;
				borderleft = 0;
				borderright = 0;
				bordertop = 0;
				bottomleft = "HUD LD";
				color[] = {0, 1, 0, 0.1};
				enableparallax = 1;
				topleft = "HUD LH";
				topright = "HUD PH";
				class Pos10Vector {
					pos0[] = {0.485, 0.4};
					pos10[] = {1.225, 1.1};
					type = "vector";
				};
				class Bones {
					class PlaneW {
						pos[] = {0.485, 0.4};
						type = "fixed";
					};
					class WeaponAim: Pos10Vector {
						source = "weapon";
					};
					class Target: Pos10Vector {
						source = "target";
					};
					class Velocity: Pos10Vector {
						pos0[] = {0.5, 0.4};
						pos10[] = {1.24, 1.1};
						source = "velocity";
						type = "vector";
					};
					class ILS_H {
						pos0[] = {0.5, 0.4};
						pos3[] = {0.722, 0.4};
						type = "ils";
					};
					class ILS_W: ILS_H {
						pos3[] = {0.5, 0.61};
					};
					class Level0: Pos10Vector {
						angle = 0;
						pos0[] = {0.5, 0.4};
						pos10[] = {1.24, 1.1};
						type = "horizon";
					};
					class LevelP5: Level0 {
						angle = 5;
					};
					class LevelM5: Level0 {
						angle = -5;
					};
					class LevelP10: Level0 {
						angle = 10;
					};
					class LevelM10: Level0 {
						angle = -10;
					};
					class LevelP15: Level0 {
						angle = 15;
					};
					class LevelM15: Level0 {
						angle = -15;
					};
					class LevelP20: Level0 {
						angle = 20;
					};
					class LevelM20: Level0 {
						angle = -20;
					};
					class LevelP25: Level0 {
						angle = 25;
					};
					class LevelM25: Level0 {
						angle = -25;
					};
					class LevelP30: Level0 {
						angle = 30;
					};
					class LevelM30: Level0 {
						angle = -30;
					};
					class LevelP35: Level0 {
						angle = 35;
					};
					class LevelM35: Level0 {
						angle = -35;
					};
					class LevelP40: Level0 {
						angle = 40;
					};
					class LevelM40: Level0 {
						angle = -40;
					};
					class LevelP45: Level0 {
						angle = 45;
					};
					class LevelM45: Level0 {
						angle = -45;
					};
					class LevelP50: Level0 {
						angle = 50;
					};
					class LevelM50: Level0 {
						angle = -50;
					};
				};
				class Draw {
					alpha = 0.4;
					color[] = {0, 0.3, 0.05};
					condition = "on";
					class PlaneW {
						clipbr[] = {1, 0};
						cliptl[] = {0, 1};
						points[] = {{"PlaneW", {-0.08, 0}, 1}, {"PlaneW", {-0.03, 0}, 1}, {"PlaneW", {-0.015, 0.0283784}, 1}, {"PlaneW", {0, 0}, 1}, {"PlaneW", {0.015, 0.0283784}, 1}, {"PlaneW", {0.03, 0}, 1}, {"PlaneW", {0.08, 0}, 1}};
						type = "line";
					};
					class PlaneHeading {
						clipbr[] = {1, 0};
						cliptl[] = {0, 1};
						points[] = {};
						type = "line";
					};
					class Static {
						clipbr[] = {1, 0};
						cliptl[] = {0, 0.1};
						points[] = {{{0.21, 0.52}, 1}, {{0.19, 0.5}, 1}, {{0.21, 0.48}, 1}, {}, {{0.18, 0.2}, 1}, {{0.18, 0.85}, 1}, {}, {{0.79, 0.52}, 1}, {{0.81, 0.5}, 1}, {{0.79, 0.48}, 1}, {}, {{0.82, 0.2}, 1}, {{0.82, 0.85}, 1}, {}, {{0.52, "0.08+0.01"}, 1}, {{0.5, "0.06+0.01"}, 1}, {{0.48, "0.08+0.01"}, 1}, {}, {{0.2, "0.055+0.01"}, 1}, {{0.8, "0.055+0.01"}, 1}, {}};
						type = "line";
					};
					class Horizont {
						clipbr[] = {1, 1};
						cliptl[] = {0, 0};
						class Dimmed {
							class Level0 {
								points[] = {{"Level0", {-0.2, 0}, 1}, {"Level0", {-0.05, 0}, 1}, {}, {"Level0", {0.05, 0}, 1}, {"Level0", {0.2, 0}, 1}};
								type = "line";
							};
							class VALM_1_0 {
								align = "left";
								down[] = {"Level0", {-0.23, 0.025}, 1};
								pos[] = {"Level0", {-0.23, -0.025}, 1};
								right[] = {"Level0", {-0.13, -0.025}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = 0;
								type = "text";
							};
							class VALM_2_0: VALM_1_0 {
								align = "right";
								down[] = {"Level0", {0.22, 0.025}, 1};
								pos[] = {"Level0", {0.22, -0.025}, 1};
								right[] = {"Level0", {0.32, -0.025}, 1};
							};
							class LevelM5: Level0 {
								points[] = {{"LevelM5", {-0.2, -0.03}, 1}, {"LevelM5", {-0.2, 0}, 1}, {"LevelM5", {-0.15, 0}, 1}, {}, {"LevelM5", {-0.1, 0}, 1}, {"LevelM5", {-0.05, 0}, 1}, {}, {"LevelM5", {0.05, 0}, 1}, {"LevelM5", {0.1, 0}, 1}, {}, {"LevelM5", {0.15, 0}, 1}, {"LevelM5", {0.2, 0}, 1}, {"LevelM5", {0.2, -0.03}, 1}};
								type = "line";
							};
							class VALM_1_5 {
								align = "left";
								down[] = {"LevelM5", {-0.23, -0.035}, 1};
								pos[] = {"LevelM5", {-0.23, -0.085}, 1};
								right[] = {"LevelM5", {-0.13, -0.085}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = -5;
								type = "text";
							};
							class VALM_2_5: VALM_1_5 {
								align = "right";
								down[] = {"LevelM5", {0.22, -0.035}, 1};
								pos[] = {"LevelM5", {0.22, -0.085}, 1};
								right[] = {"LevelM5", {0.32, -0.085}, 1};
							};
							class LevelP5: Level0 {
								points[] = {{"LevelP5", {-0.2, 0.03}, 1}, {"LevelP5", {-0.2, 0}, 1}, {"LevelP5", {-0.05, 0}, 1}, {}, {"LevelP5", {0.05, 0}, 1}, {"LevelP5", {0.2, 0}, 1}, {"LevelP5", {0.2, 0.03}, 1}};
								type = "line";
							};
							class VALP_1_5 {
								align = "left";
								down[] = {"LevelP5", {-0.23, 0.085}, 1};
								pos[] = {"LevelP5", {-0.23, 0.035}, 1};
								right[] = {"LevelP5", {-0.13, 0.035}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = 5;
								type = "text";
							};
							class VALP_2_5: VALP_1_5 {
								align = "right";
								down[] = {"LevelP5", {0.22, 0.085}, 1};
								pos[] = {"LevelP5", {0.22, 0.035}, 1};
								right[] = {"LevelP5", {0.32, 0.035}, 1};
							};
							class LevelM10: Level0 {
								points[] = {{"LevelM10", {-0.2, -0.03}, 1}, {"LevelM10", {-0.2, 0}, 1}, {"LevelM10", {-0.15, 0}, 1}, {}, {"LevelM10", {-0.1, 0}, 1}, {"LevelM10", {-0.05, 0}, 1}, {}, {"LevelM10", {0.05, 0}, 1}, {"LevelM10", {0.1, 0}, 1}, {}, {"LevelM10", {0.15, 0}, 1}, {"LevelM10", {0.2, 0}, 1}, {"LevelM10", {0.2, -0.03}, 1}};
								type = "line";
							};
							class VALM_1_10 {
								align = "left";
								down[] = {"LevelM10", {-0.23, -0.035}, 1};
								pos[] = {"LevelM10", {-0.23, -0.085}, 1};
								right[] = {"LevelM10", {-0.13, -0.085}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = -10;
								type = "text";
							};
							class VALM_2_10: VALM_1_10 {
								align = "right";
								down[] = {"LevelM10", {0.22, -0.035}, 1};
								pos[] = {"LevelM10", {0.22, -0.085}, 1};
								right[] = {"LevelM10", {0.32, -0.085}, 1};
							};
							class LevelP10: Level0 {
								points[] = {{"LevelP10", {-0.2, 0.03}, 1}, {"LevelP10", {-0.2, 0}, 1}, {"LevelP10", {-0.05, 0}, 1}, {}, {"LevelP10", {0.05, 0}, 1}, {"LevelP10", {0.2, 0}, 1}, {"LevelP10", {0.2, 0.03}, 1}};
								type = "line";
							};
							class VALP_1_10 {
								align = "left";
								down[] = {"LevelP10", {-0.23, 0.085}, 1};
								pos[] = {"LevelP10", {-0.23, 0.035}, 1};
								right[] = {"LevelP10", {-0.13, 0.035}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = 10;
								type = "text";
							};
							class VALP_2_10: VALP_1_10 {
								align = "right";
								down[] = {"LevelP10", {0.22, 0.085}, 1};
								pos[] = {"LevelP10", {0.22, 0.035}, 1};
								right[] = {"LevelP10", {0.32, 0.035}, 1};
							};
							class LevelM15: Level0 {
								points[] = {{"LevelM15", {-0.2, -0.03}, 1}, {"LevelM15", {-0.2, 0}, 1}, {"LevelM15", {-0.15, 0}, 1}, {}, {"LevelM15", {-0.1, 0}, 1}, {"LevelM15", {-0.05, 0}, 1}, {}, {"LevelM15", {0.05, 0}, 1}, {"LevelM15", {0.1, 0}, 1}, {}, {"LevelM15", {0.15, 0}, 1}, {"LevelM15", {0.2, 0}, 1}, {"LevelM15", {0.2, -0.03}, 1}};
								type = "line";
							};
							class VALM_1_15 {
								align = "left";
								down[] = {"LevelM15", {-0.23, -0.035}, 1};
								pos[] = {"LevelM15", {-0.23, -0.085}, 1};
								right[] = {"LevelM15", {-0.13, -0.085}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = -15;
								type = "text";
							};
							class VALM_2_15: VALM_1_15 {
								align = "right";
								down[] = {"LevelM15", {0.22, -0.035}, 1};
								pos[] = {"LevelM15", {0.22, -0.085}, 1};
								right[] = {"LevelM15", {0.32, -0.085}, 1};
							};
							class LevelP15: Level0 {
								points[] = {{"LevelP15", {-0.2, 0.03}, 1}, {"LevelP15", {-0.2, 0}, 1}, {"LevelP15", {-0.05, 0}, 1}, {}, {"LevelP15", {0.05, 0}, 1}, {"LevelP15", {0.2, 0}, 1}, {"LevelP15", {0.2, 0.03}, 1}};
								type = "line";
							};
							class VALP_1_15 {
								align = "left";
								down[] = {"LevelP15", {-0.23, 0.085}, 1};
								pos[] = {"LevelP15", {-0.23, 0.035}, 1};
								right[] = {"LevelP15", {-0.13, 0.035}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = 15;
								type = "text";
							};
							class VALP_2_15: VALP_1_15 {
								align = "right";
								down[] = {"LevelP15", {0.22, 0.085}, 1};
								pos[] = {"LevelP15", {0.22, 0.035}, 1};
								right[] = {"LevelP15", {0.32, 0.035}, 1};
							};
							class LevelM20: Level0 {
								points[] = {{"LevelM20", {-0.2, -0.03}, 1}, {"LevelM20", {-0.2, 0}, 1}, {"LevelM20", {-0.15, 0}, 1}, {}, {"LevelM20", {-0.1, 0}, 1}, {"LevelM20", {-0.05, 0}, 1}, {}, {"LevelM20", {0.05, 0}, 1}, {"LevelM20", {0.1, 0}, 1}, {}, {"LevelM20", {0.15, 0}, 1}, {"LevelM20", {0.2, 0}, 1}, {"LevelM20", {0.2, -0.03}, 1}};
								type = "line";
							};
							class VALM_1_20 {
								align = "left";
								down[] = {"LevelM20", {-0.23, -0.035}, 1};
								pos[] = {"LevelM20", {-0.23, -0.085}, 1};
								right[] = {"LevelM20", {-0.13, -0.085}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = -20;
								type = "text";
							};
							class VALM_2_20: VALM_1_20 {
								align = "right";
								down[] = {"LevelM20", {0.22, -0.035}, 1};
								pos[] = {"LevelM20", {0.22, -0.085}, 1};
								right[] = {"LevelM20", {0.32, -0.085}, 1};
							};
							class LevelP20: Level0 {
								points[] = {{"LevelP20", {-0.2, 0.03}, 1}, {"LevelP20", {-0.2, 0}, 1}, {"LevelP20", {-0.05, 0}, 1}, {}, {"LevelP20", {0.05, 0}, 1}, {"LevelP20", {0.2, 0}, 1}, {"LevelP20", {0.2, 0.03}, 1}};
								type = "line";
							};
							class VALP_1_20 {
								align = "left";
								down[] = {"LevelP20", {-0.23, 0.085}, 1};
								pos[] = {"LevelP20", {-0.23, 0.035}, 1};
								right[] = {"LevelP20", {-0.13, 0.035}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = 20;
								type = "text";
							};
							class VALP_2_20: VALP_1_20 {
								align = "right";
								down[] = {"LevelP20", {0.22, 0.085}, 1};
								pos[] = {"LevelP20", {0.22, 0.035}, 1};
								right[] = {"LevelP20", {0.32, 0.035}, 1};
							};
							class LevelM25: Level0 {
								points[] = {{"LevelM25", {-0.2, -0.03}, 1}, {"LevelM25", {-0.2, 0}, 1}, {"LevelM25", {-0.15, 0}, 1}, {}, {"LevelM25", {-0.1, 0}, 1}, {"LevelM25", {-0.05, 0}, 1}, {}, {"LevelM25", {0.05, 0}, 1}, {"LevelM25", {0.1, 0}, 1}, {}, {"LevelM25", {0.15, 0}, 1}, {"LevelM25", {0.2, 0}, 1}, {"LevelM25", {0.2, -0.03}, 1}};
								type = "line";
							};
							class VALM_1_25 {
								align = "left";
								down[] = {"LevelM25", {-0.23, -0.035}, 1};
								pos[] = {"LevelM25", {-0.23, -0.085}, 1};
								right[] = {"LevelM25", {-0.13, -0.085}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = -25;
								type = "text";
							};
							class VALM_2_25: VALM_1_25 {
								align = "right";
								down[] = {"LevelM25", {0.22, -0.035}, 1};
								pos[] = {"LevelM25", {0.22, -0.085}, 1};
								right[] = {"LevelM25", {0.32, -0.085}, 1};
							};
							class LevelP25: Level0 {
								points[] = {{"LevelP25", {-0.2, 0.03}, 1}, {"LevelP25", {-0.2, 0}, 1}, {"LevelP25", {-0.05, 0}, 1}, {}, {"LevelP25", {0.05, 0}, 1}, {"LevelP25", {0.2, 0}, 1}, {"LevelP25", {0.2, 0.03}, 1}};
								type = "line";
							};
							class VALP_1_25 {
								align = "left";
								down[] = {"LevelP25", {-0.23, 0.085}, 1};
								pos[] = {"LevelP25", {-0.23, 0.035}, 1};
								right[] = {"LevelP25", {-0.13, 0.035}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = 25;
								type = "text";
							};
							class VALP_2_25: VALP_1_25 {
								align = "right";
								down[] = {"LevelP25", {0.22, 0.085}, 1};
								pos[] = {"LevelP25", {0.22, 0.035}, 1};
								right[] = {"LevelP25", {0.32, 0.035}, 1};
							};
							class LevelM30: Level0 {
								points[] = {{"LevelM30", {-0.2, -0.03}, 1}, {"LevelM30", {-0.2, 0}, 1}, {"LevelM30", {-0.15, 0}, 1}, {}, {"LevelM30", {-0.1, 0}, 1}, {"LevelM30", {-0.05, 0}, 1}, {}, {"LevelM30", {0.05, 0}, 1}, {"LevelM30", {0.1, 0}, 1}, {}, {"LevelM30", {0.15, 0}, 1}, {"LevelM30", {0.2, 0}, 1}, {"LevelM30", {0.2, -0.03}, 1}};
								type = "line";
							};
							class VALM_1_30 {
								align = "left";
								down[] = {"LevelM30", {-0.23, -0.035}, 1};
								pos[] = {"LevelM30", {-0.23, -0.085}, 1};
								right[] = {"LevelM30", {-0.13, -0.085}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = -30;
								type = "text";
							};
							class VALM_2_30: VALM_1_30 {
								align = "right";
								down[] = {"LevelM30", {0.22, -0.035}, 1};
								pos[] = {"LevelM30", {0.22, -0.085}, 1};
								right[] = {"LevelM30", {0.32, -0.085}, 1};
							};
							class LevelP30: Level0 {
								points[] = {{"LevelP30", {-0.2, 0.03}, 1}, {"LevelP30", {-0.2, 0}, 1}, {"LevelP30", {-0.05, 0}, 1}, {}, {"LevelP30", {0.05, 0}, 1}, {"LevelP30", {0.2, 0}, 1}, {"LevelP30", {0.2, 0.03}, 1}};
								type = "line";
							};
							class VALP_1_30 {
								align = "left";
								down[] = {"LevelP30", {-0.23, 0.085}, 1};
								pos[] = {"LevelP30", {-0.23, 0.035}, 1};
								right[] = {"LevelP30", {-0.13, 0.035}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = 30;
								type = "text";
							};
							class VALP_2_30: VALP_1_30 {
								align = "right";
								down[] = {"LevelP30", {0.22, 0.085}, 1};
								pos[] = {"LevelP30", {0.22, 0.035}, 1};
								right[] = {"LevelP30", {0.32, 0.035}, 1};
							};
							class LevelM35: Level0 {
								points[] = {{"LevelM35", {-0.2, -0.03}, 1}, {"LevelM35", {-0.2, 0}, 1}, {"LevelM35", {-0.15, 0}, 1}, {}, {"LevelM35", {-0.1, 0}, 1}, {"LevelM35", {-0.05, 0}, 1}, {}, {"LevelM35", {0.05, 0}, 1}, {"LevelM35", {0.1, 0}, 1}, {}, {"LevelM35", {0.15, 0}, 1}, {"LevelM35", {0.2, 0}, 1}, {"LevelM35", {0.2, -0.03}, 1}};
								type = "line";
							};
							class VALM_1_35 {
								align = "left";
								down[] = {"LevelM35", {-0.23, -0.035}, 1};
								pos[] = {"LevelM35", {-0.23, -0.085}, 1};
								right[] = {"LevelM35", {-0.13, -0.085}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = -35;
								type = "text";
							};
							class VALM_2_35: VALM_1_35 {
								align = "right";
								down[] = {"LevelM35", {0.22, -0.035}, 1};
								pos[] = {"LevelM35", {0.22, -0.085}, 1};
								right[] = {"LevelM35", {0.32, -0.085}, 1};
							};
							class LevelP35: Level0 {
								points[] = {{"LevelP35", {-0.2, 0.03}, 1}, {"LevelP35", {-0.2, 0}, 1}, {"LevelP35", {-0.05, 0}, 1}, {}, {"LevelP35", {0.05, 0}, 1}, {"LevelP35", {0.2, 0}, 1}, {"LevelP35", {0.2, 0.03}, 1}};
								type = "line";
							};
							class VALP_1_35 {
								align = "left";
								down[] = {"LevelP35", {-0.23, 0.085}, 1};
								pos[] = {"LevelP35", {-0.23, 0.035}, 1};
								right[] = {"LevelP35", {-0.13, 0.035}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = 35;
								type = "text";
							};
							class VALP_2_35: VALP_1_35 {
								align = "right";
								down[] = {"LevelP35", {0.22, 0.085}, 1};
								pos[] = {"LevelP35", {0.22, 0.035}, 1};
								right[] = {"LevelP35", {0.32, 0.035}, 1};
							};
							class LevelM40: Level0 {
								points[] = {{"LevelM40", {-0.2, -0.03}, 1}, {"LevelM40", {-0.2, 0}, 1}, {"LevelM40", {-0.15, 0}, 1}, {}, {"LevelM40", {-0.1, 0}, 1}, {"LevelM40", {-0.05, 0}, 1}, {}, {"LevelM40", {0.05, 0}, 1}, {"LevelM40", {0.1, 0}, 1}, {}, {"LevelM40", {0.15, 0}, 1}, {"LevelM40", {0.2, 0}, 1}, {"LevelM40", {0.2, -0.03}, 1}};
								type = "line";
							};
							class VALM_1_40 {
								align = "left";
								down[] = {"LevelM40", {-0.23, -0.035}, 1};
								pos[] = {"LevelM40", {-0.23, -0.085}, 1};
								right[] = {"LevelM40", {-0.13, -0.085}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = -40;
								type = "text";
							};
							class VALM_2_40: VALM_1_40 {
								align = "right";
								down[] = {"LevelM40", {0.22, -0.035}, 1};
								pos[] = {"LevelM40", {0.22, -0.085}, 1};
								right[] = {"LevelM40", {0.32, -0.085}, 1};
							};
							class LevelP40: Level0 {
								points[] = {{"LevelP40", {-0.2, 0.03}, 1}, {"LevelP40", {-0.2, 0}, 1}, {"LevelP40", {-0.05, 0}, 1}, {}, {"LevelP40", {0.05, 0}, 1}, {"LevelP40", {0.2, 0}, 1}, {"LevelP40", {0.2, 0.03}, 1}};
								type = "line";
							};
							class VALP_1_40 {
								align = "left";
								down[] = {"LevelP40", {-0.23, 0.085}, 1};
								pos[] = {"LevelP40", {-0.23, 0.035}, 1};
								right[] = {"LevelP40", {-0.13, 0.035}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = 40;
								type = "text";
							};
							class VALP_2_40: VALP_1_40 {
								align = "right";
								down[] = {"LevelP40", {0.22, 0.085}, 1};
								pos[] = {"LevelP40", {0.22, 0.035}, 1};
								right[] = {"LevelP40", {0.32, 0.035}, 1};
							};
							class LevelM45: Level0 {
								points[] = {{"LevelM45", {-0.2, -0.03}, 1}, {"LevelM45", {-0.2, 0}, 1}, {"LevelM45", {-0.15, 0}, 1}, {}, {"LevelM45", {-0.1, 0}, 1}, {"LevelM45", {-0.05, 0}, 1}, {}, {"LevelM45", {0.05, 0}, 1}, {"LevelM45", {0.1, 0}, 1}, {}, {"LevelM45", {0.15, 0}, 1}, {"LevelM45", {0.2, 0}, 1}, {"LevelM45", {0.2, -0.03}, 1}};
								type = "line";
							};
							class VALM_1_45 {
								align = "left";
								down[] = {"LevelM45", {-0.23, -0.035}, 1};
								pos[] = {"LevelM45", {-0.23, -0.085}, 1};
								right[] = {"LevelM45", {-0.13, -0.085}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = -45;
								type = "text";
							};
							class VALM_2_45: VALM_1_45 {
								align = "right";
								down[] = {"LevelM45", {0.22, -0.035}, 1};
								pos[] = {"LevelM45", {0.22, -0.085}, 1};
								right[] = {"LevelM45", {0.32, -0.085}, 1};
							};
							class LevelP45: Level0 {
								points[] = {{"LevelP45", {-0.2, 0.03}, 1}, {"LevelP45", {-0.2, 0}, 1}, {"LevelP45", {-0.05, 0}, 1}, {}, {"LevelP45", {0.05, 0}, 1}, {"LevelP45", {0.2, 0}, 1}, {"LevelP45", {0.2, 0.03}, 1}};
								type = "line";
							};
							class VALP_1_45 {
								align = "left";
								down[] = {"LevelP45", {-0.23, 0.085}, 1};
								pos[] = {"LevelP45", {-0.23, 0.035}, 1};
								right[] = {"LevelP45", {-0.13, 0.035}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = 45;
								type = "text";
							};
							class VALP_2_45: VALP_1_45 {
								align = "right";
								down[] = {"LevelP45", {0.22, 0.085}, 1};
								pos[] = {"LevelP45", {0.22, 0.035}, 1};
								right[] = {"LevelP45", {0.32, 0.035}, 1};
							};
							class LevelM50: Level0 {
								points[] = {{"LevelM50", {-0.2, -0.03}, 1}, {"LevelM50", {-0.2, 0}, 1}, {"LevelM50", {-0.15, 0}, 1}, {}, {"LevelM50", {-0.1, 0}, 1}, {"LevelM50", {-0.05, 0}, 1}, {}, {"LevelM50", {0.05, 0}, 1}, {"LevelM50", {0.1, 0}, 1}, {}, {"LevelM50", {0.15, 0}, 1}, {"LevelM50", {0.2, 0}, 1}, {"LevelM50", {0.2, -0.03}, 1}};
								type = "line";
							};
							class VALM_1_50 {
								align = "left";
								down[] = {"LevelM50", {-0.23, -0.035}, 1};
								pos[] = {"LevelM50", {-0.23, -0.085}, 1};
								right[] = {"LevelM50", {-0.13, -0.085}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = -50;
								type = "text";
							};
							class VALM_2_50: VALM_1_50 {
								align = "right";
								down[] = {"LevelM50", {0.22, -0.035}, 1};
								pos[] = {"LevelM50", {0.22, -0.085}, 1};
								right[] = {"LevelM50", {0.32, -0.085}, 1};
							};
							class LevelP50: Level0 {
								points[] = {{"LevelP50", {-0.2, 0.03}, 1}, {"LevelP50", {-0.2, 0}, 1}, {"LevelP50", {-0.05, 0}, 1}, {}, {"LevelP50", {0.05, 0}, 1}, {"LevelP50", {0.2, 0}, 1}, {"LevelP50", {0.2, 0.03}, 1}};
								type = "line";
							};
							class VALP_1_50 {
								align = "left";
								down[] = {"LevelP50", {-0.23, 0.085}, 1};
								pos[] = {"LevelP50", {-0.23, 0.035}, 1};
								right[] = {"LevelP50", {-0.13, 0.035}, 1};
								scale = 1;
								source = "static";
								sourcescale = 1;
								text = 50;
								type = "text";
							};
							class VALP_2_50: VALP_1_50 {
								align = "right";
								down[] = {"LevelP50", {0.22, 0.085}, 1};
								pos[] = {"LevelP50", {0.22, 0.035}, 1};
								right[] = {"LevelP50", {0.32, 0.035}, 1};
							};
						};
					};
					class RadarTargets {
						points[] = {};
						pos0[] = {0.485, 0.4};
						pos10[] = {1.225, 1.1};
						type = "radar";
					};
					class MGun {
						condition = "mgun";
						class Circle {
							points[] = {{"WeaponAim", {0.01, 0}, 1}, {"WeaponAim", {-0.01, 0}, 1}, {}, {"WeaponAim", {0, 0.00945946}, 1}, {"WeaponAim", {0, -0.00945946}, 1}, {}, {"WeaponAim", {0, -0.0662162}, 1}, {"WeaponAim", {0.049, -0.0463514}, 1}, {"WeaponAim", {0.07, 0}, 1}, {"WeaponAim", {0.049, 0.0463514}, 1}, {"WeaponAim", {0, 0.0662162}, 1}, {"WeaponAim", {-0.049, 0.0463514}, 1}, {"WeaponAim", {-0.07, 0}, 1}, {"WeaponAim", {-0.049, -0.0463514}, 1}, {"WeaponAim", {0, -0.0662162}, 1}, {}, {"WeaponAim", {0, -0.132432}, 1}, {"WeaponAim", {0.07, -0.115216}, 1}, {"WeaponAim", {0.1218, -0.0662162}, 1}, {"WeaponAim", {0.14, 0}, 1}, {"WeaponAim", {0.1218, 0.0662162}, 1}, {"WeaponAim", {0.07, 0.115216}, 1}, {"WeaponAim", {0, 0.132432}, 1}, {"WeaponAim", {-0.07, 0.115216}, 1}, {"WeaponAim", {-0.1218, 0.0662162}, 1}, {"WeaponAim", {-0.14, 0}, 1}, {"WeaponAim", {-0.1218, -0.0662162}, 1}, {"WeaponAim", {-0.07, -0.115216}, 1}, {"WeaponAim", {0, -0.132432}, 1}, {}, {"WeaponAim", {0, -0.132432}, 1}, {"WeaponAim", {0, -0.151351}, 1}, {}, {"WeaponAim", {-0.07, -0.11469}, 1}, {"WeaponAim", {-0.08, -0.131074}, 1}, {}, {"WeaponAim", {-0.121244, -0.0662162}, 1}, {"WeaponAim", {-0.138564, -0.0756757}, 1}, {}, {"WeaponAim", {-0.14, "5.78881e-009"}, 1}, {"WeaponAim", {-0.16, "6.61578e-009"}, 1}, {}, {"WeaponAim", {-0.121244, 0.0662162}, 1}, {"WeaponAim", {-0.138564, 0.0756757}, 1}, {}, {"WeaponAim", {-0.07, 0.11469}, 1}, {"WeaponAim", {-0.08, 0.131074}, 1}, {}, {"WeaponAim", {"1.22392e-008", 0.132432}, 1}, {"WeaponAim", {"1.39876e-008", 0.151351}, 1}, {}, {"WeaponAim", {0.07, 0.11469}, 1}, {"WeaponAim", {0.08, 0.131074}, 1}, {}, {"WeaponAim", {0.121244, 0.0662162}, 1}, {"WeaponAim", {0.138564, 0.0756757}, 1}, {}, {"WeaponAim", {0.14, "-1.57924e-009"}, 1}, {"WeaponAim", {0.16, "-1.80485e-009"}, 1}, {}, {"WeaponAim", {0.121244, -0.0662162}, 1}, {"WeaponAim", {0.138564, -0.0756757}, 1}, {}, {"WeaponAim", {0.07, -0.11469}, 1}, {"WeaponAim", {0.08, -0.131074}, 1}, {}};
							type = "line";
						};
					};
					class Bomb {
						condition = "bomb";
						class Circle {
							points[] = {};
							type = "line";
						};
					};
					class AAMissile {
						condition = "AAmissile";
						class Circle {
							points[] = {{"WeaponAim", {0, -0.236486}, 1}, {"WeaponAim", {0.125, -0.205743}, 1}, {"WeaponAim", {0.2175, -0.118243}, 1}, {"WeaponAim", {0.25, 0}, 1}, {"WeaponAim", {0.2175, 0.118243}, 1}, {"WeaponAim", {0.125, 0.205743}, 1}, {"WeaponAim", {0, 0.236486}, 1}, {"WeaponAim", {-0.125, 0.205743}, 1}, {"WeaponAim", {-0.2175, 0.118243}, 1}, {"WeaponAim", {-0.25, 0}, 1}, {"WeaponAim", {-0.2175, -0.118243}, 1}, {"WeaponAim", {-0.125, -0.205743}, 1}, {"WeaponAim", {0, -0.236486}, 1}, {}, {"Target", {0, -0.0662162}, 1}, {"Target", {0.07, 0}, 1}, {"Target", {0, 0.0662162}, 1}, {"Target", {-0.07, 0}, 1}, {"Target", {0, -0.0662162}, 1}};
							type = "line";
						};
					};					
					class ATMissile {
						condition = "ATmissile";						
						class Cros {
							type = "line";
							points[] = {{"WeaponAim", {0.05, 0}, 1}, {"WeaponAim", {0.015, 0}, 1}, {}, {"WeaponAim", {0, 0.04}, 1}, {"WeaponAim", {0, 0.012}, 1}, {}, {"WeaponAim", {-0.05, 0}, 1}, {"WeaponAim", {-0.015, 0}, 1}, {}, {"WeaponAim", {0, -0.04}, 1}, {"WeaponAim", {0, -0.012}, 1}};
						};
					};
					
					class Missile {
						condition = "missile";
						class Cros {
							points[] = {{"WeaponAim", {0.05, 0}, 1}, {"WeaponAim", {0.015, 0}, 1}, {}, {"WeaponAim", {0, 0.04}, 1}, {"WeaponAim", {0, 0.012}, 1}, {}, {"WeaponAim", {-0.05, 0}, 1}, {"WeaponAim", {-0.015, 0}, 1}, {}, {"WeaponAim", {0, -0.04}, 1}, {"WeaponAim", {0, -0.012}, 1}};
							type = "line";
						};
					};
					class Rockets {
						condition = "Rocket";
						class Circle {
							points[] = {{"WeaponAim", {0.01, 0}, 1}, {"WeaponAim", {-0.01, 0}, 1}, {}, {"WeaponAim", {0, 0.00945946}, 1}, {"WeaponAim", {0, -0.00945946}, 1}, {}, {"WeaponAim", {0, -0.113514}, 1}, {"WeaponAim", {0.06, -0.0987568}, 1}, {"WeaponAim", {0.1044, -0.0567568}, 1}, {"WeaponAim", {0.12, 0}, 1}, {"WeaponAim", {0.1044, 0.0567568}, 1}, {"WeaponAim", {0.06, 0.0987568}, 1}, {"WeaponAim", {0, 0.113514}, 1}, {"WeaponAim", {-0.06, 0.0987568}, 1}, {"WeaponAim", {-0.1044, 0.0567568}, 1}, {"WeaponAim", {-0.12, 0}, 1}, {"WeaponAim", {-0.1044, -0.0567568}, 1}, {"WeaponAim", {-0.06, -0.0987568}, 1}, {"WeaponAim", {0, -0.113514}, 1}, {}};
							type = "line";
						};
					};
					class AltScale {
						align = "right";
						bottom = 0.2;
						center = 0.5;
						down[] = {0.86, 0.87};
						horizontal = 0;
						linexleft = 0.825;
						linexleftmajor = 0.825;
						lineyright = 0.835;
						lineyrightmajor = 0.845;
						majorlineeach = 5;
						max = "none";
						min = "none";
						numbereach = 5;
						pos[] = {0.86, 0.82};
						right[] = {0.94, 0.82};
						scale = 1;
						source = "altitudeASL";
						sourcescale = 1;
						step = 20;
						stepsize = "(0.85- 0.2)/20";
						top = 0.85;
						type = "scale";
					};
					class SpeedScale {
						align = "right";
						bottom = 0.85;
						center = 0.5;
						down[] = {0.06, "0.87-0.85+0.2"};
						horizontal = 0;
						linexleft = "0.18 + 0.82 - 0.825";
						linexleftmajor = "0.18 + 0.82 - 0.825";
						lineyright = "0.18 + 0.82 - 0.835";
						lineyrightmajor = "0.18 + 0.82 - 0.845";
						majorlineeach = 5;
						max = "none";
						min = "none";
						numbereach = 5;
						pos[] = {0.06, "0.82-0.85+0.2"};
						right[] = {0.14, "0.82-0.85+0.2"};
						scale = 1;
						source = "speed";
						sourcescale = 3.6;
						step = 20;
						stepsize = "(0.85- 0.2)/20";
						top = 0.2;
						type = "scale";
					};
					class Gear {
						condition = "ils";
						class text {
							align = "right";
							down[] = {{0.84, 0.92}, 1};
							pos[] = {{0.84, 0.88}, 1};
							right[] = {{0.9, 0.88}, 1};
							scale = 0.5;
							source = "static";
							sourcescale = 1;
							text = "GEAR";
							type = "text";
						};
					};
					class Flaps {
						condition = "flaps";
						class text {
							align = "right";
							down[] = {{0.84, 0.97}, 1};
							pos[] = {{0.84, 0.93}, 1};
							right[] = {{0.9, 0.93}, 1};
							scale = 0.5;
							source = "static";
							sourcescale = 1;
							text = "FLAPS";
							type = "text";
						};
					};
					class weapons {
						align = "right";
						down[] = {{0.1, 0.92}, 1};
						pos[] = {{0.1, 0.88}, 1};
						right[] = {{0.16, 0.88}, 1};
						scale = 0.5;
						source = "weapon";
						sourcescale = 1;
						type = "text";
					};
					class ammo {
						align = "right";
						down[] = {{0.1, 0.97}, 1};
						pos[] = {{0.1, 0.93}, 1};
						right[] = {{0.16, 0.93}, 1};
						scale = 0.5;
						source = "ammo";
						sourcescale = 1;
						type = "text";
					};
					class VspeedNumber {
						align = "right";
						down[] = {{0.86, "0.57-0.4"}, 1};
						pos[] = {{0.86, "0.52-0.4"}, 1};
						right[] = {{0.94, "0.52-0.4"}, 1};
						scale = 1;
						source = "vspeed";
						sourcescale = 1;
						type = "text";
					};
					class HeadingScale {
						align = "center";
						bottom = 0.8;
						center = 0.5;
						down[] = {"0.21-0.01", 0.05};
						horizontal = 1;
						linexleft = 0.06;
						linexleftmajor = 0.06;
						lineyright = 0.05;
						lineyrightmajor = 0.04;
						majorlineeach = 5;
						max = "none";
						min = "none";
						numbereach = 5;
						pos[] = {"0.21-0.01", 0};
						right[] = {"0.29-0.01", 0};
						scale = 1;
						source = "Heading";
						sourcescale = 1;
						step = "18/9";
						stepsize = "(0.80- 0.2)/20";
						top = 0.2;
						type = "scale";
					};
					class ILS {
						condition = "ils";
						class Glideslope {
							clipbr[] = {1, 1};
							cliptl[] = {0, 0};
							class ILS {
								points[] = {{"ILS_W", {-0.24, 0}, 1}, {"ILS_W", {0.24, 0}, 1}, {}, {"ILS_W", {0, 0.0227027}, 1}, {"ILS_W", {0, -0.0227027}, 1}, {}, {"ILS_W", {0.12, 0.0227027}, 1}, {"ILS_W", {0.12, -0.0227027}, 1}, {}, {"ILS_W", {0.24, 0.0227027}, 1}, {"ILS_W", {0.24, -0.0227027}, 1}, {}, {"ILS_W", {-0.12, 0.0227027}, 1}, {"ILS_W", {-0.12, -0.0227027}, 1}, {}, {"ILS_W", {-0.24, 0.0227027}, 1}, {"ILS_W", {-0.24, -0.0227027}, 1}, {}, {"ILS_H", {0, -0.227027}, 1}, {"ILS_H", {0, 0.227027}, 1}, {}, {"ILS_H", {0.024, 0}, 1}, {"ILS_H", {-0.024, 0}, 1}, {}, {"ILS_H", {0.024, 0.113514}, 1}, {"ILS_H", {-0.024, 0.113514}, 1}, {}, {"ILS_H", {0.024, 0.227027}, 1}, {"ILS_H", {-0.024, 0.227027}, 1}, {}, {"ILS_H", {0.024, -0.113514}, 1}, {"ILS_H", {-0.024, -0.113514}, 1}, {}, {"ILS_H", {0.024, -0.227027}, 1}, {"ILS_H", {-0.024, -0.227027}, 1}};
								type = "line";
							};
						};
					};
				};
			};
		};
	};
	
	class AV8B: AV8B2 {	
		fuelcapacity = 700;
		scope = 2;
		displayName = "AV-8B Harrier II Plus CTOL (6xGBU)";
		model = "\FRL_AV8B\FRL_AV8B";
		vtol = 1;
		magazines[] = {
		"300Rnd_25mm_GAU12",
//outer 2
//mid 2
//inner 2
		"TU_6Rnd_GBU12",
//body 1
		"TU_1Rnd_Empty",
//mid rack x2
		"TU_4Rnd_Empty",
//inner rack x2
		"TU_4Rnd_Empty",
//inner rack x3 16-21
		"TU_6Rnd_Empty",
//invisible		
		"120Rnd_CMFlare_Chaff_Magazine"};
	};
	
	class TU_AV8B_Plus_CAP: AV8B2 {
		scope = 2;
		displayName = "AV-8B Harrier II Plus (CAP)";
		model = "\FRL_AV8B\FRL_AV8B";
		vtol = 3;
		weapons[] = {"GAU12","SidewinderLaucher","CMFlareLauncher"};
		magazines[] = {
		"300Rnd_25mm_GAU12",
//outer 2
//mid 2
//inner 2
		"TU_6Rnd_Sidewinder",
//body 1
		"TU_1Rnd_Empty",
//mid rack x2
		"TU_4Rnd_Empty",
//inner rack x2
		"TU_4Rnd_Empty",
//inner rack x3 16-21
		"TU_6Rnd_Empty",
//invisible		
		"120Rnd_CMFlare_Chaff_Magazine"};
	};
	
	class TU_AV8B_Plus_CAP2: AV8B2 {	
		scope = 2;
		displayName = "AV-8B Harrier II Plus (CAP2)";
		model = "\FRL_AV8B\FRL_AV8B";
		vtol = 3;
		weapons[] = {"GAU12","SidewinderLaucher","AIM120Laucher","CMFlareLauncher"};
		magazines[] = {
		"300Rnd_25mm_GAU12",
//outer 2
//mid 2
		"TU_4Rnd_Sidewinder",
//inner 2
		"TU_2Rnd_AIM120",
//body 1
		"TU_1Rnd_Empty",
//mid rack x2
		"TU_4Rnd_Empty",
//inner rack x2
		"TU_4Rnd_Empty",
//inner rack x3 16-21
		"TU_6Rnd_Empty",
//invisible		
		"120Rnd_CMFlare_Chaff_Magazine"};
	};
	
	class TU_AV8B_Plus_GBU: AV8B2 {	
		scope = 2;
		displayName = "AV-8B Harrier II Plus (4xGBU)";
		model = "\FRL_AV8B\FRL_AV8B";
		vtol = 3;
		weapons[] = {"GAU12","BombLauncher","SidewinderLaucher","CMFlareLauncher"};
		magazines[] = {
		"300Rnd_25mm_GAU12",
//outer 2
		"TU_2Rnd_Sidewinder",
//mid 3-4
//inner 5-6
		"TU_4Rnd_GBU12",
//body 7
		"TU_1Rnd_Empty",
//mid rack x2 8-11
		"TU_4Rnd_Empty",
//inner rack x2 12-15
		"TU_4Rnd_Empty",
//inner rack x3 16-21
		"TU_6Rnd_Empty",
//invisible		
		"120Rnd_CMFlare_Chaff_Magazine"};
	};
	
	class TU_AV8B_Plus_CAS: AV8B2 {	
		scope = 2;
		displayName = "AV-8B Harrier II Plus CTOL (CAS)";
		model = "\FRL_AV8B\FRL_AV8B";
		vtol = 1;
		weapons[] = {"GAU12","ACE_Mk82BombLauncher","FFARLauncher","SidewinderLaucher","CMFlareLauncher"};
		magazines[] = {
		"300Rnd_25mm_GAU12","114Rnd_FFAR",
//outer 2
		"TU_2Rnd_Sidewinder",
//mid 2
		"TU_2Rnd_Mk82",
//inner 5-6
		"TU_2Rnd_x3_Rack_Pod",
//body 7
		"TU_1Rnd_Empty",
//mid rack x2 8-11
		"TU_4Rnd_Empty",
//inner rack x2 12-15
		"TU_4Rnd_Empty",
//inner rack x3 16-21
		"TU_1Rnd_FFAR19Pod",
		"TU_1Rnd_FFAR19Pod",
		"TU_1Rnd_FFAR19Pod",
		"TU_1Rnd_FFAR19Pod",
		"TU_1Rnd_FFAR19Pod",
		"TU_1Rnd_FFAR19Pod",
// rack x3 	
		"120Rnd_CMFlare_Chaff_Magazine"};
	};
	
	class TU_AV8B_Plus_AT: AV8B2 {	
		scope = 2;
		displayName = "AV-8B Harrier II Plus (AT)";
		model = "\FRL_AV8B\FRL_AV8B";
		vtol = 3;
		weapons[] = {"GAU12","AGM65E_Launcher","SidewinderLaucher","CMFlareLauncher"};
		magazines[] = {
		"300Rnd_25mm_GAU12",
//outer 2
		"TU_2Rnd_Sidewinder",
//mid 2
//inner 2
		"TU_4Rnd_AGM65E",
//body 1
		"TU_1Rnd_Empty",
//mid rack x2
		"TU_4Rnd_Empty",
//inner rack x2
		"TU_4Rnd_Empty",
//inner rack x3 16-21
		"TU_6Rnd_Empty",
//invisible		
		"120Rnd_CMFlare_Chaff_Magazine"};
	};
	
	class TU_AV8B_Plus_MP: AV8B2 {	
		scope = 2;
		displayName = "AV-8B Harrier II Plus (Multirole)";
		model = "\FRL_AV8B\FRL_AV8B";
		vtol = 3;
		weapons[] = {"GAU12","BombLauncher","AGM65E_Launcher","SidewinderLaucher","CMFlareLauncher"};
		magazines[] = {
		"300Rnd_25mm_GAU12",
//outer 2
		"TU_2Rnd_Sidewinder",
//mid 2
		"TU_2Rnd_AGM65E",
//inner 2
		"TU_2Rnd_GBU12",
//body 1
		"TU_1Rnd_Empty",
//mid rack x2
		"TU_4Rnd_Empty",
//inner rack x2
		"TU_4Rnd_Empty",
//inner rack x3 16-21
		"TU_6Rnd_Empty",
//invisible		
		"120Rnd_CMFlare_Chaff_Magazine"};
	};
	
	class TU_AV8B_BMB: AV8B2 {	
		displayName = "AV-8B Harrier II CTOL (BMB)";
		model = "\FRL_AV8B\FRL_AV8B";
		radarType = 0;
		vtol = 1;
		IncommingMisslieDetectionSystem = 8;
		weapons[] = {"GAU12","ACE_Mk82BombLauncher","AIM9MLaucher","FFARLauncher","CMFlareLauncher"};
		magazines[] = {
		"300Rnd_25mm_GAU12","14Rnd_FFAR",
//outer 2
		"TU_2Rnd_AIM9M",
//mid 2
		"TU_2Rnd_FFAR7Pod",
//inner 2
		"TU_2Rnd_x3_Rack_Pod",
//body 1
		"TU_1Rnd_Empty",
//mid rack x2
		"TU_4Rnd_Empty",
//inner rack x2
		"TU_4Rnd_Empty",
//inner rack x3 16-21
		"TU_6Rnd_Mk82",
//invisible		
		"120Rnd_CMFlare_Chaff_Magazine"};
	};
	
	class TU_AV8B_CAP: TU_AV8B_Plus_CAP {	
		displayName = "AV-8B Harrier II (CAP)";
		radarType = 0;
		vtol = 3;
		IncommingMisslieDetectionSystem = 8;
		weapons[] = {"GAU12","AIM9MLaucher","CMFlareLauncher"};
		magazines[] = {
		"300Rnd_25mm_GAU12",
//outer 2
//mid 2
//inner 2
		"TU_6Rnd_AIM9M",
//body 1
		"TU_1Rnd_Empty",
//mid rack x2
		"TU_4Rnd_Empty",
//inner rack x2
		"TU_4Rnd_Empty",
//inner rack x3 16-21
		"TU_6Rnd_Empty",
//invisible		
		"120Rnd_CMFlare_Chaff_Magazine"};
	};
	
	class TU_AV8B_6GBU: AV8B2 {
		displayName = "AV-8B Harrier II CTOL (6xGBU)";
		radarType = 0;
		vtol = 1;
		IncommingMisslieDetectionSystem = 8;
		weapons[] = {"GAU12","BombLauncher","CMFlareLauncher"};
		magazines[] = {
		"300Rnd_25mm_GAU12",
//outer 2
//mid 2
//inner 2
		"TU_6Rnd_GBU12",
//body 1
		"TU_1Rnd_Empty",
//mid rack x2
		"TU_4Rnd_Empty",
//inner rack x2
		"TU_4Rnd_Empty",
//inner rack x3 16-21
		"TU_6Rnd_Empty",
//invisible	
		"120Rnd_CMFlare_Chaff_Magazine"};
	};
	
	class TU_AV8B_GBU: AV8B2 {
		displayName = "AV-8B Harrier II (4xGBU)";
		radarType = 0;
		vtol = 3;
		IncommingMisslieDetectionSystem = 8;
		weapons[] = {"GAU12","BombLauncher","AIM9MLaucher","CMFlareLauncher"};
		magazines[] = {
		"300Rnd_25mm_GAU12",
//outer 2
		"TU_2Rnd_AIM9M",
//mid 2
//inner 2
		"TU_4Rnd_GBU12",
//body 1
		"TU_1Rnd_Empty",
//mid rack x2
		"TU_4Rnd_Empty",
//inner rack x2
		"TU_4Rnd_Empty",
//inner rack x3 16-21
		"TU_6Rnd_Empty",
//invisible	
		"120Rnd_CMFlare_Chaff_Magazine"};
	};
	
	class TU_AV8B_CAS: AV8B2 {
		displayName = "AV-8B Harrier II CTOL (CAS)";
		radarType = 0;
		vtol = 1;
		IncommingMisslieDetectionSystem = 8;
		weapons[] = {"GAU12","ACE_Mk82BombLauncher","FFARLauncher","AIM9MLaucher","CMFlareLauncher"};
		magazines[] = {
		"300Rnd_25mm_GAU12","114Rnd_FFAR",
//outer 2
		"TU_2Rnd_AIM9M",
//mid 2
		"TU_2Rnd_Mk82",
//inner 5-6
		"TU_2Rnd_x3_Rack_Pod",
//body 7
		"TU_1Rnd_Empty",
//mid rack x2 8-11
		"TU_4Rnd_Empty",
//inner rack x2 12-15
		"TU_4Rnd_Empty",
//inner rack x3 16-21
		"TU_1Rnd_FFAR19Pod",
		"TU_1Rnd_FFAR19Pod",
		"TU_1Rnd_FFAR19Pod",
		"TU_1Rnd_FFAR19Pod",
		"TU_1Rnd_FFAR19Pod",
		"TU_1Rnd_FFAR19Pod",
// rack x3 	
		"120Rnd_CMFlare_Chaff_Magazine"};
	};
	
	class TU_AV8B_AT: AV8B2 {
		displayName = "AV-8B Harrier II (AT)";
		radarType = 0;
		vtol = 3;
		IncommingMisslieDetectionSystem = 8;
		weapons[] = {"GAU12","AGM65E_Launcher","AIM9MLaucher","CMFlareLauncher"};
		magazines[] = {
		"300Rnd_25mm_GAU12",
//outer 2
		"TU_2Rnd_AIM9M",
//mid 2
//inner 2
		"TU_4Rnd_AGM65E",
//body 1
		"TU_1Rnd_Empty",
//mid rack x2
		"TU_4Rnd_Empty",
//inner rack x2
		"TU_4Rnd_Empty",
//inner rack x3 16-21
		"TU_6Rnd_Empty",
//invisible		
		"120Rnd_CMFlare_Chaff_Magazine"};
	};
	
	class TU_AV8B_MP: AV8B2 {
		displayName = "AV-8B Harrier II (Multirole)";
		radarType = 0;
		vtol = 3;
		IncommingMisslieDetectionSystem = 8;
		weapons[] = {"GAU12","BombLauncher","AGM65E_Launcher","AIM9MLaucher","CMFlareLauncher"};
		magazines[] = {
		"300Rnd_25mm_GAU12",
//outer 2
		"TU_2Rnd_AIM9M",
//mid 2
		"TU_2Rnd_AGM65E",
//inner 2
		"TU_2Rnd_GBU12",
//body 1
		"TU_1Rnd_Empty",
//mid rack x2
		"TU_4Rnd_Empty",
//inner rack x2
		"TU_4Rnd_Empty",
//inner rack x3 16-21
		"TU_6Rnd_Empty",
//invisible		
		"120Rnd_CMFlare_Chaff_Magazine"};
	};
	
	class TU_Harrier_GR5_BMB: AV8B2 {	
		vehicleclass = "TU_RAF";
		faction = "BIS_BAF";
		crew = "BAF_Pilot_MTP";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\FRL_AV8B\data\av8b_ext_co.paa"};
		scope = 2;
		displayName = "BAe Harrier GR.5 CTOL (BMB)";
		model = "\FRL_AV8B\FRL_AV8B";
		vtol = 1;
		radarType = 0;
		LockDetectionSystem = "8 + 4";
		IncommingMisslieDetectionSystem = 8;
		weapons[] = {"GAU12","500lbBombLauncher","AIM9MLaucher","CRV7_HEPD","CMFlareLauncher"};
		magazines[] = {
		"300Rnd_25mm_GAU12",
//outer 1-2
		"TU_2Rnd_AIM9M",
//mid 3-4
		"TU_2Rnd_CRV7x19Pod",
//inner 5-6
		"TU_2Rnd_x3_Rack_Pod",
//body 7
		"TU_1Rnd_Empty",
//mid rack x2 8-11
		"TU_4Rnd_Empty",
//inner rack x2 12-15
		"TU_4Rnd_Empty",
//inner rack x3 16-21
		"TU_6Rnd_500GP",
// rack x3 
//invisible		
		"TU_38Rnd_CRV7_HEPD","120Rnd_CMFlare_Chaff_Magazine"};
	};
	
	class TU_Harrier_GR5_HBMB: TU_Harrier_GR5_BMB {	
		displayName = "BAe Harrier GR.5 (HBMB)";
		vtol = 3;
		weapons[] = {"GAU12","1000GPBombLauncher","AIM9MLaucher","CRV7_HEPD","CMFlareLauncher"};
		magazines[] = {
		"300Rnd_25mm_GAU12",
//outer 1-2
		"TU_2Rnd_AIM9M",
//mid 3-4
		"TU_2Rnd_CRV7x19Pod",
//inner 5-6
		"TU_2Rnd_1000GP",
//body 7
		"TU_1Rnd_Empty",
//mid rack x2 8-11
		"TU_4Rnd_Empty",
//inner rack x2 12-15
		"TU_4Rnd_Empty",
//inner rack x3 16-21
		"TU_6Rnd_Empty",
// rack x3 
//invisible		
		"TU_38Rnd_CRV7_HEPD","120Rnd_CMFlare_Chaff_Magazine"};
	};
	
	class TU_Harrier_GR5_CAP: TU_Harrier_GR5_BMB {	
		displayName = "BAe Harrier GR.5 (CAP)";
		vtol = 3;
		weapons[] = {"GAU12","AIM9MLaucher","CMFlareLauncher"};
		magazines[] = {
		"300Rnd_25mm_GAU12",
//outer 2
//mid 2
//inner 2
		"TU_6Rnd_AIM9M",
//body 1
		"TU_1Rnd_Empty",
//mid rack x2
		"TU_4Rnd_Empty",
//inner rack x2
		"TU_4Rnd_Empty",
//inner rack x3 16-21
		"TU_6Rnd_Empty",
//invisible		
		"120Rnd_CMFlare_Chaff_Magazine"};
	};
	
	class TU_Harrier_GR5_6GBU: TU_Harrier_GR5_BMB {
		displayName = "BAe Harrier GR.5 CTOL (6xGBU)";
		vtol = 1;
		weapons[] = {"GAU12","BombLauncher","CMFlareLauncher"};
		magazines[] = {
		"300Rnd_25mm_GAU12",
//outer 2
//mid 2
//inner 2
		"TU_6Rnd_GBU12",
//body 1
		"TU_1Rnd_Empty",
//mid rack x2
		"TU_4Rnd_Empty",
//inner rack x2
		"TU_4Rnd_Empty",
//inner rack x3 16-21
		"TU_6Rnd_Empty",
//invisible
		"120Rnd_CMFlare_Chaff_Magazine"};
	};
	
	class TU_Harrier_GR5_GBU: TU_Harrier_GR5_BMB {
		displayName = "BAe Harrier GR.5 (4xGBU)";
		vtol = 3;
		weapons[] = {"GAU12","BombLauncher","AIM9MLaucher","CMFlareLauncher"};
		magazines[] = {
		"300Rnd_25mm_GAU12",
//outer 2
		"TU_2Rnd_AIM9M",
//mid 2
//inner 2
		"TU_4Rnd_GBU12",
//body 1
		"TU_1Rnd_Empty",
//mid rack x2
		"TU_4Rnd_Empty",
//inner rack x2
		"TU_4Rnd_Empty",
//inner rack x3 16-21
		"TU_6Rnd_Empty",
//invisible
		"120Rnd_CMFlare_Chaff_Magazine"};
	};
	
	class TU_Harrier_GR5_CAS: TU_Harrier_GR5_BMB {
		displayName = "BAe Harrier GR.5 CTOL (CAS)";
		vtol = 1;
		weapons[] = {"GAU12","500lbBombLauncher","CRV7_HEPD","AIM9MLaucher","CMFlareLauncher"};
		magazines[] = {
		"300Rnd_25mm_GAU12",
//outer 2
		"TU_2Rnd_AIM9M",
//mid 2
		"TU_2Rnd_500GP",
//inner 5-6
		"TU_2Rnd_x3_Rack_Pod",
//body 7
		"TU_1Rnd_Empty",
//mid rack x2 8-11
		"TU_4Rnd_Empty",
//inner rack x2 12-15
		"TU_4Rnd_Empty",
//inner rack x3 16-21
		"TU_1Rnd_CRV7x19Pod",
		"TU_1Rnd_CRV7x19Pod",
		"TU_1Rnd_CRV7x19Pod",
		"TU_1Rnd_CRV7x19Pod",
		"TU_1Rnd_CRV7x19Pod",
		"TU_1Rnd_CRV7x19Pod",
// rack x3 	
		"TU_114Rnd_CRV7_HEPD","120Rnd_CMFlare_Chaff_Magazine"};
	};
	
	class TU_Harrier_GR5_AT: TU_Harrier_GR5_BMB {
		displayName = "BAe Harrier GR.5 (AT)";
		vtol = 3;
		weapons[] = {"GAU12","AGM65E_Launcher","AIM9MLaucher","CMFlareLauncher"};
		magazines[] = {
		"300Rnd_25mm_GAU12",
//outer 2
		"TU_2Rnd_AIM9M",
//mid 2
//inner 2
		"TU_4Rnd_AGM65E",
//body 1
		"TU_1Rnd_Empty",
//mid rack x2
		"TU_4Rnd_Empty",
//inner rack x2
		"TU_4Rnd_Empty",
//inner rack x3 16-21
		"TU_6Rnd_Empty",
//invisible		
		"120Rnd_CMFlare_Chaff_Magazine"};
	};
	
	class TU_Harrier_GR5_MP: TU_Harrier_GR5_BMB {
		displayName = "BAe Harrier GR.5 (Multirole)";
		vtol = 3;
		weapons[] = {"GAU12","BombLauncher","AGM65E_Launcher","AIM9MLaucher","CMFlareLauncher"};
		magazines[] = {
		"300Rnd_25mm_GAU12",
//outer 2
		"TU_2Rnd_AIM9M",
//mid 2
		"TU_2Rnd_AGM65E",
//inner 2
		"TU_2Rnd_GBU12",
//body 1
		"TU_1Rnd_Empty",
//mid rack x2
		"TU_4Rnd_Empty",
//inner rack x2
		"TU_4Rnd_Empty",
//inner rack x3 16-21
		"TU_6Rnd_Empty",
//invisible		
		"120Rnd_CMFlare_Chaff_Magazine"};
	};
	
	class TU_Harrier_GR9_BMB: TU_Harrier_GR5_BMB {
		vehicleclass = "TU_RAF";
		displayName = "BAe Harrier GR.9 CTOL (BMB)";
		vtol = 1;
		radarType = 4;
		IncommingMisslieDetectionSystem = 16;
		weapons[] = {"GAU12","500lbBombLauncher","SidewinderLaucher","CRV7_HEPD","CMFlareLauncher"};
		magazines[] = {
		"300Rnd_25mm_GAU12",
//outer 1-2
		"TU_2Rnd_Sidewinder",
//mid 3-4
		"TU_2Rnd_CRV7x19Pod",
//inner 5-6
		"TU_2Rnd_x3_Rack_Pod",
//body 7
		"TU_1Rnd_Empty",
//mid rack x2 8-11
		"TU_4Rnd_Empty",
//inner rack x2 12-15
		"TU_4Rnd_Empty",
//inner rack x3 16-21
		"TU_6Rnd_500GP",
// rack x3 
//invisible		
		"TU_38Rnd_CRV7_HEPD","120Rnd_CMFlare_Chaff_Magazine"};
	};
	
	class TU_Harrier_GR9_HBMB: TU_Harrier_GR9_BMB {	
		displayName = "BAe Harrier GR.9 (HBMB)";
		vtol = 3;
		weapons[] = {"GAU12","1000GPBombLauncher","SidewinderLaucher","CRV7_HEPD","CMFlareLauncher"};
		magazines[] = {
		"300Rnd_25mm_GAU12",
//outer 1-2
		"TU_2Rnd_Sidewinder",
//mid 3-4
		"TU_2Rnd_CRV7x19Pod",
//inner 5-6
		"TU_2Rnd_1000GP",
//body 7
		"TU_1Rnd_Empty",
//mid rack x2 8-11
		"TU_4Rnd_Empty",
//inner rack x2 12-15
		"TU_4Rnd_Empty",
//inner rack x3 16-21
		"TU_6Rnd_Empty",
// rack x3 
//invisible		
		"TU_38Rnd_CRV7_HEPD","120Rnd_CMFlare_Chaff_Magazine"};
	};

	class TU_Harrier_GR9_CAP: TU_Harrier_GR9_BMB {	
		displayName = "BAe Harrier GR.9 (CAP)";
		vtol = 3;
		weapons[] = {"GAU12","SidewinderLaucher","CMFlareLauncher"};
		magazines[] = {
		"300Rnd_25mm_GAU12",
//outer 2
//mid 2
//inner 2
		"TU_6Rnd_Sidewinder",
//body 1
		"TU_1Rnd_Empty",
//mid rack x2
		"TU_4Rnd_Empty",
//inner rack x2
		"TU_4Rnd_Empty",
//inner rack x3 16-21
		"TU_6Rnd_Empty",
//invisible		
		"120Rnd_CMFlare_Chaff_Magazine"};
	};

	class TU_Harrier_GR9_CAP2: TU_Harrier_GR9_BMB {	
		displayName = "BAe Harrier GR.9 (CAP2)";
		vtol = 3;
		weapons[] = {"GAU12","SidewinderLaucher","AIM120Laucher","CMFlareLauncher"};
		magazines[] = {
		"300Rnd_25mm_GAU12",
//outer 2
//mid 2
		"TU_4Rnd_Sidewinder",
//inner 2
		"TU_2Rnd_AIM120",
//body 1
		"TU_1Rnd_Empty",
//mid rack x2
		"TU_4Rnd_Empty",
//inner rack x2
		"TU_4Rnd_Empty",
//inner rack x3 16-21
		"TU_6Rnd_Empty",
//invisible		
		"120Rnd_CMFlare_Chaff_Magazine"};
	};

	class TU_Harrier_GR9_6GBU: TU_Harrier_GR9_BMB {
		displayName = "BAe Harrier GR.9 CTOL (6xGBU)";
		vtol = 1;
		weapons[] = {"GAU12","BombLauncher","CMFlareLauncher"};
		magazines[] = {
		"300Rnd_25mm_GAU12",
//outer 2
//mid 2
//inner 2
		"TU_6Rnd_GBU12",
//body 1
		"TU_1Rnd_Empty",
//mid rack x2
		"TU_4Rnd_Empty",
//inner rack x2
		"TU_4Rnd_Empty",
//inner rack x3 16-21
		"TU_6Rnd_Empty",
//invisible		
		"120Rnd_CMFlare_Chaff_Magazine"};
	};
	
	class TU_Harrier_GR9_GBU: TU_Harrier_GR9_BMB {
		displayName = "BAe Harrier GR.9 (4xGBU)";
		vtol = 3;
		weapons[] = {"GAU12","BombLauncher","SidewinderLaucher","CMFlareLauncher"};
		magazines[] = {
		"300Rnd_25mm_GAU12",
//outer 2
		"TU_2Rnd_Sidewinder",
//mid 2
//inner 2
		"TU_4Rnd_GBU12",
//body 1
		"TU_1Rnd_Empty",
//mid rack x2
		"TU_4Rnd_Empty",
//inner rack x2
		"TU_4Rnd_Empty",
//inner rack x3 16-21
		"TU_6Rnd_Empty",
//invisible		
		"120Rnd_CMFlare_Chaff_Magazine"};
	};
	
	class TU_Harrier_GR9_CAS: TU_Harrier_GR9_BMB {
		displayName = "BAe Harrier GR.9 CTOL (CAS)";
		vtol = 1;
		weapons[] = {"GAU12","500lbBombLauncher","CRV7_HEPD","SidewinderLaucher","CMFlareLauncher"};
		magazines[] = {
		"300Rnd_25mm_GAU12",
//outer 2
		"TU_2Rnd_Sidewinder",
//mid 2
		"TU_2Rnd_500GP",
//inner 5-6
		"TU_2Rnd_x3_Rack_Pod",
//body 7
		"TU_1Rnd_Empty",
//mid rack x2 8-11
		"TU_4Rnd_Empty",
//inner rack x2 12-15
		"TU_4Rnd_Empty",
//inner rack x3 16-21
		"TU_1Rnd_CRV7x19Pod",
		"TU_1Rnd_CRV7x19Pod",
		"TU_1Rnd_CRV7x19Pod",
		"TU_1Rnd_CRV7x19Pod",
		"TU_1Rnd_CRV7x19Pod",
		"TU_1Rnd_CRV7x19Pod",
// rack x3 		
		"TU_114Rnd_CRV7_HEPD","120Rnd_CMFlare_Chaff_Magazine"};
	};
	
	class TU_Harrier_GR9_AT: TU_Harrier_GR9_BMB {
		displayName = "BAe Harrier GR.9 (AT)";
		vtol = 3;
		weapons[] = {"GAU12","AGM65E_Launcher","SidewinderLaucher","CMFlareLauncher"};
		magazines[] = {
		"300Rnd_25mm_GAU12",
//outer 2
		"TU_2Rnd_Sidewinder",
//mid 2
//inner 2
		"TU_4Rnd_AGM65E",
//body 1
		"TU_1Rnd_Empty",
//mid rack x2
		"TU_4Rnd_Empty",
//inner rack x2
		"TU_4Rnd_Empty",
//inner rack x3 16-21
		"TU_6Rnd_Empty",
//invisible		
		"120Rnd_CMFlare_Chaff_Magazine"};
	};
	
	class TU_Harrier_GR9_MP: TU_Harrier_GR9_BMB {
		displayName = "BAe Harrier GR.9 (Multirole)";
		vtol = 3;
		weapons[] = {"GAU12","BombLauncher","AGM65E_Launcher","SidewinderLaucher","CMFlareLauncher"};
		magazines[] = {
		"300Rnd_25mm_GAU12",
//outer 2
		"TU_2Rnd_Sidewinder",
//mid 2
		"TU_2Rnd_AGM65E",
//inner 2
		"TU_2Rnd_GBU12",
//body 1
		"TU_1Rnd_Empty",
//mid rack x2
		"TU_4Rnd_Empty",
//inner rack x2
		"TU_4Rnd_Empty",
//inner rack x3 16-21
		"TU_6Rnd_Empty",
//invisible		
		"120Rnd_CMFlare_Chaff_Magazine"};
	};
	
	class TU_AV8BWreck: PlaneWreck {
		scope = 1;
		class Armory
		{
			disabled = 1;
		};
		model = "\FRL_AV8B\FRL_AV8BWreck.p3d";
		typicalCargo[] = {};
		irTarget = 0;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		transportSoldier = 1;
		class Eventhandlers{};
	};
		
	class US_Soldier_Pilot_EP1;	// External class reference
	class US_Pilot_Light_EP1;	// External class reference
	
	class TU_NAVY_Pilot : US_Soldier_Pilot_EP1 {
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"ca\characters2\usmc\data\usmc_pilot_co.paa"};
		scope = public;
		faction = ACE_USNAVY;
		weapons[] = {"M9", "NVGoggles", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		magazines[] = {"SmokeShellRed", "SmokeShellGreen", "15Rnd_9x19_M9", "15Rnd_9x19_M9", "15Rnd_9x19_M9", "15Rnd_9x19_M9"};
		respawnWeapons[] = {"M9", "NVGoggles", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnMagazines[] = {"SmokeShellRed", "SmokeShellGreen", "15Rnd_9x19_M9", "15Rnd_9x19_M9", "15Rnd_9x19_M9", "15Rnd_9x19_M9"};
	};
	
	class TU_NAVY_Pilot_Light : US_Pilot_Light_EP1 {
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"ca\characters2\usmc\data\usmc_pilot_co.paa"};
		scope = public;
		faction = ACE_USNAVY;
		weapons[] = {"M9", "NVGoggles", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		magazines[] = {"SmokeShellRed", "SmokeShellGreen", "15Rnd_9x19_M9", "15Rnd_9x19_M9", "15Rnd_9x19_M9", "15Rnd_9x19_M9"};
		respawnWeapons[] = {"M9", "NVGoggles", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnMagazines[] = {"SmokeShellRed", "SmokeShellGreen", "15Rnd_9x19_M9", "15Rnd_9x19_M9", "15Rnd_9x19_M9", "15Rnd_9x19_M9"};
	};
	
	class TU_US_Pilot : US_Soldier_Pilot_EP1 {
		displayName = "Pilot (90s)";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\tu_air\data\pilot_A1.paa"};
		scope = public;
		weapons[] = {"M9", "NVGoggles", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		magazines[] = {"SmokeShellRed", "SmokeShellGreen", "15Rnd_9x19_M9", "15Rnd_9x19_M9", "15Rnd_9x19_M9", "15Rnd_9x19_M9"};
		respawnWeapons[] = {"M9", "NVGoggles", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnMagazines[] = {"SmokeShellRed", "SmokeShellGreen", "15Rnd_9x19_M9", "15Rnd_9x19_M9", "15Rnd_9x19_M9", "15Rnd_9x19_M9"};
	};
	
	class TU_US_Pilot_Light : US_Pilot_Light_EP1 {
		displayName = "Pilot light (90s)";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\tu_air\data\pilot_A1.paa"};
		scope = public;
		weapons[] = {"M9", "NVGoggles", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		magazines[] = {"SmokeShellRed", "SmokeShellGreen", "15Rnd_9x19_M9", "15Rnd_9x19_M9", "15Rnd_9x19_M9", "15Rnd_9x19_M9"};
		respawnWeapons[] = {"M9", "NVGoggles", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnMagazines[] = {"SmokeShellRed", "SmokeShellGreen", "15Rnd_9x19_M9", "15Rnd_9x19_M9", "15Rnd_9x19_M9", "15Rnd_9x19_M9"};
	};
	
	class TU_USMC_Pilot_Light : US_Pilot_Light_EP1 {
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"ca\characters2\usmc\data\usmc_pilot_co.paa"};
		scope = public;
		faction = USMC;
		weapons[] = {"M9", "NVGoggles", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		magazines[] = {"SmokeShellRed", "SmokeShellGreen", "15Rnd_9x19_M9", "15Rnd_9x19_M9", "15Rnd_9x19_M9", "15Rnd_9x19_M9"};
		respawnWeapons[] = {"M9", "NVGoggles", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnMagazines[] = {"SmokeShellRed", "SmokeShellGreen", "15Rnd_9x19_M9", "15Rnd_9x19_M9", "15Rnd_9x19_M9", "15Rnd_9x19_M9"};
		vehicleclass = "MenW";
	};
	
	class TU_FA18A : Plane_LG {
		ace_afterburner_engines[] = {{0.5, -8, -0.5}, {-0.5, -8, -0.5}};  //(-l\+r,-b\+f,-d\+u)
		ace_ejection_seat = "ACE_MB_Mk12";
		ace_hasafterburner = 1;
		ace_sys_air_rwr_detectable = 1;
		ace_sys_air_rwr_hasrwr = 1;
		ace_sys_air_rwr_range = 3600;
		ace_sys_air_rwr_threat_img = "\x\ace\addons\sys_air_rwr\data\rsc\threat_av.paa";
		ace_sys_air_rwr_threat_img_spo = 0;
		ace_sys_air_rwr_type = "ACE_ANALR69";
		ace_sys_eject_eject = 1;
		ace_sys_eject_jump = 0;		
		ace_sys_missileguidance_limits[] = {-90, 5, -75, 75};
		ace_sys_missileguidance_tracklimits[] = {-90, 5, -75, 75};
		scope = public;
		driverAction = "fz_f18_pilot";
		hasGunner = false;
		picture = "\js_fa18\data\UI\fa18_picture.paa";
		icon = "\js_fa18\data\UI\fa18_icon.paa";
		destrType = "DestructWreck";
		model = "\js_fa18\JC_JS_FZ_FA18E.p3d";
		animated = true;
		extCameraPosition[] = {0.0, 3.0, -20.0};
		unitInfoType = "FA18_RscUnitInfoAir";
		gearRetracting = true;
		geardowntime = 3;
		gearuptime = 4.5;
		damperSize = 0;	// max. damper amplitude
		damperForce = 0;	// larger number more stiffness dampers
		damperDamping = 0;	// larger number less movement in dampers
		formationX = 30;
		formationZ = 30;
		armor = 60;
		fuelCapacity = 1000;
		lockDetectionSystem = 8;
		incommingMisslieDetectionSystem = 8;
		radarType = 4;
		laserScanner = true;
		irTarget = true;
		insidesoundcoef = 0.5;
		irScanGround = 0;
		irScanRangeMin = 1000;
		irScanRangeMax = 7000;
		irScanToEyeFactor = 2;
		namesound = "Plane";
		envelope[] = {0.0, 0.4, 1.9, 4, 6.8, 8.3, 8.5, 8, 7.2, 5.8, 4, 1.8, 0.5, 0};
		brakeDistance = 200;	// vehicle movement precision
		aileronSensitivity = 0.8;
		elevatorsensitivity = 0.6;
		wheelSteeringSensitivity = 1.5;
		flapsFrictionCoef = 0.2;
		landingSpeed = 200;
		landingAoa = "rad 10";
		maxSpeed = 1100;	// max speed on level road, km/h
		airFriction0[] = {100, 50, 12};
		airFriction1[] = {100, 50, 12};
		airFriction2[] = {100, 50, 12};
		noseDownCoef = 0;	// how much goes nose down during turns
		gunAimDown = 0.0;
		memoryPointGun = "nosegun";
		memoryPointLMissile = "l strela";
		memoryPointRMissile = "p strela";
		memoryPointLRocket = "l raketa";
		memoryPointRRocket = "p raketa";
		memoryPointCM[] = {"flare_launcher1", "flare_launcher2"};
		memoryPointCMDir[] = {"flare_launcher1_dir", "flare_launcher2_dir"};
		sounddammage[] = {"ca\sounds\Air\AV8\int\alarm_loop1", 0.001, 1};
		soundengineoffext[] = {"ca\sounds\Air\AV8\ext\ext-jetair-stop1", 0.794328, 1, 700};
		soundengineoffint[] = {"ca\sounds\Air\AV8\int\int-av8b-stop-1", 0.562341, 1};
		soundengineonext[] = {"ca\sounds\Air\AV8\ext\ext-jetair-start1", 0.794328, 1, 700};
		soundengineonint[] = {"ca\sounds\Air\AV8\int\int-av8b-start-1", 0.562341, 1};
		soundgetin[] = {"ca\sounds\Air\AV8\ext\ext-jetair-cabine-close1", 0.0562341, 1};
		soundgetout[] = {"ca\sounds\Air\AV8\ext\ext-jetair-cabine-open1", 0.0562341, 1, 30};
		soundincommingmissile[] = {"\ca\Tracked\Data\Sound\alarm_loop1", 0.000316228, 4};
		soundlocked[] = {"\ca\Tracked\Data\Sound\alarm_loop1", 0.000316228, 2};		
		
		class Reflectors {
			class Left {
				color[] = {0.8, 0.8, 1.0, 1.0};
				ambient[] = {0.07, 0.07, 0.07, 1.0};
				position = "light_1_1_source";
				direction = "light_1_1_target";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				brightness = 1.0;
			};
			
			class right {
				color[] = {0.8, 0.8, 1.0, 1.0};
				ambient[] = {0.07, 0.07, 0.07, 1.0};
				position = "light_1_2_source";
				direction = "light_1_2_target";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 1;
				brightness = 1.0;
			};
		};
		
		class MarkerLights {
			class RedStill {
				name = "marker_light_red";
				color[] = {1.0, 0.1, 0.1, 1};
				ambient[] = {0.1, 0.01, 0.01, 1};
				brightness = 0.01;
				blinking = false;
			};
			
			class GreenStill {
				name = "marker_light_green";
				color[] = {0.1, 1.0, 0.1, 1};
				ambient[] = {0.01, 0.1, 0.01, 1};
				brightness = 0.01;
				blinking = false;
			};
			
			class Red_blinking_L {
				name = "marker_light_red_L";
				color[] = {1.0, 0.1, 0.1, 1};
				ambient[] = {0.1, 0.1, 0.1, 1};
				brightness = 0.005;
				blinking = true;
			};
			
			class Red_blinking_R {
				name = "marker_light_red_R";
				color[] = {1.0, 0.1, 0.1, 1};
				ambient[] = {0.1, 0.1, 0.1, 1};
				brightness = 0.005;
				blinking = true;
			};
		};
		
		class HitPoints {
			class HitHull {
				armor = 1;
				material = 51;
				name = "trup";
				visual = "trup";
				passThrough = true;
			};
			
			class HitEngine {
				armor = 0.25;
				material = 51;
				name = "motor";
				visual = "motor";
				passThrough = true;
			};
			
			class HitAvionics {
				armor = 0.15;
				material = 51;
				name = "elektronika";
				visual = "elektronika";
				passThrough = true;
			};
			
			class HitMissiles {
				armor = 0.1;
				material = 51;
				name = "munice";
				visual = "munice";
				passThrough = 0.5;
			};
		};
		
		class Sounds {
			class EngineLowOut {
				frequency = "1.0 min (rpm + 0.5)";
				sound[] = {"ca\sounds\Air\AV8\ext\ext-jetair-engine-low1", 2.51189, 1, 1300};
				volume = "engineOn*camPos*(rpm factor[0.85, 0])";
			};
			class EngineHighOut {
				frequency = 1;
				sound[] = {"ca\sounds\Air\AV8\ext\ext-jetair-engine-high3", 2.51189, 1.3, 1600};
				volume = "engineOn*camPos*(rpm factor[0.55, 1.0])";
			};
			class ForsageOut {
				cone[] = {3.14, 3.92, 2, 0.4};
				frequency = 1;
				sound[] = {"ca\sounds\Air\AV8\ext\ext-jetair-forsage1", 3.16228, 1.1, 2000};
				volume = "engineOn*camPos*(thrust factor[0.5, 1.0])";
			};
			class WindNoiseOut {
				frequency = "(0.1+(1.2*(speed factor[1, 150])))";
				sound[] = {"ca\sounds\Air\AV8\ext\ext-jetair-wind1", 1, 1, 100};
				volume = "camPos*(speed factor[1, 150])";
			};
			class EngineLowIn {
				frequency = "1.0 min (rpm + 0.5)";
				sound[] = {"ca\sounds\Air\AV8\int\int-av8b-engine-low", 1, 1};
				volume = "(1-camPos)*(engineOn*(rpm factor[0.85, 0]))";
			};
			class EngineHighIn {
				frequency = 1;
				sound[] = {"ca\sounds\Air\AV8\int\int-av8b-engine", 1, 1};
				volume = "(1-camPos)*(engineOn*(rpm factor[0.55, 1.0]))";
			};
			class ForsageIn {
				frequency = 1;
				sound[] = {"ca\sounds\Air\AV8\int\int-av8b-forsage-1", 0.316228, 1.1};
				volume = "(1-camPos)*(engineOn*(thrust factor[0.5, 1.0]))";
			};
			class WindNoiseIn {
				frequency = "(0.1+(1.2*(speed factor[1, 150])))";
				sound[] = {"ca\sounds\Air\AV8\int\int-jetair-wind1", 0.446684, 1};
				volume = "(1-camPos)*(speed factor[1, 150])";
			};
		};
		
		class MFD {
			class FA18_static_HUD {
				enableParallax = 0;
				
				class Pos10Vector {
					type = "vector";
					pos0[] = {0.5, 0.5};
					pos10[] = {1.225, 1.1};
				};
				topLeft = "HUD LH";
				topRight = "HUD PH";
				bottomLeft = "HUD LD";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0, 1, 0, 0.1};
				
				class Bones {
					class PlaneW {
						type = "fixed";
						pos[] = {0.485, 0.4};
					};
					
					class Velocity : Pos10Vector {
						type = "vector";
						source = "velocity";
						pos0[] = {0.5, 0.4};
						pos10[] = {1.24, 1.1};
					};
					
					class ILS_H {
						type = "ils";
						pos0[] = {0.5, 0.4};
						pos3[] = {0.722, 0.4};
					};
					
					class ILS_W : ILS_H {
						pos3[] = {0.5, 0.61};
					};
					
					class Level0 : Pos10Vector {
						pos0[] = {0.5, 0.4};
						pos10[] = {1.24, 1.1};
						type = "horizon";
						angle = 0;
					};
					
					class LevelP5 : Level0 {
						angle = 5;
					};
					
					class LevelM5 : Level0 {
						angle = -5;
					};
					
					class LevelP10 : Level0 {
						angle = 10;
					};
					
					class LevelM10 : Level0 {
						angle = -10;
					};
					
					class LevelP15 : Level0 {
						angle = 15;
					};
					
					class LevelM15 : Level0 {
						angle = -15;
					};
					
					class LevelP20 : Level0 {
						angle = 20;
					};
					
					class LevelM20 : Level0 {
						angle = -20;
					};
					
					class LevelP25 : Level0 {
						angle = 25;
					};
					
					class LevelM25 : Level0 {
						angle = -25;
					};
					
					class LevelP30 : Level0 {
						angle = 30;
					};
					
					class LevelM30 : Level0 {
						angle = -30;
					};
					
					class LevelP35 : Level0 {
						angle = 35;
					};
					
					class LevelM35 : Level0 {
						angle = -35;
					};
					
					class LevelP40 : Level0 {
						angle = 40;
					};
					
					class LevelM40 : Level0 {
						angle = -40;
					};
					
					class LevelP45 : Level0 {
						angle = 45;
					};
					
					class LevelM45 : Level0 {
						angle = -45;
					};
					
					class LevelP50 : Level0 {
						angle = 50;
					};
					
					class LevelM50 : Level0 {
						angle = -50;
					};
				};
				
				class Draw {
					alpha = 1.0;
					color[] = {0.0, 0.3, 0.05};
					condition = "on";
					
					class PlaneW {
						clipTL[] = {0.0, 1.0};
						clipBR[] = {1.0, 0.0};
						type = "line";
						points[] = {{"PlaneW", {-0.08, 0}, 1}, {"PlaneW", {-0.03, 0}, 1}, {"PlaneW", {-0.015, 0.0283784}, 1}, {"PlaneW", {0.0, 0}, 1}, {"PlaneW", {0.015, 0.0283784}, 1}, {"PlaneW", {0.03, 0}, 1}, {"PlaneW", {0.08, 0}, 1}};
					};
					
					class PlaneHeading {
						clipTL[] = {0.0, 1.0};
						clipBR[] = {1.0, 0.0};
						type = "line";
						points[] = {{"Velocity", {0, -0.0189189}, 1}, {"Velocity", {0.014, -0.0132432}, 1}, {"Velocity", {0.02, 0}, 1}, {"Velocity", {0.014, 0.0132432}, 1}, {"Velocity", {0, 0.0189189}, 1}, {"Velocity", {-0.014, 0.0132432}, 1}, {"Velocity", {-0.02, 0}, 1}, {"Velocity", {-0.014, -0.0132432}, 1}, {"Velocity", {0, -0.0189189}, 1}, {}, {"Velocity", {0.04, 0}, 1}, {"Velocity", {0.02, 0}, 1}, {}, {"Velocity", {-0.04, 0}, 1}, {"Velocity", {-0.02, 0}, 1}, {}, {"Velocity", {0, -0.0378378}, 1}, {"Velocity", {0, -0.0189189}, 1}, {}};
					};
					
					class Static {
						clipTL[] = {0.0, 0.1};
						clipBR[] = {1.0, 0.0};
						type = "line";
						points[] = {{{0.21, 0.52}, 1}, {{0.19, 0.5}, 1}, {{0.21, 0.48}, 1}, {}, {{0.18, 0.2}, 1}, {{0.18, 0.85}, 1}, {}, {{0.79, 0.52}, 1}, {{0.81, 0.5}, 1}, {{0.79, 0.48}, 1}, {}, {{0.82, 0.2}, 1}, {{0.82, 0.85}, 1}, {}, {{0.52, 0.08+0.01}, 1}, {{0.5, 0.06+0.01}, 1}, {{0.48, 0.08+0.01}, 1}, {}, {{0.2, 0.055+0.01}, 1}, {{0.8, 0.055+0.01}, 1}, {}};
					};
					
					class Horizont {
						clipTL[] = {0.0, 0.0};
						clipBR[] = {1.0, 1.0};
						
						class Dimmed {
							class Level0 {
								type = "line";
								points[] = {{"Level0", {-0.2, 0}, 1}, {"Level0", {-0.05, 0}, 1}, {}, {"Level0", {0.05, 0}, 1}, {"Level0", {0.2, 0}, 1}};
							};
							
							class VALM_1_0 {
								type = "text";
								source = "static";
								text = 0;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"Level0", {-0.23, -0.025}, 1};
								right[] = {"Level0", {-0.13, -0.025}, 1};
								down[] = {"Level0", {-0.23, 0.025}, 1};
							};
							
							class VALM_2_0 : VALM_1_0 {
								align = "right";
								pos[] = {"Level0", {0.22, -0.025}, 1};
								right[] = {"Level0", {0.32, -0.025}, 1};
								down[] = {"Level0", {0.22, 0.025}, 1};
							};
							
							class LevelM5 : Level0 {
								type = "line";
								points[] = {{"LevelM5", {-0.2, -0.03}, 1}, {"LevelM5", {-0.2, 0}, 1}, {"LevelM5", {-0.15, 0}, 1}, {}, {"LevelM5", {-0.1, 0}, 1}, {"LevelM5", {-0.05, 0}, 1}, {}, {"LevelM5", {0.05, 0}, 1}, {"LevelM5", {0.1, 0}, 1}, {}, {"LevelM5", {0.15, 0}, 1}, {"LevelM5", {0.2, 0}, 1}, {"LevelM5", {0.2, -0.03}, 1}};
							};
							
							class VALM_1_5 {
								type = "text";
								source = "static";
								text = -5;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM5", {-0.23, -0.085}, 1};
								right[] = {"LevelM5", {-0.13, -0.085}, 1};
								down[] = {"LevelM5", {-0.23, -0.035}, 1};
							};
							
							class VALM_2_5 : VALM_1_5 {
								align = "right";
								pos[] = {"LevelM5", {0.22, -0.085}, 1};
								right[] = {"LevelM5", {0.32, -0.085}, 1};
								down[] = {"LevelM5", {0.22, -0.035}, 1};
							};
							
							class LevelP5 : Level0 {
								type = "line";
								points[] = {{"LevelP5", {-0.2, 0.03}, 1}, {"LevelP5", {-0.2, 0}, 1}, {"LevelP5", {-0.05, 0}, 1}, {}, {"LevelP5", {0.05, 0}, 1}, {"LevelP5", {0.2, 0}, 1}, {"LevelP5", {0.2, 0.03}, 1}};
							};
							
							class VALP_1_5 {
								type = "text";
								source = "static";
								text = "5";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP5", {-0.23, 0.035}, 1};
								right[] = {"LevelP5", {-0.13, 0.035}, 1};
								down[] = {"LevelP5", {-0.23, 0.085}, 1};
							};
							
							class VALP_2_5 : VALP_1_5 {
								align = "right";
								pos[] = {"LevelP5", {0.22, 0.035}, 1};
								right[] = {"LevelP5", {0.32, 0.035}, 1};
								down[] = {"LevelP5", {0.22, 0.085}, 1};
							};
							
							class LevelM10 : Level0 {
								type = "line";
								points[] = {{"LevelM10", {-0.2, -0.03}, 1}, {"LevelM10", {-0.2, 0}, 1}, {"LevelM10", {-0.15, 0}, 1}, {}, {"LevelM10", {-0.1, 0}, 1}, {"LevelM10", {-0.05, 0}, 1}, {}, {"LevelM10", {0.05, 0}, 1}, {"LevelM10", {0.1, 0}, 1}, {}, {"LevelM10", {0.15, 0}, 1}, {"LevelM10", {0.2, 0}, 1}, {"LevelM10", {0.2, -0.03}, 1}};
							};
							
							class VALM_1_10 {
								type = "text";
								source = "static";
								text = -10;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM10", {-0.23, -0.085}, 1};
								right[] = {"LevelM10", {-0.13, -0.085}, 1};
								down[] = {"LevelM10", {-0.23, -0.035}, 1};
							};
							
							class VALM_2_10 : VALM_1_10 {
								align = "right";
								pos[] = {"LevelM10", {0.22, -0.085}, 1};
								right[] = {"LevelM10", {0.32, -0.085}, 1};
								down[] = {"LevelM10", {0.22, -0.035}, 1};
							};
							
							class LevelP10 : Level0 {
								type = "line";
								points[] = {{"LevelP10", {-0.2, 0.03}, 1}, {"LevelP10", {-0.2, 0}, 1}, {"LevelP10", {-0.05, 0}, 1}, {}, {"LevelP10", {0.05, 0}, 1}, {"LevelP10", {0.2, 0}, 1}, {"LevelP10", {0.2, 0.03}, 1}};
							};
							
							class VALP_1_10 {
								type = "text";
								source = "static";
								text = "10";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP10", {-0.23, 0.035}, 1};
								right[] = {"LevelP10", {-0.13, 0.035}, 1};
								down[] = {"LevelP10", {-0.23, 0.085}, 1};
							};
							
							class VALP_2_10 : VALP_1_10 {
								align = "right";
								pos[] = {"LevelP10", {0.22, 0.035}, 1};
								right[] = {"LevelP10", {0.32, 0.035}, 1};
								down[] = {"LevelP10", {0.22, 0.085}, 1};
							};
							
							class LevelM15 : Level0 {
								type = "line";
								points[] = {{"LevelM15", {-0.2, -0.03}, 1}, {"LevelM15", {-0.2, 0}, 1}, {"LevelM15", {-0.15, 0}, 1}, {}, {"LevelM15", {-0.1, 0}, 1}, {"LevelM15", {-0.05, 0}, 1}, {}, {"LevelM15", {0.05, 0}, 1}, {"LevelM15", {0.1, 0}, 1}, {}, {"LevelM15", {0.15, 0}, 1}, {"LevelM15", {0.2, 0}, 1}, {"LevelM15", {0.2, -0.03}, 1}};
							};
							
							class VALM_1_15 {
								type = "text";
								source = "static";
								text = -15;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM15", {-0.23, -0.085}, 1};
								right[] = {"LevelM15", {-0.13, -0.085}, 1};
								down[] = {"LevelM15", {-0.23, -0.035}, 1};
							};
							
							class VALM_2_15 : VALM_1_15 {
								align = "right";
								pos[] = {"LevelM15", {0.22, -0.085}, 1};
								right[] = {"LevelM15", {0.32, -0.085}, 1};
								down[] = {"LevelM15", {0.22, -0.035}, 1};
							};
							
							class LevelP15 : Level0 {
								type = "line";
								points[] = {{"LevelP15", {-0.2, 0.03}, 1}, {"LevelP15", {-0.2, 0}, 1}, {"LevelP15", {-0.05, 0}, 1}, {}, {"LevelP15", {0.05, 0}, 1}, {"LevelP15", {0.2, 0}, 1}, {"LevelP15", {0.2, 0.03}, 1}};
							};
							
							class VALP_1_15 {
								type = "text";
								source = "static";
								text = "15";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP15", {-0.23, 0.035}, 1};
								right[] = {"LevelP15", {-0.13, 0.035}, 1};
								down[] = {"LevelP15", {-0.23, 0.085}, 1};
							};
							
							class VALP_2_15 : VALP_1_15 {
								align = "right";
								pos[] = {"LevelP15", {0.22, 0.035}, 1};
								right[] = {"LevelP15", {0.32, 0.035}, 1};
								down[] = {"LevelP15", {0.22, 0.085}, 1};
							};
							
							class LevelM20 : Level0 {
								type = "line";
								points[] = {{"LevelM20", {-0.2, -0.03}, 1}, {"LevelM20", {-0.2, 0}, 1}, {"LevelM20", {-0.15, 0}, 1}, {}, {"LevelM20", {-0.1, 0}, 1}, {"LevelM20", {-0.05, 0}, 1}, {}, {"LevelM20", {0.05, 0}, 1}, {"LevelM20", {0.1, 0}, 1}, {}, {"LevelM20", {0.15, 0}, 1}, {"LevelM20", {0.2, 0}, 1}, {"LevelM20", {0.2, -0.03}, 1}};
							};
							
							class VALM_1_20 {
								type = "text";
								source = "static";
								text = -20;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM20", {-0.23, -0.085}, 1};
								right[] = {"LevelM20", {-0.13, -0.085}, 1};
								down[] = {"LevelM20", {-0.23, -0.035}, 1};
							};
							
							class VALM_2_20 : VALM_1_20 {
								align = "right";
								pos[] = {"LevelM20", {0.22, -0.085}, 1};
								right[] = {"LevelM20", {0.32, -0.085}, 1};
								down[] = {"LevelM20", {0.22, -0.035}, 1};
							};
							
							class LevelP20 : Level0 {
								type = "line";
								points[] = {{"LevelP20", {-0.2, 0.03}, 1}, {"LevelP20", {-0.2, 0}, 1}, {"LevelP20", {-0.05, 0}, 1}, {}, {"LevelP20", {0.05, 0}, 1}, {"LevelP20", {0.2, 0}, 1}, {"LevelP20", {0.2, 0.03}, 1}};
							};
							
							class VALP_1_20 {
								type = "text";
								source = "static";
								text = "20";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP20", {-0.23, 0.035}, 1};
								right[] = {"LevelP20", {-0.13, 0.035}, 1};
								down[] = {"LevelP20", {-0.23, 0.085}, 1};
							};
							
							class VALP_2_20 : VALP_1_20 {
								align = "right";
								pos[] = {"LevelP20", {0.22, 0.035}, 1};
								right[] = {"LevelP20", {0.32, 0.035}, 1};
								down[] = {"LevelP20", {0.22, 0.085}, 1};
							};
							
							class LevelM25 : Level0 {
								type = "line";
								points[] = {{"LevelM25", {-0.2, -0.03}, 1}, {"LevelM25", {-0.2, 0}, 1}, {"LevelM25", {-0.15, 0}, 1}, {}, {"LevelM25", {-0.1, 0}, 1}, {"LevelM25", {-0.05, 0}, 1}, {}, {"LevelM25", {0.05, 0}, 1}, {"LevelM25", {0.1, 0}, 1}, {}, {"LevelM25", {0.15, 0}, 1}, {"LevelM25", {0.2, 0}, 1}, {"LevelM25", {0.2, -0.03}, 1}};
							};
							
							class VALM_1_25 {
								type = "text";
								source = "static";
								text = -25;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM25", {-0.23, -0.085}, 1};
								right[] = {"LevelM25", {-0.13, -0.085}, 1};
								down[] = {"LevelM25", {-0.23, -0.035}, 1};
							};
							
							class VALM_2_25 : VALM_1_25 {
								align = "right";
								pos[] = {"LevelM25", {0.22, -0.085}, 1};
								right[] = {"LevelM25", {0.32, -0.085}, 1};
								down[] = {"LevelM25", {0.22, -0.035}, 1};
							};
							
							class LevelP25 : Level0 {
								type = "line";
								points[] = {{"LevelP25", {-0.2, 0.03}, 1}, {"LevelP25", {-0.2, 0}, 1}, {"LevelP25", {-0.05, 0}, 1}, {}, {"LevelP25", {0.05, 0}, 1}, {"LevelP25", {0.2, 0}, 1}, {"LevelP25", {0.2, 0.03}, 1}};
							};
							
							class VALP_1_25 {
								type = "text";
								source = "static";
								text = "25";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP25", {-0.23, 0.035}, 1};
								right[] = {"LevelP25", {-0.13, 0.035}, 1};
								down[] = {"LevelP25", {-0.23, 0.085}, 1};
							};
							
							class VALP_2_25 : VALP_1_25 {
								align = "right";
								pos[] = {"LevelP25", {0.22, 0.035}, 1};
								right[] = {"LevelP25", {0.32, 0.035}, 1};
								down[] = {"LevelP25", {0.22, 0.085}, 1};
							};
							
							class LevelM30 : Level0 {
								type = "line";
								points[] = {{"LevelM30", {-0.2, -0.03}, 1}, {"LevelM30", {-0.2, 0}, 1}, {"LevelM30", {-0.15, 0}, 1}, {}, {"LevelM30", {-0.1, 0}, 1}, {"LevelM30", {-0.05, 0}, 1}, {}, {"LevelM30", {0.05, 0}, 1}, {"LevelM30", {0.1, 0}, 1}, {}, {"LevelM30", {0.15, 0}, 1}, {"LevelM30", {0.2, 0}, 1}, {"LevelM30", {0.2, -0.03}, 1}};
							};
							
							class VALM_1_30 {
								type = "text";
								source = "static";
								text = -30;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM30", {-0.23, -0.085}, 1};
								right[] = {"LevelM30", {-0.13, -0.085}, 1};
								down[] = {"LevelM30", {-0.23, -0.035}, 1};
							};
							
							class VALM_2_30 : VALM_1_30 {
								align = "right";
								pos[] = {"LevelM30", {0.22, -0.085}, 1};
								right[] = {"LevelM30", {0.32, -0.085}, 1};
								down[] = {"LevelM30", {0.22, -0.035}, 1};
							};
							
							class LevelP30 : Level0 {
								type = "line";
								points[] = {{"LevelP30", {-0.2, 0.03}, 1}, {"LevelP30", {-0.2, 0}, 1}, {"LevelP30", {-0.05, 0}, 1}, {}, {"LevelP30", {0.05, 0}, 1}, {"LevelP30", {0.2, 0}, 1}, {"LevelP30", {0.2, 0.03}, 1}};
							};
							
							class VALP_1_30 {
								type = "text";
								source = "static";
								text = "30";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP30", {-0.23, 0.035}, 1};
								right[] = {"LevelP30", {-0.13, 0.035}, 1};
								down[] = {"LevelP30", {-0.23, 0.085}, 1};
							};
							
							class VALP_2_30 : VALP_1_30 {
								align = "right";
								pos[] = {"LevelP30", {0.22, 0.035}, 1};
								right[] = {"LevelP30", {0.32, 0.035}, 1};
								down[] = {"LevelP30", {0.22, 0.085}, 1};
							};
							
							class LevelM35 : Level0 {
								type = "line";
								points[] = {{"LevelM35", {-0.2, -0.03}, 1}, {"LevelM35", {-0.2, 0}, 1}, {"LevelM35", {-0.15, 0}, 1}, {}, {"LevelM35", {-0.1, 0}, 1}, {"LevelM35", {-0.05, 0}, 1}, {}, {"LevelM35", {0.05, 0}, 1}, {"LevelM35", {0.1, 0}, 1}, {}, {"LevelM35", {0.15, 0}, 1}, {"LevelM35", {0.2, 0}, 1}, {"LevelM35", {0.2, -0.03}, 1}};
							};
							
							class VALM_1_35 {
								type = "text";
								source = "static";
								text = -35;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM35", {-0.23, -0.085}, 1};
								right[] = {"LevelM35", {-0.13, -0.085}, 1};
								down[] = {"LevelM35", {-0.23, -0.035}, 1};
							};
							
							class VALM_2_35 : VALM_1_35 {
								align = "right";
								pos[] = {"LevelM35", {0.22, -0.085}, 1};
								right[] = {"LevelM35", {0.32, -0.085}, 1};
								down[] = {"LevelM35", {0.22, -0.035}, 1};
							};
							
							class LevelP35 : Level0 {
								type = "line";
								points[] = {{"LevelP35", {-0.2, 0.03}, 1}, {"LevelP35", {-0.2, 0}, 1}, {"LevelP35", {-0.05, 0}, 1}, {}, {"LevelP35", {0.05, 0}, 1}, {"LevelP35", {0.2, 0}, 1}, {"LevelP35", {0.2, 0.03}, 1}};
							};
							
							class VALP_1_35 {
								type = "text";
								source = "static";
								text = "35";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP35", {-0.23, 0.035}, 1};
								right[] = {"LevelP35", {-0.13, 0.035}, 1};
								down[] = {"LevelP35", {-0.23, 0.085}, 1};
							};
							
							class VALP_2_35 : VALP_1_35 {
								align = "right";
								pos[] = {"LevelP35", {0.22, 0.035}, 1};
								right[] = {"LevelP35", {0.32, 0.035}, 1};
								down[] = {"LevelP35", {0.22, 0.085}, 1};
							};
							
							class LevelM40 : Level0 {
								type = "line";
								points[] = {{"LevelM40", {-0.2, -0.03}, 1}, {"LevelM40", {-0.2, 0}, 1}, {"LevelM40", {-0.15, 0}, 1}, {}, {"LevelM40", {-0.1, 0}, 1}, {"LevelM40", {-0.05, 0}, 1}, {}, {"LevelM40", {0.05, 0}, 1}, {"LevelM40", {0.1, 0}, 1}, {}, {"LevelM40", {0.15, 0}, 1}, {"LevelM40", {0.2, 0}, 1}, {"LevelM40", {0.2, -0.03}, 1}};
							};
							
							class VALM_1_40 {
								type = "text";
								source = "static";
								text = -40;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM40", {-0.23, -0.085}, 1};
								right[] = {"LevelM40", {-0.13, -0.085}, 1};
								down[] = {"LevelM40", {-0.23, -0.035}, 1};
							};
							
							class VALM_2_40 : VALM_1_40 {
								align = "right";
								pos[] = {"LevelM40", {0.22, -0.085}, 1};
								right[] = {"LevelM40", {0.32, -0.085}, 1};
								down[] = {"LevelM40", {0.22, -0.035}, 1};
							};
							
							class LevelP40 : Level0 {
								type = "line";
								points[] = {{"LevelP40", {-0.2, 0.03}, 1}, {"LevelP40", {-0.2, 0}, 1}, {"LevelP40", {-0.05, 0}, 1}, {}, {"LevelP40", {0.05, 0}, 1}, {"LevelP40", {0.2, 0}, 1}, {"LevelP40", {0.2, 0.03}, 1}};
							};
							
							class VALP_1_40 {
								type = "text";
								source = "static";
								text = "40";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP40", {-0.23, 0.035}, 1};
								right[] = {"LevelP40", {-0.13, 0.035}, 1};
								down[] = {"LevelP40", {-0.23, 0.085}, 1};
							};
							
							class VALP_2_40 : VALP_1_40 {
								align = "right";
								pos[] = {"LevelP40", {0.22, 0.035}, 1};
								right[] = {"LevelP40", {0.32, 0.035}, 1};
								down[] = {"LevelP40", {0.22, 0.085}, 1};
							};
							
							class LevelM45 : Level0 {
								type = "line";
								points[] = {{"LevelM45", {-0.2, -0.03}, 1}, {"LevelM45", {-0.2, 0}, 1}, {"LevelM45", {-0.15, 0}, 1}, {}, {"LevelM45", {-0.1, 0}, 1}, {"LevelM45", {-0.05, 0}, 1}, {}, {"LevelM45", {0.05, 0}, 1}, {"LevelM45", {0.1, 0}, 1}, {}, {"LevelM45", {0.15, 0}, 1}, {"LevelM45", {0.2, 0}, 1}, {"LevelM45", {0.2, -0.03}, 1}};
							};
							
							class VALM_1_45 {
								type = "text";
								source = "static";
								text = -45;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM45", {-0.23, -0.085}, 1};
								right[] = {"LevelM45", {-0.13, -0.085}, 1};
								down[] = {"LevelM45", {-0.23, -0.035}, 1};
							};
							
							class VALM_2_45 : VALM_1_45 {
								align = "right";
								pos[] = {"LevelM45", {0.22, -0.085}, 1};
								right[] = {"LevelM45", {0.32, -0.085}, 1};
								down[] = {"LevelM45", {0.22, -0.035}, 1};
							};
							
							class LevelP45 : Level0 {
								type = "line";
								points[] = {{"LevelP45", {-0.2, 0.03}, 1}, {"LevelP45", {-0.2, 0}, 1}, {"LevelP45", {-0.05, 0}, 1}, {}, {"LevelP45", {0.05, 0}, 1}, {"LevelP45", {0.2, 0}, 1}, {"LevelP45", {0.2, 0.03}, 1}};
							};
							
							class VALP_1_45 {
								type = "text";
								source = "static";
								text = "45";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP45", {-0.23, 0.035}, 1};
								right[] = {"LevelP45", {-0.13, 0.035}, 1};
								down[] = {"LevelP45", {-0.23, 0.085}, 1};
							};
							
							class VALP_2_45 : VALP_1_45 {
								align = "right";
								pos[] = {"LevelP45", {0.22, 0.035}, 1};
								right[] = {"LevelP45", {0.32, 0.035}, 1};
								down[] = {"LevelP45", {0.22, 0.085}, 1};
							};
							
							class LevelM50 : Level0 {
								type = "line";
								points[] = {{"LevelM50", {-0.2, -0.03}, 1}, {"LevelM50", {-0.2, 0}, 1}, {"LevelM50", {-0.15, 0}, 1}, {}, {"LevelM50", {-0.1, 0}, 1}, {"LevelM50", {-0.05, 0}, 1}, {}, {"LevelM50", {0.05, 0}, 1}, {"LevelM50", {0.1, 0}, 1}, {}, {"LevelM50", {0.15, 0}, 1}, {"LevelM50", {0.2, 0}, 1}, {"LevelM50", {0.2, -0.03}, 1}};
							};
							
							class VALM_1_50 {
								type = "text";
								source = "static";
								text = -50;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM50", {-0.23, -0.085}, 1};
								right[] = {"LevelM50", {-0.13, -0.085}, 1};
								down[] = {"LevelM50", {-0.23, -0.035}, 1};
							};
							
							class VALM_2_50 : VALM_1_50 {
								align = "right";
								pos[] = {"LevelM50", {0.22, -0.085}, 1};
								right[] = {"LevelM50", {0.32, -0.085}, 1};
								down[] = {"LevelM50", {0.22, -0.035}, 1};
							};
							
							class LevelP50 : Level0 {
								type = "line";
								points[] = {{"LevelP50", {-0.2, 0.03}, 1}, {"LevelP50", {-0.2, 0}, 1}, {"LevelP50", {-0.05, 0}, 1}, {}, {"LevelP50", {0.05, 0}, 1}, {"LevelP50", {0.2, 0}, 1}, {"LevelP50", {0.2, 0.03}, 1}};
							};
							
							class VALP_1_50 {
								type = "text";
								source = "static";
								text = "50";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP50", {-0.23, 0.035}, 1};
								right[] = {"LevelP50", {-0.13, 0.035}, 1};
								down[] = {"LevelP50", {-0.23, 0.085}, 1};
							};
							
							class VALP_2_50 : VALP_1_50 {
								align = "right";
								pos[] = {"LevelP50", {0.22, 0.035}, 1};
								right[] = {"LevelP50", {0.32, 0.035}, 1};
								down[] = {"LevelP50", {0.22, 0.085}, 1};
							};
						};
					};
					
					class AltScale {
						type = "scale";
						scale = 1;
						source = "altitudeASL";
						sourceScale = 1;
						align = "right";
						pos[] = {0.86, 0.82};
						right[] = {0.94, 0.82};
						down[] = {0.86, 0.87};
						lineXleft = 0.825;
						lineYright = 0.835;
						lineXleftMajor = 0.825;
						lineYrightMajor = 0.845;
						bottom = 0.2;
						top = 0.85;
						center = 0.5;
						step = 20;
						StepSize = (0.85- 0.2)/20;
						horizontal = 0;
						min = "none";
						max = "none";
						numberEach = 5;
						majorLineEach = 5;
					};
					
					class SpeedScale {
						type = "scale";
						scale = 1;
						source = "speed";
						sourceScale = 3.6;
						align = "right";
						pos[] = {0.06, 0.82-0.85+0.2};
						right[] = {0.14, 0.82-0.85+0.2};
						down[] = {0.06, 0.87-0.85+0.2};
						lineXleft = 0.18 + 0.82 - 0.825;
						lineYright = 0.18 + 0.82 - 0.835;
						lineXleftMajor = 0.18 + 0.82 - 0.825;
						lineYrightMajor = 0.18 + 0.82 - 0.845;
						bottom = 0.85;
						center = 0.5;
						top = 0.2;
						step = 20;
						StepSize = (0.85- 0.2)/20;
						horizontal = 0;
						min = "none";
						max = "none";
						numberEach = 5;
						majorLineEach = 5;
					};
					
					class Gear {
						condition = "ils";
						
						class text {
							type = "text";
							source = "static";
							text = GEAR;
							align = "right";
							scale = 0.5;
							sourceScale = 1;
							pos[] = {{0.84, 0.88}, 1};
							right[] = {{0.9, 0.88}, 1};
							down[] = {{0.84, 0.92}, 1};
						};
					};
					
					class Flaps {
						condition = "flaps";
						
						class text {
							type = "text";
							source = "static";
							text = FLAPS;
							align = "right";
							scale = 0.5;
							sourceScale = 1;
							pos[] = {{0.84, 0.93}, 1};
							right[] = {{0.9, 0.93}, 1};
							down[] = {{0.84, 0.97}, 1};
						};
					};
					
					class weapons {
						type = "text";
						source = "weapon";
						align = "right";
						scale = 0.5;
						sourceScale = 1;
						pos[] = {{0.1, 0.88}, 1};
						right[] = {{0.16, 0.88}, 1};
						down[] = {{0.1, 0.92}, 1};
					};
					
					class ammo {
						type = "text";
						source = "ammo";
						align = "right";
						scale = 0.5;
						sourceScale = 1;
						pos[] = {{0.1, 0.93}, 1};
						right[] = {{0.16, 0.93}, 1};
						down[] = {{0.1, 0.97}, 1};
					};
					
					class VspeedNumber {
						type = "text";
						align = "right";
						scale = 1;
						source = "vspeed";
						sourceScale = 1;
						pos[] = {{0.86, 0.52-0.4}, 1};
						right[] = {{0.94, 0.52-0.4}, 1};
						down[] = {{0.86, 0.57-0.4}, 1};
					};
					
					class HeadingScale {
						type = "scale";
						scale = 1;
						source = "Heading";
						sourceScale = 1;
						align = "center";
						pos[] = {0.21-0.01, 0.0};
						right[] = {0.29-0.01, 0.0};
						down[] = {0.21-0.01, 0.05};
						lineXleft = 0.06;
						lineYright = 0.05;
						lineXleftMajor = 0.06;
						lineYrightMajor = 0.04;
						bottom = 0.8;
						center = 0.5;
						top = 0.2;
						step = 18/9;
						StepSize = (0.80- 0.2)/20;
						horizontal = 1;
						min = "none";
						max = "none";
						numberEach = 5;
						majorLineEach = 5;
					};
					
					class ILS {
						condition = "ils";
						
						class Glideslope {
							clipTL[] = {0.0, 0.0};
							clipBR[] = {1.0, 1.0};
							
							class ILS {
								type = "line";
								points[] = {{ILS_W, {-0.24, 0}, 1}, {ILS_W, {0.24, 0}, 1}, {}, {ILS_W, {0, 0.0227027}, 1}, {ILS_W, {0, -0.0227027}, 1}, {}, {ILS_W, {0.12, 0.0227027}, 1}, {ILS_W, {0.12, -0.0227027}, 1}, {}, {ILS_W, {0.24, 0.0227027}, 1}, {ILS_W, {0.24, -0.0227027}, 1}, {}, {ILS_W, {-0.12, 0.0227027}, 1}, {ILS_W, {-0.12, -0.0227027}, 1}, {}, {ILS_W, {-0.24, 0.0227027}, 1}, {ILS_W, {-0.24, -0.0227027}, 1}, {}, {ILS_H, {0, -0.227027}, 1}, {ILS_H, {0, 0.227027}, 1}, {}, {ILS_H, {0.024, 0}, 1}, {ILS_H, {-0.024, 0}, 1}, {}, {ILS_H, {0.024, 0.113514}, 1}, {ILS_H, {-0.024, 0.113514}, 1}, {}, {ILS_H, {0.024, 0.227027}, 1}, {ILS_H, {-0.024, 0.227027}, 1}, {}, {ILS_H, {0.024, -0.113514}, 1}, {ILS_H, {-0.024, -0.113514}, 1}, {}, {ILS_H, {0.024, -0.227027}, 1}, {ILS_H, {-0.024, -0.227027}, 1}};
							};
						};
					};
				};
			};
			
			class FA18_Parallax_HUD {
				enableParallax = 1;
				
				class Pos10Vector {
					type = "vector";
					pos0[] = {0.485, 0.33};
					pos10[] = {1.225, 1.1};
				};
				topLeft = "HUD LH";
				topRight = "HUD PH";
				bottomLeft = "HUD LD";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0, 1, 0, 0.1};
				
				class Bones {
					class WeaponAim : Pos10Vector {
						source = "weapon";
					};
					
					class BombAim : WeaponAim {
						pos0[] = {0.485, 0.53};
						source = "weapon";
					};
					
					class Target : Pos10Vector {
						source = "target";
					};
				};
				
				class Draw {
					alpha = 1.0;
					color[] = {0.0, 0.3, 0.05};
					condition = "on";
					
					class RadarTargets {
						points[] = {};
						pos0[] = {0.485, 0.4};
						pos10[] = {1.225, 1.1};
						type = "radar";
					};
					
					class MGun {
						condition = "mgun";
						enableParallax = 1;
						
						class Circle {
							type = "line";
							points[] = {{"WeaponAim", {0.01, 0}, 1}, {"WeaponAim", {-0.01, 0}, 1}, {}, {"WeaponAim", {0, 0.00945946}, 1}, {"WeaponAim", {0, -0.00945946}, 1}, {}, {"WeaponAim", {0, -0.0662162}, 1}, {"WeaponAim", {0.049, -0.0463514}, 1}, {"WeaponAim", {0.07, 0}, 1}, {"WeaponAim", {0.049, 0.0463514}, 1}, {"WeaponAim", {0, 0.0662162}, 1}, {"WeaponAim", {-0.049, 0.0463514}, 1}, {"WeaponAim", {-0.07, 0}, 1}, {"WeaponAim", {-0.049, -0.0463514}, 1}, {"WeaponAim", {0, -0.0662162}, 1}, {}, {"WeaponAim", {0, -0.132432}, 1}, {"WeaponAim", {0.07, -0.115216}, 1}, {"WeaponAim", {0.1218, -0.0662162}, 1}, {"WeaponAim", {0.14, 0}, 1}, {"WeaponAim", {0.1218, 0.0662162}, 1}, {"WeaponAim", {0.07, 0.115216}, 1}, {"WeaponAim", {0, 0.132432}, 1}, {"WeaponAim", {-0.07, 0.115216}, 1}, {"WeaponAim", {-0.1218, 0.0662162}, 1}, {"WeaponAim", {-0.14, 0}, 1}, {"WeaponAim", {-0.1218, -0.0662162}, 1}, {"WeaponAim", {-0.07, -0.115216}, 1}, {"WeaponAim", {0, -0.132432}, 1}, {}, {"WeaponAim", {0, -0.132432}, 1}, {"WeaponAim", {0, -0.151351}, 1}, {}, {"WeaponAim", {-0.07, -0.11469}, 1}, {"WeaponAim", {-0.08, -0.131074}, 1}, {}, {"WeaponAim", {-0.121244, -0.0662162}, 1}, {"WeaponAim", {-0.138564, -0.0756757}, 1}, {}, {"WeaponAim", {-0.14, 5.78881e-009}, 1}, {"WeaponAim", {-0.16, 6.61578e-009}, 1}, {}, {"WeaponAim", {-0.121244, 0.0662162}, 1}, {"WeaponAim", {-0.138564, 0.0756757}, 1}, {}, {"WeaponAim", {-0.07, 0.11469}, 1}, {"WeaponAim", {-0.08, 0.131074}, 1}, {}, {"WeaponAim", {1.22392e-008, 0.132432}, 1}, {"WeaponAim", {1.39876e-008, 0.151351}, 1}, {}, {"WeaponAim", {0.07, 0.11469}, 1}, {"WeaponAim", {0.08, 0.131074}, 1}, {}, {"WeaponAim", {0.121244, 0.0662162}, 1}, {"WeaponAim", {0.138564, 0.0756757}, 1}, {}, {"WeaponAim", {0.14, -1.57924e-009}, 1}, {"WeaponAim", {0.16, -1.80485e-009}, 1}, {}, {"WeaponAim", {0.121244, -0.0662162}, 1}, {"WeaponAim", {0.138564, -0.0756757}, 1}, {}, {"WeaponAim", {0.07, -0.11469}, 1}, {"WeaponAim", {0.08, -0.131074}, 1}, {}};
						};
					};
					
					class Bomb {
						condition = "bomb";
						
						class Circle {
							type = "line";
							points[] = {{"BombAim", {0, -0.0945946}, 1}, {"BombAim", {0.05, -0.0822973}, 1}, {"BombAim", {0.087, -0.0472973}, 1}, {"BombAim", {0.1, 0}, 1}, {"BombAim", {0.087, 0.0472973}, 1}, {"BombAim", {0.05, 0.0822973}, 1}, {"BombAim", {0, 0.0945946}, 1}, {"BombAim", {-0.05, 0.0822973}, 1}, {"BombAim", {-0.087, 0.0472973}, 1}, {"BombAim", {-0.1, 0}, 1}, {"BombAim", {-0.087, -0.0472973}, 1}, {"BombAim", {-0.05, -0.0822973}, 1}, {"BombAim", {0, -0.0945946}, 1}, {}, {"Velocity", 0.001, "BombAim", {0.0, 0.0}, 1}, {"Velocity", {0.0, 0.0}, 1}, {}, {"Target", {0, -0.0662162}, 1}, {"Target", {0.07, 0}, 1}, {"Target", {0, 0.0662162}, 1}, {"Target", {-0.07, 0}, 1}, {"Target", {0, -0.0662162}, 1}};
						};
					};
					
					class AAMissile {
						condition = "AAmissile";
						
						class Circle {
							type = "line";
							points[] = {{"WeaponAim", {0, -0.236486}, 1}, {"WeaponAim", {0.125, -0.205743}, 1}, {"WeaponAim", {0.2175, -0.118243}, 1}, {"WeaponAim", {0.25, 0}, 1}, {"WeaponAim", {0.2175, 0.118243}, 1}, {"WeaponAim", {0.125, 0.205743}, 1}, {"WeaponAim", {0, 0.236486}, 1}, {"WeaponAim", {-0.125, 0.205743}, 1}, {"WeaponAim", {-0.2175, 0.118243}, 1}, {"WeaponAim", {-0.25, 0}, 1}, {"WeaponAim", {-0.2175, -0.118243}, 1}, {"WeaponAim", {-0.125, -0.205743}, 1}, {"WeaponAim", {0, -0.236486}, 1}, {}, {"Target", {0, -0.0662162}, 1}, {"Target", {0.07, 0}, 1}, {"Target", {0, 0.0662162}, 1}, {"Target", {-0.07, 0}, 1}, {"Target", {0, -0.0662162}, 1}};
						};
					};
					
					class ATMissile {
						condition = "ATmissile";						
						class Cros {
							type = "line";
							points[] = {{"WeaponAim", {0.05, 0}, 1}, {"WeaponAim", {0.015, 0}, 1}, {}, {"WeaponAim", {0, 0.04}, 1}, {"WeaponAim", {0, 0.012}, 1}, {}, {"WeaponAim", {-0.05, 0}, 1}, {"WeaponAim", {-0.015, 0}, 1}, {}, {"WeaponAim", {0, -0.04}, 1}, {"WeaponAim", {0, -0.012}, 1}};
						};
					};
					
					class Missile {
						condition = "missile";
						class Cros {
							points[] = {{"WeaponAim", {0.05, 0}, 1}, {"WeaponAim", {0.015, 0}, 1}, {}, {"WeaponAim", {0, 0.04}, 1}, {"WeaponAim", {0, 0.012}, 1}, {}, {"WeaponAim", {-0.05, 0}, 1}, {"WeaponAim", {-0.015, 0}, 1}, {}, {"WeaponAim", {0, -0.04}, 1}, {"WeaponAim", {0, -0.012}, 1}};
							type = "line";
						};
					};
						
					class Rockets {
						condition = "Rocket";
						
						class Circle {
							type = "line";
							points[] = {{"WeaponAim", {0.01, 0}, 1}, {"WeaponAim", {-0.01, 0}, 1}, {}, {"WeaponAim", {0, 0.00945946}, 1}, {"WeaponAim", {0, -0.00945946}, 1}, {}, {"WeaponAim", {0, -0.113514}, 1}, {"WeaponAim", {0.06, -0.0987568}, 1}, {"WeaponAim", {0.1044, -0.0567568}, 1}, {"WeaponAim", {0.12, 0}, 1}, {"WeaponAim", {0.1044, 0.0567568}, 1}, {"WeaponAim", {0.06, 0.0987568}, 1}, {"WeaponAim", {0, 0.113514}, 1}, {"WeaponAim", {-0.06, 0.0987568}, 1}, {"WeaponAim", {-0.1044, 0.0567568}, 1}, {"WeaponAim", {-0.12, 0}, 1}, {"WeaponAim", {-0.1044, -0.0567568}, 1}, {"WeaponAim", {-0.06, -0.0987568}, 1}, {"WeaponAim", {0, -0.113514}, 1}, {}};
						};
					};
				};
			};
		};
		
		class AnimationSources {
			class lelev_off {
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			
			class relev_off {
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			
			class rightgear {
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			
			class leftgear {
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			
			class lgearpist {
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			
			class lgearsus {
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			
			class rgearpist {
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			
			class rgearsus {
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			
			class n_sus {
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			
			class n_sus2 {
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			
			class rgear_rot {
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			
			class lgear_rot {
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			
			class frontgear {
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			
			class lgdoor {
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			
			class rin_lgdoor {
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			
			class rou_lgdoor {
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			
			class rgdoor {
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			
			class rin_rgdoor {
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			
			class rou_rgdoor {
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			
			class f_ndoor {
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			
			class f_nrdoor {
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			
			class f_ndoor2 {
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			
			class r_ndoor {
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			
			class rear_ndoor {
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			
			class fuel_probe {
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			
			class fuel_drogue {
				source = "user";
				animPeriod = 8;
				initPhase = 0;
			};
			
			class auxtank_switch {
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			
			class eject_switch {
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			
			class ab_switch {
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			
			class spd_accelerator {
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			
			class bottles {
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			
			class ewsfail {
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			
			class gearfail {
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			
			class flarecount {
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			
			class firewep {
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			
			class fired {
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			
			class service_menu_switch {
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			
			class rearming_done_switch {
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			
			class master_arms_switch {
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			
			class canopy {
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			
			class r_wingfold {
				source = "user";
				animPeriod = 2;
				initPhase = 1;
			};
			
			class l_wingfold {
				source = "user";
				animPeriod = 2;
				initPhase = 1;
			};
			
			class tailhook {
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			
			class map_X {
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			
			class map_Y {
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			
			class map_icon_x {
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			
			class map_icon_y {
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			
			class commap_X {
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			
			class commap_Y {
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			
			class fuel_int {
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			
			class fuel_extl {
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			
			class fuel_extr {
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			
			class fuel_extc {
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			
			class le_fire {
				source = "user";
				animPeriod = 0.0001;
				initPhase = 0;
			};
			
			class re_fire {
				source = "user";
				animPeriod = 0.0001;
				initPhase = 0;
			};
			
			class mstr_caut {
				source = "user";
				animPeriod = 0.0001;
				initPhase = 0;
			};
			
			class rmfd_fl {
				source = "user";
				animPeriod = 0.0001;
				initPhase = 0;
			};
			
			class lmfd_fl {
				source = "user";
				animPeriod = 0.0001;
				initPhase = 0;
			};
			
			class map_fl {
				source = "user";
				animPeriod = 0.0001;
				initPhase = 0;
			};
			
			class engd_fl {
				source = "user";
				animPeriod = 0.0001;
				initPhase = 0;
			};
			
			class upfrnt_fl {
				source = "user";
				animPeriod = 0.0001;
				initPhase = 0;
			};
			
			class eng_fail {
				source = "user";
				animPeriod = 0.0001;
				initPhase = 0;
			};
			
			class ccip_length {
				source = "user";
				animPeriod = 0.0001;
				initPhase = 0;
			};
			
			class ccip_rot {
				source = "user";
				animPeriod = 0.0001;
				initPhase = 0;
			};
			
			class MFD_Displays_On {
				source = "user";
				animPeriod = 0.0001;
				initPhase = 1;
			};
			
			class Ladder_GetIn {
				source = "user";
				animPeriod = 0.0001;
				initPhase = 1;
			};
		};
		
		class Library {
			libEnable = 1;
			libTextDesc = "The McDonnell Douglas (now Boeing) F/A-18 Hornet is a twin-engine supersonic, all-weather carrier-capable multirole combat jet, designed as both a fighter and attack aircraft (F/A designation for Fighter/Attack)";
		};
		
		class UserActions {			
			class foldwings {
				displayName = "$STR_TU_FOLD_WINGS";
				position = "pilotcontrol";
				radius = 5;
				condition = "this animationPhase ""l_wingfold"" < 0.1 and (getpos this select 2) < 1 and (not isengineon this)";
				statement = "this animate [""l_wingfold"",1] and this animate [""r_wingfold"",1] and this say ""FA18_foldwing_sound""";
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
			
			class unfoldwings {
				displayName = "$STR_TU_UNFOLD_WINGS";
				position = "pilotcontrol";
				radius = 5;
				condition = "this animationPhase ""l_wingfold"" > 0.9";
				statement = "this animate [""l_wingfold"",0] and this animate [""r_wingfold"",0] and this say ""FA18_foldwing_sound""";
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
			
			class LaseKh29
			{
				displayName = "$STR_ACE_UA_LASER_ON";
				position = "HitGlass3";
				radius = 6;
				onlyForPlayer = 1;
				condition = "(player in [gunner this, driver this]) && {(getNumber(configFile>>'cfgWeapons'>>currentWeapon this>>'ace_sys_missileguidance_enableAirDesignator') == 1)}";
				statement = "[this,0,0] call ace_sys_missileguidance_fnc_Kh29_Lase";
			};
			
			class LaseKh29Off: LaseKh29
			{
				displayName = "$STR_ACE_UA_LASER_OFF";
				condition = "(player in [gunner this, driver this]) && {(this getVariable 'ace_sys_missileguidance_tracking')}";
				statement = "this setVariable ['ace_sys_missileguidance_tracking',nil]";
			};
		};
		
		class Eventhandlers: DefaultEventhandlers {		
			animchanged = "_this call SLX_XEH_EH_AnimChanged";
			animdone = "_this call SLX_XEH_EH_AnimDone";
			animstatechanged = "_this call SLX_XEH_EH_AnimStateChanged";
			dammaged = "_this call SLX_XEH_EH_Dammaged";
			engine = "_this call SLX_XEH_EH_Engine";
			fired = "_this call SLX_XEH_EH_Fired";
			firedbis = "_this call BIS_Effects_EH_Fired";
			firednear = "_this call SLX_XEH_EH_FiredNear";
			fuel = "_this call SLX_XEH_EH_Fuel";
			gear = "_this call SLX_XEH_EH_Gear";
			getin = "_this call SLX_XEH_EH_GetIn";
			getout = "_this call SLX_XEH_EH_GetOut";
			hit = "_this call SLX_XEH_EH_Hit";
			incomingmissile = "_this call SLX_XEH_EH_IncomingMissile";
			init = "_this execVM ""\js_FA18\scripts\init_FA18E.sqf""; if(isNil'SLX_XEH_MACHINE')then{call compile preProcessFileLineNumbers '\x\cba\addons\xeh\init_pre.sqf'};_this call SLX_XEH_EH_Init";
			killed = "_this call SLX_XEH_EH_Killed";
			landedstopped = "_this call SLX_XEH_EH_LandedStopped";
			landedtouchdown = "_this call SLX_XEH_EH_LandedTouchDown";
			respawn = "_this call SLX_XEH_EH_Respawn";
		};	
		
		hiddenSelections[] = {"camo_hull", "camo_misc", "camo_center_fueltank", "camo_cockpit_1", "camo_cockpit_2", "camo_MFD", "camo_glass", "camo_ladder"};
		hiddenSelectionsTextures[] = {"\js_fa18\data\fa18e_hull_co.paa", "\js_fa18\data\fa18_misc_co.paa", "", "\js_fa18\data\fa18_cockpit1_co.paa", "\js_fa18\data\fa18_cockpit2_ca.paa", "\js_fa18\data\fa18_mfd_co.paa", "\js_fa18\data\fa18_glass_ca.paa", "\js_fa18\data\fa18_ladder_co.paa"};
		
		weapons[] = {"TU_M61", "AIM9MLaucher", "AIM7MLaucher", "AGM65E_Launcher", "GBU12_BombLauncher_LD", "CMFlareLauncher"};
		magazines[] = {"TU_578Rnd_20mm_M61", 
			"TU_1Rnd_AIM9M", "TU_1Rnd_AIM9M", 
			"TU_2Rnd_Empty", 
			"TU_1Rnd_AGM65E", "TU_1Rnd_AGM65E", 
			"TU_1Rnd_GBU12", "TU_1Rnd_GBU12", 
			"TU_1Rnd_AIM7M", "TU_1Rnd_FLIR_POD_FA18", 
			"TU_8Rnd_Empty",
			"TU_1Rnd_FT_FA18", 
			"120Rnd_CMFlare_Chaff_Magazine"
		};
		
		displayName = "F/A-18A (Multirole)";
		side = TWest;
		faction = ACE_USNAVY;		
		vehicleClass = TU_USNAVY_AIR;
		crew = "TU_NAVY_Pilot";
		class ViewPilot {
			initanglex = 0;
			initangley = 0;
			initfov = 1;
			maxanglex = 85;
			maxangley = 150;
			maxfov = 1.2;
			minanglex = -65;
			minangley = -150;
			minfov = 0.3;
		};
	};
	
	class TU_FA18A_CAP : TU_FA18A {
		hiddenSelections[] = {"camo_hull", "camo_misc", "camo_center_fueltank", "camo_cockpit_1", "camo_cockpit_2", "camo_MFD", "camo_glass", "camo_ladder"};
		hiddenSelectionsTextures[] = {"\js_fa18\data\fa18e_hull_co.paa", "\js_fa18\data\fa18_misc_co.paa", "", "\js_fa18\data\fa18_cockpit1_co.paa", "\js_fa18\data\fa18_cockpit2_ca.paa", "\js_fa18\data\fa18_mfd_co.paa", "\js_fa18\data\fa18_glass_ca.paa", "\js_fa18\data\fa18_ladder_co.paa"};
		
		weapons[] = {"TU_M61", "AIM9MLaucher", "AIM7MLaucher", "CMFlareLauncher"};
		magazines[] = {"TU_578Rnd_20mm_M61", 
			"TU_1Rnd_AIM9M", "TU_1Rnd_AIM9M", 
			"TU_2Rnd_Empty", 
			"TU_1Rnd_AIM9M", "TU_1Rnd_AIM9M", 
			"TU_1Rnd_AIM7M", "TU_1Rnd_AIM7M", 
			"TU_1Rnd_AIM7M", "TU_1Rnd_AIM7M", 
			"TU_8Rnd_Empty",
			"TU_1Rnd_FT_FA18", 
			"120Rnd_CMFlare_Chaff_Magazine"
		};
		
		displayName = "F/A-18A (CAP)";
		side = TWest;
		faction = ACE_USNAVY;		
		vehicleClass = TU_USNAVY_AIR;
		crew = "TU_NAVY_Pilot";
	};
	
	class TU_FA18A_LGB : TU_FA18A {
		hiddenSelections[] = {"camo_hull", "camo_misc", "camo_center_fueltank", "camo_cockpit_1", "camo_cockpit_2", "camo_MFD", "camo_glass", "camo_ladder"};
		hiddenSelectionsTextures[] = {"\js_fa18\data\fa18e_hull_co.paa", "\js_fa18\data\fa18_misc_co.paa", "", "\js_fa18\data\fa18_cockpit1_co.paa", "\js_fa18\data\fa18_cockpit2_ca.paa", "\js_fa18\data\fa18_mfd_co.paa", "\js_fa18\data\fa18_glass_ca.paa", "\js_fa18\data\fa18_ladder_co.paa"};
		
		weapons[] = {"TU_M61", "AIM9MLaucher", "AIM7MLaucher", "GBU12_BombLauncher_LD", "CMFlareLauncher"};
		magazines[] = {"TU_578Rnd_20mm_M61", 
			"TU_1Rnd_AIM9M", "TU_1Rnd_AIM9M", 
			"TU_2Rnd_Empty", 
			"TU_1Rnd_GBU12", "TU_1Rnd_GBU12", 
			"TU_1Rnd_GBU12", "TU_1Rnd_GBU12", 
			"TU_1Rnd_AIM7M", "TU_1Rnd_FLIR_POD_FA18", 
			"TU_8Rnd_Empty",
			"TU_1Rnd_FT_FA18", 
			"120Rnd_CMFlare_Chaff_Magazine"
		};
		
		displayName = "F/A-18A (LGB)";
		side = TWest;
		faction = ACE_USNAVY;		
		vehicleClass = TU_USNAVY_AIR;
		crew = "TU_NAVY_Pilot";
	};
	
	class TU_FA18A_AT : TU_FA18A {
		hiddenSelections[] = {"camo_hull", "camo_misc", "camo_center_fueltank", "camo_cockpit_1", "camo_cockpit_2", "camo_MFD", "camo_glass", "camo_ladder"};
		hiddenSelectionsTextures[] = {"\js_fa18\data\fa18e_hull_co.paa", "\js_fa18\data\fa18_misc_co.paa", "", "\js_fa18\data\fa18_cockpit1_co.paa", "\js_fa18\data\fa18_cockpit2_ca.paa", "\js_fa18\data\fa18_mfd_co.paa", "\js_fa18\data\fa18_glass_ca.paa", "\js_fa18\data\fa18_ladder_co.paa"};
		
		weapons[] = {"TU_M61", "AIM9MLaucher", "AIM7MLaucher", "AGM65E_Launcher", "CMFlareLauncher"};
		magazines[] = {"TU_578Rnd_20mm_M61", 
			"TU_1Rnd_AIM9M", "TU_1Rnd_AIM9M", 
			"TU_2Rnd_Empty", 
			"TU_1Rnd_AGM65E", "TU_1Rnd_AGM65E", 
			"TU_1Rnd_AGM65E", "TU_1Rnd_AGM65E", 
			"TU_1Rnd_AIM7M", "TU_1Rnd_FLIR_POD_FA18", 
			"TU_8Rnd_Empty",
			"TU_1Rnd_FT_FA18", 
			"120Rnd_CMFlare_Chaff_Magazine"
		};
		
		displayName = "F/A-18A (AT)";
		side = TWest;
		faction = ACE_USNAVY;		
		vehicleClass = TU_USNAVY_AIR;
		crew = "TU_NAVY_Pilot";
	};
	
	class TU_FA18A_BMB : TU_FA18A {
		hiddenSelections[] = {"camo_hull", "camo_misc", "camo_center_fueltank", "camo_cockpit_1", "camo_cockpit_2", "camo_MFD", "camo_glass", "camo_ladder"};
		hiddenSelectionsTextures[] = {"\js_fa18\data\fa18e_hull_co.paa", "\js_fa18\data\fa18_misc_co.paa", "", "\js_fa18\data\fa18_cockpit1_co.paa", "\js_fa18\data\fa18_cockpit2_ca.paa", "\js_fa18\data\fa18_mfd_co.paa", "\js_fa18\data\fa18_glass_ca.paa", "\js_fa18\data\fa18_ladder_co.paa"};
		
		weapons[] = {"TU_M61", "AIM9MLaucher", "AIM7MLaucher", "TU_Mk82BombLauncher_DB", "CMFlareLauncher"};
		magazines[] = {"TU_578Rnd_20mm_M61", 
			"TU_1Rnd_AIM9M", "TU_1Rnd_AIM9M", 
			"TU_2Rnd_Empty", 
			"TU_1Rnd_Mk82_DB", "TU_1Rnd_Mk82_DB", 
			"TU_1Rnd_X2_FA18", "TU_1Rnd_X2_FA18", 
			"TU_1Rnd_AIM7M", "TU_1Rnd_AIM7M", 
			"TU_1Rnd_Mk82_DB", "TU_1Rnd_Mk82_DB", "TU_1Rnd_Mk82_DB", "TU_1Rnd_Mk82_DB", 
			"TU_4Rnd_Empty",
			"TU_1Rnd_FT_FA18", 
			"120Rnd_CMFlare_Chaff_Magazine"
		};
		
		displayName = "F/A-18A (BMB)";
		side = TWest;
		faction = ACE_USNAVY;		
		vehicleClass = TU_USNAVY_AIR;
		crew = "TU_NAVY_Pilot";
	};
	
	class TU_FA18A_USMC : TU_FA18A {
		hiddenSelections[] = {"camo_hull", "camo_misc", "camo_center_fueltank", "camo_cockpit_1", "camo_cockpit_2", "camo_MFD", "camo_glass", "camo_ladder"};
		hiddenSelectionsTextures[] = {"\js_fa18\data\SQUADS\fa18e_hull_USMC_co.paa", "\js_fa18\data\fa18_misc_co.paa", "", "\js_fa18\data\fa18_cockpit1_co.paa", "\js_fa18\data\fa18_cockpit2_ca.paa", "\js_fa18\data\fa18_mfd_co.paa", "\js_fa18\data\fa18_glass_ca.paa", "\js_fa18\data\fa18_ladder_co.paa"};
		
		faction = USMC;		
		vehicleClass = TU_USMC_AIR;
		crew = "USMC_Soldier_Pilot";
	};
	
	class TU_FA18A_USMC_CAP : TU_FA18A_CAP {
		hiddenSelections[] = {"camo_hull", "camo_misc", "camo_center_fueltank", "camo_cockpit_1", "camo_cockpit_2", "camo_MFD", "camo_glass", "camo_ladder"};
		hiddenSelectionsTextures[] = {"\js_fa18\data\SQUADS\fa18e_hull_USMC_co.paa", "\js_fa18\data\fa18_misc_co.paa", "", "\js_fa18\data\fa18_cockpit1_co.paa", "\js_fa18\data\fa18_cockpit2_ca.paa", "\js_fa18\data\fa18_mfd_co.paa", "\js_fa18\data\fa18_glass_ca.paa", "\js_fa18\data\fa18_ladder_co.paa"};
		
		faction = USMC;		
		vehicleClass = TU_USMC_AIR;
		crew = "USMC_Soldier_Pilot";
	};
	
	class TU_FA18A_USMC_LGB : TU_FA18A_LGB {
		hiddenSelections[] = {"camo_hull", "camo_misc", "camo_center_fueltank", "camo_cockpit_1", "camo_cockpit_2", "camo_MFD", "camo_glass", "camo_ladder"};
		hiddenSelectionsTextures[] = {"\js_fa18\data\SQUADS\fa18e_hull_USMC_co.paa", "\js_fa18\data\fa18_misc_co.paa", "", "\js_fa18\data\fa18_cockpit1_co.paa", "\js_fa18\data\fa18_cockpit2_ca.paa", "\js_fa18\data\fa18_mfd_co.paa", "\js_fa18\data\fa18_glass_ca.paa", "\js_fa18\data\fa18_ladder_co.paa"};
		
		faction = USMC;		
		vehicleClass = TU_USMC_AIR;
		crew = "USMC_Soldier_Pilot";
	};
	
	class TU_FA18A_USMC_AT : TU_FA18A_AT {
		hiddenSelections[] = {"camo_hull", "camo_misc", "camo_center_fueltank", "camo_cockpit_1", "camo_cockpit_2", "camo_MFD", "camo_glass", "camo_ladder"};
		hiddenSelectionsTextures[] = {"\js_fa18\data\SQUADS\fa18e_hull_USMC_co.paa", "\js_fa18\data\fa18_misc_co.paa", "", "\js_fa18\data\fa18_cockpit1_co.paa", "\js_fa18\data\fa18_cockpit2_ca.paa", "\js_fa18\data\fa18_mfd_co.paa", "\js_fa18\data\fa18_glass_ca.paa", "\js_fa18\data\fa18_ladder_co.paa"};
		
		faction = USMC;		
		vehicleClass = TU_USMC_AIR;
		crew = "USMC_Soldier_Pilot";
	};
	
	class TU_FA18A_USMC_BMB : TU_FA18A_BMB {
		hiddenSelections[] = {"camo_hull", "camo_misc", "camo_center_fueltank", "camo_cockpit_1", "camo_cockpit_2", "camo_MFD", "camo_glass", "camo_ladder"};
		hiddenSelectionsTextures[] = {"\js_fa18\data\SQUADS\fa18e_hull_USMC_co.paa", "\js_fa18\data\fa18_misc_co.paa", "", "\js_fa18\data\fa18_cockpit1_co.paa", "\js_fa18\data\fa18_cockpit2_ca.paa", "\js_fa18\data\fa18_mfd_co.paa", "\js_fa18\data\fa18_glass_ca.paa", "\js_fa18\data\fa18_ladder_co.paa"};
		
		faction = USMC;		
		vehicleClass = TU_USMC_AIR;
		crew = "USMC_Soldier_Pilot";
	};
	
	class TU_FA18B : TU_FA18A {
		ACE_SYS_EJECT_MULTICREW = 1;
		hasGunner = true;
		driverIsCommander = true;
		model = "\js_fa18\JC_JS_FZ_FA18F.p3d";
		memorypointdriveroptics = "gunnerview";
		driverOpticsModel = "\js_fa18\JS_FA18_optics.p3d";
				
		class ViewPilot {
			initanglex = 0;
			initangley = 0;
			initfov = 1;
			maxanglex = 85;
			maxangley = 150;
			maxfov = 1.2;
			minanglex = -65;
			minangley = -150;
			minfov = 0.3;
		};
		
		class ViewOptics {
			minAngleX = -180;
			maxAngleX = 180;
			initAngleX = 0;
			minAngleY = -120;
			maxAngleY = 0;
			initAngleY = 0;
			initFov = 0.5;
			minFov = 0.14;
			maxFov = 0.5;
			directionStabilized = 1;
			horizontallyStabilized = 1;
			visionMode[] = {"Normal", NVG, "Ti"};
			thermalMode[] = {0, 1};
		};
		
		class Turrets {
			class MainTurret : NewTurret {
				commanding = -1;
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				castGunnerShadow = true;
				viewGunnerShadow = true;
				gunnerAction = "fz_f18_commander";
				gunnerInAction = "fz_f18_commander";
				maxHorizontalRotSpeed = 3.2;
				maxVerticalRotSpeed = 3.2;
				stabilizedInAxes = "StabilizedInAxesBoth";
				startEngine = false;
				body = "mainturret";
				gun = "maingun";
				animationSourceBody = "mainturret";
				animationSourceGun = "maingun";
				minElev = -120;
				maxElev = 0;
				initElev = 0;
				minTurn = -180;
				maxTurn = 180;
				initTurn = 0;
				
				class Viewoptics {
					minAngleX = -180;
					maxAngleX = 180;
					initAngleX = 0;
					minAngleY = -120;
					maxAngleY = 0;
					initAngleY = 0;
					initFov = 0.5;
					minFov = 0.14;
					maxFov = 0.5;
					directionStabilized = 1;
					horizontallyStabilized = 1;
					visionMode[] = {"Normal", NVG, "Ti"};
					thermalMode[] = {0, 1};
				};
				
				class ViewGunner {
					initanglex = 0;
					initangley = 0;
					initfov = 1;
					maxanglex = 85;
					maxangley = 150;
					maxfov = 1.2;
					minanglex = -65;
					minangley = -150;
					minfov = 0.3;
				};
				soundServo[] = {"", db-40, 1};
				outGunnerMayFire = true;
				inGunnerMayFire = true;
				gunBeg = "laser_end";	// endpoint of the gun
				gunEnd = "laser_start";	// chamber of the gun
				memoryPointGunnerOptics = "gunnerview";
				selectionFireAnim = "";
				gunnerOpticsModel = "\js_fa18\JS_FA18_optics.p3d";
				turretInfoType = "FA18_Gunner_Turret_Info";
				gunnerForceOptics = false;
				weapons[] = {"AIM9MLaucher", "AIM7MLaucher", "AGM65E_Launcher", "GBU12_BombLauncher_LD"};
				magazines[] = {
					"TU_1Rnd_AIM9M", "TU_1Rnd_AIM9M", 
					"TU_2Rnd_Empty",
					"TU_1Rnd_AGM65E", "TU_1Rnd_AGM65E", 
					"TU_1Rnd_GBU12", "TU_1Rnd_GBU12", 
					"TU_1Rnd_AIM7M", "TU_1Rnd_FLIR_POD_FA18", 
					"TU_8Rnd_Empty",
					"TU_1Rnd_FT_FA18"
				};
			};
		};
		
		class MFD {
			class FA18_static_HUD {
				enableParallax = 0;
				
				class Pos10Vector {
					type = "vector";
					pos0[] = {0.5, 0.5};
					pos10[] = {1.225, 1.1};
				};
				topLeft = "HUD LH";
				topRight = "HUD PH";
				bottomLeft = "HUD LD";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0, 1, 0, 0.1};
				
				class Bones {
					class PlaneW {
						type = "fixed";
						pos[] = {0.485, 0.4};
					};
					
					class Velocity : Pos10Vector {
						type = "vector";
						source = "velocity";
						pos0[] = {0.5, 0.4};
						pos10[] = {1.24, 1.1};
					};
					
					class ILS_H {
						type = "ils";
						pos0[] = {0.5, 0.4};
						pos3[] = {0.722, 0.4};
					};
					
					class ILS_W : ILS_H {
						pos3[] = {0.5, 0.61};
					};
					
					class Level0 : Pos10Vector {
						pos0[] = {0.5, 0.4};
						pos10[] = {1.24, 1.1};
						type = "horizon";
						angle = 0;
					};
					
					class LevelP5 : Level0 {
						angle = 5;
					};
					
					class LevelM5 : Level0 {
						angle = -5;
					};
					
					class LevelP10 : Level0 {
						angle = 10;
					};
					
					class LevelM10 : Level0 {
						angle = -10;
					};
					
					class LevelP15 : Level0 {
						angle = 15;
					};
					
					class LevelM15 : Level0 {
						angle = -15;
					};
					
					class LevelP20 : Level0 {
						angle = 20;
					};
					
					class LevelM20 : Level0 {
						angle = -20;
					};
					
					class LevelP25 : Level0 {
						angle = 25;
					};
					
					class LevelM25 : Level0 {
						angle = -25;
					};
					
					class LevelP30 : Level0 {
						angle = 30;
					};
					
					class LevelM30 : Level0 {
						angle = -30;
					};
					
					class LevelP35 : Level0 {
						angle = 35;
					};
					
					class LevelM35 : Level0 {
						angle = -35;
					};
					
					class LevelP40 : Level0 {
						angle = 40;
					};
					
					class LevelM40 : Level0 {
						angle = -40;
					};
					
					class LevelP45 : Level0 {
						angle = 45;
					};
					
					class LevelM45 : Level0 {
						angle = -45;
					};
					
					class LevelP50 : Level0 {
						angle = 50;
					};
					
					class LevelM50 : Level0 {
						angle = -50;
					};
				};
				
				class Draw {
					alpha = 1.0;
					color[] = {0.0, 0.3, 0.05};
					condition = "on";
					
					class PlaneW {
						clipTL[] = {0.0, 1.0};
						clipBR[] = {1.0, 0.0};
						type = "line";
						points[] = {{"PlaneW", {-0.08, 0}, 1}, {"PlaneW", {-0.03, 0}, 1}, {"PlaneW", {-0.015, 0.0283784}, 1}, {"PlaneW", {0.0, 0}, 1}, {"PlaneW", {0.015, 0.0283784}, 1}, {"PlaneW", {0.03, 0}, 1}, {"PlaneW", {0.08, 0}, 1}};
					};
					
					class PlaneHeading {
						clipTL[] = {0.0, 1.0};
						clipBR[] = {1.0, 0.0};
						type = "line";
						points[] = {{"Velocity", {0, -0.0189189}, 1}, {"Velocity", {0.014, -0.0132432}, 1}, {"Velocity", {0.02, 0}, 1}, {"Velocity", {0.014, 0.0132432}, 1}, {"Velocity", {0, 0.0189189}, 1}, {"Velocity", {-0.014, 0.0132432}, 1}, {"Velocity", {-0.02, 0}, 1}, {"Velocity", {-0.014, -0.0132432}, 1}, {"Velocity", {0, -0.0189189}, 1}, {}, {"Velocity", {0.04, 0}, 1}, {"Velocity", {0.02, 0}, 1}, {}, {"Velocity", {-0.04, 0}, 1}, {"Velocity", {-0.02, 0}, 1}, {}, {"Velocity", {0, -0.0378378}, 1}, {"Velocity", {0, -0.0189189}, 1}, {}};
					};
					
					class Static {
						clipTL[] = {0.0, 0.1};
						clipBR[] = {1.0, 0.0};
						type = "line";
						points[] = {{{0.21, 0.52}, 1}, {{0.19, 0.5}, 1}, {{0.21, 0.48}, 1}, {}, {{0.18, 0.2}, 1}, {{0.18, 0.85}, 1}, {}, {{0.79, 0.52}, 1}, {{0.81, 0.5}, 1}, {{0.79, 0.48}, 1}, {}, {{0.82, 0.2}, 1}, {{0.82, 0.85}, 1}, {}, {{0.52, 0.08+0.01}, 1}, {{0.5, 0.06+0.01}, 1}, {{0.48, 0.08+0.01}, 1}, {}, {{0.2, 0.055+0.01}, 1}, {{0.8, 0.055+0.01}, 1}, {}};
					};
					
					class Horizont {
						clipTL[] = {0.0, 0.0};
						clipBR[] = {1.0, 1.0};
						
						class Dimmed {
							class Level0 {
								type = "line";
								points[] = {{"Level0", {-0.2, 0}, 1}, {"Level0", {-0.05, 0}, 1}, {}, {"Level0", {0.05, 0}, 1}, {"Level0", {0.2, 0}, 1}};
							};
							
							class VALM_1_0 {
								type = "text";
								source = "static";
								text = 0;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"Level0", {-0.23, -0.025}, 1};
								right[] = {"Level0", {-0.13, -0.025}, 1};
								down[] = {"Level0", {-0.23, 0.025}, 1};
							};
							
							class VALM_2_0 : VALM_1_0 {
								align = "right";
								pos[] = {"Level0", {0.22, -0.025}, 1};
								right[] = {"Level0", {0.32, -0.025}, 1};
								down[] = {"Level0", {0.22, 0.025}, 1};
							};
							
							class LevelM5 : Level0 {
								type = "line";
								points[] = {{"LevelM5", {-0.2, -0.03}, 1}, {"LevelM5", {-0.2, 0}, 1}, {"LevelM5", {-0.15, 0}, 1}, {}, {"LevelM5", {-0.1, 0}, 1}, {"LevelM5", {-0.05, 0}, 1}, {}, {"LevelM5", {0.05, 0}, 1}, {"LevelM5", {0.1, 0}, 1}, {}, {"LevelM5", {0.15, 0}, 1}, {"LevelM5", {0.2, 0}, 1}, {"LevelM5", {0.2, -0.03}, 1}};
							};
							
							class VALM_1_5 {
								type = "text";
								source = "static";
								text = -5;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM5", {-0.23, -0.085}, 1};
								right[] = {"LevelM5", {-0.13, -0.085}, 1};
								down[] = {"LevelM5", {-0.23, -0.035}, 1};
							};
							
							class VALM_2_5 : VALM_1_5 {
								align = "right";
								pos[] = {"LevelM5", {0.22, -0.085}, 1};
								right[] = {"LevelM5", {0.32, -0.085}, 1};
								down[] = {"LevelM5", {0.22, -0.035}, 1};
							};
							
							class LevelP5 : Level0 {
								type = "line";
								points[] = {{"LevelP5", {-0.2, 0.03}, 1}, {"LevelP5", {-0.2, 0}, 1}, {"LevelP5", {-0.05, 0}, 1}, {}, {"LevelP5", {0.05, 0}, 1}, {"LevelP5", {0.2, 0}, 1}, {"LevelP5", {0.2, 0.03}, 1}};
							};
							
							class VALP_1_5 {
								type = "text";
								source = "static";
								text = "5";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP5", {-0.23, 0.035}, 1};
								right[] = {"LevelP5", {-0.13, 0.035}, 1};
								down[] = {"LevelP5", {-0.23, 0.085}, 1};
							};
							
							class VALP_2_5 : VALP_1_5 {
								align = "right";
								pos[] = {"LevelP5", {0.22, 0.035}, 1};
								right[] = {"LevelP5", {0.32, 0.035}, 1};
								down[] = {"LevelP5", {0.22, 0.085}, 1};
							};
							
							class LevelM10 : Level0 {
								type = "line";
								points[] = {{"LevelM10", {-0.2, -0.03}, 1}, {"LevelM10", {-0.2, 0}, 1}, {"LevelM10", {-0.15, 0}, 1}, {}, {"LevelM10", {-0.1, 0}, 1}, {"LevelM10", {-0.05, 0}, 1}, {}, {"LevelM10", {0.05, 0}, 1}, {"LevelM10", {0.1, 0}, 1}, {}, {"LevelM10", {0.15, 0}, 1}, {"LevelM10", {0.2, 0}, 1}, {"LevelM10", {0.2, -0.03}, 1}};
							};
							
							class VALM_1_10 {
								type = "text";
								source = "static";
								text = -10;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM10", {-0.23, -0.085}, 1};
								right[] = {"LevelM10", {-0.13, -0.085}, 1};
								down[] = {"LevelM10", {-0.23, -0.035}, 1};
							};
							
							class VALM_2_10 : VALM_1_10 {
								align = "right";
								pos[] = {"LevelM10", {0.22, -0.085}, 1};
								right[] = {"LevelM10", {0.32, -0.085}, 1};
								down[] = {"LevelM10", {0.22, -0.035}, 1};
							};
							
							class LevelP10 : Level0 {
								type = "line";
								points[] = {{"LevelP10", {-0.2, 0.03}, 1}, {"LevelP10", {-0.2, 0}, 1}, {"LevelP10", {-0.05, 0}, 1}, {}, {"LevelP10", {0.05, 0}, 1}, {"LevelP10", {0.2, 0}, 1}, {"LevelP10", {0.2, 0.03}, 1}};
							};
							
							class VALP_1_10 {
								type = "text";
								source = "static";
								text = "10";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP10", {-0.23, 0.035}, 1};
								right[] = {"LevelP10", {-0.13, 0.035}, 1};
								down[] = {"LevelP10", {-0.23, 0.085}, 1};
							};
							
							class VALP_2_10 : VALP_1_10 {
								align = "right";
								pos[] = {"LevelP10", {0.22, 0.035}, 1};
								right[] = {"LevelP10", {0.32, 0.035}, 1};
								down[] = {"LevelP10", {0.22, 0.085}, 1};
							};
							
							class LevelM15 : Level0 {
								type = "line";
								points[] = {{"LevelM15", {-0.2, -0.03}, 1}, {"LevelM15", {-0.2, 0}, 1}, {"LevelM15", {-0.15, 0}, 1}, {}, {"LevelM15", {-0.1, 0}, 1}, {"LevelM15", {-0.05, 0}, 1}, {}, {"LevelM15", {0.05, 0}, 1}, {"LevelM15", {0.1, 0}, 1}, {}, {"LevelM15", {0.15, 0}, 1}, {"LevelM15", {0.2, 0}, 1}, {"LevelM15", {0.2, -0.03}, 1}};
							};
							
							class VALM_1_15 {
								type = "text";
								source = "static";
								text = -15;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM15", {-0.23, -0.085}, 1};
								right[] = {"LevelM15", {-0.13, -0.085}, 1};
								down[] = {"LevelM15", {-0.23, -0.035}, 1};
							};
							
							class VALM_2_15 : VALM_1_15 {
								align = "right";
								pos[] = {"LevelM15", {0.22, -0.085}, 1};
								right[] = {"LevelM15", {0.32, -0.085}, 1};
								down[] = {"LevelM15", {0.22, -0.035}, 1};
							};
							
							class LevelP15 : Level0 {
								type = "line";
								points[] = {{"LevelP15", {-0.2, 0.03}, 1}, {"LevelP15", {-0.2, 0}, 1}, {"LevelP15", {-0.05, 0}, 1}, {}, {"LevelP15", {0.05, 0}, 1}, {"LevelP15", {0.2, 0}, 1}, {"LevelP15", {0.2, 0.03}, 1}};
							};
							
							class VALP_1_15 {
								type = "text";
								source = "static";
								text = "15";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP15", {-0.23, 0.035}, 1};
								right[] = {"LevelP15", {-0.13, 0.035}, 1};
								down[] = {"LevelP15", {-0.23, 0.085}, 1};
							};
							
							class VALP_2_15 : VALP_1_15 {
								align = "right";
								pos[] = {"LevelP15", {0.22, 0.035}, 1};
								right[] = {"LevelP15", {0.32, 0.035}, 1};
								down[] = {"LevelP15", {0.22, 0.085}, 1};
							};
							
							class LevelM20 : Level0 {
								type = "line";
								points[] = {{"LevelM20", {-0.2, -0.03}, 1}, {"LevelM20", {-0.2, 0}, 1}, {"LevelM20", {-0.15, 0}, 1}, {}, {"LevelM20", {-0.1, 0}, 1}, {"LevelM20", {-0.05, 0}, 1}, {}, {"LevelM20", {0.05, 0}, 1}, {"LevelM20", {0.1, 0}, 1}, {}, {"LevelM20", {0.15, 0}, 1}, {"LevelM20", {0.2, 0}, 1}, {"LevelM20", {0.2, -0.03}, 1}};
							};
							
							class VALM_1_20 {
								type = "text";
								source = "static";
								text = -20;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM20", {-0.23, -0.085}, 1};
								right[] = {"LevelM20", {-0.13, -0.085}, 1};
								down[] = {"LevelM20", {-0.23, -0.035}, 1};
							};
							
							class VALM_2_20 : VALM_1_20 {
								align = "right";
								pos[] = {"LevelM20", {0.22, -0.085}, 1};
								right[] = {"LevelM20", {0.32, -0.085}, 1};
								down[] = {"LevelM20", {0.22, -0.035}, 1};
							};
							
							class LevelP20 : Level0 {
								type = "line";
								points[] = {{"LevelP20", {-0.2, 0.03}, 1}, {"LevelP20", {-0.2, 0}, 1}, {"LevelP20", {-0.05, 0}, 1}, {}, {"LevelP20", {0.05, 0}, 1}, {"LevelP20", {0.2, 0}, 1}, {"LevelP20", {0.2, 0.03}, 1}};
							};
							
							class VALP_1_20 {
								type = "text";
								source = "static";
								text = "20";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP20", {-0.23, 0.035}, 1};
								right[] = {"LevelP20", {-0.13, 0.035}, 1};
								down[] = {"LevelP20", {-0.23, 0.085}, 1};
							};
							
							class VALP_2_20 : VALP_1_20 {
								align = "right";
								pos[] = {"LevelP20", {0.22, 0.035}, 1};
								right[] = {"LevelP20", {0.32, 0.035}, 1};
								down[] = {"LevelP20", {0.22, 0.085}, 1};
							};
							
							class LevelM25 : Level0 {
								type = "line";
								points[] = {{"LevelM25", {-0.2, -0.03}, 1}, {"LevelM25", {-0.2, 0}, 1}, {"LevelM25", {-0.15, 0}, 1}, {}, {"LevelM25", {-0.1, 0}, 1}, {"LevelM25", {-0.05, 0}, 1}, {}, {"LevelM25", {0.05, 0}, 1}, {"LevelM25", {0.1, 0}, 1}, {}, {"LevelM25", {0.15, 0}, 1}, {"LevelM25", {0.2, 0}, 1}, {"LevelM25", {0.2, -0.03}, 1}};
							};
							
							class VALM_1_25 {
								type = "text";
								source = "static";
								text = -25;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM25", {-0.23, -0.085}, 1};
								right[] = {"LevelM25", {-0.13, -0.085}, 1};
								down[] = {"LevelM25", {-0.23, -0.035}, 1};
							};
							
							class VALM_2_25 : VALM_1_25 {
								align = "right";
								pos[] = {"LevelM25", {0.22, -0.085}, 1};
								right[] = {"LevelM25", {0.32, -0.085}, 1};
								down[] = {"LevelM25", {0.22, -0.035}, 1};
							};
							
							class LevelP25 : Level0 {
								type = "line";
								points[] = {{"LevelP25", {-0.2, 0.03}, 1}, {"LevelP25", {-0.2, 0}, 1}, {"LevelP25", {-0.05, 0}, 1}, {}, {"LevelP25", {0.05, 0}, 1}, {"LevelP25", {0.2, 0}, 1}, {"LevelP25", {0.2, 0.03}, 1}};
							};
							
							class VALP_1_25 {
								type = "text";
								source = "static";
								text = "25";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP25", {-0.23, 0.035}, 1};
								right[] = {"LevelP25", {-0.13, 0.035}, 1};
								down[] = {"LevelP25", {-0.23, 0.085}, 1};
							};
							
							class VALP_2_25 : VALP_1_25 {
								align = "right";
								pos[] = {"LevelP25", {0.22, 0.035}, 1};
								right[] = {"LevelP25", {0.32, 0.035}, 1};
								down[] = {"LevelP25", {0.22, 0.085}, 1};
							};
							
							class LevelM30 : Level0 {
								type = "line";
								points[] = {{"LevelM30", {-0.2, -0.03}, 1}, {"LevelM30", {-0.2, 0}, 1}, {"LevelM30", {-0.15, 0}, 1}, {}, {"LevelM30", {-0.1, 0}, 1}, {"LevelM30", {-0.05, 0}, 1}, {}, {"LevelM30", {0.05, 0}, 1}, {"LevelM30", {0.1, 0}, 1}, {}, {"LevelM30", {0.15, 0}, 1}, {"LevelM30", {0.2, 0}, 1}, {"LevelM30", {0.2, -0.03}, 1}};
							};
							
							class VALM_1_30 {
								type = "text";
								source = "static";
								text = -30;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM30", {-0.23, -0.085}, 1};
								right[] = {"LevelM30", {-0.13, -0.085}, 1};
								down[] = {"LevelM30", {-0.23, -0.035}, 1};
							};
							
							class VALM_2_30 : VALM_1_30 {
								align = "right";
								pos[] = {"LevelM30", {0.22, -0.085}, 1};
								right[] = {"LevelM30", {0.32, -0.085}, 1};
								down[] = {"LevelM30", {0.22, -0.035}, 1};
							};
							
							class LevelP30 : Level0 {
								type = "line";
								points[] = {{"LevelP30", {-0.2, 0.03}, 1}, {"LevelP30", {-0.2, 0}, 1}, {"LevelP30", {-0.05, 0}, 1}, {}, {"LevelP30", {0.05, 0}, 1}, {"LevelP30", {0.2, 0}, 1}, {"LevelP30", {0.2, 0.03}, 1}};
							};
							
							class VALP_1_30 {
								type = "text";
								source = "static";
								text = "30";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP30", {-0.23, 0.035}, 1};
								right[] = {"LevelP30", {-0.13, 0.035}, 1};
								down[] = {"LevelP30", {-0.23, 0.085}, 1};
							};
							
							class VALP_2_30 : VALP_1_30 {
								align = "right";
								pos[] = {"LevelP30", {0.22, 0.035}, 1};
								right[] = {"LevelP30", {0.32, 0.035}, 1};
								down[] = {"LevelP30", {0.22, 0.085}, 1};
							};
							
							class LevelM35 : Level0 {
								type = "line";
								points[] = {{"LevelM35", {-0.2, -0.03}, 1}, {"LevelM35", {-0.2, 0}, 1}, {"LevelM35", {-0.15, 0}, 1}, {}, {"LevelM35", {-0.1, 0}, 1}, {"LevelM35", {-0.05, 0}, 1}, {}, {"LevelM35", {0.05, 0}, 1}, {"LevelM35", {0.1, 0}, 1}, {}, {"LevelM35", {0.15, 0}, 1}, {"LevelM35", {0.2, 0}, 1}, {"LevelM35", {0.2, -0.03}, 1}};
							};
							
							class VALM_1_35 {
								type = "text";
								source = "static";
								text = -35;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM35", {-0.23, -0.085}, 1};
								right[] = {"LevelM35", {-0.13, -0.085}, 1};
								down[] = {"LevelM35", {-0.23, -0.035}, 1};
							};
							
							class VALM_2_35 : VALM_1_35 {
								align = "right";
								pos[] = {"LevelM35", {0.22, -0.085}, 1};
								right[] = {"LevelM35", {0.32, -0.085}, 1};
								down[] = {"LevelM35", {0.22, -0.035}, 1};
							};
							
							class LevelP35 : Level0 {
								type = "line";
								points[] = {{"LevelP35", {-0.2, 0.03}, 1}, {"LevelP35", {-0.2, 0}, 1}, {"LevelP35", {-0.05, 0}, 1}, {}, {"LevelP35", {0.05, 0}, 1}, {"LevelP35", {0.2, 0}, 1}, {"LevelP35", {0.2, 0.03}, 1}};
							};
							
							class VALP_1_35 {
								type = "text";
								source = "static";
								text = "35";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP35", {-0.23, 0.035}, 1};
								right[] = {"LevelP35", {-0.13, 0.035}, 1};
								down[] = {"LevelP35", {-0.23, 0.085}, 1};
							};
							
							class VALP_2_35 : VALP_1_35 {
								align = "right";
								pos[] = {"LevelP35", {0.22, 0.035}, 1};
								right[] = {"LevelP35", {0.32, 0.035}, 1};
								down[] = {"LevelP35", {0.22, 0.085}, 1};
							};
							
							class LevelM40 : Level0 {
								type = "line";
								points[] = {{"LevelM40", {-0.2, -0.03}, 1}, {"LevelM40", {-0.2, 0}, 1}, {"LevelM40", {-0.15, 0}, 1}, {}, {"LevelM40", {-0.1, 0}, 1}, {"LevelM40", {-0.05, 0}, 1}, {}, {"LevelM40", {0.05, 0}, 1}, {"LevelM40", {0.1, 0}, 1}, {}, {"LevelM40", {0.15, 0}, 1}, {"LevelM40", {0.2, 0}, 1}, {"LevelM40", {0.2, -0.03}, 1}};
							};
							
							class VALM_1_40 {
								type = "text";
								source = "static";
								text = -40;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM40", {-0.23, -0.085}, 1};
								right[] = {"LevelM40", {-0.13, -0.085}, 1};
								down[] = {"LevelM40", {-0.23, -0.035}, 1};
							};
							
							class VALM_2_40 : VALM_1_40 {
								align = "right";
								pos[] = {"LevelM40", {0.22, -0.085}, 1};
								right[] = {"LevelM40", {0.32, -0.085}, 1};
								down[] = {"LevelM40", {0.22, -0.035}, 1};
							};
							
							class LevelP40 : Level0 {
								type = "line";
								points[] = {{"LevelP40", {-0.2, 0.03}, 1}, {"LevelP40", {-0.2, 0}, 1}, {"LevelP40", {-0.05, 0}, 1}, {}, {"LevelP40", {0.05, 0}, 1}, {"LevelP40", {0.2, 0}, 1}, {"LevelP40", {0.2, 0.03}, 1}};
							};
							
							class VALP_1_40 {
								type = "text";
								source = "static";
								text = "40";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP40", {-0.23, 0.035}, 1};
								right[] = {"LevelP40", {-0.13, 0.035}, 1};
								down[] = {"LevelP40", {-0.23, 0.085}, 1};
							};
							
							class VALP_2_40 : VALP_1_40 {
								align = "right";
								pos[] = {"LevelP40", {0.22, 0.035}, 1};
								right[] = {"LevelP40", {0.32, 0.035}, 1};
								down[] = {"LevelP40", {0.22, 0.085}, 1};
							};
							
							class LevelM45 : Level0 {
								type = "line";
								points[] = {{"LevelM45", {-0.2, -0.03}, 1}, {"LevelM45", {-0.2, 0}, 1}, {"LevelM45", {-0.15, 0}, 1}, {}, {"LevelM45", {-0.1, 0}, 1}, {"LevelM45", {-0.05, 0}, 1}, {}, {"LevelM45", {0.05, 0}, 1}, {"LevelM45", {0.1, 0}, 1}, {}, {"LevelM45", {0.15, 0}, 1}, {"LevelM45", {0.2, 0}, 1}, {"LevelM45", {0.2, -0.03}, 1}};
							};
							
							class VALM_1_45 {
								type = "text";
								source = "static";
								text = -45;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM45", {-0.23, -0.085}, 1};
								right[] = {"LevelM45", {-0.13, -0.085}, 1};
								down[] = {"LevelM45", {-0.23, -0.035}, 1};
							};
							
							class VALM_2_45 : VALM_1_45 {
								align = "right";
								pos[] = {"LevelM45", {0.22, -0.085}, 1};
								right[] = {"LevelM45", {0.32, -0.085}, 1};
								down[] = {"LevelM45", {0.22, -0.035}, 1};
							};
							
							class LevelP45 : Level0 {
								type = "line";
								points[] = {{"LevelP45", {-0.2, 0.03}, 1}, {"LevelP45", {-0.2, 0}, 1}, {"LevelP45", {-0.05, 0}, 1}, {}, {"LevelP45", {0.05, 0}, 1}, {"LevelP45", {0.2, 0}, 1}, {"LevelP45", {0.2, 0.03}, 1}};
							};
							
							class VALP_1_45 {
								type = "text";
								source = "static";
								text = "45";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP45", {-0.23, 0.035}, 1};
								right[] = {"LevelP45", {-0.13, 0.035}, 1};
								down[] = {"LevelP45", {-0.23, 0.085}, 1};
							};
							
							class VALP_2_45 : VALP_1_45 {
								align = "right";
								pos[] = {"LevelP45", {0.22, 0.035}, 1};
								right[] = {"LevelP45", {0.32, 0.035}, 1};
								down[] = {"LevelP45", {0.22, 0.085}, 1};
							};
							
							class LevelM50 : Level0 {
								type = "line";
								points[] = {{"LevelM50", {-0.2, -0.03}, 1}, {"LevelM50", {-0.2, 0}, 1}, {"LevelM50", {-0.15, 0}, 1}, {}, {"LevelM50", {-0.1, 0}, 1}, {"LevelM50", {-0.05, 0}, 1}, {}, {"LevelM50", {0.05, 0}, 1}, {"LevelM50", {0.1, 0}, 1}, {}, {"LevelM50", {0.15, 0}, 1}, {"LevelM50", {0.2, 0}, 1}, {"LevelM50", {0.2, -0.03}, 1}};
							};
							
							class VALM_1_50 {
								type = "text";
								source = "static";
								text = -50;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM50", {-0.23, -0.085}, 1};
								right[] = {"LevelM50", {-0.13, -0.085}, 1};
								down[] = {"LevelM50", {-0.23, -0.035}, 1};
							};
							
							class VALM_2_50 : VALM_1_50 {
								align = "right";
								pos[] = {"LevelM50", {0.22, -0.085}, 1};
								right[] = {"LevelM50", {0.32, -0.085}, 1};
								down[] = {"LevelM50", {0.22, -0.035}, 1};
							};
							
							class LevelP50 : Level0 {
								type = "line";
								points[] = {{"LevelP50", {-0.2, 0.03}, 1}, {"LevelP50", {-0.2, 0}, 1}, {"LevelP50", {-0.05, 0}, 1}, {}, {"LevelP50", {0.05, 0}, 1}, {"LevelP50", {0.2, 0}, 1}, {"LevelP50", {0.2, 0.03}, 1}};
							};
							
							class VALP_1_50 {
								type = "text";
								source = "static";
								text = "50";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP50", {-0.23, 0.035}, 1};
								right[] = {"LevelP50", {-0.13, 0.035}, 1};
								down[] = {"LevelP50", {-0.23, 0.085}, 1};
							};
							
							class VALP_2_50 : VALP_1_50 {
								align = "right";
								pos[] = {"LevelP50", {0.22, 0.035}, 1};
								right[] = {"LevelP50", {0.32, 0.035}, 1};
								down[] = {"LevelP50", {0.22, 0.085}, 1};
							};
						};
					};
					
					class AltScale {
						type = "scale";
						scale = 1;
						source = "altitudeASL";
						sourceScale = 1;
						align = "right";
						pos[] = {0.86, 0.82};
						right[] = {0.94, 0.82};
						down[] = {0.86, 0.87};
						lineXleft = 0.825;
						lineYright = 0.835;
						lineXleftMajor = 0.825;
						lineYrightMajor = 0.845;
						bottom = 0.2;
						top = 0.85;
						center = 0.5;
						step = 20;
						StepSize = (0.85- 0.2)/20;
						horizontal = 0;
						min = "none";
						max = "none";
						numberEach = 5;
						majorLineEach = 5;
					};
					
					class SpeedScale {
						type = "scale";
						scale = 1;
						source = "speed";
						sourceScale = 3.6;
						align = "right";
						pos[] = {0.06, 0.82-0.85+0.2};
						right[] = {0.14, 0.82-0.85+0.2};
						down[] = {0.06, 0.87-0.85+0.2};
						lineXleft = 0.18 + 0.82 - 0.825;
						lineYright = 0.18 + 0.82 - 0.835;
						lineXleftMajor = 0.18 + 0.82 - 0.825;
						lineYrightMajor = 0.18 + 0.82 - 0.845;
						bottom = 0.85;
						center = 0.5;
						top = 0.2;
						step = 20;
						StepSize = (0.85- 0.2)/20;
						horizontal = 0;
						min = "none";
						max = "none";
						numberEach = 5;
						majorLineEach = 5;
					};
					
					class Gear {
						condition = "ils";
						
						class text {
							type = "text";
							source = "static";
							text = GEAR;
							align = "right";
							scale = 0.5;
							sourceScale = 1;
							pos[] = {{0.84, 0.88}, 1};
							right[] = {{0.9, 0.88}, 1};
							down[] = {{0.84, 0.92}, 1};
						};
					};
					
					class Flaps {
						condition = "flaps";
						
						class text {
							type = "text";
							source = "static";
							text = FLAPS;
							align = "right";
							scale = 0.5;
							sourceScale = 1;
							pos[] = {{0.84, 0.93}, 1};
							right[] = {{0.9, 0.93}, 1};
							down[] = {{0.84, 0.97}, 1};
						};
					};
					
					class weapons {
						type = "text";
						source = "weapon";
						align = "right";
						scale = 0.5;
						sourceScale = 1;
						pos[] = {{0.1, 0.88}, 1};
						right[] = {{0.16, 0.88}, 1};
						down[] = {{0.1, 0.92}, 1};
					};
					
					class ammo {
						type = "text";
						source = "ammo";
						align = "right";
						scale = 0.5;
						sourceScale = 1;
						pos[] = {{0.1, 0.93}, 1};
						right[] = {{0.16, 0.93}, 1};
						down[] = {{0.1, 0.97}, 1};
					};
					
					class VspeedNumber {
						type = "text";
						align = "right";
						scale = 1;
						source = "vspeed";
						sourceScale = 1;
						pos[] = {{0.86, 0.52-0.4}, 1};
						right[] = {{0.94, 0.52-0.4}, 1};
						down[] = {{0.86, 0.57-0.4}, 1};
					};
					
					class HeadingScale {
						type = "scale";
						scale = 1;
						source = "Heading";
						sourceScale = 1;
						align = "center";
						pos[] = {0.21-0.01, 0.0};
						right[] = {0.29-0.01, 0.0};
						down[] = {0.21-0.01, 0.05};
						lineXleft = 0.06;
						lineYright = 0.05;
						lineXleftMajor = 0.06;
						lineYrightMajor = 0.04;
						bottom = 0.8;
						center = 0.5;
						top = 0.2;
						step = 18/9;
						StepSize = (0.80- 0.2)/20;
						horizontal = 1;
						min = "none";
						max = "none";
						numberEach = 5;
						majorLineEach = 5;
					};
					
					class ILS {
						condition = "ils";
						
						class Glideslope {
							clipTL[] = {0.0, 0.0};
							clipBR[] = {1.0, 1.0};
							
							class ILS {
								type = "line";
								points[] = {{ILS_W, {-0.24, 0}, 1}, {ILS_W, {0.24, 0}, 1}, {}, {ILS_W, {0, 0.0227027}, 1}, {ILS_W, {0, -0.0227027}, 1}, {}, {ILS_W, {0.12, 0.0227027}, 1}, {ILS_W, {0.12, -0.0227027}, 1}, {}, {ILS_W, {0.24, 0.0227027}, 1}, {ILS_W, {0.24, -0.0227027}, 1}, {}, {ILS_W, {-0.12, 0.0227027}, 1}, {ILS_W, {-0.12, -0.0227027}, 1}, {}, {ILS_W, {-0.24, 0.0227027}, 1}, {ILS_W, {-0.24, -0.0227027}, 1}, {}, {ILS_H, {0, -0.227027}, 1}, {ILS_H, {0, 0.227027}, 1}, {}, {ILS_H, {0.024, 0}, 1}, {ILS_H, {-0.024, 0}, 1}, {}, {ILS_H, {0.024, 0.113514}, 1}, {ILS_H, {-0.024, 0.113514}, 1}, {}, {ILS_H, {0.024, 0.227027}, 1}, {ILS_H, {-0.024, 0.227027}, 1}, {}, {ILS_H, {0.024, -0.113514}, 1}, {ILS_H, {-0.024, -0.113514}, 1}, {}, {ILS_H, {0.024, -0.227027}, 1}, {ILS_H, {-0.024, -0.227027}, 1}};
							};
						};
					};
				};
			};
			
			class FA18_Parallax_HUD {
				enableParallax = 1;
				
				class Pos10Vector {
					type = "vector";
					pos0[] = {0.49, 0.24};
					pos10[] = {1.225, 1.1};
				};
				topLeft = "HUD LH";
				topRight = "HUD PH";
				bottomLeft = "HUD LD";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0, 1, 0, 0.1};
				
				class Bones {
					class WeaponAim : Pos10Vector {
						source = "weapon";
					};
					
					class BombAim : WeaponAim {
						pos0[] = {0.485, 0.43};
						source = "weapon";
					};
					
					class Target : Pos10Vector {
						source = "target";
					};
				};
				
				class Draw {
					alpha = 1.0;
					color[] = {0.0, 0.3, 0.05};
					condition = "on";
					
					class RadarTargets {
						points[] = {};
						pos0[] = {0.485, 0.4};
						pos10[] = {1.225, 1.1};
						type = "radar";
					};
					
					class MGun_Static {
						enableParallax = 1;
						
						class Circle {
							type = "line";
							points[] = {{"WeaponAim", {0.01, 0}, 1}, {"WeaponAim", {-0.01, 0}, 1}, {}, {"WeaponAim", {0, 0.00945946}, 1}, {"WeaponAim", {0, -0.00945946}, 1}, {}, {"WeaponAim", {0, -0.0662162}, 1}, {"WeaponAim", {0.049, -0.0463514}, 1}, {"WeaponAim", {0.07, 0}, 1}, {"WeaponAim", {0.049, 0.0463514}, 1}, {"WeaponAim", {0, 0.0662162}, 1}, {"WeaponAim", {-0.049, 0.0463514}, 1}, {"WeaponAim", {-0.07, 0}, 1}, {"WeaponAim", {-0.049, -0.0463514}, 1}, {"WeaponAim", {0, -0.0662162}, 1}, {}, {"WeaponAim", {0, -0.132432}, 1}, {"WeaponAim", {0.07, -0.115216}, 1}, {"WeaponAim", {0.1218, -0.0662162}, 1}, {"WeaponAim", {0.14, 0}, 1}, {"WeaponAim", {0.1218, 0.0662162}, 1}, {"WeaponAim", {0.07, 0.115216}, 1}, {"WeaponAim", {0, 0.132432}, 1}, {"WeaponAim", {-0.07, 0.115216}, 1}, {"WeaponAim", {-0.1218, 0.0662162}, 1}, {"WeaponAim", {-0.14, 0}, 1}, {"WeaponAim", {-0.1218, -0.0662162}, 1}, {"WeaponAim", {-0.07, -0.115216}, 1}, {"WeaponAim", {0, -0.132432}, 1}, {}, {"WeaponAim", {0, -0.132432}, 1}, {"WeaponAim", {0, -0.151351}, 1}, {}, {"WeaponAim", {-0.07, -0.11469}, 1}, {"WeaponAim", {-0.08, -0.131074}, 1}, {}, {"WeaponAim", {-0.121244, -0.0662162}, 1}, {"WeaponAim", {-0.138564, -0.0756757}, 1}, {}, {"WeaponAim", {-0.14, 5.78881e-009}, 1}, {"WeaponAim", {-0.16, 6.61578e-009}, 1}, {}, {"WeaponAim", {-0.121244, 0.0662162}, 1}, {"WeaponAim", {-0.138564, 0.0756757}, 1}, {}, {"WeaponAim", {-0.07, 0.11469}, 1}, {"WeaponAim", {-0.08, 0.131074}, 1}, {}, {"WeaponAim", {1.22392e-008, 0.132432}, 1}, {"WeaponAim", {1.39876e-008, 0.151351}, 1}, {}, {"WeaponAim", {0.07, 0.11469}, 1}, {"WeaponAim", {0.08, 0.131074}, 1}, {}, {"WeaponAim", {0.121244, 0.0662162}, 1}, {"WeaponAim", {0.138564, 0.0756757}, 1}, {}, {"WeaponAim", {0.14, -1.57924e-009}, 1}, {"WeaponAim", {0.16, -1.80485e-009}, 1}, {}, {"WeaponAim", {0.121244, -0.0662162}, 1}, {"WeaponAim", {0.138564, -0.0756757}, 1}, {}, {"WeaponAim", {0.07, -0.11469}, 1}, {"WeaponAim", {0.08, -0.131074}, 1}, {}};
						};
					};
				};
			};
		};
		
		class AnimationSources {
			class lelev_off {
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			
			class relev_off {
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			
			class rightgear {
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			
			class leftgear {
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			
			class lgearpist {
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			
			class lgearsus {
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			
			class rgearpist {
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			
			class rgearsus {
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			
			class n_sus {
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			
			class n_sus2 {
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			
			class rgear_rot {
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			
			class lgear_rot {
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			
			class frontgear {
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			
			class lgdoor {
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			
			class rin_lgdoor {
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			
			class rou_lgdoor {
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			
			class rgdoor {
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			
			class rin_rgdoor {
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			
			class rou_rgdoor {
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			
			class f_ndoor {
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			
			class f_nrdoor {
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			
			class f_ndoor2 {
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			
			class r_ndoor {
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			
			class rear_ndoor {
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			
			class fuel_probe {
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			
			class fuel_drogue {
				source = "user";
				animPeriod = 8;
				initPhase = 0;
			};
			
			class auxtank_switch {
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			
			class eject_switch {
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			
			class ab_switch {
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			
			class spd_accelerator {
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			
			class bottles {
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			
			class ewsfail {
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			
			class gearfail {
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			
			class flarecount {
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			
			class firewep {
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			
			class fired {
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			
			class service_menu_switch {
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			
			class rearming_done_switch {
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			
			class master_arms_switch {
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			
			class ALTFLIR_switch {
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			
			class ALTFLIR_LD_switch {
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			
			class canopy {
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			
			class r_wingfold {
				source = "user";
				animPeriod = 2;
				initPhase = 1;
			};
			
			class l_wingfold {
				source = "user";
				animPeriod = 2;
				initPhase = 1;
			};
			
			class tailhook {
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			
			class map_X {
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			
			class map_Y {
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			
			class map_icon_x {
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			
			class map_icon_y {
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			
			class commap_X {
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			
			class commap_Y {
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			
			class fuel_int {
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			
			class fuel_extl {
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			
			class fuel_extr {
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			
			class fuel_extc {
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			
			class le_fire {
				source = "user";
				animPeriod = 0.0001;
				initPhase = 0;
			};
			
			class re_fire {
				source = "user";
				animPeriod = 0.0001;
				initPhase = 0;
			};
			
			class mstr_caut {
				source = "user";
				animPeriod = 0.0001;
				initPhase = 0;
			};
			
			class rmfd_fl {
				source = "user";
				animPeriod = 0.0001;
				initPhase = 0;
			};
			
			class lmfd_fl {
				source = "user";
				animPeriod = 0.0001;
				initPhase = 0;
			};
			
			class map_fl {
				source = "user";
				animPeriod = 0.0001;
				initPhase = 0;
			};
			
			class engd_fl {
				source = "user";
				animPeriod = 0.0001;
				initPhase = 0;
			};
			
			class upfrnt_fl {
				source = "user";
				animPeriod = 0.0001;
				initPhase = 0;
			};
			
			class eng_fail {
				source = "user";
				animPeriod = 0.0001;
				initPhase = 0;
			};
			
			class ccip_length {
				source = "user";
				animPeriod = 0.0001;
				initPhase = 0;
			};
			
			class ccip_rot {
				source = "user";
				animPeriod = 0.0001;
				initPhase = 0;
			};
			
			class MFD_Displays_On {
				source = "user";
				animPeriod = 0.0001;
				initPhase = 1;
			};
			
			class Buddy_Pod_attach {
				source = "user";
				animPeriod = 0.0001;
				initPhase = 1;
			};
			
			class Ladder_GetIn {
				source = "user";
				animPeriod = 0.0001;
				initPhase = 1;
			};
		};
		
		class UserActions {			
			class foldwings {
				displayName = "$STR_TU_FOLD_WINGS";
				position = "pilotcontrol";
				radius = 5;
				condition = "this animationPhase ""l_wingfold"" < 0.1 and (getpos this select 2) < 1 and (not isengineon this) and player == driver this";
				statement = "this animate [""l_wingfold"",1] and this animate [""r_wingfold"",1] and this say ""FA18_foldwing_sound""";
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
			
			class unfoldwings {
				displayName = "$STR_TU_UNFOLD_WINGS";
				position = "pilotcontrol";
				radius = 5;
				condition = "this animationPhase ""l_wingfold"" > 0.9 and player == driver this";
				statement = "this animate [""l_wingfold"",0] and this animate [""r_wingfold"",0] and this say ""FA18_foldwing_sound""";
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
			
			class LaseKh29
			{
				displayName = "$STR_ACE_UA_LASER_ON";
				position = "HitGlass3";
				radius = 6;
				onlyForPlayer = 1;
				condition = "(player in [gunner this, driver this]) && {(getNumber(configFile>>'cfgWeapons'>>currentWeapon this>>'ace_sys_missileguidance_enableAirDesignator') == 1)}";
				statement = "[this,0,0] call ace_sys_missileguidance_fnc_Kh29_Lase";
			};
			
			class LaseKh29Off: LaseKh29
			{
				displayName = "$STR_ACE_UA_LASER_OFF";
				condition = "(player in [gunner this, driver this]) && {(this getVariable 'ace_sys_missileguidance_tracking')}";
				statement = "this setVariable ['ace_sys_missileguidance_tracking',nil]";
			};
		};
		
		class ACE: ACE {
			class ACE_MISSILEGUIDANCE: ACE_MISSILEGUIDANCE
			{
				ACE_DESIGNATOR = 1;
				ACE_RANGEFINDER = 0;
			};
		};
		
		class Eventhandlers: Eventhandlers {		
			animchanged = "_this call SLX_XEH_EH_AnimChanged";
			animdone = "_this call SLX_XEH_EH_AnimDone";
			animstatechanged = "_this call SLX_XEH_EH_AnimStateChanged";
			dammaged = "_this call SLX_XEH_EH_Dammaged";
			engine = "_this call SLX_XEH_EH_Engine";
			fired = "_this call SLX_XEH_EH_Fired";
			firedbis = "_this call BIS_Effects_EH_Fired";
			firednear = "_this call SLX_XEH_EH_FiredNear";
			fuel = "_this call SLX_XEH_EH_Fuel";
			gear = "_this call SLX_XEH_EH_Gear";
			getin = "_this call SLX_XEH_EH_GetIn";
			getout = "_this call SLX_XEH_EH_GetOut";
			hit = "_this call SLX_XEH_EH_Hit";
			incomingmissile = "_this call SLX_XEH_EH_IncomingMissile";
			init = "_this execVM ""\js_FA18\scripts\init_FA18F.sqf""; if(isNil'SLX_XEH_MACHINE')then{call compile preProcessFileLineNumbers '\x\cba\addons\xeh\init_pre.sqf'};_this call SLX_XEH_EH_Init";
			killed = "_this call SLX_XEH_EH_Killed";
			landedstopped = "_this call SLX_XEH_EH_LandedStopped";
			landedtouchdown = "_this call SLX_XEH_EH_LandedTouchDown";
			respawn = "_this call SLX_XEH_EH_Respawn";
		};
		
		hiddenSelections[] = {"camo_hull", "camo_misc", "camo_center_fueltank", "camo_cockpit_1", "camo_cockpit_2", "camo_MFD", "camo_glass", "camo_ladder", "pilot_tag", "wso_tag", "camo_buddy_pod"};
		hiddenSelectionsTextures[] = {"\js_fa18\data\fa18f_hull_co.paa", "\js_fa18\data\fa18_misc_co.paa", "", "\js_fa18\data\fa18_cockpit1_co.paa", "\js_fa18\data\fa18_cockpit2_ca.paa", "\js_fa18\data\fa18_mfd_co.paa", "\js_fa18\data\fa18_glass_ca.paa", "\js_fa18\data\fa18_ladder_co.paa", "", "", "\js_fa18\data\fa18_misc_co.paa"};
		
		weapons[] = {"TU_M61", "CMFlareLauncher"};
		magazines[] = {"TU_578Rnd_20mm_M61", "120Rnd_CMFlare_Chaff_Magazine"};
		
		displayName = "F/A-18B (Multirole)";
		side = TWest;
		faction = ACE_USNAVY;		
		vehicleClass = TU_USNAVY_AIR;
		crew = "TU_NAVY_Pilot";
	};

	class TU_FA18B_CAP : TU_FA18B {
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				weapons[] = {"AIM9MLaucher", "AIM7MLaucher"};
				magazines[] = {
					"TU_1Rnd_AIM9M", "TU_1Rnd_AIM9M", 
					"TU_2Rnd_Empty",
					"TU_1Rnd_AIM9M", "TU_1Rnd_AIM9M", 
					"TU_1Rnd_AIM7M", "TU_1Rnd_AIM7M", 
					"TU_1Rnd_AIM7M", "TU_1Rnd_FLIR_POD_FA18", 
					"TU_8Rnd_Empty",
					"TU_1Rnd_FT_FA18"
				};
			};
		};
		
		hiddenSelections[] = {"camo_hull", "camo_misc", "camo_center_fueltank", "camo_cockpit_1", "camo_cockpit_2", "camo_MFD", "camo_glass", "camo_ladder", "pilot_tag", "wso_tag", "camo_buddy_pod"};
		hiddenSelectionsTextures[] = {"\js_fa18\data\fa18f_hull_co.paa", "\js_fa18\data\fa18_misc_co.paa", "", "\js_fa18\data\fa18_cockpit1_co.paa", "\js_fa18\data\fa18_cockpit2_ca.paa", "\js_fa18\data\fa18_mfd_co.paa", "\js_fa18\data\fa18_glass_ca.paa", "\js_fa18\data\fa18_ladder_co.paa", "", "", "\js_fa18\data\fa18_misc_co.paa"};
		
		weapons[] = {"TU_M61", "CMFlareLauncher"};
		magazines[] = {"TU_578Rnd_20mm_M61", "120Rnd_CMFlare_Chaff_Magazine"};
		
		displayName = "F/A-18B (CAP)";
		side = TWest;
		faction = ACE_USNAVY;		
		vehicleClass = TU_USNAVY_AIR;
		crew = "TU_NAVY_Pilot";
	};
	
	class TU_FA18B_LGB : TU_FA18B {
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				weapons[] = {"AIM9MLaucher", "AIM7MLaucher", "GBU12_BombLauncher_LD"};
				magazines[] = {
					"TU_1Rnd_AIM9M", "TU_1Rnd_AIM9M", 
					"TU_2Rnd_Empty",
					"TU_1Rnd_GBU12", "TU_1Rnd_GBU12", 
					"TU_1Rnd_GBU12", "TU_1Rnd_GBU12", 
					"TU_1Rnd_AIM7M", "TU_1Rnd_FLIR_POD_FA18", 
					"TU_8Rnd_Empty",
					"TU_1Rnd_FT_FA18"
				};
			};
		};
		
		hiddenSelections[] = {"camo_hull", "camo_misc", "camo_center_fueltank", "camo_cockpit_1", "camo_cockpit_2", "camo_MFD", "camo_glass", "camo_ladder", "pilot_tag", "wso_tag", "camo_buddy_pod"};
		hiddenSelectionsTextures[] = {"\js_fa18\data\fa18f_hull_co.paa", "\js_fa18\data\fa18_misc_co.paa", "", "\js_fa18\data\fa18_cockpit1_co.paa", "\js_fa18\data\fa18_cockpit2_ca.paa", "\js_fa18\data\fa18_mfd_co.paa", "\js_fa18\data\fa18_glass_ca.paa", "\js_fa18\data\fa18_ladder_co.paa", "", "", "\js_fa18\data\fa18_misc_co.paa"};
		
		weapons[] = {"TU_M61", "CMFlareLauncher"};
		magazines[] = {"TU_578Rnd_20mm_M61", "120Rnd_CMFlare_Chaff_Magazine"};
		
		displayName = "F/A-18B (LGB)";
		side = TWest;
		faction = ACE_USNAVY;		
		vehicleClass = TU_USNAVY_AIR;
		crew = "TU_NAVY_Pilot";
	};
	
	class TU_FA18B_AT : TU_FA18B {
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				weapons[] = {"AIM9MLaucher", "AIM7MLaucher", "AGM65E_Launcher"};
				magazines[] = {
					"TU_1Rnd_AIM9M", "TU_1Rnd_AIM9M", 
					"TU_2Rnd_Empty",
					"TU_1Rnd_AGM65E", "TU_1Rnd_AGM65E", 
					"TU_1Rnd_AGM65E", "TU_1Rnd_AGM65E", 
					"TU_1Rnd_AIM7M", "TU_1Rnd_FLIR_POD_FA18", 
					"TU_8Rnd_Empty",
					"TU_1Rnd_FT_FA18"
				};
			};
		};
		
		hiddenSelections[] = {"camo_hull", "camo_misc", "camo_center_fueltank", "camo_cockpit_1", "camo_cockpit_2", "camo_MFD", "camo_glass", "camo_ladder", "pilot_tag", "wso_tag", "camo_buddy_pod"};
		hiddenSelectionsTextures[] = {"\js_fa18\data\fa18f_hull_co.paa", "\js_fa18\data\fa18_misc_co.paa", "", "\js_fa18\data\fa18_cockpit1_co.paa", "\js_fa18\data\fa18_cockpit2_ca.paa", "\js_fa18\data\fa18_mfd_co.paa", "\js_fa18\data\fa18_glass_ca.paa", "\js_fa18\data\fa18_ladder_co.paa", "", "", "\js_fa18\data\fa18_misc_co.paa"};
		
		weapons[] = {"TU_M61", "CMFlareLauncher"};
		magazines[] = {"TU_578Rnd_20mm_M61", "120Rnd_CMFlare_Chaff_Magazine"};
		
		displayName = "F/A-18B (AT)";
		side = TWest;
		faction = ACE_USNAVY;		
		vehicleClass = TU_USNAVY_AIR;
		crew = "TU_NAVY_Pilot";
	};
	
	class TU_FA18B_BMB : TU_FA18B {
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				weapons[] = {"AIM9MLaucher", "AIM7MLaucher", "TU_Mk82BombLauncher_DB"};
				magazines[] = {
					"TU_1Rnd_AIM9M", "TU_1Rnd_AIM9M", 
					"TU_2Rnd_Empty", 
					"TU_1Rnd_Mk82_DB", "TU_1Rnd_Mk82_DB", 
					"TU_1Rnd_X2_FA18", "TU_1Rnd_X2_FA18", 
					"TU_1Rnd_AIM7M", "TU_1Rnd_FLIR_POD_FA18", 
					"TU_1Rnd_Mk82_DB", "TU_1Rnd_Mk82_DB", "TU_1Rnd_Mk82_DB", "TU_1Rnd_Mk82_DB", 
					"TU_4Rnd_Empty",
					"TU_1Rnd_FT_FA18"
				};
			};
		};
		
		hiddenSelections[] = {"camo_hull", "camo_misc", "camo_center_fueltank", "camo_cockpit_1", "camo_cockpit_2", "camo_MFD", "camo_glass", "camo_ladder", "pilot_tag", "wso_tag", "camo_buddy_pod"};
		hiddenSelectionsTextures[] = {"\js_fa18\data\fa18f_hull_co.paa", "\js_fa18\data\fa18_misc_co.paa", "", "\js_fa18\data\fa18_cockpit1_co.paa", "\js_fa18\data\fa18_cockpit2_ca.paa", "\js_fa18\data\fa18_mfd_co.paa", "\js_fa18\data\fa18_glass_ca.paa", "\js_fa18\data\fa18_ladder_co.paa", "", "", "\js_fa18\data\fa18_misc_co.paa"};
		
		weapons[] = {"TU_M61", "CMFlareLauncher"};
		magazines[] = {"TU_578Rnd_20mm_M61", "120Rnd_CMFlare_Chaff_Magazine"};
		
		displayName = "F/A-18B (BMB)";
		side = TWest;
		faction = ACE_USNAVY;		
		vehicleClass = TU_USNAVY_AIR;
		crew = "TU_NAVY_Pilot";
	};
	
	class TU_FA18B_USMC : TU_FA18B {
		hiddenSelections[] = {"camo_hull", "camo_misc", "camo_center_fueltank", "camo_cockpit_1", "camo_cockpit_2", "camo_MFD", "camo_glass", "camo_ladder", "pilot_tag", "wso_tag", "camo_buddy_pod"};
		hiddenSelectionsTextures[] = {"\js_fa18\data\SQUADS\fa18f_hull_USMC_co.paa", "\js_fa18\data\fa18_misc_co.paa", "", "\js_fa18\data\fa18_cockpit1_co.paa", "\js_fa18\data\fa18_cockpit2_ca.paa", "\js_fa18\data\fa18_mfd_co.paa", "\js_fa18\data\fa18_glass_ca.paa", "\js_fa18\data\fa18_ladder_co.paa", "", "", "\js_fa18\data\fa18_misc_co.paa"};
		
		faction = USMC;		
		vehicleClass = TU_USMC_AIR;
		crew = "USMC_Soldier_Pilot";
	};
	
	class TU_FA18B_USMC_CAP : TU_FA18B_CAP {
		hiddenSelections[] = {"camo_hull", "camo_misc", "camo_center_fueltank", "camo_cockpit_1", "camo_cockpit_2", "camo_MFD", "camo_glass", "camo_ladder", "pilot_tag", "wso_tag", "camo_buddy_pod"};
		hiddenSelectionsTextures[] = {"\js_fa18\data\SQUADS\fa18f_hull_USMC_co.paa", "\js_fa18\data\fa18_misc_co.paa", "", "\js_fa18\data\fa18_cockpit1_co.paa", "\js_fa18\data\fa18_cockpit2_ca.paa", "\js_fa18\data\fa18_mfd_co.paa", "\js_fa18\data\fa18_glass_ca.paa", "\js_fa18\data\fa18_ladder_co.paa", "", "", "\js_fa18\data\fa18_misc_co.paa"};
		
		faction = USMC;		
		vehicleClass = TU_USMC_AIR;
		crew = "USMC_Soldier_Pilot";
	};
	
	class TU_FA18B_USMC_LGB : TU_FA18B_LGB {
		hiddenSelections[] = {"camo_hull", "camo_misc", "camo_center_fueltank", "camo_cockpit_1", "camo_cockpit_2", "camo_MFD", "camo_glass", "camo_ladder", "pilot_tag", "wso_tag", "camo_buddy_pod"};
		hiddenSelectionsTextures[] = {"\js_fa18\data\SQUADS\fa18f_hull_USMC_co.paa", "\js_fa18\data\fa18_misc_co.paa", "", "\js_fa18\data\fa18_cockpit1_co.paa", "\js_fa18\data\fa18_cockpit2_ca.paa", "\js_fa18\data\fa18_mfd_co.paa", "\js_fa18\data\fa18_glass_ca.paa", "\js_fa18\data\fa18_ladder_co.paa", "", "", "\js_fa18\data\fa18_misc_co.paa"};
		
		faction = USMC;		
		vehicleClass = TU_USMC_AIR;
		crew = "USMC_Soldier_Pilot";
	};
	
	class TU_FA18B_USMC_AT : TU_FA18B_AT {
		hiddenSelections[] = {"camo_hull", "camo_misc", "camo_center_fueltank", "camo_cockpit_1", "camo_cockpit_2", "camo_MFD", "camo_glass", "camo_ladder", "pilot_tag", "wso_tag", "camo_buddy_pod"};
		hiddenSelectionsTextures[] = {"\js_fa18\data\SQUADS\fa18f_hull_USMC_co.paa", "\js_fa18\data\fa18_misc_co.paa", "", "\js_fa18\data\fa18_cockpit1_co.paa", "\js_fa18\data\fa18_cockpit2_ca.paa", "\js_fa18\data\fa18_mfd_co.paa", "\js_fa18\data\fa18_glass_ca.paa", "\js_fa18\data\fa18_ladder_co.paa", "", "", "\js_fa18\data\fa18_misc_co.paa"};
		
		faction = USMC;		
		vehicleClass = TU_USMC_AIR;
		crew = "USMC_Soldier_Pilot";
	};
	
	class TU_FA18B_USMC_BMB : TU_FA18B_BMB {
		hiddenSelections[] = {"camo_hull", "camo_misc", "camo_center_fueltank", "camo_cockpit_1", "camo_cockpit_2", "camo_MFD", "camo_glass", "camo_ladder", "pilot_tag", "wso_tag", "camo_buddy_pod"};
		hiddenSelectionsTextures[] = {"\js_fa18\data\SQUADS\fa18f_hull_USMC_co.paa", "\js_fa18\data\fa18_misc_co.paa", "", "\js_fa18\data\fa18_cockpit1_co.paa", "\js_fa18\data\fa18_cockpit2_ca.paa", "\js_fa18\data\fa18_mfd_co.paa", "\js_fa18\data\fa18_glass_ca.paa", "\js_fa18\data\fa18_ladder_co.paa", "", "", "\js_fa18\data\fa18_misc_co.paa"};
		
		faction = USMC;		
		vehicleClass = TU_USMC_AIR;
		crew = "USMC_Soldier_Pilot";
	};
	
	class TU_FA18E : TU_FA18A {
		displayName = "F/A-18E (Multirole)";
		lockDetectionSystem = 8;
		incommingMisslieDetectionSystem = 8;
		irScanRangeMax = 10000;
		aileronSensitivity = 0.9;
		elevatorsensitivity = 0.8;
		
		hiddenSelections[] = {"camo_hull", "camo_misc", "camo_center_fueltank", "camo_cockpit_1", "camo_cockpit_2", "camo_MFD", "camo_glass", "camo_ladder"};
		hiddenSelectionsTextures[] = {"\js_fa18\data\fa18e_hull_co.paa", "\js_fa18\data\fa18_misc_co.paa", "", "\js_fa18\data\fa18_cockpit1_co.paa", "\js_fa18\data\fa18_cockpit2_ca.paa", "\js_fa18\data\fa18_mfd_co.paa", "\js_fa18\data\fa18_glass_ca.paa", "\js_fa18\data\fa18_ladder_co.paa"};
		
		weapons[] = {"TU_M61", "SidewinderLaucher", "AIM120Laucher", "AGM65E_Launcher", "GBU12_BombLauncher_LD", "CMFlareLauncher"};
		magazines[] = {"TU_578Rnd_20mm_M61", 
			"TU_1Rnd_Sidewinder", "TU_1Rnd_Sidewinder", 
			"TU_1Rnd_AIM120", "TU_1Rnd_AIM120", 
			"TU_1Rnd_GBU12", "TU_1Rnd_GBU12", 
			"TU_1Rnd_X2_FA18", "TU_1Rnd_X2_FA18", 
			"TU_1Rnd_AIM120", "TU_1Rnd_FLIR_POD_FA18", 
			"TU_1Rnd_AGM65E", "TU_1Rnd_AGM65E", "TU_1Rnd_AGM65E", "TU_1Rnd_AGM65E", 
			"TU_4Rnd_Empty",
			"TU_1Rnd_FT_FA18", 
			"120Rnd_CMFlare_Chaff_Magazine"
		};
	};
	
	class TU_FA18E_CAP : TU_FA18E {
		hiddenSelections[] = {"camo_hull", "camo_misc", "camo_center_fueltank", "camo_cockpit_1", "camo_cockpit_2", "camo_MFD", "camo_glass", "camo_ladder"};
		hiddenSelectionsTextures[] = {"\js_fa18\data\fa18e_hull_co.paa", "\js_fa18\data\fa18_misc_co.paa", "", "\js_fa18\data\fa18_cockpit1_co.paa", "\js_fa18\data\fa18_cockpit2_ca.paa", "\js_fa18\data\fa18_mfd_co.paa", "\js_fa18\data\fa18_glass_ca.paa", "\js_fa18\data\fa18_ladder_co.paa"};
		
		weapons[] = {"TU_M61", "SidewinderLaucher", "AIM120Laucher", "CMFlareLauncher"};
		magazines[] = {"TU_578Rnd_20mm_M61", 
			"TU_1Rnd_Sidewinder", "TU_1Rnd_Sidewinder",
			"TU_1Rnd_Sidewinder", "TU_1Rnd_Sidewinder",
			"TU_1Rnd_Sidewinder", "TU_1Rnd_Sidewinder",
			"TU_1Rnd_AIM120", "TU_1Rnd_AIM120", 
			"TU_1Rnd_AIM120", "TU_1Rnd_AIM120", 
			"TU_8Rnd_Empty",
			"TU_1Rnd_FT_FA18", 
			"120Rnd_CMFlare_Chaff_Magazine"
		};
		
		displayName = "F/A-18E (CAP)";
		side = TWest;
		faction = ACE_USNAVY;		
		vehicleClass = TU_USNAVY_AIR;
		crew = "TU_NAVY_Pilot";
	};
	
	class TU_FA18E_LGB : TU_FA18E {
		hiddenSelections[] = {"camo_hull", "camo_misc", "camo_center_fueltank", "camo_cockpit_1", "camo_cockpit_2", "camo_MFD", "camo_glass", "camo_ladder"};
		hiddenSelectionsTextures[] = {"\js_fa18\data\fa18e_hull_co.paa", "\js_fa18\data\fa18_misc_co.paa", "", "\js_fa18\data\fa18_cockpit1_co.paa", "\js_fa18\data\fa18_cockpit2_ca.paa", "\js_fa18\data\fa18_mfd_co.paa", "\js_fa18\data\fa18_glass_ca.paa", "\js_fa18\data\fa18_ladder_co.paa"};
		
		weapons[] = {"TU_M61", "SidewinderLaucher", "AIM120Laucher", "GBU12_BombLauncher_LD", "CMFlareLauncher"};
		magazines[] = {"TU_578Rnd_20mm_M61", 
			"TU_1Rnd_Sidewinder", "TU_1Rnd_Sidewinder",
			"TU_1Rnd_GBU12", "TU_1Rnd_GBU12", 
			"TU_1Rnd_GBU12", "TU_1Rnd_GBU12", 
			"TU_1Rnd_GBU12", "TU_1Rnd_GBU12", 
			"TU_1Rnd_AIM120", "TU_1Rnd_FLIR_POD_FA18", 
			"TU_8Rnd_Empty",
			"TU_1Rnd_FT_FA18", 
			"120Rnd_CMFlare_Chaff_Magazine"
		};
		
		displayName = "F/A-18E (LGB)";
		side = TWest;
		faction = ACE_USNAVY;		
		vehicleClass = TU_USNAVY_AIR;
		crew = "TU_NAVY_Pilot";
	};
	
	class TU_FA18E_AT : TU_FA18E {
		hiddenSelections[] = {"camo_hull", "camo_misc", "camo_center_fueltank", "camo_cockpit_1", "camo_cockpit_2", "camo_MFD", "camo_glass", "camo_ladder"};
		hiddenSelectionsTextures[] = {"\js_fa18\data\fa18e_hull_co.paa", "\js_fa18\data\fa18_misc_co.paa", "", "\js_fa18\data\fa18_cockpit1_co.paa", "\js_fa18\data\fa18_cockpit2_ca.paa", "\js_fa18\data\fa18_mfd_co.paa", "\js_fa18\data\fa18_glass_ca.paa", "\js_fa18\data\fa18_ladder_co.paa"};
		
		weapons[] = {"TU_M61", "SidewinderLaucher", "AIM120Laucher", "AGM65E_Launcher", "CMFlareLauncher"};
		magazines[] = {"TU_578Rnd_20mm_M61", 
			"TU_1Rnd_Sidewinder", "TU_1Rnd_Sidewinder",
			"TU_1Rnd_AIM120", "TU_1Rnd_AIM120", 
			"TU_1Rnd_AGM65E", "TU_1Rnd_AGM65E", 
			"TU_1Rnd_X2_FA18", "TU_1Rnd_X2_FA18", 
			"TU_1Rnd_AIM120", "TU_1Rnd_FLIR_POD_FA18", 
			"TU_1Rnd_AGM65E", "TU_1Rnd_AGM65E", "TU_1Rnd_AGM65E", "TU_1Rnd_AGM65E", 
			"TU_4Rnd_Empty",
			"TU_1Rnd_FT_FA18", 
			"120Rnd_CMFlare_Chaff_Magazine"
		};
		
		displayName = "F/A-18E (AT)";
		side = TWest;
		faction = ACE_USNAVY;		
		vehicleClass = TU_USNAVY_AIR;
		crew = "TU_NAVY_Pilot";
	};
	
	class TU_FA18E_BMB : TU_FA18E {
		hiddenSelections[] = {"camo_hull", "camo_misc", "camo_center_fueltank", "camo_cockpit_1", "camo_cockpit_2", "camo_MFD", "camo_glass", "camo_ladder"};
		hiddenSelectionsTextures[] = {"\js_fa18\data\fa18e_hull_co.paa", "\js_fa18\data\fa18_misc_co.paa", "", "\js_fa18\data\fa18_cockpit1_co.paa", "\js_fa18\data\fa18_cockpit2_ca.paa", "\js_fa18\data\fa18_mfd_co.paa", "\js_fa18\data\fa18_glass_ca.paa", "\js_fa18\data\fa18_ladder_co.paa"};
		
		weapons[] = {"TU_M61", "SidewinderLaucher", "AIM120Laucher", "TU_Mk82BombLauncher_DB", "CMFlareLauncher"};
		magazines[] = {"TU_578Rnd_20mm_M61", 
			"TU_1Rnd_Sidewinder", "TU_1Rnd_Sidewinder",
			"TU_1Rnd_AIM120", "TU_1Rnd_AIM120", 
			"TU_1Rnd_Mk82_DB", "TU_1Rnd_Mk82_DB", 
			"TU_1Rnd_X2_FA18", "TU_1Rnd_X2_FA18", 
			"TU_1Rnd_AIM120", "TU_1Rnd_AIM120", 
			"TU_1Rnd_Mk82_DB", "TU_1Rnd_Mk82_DB", "TU_1Rnd_Mk82_DB", "TU_1Rnd_Mk82_DB", 
			"TU_4Rnd_Empty",
			"TU_1Rnd_FT_FA18", 
			"120Rnd_CMFlare_Chaff_Magazine"
		};
		
		displayName = "F/A-18E (BMB)";
		side = TWest;
		faction = ACE_USNAVY;		
		vehicleClass = TU_USNAVY_AIR;
		crew = "TU_NAVY_Pilot";
	};
	
	class TU_FA18E_USMC : TU_FA18E {
		hiddenSelections[] = {"camo_hull", "camo_misc", "camo_center_fueltank", "camo_cockpit_1", "camo_cockpit_2", "camo_MFD", "camo_glass", "camo_ladder"};
		hiddenSelectionsTextures[] = {"\js_fa18\data\SQUADS\fa18e_hull_USMC_co.paa", "\js_fa18\data\fa18_misc_co.paa", "", "\js_fa18\data\fa18_cockpit1_co.paa", "\js_fa18\data\fa18_cockpit2_ca.paa", "\js_fa18\data\fa18_mfd_co.paa", "\js_fa18\data\fa18_glass_ca.paa", "\js_fa18\data\fa18_ladder_co.paa"};
		
		faction = USMC;		
		vehicleClass = TU_USMC_AIR;
		crew = "USMC_Soldier_Pilot";
	};
	
	class TU_FA18E_USMC_CAP : TU_FA18E_CAP {
		hiddenSelections[] = {"camo_hull", "camo_misc", "camo_center_fueltank", "camo_cockpit_1", "camo_cockpit_2", "camo_MFD", "camo_glass", "camo_ladder"};
		hiddenSelectionsTextures[] = {"\js_fa18\data\SQUADS\fa18e_hull_USMC_co.paa", "\js_fa18\data\fa18_misc_co.paa", "", "\js_fa18\data\fa18_cockpit1_co.paa", "\js_fa18\data\fa18_cockpit2_ca.paa", "\js_fa18\data\fa18_mfd_co.paa", "\js_fa18\data\fa18_glass_ca.paa", "\js_fa18\data\fa18_ladder_co.paa"};
		
		faction = USMC;		
		vehicleClass = TU_USMC_AIR;
		crew = "USMC_Soldier_Pilot";
	};
	
	class TU_FA18E_USMC_LGB : TU_FA18E_LGB {
		hiddenSelections[] = {"camo_hull", "camo_misc", "camo_center_fueltank", "camo_cockpit_1", "camo_cockpit_2", "camo_MFD", "camo_glass", "camo_ladder"};
		hiddenSelectionsTextures[] = {"\js_fa18\data\SQUADS\fa18e_hull_USMC_co.paa", "\js_fa18\data\fa18_misc_co.paa", "", "\js_fa18\data\fa18_cockpit1_co.paa", "\js_fa18\data\fa18_cockpit2_ca.paa", "\js_fa18\data\fa18_mfd_co.paa", "\js_fa18\data\fa18_glass_ca.paa", "\js_fa18\data\fa18_ladder_co.paa"};
		
		faction = USMC;		
		vehicleClass = TU_USMC_AIR;
		crew = "USMC_Soldier_Pilot";
	};
	
	class TU_FA18E_USMC_AT : TU_FA18E_AT {
		hiddenSelections[] = {"camo_hull", "camo_misc", "camo_center_fueltank", "camo_cockpit_1", "camo_cockpit_2", "camo_MFD", "camo_glass", "camo_ladder"};
		hiddenSelectionsTextures[] = {"\js_fa18\data\SQUADS\fa18e_hull_USMC_co.paa", "\js_fa18\data\fa18_misc_co.paa", "", "\js_fa18\data\fa18_cockpit1_co.paa", "\js_fa18\data\fa18_cockpit2_ca.paa", "\js_fa18\data\fa18_mfd_co.paa", "\js_fa18\data\fa18_glass_ca.paa", "\js_fa18\data\fa18_ladder_co.paa"};
		
		faction = USMC;		
		vehicleClass = TU_USMC_AIR;
		crew = "USMC_Soldier_Pilot";
	};
	
	class TU_FA18E_USMC_BMB : TU_FA18E_BMB {
		hiddenSelections[] = {"camo_hull", "camo_misc", "camo_center_fueltank", "camo_cockpit_1", "camo_cockpit_2", "camo_MFD", "camo_glass", "camo_ladder"};
		hiddenSelectionsTextures[] = {"\js_fa18\data\SQUADS\fa18e_hull_USMC_co.paa", "\js_fa18\data\fa18_misc_co.paa", "", "\js_fa18\data\fa18_cockpit1_co.paa", "\js_fa18\data\fa18_cockpit2_ca.paa", "\js_fa18\data\fa18_mfd_co.paa", "\js_fa18\data\fa18_glass_ca.paa", "\js_fa18\data\fa18_ladder_co.paa"};
		
		faction = USMC;		
		vehicleClass = TU_USMC_AIR;
		crew = "USMC_Soldier_Pilot";
	};
	
	class TU_FA18E_OD : TU_FA18E {
		displayName = "F/A-18E w OD (Multirole)";
		lockDetectionSystem = 8;
		incommingMisslieDetectionSystem = 16;
	};
	
	class TU_FA18E_CAP_OD : TU_FA18E_CAP {
		displayName = "F/A-18E w OD (CAP)";
		lockDetectionSystem = 8;
		incommingMisslieDetectionSystem = 16;
	};
	
	class TU_FA18E_LGB_OD : TU_FA18E_LGB {
		displayName = "F/A-18E w OD (LGB)";
		lockDetectionSystem = 8;
		incommingMisslieDetectionSystem = 16;
	};
	
	class TU_FA18E_AT_OD : TU_FA18E_AT {
		displayName = "F/A-18E w OD (AT)";
		lockDetectionSystem = 8;
		incommingMisslieDetectionSystem = 16;
	};
	
	class TU_FA18E_BMB_OD : TU_FA18E_BMB {
		displayName = "F/A-18E w OD (BMB)";
		lockDetectionSystem = 8;
		incommingMisslieDetectionSystem = 16;
	};
	
	class TU_FA18E_USMC_OD : TU_FA18E_USMC {
		displayName = "F/A-18E w OD (Multirole)";
		lockDetectionSystem = 8;
		incommingMisslieDetectionSystem = 16;
	};
	
	class TU_FA18E_USMC_CAP_OD : TU_FA18E_USMC_CAP {
		displayName = "F/A-18E w OD (CAP)";
		lockDetectionSystem = 8;
		incommingMisslieDetectionSystem = 16;
	};
	
	class TU_FA18E_USMC_LGB_OD : TU_FA18E_USMC_LGB {
		displayName = "F/A-18E w OD (LGB)";
		lockDetectionSystem = 8;
		incommingMisslieDetectionSystem = 16;
	};
	
	class TU_FA18E_USMC_AT_OD : TU_FA18E_USMC_AT {
		displayName = "F/A-18E w OD (AT)";
		lockDetectionSystem = 8;
		incommingMisslieDetectionSystem = 16;
	};
	
	class TU_FA18E_USMC_BMB_OD : TU_FA18E_USMC_BMB {
		displayName = "F/A-18E w OD (BMB)";
		lockDetectionSystem = 8;
		incommingMisslieDetectionSystem = 16;
	};
		
	class TU_FA18F : TU_FA18B {
		displayName = "F/A-18F (Multirole)";
		lockDetectionSystem = 8;
		incommingMisslieDetectionSystem = 8;
		irScanRangeMax = 10000;
		aileronSensitivity = 0.9;
		elevatorsensitivity = 0.8;
		
		hiddenSelections[] = {"camo_hull", "camo_misc", "camo_center_fueltank", "camo_cockpit_1", "camo_cockpit_2", "camo_MFD", "camo_glass", "camo_ladder", "pilot_tag", "wso_tag", "camo_buddy_pod"};
		hiddenSelectionsTextures[] = {"\js_fa18\data\fa18f_hull_co.paa", "\js_fa18\data\fa18_misc_co.paa", "", "\js_fa18\data\fa18_cockpit1_co.paa", "\js_fa18\data\fa18_cockpit2_ca.paa", "\js_fa18\data\fa18_mfd_co.paa", "\js_fa18\data\fa18_glass_ca.paa", "\js_fa18\data\fa18_ladder_co.paa", "", "", "\js_fa18\data\fa18_misc_co.paa"};
		
		weapons[] = {"TU_M61", "CMFlareLauncher"};
		magazines[] = {"TU_578Rnd_20mm_M61", "120Rnd_CMFlare_Chaff_Magazine"};
				
		class Turrets : Turrets {
			class MainTurret : MainTurret {				
				weapons[] = {"SidewinderLaucher", "AIM120Laucher", "AGM65E_Launcher", "GBU12_BombLauncher_LD"};
				magazines[] = {
					"TU_1Rnd_Sidewinder", "TU_1Rnd_Sidewinder", 
					"TU_1Rnd_AIM120", "TU_1Rnd_AIM120", 
					"TU_1Rnd_GBU12", "TU_1Rnd_GBU12", 
					"TU_1Rnd_X2_FA18", "TU_1Rnd_X2_FA18", 
					"TU_1Rnd_AIM120", "TU_1Rnd_FLIR_POD_FA18", 
					"TU_1Rnd_AGM65E", "TU_1Rnd_AGM65E", "TU_1Rnd_AGM65E", "TU_1Rnd_AGM65E", 
					"TU_4Rnd_Empty",
					"TU_1Rnd_FT_FA18"
				};
			};
		};
	};
	
	class TU_FA18F_CAP : TU_FA18F {
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				weapons[] = {"SidewinderLaucher", "AIM120Laucher"};
				magazines[] = {
					"TU_1Rnd_Sidewinder", "TU_1Rnd_Sidewinder", 
					"TU_1Rnd_Sidewinder", "TU_1Rnd_Sidewinder", 
					"TU_1Rnd_Sidewinder", "TU_1Rnd_Sidewinder", 
					"TU_1Rnd_AIM120", "TU_1Rnd_AIM120", 
					"TU_1Rnd_AIM120", "TU_1Rnd_FLIR_POD_FA18", 
					"TU_8Rnd_Empty",
					"TU_1Rnd_FT_FA18"
				};
			};
		};
		
		hiddenSelections[] = {"camo_hull", "camo_misc", "camo_center_fueltank", "camo_cockpit_1", "camo_cockpit_2", "camo_MFD", "camo_glass", "camo_ladder", "pilot_tag", "wso_tag", "camo_buddy_pod"};
		hiddenSelectionsTextures[] = {"\js_fa18\data\fa18f_hull_co.paa", "\js_fa18\data\fa18_misc_co.paa", "", "\js_fa18\data\fa18_cockpit1_co.paa", "\js_fa18\data\fa18_cockpit2_ca.paa", "\js_fa18\data\fa18_mfd_co.paa", "\js_fa18\data\fa18_glass_ca.paa", "\js_fa18\data\fa18_ladder_co.paa", "", "", "\js_fa18\data\fa18_misc_co.paa"};
		
		weapons[] = {"TU_M61", "CMFlareLauncher"};
		magazines[] = {"TU_578Rnd_20mm_M61", "120Rnd_CMFlare_Chaff_Magazine"};
		
		displayName = "F/A-18F (CAP)";
		side = TWest;
		faction = ACE_USNAVY;		
		vehicleClass = TU_USNAVY_AIR;
		crew = "TU_NAVY_Pilot";
	};
	
	class TU_FA18F_LGB : TU_FA18F {
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				weapons[] = {"SidewinderLaucher", "AIM120Laucher", "GBU12_BombLauncher_LD"};
				magazines[] = {
					"TU_1Rnd_Sidewinder", "TU_1Rnd_Sidewinder", 
					"TU_1Rnd_GBU12", "TU_1Rnd_GBU12", 
					"TU_1Rnd_GBU12", "TU_1Rnd_GBU12", 
					"TU_1Rnd_GBU12", "TU_1Rnd_GBU12", 
					"TU_1Rnd_AIM120", "TU_1Rnd_FLIR_POD_FA18", 
					"TU_8Rnd_Empty",
					"TU_1Rnd_FT_FA18"
				};
			};
		};
		
		hiddenSelections[] = {"camo_hull", "camo_misc", "camo_center_fueltank", "camo_cockpit_1", "camo_cockpit_2", "camo_MFD", "camo_glass", "camo_ladder", "pilot_tag", "wso_tag", "camo_buddy_pod"};
		hiddenSelectionsTextures[] = {"\js_fa18\data\fa18f_hull_co.paa", "\js_fa18\data\fa18_misc_co.paa", "", "\js_fa18\data\fa18_cockpit1_co.paa", "\js_fa18\data\fa18_cockpit2_ca.paa", "\js_fa18\data\fa18_mfd_co.paa", "\js_fa18\data\fa18_glass_ca.paa", "\js_fa18\data\fa18_ladder_co.paa", "", "", "\js_fa18\data\fa18_misc_co.paa"};
		
		weapons[] = {"TU_M61", "CMFlareLauncher"};
		magazines[] = {"TU_578Rnd_20mm_M61", "120Rnd_CMFlare_Chaff_Magazine"};
		
		displayName = "F/A-18F (LGB)";
		side = TWest;
		faction = ACE_USNAVY;		
		vehicleClass = TU_USNAVY_AIR;
		crew = "TU_NAVY_Pilot";
	};
	
	class TU_FA18F_AT : TU_FA18F {
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				weapons[] = {"SidewinderLaucher", "AIM120Laucher", "AGM65E_Launcher"};
				magazines[] = {
					"TU_1Rnd_Sidewinder", "TU_1Rnd_Sidewinder", 
					"TU_1Rnd_AIM120", "TU_1Rnd_AIM120", 
					"TU_1Rnd_AGM65E", "TU_1Rnd_AGM65E", 
					"TU_1Rnd_X2_FA18", "TU_1Rnd_X2_FA18", 
					"TU_1Rnd_AIM120", "TU_1Rnd_FLIR_POD_FA18", 
					"TU_1Rnd_AGM65E", "TU_1Rnd_AGM65E", "TU_1Rnd_AGM65E", "TU_1Rnd_AGM65E", 
					"TU_4Rnd_Empty",
					"TU_1Rnd_FT_FA18"
				};
			};
		};
		
		hiddenSelections[] = {"camo_hull", "camo_misc", "camo_center_fueltank", "camo_cockpit_1", "camo_cockpit_2", "camo_MFD", "camo_glass", "camo_ladder", "pilot_tag", "wso_tag", "camo_buddy_pod"};
		hiddenSelectionsTextures[] = {"\js_fa18\data\fa18f_hull_co.paa", "\js_fa18\data\fa18_misc_co.paa", "", "\js_fa18\data\fa18_cockpit1_co.paa", "\js_fa18\data\fa18_cockpit2_ca.paa", "\js_fa18\data\fa18_mfd_co.paa", "\js_fa18\data\fa18_glass_ca.paa", "\js_fa18\data\fa18_ladder_co.paa", "", "", "\js_fa18\data\fa18_misc_co.paa"};
		
		weapons[] = {"TU_M61", "CMFlareLauncher"};
		magazines[] = {"TU_578Rnd_20mm_M61", "120Rnd_CMFlare_Chaff_Magazine"};
		
		displayName = "F/A-18F (AT)";
		side = TWest;
		faction = ACE_USNAVY;		
		vehicleClass = TU_USNAVY_AIR;
		crew = "TU_NAVY_Pilot";
	};
	
	class TU_FA18F_BMB : TU_FA18F {
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				weapons[] = {"SidewinderLaucher", "AIM120Laucher", "TU_Mk82BombLauncher_DB"};
				magazines[] = {
					"TU_1Rnd_Sidewinder", "TU_1Rnd_Sidewinder", 
					"TU_1Rnd_AIM120", "TU_1Rnd_AIM120", 
					"TU_1Rnd_Mk82_DB", "TU_1Rnd_Mk82_DB", 
					"TU_1Rnd_X2_FA18", "TU_1Rnd_X2_FA18", 
					"TU_1Rnd_AIM120", "TU_1Rnd_FLIR_POD_FA18", 
					"TU_1Rnd_Mk82_DB", "TU_1Rnd_Mk82_DB", "TU_1Rnd_Mk82_DB", "TU_1Rnd_Mk82_DB", 
					"TU_4Rnd_Empty",
					"TU_1Rnd_FT_FA18"
				};
			};
		};
		
		hiddenSelections[] = {"camo_hull", "camo_misc", "camo_center_fueltank", "camo_cockpit_1", "camo_cockpit_2", "camo_MFD", "camo_glass", "camo_ladder", "pilot_tag", "wso_tag", "camo_buddy_pod"};
		hiddenSelectionsTextures[] = {"\js_fa18\data\fa18f_hull_co.paa", "\js_fa18\data\fa18_misc_co.paa", "", "\js_fa18\data\fa18_cockpit1_co.paa", "\js_fa18\data\fa18_cockpit2_ca.paa", "\js_fa18\data\fa18_mfd_co.paa", "\js_fa18\data\fa18_glass_ca.paa", "\js_fa18\data\fa18_ladder_co.paa", "", "", "\js_fa18\data\fa18_misc_co.paa"};
		
		weapons[] = {"TU_M61", "CMFlareLauncher"};
		magazines[] = {"TU_578Rnd_20mm_M61", "120Rnd_CMFlare_Chaff_Magazine"};
		
		displayName = "F/A-18F (BMB)";
		side = TWest;
		faction = ACE_USNAVY;		
		vehicleClass = TU_USNAVY_AIR;
		crew = "TU_NAVY_Pilot";
	};
	
	class TU_FA18F_USMC : TU_FA18F {
		hiddenSelections[] = {"camo_hull", "camo_misc", "camo_center_fueltank", "camo_cockpit_1", "camo_cockpit_2", "camo_MFD", "camo_glass", "camo_ladder", "pilot_tag", "wso_tag", "camo_buddy_pod"};
		hiddenSelectionsTextures[] = {"\js_fa18\data\SQUADS\fa18f_hull_USMC_co.paa", "\js_fa18\data\fa18_misc_co.paa", "", "\js_fa18\data\fa18_cockpit1_co.paa", "\js_fa18\data\fa18_cockpit2_ca.paa", "\js_fa18\data\fa18_mfd_co.paa", "\js_fa18\data\fa18_glass_ca.paa", "\js_fa18\data\fa18_ladder_co.paa", "", "", "\js_fa18\data\fa18_misc_co.paa"};
		
		faction = USMC;		
		vehicleClass = TU_USMC_AIR;
		crew = "USMC_Soldier_Pilot";
	};
	
	class TU_FA18F_USMC_CAP : TU_FA18F_CAP {
		hiddenSelections[] = {"camo_hull", "camo_misc", "camo_center_fueltank", "camo_cockpit_1", "camo_cockpit_2", "camo_MFD", "camo_glass", "camo_ladder", "pilot_tag", "wso_tag", "camo_buddy_pod"};
		hiddenSelectionsTextures[] = {"\js_fa18\data\SQUADS\fa18f_hull_USMC_co.paa", "\js_fa18\data\fa18_misc_co.paa", "", "\js_fa18\data\fa18_cockpit1_co.paa", "\js_fa18\data\fa18_cockpit2_ca.paa", "\js_fa18\data\fa18_mfd_co.paa", "\js_fa18\data\fa18_glass_ca.paa", "\js_fa18\data\fa18_ladder_co.paa", "", "", "\js_fa18\data\fa18_misc_co.paa"};
		
		faction = USMC;		
		vehicleClass = TU_USMC_AIR;
		crew = "USMC_Soldier_Pilot";
	};
	
	class TU_FA18F_USMC_LGB : TU_FA18F_LGB {
		hiddenSelections[] = {"camo_hull", "camo_misc", "camo_center_fueltank", "camo_cockpit_1", "camo_cockpit_2", "camo_MFD", "camo_glass", "camo_ladder", "pilot_tag", "wso_tag", "camo_buddy_pod"};
		hiddenSelectionsTextures[] = {"\js_fa18\data\SQUADS\fa18f_hull_USMC_co.paa", "\js_fa18\data\fa18_misc_co.paa", "", "\js_fa18\data\fa18_cockpit1_co.paa", "\js_fa18\data\fa18_cockpit2_ca.paa", "\js_fa18\data\fa18_mfd_co.paa", "\js_fa18\data\fa18_glass_ca.paa", "\js_fa18\data\fa18_ladder_co.paa", "", "", "\js_fa18\data\fa18_misc_co.paa"};
		
		faction = USMC;		
		vehicleClass = TU_USMC_AIR;
		crew = "USMC_Soldier_Pilot";
	};
	
	class TU_FA18F_USMC_AT : TU_FA18F_AT {
		hiddenSelections[] = {"camo_hull", "camo_misc", "camo_center_fueltank", "camo_cockpit_1", "camo_cockpit_2", "camo_MFD", "camo_glass", "camo_ladder", "pilot_tag", "wso_tag", "camo_buddy_pod"};
		hiddenSelectionsTextures[] = {"\js_fa18\data\SQUADS\fa18f_hull_USMC_co.paa", "\js_fa18\data\fa18_misc_co.paa", "", "\js_fa18\data\fa18_cockpit1_co.paa", "\js_fa18\data\fa18_cockpit2_ca.paa", "\js_fa18\data\fa18_mfd_co.paa", "\js_fa18\data\fa18_glass_ca.paa", "\js_fa18\data\fa18_ladder_co.paa", "", "", "\js_fa18\data\fa18_misc_co.paa"};
		
		faction = USMC;		
		vehicleClass = TU_USMC_AIR;
		crew = "USMC_Soldier_Pilot";
	};
	
	class TU_FA18F_USMC_BMB : TU_FA18F_BMB {
		hiddenSelections[] = {"camo_hull", "camo_misc", "camo_center_fueltank", "camo_cockpit_1", "camo_cockpit_2", "camo_MFD", "camo_glass", "camo_ladder", "pilot_tag", "wso_tag", "camo_buddy_pod"};
		hiddenSelectionsTextures[] = {"\js_fa18\data\SQUADS\fa18f_hull_USMC_co.paa", "\js_fa18\data\fa18_misc_co.paa", "", "\js_fa18\data\fa18_cockpit1_co.paa", "\js_fa18\data\fa18_cockpit2_ca.paa", "\js_fa18\data\fa18_mfd_co.paa", "\js_fa18\data\fa18_glass_ca.paa", "\js_fa18\data\fa18_ladder_co.paa", "", "", "\js_fa18\data\fa18_misc_co.paa"};
		
		faction = USMC;		
		vehicleClass = TU_USMC_AIR;
		crew = "USMC_Soldier_Pilot";
	};
	
	class TU_FA18F_OD : TU_FA18F {
		displayName = "F/A-18F w OD (Multirole)";
		lockDetectionSystem = 8;
		incommingMisslieDetectionSystem = 16;
	};
	
	class TU_FA18F_CAP_OD : TU_FA18F_CAP {
		displayName = "F/A-18F w OD (CAP)";
		lockDetectionSystem = 8;
		incommingMisslieDetectionSystem = 16;
	};
	
	class TU_FA18F_LGB_OD : TU_FA18F_LGB {
		displayName = "F/A-18F w OD (LGB)";
		lockDetectionSystem = 8;
		incommingMisslieDetectionSystem = 16;
	};
	
	class TU_FA18F_AT_OD : TU_FA18F_AT {
		displayName = "F/A-18F w OD (AT)";
		lockDetectionSystem = 8;
		incommingMisslieDetectionSystem = 16;
	};
	
	class TU_FA18F_BMB_OD : TU_FA18F_BMB {
		displayName = "F/A-18F w OD (BMB)";
		lockDetectionSystem = 8;
		incommingMisslieDetectionSystem = 16;
	};
	
	class TU_FA18F_USMC_OD : TU_FA18F_USMC {
		displayName = "F/A-18F w OD (Multirole)";
		lockDetectionSystem = 8;
		incommingMisslieDetectionSystem = 16;
	};
	
	class TU_FA18F_USMC_CAP_OD : TU_FA18F_USMC_CAP {
		displayName = "F/A-18F w OD (CAP)";
		lockDetectionSystem = 8;
		incommingMisslieDetectionSystem = 16;
	};
	
	class TU_FA18F_USMC_LGB_OD : TU_FA18F_USMC_LGB {
		displayName = "F/A-18F w OD (LGB)";
		lockDetectionSystem = 8;
		incommingMisslieDetectionSystem = 16;
	};
	
	class TU_FA18F_USMC_AT_OD : TU_FA18F_USMC_AT {
		displayName = "F/A-18F w OD (AT)";
		lockDetectionSystem = 8;
		incommingMisslieDetectionSystem = 16;
	};
	
	class TU_FA18F_USMC_BMB_OD : TU_FA18F_USMC_BMB {
		displayName = "F/A-18F w OD (BMB)";
		lockDetectionSystem = 8;
		incommingMisslieDetectionSystem = 16;
	};
	
	class TU_FA18Wreck : PlaneWreck {
		scope = protected;
		
		class Armory {
			disabled = 1;
		};
		model = "\js_fa18\JC_js_fz_FA18_wreck.p3d";
		typicalCargo[] = {};
		irTarget = false;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		transportSoldier = 2;
	};
	
	class ParachuteMediumBase;
	
	class ParachuteMediumWest_EP1 : ParachuteMediumBase {
		scope = protected;		
		vehicleClass = TU_PARACHUTE;
	};
	
	class ParachuteMediumEast_EP1 : ParachuteMediumBase {
		scope = protected;		
		vehicleClass = TU_PARACHUTE;
	};
	
	class ParachuteMediumWest : ParachuteMediumBase {
		scope = protected;		
		vehicleClass = TU_PARACHUTE;
	};
	
	class ParachuteMediumEast : ParachuteMediumBase {
		scope = protected;		
		vehicleClass = TU_PARACHUTE;
	};
	
	class ParachuteBigBase;
	
	class ParachuteBigWest_EP1 : ParachuteBigBase {
		scope = protected;		
		vehicleClass = TU_PARACHUTE;
	};
	
	class ParachuteBigEast_EP1 : ParachuteBigBase {
		scope = protected;		
		vehicleClass = TU_PARACHUTE;
	};
	
	class ParachuteBigWest : ParachuteBigBase {
		scope = protected;		
		vehicleClass = TU_PARACHUTE;
	};
	
	class ParachuteBigEast : ParachuteBigBase {
		scope = protected;		
		vehicleClass = TU_PARACHUTE;
	};
	
	class ParachuteBase;
	
	class Parachute_US_EP1 : ParachuteBase {
		scope = protected;		
		vehicleClass = TU_PARACHUTE;
	};
	
	class Parachute_TK_EP1 : ParachuteBase {
		scope = protected;		
		vehicleClass = TU_PARACHUTE;
	};
	
	class ParachuteWest : ParachuteBase {
		scope = protected;		
		vehicleClass = TU_PARACHUTE;
	};
	
	class Parachute_TK_GUE_EP1 : ParachuteBase {
		scope = protected;		
		vehicleClass = TU_PARACHUTE;
	};
	
	class ACE_B61_Parachute : ParachuteBase {
		scope = protected;		
		vehicleClass = TU_PARACHUTE;
	};
	
	class ParachuteG : ParachuteBase {
		scope = protected;		
		vehicleClass = TU_PARACHUTE;
	};
	
	class ParachuteEast : ParachuteBase {
		scope = protected;		
		vehicleClass = TU_PARACHUTE;
	};
	
	class ParachuteC : ParachuteBase {
		scope = protected;		
		vehicleClass = TU_PARACHUTE;
	};
	
	class Steerable_Parachute_EP1 : Plane {
		scope = protected;		
		vehicleClass = TU_PARACHUTE;
	};
	
	class BIS_Steerable_Parachute : Plane {
		scope = protected;		
		vehicleClass = TU_PARACHUTE;
	};
};

class CfgNonAIVehicles {
	class ProxyWeapon;	// External class reference
	
	class ProxyAGM114Hellfire : ProxyWeapon {
		model = "\ca\air\AGM114Hellfire";
		simulation = "maverickweapon";
	};
	
	class Proxyfueltank : ProxyWeapon {
		model = "\uh60\fueltank";
		simulation = "maverickweapon";
	};
	
	class ProxynavyHellfirePod : ProxyWeapon {
		model = "\sh60\SeahawkHellfirePod";
		simulation = "maverickweapon";
	};		
	
	class Proxynavyfueltank : ProxyWeapon {
		model = "\sh60\fueltank";
		simulation = "maverickweapon";
	};
	
	class Proxym_wing_tank : ProxyWeapon {
		model = "\js_fa18\stores\m_wing_tank";
		simulation = "maverickweapon";
	};
	
	class Proxym_altflir_pod : ProxyWeapon {
		model = "\js_fa18\stores\m_altflir_pod";
		simulation = "maverickweapon";
	};
	
	class Proxym_aim9x : ProxyWeapon {
		model = "\js_fa18\stores\m_aim9x";
		simulation = "maverickweapon";
	};
	
	class Proxym_bombrack_x2 : ProxyWeapon {
		model = "\js_fa18\stores\m_bombrack_x2";
		simulation = "maverickweapon";
	};
	
	class Proxym_empty : ProxyWeapon {
		model = "\js_fa18\stores\m_empty";
		simulation = "maverickweapon";
	};	
	
	class ProxyEB_CRV7x12pod : ProxyWeapon {
		model = "\frl_missilebox\TU_ADDITIONS\EB_CRV7x12pod";
		simulation = "maverickweapon";
	};
	
	class ProxyEB_CRV7x19pod : ProxyWeapon {
		model = "\frl_missilebox\TU_ADDITIONS\EB_CRV7x19pod";
		simulation = "maverickweapon";
	};
};
