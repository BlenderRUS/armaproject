_veh = _this select 0;
_veh animate ["Rocket_Hide",1];

waitUntil { sleep 0.5; (_veh ammo "AP_MilanLauncher") > 0 };

_veh animate ["Rocket_Hide",0];