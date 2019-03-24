/*
Created by Vadim Shchemelinin aka badger 
2010 St.Petersburg

RHS Cargo System
*/

private ["_object","_unit","_fobject","_arr","_ind","_exit"];

_object = _this select 0;
_unit = _this select 1;
_arr = _this select 3;
_ind = _arr select 0;
_exit = false;

if (isNil {_object getVariable "rhs_cargosystem_fantom"}) exitWith {
	hint localize "STR_rhs_cargosystem_geton_errNil";
	["fobject IsNIL!!!"] spawn RHS_cargoSystem_debug;
};
_fobject = _object getVariable "rhs_cargosystem_fantom";
if ((getPos _fobject select 0 < 1)and(getPos _fobject select 1 < 1)) exitwith {
	hint localize "STR_rhs_cargosystem_geton_errLoc";
	["wrong locality of attachTo"] spawn RHS_cargoSystem_debug;
};
if(getNumber (configFile >> 'CfgVehicles' >> typeOf (_fobject) >> 'transportSoldier') == count crew (_fobject)) exitWith {
	//проверка на наличие свободных мест
	hint localize "STR_rhs_cargosystem_geton_warFul";
};
if (getNumber (configFile >> "CfgVehicles" >> (typeOf _fobject) >> "RHS_blokTurret") == 1) then {
	//проверка для техники у которой блокируется башня
	if (getText (configFile >> "CfgVehicles" >> (typeOf _object) >> "driverAction") != animationState (driver _object)) then {
		_exit = true;
	};
};
if (_exit) exitWith {
	hint localize "STR_rhs_cargosystem_geton_warTur";
};
_unit assignAsCargo _fobject;
if (_ind > -1) then {
	_unit moveInCargo [_fobject,_ind];
} else {
	_unit moveInCargo _fobject;
};
["INFO geton_action obj:%1 | fant: %2 | unt: %3",_object,_fobject,_unit] spawn RHS_cargoSystem_debug;