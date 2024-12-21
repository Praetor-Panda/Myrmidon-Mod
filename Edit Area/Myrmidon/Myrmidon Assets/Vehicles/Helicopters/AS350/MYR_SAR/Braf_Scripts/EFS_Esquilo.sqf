// Declaração de variáveis:
params ["_heli"];

// Criação e posicionamento do EFS:
sleep 1;
_heli vehicleChat "Deploying Emergency Floating System!";
private _efs = "BRAF_Esquilo_EFS" createvehicle[0,0,0];
_efs setDir (getDir _heli);
_efs setPosASL (_heli ModelToWorld [0,0,0]);
_efs attachTo [_heli, [0,0,0], "efs_spawn"];

_heli setVariable ["efs", _efs];

_heli;