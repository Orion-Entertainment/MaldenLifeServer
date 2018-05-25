//if (!hasInterface || isServer) then exitWith {};

if ((!isDedicated) && (player != player)) then
{
  waitUntil {player == player};
};

_bomber = player;

_bomber say3D "allahu"; //_bomber say "allahu1";
sleep 1.7;
_bomber execVM "scripts\suicide_bomber\allahu_akbar.sqf";

//removeAllActions _bomber;
_release_action = _bomber getVariable "DeadMansSwitch_Release_Action";
_bomber removeAction _release_action;
				
_cancel_action = _bomber getVariable "DeadMansSwitch_Cancel_Action";
_bomber removeAction _cancel_action;
				
_bomber setVariable["DeadMansSwitch_Release", "disabled"];
_bomber setVariable["DeadMansSwitch_Release_Action", nil];
//Cancel & Release
_bomber setVariable["DeadMansSwitch_Cancel", "disabled"];
_bomber setVariable["DeadMansSwitch_Cancel_Action", nil];