private ["_bmd","_path","_boardNum","_class","_habartype"];
_bmd = _this select 0;

_habartype = 2;
_bmd setVariable ["numFired","0",true];

if (isNil "cBMDFuncLoaded") then 
{
	cBMDFuncLoaded = true;
	cBMDAddonName  = "rhs\addons\rhs_bmd";
	cBMD3NumberPlaces = [0,1,2]; // Places for number
	cBMDArmySymPlaces = [3]; 
	cBMDPlnSymPlaces = [4];     // Places for platoon symbol
	
	fRHSBMD1RRocketonfired = compile (
		preprocessFileLineNumbers format [
			"%1\scripts\Functions\%2.sqf",
			cBMDAddonName,
			"onfired"
		]
	);
	fRHSBMD1RRocketflash = compile (
		preprocessFileLineNumbers format [
			"%1\scripts\Functions\%2.sqf",
			cBMDAddonName,
			"rockerblast"
		]
	);
	
	// effect scripts
	_this execVM "\rhs\addons\rhs_bmd\scripts\effects\rhs_9m14_fired.sqf";
	_this execVM "\rhs\addons\rhs_bmd\scripts\rhs_at14coverejection.sqf";
	_this execVM "\rhs\addons\rhs_bmd\scripts\ejectors\rhs_ejector_30mm.sqf";
	
};



/*******************************************************************************
* Paint & Spray =)                                                             *
*******************************************************************************/
private ["_params"];
_class = typeOf _bmd;


// RHS_Decals main script path:
_decal = "\rhs\addons\RHS_Decals\Scripts\init.sqf";

switch (_class) do
{
	case "rhs_bmd1pk_rus1":
	{
		_params = [
			_bmd,
			[
				["Number", cBMD3NumberPlaces, "Default"],  // Set number (random)
				["Label", cBMDPlnSymPlaces, "Platoon",11],
				["Label", cBMDArmySymPlaces, "Army", 2]
			]
		];
	};
	
	case "rhs_bmd1p_rus1":
	{
		_params = [
			_bmd,
			[
				["Number", cBMD3NumberPlaces, "Default"],  // Set number (random)
				["Label", cBMDPlnSymPlaces, "Platoon",11],
				["Label", cBMDArmySymPlaces, "Army", 2]
			]
		];
	};
	
	case "rhs_bmd1k_rus1":
	{
		_params = [
			_bmd,
			[
				["Number", cBMD3NumberPlaces, "Default"],  // Set number (random)
				["Label", cBMDPlnSymPlaces, "Platoon",11],
				["Label", cBMDArmySymPlaces, "Army", 2]
			]
		];
	};
	case "rhs_bmd1_rus1":
	{
		_params = [
			_bmd,
			[
				["Number", cBMD3NumberPlaces, "Default"],  // Set number (random)
				["Label", cBMDPlnSymPlaces, "Platoon",11],
				["Label", cBMDArmySymPlaces, "Army", 2]
			]
		];
	};
	case "rhs_bmd1pk_rus2":
	{
		_params = [
			_bmd,
			[
				["Number", cBMD3NumberPlaces, "Default"],  // Set number (random)
				["Label", cBMDPlnSymPlaces, "Platoon",11],
				["Label", cBMDArmySymPlaces, "Army", 2]
			]
		];
	};
	
	case "rhs_bmd1p_rus2":
	{
		_params = [
			_bmd,
			[
				["Number", cBMD3NumberPlaces, "Default"],  // Set number (random)
				["Label", cBMDPlnSymPlaces, "Platoon",11],
				["Label", cBMDArmySymPlaces, "Army", 2]
			]
		];
	};
	
	case "rhs_bmd1k_rus2":
	{
		_params = [
			_bmd,
			[
				["Number", cBMD3NumberPlaces, "Default"],  // Set number (random)
				["Label", cBMDPlnSymPlaces, "Platoon",11],
				["Label", cBMDArmySymPlaces, "Army", 2]
			]
		];
	};
	case "rhs_bmd1_rus2":
	{
		_params = [
			_bmd,
			[
				["Number", cBMD3NumberPlaces, "Default"],  // Set number (random)
				["Label", cBMDPlnSymPlaces, "Platoon",11],
				["Label", cBMDArmySymPlaces, "Army", 2]
			]
		];
	};
	case "rhs_bmd1pk_des":
	{
		_params = [
			_bmd,
			[
				["Number", cBMD3NumberPlaces, "Default"],  // Set number (random)
				["Label", cBMDPlnSymPlaces, "Platoon",11],
				["Label", cBMDArmySymPlaces, "Army", 2]
			]
		];
	};
	
	case "rhs_bmd1p_des":
	{
		_params = [
			_bmd,
			[
				["Number", cBMD3NumberPlaces, "Default"],  // Set number (random)
				["Label", cBMDPlnSymPlaces, "Platoon",11],
				["Label", cBMDArmySymPlaces, "Army", 2]
			]
		];
	};
	
	case "rhs_bmd1k_des":
	{
		_params = [
			_bmd,
			[
				["Number", cBMD3NumberPlaces, "Default"],  // Set number (random)
				["Label", cBMDPlnSymPlaces, "Platoon",11],
				["Label", cBMDArmySymPlaces, "Army", 2]
			]
		];
	};
	case "rhs_bmd1_des":
	{
		_params = [
			_bmd,
			[
				["Number", cBMD3NumberPlaces, "Default"],  // Set number (random)
				["Label", cBMDPlnSymPlaces, "Platoon",11],
				["Label", cBMDArmySymPlaces, "Army", 2]
			]
		];
	};
		case "rhs_bmd1pk_peace":
	{
		_params = [
			_bmd,
			[
				["Number", cBMD3NumberPlaces, "Default"],  // Set number (random)
				["Label", cBMDPlnSymPlaces, "Platoon",11],
				["Label", cBMDArmySymPlaces, "Army", 2]
			]
		];
	};
	
	case "rhs_bmd1p_peace":
	{
		_params = [
			_bmd,
			[
				["Number", cBMD3NumberPlaces, "Default"],  // Set number (random)
				["Label", cBMDPlnSymPlaces, "Platoon",11],
				["Label", cBMDArmySymPlaces, "Army", 2]
			]
		];
	};
	
	case "rhs_bmd1k_peace":
	{
		_params = [
			_bmd,
			[
				["Number", cBMD3NumberPlaces, "Default"],  // Set number (random)
				["Label", cBMDPlnSymPlaces, "Platoon",11],
				["Label", cBMDArmySymPlaces, "Army", 2]
			]
		];
	};
	case "rhs_bmd1_peace":
	{
		_params = [
			_bmd,
			[
				["Number", cBMD3NumberPlaces, "Default"],  // Set number (random)
				["Label", cBMDPlnSymPlaces, "Platoon",11],
				["Label", cBMDArmySymPlaces, "Army", 2]
			]
		];
	};
	case "rhs_bmd1pk_cdf":
	{
		_params = [
			_bmd,
			[
				["Number", cBMD3NumberPlaces, "Default"],  // Set number (random)
				["Label", cBMDPlnSymPlaces, "Platoon",11],
				["Label", cBMDArmySymPlaces, "Army", 2]
			]
		];
	};
	
	case "rhs_bmd1p_cdf":
	{
		_params = [
			_bmd,
			[
				["Number", cBMD3NumberPlaces, "Default"],  // Set number (random)
				["Label", cBMDPlnSymPlaces, "Platoon",11],
				["Label", cBMDArmySymPlaces, "Army", 2]
			]
		];
	};
	
	case "rhs_bmd1k_cdf":
	{
		_params = [
			_bmd,
			[
				["Number", cBMD3NumberPlaces, "Default"],  // Set number (random)
				["Label", cBMDPlnSymPlaces, "Platoon",11],
				["Label", cBMDArmySymPlaces, "Army", 2]
			]
		];
	};
	case "rhs_bmd1_cdf":
	{
		_params = [
			_bmd,
			[
				["Number", cBMD3NumberPlaces, "Default"],  // Set number (random)
				["Label", cBMDPlnSymPlaces, "Platoon",11],
				["Label", cBMDArmySymPlaces, "Army", 2]
			]
		];
	};
	case "rhs_bmd1pk_ins":
	{
		_params = [
			_bmd,
			[
				["Number", cBMD3NumberPlaces, "Default"],  // Set number (random)
				["Label", cBMDPlnSymPlaces, "Platoon",11],
				["Label", cBMDArmySymPlaces, "Army", 2]
			]
		];
	};
	
	case "rhs_bmd1p_ins":
	{
		_params = [
			_bmd,
			[
				["Number", cBMD3NumberPlaces, "Default"],  // Set number (random)
				["Label", cBMDPlnSymPlaces, "Platoon",11],
				["Label", cBMDArmySymPlaces, "Army", 2]
			]
		];
	};
	
	case "rhs_bmd1k_ins":
	{
		_params = [
			_bmd,
			[
				["Number", cBMD3NumberPlaces, "Default"],  // Set number (random)
				["Label", cBMDPlnSymPlaces, "Platoon",11],
				["Label", cBMDArmySymPlaces, "Army", 2]
			]
		];
	};
	case "rhs_bmd1_ins":
	{
		_params = [
			_bmd,
			[
				["Number", cBMD3NumberPlaces, "Default"],  // Set number (random)
				["Label", cBMDPlnSymPlaces, "Platoon",11],
				["Label", cBMDArmySymPlaces, "Army", 2]
			]
		];
	};
	case "rhs_bmd2_rus1":
	{
		_params = [
			_bmd,
			[
				["Number", cBMD3NumberPlaces, "Default"],  // Set number (random)
				["Label", cBMDPlnSymPlaces, "Platoon",11],
				["Label", cBMDArmySymPlaces, "Army", 2]
			]
		];
	};
	
	case "rhs_bmd2m_rus1":
	{
		_params = [
			_bmd,
			[
				["Number", cBMD3NumberPlaces, "Default"],  // Set number (random)
				["Label", cBMDPlnSymPlaces, "Platoon",11],
				["Label", cBMDArmySymPlaces, "Army", 2]
			]
		];
	};
	case "rhs_bmd2k_rus1":
	{
		_params = [
			_bmd,
			[
				["Number", cBMD3NumberPlaces, "Default"],  // Set number (random)
				["Label", cBMDPlnSymPlaces, "Platoon",11],
				["Label", cBMDArmySymPlaces, "Army", 2]
			]
		];
	};
	case "rhs_bmd2_rus2":
	{
		_params = [
			_bmd,
			[
				["Number", cBMD3NumberPlaces, "Default"],  // Set number (random)
				["Label", cBMDPlnSymPlaces, "Platoon",11],
				["Label", cBMDArmySymPlaces, "Army", 2]
			]
		];
	};
	
	case "rhs_bmd2m_rus2":
	{
		_params = [
			_bmd,
			[
				["Number", cBMD3NumberPlaces, "Default"],  // Set number (random)
				["Label", cBMDPlnSymPlaces, "Platoon",11],
				["Label", cBMDArmySymPlaces, "Army", 2]
			]
		];
	};
	case "rhs_bmd2k_rus2":
	{
		_params = [
			_bmd,
			[
				["Number", cBMD3NumberPlaces, "Default"],  // Set number (random)
				["Label", cBMDPlnSymPlaces, "Platoon",11],
				["Label", cBMDArmySymPlaces, "Army", 2]
			]
		];
	};
	case "rhs_bmd2_des":
	{
		_params = [
			_bmd,
			[
				["Number", cBMD3NumberPlaces, "Default"],  // Set number (random)
				["Label", cBMDPlnSymPlaces, "Platoon",11],
				["Label", cBMDArmySymPlaces, "Army", 2]
			]
		];
	};
	
	case "rhs_bmd2m_des":
	{
		_params = [
			_bmd,
			[
				["Number", cBMD3NumberPlaces, "Default"],  // Set number (random)
				["Label", cBMDPlnSymPlaces, "Platoon",11],
				["Label", cBMDArmySymPlaces, "Army", 2]
			]
		];
	};
	case "rhs_bmd2k_des":
	{
		_params = [
			_bmd,
			[
				["Number", cBMD3NumberPlaces, "Default"],  // Set number (random)
				["Label", cBMDPlnSymPlaces, "Platoon",11],
				["Label", cBMDArmySymPlaces, "Army", 2]
			]
		];
	};
	case "rhs_bmd2_peace":
	{
		_params = [
			_bmd,
			[
				["Number", cBMD3NumberPlaces, "Default"],  // Set number (random)
				["Label", cBMDPlnSymPlaces, "Platoon",11],
				["Label", cBMDArmySymPlaces, "Army", 2]
			]
		];
	};
	
	case "rhs_bmd2m_peace":
	{
		_params = [
			_bmd,
			[
				["Number", cBMD3NumberPlaces, "Default"],  // Set number (random)
				["Label", cBMDPlnSymPlaces, "Platoon",11],
				["Label", cBMDArmySymPlaces, "Army", 2]
			]
		];
	};
	case "rhs_bmd2k_peace":
	{
		_params = [
			_bmd,
			[
				["Number", cBMD3NumberPlaces, "Default"],  // Set number (random)
				["Label", cBMDPlnSymPlaces, "Platoon",11],
				["Label", cBMDArmySymPlaces, "Army", 2]
			]
		];
	};
	case "rhs_bmd2_cdf":
	{
		_params = [
			_bmd,
			[
				["Number", cBMD3NumberPlaces, "Default"],  // Set number (random)
				["Label", cBMDPlnSymPlaces, "Platoon",11],
				["Label", cBMDArmySymPlaces, "Army", 2]
			]
		];
	};
	
	case "rhs_bmd2m_cdf":
	{
		_params = [
			_bmd,
			[
				["Number", cBMD3NumberPlaces, "Default"],  // Set number (random)
				["Label", cBMDPlnSymPlaces, "Platoon",11],
				["Label", cBMDArmySymPlaces, "Army", 2]
			]
		];
	};
	case "rhs_bmd2k_cdf":
	{
		_params = [
			_bmd,
			[
				["Number", cBMD3NumberPlaces, "Default"],  // Set number (random)
				["Label", cBMDPlnSymPlaces, "Platoon",11],
				["Label", cBMDArmySymPlaces, "Army", 2]
			]
		];
	};
	case "rhs_bmd2_ins":
	{
		_params = [
			_bmd,
			[
				["Number", cBMD3NumberPlaces, "Default"],  // Set number (random)
				["Label", cBMDPlnSymPlaces, "Platoon",11],
				["Label", cBMDArmySymPlaces, "Army", 2]
			]
		];
	};
	
	case "rhs_bmd2m_ins":
	{
		_params = [
			_bmd,
			[
				["Number", cBMD3NumberPlaces, "Default"],  // Set number (random)
				["Label", cBMDPlnSymPlaces, "Platoon",11],
				["Label", cBMDArmySymPlaces, "Army", 2]
			]
		];
	};
	case "rhs_bmd2k_ins":
	{
		_params = [
			_bmd,
			[
				["Number", cBMD3NumberPlaces, "Default"],  // Set number (random)
				["Label", cBMDPlnSymPlaces, "Platoon",11],
				["Label", cBMDArmySymPlaces, "Army", 2]
			]
		];
	};
};

private ["_h"];
_h = _params execVM _decal; // Paint vehicle

/*******************************************************************************
* Habar				                                                         *
*******************************************************************************/
private ["_habarScr"];
_habarScr = [_bmd,_habartype] execVM "\rhs\addons\rhs_bmd\scripts\bgr_bmd_habar.sqf";

/*******************************************************************************
* Special FX secton                                                            *
*******************************************************************************/
if (isNil "RHS_bmd_Effects_Init") then
{
	RHS_bmd_Effects_Init = true;
	RHS_bmd_Effects_EH_Fired = compile preprocessFileLineNumbers "\ca\Data\ParticleEffects\SCRIPTS\fired.sqf";
	RHS_bmd_Effects_EH_Killed = compile preprocessFileLineNumbers "\ca\Data\ParticleEffects\SCRIPTS\killed.sqf";

	if (isNil "BIS_Effects_HeavyCaliber") then
	{
		BIS_Effects_HeavyCaliber = compile preprocessFileLineNumbers "\rhs\addons\rhs_bmd\scripts\effects\rhs_2a42_effects.sqf";
	};
	
	//must use spawn command for these:
	BIS_Effects_Burn=compile preprocessFileLineNumbers "\ca\Data\ParticleEffects\SCRIPTS\destruction\burn.sqf";
	BIS_Effects_AircraftVapour=compile preprocessFileLineNumbers "\ca\Data\ParticleEffects\SCRIPTS\misc\aircraftvapour.sqf";
	BIS_Effects_AirDestruction=compile preprocessFileLineNumbers "\ca\Data\ParticleEffects\SCRIPTS\destruction\AirDestruction.sqf";
	BIS_Effects_AirDestructionStage2=compile preprocessFileLineNumbers "\ca\Data\ParticleEffects\SCRIPTS\destruction\AirDestructionStage2.sqf";
	BIS_Effects_Secondaries=compile preprocessFileLineNumbers "\ca\Data\ParticleEffects\SCRIPTS\destruction\Secondaries.sqf";
};