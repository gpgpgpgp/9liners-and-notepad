nln_nineliner_medv_fnc_nextPage =
{
	_currentPage = nln_nineliner_medv_currentPage;
	_nextpage = _currentPage + 1;

	if (_nextpage > 20) exitWith {hint "No more 9-Liners left.";};

	nln_nineliner_medv_currentPage = nln_nineliner_medv_currentPage + 1;
	profileNamespace setVariable ["nln_nineliner_medv_lastPage", nln_nineliner_medv_currentPage];

	_pagetext = [nln_nineliner_medv_currentPage] call nln_nineliner_medv_fnc_GetPageText;

	[_pagetext] call nln_nineliner_medv_fnc_fill;

	hint format ["PAGE %1/20", nln_nineliner_medv_currentPage];
};
