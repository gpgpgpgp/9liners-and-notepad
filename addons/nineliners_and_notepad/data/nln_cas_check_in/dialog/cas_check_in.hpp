class nln_cas_check_in
{
	idd = -1;
	movingenable = true;

	class Controls
	{
		class nln_cas_checkIn_background: nln_cas_check_in_picture
		{
			idc = 1200;
			text = "\nln_nineliner_and_notepad\data\nln_cas_check_in\images\cas_check_in.paa";
			x = -0.0843753 * safezoneW + safezoneX;
			y = 0.225107 * safezoneH + safezoneY;
			w = 0.492708 * safezoneW;
			h = 0.802687 * safezoneH;
			moving = 1;
		};
		class nln_cas_checkIn_btn_previousPage: nln_cas_check_in_button
		{
			idc = 1600;
			x = 0.0130208 * safezoneW + safezoneX;
			y = 0.950824 * safezoneH + safezoneY;
			w = 0.034375 * safezoneW;
			h = 0.0329871 * safezoneH;
			action = "call nln_cas_check_in_fnc_previousPage";
		};
		class nln_cas_checkIn_btn_nextPage: nln_cas_check_in_button
		{
			idc = 1601;
			x = 0.276563 * safezoneW + safezoneX;
			y = 0.950824 * safezoneH + safezoneY;
			w = 0.034375 * safezoneW;
			h = 0.0329871 * safezoneH;
			action = "call nln_cas_check_in_fnc_nextPage";
		};
		class nln_cas_checkIn_clearPage: nln_cas_check_in_button
		{
			idc = 1602;
			x = 0.053125 * safezoneW + safezoneX;
			y = 0.950824 * safezoneH + safezoneY;
			w = 0.0744792 * safezoneW;
			h = 0.0329871 * safezoneH;
			action = "call nln_cas_check_in_fnc_clearPage";
		};
		class nln_cas_checkIn_btn_save: nln_cas_check_in_button
		{
			idc = 1603;
			x = 0.144792 * safezoneW + safezoneX;
			y = 0.950824 * safezoneH + safezoneY;
			w = 0.034375 * safezoneW;
			h = 0.0329871 * safezoneH;
			action = "call nln_cas_check_in_fnc_savePage";
		};
		class nln_cas_checkIn_btn_clearAll: nln_cas_check_in_button
		{
			idc = 1604;
			x = 0.196354 * safezoneW + safezoneX;
			y = 0.950824 * safezoneH + safezoneY;
			w = 0.06875 * safezoneW;
			h = 0.0329871 * safezoneH;
			action = "call nln_cas_check_in_fnc_clearall";
		};
		class nln_cas_checkIn_line0_1: nln_cas_check_in_edit
		{
			idc = 1400;
			x = 0.0588542 * safezoneW + safezoneX;
			y = 0.412034 * safezoneH + safezoneY;
			w = 0.0916667 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		class nln_cas_checkIn_line0_2: nln_cas_check_in_edit
		{
			idc = 1401;
			x = 0.179167 * safezoneW + safezoneX;
			y = 0.412034 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		class nln_cas_checkIn_line1: nln_cas_check_in_edit
		{
			idc = 1402;
			x = 0.144792 * safezoneW + safezoneX;
			y = 0.476009 * safezoneH + safezoneY;
			w = 0.143229 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		class nln_cas_checkIn_line2: nln_cas_check_in_edit
		{
			idc = 1403;
			x = 0.139062 * safezoneW + safezoneX;
			y = 0.5045 * safezoneH + safezoneY;
			w = 0.148958 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		class nln_cas_checkIn_line3: nln_cas_check_in_edit
		{
			idc = 1404;
			x = 0.116146 * safezoneW + safezoneX;
			y = 0.537987 * safezoneH + safezoneY;
			w = 0.171875 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		class nln_cas_checkIn_line4: nln_cas_check_in_edit
		{
			idc = 1405;
			x = 0.0760417 * safezoneW + safezoneX;
			y = 0.570974 * safezoneH + safezoneY;
			w = 0.211979 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		class nln_cas_checkIn_line5: nln_cas_check_in_edit
		{
			idc = 1406;
			x = 0.0932292 * safezoneW + safezoneX;
			y = 0.602961 * safezoneH + safezoneY;
			w = 0.194792 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		class nln_cas_checkIn_line6: nln_cas_check_in_edit
		{
			idc = 1407;
			x = 0.0416667 * safezoneW + safezoneX;
			y = 0.647944 * safezoneH + safezoneY;
			w = 0.246354 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		class nln_cas_checkIn_line7: nln_cas_check_in_edit
		{
			idc = 1408;
			x = 0.0817708 * safezoneW + safezoneX;
			y = 0.679931 * safezoneH + safezoneY;
			w = 0.20625 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		class nln_cas_check_in_btn_enableControls_1: nln_cas_check_in_button
		{
			idc = 1605;
			x = 0.316667 * safezoneW + safezoneX;
			y = -0.302687 * safezoneH + safezoneY;
			w = 1.63854 * safezoneW;
			h = 2.06719 * safezoneH;
			onMouseButtonClick = "execVM ""\nln_nineliner_and_notepad\data\nln_cas_check_in\scripts\createResource.sqf""";
			onMouseButtonDblClick = "closeDialog 0;";
			tooltip = "CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[] = {1,0,0,1};
		};
		class nln_cas_check_in_btn_enableControls_2: nln_cas_check_in_button
		{
			idc = 1606;
			x = -0.571354 * safezoneW + safezoneX;
			y = 0.994807 * safezoneH + safezoneY;
			w = 1.63854 * safezoneW;
			h = 2.06719 * safezoneH;
			onMouseButtonClick = "execVM ""\nln_nineliner_and_notepad\data\nln_cas_check_in\scripts\createResource.sqf""";
			onMouseButtonDblClick = "closeDialog 0;";
			tooltip = "CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[] = {1,0,0,1};
		};
		class nln_cas_check_in_btn_enableControls_3: nln_cas_check_in_button
		{
			idc = 1607;
			x = -3.01771 * safezoneW + safezoneX;
			y = -0.258705 * safezoneH + safezoneY;
			w = 3.025 * safezoneW;
			h = 2.08919 * safezoneH;
			onMouseButtonClick = "execVM ""\nln_nineliner_and_notepad\data\nln_cas_check_in\scripts\createResource.sqf""";
			onMouseButtonDblClick = "closeDialog 0;";
			tooltip = "CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[] = {1,0,0,1};
		};
		class nln_cas_check_in_btn_enableControls_4: nln_cas_check_in_button
		{
			idc = 1608;
			x = -0.456771 * safezoneW + safezoneX;
			y = -1.77611 * safezoneH + safezoneY;
			w = 1.63854 * safezoneW;
			h = 2.06719 * safezoneH;
			onMouseButtonClick = "execVM ""\nln_nineliner_and_notepad\data\nln_cas_check_in\scripts\createResource.sqf""";
			onMouseButtonDblClick = "closeDialog 0;";
			tooltip = "CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[] = {1,0,0,1};
		};
	};
};

/*
class RscTitles
{
titles[]={"nln_cas_check_in_resource"};

	class nln_cas_check_in_resource
	{
		idd = -1;
		onUnload = "uiNamespace setVariable ['nln_cas_check_in_resource', nil];hint """"";
		duration=0.1;
		fadein=0;
		name="nln_cas_check_in_resource";
		onLoad = "uiNamespace setVariable ['nln_cas_check_in_resource', _this select 0];";

		class Controls
		{
			class nln_cas_checkIn_background: nln_cas_check_in_picture
			{
				idc = 1200;
				text = "\nln_nineliner_and_notepad\data\nln_cas_check_in\images\cas_check_in.paa";
				x = -0.0843753 * safezoneW + safezoneX;
				y = 0.225107 * safezoneH + safezoneY;
				w = 0.492708 * safezoneW;
				h = 0.802687 * safezoneH;
			};
			class nln_cas_checkIn_line0_1: nln_cas_check_in_edit
			{
				idc = 1400;
				x = 0.0588542 * safezoneW + safezoneX;
				y = 0.412034 * safezoneH + safezoneY;
				w = 0.0916667 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_cas_checkIn_line0_2: nln_cas_check_in_edit
			{
				idc = 1401;
				x = 0.179167 * safezoneW + safezoneX;
				y = 0.412034 * safezoneH + safezoneY;
				w = 0.103125 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_cas_checkIn_line1: nln_cas_check_in_edit
			{
				idc = 1402;
				x = 0.144792 * safezoneW + safezoneX;
				y = 0.476009 * safezoneH + safezoneY;
				w = 0.143229 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_cas_checkIn_line2: nln_cas_check_in_edit
			{
				idc = 1403;
				x = 0.139062 * safezoneW + safezoneX;
				y = 0.5045 * safezoneH + safezoneY;
				w = 0.148958 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_cas_checkIn_line3: nln_cas_check_in_edit
			{
				idc = 1404;
				x = 0.116146 * safezoneW + safezoneX;
				y = 0.537987 * safezoneH + safezoneY;
				w = 0.171875 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_cas_checkIn_line4: nln_cas_check_in_edit
			{
				idc = 1405;
				x = 0.0760417 * safezoneW + safezoneX;
				y = 0.570974 * safezoneH + safezoneY;
				w = 0.211979 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_cas_checkIn_line5: nln_cas_check_in_edit
			{
				idc = 1406;
				x = 0.0932292 * safezoneW + safezoneX;
				y = 0.602961 * safezoneH + safezoneY;
				w = 0.194792 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_cas_checkIn_line6: nln_cas_check_in_edit
			{
				idc = 1407;
				x = 0.0416667 * safezoneW + safezoneX;
				y = 0.647944 * safezoneH + safezoneY;
				w = 0.246354 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_cas_checkIn_line7: nln_cas_check_in_edit
			{
				idc = 1408;
				x = 0.0817708 * safezoneW + safezoneX;
				y = 0.679931 * safezoneH + safezoneY;
				w = 0.20625 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
		};
	};
};*/



