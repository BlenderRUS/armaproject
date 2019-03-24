/*
Created by Vadim Shchemelinin aka badger 
2010 St.Petersburg

RHS Cargo System
*/

private ["_object","_unit"];

_object = _this select 0;
_unit = _this select 1;
_id = _this select 2;
_object removeAction _id;

{
	if !(isPlayer _x) then {
		_x setVariable ["deserteagle_getout_btr_variable", 2, true];
	};
} forEach units group _unit;