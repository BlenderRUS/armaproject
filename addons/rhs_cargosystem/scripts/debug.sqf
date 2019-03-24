/*
Created by Vadim Shchemelinin aka badger 
2011 St.Petersburg

RHS Sctipts

CBA IS NEEDED!!!
["error %1 %2",_par1,_par2] spawn RHS_cargoSystem_debug;
*/

private ["_tstr"];

if (RHS_cargoSystem_debug_mode > 0) exitWith {};

if (RHS_cargoSystem_debug_mode > 0) exitWith {};
if (isnil ("CBA_fnc_globalExecute")) exitWith {
	diag_log "Exit from debug, CBA not running!";
};

_man = player;
_tstr = format _this;
if (isDedicated) then {
	_man = "SERVER";
}else{
	_man = format ["CLIENT %1",name player];
};
_str = format ["%1 | %2 || %3",time,_man,_tstr];


if (RHS_cargoSystem_debug_type == 1) then {
	[RHS_cargoSystem_debug_mode, {diag_log _this; player globalChat _this;}, _str] call CBA_fnc_globalExecute;
}else{
	[RHS_cargoSystem_debug_mode, {diag_log _this;}, _str] call CBA_fnc_globalExecute;
};