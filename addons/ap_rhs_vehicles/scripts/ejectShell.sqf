_v = _this select 0;
_w = _this select 1;

if (_w == "ACE_2A72" or _w == "ACE_2A70" or _w == "AP_2A75") then {

_p3d = "";
_shposmem1 = _v selectionPosition "";
_shposmem2 = _v selectionPosition "";
_vel = 29;

if (_w == "ACE_2A72") then {
_p3d = "ap_rhs_vehicles\shells\rhs_casing_30mm.p3d";
_shposmem1 = _v selectionPosition "ejector_30mm";
_shposmem2 = _v selectionPosition "ejector_30mm_dir";
_vel = 2;
};

if (_w == "ACE_2A70") then {
_p3d = "ap_rhs_vehicles\shells\rhs_casing_100mm.p3d";
_shposmem1 = _v selectionPosition "ejector_pos";
_shposmem2 = _v selectionPosition "ejector_dir";
waitUntil {(_v animationPhase "EjectPort_Open")< 0.69};
if(!alive _v)exitWith{};
};

if (_w == "AP_2A75") then {
_p3d = "ap_rhs_vehicles\shells\rhs_casing_125mm.p3d";
_shposmem1 = _v selectionPosition "ejector_pos";
_shposmem2 = _v selectionPosition "ejector_dir";
waitUntil {(_v animationPhase "EjectPort_Open")< 0.69};
if(!alive _v)exitWith{};
};

if (_w != "ACE_2A72" and _w != "ACE_2A70" and _w != "AP_2A75") exitwith {};


_ejectWorldPos = _v modelToWorld _shposmem1;
_ejectWorldDir = _v modelToWorld _shposmem2;
_vector = [((_ejectWorldDir select 0) - (_ejectWorldPos select 0))*_vel, ((_ejectWorldDir select 1) - (_ejectWorldPos select 1))*_vel, 4+random 1];

_shell = "#particlesource" createVehicle getpos _v;	
_shell setParticleRandom [0, [0.1, 0.1, 0.1], [0, 0, 0.5], 0, 0.1, [0, 0, 0, 0], 0, 1];
_shell setParticleParams [[_p3d, 1, 0, 1], "", "SpaceObject", 1, 42.5, _shposmem1, _vector, 1, 6, 1, 0, [1.2, 1.2], [[0.9,0.9,0.9,1]], [1000], 0.1, 0.05, "", "", _v, 0];
_shell setDropInterval 60;
sleep 1;
deleteVehicle _shell;

};

if (_w == "SmokeLauncher") then {
//_v execVM "rhs\addons\rhs_bmd\scripts\effects\rhs_902a_effects.sqf";
_v execVM "x\ace\addons\sys_destruction\fnc_smokelauncher.sqf";
} else {exit};