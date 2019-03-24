_veh = _this select 0;
_unit = _this select 1;

_dir = [_unit,_veh] call bis_fnc_dirto;
_unit setdir _dir;
_unit playMove "AinvPknlMstpSlayWrflDnon_medic";
[9,[localize ""],false,true,_unit,true] spawn ace_progressbar;
sleep 9;

if (!(alive _unit)) exitWith {};

if (typeOf _veh in ["AP_FMTV_W","AP_FMTV_ARMOR_W","AP_FMTV_ARMOR_M2_W"]) then {_veh animate ["tent_woodland_unhide", 1]; _veh animate ["tent_desert_unhide", 0];};
if (typeOf _veh in ["AP_FMTV_D","AP_FMTV_ARMOR_D","AP_FMTV_ARMOR_M2_D"]) then {_veh animate ["tent_woodland_unhide", 0]; _veh animate ["tent_desert_unhide", 1];};
