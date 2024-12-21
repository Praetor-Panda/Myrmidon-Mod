// Declaração de variáveis:
params ["_heli"];

// Criação e posicionamento do assento:

// Espera de 1 segundo
sleep 1;

// Texto que aparece no side channel
_heli vehicleChat "Deploying Rescue Seat";

// Criação do veículo _rescueseat 
private _rescueseat = "BRAF_Rescue_Seat" createvehicle[0,0,0];

// Mudança de Orientação do _rescueseat
_rescueseat setDir (getDir _heli);

// Mudança de posição do _rescueseat
_rescueseat setPosASL (_heli ModelToWorld [0,0,-1.5]);

// Criação do Cabo
private _hoistrope = ropeCreate [_heli, "rope_start", _rescueseat, "hoist_point", 0.25];

_heli setVariable ["rescueseat", _rescueseat];
_heli setVariable ["hoistrope", _hoistrope];

_heli;