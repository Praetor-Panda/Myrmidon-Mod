// Declaração de variáveis
params ["_heli","_player"];

// Récupération des victimes (thx to Tetet)
private _basket = _heli getVariable ["rescueseat", ObjNull];
private _rope = _heli getVariable ["hoistrope", ObjNull];
private _length = ropeLength _rope;

if (isNull _rope) then {
	_heli vehicleChat "no rope!";
};
if (_length <= 3.1) then {
	{
		if (!isNil "_x") then {
			_x leaveVehicle _basket;
			_x action["GetOut", _basket];
			sleep 0.1;
			_basket lock 0;
			[_x, _heli] remoteExec ["moveInCargo", _x];
			_x assignAsCargo _heli;
		};
	} foreach crew _basket; 
	ropeDestroy _rope;
	deleteVehicle _basket;
	_heli setVariable ["rescueseat", nil];
	_heli setVariable ["hoistrope", nil];
	_heli vehicleChat "Basket In Cabin";
	
} else {
	_heli vehicleChat "First Raise The Basket To Cabin Door";
};

// Corte do Cabo
//ropeCut [_heli getVariable "hoistrope", 0];
//deleteVehicle (_heli getVariable "rescueseat");