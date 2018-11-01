params ["_string"];
private _allowed = ["0","1","2","3","4","5","6","7","8","9"];
private _forbidden = -1;

try
{
    for "_i" from 0 to ((count _string) - 1) do
    {
        private _character = _string select [_i, 1];
        if !(_character in _allowed) throw _i;
    };
}
catch
{
    _forbidden = _exception;
};

_forbidden
