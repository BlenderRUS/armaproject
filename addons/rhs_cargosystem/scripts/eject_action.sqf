/*
Created by Vadim Shchemelinin aka badger 
2010 St.Petersburg

RHS Cargo System
*/

private ["_fobject","_unit","_s","_arrind","_ang","_pos","_vel","_koef","_velU","_anim","_posZ","_velF"];

_fobject = _this select 0;
_unit = _this select 1;
_velF = velocity _fobject;

_s = animationState _unit;

//hint format ["vel:%1 | fant: %2 | unt: %3 | anim: %4",_velF,_fobject,_unit,_s];

_arrind = (getArray (configFile >> "CfgVehicles" >> (typeOf _fobject) >> "cargoAction")) find _s;
_ang = (getDir _fobject) + ((getArray (configFile >> "CfgVehicles" >> (typeOf _fobject) >> "RHS_animDeg")) select _arrind);
_pos = (getArray (configFile >> "CfgVehicles" >> (typeOf _fobject) >> "RHS_animPos")) select _arrind;
_posZ = ((getArray (configFile >> "CfgVehicles" >> (typeOf _fobject) >> "RHS_ejectZPos")) select _arrind);
/*
_pos = [0,0,2];
_posZ = -2;
*/
//Ставим бойцу после прыжка позицию, угол и анимацию
_pos = _fobject modelToWorld _pos;
_pos = [_pos select 0, _pos select 1, (_pos select 2)+_posZ];
_anim = "acrgpknlmstpsnonwnondnon_amovpercmstpsraswrfldnon_getouthigh";
_velU = velocity _unit;
_koef = 0.7;
_vel = [(_velU select 0)+(_velF select 0)*_koef,(_velU select 1)+(_velF select 1)*_koef,(_velU select 2)+(_velF select 2)*_koef];
_unit setVariable ["rhs_cargosystem_getoff_info", [0,_anim,_pos,_ang,_vel], true];
moveOut _unit;
unassignVehicle _unit;
//