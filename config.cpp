class CfgInteractionMenus
{
    class Wire: ExileAbstractAction
    {
        targetType = 2;
        target = "Exile_Locker";
		 
        class Actions 
        {
            class WireTransfer: ExileAbstractAction
            {
                title = "Wire Transfer";
                condition = "ExilePlayerInSafezone";
                action = "call KBC_wire_fnc_showDialog";
            };
        };
    };
};

class CfgNetworkMessages
{
	class wireTransferRequest
	{
		module = "wire";
		parameters[] = {"STRING","SCALAR","BOOL"};
	};
};
