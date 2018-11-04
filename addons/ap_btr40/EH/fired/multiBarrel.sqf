//----- Note: this only works on the primary turret. -----//
//if (DEBUG) exitWith {_this execVM "debug.sqf"};

_unit = _this select 0;
_weapon = _this select 1;
_muzzle = _this select 2;
_mode = _this select 3;
_ammo = _this select 4;

_multi = 1;
_multi = getNumber (configFile >> "CfgWeapons" >> _weapon >> _mode >> "multiplier");

_bullet = nearestObject [position _unit, _ammo];
_rd = ((_unit ammo _muzzle)/_multi) - 1;
if (_rd < 0) then 
{
	_varName = format ["rdCount_%1", _muzzle];
	_rd = _unit getVariable _varName;
	if isNil("_rd") then {_rd = 1} else {_rd = _rd + 1};
	_unit setVariable [_varName, _rd];
};

_BarrelCount = getNumber (configFile >> "CfgWeapons" >> _weapon >> "BarrelCount");
_BarrelName = getText (configFile >> "CfgWeapons" >> _weapon >> "BarrelName");
_BarrelConvergence = getNumber (configFile >> "CfgWeapons" >> _weapon >> "BarrelConvergence");
_n = _rd % _BarrelCount;
_newPos = [0,0,0];

if (_BarrelName == "Array") then
{
	_BarrelOffsets = getArray (configFile >> "CfgWeapons" >> _weapon >> "BarrelOffsets");
	_pos = position _bullet;
	_vel = velocity _bullet;
	_vDir = vectorDir _bullet;
	_vUp = vectorUp _bullet;
	_offset = 
	[
		_BarrelOffsets select ((3*_n)),
		_BarrelOffsets select ((3*_n) + 1),
		_BarrelOffsets select ((3*_n) + 2)
	];
	_newPos = _bullet modelToWorld _offset;
}
else
{
	_modelPos = _unit selectionPosition format ["%1_%2", _BarrelName, _n + 1];
	_newPos = _unit modelToWorld _modelPos;
	
	_bullet setPos _newPos;
	
	_anim = format ["Recoil_%1", _n + 1];
	_unit animate [_anim,1];

	_p3d = "ap_btr40\shells\casing_12.7mm.p3d";
	_shposmem1 = _unit selectionPosition format ["eject_%1", _n + 1];
	_shposmem2 = _unit selectionPosition format ["eject_dir_%1", _n + 1];
	_vel = 0.3;
	
	_ejectWorldPos = _unit modelToWorld _shposmem1;
	_ejectWorldDir = _unit modelToWorld _shposmem2;
	_vector = [((_ejectWorldDir select 0) - (_ejectWorldPos select 0))*_vel, ((_ejectWorldDir select 1) - (_ejectWorldPos select 1))*_vel, -2];

	_shell = "#particlesource" createVehicle getpos _unit;	
	_shell setParticleRandom [0, [0.1, 0.1, 0.1], [0, 0, 0.5], 0, 0.1, [0, 0, 0, 0], 0, 1];
	_shell setParticleParams [[_p3d, 1, 0, 1], "", "SpaceObject", 1, 42.5, _shposmem1, _vector, 1, 6, 1, 0, [0.9, 0.9], [[0.9,0.9,0.9,1]], [1000], 0.1, 0.05, "", "", _unit, 0];
	_shell setDropInterval 60;
	
	sleep 0.1;
	_unit animate [_anim,0.85];
	sleep 1;
	deleteVehicle _shell;	
	
	
	
	
	
	
	
	
	
	
	
	
};


exit
