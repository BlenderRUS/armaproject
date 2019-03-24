/*
Created by Vadim Shchemelinin aka badger 
2011 St.Petersburg

RHS CargoSystem Sctipts
*/
_mas = [];
if (isNil {(_this select 0) getVariable "rhs_cargosystem_fantom"}) then {
	//man or group
	_mas = units (_this select 0);
} else {
	//vehicle
	_mas = crew ((_this select 0) getVariable 'rhs_cargosystem_fantom');
};

{
	[vehicle _x, _x] spawn RHS_cargoSystem_eject_action_script;
} foreach _mas;