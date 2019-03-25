class CfgPatches
{
	class CAWheeled_W_BAF
	{
		units[]=
		{
			"BAF_ATV_W",
			"BAF_Offroad_W, BAF_Jackal2_L2A1_W",
			"BAF_Jackal2_GMG_W"
		};
		weapons[]={};
		requiredVersion=1.54;
		requiredAddons[]=
		{
			"CAWheeled_D_BAF",
			"CACharacters_W_BAF"
		};
	};
};
class WeaponCloudsMGun;
class CfgVehicles
{
	class Land;
	class LandVehicle: Land
	{
		class NewTurret;
	};
	class Car: LandVehicle
	{
		class HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
		};
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
			};
		};
		class AnimationSources;
	};
	class ATV_Base_EP1;
	class BAF_ATV_D;
	class BAF_ATV_W: BAF_ATV_D
	{
		vehicleClass="CarW";
		crew="BAF_soldier_W";
		typicalCargo[]=
		{
			"BAF_soldier_W",
			"BAF_soldier_W"
		};
	};
	class LandRover_CZ_EP1;
	class BAF_Offroad_D;
	class BAF_Offroad_W: BAF_Offroad_D
	{
		model="ca\wheeled_w_baf\LR_covered_soft_W_BAF";
		vehicleClass="CarW";
		crew="BAF_Soldier_w";
		typicalCargo[]=
		{
			"BAF_Soldier_w",
			"BAF_Soldier_w"
		};
	};
	class BAF_Jackal2_BASE_D: Car
	{
		class HitPoints;
		class Turrets: Turrets
		{
			class M420_Turret;
		};
		class AnimationSources;
		class Damage;
	};
	class BAF_Jackal2_L2A1_D;
	class BAF_Jackal2_L2A1_W: BAF_Jackal2_L2A1_D
	{
		model="ca\wheeled_w_baf\Jackal_L2A1_W_BAF";
		vehicleClass="CarW";
		crew="BAF_Soldier_w";
		typicalCargo[]=
		{
			"BAF_Soldier_w",
			"BAF_Soldier_w"
		};
	};
	class BAF_Jackal2_GMG_D;
	class BAF_Jackal2_GMG_W: BAF_Jackal2_GMG_D
	{
		model="ca\wheeled_w_baf\Jackal_GMG_W_BAF";
		vehicleClass="CarW";
		crew="BAF_Soldier_w";
		typicalCargo[]=
		{
			"BAF_Soldier_w",
			"BAF_Soldier_w"
		};
	};
};
