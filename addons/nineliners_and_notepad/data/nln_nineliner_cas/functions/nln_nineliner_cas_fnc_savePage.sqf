nln_nineliner_cas_fnc_savePage =
{
	_varname = "nln_nineliner_cas_pageText_" + (str nln_nineliner_cas_currentPage);
	_pagetext = profileNamespace setVariable
	[
		_varname,
		[
			ctrlText 1400,
			ctrlText 1401,
			ctrlText 1402,
			ctrlText 1403,
			ctrlText 1404,
			ctrlText 1405,
			ctrlText 1406,
			ctrlText 1407,
			ctrlText 1408,
			ctrlText 1409,
			ctrlText 1410,
			ctrlText 1411,
			ctrlText 1412,
			ctrlText 1413,
			ctrlText 1414,
			ctrlText 1415,
			ctrlText 1416,
			ctrlText 1417,
			ctrlText 1418,
			ctrlText 1419
		]
	];

	hint format ["PAGE %1 SAVED", nln_nineliner_cas_currentPage];
};
