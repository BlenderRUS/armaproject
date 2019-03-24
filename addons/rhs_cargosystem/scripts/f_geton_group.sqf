/*
Created by Vadim Shchemelinin aka badger 
2011 St.Petersburg

RHS CargoSystem Sctipts
*/

_i=0;
{
	0 = [_x,(_this select 1),_i] spawn MoveOnCargo; 
	_i = _i+1;
} foreach units group (_this select 0); 