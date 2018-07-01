/*
Author: Airwarfare
Purpose: File holder for all functions related to the phone ui, trying to be generic as possible for modular function
*/
 
/*
Purpose: Call on phone dialog init to make the dialog dynamically
Method Signature (Config)
*/
fnc_phone_on_init = {
    _config = Orion_Life_Phone_Config;
 
    _nextButtonPos = [0.545, .945, 0.0464063 * safezoneW, 0.056 * safezoneH];
    _previousButtonPos = [0.325, .945, 0.0464063 * safezoneW,  0.056 * safezoneH];
 
    _display = findDisplay 46 createDisplay "RscDisplayEmpty";
    _display = _display;
 
    /*
        X = 0.298906 * safezoneW + safezoneX
        Y = 0.17 * safezoneH + safezoneY
        W = 0.4 * safezoneW
        H = (0.4 * safezoneW) * (4/3)
    */
    _phone = _display ctrlCreate["Life_RscPicture", 1623];
    _phone ctrlSetPosition [0.298906 * safezoneW + safezoneX,0.17 * safezoneH + safezoneY,0.4 * safezoneW,(0.4 * safezoneW) * (4/3)];
    _phone ctrlSetBackgroundColor [0, 0, 0, 0];
    _phone ctrlSetText "images\textures\Phone\Phone_Main.paa";
    _phone ctrlCommit 0;
 
    _previousButton = _display ctrlCreate ["Life_RscButton", 1222];
    _previousButton ctrlSetPosition _previousButtonPos;
    _previousButton ctrlSetText "Previous Page";
    _previousButton ctrlShow false;
    _previousButton buttonSetAction "call fnc_phone_previous_page";
    _previousButton ctrlCommit 0;
 
    _nextButton = _display ctrlCreate ["Life_RscButton", 1223];
    _nextButton ctrlSetPosition _nextButtonPos;
    _nextButton ctrlSetText "Next Page";
    _nextButton ctrlShow false;
    _nextButton buttonSetAction "call fnc_phone_next_page";
    _nextButton ctrlCommit 0;
 
    [Orion_Life_Phone_Grid_Width,Orion_Life_Phone_Grid_Height,_config, _display] call fnc_phone_generic_grid;
    if(count _config > Orion_Life_Phone_Grid_Width * Orion_Life_Phone_Grid_Height) then { _nextButton ctrlShow true;};
};
/*
Purpose: For when the user has more than one page worth of icons, figures out how many pages in we are and switches to the 'next' Page
*/
fnc_phone_next_page = {
    _display = findDisplay -1;
    _ctrls = allControls _display;
    {
        //Hide current Images and buttons
        if(ctrlClassName _x == "Life_RscInvisibleButton" || ctrlClassName _x == "Life_RscPicture" && ctrlIDC _x != 1623) then {_x ctrlShow false; _x ctrlCommit 0;};
    }  forEach _ctrls;
    _data  = [Orion_Life_Phone_Config, (Orion_Life_Phone_Grid_Width*Orion_Life_Phone_Grid_Height) * (phoneUiPage + 1)] call BIS_fnc_subSelect;
    [Orion_Life_Phone_Grid_Width,Orion_Life_Phone_Grid_Height,_data, _display] call fnc_phone_generic_grid;
    phoneUiPage =  phoneUiPage + 1;
 
    _pB = _display displayCtrl 1222;
    _nB = _display displayCtrl 1223;
    _pB ctrlShow true;
    _pB ctrlCommit 0;
    if(count Orion_Life_Phone_Config < (3*6) * (phoneUiPage + 1)) then {_nB ctrlShow false; _nB ctrlCommit 0; };
};
 
 
/*
Purpose: For when the user has more than one page worth of icons, figures out how many pages in we are and switches to the 'previous' Page
*/
fnc_phone_previous_page = {
    _display = findDisplay -1;
    _ctrls = allControls _display;
    {
        //Hide current Images and buttons
        if(ctrlClassName _x == "Life_RscInvisibleButton" || ctrlClassName _x == "Life_RscPicture" && ctrlIDC _x != 1623) then {_x ctrlShow false; _x ctrlCommit 0;};
    }  forEach _ctrls;
    _data = [Orion_Life_Phone_Config, ((Orion_Life_Phone_Grid_Width*Orion_Life_Phone_Grid_Height) * (phoneUiPage - 1))] call BIS_fnc_subSelect;
    [Orion_Life_Phone_Grid_Width,Orion_Life_Phone_Grid_Height,_data, _display] call fnc_phone_generic_grid;
    phoneUiPage = phoneUiPage - 1;
 
    _pB = _display displayCtrl 1222;
    _nB = _display displayCtrl 1223;
    if(phoneUiPage == 0) then {_pB ctrlShow false; _pB ctrlCommit 0;};
    _nB ctrlShow true;
    _nB ctrlCommit 0;
};
 
/*
Purpose: Modular Grid maker for the pages and phone init, cleaner, less code, less broken, thanks Arma!
Method Signature (X, Y, Config, Display)
*/
fnc_phone_generic_grid = {
    _gridWidth = _this select 0;
    _gridHeight = _this select 1;
    _config = _this select 2;
    _display = _this select 3;
 
    _width = (Orion_Life_Phone_SizeOfImage / 1000) * safeZoneW;
    _height = ((Orion_Life_Phone_SizeOfImage / 1000) * safeZoneW) * (4/3);
    _index = 0;
    scopeName "Main";
    for [{_i=0}, {_i<_gridHeight}, {_i= _i + 1}] do {
        for [{_j=0}, {_j<_gridWidth}, {_j=_j+1}] do {
 
            _currentConfig = _config select _index;
            
            
            if(_index >= (count _config)) then {breakOut "Main"};
 
            if(_currentConfig select 4 == "") then { _currentConfig set [4, "true"];};
 
            if(call compile (_currentConfig select 4)) then {
                diag_log("Here?");
                _image = _display ctrlCreate ["Life_RscPicture", -1];
                _image ctrlSetPosition [(Orion_Life_Phone_StartPos select 0) + ((_width + Orion_Life_Phone_Padding) * _j),             //X
                                        (Orion_Life_Phone_StartPos select 1) + ((_height  + (Orion_Life_Phone_Padding * (4/3))) * _i), //Y
                                        _width,                                                                                        //W
                                        _height];                                                                                      //H
                _image ctrlSetText (_currentConfig select 3);
                _image ctrlCommit 0;
 
                _button = _display ctrlCreate ["Life_RscInvisibleButton", -1];
                _button ctrlSetPosition [(Orion_Life_Phone_StartPos select 0) + ((_width + Orion_Life_Phone_Padding) * _j),            //X
                                        (Orion_Life_Phone_StartPos select 1) + ((_height  + (Orion_Life_Phone_Padding * (4/3))) * _i), //Y
                                        _width,                                                                                        //W
                                        _height];                                                                                      //H
                _button buttonSetAction (_currentConfig select 1);
                _button ctrlSetTooltip (_currentConfig select 2);
                _button ctrlCommit 0;
 
                _index = _index + 1;
            };
        };
    };
};