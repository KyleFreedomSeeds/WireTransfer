disableSerialization;
createDialog "wire";

private _display = findDisplay 9999;
private _targetbox = _display displayctrl 1500;
lbClear _targetbox;

{
    private _player = _x;
    private _index = _targetbox lbadd name _player;
    _targetbox lbSetData [_index, netid _player];
} foreach (allPlayers - [player]);