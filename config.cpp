class CfgInteractionMenus
{
	 class Wire
    {
        targetType = 2;
        target = "CUP_p_fiberPlant_EP1";

        class Actions 
        {
            class WireTransfer: ExileAbstractAction
            {
                title = "Wire Transfer";
                condition = "ExilePlayerInSafezone";
                action = "call wire_fnc_showDialog";
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
