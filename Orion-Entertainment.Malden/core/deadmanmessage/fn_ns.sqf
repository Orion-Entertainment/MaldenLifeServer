#include <macro.h>
/*
    Author: Travis Butts Edited by : Austin carlile
 	Desc: A new notification System
 	For: Red Line Gaming [RLG]
 	How to call: ["This is the message it will display!","#HEXCOLOR"] spawn RLG_fnc_RLGNotificationSystem;
 */
private ["_title", "_new", "_final", "_i"];
params ["_msg", "_color"];

_title = "<t align = 'center' shadow = '1' size='1.3' font='PuristaBold'>Orion-Entertainment<br />NOTIFICATION SYSTEM</t>";
_new = "<br /><br /><t align = 'center' shadow = '1' size='1' font='PuristaBold'>NEWEST MESSAGE</t>";
_i = 0;
_final = "";

life_lastMessages = [[_msg,_color]] + life_lastMessages;

{
  if(_i < 1) then {
    _final = format["<br /><br /><t align='center' color='%2'>%1</t>",_x select 0,_x select 1] + _final;
    if(_i == 0) then {
      _final = _new + _final;
    };
    _i = _i + 1;
  };
} forEach life_lastMessages;

hint parseText (_title + _final);

if(count(life_lastMessages) > 1) then { life_lastMessages = []; };
  _rscLayer = "osefStatusBar" call BIS_fnc_rscLayer;
  _rscLayer cutRsc["osefStatusBar","PLAIN"];