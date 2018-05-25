//the suicide bomber
_bomber = _this select 0;

if((_bomber getVariable "is_dead_man") == "false") then {
	//Check if player dies
	_killed_event_id = _bomber addEventHandler ["Killed", {
		_pl = _this select 0;
		_pl execVM "scripts\suicide_bomber\allahu_akbar.sqf";
		}];
	
	_bomber setVariable["DeadMansSwitch_Killed_Event", _killed_event_id];
	
	//Remove Dead Man's Switch
	_id = _bomber getVariable "DeadMansSwitch";
	_bomber removeAction (_id);
	
	_id2 = _bomber getVariable "AllahuAkbar";
	_bomber removeAction (_id2);
	
	//Add 'release' and 'cancel' actions
	_perform_deadmansswitch_release_action = _bomber addAction["<t color='#FF0000'>Release Switch</t>", "scripts\suicide_bomber\dead_mans_switch_release.sqf"];
	_bomber setVariable["DeadMansSwitch_Release_Action", _perform_deadmansswitch_release_action];
	_bomber setVariable["DeadMansSwitch_Release", "enabled"];
	
	_perform_deadmansswitch_cancel_action = _bomber addAction["<t color='#FF0000'>Reset Switch Pin</t>", "scripts\suicide_bomber\dead_mans_switch_cancel.sqf"];
	_bomber setVariable["DeadMansSwitch_Cancel_Action", _perform_deadmansswitch_cancel_action];
	_bomber setVariable["DeadMansSwitch_Cancel", "enabled"];
	
	_bomber setVariable["is_dead_man", "true"];
	
	hint "Dead Man's Switch has been turned on!";
	sleep 4;
	hint "";
}
