nln_fiveliner_gcff_fnc_clearall =
{
	_emptySheet = ["","","","","","",""];
	[_emptySheet] call nln_fiveliner_gcff_fnc_fill;

	_pagecounter = 1;

	while {_pagecounter <= 20} do
	{
		_varname = "nln_fiveliner_gcff_pageText_" + (str _pagecounter);
		profileNameSpace setVariable [_varname, nil];
		_pagecounter = _pagecounter + 1;
		if (_pagecounter == 21) then {hint "All 20 5-Liners where cleared and saved.";};
	};
};
