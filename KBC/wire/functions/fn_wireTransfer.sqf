private["_targetbox","_targetCheck","_netID","_name","_string ","_forbidden","_number","_locker","_player","_money","_lockerMoney"];
_targetbox = (findDisplay 9999) displayctrl 1500;
_targetCheck = (findDisplay 9999) displayctrl 2800;
lbcursel _targetbox;
_netID = (lbData [1500, (lbCurSel 1500)]);
_name = name (objectFromNetId _netID);
_string = ctrlText 1400;
_forbidden = [_string] call KBC_wire_fnc_stringCheck;
_number = parseNumber _string;
_locker = cbChecked _targetCheck;
_player = netID player;
_money = player getVariable ["ExileMoney",0];
_lockerMoney = player getVariable ["ExileLocker", 0];
try {
	if !(_forbidden isEqualTo -1) then {
		throw "You can only use numbers in the amount! No letters or symbols!";
	};
	if ((_string isEqualTo "") || (_string isEqualTo "0")) then {
		throw "Please enter an amount to send!";
	};
	if (isNull (objectFromNetId _netID)) then {
		throw "Please select a player to send money to!";
	};
	if (_player isEqualTo _netID) then {
		throw "You cant transfer money to yourself!";
	};
	if (_locker) then {
		if (_lockerMoney < _number) then {
			throw "You dont have enough money in your bank to do that!";
		};
	} else {
		if (_money < _number) then {
			throw "You dont have enough money in your wallet to do that!";
		};
	};
	["wireTransferRequest", [_netID,_number,_locker]] call ExileClient_system_network_send;
}
catch {
	["ErrorTitleAndText",["Wire Transfer", _exception]]call ExileClient_gui_toaster_addTemplateToast;
};