params ["_sessionID","_params"];
_params params ["_targetID","_moneySent","_locker"];

try
{
    private _player = _sessionID call ExileServer_system_session_getPlayerObject;
    if (isNull _player) throw "You for some reason do not exist!";

    private _target = objectFromNetId _targetID;
    if (isNull _target) throw "Unable to locate the target you're attempting to transfer to!";

    private _from = ["ExileMoney","ExileLocker"] select _locker;
    private _playerMoney = _player getVariable [_from, 0];
    if (_playerMoney < _moneySent) throw "You do not have enough money for that!";

    private _newMoneyp = _playerMoney - _moneySent;
    _player setVariable [_from, _newMoneyp, true];
	format["%1:%2:%3", ["setPlayerMoney", "updateLocker"] select _locker, _newMoneyp, [_player getVariable ["ExileDatabaseID", 0], getPlayerUID _player] select _locker] call ExileServer_system_database_query_fireAndForget;

    private _targetMoney = _target getVariable ["ExileLocker",0];
    private _newMoneyt = _targetMoney + _moneySent;
    _target setVariable ["ExileLocker", _newMoneyt, true];
	format["updateLocker:%1:%2", _newMoneyt, getPlayerUID _target] call ExileServer_system_database_query_fireAndForget;

    [_sessionID, "ToastRequest", ["SuccessTitleAndText", ["Wire Transfer", format["$%2 sent from your %3 to %1's bank!", name _target, _moneySent, ["wallet","bank"] select _locker]]]] call ExileServer_system_network_send_to;
    [_target, "ToastRequest", ["SuccessTitleAndText", ["Wire Transfer", format["$%2 sent to your bank from %1!", name _player, _moneySent]]]] call ExileServer_system_network_send_to;
}
catch
{
    [_sessionID, "ToastRequest", ["ErrorTitleAndText",["Whoops!", _exception]]] call ExileServer_system_network_send_to;
};

true
