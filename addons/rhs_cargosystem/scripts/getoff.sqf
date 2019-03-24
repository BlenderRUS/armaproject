/*
Author: DesertEagle
Created for RHS BTR-70 addon
18.08.2010

mod. by Vadim Shchemelinin aka badger 
2010 St.Petersburg
*/
private ["_btr","_hndl","_hndl2","_snd","_rad"];

//Выключатель
if (!isnil "RHS_cargoSystem_Getoff_switch" && {!RHS_cargoSystem_Getoff_switch}) exitWith {};

["INFO rhs_getoff. STARTED"] spawn RHS_cargoSystem_debug;

_btr = _this select 0;
_cargo = _this select 1;
_hndl = _btr addeventhandler ["HandleDamage",
{
	
	_damage = _this select 2;
	_rocket = _this select 4;
	if (_rocket == "") exitWith {_damage};
	//Проверяем тип снаряда
	if (_rocket isKindOf "GrenadeBase" || _rocket isKindOf "BulletBase" || _rocket isKindOf "Throw" || _rocket in ["ACE_B_Detector", "ACE_B_Detector2"]) exitWith {_damage};
	
    _btr = _this select 0;
	//ограничение на локальность, чтобы избежать лишних срабатываний
	if !(local _btr) exitWith {
		["INFO rhs_getoff. HandleDamage EXIT %1 is not LOCAL!",_btr] spawn RHS_cargoSystem_debug;
	};
	
	//защита от лишних срабатываний
	if !(isNil {_btr getVariable "rhs_cargosystem_getoff_EH_lanched"}) exitWith {
		["INFO rhs_getoff. HandleDamage EXIT EH_lanched for %1!",_btr] spawn RHS_cargoSystem_debug;
	};
	_btr setVariable ["rhs_cargosystem_getoff_EH_lanched", true, false];

	_cargo = _btr getVariable "rhs_cargosystem_fantom";
	_units = crew _cargo;
	if (count _units < 1) exitWith {};
	if ((isNull _btr)or(isNull _cargo)) exitWith {
		["INFO rhs_getoff. HandleDamage EXIT NILL: _btr = %1 || _cargo = %2",_btr,_cargo] spawn RHS_cargoSystem_debug;
		_btr setVariable ["rhs_cargosystem_getoff_EH_lanched", Nil, false];
	};
	["INFO rhs_getoff. HandleDamage STARTED ARRAY %1",_units] spawn RHS_cargoSystem_debug;
	if (RHS_cargoSystem_GetOffEff_enable) then {
		{
			_s = animationState _x;
			_arrind = (getArray (configFile >> "CfgVehicles" >> (typeOf _cargo) >> "cargoAction")) find _s;
			_ang = (getDir _btr) + ((getArray (configFile >> "CfgVehicles" >> (typeOf _cargo) >> "RHS_animDeg")) select _arrind);
			_pos = (getArray (configFile >> "CfgVehicles" >> (typeOf _cargo) >> "RHS_animPos")) select _arrind;
			_pos2 = getArray (configFile >> "CfgVehicles" >> (typeOf _cargo) >> "RHS_attachToPos");
			_pos = [(_pos select 0)+(_pos2 select 0), (_pos select 1)+(_pos2 select 1), (_pos select 2)+(_pos2 select 2)];
			_pos2 = (_btr modelToWorld _pos);
			_prandomanim = "AdthPercMrunSlowWrflDf_A" + str((floor (random 3)) + 1) + "short";
			_prandomtime = RHS_cargoSystem_getoff_time;
			if (RHS_cargoSystem_getoff_time < 0) then {
				_prandomtime = 1+(floor (random RHS_cargoSystem_getoff_randomtime));				
			};
			
			_x setVariable ["rhs_cargosystem_getoff_info", [1,_prandomanim,_pos2,_ang,_prandomtime], true];
			
			moveOut _x;
			unassignVehicle _x;
			
			["INFO rhs_getoff. HandleDamage STARTED for %1, _arrind = %2, _pos2 = %3, _ang = %4, _s = %5, _cargo = %6, _btr = %7",_x,_arrind,_pos2,_ang,_s,_cargo,_btr] spawn RHS_cargoSystem_debug;
		} forEach _units;
	}else{
		{
			[_cargo, _x] spawn RHS_cargoSystem_eject_action_script;
		} forEach _units;
	};
	_btr spawn {
		_this setVariable ["rhs_cargosystem_getoff_EH_lanched", Nil, false];
	};
	
	_damage
}];

//Добавляем ЕХ на удаление фантома при уничтожении
_hndl2 = _btr addEventHandler ["killed",{
	[_this select 0] spawn {
		["INFO rhs_enableCS. killed STARTED"] spawn RHS_cargoSystem_debug;
		_btr = _this select 0;
		_cargo = _btr getVariable "rhs_cargosystem_fantom";
		sleep 5;
		{moveOut _x} forEach (crew _cargo);
		deleteVehicle _cargo;

		["INFO rhs_enableCS. killed for %1 finished",_btr] spawn RHS_cargoSystem_debug;
	};
}];

//ЕХ на слезание с брони
_hndl3 = _cargo addEventHandler ["GetOut", {
	_cargo = _this select 0;
	_unit = _this select 2;
	//проверка на удалённость игрока от скидываемого юнита, те кто дальше 5км всё равно ничего не увидят
	if ((isServer)or(player distance _unit < 5000)) then {
	[_unit] spawn {
		_unit = _this select 0;
		_timeout = 20;
		//ожидание статуса скидываемого юнита 0 - спрыгнул / 1 - скинуло
		while {(_timeout > 0)and(isNil {_unit getVariable "rhs_cargosystem_getoff_info"})} do {
			sleep 0.1;
			_timeout = _timeout-1;
		};
		if (isNil {_unit getVariable "rhs_cargosystem_getoff_info"}) exitWith {
			["INFO rhs_getout EX OUT _info = nil. %1",_unit] spawn RHS_cargoSystem_debug;
			//фикс анимы
			_s = animationState _unit;
			if (0 != {_x==_s} count ["AdthPercMrunSlowWrflDf_A1short", "AdthPercMrunSlowWrflDf_A2short", "AdthPercMrunSlowWrflDf_A3short", "AdthPercMrunSlowWrflDf_A4short"]) then {
				_unit switchMove "AmovPpneMstpSrasWrflDnon";
				["INFO rhs_getoff EX. %1 anim fixed",_unit] spawn RHS_cargoSystem_debug;
			};			
		};
		_info = _unit getVariable "rhs_cargosystem_getoff_info";	
		["INFO rhs_getout EX. %1 : %2",_unit,_info] spawn RHS_cargoSystem_debug;
		//в зависимости от статуса запуск эффектов. эффект глобален
		if (_info select 0 == 0) then {
			//спрыгнул			
			_unit switchMove (_info select 1);
			_unit setVariable ["rhs_cargosystem_getoff_info", Nil, false];
			if (local _unit) then {
				_unit setPosATL (_info select 2);
				_unit setDir (_info select 3);
				_unit setVelocity (_info select 4);
			};
		};
		if (_info select 0 == 1) then {
			//скинуло
			if (local _unit) then {
				_unit setPosATL (_info select 2);
				_unit setDir (_info select 3);
			//	_unit setVelocity (_info select 4);
			};
			[_unit,(_info select 1),(_info select 4)] spawn RHS_cargoSystem_GetOffEff_script;
			_unit setVariable ["rhs_cargosystem_getoff_info", Nil, false];
		};
	};
	};
}];