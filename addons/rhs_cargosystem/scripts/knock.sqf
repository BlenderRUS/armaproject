/*
Created by Vadim Shchemelinin aka badger 
2011 St.Petersburg

RHS CargoSystem Sctipts

CBA IS NEEDED!!!
*/

private ["_tstr"];

_fobject = _this select 0;
_unit = _this select 1;
_object = (_this select 3) select 0;
_crewF = crew _fobject;
_crewO = crew _object;

if (isnil ("CBA_fnc_globalExecute")) exitWith {
	hint localize "STR_rhs_cargosystem_knock_CBA";
};

[-2, {
if (player != _this select 2) then {
	if (player in (_this select 0)) then {
		hint format [localize "STR_rhs_cargosystem_knock_1knocked",name (_this select 2)];
	};
	if (player in (_this select 1)) then {
		hint format [localize "STR_rhs_cargosystem_knock_knocking",name (_this select 2)];
	};	
};
}, [_crewF,_crewO,_unit]] call CBA_fnc_globalExecute;

hint localize "STR_rhs_cargosystem_knock_knocked";