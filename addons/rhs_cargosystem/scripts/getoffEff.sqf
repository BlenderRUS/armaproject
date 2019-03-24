/*
Author: Vadim Shchemelinin aka badger 
Created for RHS cargo_system
2011 St.Petersburg
*/
private ["_unit","_prandomtime","_prandomanim","_ang","_pos","_s","_snd","_rad","_spch","_muz","_i","_wasPlayer"];

_unit = _this select 0;
_prandomanim = _this select 1;
_prandomtime = _this select 2;

_unit switchMove _prandomanim;

["INFO rhs_getoffeff. for %1 anim set to %2",_unit,_prandomanim] spawn RHS_cargoSystem_debug;

//Сохраняем настройки звука
_snd = 1;
_rad = 1;
_spch = 1;
_muz = 1;
_wasPlayer = false;
if (player == _unit) then {
	_wasPlayer = true;
	_snd = soundVolume;
	_rad = radioVolume;
	_spch = 1;
	_muz = musicVolume;
	0 fadeRadio 0;
	0 fadeSound 0;
	0 fadeMusic 0;
	0 fadeSpeech 0.1;
	"dynamicBlur" ppEffectEnable true;
	"dynamicBlur" ppEffectAdjust [20];
	"dynamicBlur" ppEffectCommit 3; 
	titleCut ["","BLACK OUT",3];
	hintSilent localize "STR_rhs_cargosystem_getoffeff";
};	
//Солдат приходит в себя
sleep _prandomtime;

["INFO rhs_getoffeff. for %1 anim sleeped %2",_unit,_prandomtime] spawn RHS_cargoSystem_debug;

if (alive _unit) then {

	_unit switchMove 'AmovPpneMstpSrasWrflDnon';
	["INFO rhs_getoffeff. %1 switched to normal anim",_unit] spawn RHS_cargoSystem_debug;
	//Выход из оглушенности /темноты
	if (player == _unit) then {
		titleCut ["","BLACK IN",10];
		30 fadeRadio _rad;
		30 fadeSound _snd;
		30 fadeMusic _muz;
		10 fadeSpeech _spch;
		addCamShake [20, 15, 5];
		//Блюр
		"dynamicBlur" ppEffectEnable true;
		"dynamicBlur" ppEffectAdjust [15];
		"dynamicBlur" ppEffectCommit 0; 
		"dynamicBlur" ppEffectAdjust [0];
		"dynamicBlur" ppEffectCommit 17; 
		for "_i" from 0 to 30 do {
			"dynamicBlur" ppEffectAdjust [(15 - _i/2)];
			"dynamicBlur" ppEffectCommit 0.5; 
			sleep 0.5;
		};
	};
	//фикс ошибки с залипшей анимой
	sleep 1;
	_s = animationState _unit;
	if (0 != {_x==_s} count ["AdthPercMrunSlowWrflDf_A1short", "AdthPercMrunSlowWrflDf_A2short", "AdthPercMrunSlowWrflDf_A3short", "AdthPercMrunSlowWrflDf_A4short"]) then {
		_unit switchMove "AmovPpneMstpSrasWrflDnon";
		["INFO rhs_getoffeff. %1 anim fixed",_unit] spawn RHS_cargoSystem_debug;
	};
}else{
	if (_wasPlayer) then {
		titleCut ["","BLACK IN",0];
		0 fadeRadio _rad;
		0 fadeSound _snd;
		0 fadeMusic _muz;
		0 fadeSpeech _spch;
		"dynamicBlur" ppEffectAdjust [0];
		"dynamicBlur" ppEffectCommit 0; 
	};
};