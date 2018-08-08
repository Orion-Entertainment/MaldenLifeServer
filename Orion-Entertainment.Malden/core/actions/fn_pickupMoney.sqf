#include "..\..\script_macros.hpp"
/*
	File: fn_pickupMoney.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Picks up money
*/
if((time - life_action_delay) < 1.5) exitWith {
	["You can't rapidly use action keys!",false,"slow"] call life_fnc_notificationSystem;
	if(!isNil {(_this select 0) getVariable "inUse"}) then {
		_this select 0 setVariable["inUse",false,true];
	};
};
private["_obj","_val"];
_obj = param [0,ObjNull,[ObjNull]];
_val = (_obj getVariable "item") select 1;
if(isNil {_val}) exitWith {};
if(isNull _obj || player distance _obj > 3) exitWith {if(!isNull _obj) then {_obj setVariable["inUse",false,true];};};
if((_obj getVariable["PickedUp",false])) exitWith {deleteVehicle _obj;};
_obj setVariable["PickedUp",TRUE,TRUE];
if(!isNil {_val}) then {
	deleteVehicle _obj;

	player playMove "AinvPknlMstpSlayWrflDnon";
    titleText[format [localize "STR_NOTF_PickedMoney",[_val] call life_fnc_numberText],"PLAIN"];
    findNearestPerson = findNearestPerson + _val;
    [0] call SOCK_fnc_updatePartial;
	/* Log Data */
	private _LogData = [
		"Pickup",
		getPlayerUID player,
		[_val] call life_fnc_numberText
	];
	["Log",_LogData] remoteExec ["DB_fnc_logData",RSERV];

	life_action_delay = time;
};
[] spawn life_fnc_pickupItems;