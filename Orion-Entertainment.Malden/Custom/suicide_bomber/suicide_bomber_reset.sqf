//if(!isServer) exitWith{};

//the suicide bomber
_bomber = _this select 0;

if ((!isDedicated) && (_bomber != player)) then
{
  waitUntil {_bomber == player};
};

//removeAllActions _bomber;
_release_action = _bomber getVariable "DeadMansSwitch_Release_Action";
_bomber removeAction _release_action;
				//
_cancel_action = _bomber getVariable "DeadMansSwitch_Cancel_Action";
_bomber removeAction _cancel_action;

//_bomber removeAllEventHandlers "Killed";
_killed_event = _bomber getVariable "DeadMansSwitch_Killed_Event";
_bomber removeAllEventHandlers["Killed", _killed_event];

_suicide_bomber_respawn_id = _bomber getVariable "Suicide_Bomber_Respawn_Event";
_bomber removeEventHandler["Respawn", _suicide_bomber_respawn_id];

_bomber setVariable["DeadMansSwitch", nil];
_bomber setVariable["is_dead_man", "false"];

_bomber setVariable["DeadMansSwitch_Release", "disabled"];
_bomber setVariable["DeadMansSwitch_Release_Action", nil];
		
_bomber setVariable["DeadMansSwitch_Cancel", "disabled"];
_bomber setVariable["DeadMansSwitch_Cancel_Action", nil];
		
_bomber setVariable["AllahuAkbar", nil];

_bomber execVM "scripts\suicide_bomber\suicide_bomber.sqf";