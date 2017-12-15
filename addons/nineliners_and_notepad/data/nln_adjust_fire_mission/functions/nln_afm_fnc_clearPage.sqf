nln_afm_fnc_clearPage =
{
	0 spawn
	{
		disableSerialization;
		if !(["Clear This Page?", "Confirm", true, true] call BIS_fnc_guiMessage )exitWith{};
		playSound "nln_ClearPage";
		
		_emptySheet = ["","","","","","","","","","","","","","","","","","","","",""];
		[_emptySheet] call nln_afm_fnc_fill;

		hint format ["PAGE %1 CLEARED\nNote: The page was cleared, but not saved!", nln_afm_currentPage];
	};
};
