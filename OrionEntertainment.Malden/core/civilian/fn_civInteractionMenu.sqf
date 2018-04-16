#include "..\..\script_macros.hpp"
/*
    File: fn_copInteractionMenu.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Replaces the mass addactions for various cop actions towards another player.
*/
#define Btn1 37450
#define Btn2 37451
#define Btn3 37452
#define Btn4 37453
#define Btn5 37454
#define Btn6 37455
#define Btn7 37456
#define Btn8 37457
#define Title 37401

private ["_display","_curTarget","_seizeRank","_Btn1","_Btn2","_Btn3","_Btn4","_Btn5","_Btn6","_Btn7","_Btn8"];

disableSerialization;
_curTarget = param [0,objNull,[objNull]];
_seizeRank = LIFE_SETTINGS(getNumber,"seize_minimum_rank");

if (player getVariable ["Escorting", false]) then {
    if (isNull _curTarget) exitWith {closeDialog 0;}; //Bad target
    if (!isPlayer _curTarget && side _curTarget isEqualTo civilian) exitWith {closeDialog 0;}; //Bad side check?
    if (player distance _curTarget > 4 ) exitWith {closeDialog 0;}; // Prevents menu accessing from far distances.
};

if (!dialog) then {
    createDialog "pInteraction_Menu";
};

_display = findDisplay 37400;
_Btn1 = _display displayCtrl Btn1;
_Btn2 = _display displayCtrl Btn2;
_Btn3 = _display displayCtrl Btn3;
_Btn4 = _display displayCtrl Btn4;
_Btn5 = _display displayCtrl Btn5;
_Btn6 = _display displayCtrl Btn6;
_Btn7 = _display displayCtrl Btn7;
_Btn8 = _display displayCtrl Btn8;
life_pInact_curTarget = _curTarget;

if (player getVariable ["isEscorting",false]) then {
    { _x ctrlShow false; } forEach [_Btn1,_Btn2,_Btn4,_Btn5,_Btn6];
    _Btn3 ctrlEnable true;			
};

if (player getVariable ["isEscorting",false]) then {
    _Btn3 ctrlSetText localize "STR_pInAct_StopEscort";
    _Btn3 buttonSetAction "[] call life_fnc_stopEscorting; closeDialog 0;";
} else {
    _Btn3 ctrlSetText localize "STR_pInAct_Escort";
    _Btn3 buttonSetAction "[life_pInact_curTarget] call life_fnc_escortAction; closeDialog 0;";
};

_Btn4 ctrlSetText localize "STR_pInAct_PutInCar";
_Btn4 buttonSetAction "[life_pInact_curTarget] call life_fnc_putInCar;";

//SeizeWeapons Button
_Btn5 ctrlSetText localize "STR_pInAct_Seize";
_Btn5 buttonSetAction "[] remoteExecCall [""life_fnc_removeWeaponAction"",life_pInact_curTarget]; closeDialog 0;";

if ((_curTarget getVariable ["blindfolded", false])) then {
    _Btn2 ctrlSetText "Remove blindfold";
    _Btn2 buttonSetAction "[] call life_fnc_untieb; closeDialog 0;";
} else {
    _Btn2 ctrlSetText "Blindfold Person";
    _Btn2 buttonSetAction "[] call life_fnc_tieingActionb; closeDialog 0;";
};

if ((_curTarget getVariable ["gagged", false])) then {
    _Btn6 ctrlSetText "Remove Gag";
    _Btn6 buttonSetAction "[] call life_fnc_removeGagAction; closeDialog 0;";
} else {
    _Btn6 ctrlSetText "Gag Person";
    _Btn6 buttonSetAction "[] call life_fnc_gagAction; closeDialog 0;";
};

if (!(_curTarget getVariable ["tied", false])) then {
    _Btn1 ctrlSetText "Ziptie Person";
    _Btn1 buttonSetAction "[] call life_fnc_tieingAction; closeDialog 0;";
    _Btn2 ctrlEnable false;
    _Btn4 ctrlEnable false;
    _Btn5 ctrlEnable false;
    _Btn6 ctrlEnable false;
	_Btn7 ctrlEnable false;
} else {
    _Btn1 ctrlSetText "Remove Zipties";
    _Btn1 buttonSetAction "[] call life_fnc_untie; closeDialog 0;";
};

if (side _curTarget isEqualTo west) then {
	_group = group _curTarget;
	_Btn7 ctrlSetText "Take Coms and GPS";
	_Btn7 buttonSetAction "[life_pInact_curTarget, _group] call life_fnc_ComRemoval;";
} else {
	_Btn7 ctrlShow false;
};


_Btn8 ctrlShow false;
