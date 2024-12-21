// Declaração de variáveis
params ["_heli"];

// Desatachar e apagar EFS
private _EFS = _heli getVariable ["efs", ObjNull];
deleteVehicle _EFS;