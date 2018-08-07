#include "..\..\script_macros.hpp"
/*
    File: fn_playerTags.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Adds the tags above other players heads when close and have visible range.
*/
if (!life_settings_tagson) exitWith {};
private ["_ui","_units","_masks"];
#define iconID 78000
#define scale 0.8

if (visibleMap || {!alive player} || {dialog}) exitWith {
    500 cutText["","PLAIN"];
};

_ui = uiNamespace getVariable ["Life_HUD_nameTags",displayNull];
if (isNull _ui) then {
    500 cutRsc["Life_HUD_nameTags","PLAIN"];
    _ui = uiNamespace getVariable ["Life_HUD_nameTags",displayNull];
};

_units = nearestObjects[(visiblePosition player),["Man","Land_Pallet_MilBoxes_F","Land_Sink_F"],50];
//_units = _units - [player]; FOR TESTING

_masks = LIFE_SETTINGS(getArray,"clothing_masks");

private _index = -1;
{
    private ["_text"];
    _idc = _ui displayCtrl (iconID + _forEachIndex);
    if (!(lineIntersects [eyePos player, eyePos _x, player, _x]) && alive _x && {!isNil {_x getVariable "realname"}}) then {
        _pos = switch (typeOf _x) do {
            case "Land_Pallet_MilBoxes_F": {[visiblePosition _x select 0, visiblePosition _x select 1, (getPosATL _x select 2) + 1.5]};
            case "Land_Sink_F": {[visiblePosition _x select 0, visiblePosition _x select 1, (getPosATL _x select 2) + 2]};
            default {[visiblePosition _x select 0, visiblePosition _x select 1, ((_x modelToWorld (_x selectionPosition "head")) select 2)+.5]};
        };
        _sPos = worldToScreen _pos;
        _distance = _pos distance player;

        if (!isNil {_x getVariable "donator_lvl"}) then {
            _Colors = switch (_x getVariable "donator_lvl") do {
                case 1: {["ffbd30","c18f24"]};
                case 2: {["ffff00","cccc08"]};
                case 3: {["00ffe9","00ad9e"]};
                default {["a3a3a3","666666"]};
            };
        } else {
            _Colors = ["a3a3a3","666666"];
        };
        waitUntil {!isNil "_Colors"};

        if (count _sPos > 1 && {_distance < 15}) then {
            if ((headgear _x) in _masks || (goggles _x) in _masks || (uniform _x) in _masks) then {
                _text = format ["<t size='1' color='#a3a3a3'>MASKED</t><br/><t size='0.9' color='#%1'>%2</t>",_Colors select 1,getPlayerUID _x];
            } else {
                _text = format ["<t size='1' color='#%1'>%2</t><br/><t size='0.9' color='#%3'>%4</t>",_Colors select 0,_x getVariable ["realname",name _x],_Colors select 1,getPlayerUID _x];
            };

            if (_x getVariable ["speaking",false]) then {_text = "<t color='#e6e6e6'>[Speaking] " + _text;};
            _idc ctrlSetStructuredText parseText _text;
            _idc ctrlSetPosition [_sPos select 0, _sPos select 1, 0.4, 0.65];
            _idc ctrlSetScale scale;
            _idc ctrlSetFade 0;
            _idc ctrlCommit 0;
            _idc ctrlShow true;
        };
    } else {
        _idc ctrlShow false;
    };
    _index = _forEachIndex;
} forEach _units;
(_ui displayCtrl (iconID + _index + 1)) ctrlSetStructuredText parseText "";