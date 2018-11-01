disableSerialization;

try
{
    private _display = findDisplay 9999;
    private _targetbox = _display displayctrl 1500;
    private _targetCheck = _display displayctrl 2800;
    private _inputText = _display displayCtrl 1400;

    private _selectedIndex = lbCurSel _targetbox;
    if (_selectedIndex == -1) throw "Please select a player to send money to!";

    private _netID = _targetbox lbData _selectedIndex;
    if (isNull objectFromNetId _netID) throw "Please select a player to send money to!";

    private _string = ctrlText _inputText;
    if (_string == "" || {_string == "0"})) throw "Please enter an amount to send!";

    private _forbidden = [_string] call test_fnc_stringCheck;
    if (_forbidden != -1) throw "You can only use numbers in the amount! No letters or symbols!";

    private _money = player getVariable ["ExileMoney",0];
    private _lockerMoney = player getVariable ["ExileLocker", 0];
    private _locker = cbChecked _targetCheck;
    private _number = parseNumber _string;

    if (([_money, _lockerMoney] select _locker) < _number) throw format["You dont have enough money in your %1 to do that!", ["wallet, bank"] select _locker];

    ["wireTransferRequest", [_netID, _number, _locker]] call ExileClient_system_network_send;
}
catch
{
    ["ErrorTitleAndText",["Wire Transfer", _exception]]call ExileClient_gui_toaster_addTemplateToast;
};
