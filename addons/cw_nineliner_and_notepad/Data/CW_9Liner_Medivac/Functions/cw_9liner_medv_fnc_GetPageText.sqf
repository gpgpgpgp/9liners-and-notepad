cw_9liner_medv_fnc_GetPageText =
{
_pageNR = _this select 0;
_varname = "cw_9liner_medv_pageText_" + (str _pageNR);
_textvar = profileNamespace getVariable _varname;
_return = ["","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""];


If (!isNil "_textvar") then {_return = _textvar;};

_return;


};