class DefaultEventhandlers;
class CfgPatches
{
	class CATracked_W_BAF
	{
		units[]=
		{
			"BAF_FV510_W"
		};
		weapons[]={};
		requiredVersion=1.54;
		requiredAddons[]=
		{
			"CATracked_BAF",
			"CACharacters_W_BAF"
		};
	};
};
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class CfgVehicles
{
	class Land;
	class LandVehicle: Land
	{
		class NewTurret;
		class Sounds;
	};
	class Tank: LandVehicle
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class HeadLimits;
		class HitPoints;
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
	};
	class BAF_FV510_D: Tank
	{
		class HitPoints;
		class AnimationSources;
		class Exhausts;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						class ViewOptics;
					};
				};
			};
		};
		class Damage;
		class TransportMagazines;
		class TransportWeapons;
		class NVGMarkers;
	};
	class BAF_FV510_W: BAF_FV510_D
	{
		model="\ca\Tracked_w_baf\FV510_W_BAF";
		vehicleClass="ArmouredW";
		crew="BAF_crewman_w";
		typicalCargo[]=
		{
			"BAF_crewman_w",
			"BAF_crewman_w"
		};
	};
};
class CfgDestroy
{
	access=1;
	class EngineHit
	{
		sound[]=
		{
			"\ca\Tracked\Data\Sound\fuel_explosion",
			31.622776,
			1
		};
	};
};
