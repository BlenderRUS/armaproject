/*
Created by Vadim Shchemelinin aka badger 
2010 St.Petersburg

RHS Cargo System
*/
private ["_resList","_fveh","_veh","_i","_modul","_vehlist","_getoffscript","_have_fantom","_exit"];
_exit = false;

["INFO enableCS. STARTED"] spawn RHS_cargoSystem_debug;

_vehlist = _this;

if (RHS_cargoSystem_InitOnClient) then {

	if (isMultiplayer) then {
		if (isServer) then {
			//selecting client on which PC will be started AttachTo
			_cargoSystem_Clients = [];
			{
				if ((isPlayer _x)and(!(isNil {_x getVariable "rhs_cargosystem_player_ready"}))and(_x getVariable "rhs_cargosystem_player_ready")) then {
					RHS_cargoSystem_SuperClient = _x;
					_cargoSystem_Clients set [count _cargoSystem_Clients, _x];
				};
			} foreach playableUnits;
			if (count _cargoSystem_Clients > 0) then {
				RHS_cargoSystem_SuperClient = _cargoSystem_Clients select 0;
				RHS_cargoSystem_SuperClient = _cargoSystem_Clients select (floor (random (count _cargoSystem_Clients)));
				RHS_cargoSystem_SuperClient_not_ready = true;
				publicVariable "RHS_cargoSystem_SuperClient_not_ready";
				["INFO enableCS Server. RHS_cargoSystem_SuperClient_not_ready: %1",RHS_cargoSystem_SuperClient_not_ready] spawn RHS_cargoSystem_debug;
				publicVariable "RHS_cargoSystem_SuperClient";
				
				//вызов проверки на "сработало" + рекурсивный запуск с темже списком если не сработало
				_vehlist spawn {
					_timeout = 50;
					while {(_timeout > 0)and(RHS_cargoSystem_SuperClient_not_ready)and(isPlayer RHS_cargoSystem_SuperClient)} do {
						sleep 0.1;
						_timeout = _timeout-1;
					};
					if (RHS_cargoSystem_SuperClient_not_ready) then {
						0 = _this spawn rhs_enableCS;
						["INFO enableCS SERVER. RHS_cargoSystem_SuperClient NOT NOT READY!!! SC: %1, timout: %2, not_ready: %3",RHS_cargoSystem_SuperClient,_timeout,RHS_cargoSystem_SuperClient_not_ready] spawn RHS_cargoSystem_debug;
					};
				};				
			}else{
				_exit = true;
			};
		};
	}else{
		RHS_cargoSystem_SuperClient = player;
	};

	if (_exit) exitWith {
		
		["INFO enableCS SERVER. RHS_cargoSystem_SuperClient NOT FAUNDED!!!"] spawn RHS_cargoSystem_debug;
		
		//if no clients finded on the server
		sleep 5;
		//will executed only on the Server, trying to find new superClient after 5 seconds
		0 = _vehlist spawn rhs_enableCS;
	};
	["INFO enableCS. in progress 1"] spawn RHS_cargoSystem_debug;
	waitUntil {!(isNil "RHS_cargoSystem_SuperClient")};
	//hint "RHS_cargoSystem_SuperClient exist";
	//waitUntil {!(isNull RHS_cargoSystem_SuperClient)};

	["INFO enableCS. RHS_cargoSystem_SuperClient = %1",RHS_cargoSystem_SuperClient] spawn RHS_cargoSystem_debug;
};
["INFO enableCS. in progress 2"] spawn RHS_cargoSystem_debug;
RHS_cargoSystem_wfList = getArray (configFile >> "CfgVehicles" >> "RHS_CargoSystem_Enable" >> "RHS_cargoSystem_wfList");
RHS_cargoSystem_workList = [];
RHS_cargoSystem_fakeList = [];
{
	RHS_cargoSystem_workList set [count RHS_cargoSystem_workList,(_x select 0)];
	RHS_cargoSystem_fakeList set [count RHS_cargoSystem_fakeList,(_x select 1)];
} foreach RHS_cargoSystem_wfList;
/*
RHS_cargoSystem_workList = ["Tank"];
RHS_cargoSystem_fakeList = ["2b14_82mm"];
*/




_resList = [];
_resfList = [];
if (count _vehlist > 0) then {
	{
		if ((_x isKindOf "Wheeled_APC")or(_x isKindOf "Tank")) then { //t.k. tolko tanki ili btr/bmp
			_veh = _x;
			{
				if (_veh isKindOf _x) exitWith {
					//_resList = _resList + [_veh];
					_resList set [count _resList,_veh];
					//_resfList = _resfList + [(RHS_cargoSystem_fakeList select (RHS_cargoSystem_workList find _x))];
					_resfList set [count _resfList,(RHS_cargoSystem_fakeList select (RHS_cargoSystem_workList find _x))];
				};
			} forEach RHS_cargoSystem_workList;
		};
	} forEach _vehlist;
};

//если клиент и если инициализация на клиенте, ждём сообщения о готовности супер клиента
if ((RHS_cargoSystem_InitOnClient)&& {!isnil "RHS_cargoSystem_SuperClient"} && {player != RHS_cargoSystem_SuperClient}) then {
	//waitUntil {RHS_cargoSystem_SuperClient_not_ready};
	["INFO enableCS C. RHS_cargoSystem_SuperClient_not_ready: %1",RHS_cargoSystem_SuperClient_not_ready] spawn RHS_cargoSystem_debug;
};

["INFO enableCS. Crl = %1, CrFl =%2, _resList = %3, _resfList = %4",count _resList,count _resfList,_resList,_resfList] spawn RHS_cargoSystem_debug;

_i = 0;
if (count _resList > 0) then {
	{
	if ((_resfList select _i) != "not") then {
		["INFO enableCS for %1",_x] spawn RHS_cargoSystem_debug;
		//selecting type of init
		_initOrderResult = false;
		if (RHS_cargoSystem_InitOnClient) then {
			//init on Super Client
			_initOrderResult = (player == RHS_cargoSystem_SuperClient);
		}else{
			//init on Server
			_initOrderResult = (isServer);
		};
		//global effect
		if (_initOrderResult) then { //global effect
			//["INFO enableCS on SuperClient for %1",_x] spawn RHS_cargoSystem_debug;
			if ((isNil {_x getVariable "rhs_cargosystem_fantom"})or(false)) then {//<--- добавить проверку на баг АттачТу
				_fveh = createVehicle [(_resfList select _i), position _x, [], 0, "NONE"];
				_fveh attachTo [_x,getArray (configFile >> "CfgVehicles" >> (_resfList select _i) >> "RHS_attachToPos")];
				//_fveh attachTo [_x,[0,0,1]];
				_x setVariable ["rhs_cargosystem_fantom", _fveh, true];
				//_fveh setVariable ["rhs_cargosystem_real", _x, true];
				["INFO enableCS. SuperClient _x = %1 ; rhs_cargosystem_fantom = %2 ?= %3",_x,_x getVariable "rhs_cargosystem_fantom",_fveh] spawn RHS_cargoSystem_debug;
			};
		};
		//local effect
		if (isNil {_x getVariable "rhs_cargosystem_localProcessed"}) then { //local effect
			//["INFO enableCS on local for %1",_x] spawn RHS_cargoSystem_debug;
			waitUntil {!(isNil {_x getVariable "rhs_cargosystem_fantom"})};
			_fveh = _x getVariable "rhs_cargosystem_fantom";
			//["INFO enableCS. _x = %1 ; rhs_cargosystem_fantom = %2",_x,_fveh] spawn RHS_cargoSystem_debug;
			if !(isNil {_x getVariable "rhs_cargosystem_localProcessed"}) exitWith {
				["INFO enableCS on local for %1 ABORTED",_x] spawn RHS_cargoSystem_debug;
			};
			_x setVariable ["rhs_cargosystem_localProcessed", true, false];
			//экшен на залезание
			0 = _x addAction [localize "STR_rhs_cargosystem_rideON"+" "+ getText (configFile >> "CfgVehicles" >> (typeOf _x) >> "displayName"),(RHS_corgoSystem_scrpath+"geton_action.sqf"),[-1],2, false,false,"",
			"!(_this in crew (_target getVariable 'rhs_cargosystem_fantom')) && !(_this in crew _target)&&(_this distance _target < 5) "];
			//экшен на спрыгивание
			0 = _fveh addAction [localize "STR_rhs_cargosystem_rideOUT",(RHS_corgoSystem_scrpath+"eject_action.sqf"),[],100, false,false,"Eject",
			"(vehicle _this == _target)"];
			//экшен на постучать
			0 = _fveh addAction [localize "STR_rhs_cargosystem_knock",(RHS_corgoSystem_scrpath+"knock.sqf"),[_x],-100, false,false,"",
			"(vehicle _this == _target)"];
			//Вызываем скрипт слетания брони при попадании
			[_x,_fveh] spawn RHS_cargoSystem_getoff_script;
			
			if (isServer) then {
				//Добавляем запрет на поворот башни для некоторой техники
				if (getNumber (configFile >> "CfgVehicles" >> (_resfList select _i) >> "RHS_blokTurret") == 1) then {
					[_x] spawn {
						_btr = _this select 0;
						while {alive _btr} do {
							if (count crew (_btr getVariable 'rhs_cargosystem_fantom') > 0) then {
								if (getText (configFile >> "CfgVehicles" >> (typeOf _btr) >> "driverAction") != animationState (driver _btr)) then {	//если водитель залез в люк
									{
										[vehicle _x, _x] spawn RHS_cargoSystem_eject_action_script;
									} forEach (crew (_btr getVariable 'rhs_cargosystem_fantom'));
								};
							};
							sleep 1;
						};
					};
				};
			};
			
		};
		_i = _i +1;
	}else{
		_i = _i +1;
	};
	} forEach _resList;
	//если суперклиент и если инициализация на клиенте, сообщаем о готовности супер клиента
	if ((RHS_cargoSystem_InitOnClient)and(player == RHS_cargoSystem_SuperClient)) then {
		RHS_cargoSystem_SuperClient_not_ready = false;
		publicVariable "RHS_cargoSystem_SuperClient_not_ready";
		["INFO enableCS SC. RHS_cargoSystem_SuperClient_not_ready: %1",RHS_cargoSystem_SuperClient_not_ready] spawn RHS_cargoSystem_debug;
	};
};

sleep 2;
["INFO enableCS. FINISHED"] spawn RHS_cargoSystem_debug;
RHS_cargoSystem_enableCS_not_running = true;