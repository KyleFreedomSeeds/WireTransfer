class RscText1
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = 0;
	idc = -1;
	colorBackground[] = 
	{
		0,
		0,
		0,
		0
	};
	colorText[] = 
	{
		1,
		1,
		1,
		1
	};
	text = "";
	fixedWidth = 0;
	colorShadow[] = 
	{
		0,
		0,
		0,
		0.5
	};
	tooltipColorText[] = 
	{
		1,
		1,
		1,
		1
	};
	tooltipColorBox[] = 
	{
		1,
		1,
		1,
		1
	};
	tooltipColorShade[] = 
	{
		0,
		0,
		0,
		0.65
	};
	x = 0;
	y = 0;
	h = 0.037;
	w = 0.3;
	style = 0;
	shadow = 1;
	font = "RobotoCondensed";
	SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	linespacing = 1;
};
class RscButton1
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = 1;
	text = "";
	colorText[] = 
	{
		1,
		1,
		1,
		1
	};
	colorDisabled[] = 
	{
		1,
		1,
		1,
		0.25
	};
	colorBackground[] = 
	{
		0,
		0,
		0,
		0.5
	};
	colorBackgroundDisabled[] = 
	{
		0,
		0,
		0,
		0.5
	};
	colorBackgroundActive[] = 
	{
		0,
		0,
		0,
		1
	};
	colorFocused[] = 
	{
		0,
		0,
		0,
		1
	};
	colorShadow[] = 
	{
		0,
		0,
		0,
		0
	};
	colorBorder[] = 
	{
		0,
		0,
		0,
		1
	};
	soundEnter[] = 
	{
		"\A3\ui_f\data\sound\RscButton\soundEnter",
		0.09,
		1
	};
	soundPush[] = 
	{
		"\A3\ui_f\data\sound\RscButton\soundPush",
		0.09,
		1
	};
	soundClick[] = 
	{
		"\A3\ui_f\data\sound\RscButton\soundClick",
		0.09,
		1
	};
	soundEscape[] = 
	{
		"\A3\ui_f\data\sound\RscButton\soundEscape",
		0.09,
		1
	};
	idc = -1;
	style = 2;
	x = 0;
	y = 0;
	w = 0.095589;
	h = 0.039216;
	shadow = 2;
	font = "RobotoCondensed";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	url = "";
	offsetX = 0;
	offsetY = 0;
	offsetPressedX = 0;
	offsetPressedY = 0;
	borderSize = 0;
};
class wire {
    idd = 9999;
    movingEnabled = false;
		class ControlsBackground
		{
			class BackgroundImage
			{
				type = 0;
				idc = 2000;
				x="0.27";
				y="1 * (0.04) + (0)";
				w="17.5 * (0.025)";
				h="24 * (0.04)";
				colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
				style = 0;
				text = "";
				colorText[] = {0.3176,0.3294,0.4745,1};
				font = "PuristaMedium";
				sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
				
			};
		};
    class controls {
		class closebtn
		{
			type = 1;
			idc = 2002;
			shadow = 2;
			tooltipColorText[] = {1,1,1,1};
			tooltipColorBox[] = {1,1,1,1};
			tooltipColorShade[] = {0,0,0,0.65};
			action = "closeDialog 0;";
			style = 2096;
			color[] = {1,1,1,0.7};
			borderSize = 0;
			colorBackgroundActive[] = {1,0,0,0};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,0};
			colorFocused[] = {0.2,0.2,0.2,0};
			colorShadow[] = {0,0,0,0};
			font = "PuristaMedium";
			offsetPressedX = 0;
			offsetPressedY = 0;
			offsetX = 0;
			offsetY = 0;
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1};

			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa"; //--- ToDo: Localize;
			x = 0.65;
			y = 0.11 * GUI_GRID_H + GUI_GRID_Y;
			w = 2.06061 * GUI_GRID_W;
			h = 0.606061 * GUI_GRID_H;
			colorText[] = {1,1,1,0.7};
			colorBackground[] = {0.5098,0.0353,0.6667,0};
			colorActive[] = {1,1,1,1};
			tooltip = "Close"; //--- ToDo: Localize;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1) * GUI_GRID_H;
		};
		class players
		{
			idc = 1500;
			font = "RobotoCondensed";
			colorSelect[] = {0,0,0,1};
			colorPictureRightSelected[] = {1,1,1,1};
			soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1};
			class ListScrollBar
			{
				color[]={1,1,1,1};
				autoScrollEnabled=1;
				colorActive[]={1,1,1,1};
				colorDisabled[]={1,1,1,0.30000001};
				thumb="\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
				arrowEmpty="\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
				arrowFull="\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
				border="\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
				shadow=0;
				scrollSpeed=0.059999999;
				width=0;
				height=0;
				autoScrollSpeed=-1;
				autoScrollDelay=5;
				autoScrollRewind=0;
			};
			sizeEx2 = "0.0575";
			rowHeight = "0.05";
			canDrag = 0;
			itemSpacing = 0.001;
			period = 1.2;
			shadow = 0;
			maxHistoryDelay = 1;
			fade = 0;
			deletable = 0;
			type = 5;
			style = 16;
			colorDisabled[] = {1,1,1,0.25};
			colorPicture[] = {1,1,1,1};
			colorPictureDisabled[] = {1,1,1,0.25};
			colorPictureRight[] = {1,1,1,1};
			colorPictureRightDisabled[] = {1,1,1,0.25};
			colorPictureSelected[] = {1,1,1,1};
			colorScrollbar[] = {1,0,0,0};
			colorSelect2[] = {0,0,0,1};
			colorSelect2Right[] = {0,0,0,1};
			colorSelectBackground2[] = {1,1,1,0.5};
			colorSelectBackground[] = {0.95,0.95,0.95,1};
			colorSelectRight[] = {0,0,0,1};
			colorShadow[] = {0,0,0,0.5};
			colorTextRight[] = {1,1,1,1};
			disabledCtrlColor[] = {1,1,1,0.5};
			itemBackground[] = {1,1,1,0.1};
			tooltipColorBox[] = {1,1,1,1};
			tooltipColorShade[] = {0,0,0,0.65};
			tooltipColorText[] = {1,1,1,1};

			x = 0.453594 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.0876563 * safezoneW;
			h = 0.286 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {1,1,1,0.1};
			sizeEx = 0.0575;
		};
		class money
		{
			idc = 1400;
			deletable = 0;
			fade = 0;
			access = 0;
			type = 2;
			colorDisabled[] = {1,1,1,0.25};
			colorSelection[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])",1};
			autocomplete = "";
			text = "";
			size = 0.2;
			tooltipColorText[] = {1,1,1,1};
			tooltipColorBox[] = {1,1,1,1};
			tooltipColorShade[] = {0,0,0,0.65};
			style = "0x00 + 0x40";
			font = "RobotoCondensed";
			shadow = 2;
			canModify = 1;

			x = 19 * GUI_GRID_W + GUI_GRID_X;
			y = 18.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 8 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorText[] = {0.95,0.95,0.95,1};
			colorBackground[] = {1,1,1,0.1};
			sizeEx = 0.05;
		};
		class checkbox
		{
			color[] = {1,1,1,0.7};
			colorFocused[] = {1,1,1,1};
			colorHover[] = {1,1,1,1};
			colorPressed[] = {1,1,1,1};
			colorDisabled[] = {1,1,1,0.2};
			colorBackgroundFocused[] = {0,0,0,0};
			colorBackgroundHover[] = {0,0,0,0};
			colorBackgroundPressed[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			tooltipColorText[] = {1,1,1,1};
			tooltipColorBox[] = {1,1,1,1};
			tooltipColorShade[] = {0,0,0,0.65};
			soundEnter[] = {"",0.1,1};
			soundPush[] = {"",0.1,1};
			soundClick[] = {"",0.1,1};
			soundEscape[] = {"",0.1,1};
			idc = 2800;
			type = 77;
			deletable = 0;
			style = 0;
			checked = 0;
			textureChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
			textureUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
			textureFocusedChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
			textureFocusedUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
			textureHoverChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
			textureHoverUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
			texturePressedChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
			texturePressedUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
			textureDisabledChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
			textureDisabledUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";

			x = 22 * GUI_GRID_W + GUI_GRID_X;
			y = 20.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 1.39899 * GUI_GRID_W;
			h = 1.12626 * GUI_GRID_H;
			colorBackground[] = {1,1,1,0.1};
			colorActive[] = {1,1,1,0.1};
		};
		class sendButton: RscButton1
		{
			idc = 1600;
			action = "";
			type = 1;
			style = "0x02 + 0xC0";
			default = 0;
			shadow = 0;
			animTextureNormal = "#(argb,8,8,3)color(1,1,1,1)";
			animTextureDisabled = "#(argb,8,8,3)color(1,1,1,1)";
			animTextureOver = "#(argb,8,8,3)color(1,1,1,1)";
			animTextureFocused = "#(argb,8,8,3)color(1,1,1,1)";
			animTexturePressed = "#(argb,8,8,3)color(1,1,1,1)";
			animTextureDefault = "#(argb,8,8,3)color(1,1,1,1)";
			colorBackgroundFocused[] = {1,1,1,1};
			colorBackground2[] = {0.75,0.75,0.75,1};
			color[] = {1,1,1,1};
			colorFocused[] = {0,0,0,1};
			color2[] = {0,0,0,1};
			colorDisabled[] = {1,1,1,0.25};
			textSecondary = "";
			colorSecondary[] = {1,1,1,1};
			colorFocusedSecondary[] = {0,0,0,1};
			color2Secondary[] = {0,0,0,1};
			colorDisabledSecondary[] = {1,1,1,0.25};
			sizeExSecondary = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			fontSecondary = "PuristaLight";
			period = 1.2;
			periodFocus = 1.2;
			periodOver = 1.2;
			size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			tooltipColorText[] = {1,1,1,1};
			tooltipColorBox[] = {1,1,1,1};
			tooltipColorShade[] = {0,0,0,0.65};
			textureNoShortcut = "";
			soundEnter[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEnter",0.09,1};
			soundPush[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundPush",0.09,1};
			soundClick[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundClick",0.09,1};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEscape",0.09,1};
			onMouseButtonClick = "call KBC_wire_fnc_wireTransfer";

			text = "Send Money!"; //--- ToDo: Localize;
			x = 0.453594 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
			sizeEx = 1 * GUI_GRID_H;
		};
		class text01: RscText1
		{
			idc = 1006;
			text = "Send From Locker?"; //--- ToDo: Localize;
			x = 0.407187 * safezoneW + safezoneX;
			y = 0.676 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			sizeEx = 0.75 * GUI_GRID_H;
		};
		class text02: RscText1
		{
			idc = 1007;
			text = "Enter How Much To Send:"; //--- ToDo: Localize;
			x = 0.407187 * safezoneW + safezoneX;
			y = 0.621 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.044 * safezoneH;
			sizeEx = 0.75 * GUI_GRID_H;
		};
		class text03: RscText1
		{
			idc = 1008;
			text = "Choose a Player to Send to:"; //--- ToDo: Localize;
			x = 0.407187 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.033 * safezoneH;
			sizeEx = 0.75 * GUI_GRID_H;
		};
		class text04: RscText1
		{
			idc = 1009;
			text = "Wire Transfer Money"; //--- ToDo: Localize;
			x = 0.458448 * safezoneW + safezoneX;
			y = 0.247 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.033 * safezoneH;
			sizeEx = 1 * GUI_GRID_H;
		};

    };
};