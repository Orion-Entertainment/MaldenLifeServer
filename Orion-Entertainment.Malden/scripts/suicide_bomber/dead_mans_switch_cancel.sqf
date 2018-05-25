//if (!hasInterface || isServer) then exitWith {};

if ((!isDedicated) && (player != player)) then
{
  waitUntil {player == player};
};

_bomber = player;

//Blow up
_allVars = allVariables _bomber;
if(("deadmansswitch_release" in _allVars) && ("deadmansswitch_release_action" in _allVars)) then {
	//It's there
	private _release = _bomber getVariable "DeadMansSwitch_Release";
	private _release_action = _bomber getVariable "DeadMansSwitch_Release_Action";
	
	if((!isNil "_release_action")) then {
		//Release_Action has been defined
		if((!isNil "_release")) then {
			//Release has also been defined
			if(_release == "enabled") then {
				//Confirmed that the player has enabled the release of the Dead Man's Switch
				//Remove the Dead Man's Switch actions and start the regular check
				
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
				
				//_bomber execVM "scripts\suicide_bomber\suicide_bomber.sqf";
				
				_bomber setVariable["DeadMansSwitch", nil];
				_bomber setVariable["AllahuAkbar", nil];
				
				hint "The Dead Man's Switch has been turned off!";
				sleep 4;
				hint "";
			}
		}
	}
	else {
		//It has not been defined, they can't execute
	}
}