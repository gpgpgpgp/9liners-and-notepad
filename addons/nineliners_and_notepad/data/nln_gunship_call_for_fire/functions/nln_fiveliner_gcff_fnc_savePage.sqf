nln_fiveliner_gcff_fnc_savePage =
{
	_varname = "nln_fiveliner_gcff_pageText_" + (str nln_fiveliner_gcff_currentPage);
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
			ctrlText 1406
		]
	];

	hint format ["PAGE %1 SAVED", nln_fiveliner_gcff_currentPage];
};
