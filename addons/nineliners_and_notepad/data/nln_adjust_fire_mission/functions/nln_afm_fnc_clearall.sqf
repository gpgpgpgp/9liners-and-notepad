nln_afm_fnc_clearall =
{
	0 spawn
	{
		disableSerialization;
		if !(["Clear All Pages?", "Confirm", true, true] call BIS_fnc_guiMessage )exitWith{};
		playSound "nln_ClearAll";
		
		_emptySheet = ["","","","","","","","","","","","","","","","","","","","",""];
		[_emptySheet] call nln_afm_fnc_fill;

		_pagecounter = 1;

		while {_pagecounter <= 20} do
		{
			_varname = "nln_afm_pageText_" + (str _pagecounter);
			profileNameSpace setVariable [_varname, nil];
			_pagecounter = _pagecounter + 1;
			if (_pagecounter == 21) then {hint "All 20 Adjust-Fire-Mission sheets where cleared and saved.";};
		};
	};
};
