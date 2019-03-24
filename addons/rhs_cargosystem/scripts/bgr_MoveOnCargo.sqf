/*
Created by Vadim Shchemelinin aka badger 
2010 St.Petersburg

RHS Cargo System
*/

private ["_object","_unit","_fobject","_ind"];

_unit = _this select 0;
_object = _this select 1;
_ind = if (count _this > 2) then {_this select 2} else {-1};
waitUntil {!(isNil {_object getVariable "rhs_cargosystem_fantom"})};
[_object,_unit,0,[_ind]] call RHS_cargoSystem_GetOn_action_script;