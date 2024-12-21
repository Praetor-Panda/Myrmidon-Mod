// Declaração de variáveis
params ["_panther"];
// Corte do Cabo
private _rope = _panther getVariable ["hoistrope", ObjNull];
if (isNull _rope) then {
	_panther vehicleChat "no rope!";
};
ropeCut [_rope, 0];
ropeDestroy _rope;
_panther setVariable ["hoistrope", nil];
