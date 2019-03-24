/*
Created by Vadim Shchemelinin aka badger 
2010 St.Petersburg

RHS Cargo System
*/

private ["_modul","_vehlist","_eCS_scr"];

sleep .1;

_modul = _this select 0;
//_modul = _this;
_vehlist = [];
if (count (synchronizedObjects _modul) > 0) then {
	//_vehlist = synchronizedObjects _modul;
	{
		_vehlist set [count _vehlist, vehicle _x];
	} foreach synchronizedObjects _modul;
} else {
	_vehlist = vehicles;
};


if (isNil "RHS_cargoSystem_debug_mode") then{		 RHS_cargoSystem_debug_mode = 1;}; //All: -2, ClientsOnly: -1, ServerOnly: 0, No: 1
if (isNil "RHS_cargoSystem_debug_type") then{		 RHS_cargoSystem_debug_type = 0;}; //All: 1, rptLog only: 0
if (isNil "RHS_cargoSystem_enable") then{			 RHS_cargoSystem_enable = true;};
if (isNil "RHS_cargoSystem_GetOffEff_enable") then{	 RHS_cargoSystem_GetOffEff_enable = true;};
if (isNil "RHS_cargoSystem_NotCV") then{			 RHS_cargoSystem_NotCV = true;};
if (isNil "RHS_cargoSystem_updateBySleep") then{	 RHS_cargoSystem_updateBySleep = false;};
if (isNil "RHS_cargoSystem_InitOnClient") then{		 RHS_cargoSystem_InitOnClient = true;};
if (isNil "RHS_cargoSystem_getoff_time") then{		 RHS_cargoSystem_getoff_time = -1;};
if (isNil "RHS_cargoSystem_getoff_randomtime") then{ RHS_cargoSystem_getoff_randomtime = 19;};

RHS_corgoSystem_scrpath = "\rhs_cargosystem\scripts\";
//RHS_corgoSystem_scrpath = "";

RHS_cargoSystem_getoff_script 		= compile preprocessFileLineNumbers (RHS_corgoSystem_scrpath+"getoff.sqf");
RHS_cargoSystem_GetOffEff_script 	= compile preprocessFileLineNumbers (RHS_corgoSystem_scrpath+"GetOffEff.sqf");
RHS_cargoSystem_Eject_action_script = compile preprocessFileLineNumbers (RHS_corgoSystem_scrpath+"eject_action.sqf");
RHS_cargoSystem_GetOn_action_script = compile preprocessFileLineNumbers (RHS_corgoSystem_scrpath+"geton_action.sqf");
RHS_cargoSystem_eject_all			= compile preprocessFileLineNumbers (RHS_corgoSystem_scrpath+"f_eject_all.sqf");
RHS_cargoSystem_debug 				= compile preprocessFileLineNumbers (RHS_corgoSystem_scrpath+"debug.sqf");
RHS_cargoSystem_version 			= getNumber (configFile >> "CfgVehicles" >> "RHS_CargoSystem_Enable" >> "rhs_version");

["INFO cargosystem_init. Modul: %1 InitOnClient: %2 _vehlist = %3",_modul,RHS_cargoSystem_InitOnClient,_vehlist] spawn RHS_cargoSystem_debug;

//запускаем сообщение о готовности игрока
if (!isDedicated) then {
	waitUntil {player == player};
	waitUntil {!isNull (findDisplay 46)};
	player setVariable ["rhs_cargosystem_player_ready", true, true];
	["INFO cargosystem_init. I am ready"] spawn RHS_cargoSystem_debug;
};

//
//[-2, {player globalChat format ["%1 have version: %2",(_this select 0),(_this select 1)];}, [name player,RHS_cargoSystem_version]] call CBA_fnc_globalExecute;
//
["INFO cargosystem_init. %1 have version: %2",name player, RHS_cargoSystem_version] spawn RHS_cargoSystem_debug;

_eCS_scr = _vehlist spawn rhs_enableCS;
RHS_cargoSystem_enableCS_not_running = false;

if (rhs_cargoSystem_NotCV) exitWith {
	["INFO cargosystem_init EXIT. rhs_cargoSystem_NotCV==%1",rhs_cargoSystem_NotCV] spawn RHS_cargoSystem_debug;
};
sleep 30;
_flag = true;
while {_flag} do {
	if (rhs_cargoSystem_NotCV) exitWith {_flag = false};
	_oldVehicleslist = vehicles;
	_oldPlayerscount = {isPlayer _x} count playableUnits;
	waitUntil {(RHS_cargoSystem_enableCS_not_running)or(!(isPlayer RHS_cargoSystem_SuperClient))};
	["INFO cargosystem_init. RHS_cargoSystem_enableCS_not_running==%1  RHS_cargoSystem_SuperClient==%2, is he player? - %3",RHS_cargoSystem_enableCS_not_running,RHS_cargoSystem_SuperClient,(isPlayer RHS_cargoSystem_SuperClient)] spawn RHS_cargoSystem_debug;
		
	if (rhs_cargoSystem_updateBySleep) then {
		sleep 30;
		["INFO cargosystem_init. sleeped 30"] spawn RHS_cargoSystem_debug;
	}else{
		waitUntil {sleep 1; (count _oldVehicleslist != count vehicles)or(_oldPlayerscount != {isPlayer _x} count playableUnits)};
		/*_flag2 = true;
		while {_flag2} do
		{
			 sleep 1;
			 if ((count _oldVehicleslist != count vehicles)or(_oldPlayerscount != {isPlayer _x} count playableUnits)) then {
				_flag2 = false;
			 };			 			 
		}:*/
		["INFO cargosystem_init. %1 != %2  %3 != %4 // %5  %6",count _oldVehicleslist, count Vehicles, _oldPlayerscount, {isPlayer _x} count playableUnits, Vehicles, playableUnits] spawn RHS_cargoSystem_debug;
	};	
	
	RHS_cargoSystem_enableCS_not_running = false;
	_eCS_scr = _vehlist spawn rhs_enableCS;

};