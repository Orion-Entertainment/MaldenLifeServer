//if(!isServer) exitWith{};

if ((!isDedicated) && (player != player)) then
{
  waitUntil {player == player};
};
//the suicide bomber
_bomber = player;

_explosives = ["SatchelCharge_Remote_Mag","ATMine_Range_Mag","APERSMine_Range_Mag","APERSBoundingMine_Range_Mag","SLAMDirectionalMine_Wire_Mag","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag","DemoCharge_Remote_Mag","IEDUrbanBig_Remote_Mag","IEDLandBig_Remote_Mag","IEDUrbanSmall_Remote_Mag","IEDLandSmall_Remote_Mag","HandGrenade","MiniGrenade","HandGrenade_Stone"];

_respawn_event_id = _bomber addEventHandler["Respawn", {[player] execVM "scripts\suicide_bomber\suicide_bomber_reset.sqf"}];
_bomber setVariable["Suicide_Bomber_Respawn_Event", _respawn_event_id];

_perform_bombing_action = nil;
_perform_deadmansswitch_action = nil;

_setup_actions = {
	_perform_bombing_action = _bomber addAction["<t color='#FF0000'>Allahu Akbar</t>", "scripts\suicide_bomber\allahu_akbar.sqf"];
	_perform_deadmansswitch_action = _bomber addAction["<t color='#FF0000'>Dead Man's Switch</t>", "scripts\suicide_bomber\dead_mans_switch_exec.sqf"];
		
	_bomber setVariable["DeadMansSwitch", _perform_deadmansswitch_action];
	_bomber setVariable["is_dead_man", "false"];
		
	_bomber setVariable["DeadMansSwitch_Release", "disabled"];
	_bomber setVariable["DeadMansSwitch_Release_Action", nil];
		
	_bomber setVariable["DeadMansSwitch_Cancel", "disabled"];
	_bomber setVariable["DeadMansSwitch_Cancel_Action", nil];
		
	_bomber setVariable["AllahuAkbar", _perform_bombing_action];
};

_perform_check = {
	if(count (_explosives arrayIntersect magazines _bomber) > 0) then {
		//Player has explosives, set has explosive to true
		call _setup_actions;
	}
};

//suicide add action
while{true} do {
	sleep 1;
	_allVars = allVariables _bomber;
	
	//If the variables have been defined for the player
	if(("allahuakbar" in _allVars) && ("deadmansswitch" in _allVars)) then {
		//Declaring several crucial variables
		private _allah = _bomber getVariable "AllahuAkbar";
		private _dead = _bomber getVariable "DeadMansSwitch";
		
		private _release = _bomber getVariable "DeadMansSwitch_Release";
		private _release_action = _bomber getVariable "DeadMansSwitch_Release_Action";
		
		private _cancel = _bomber getVariable "DeadMansSwitch_Cancel";
		private _cancel_action = _bomber getVariable "DeadMansSwitch_Cancel_Action";
		//Done declaring
		
		if((!isNil "_release") && (!isNil "_cancel")) then {
			if((isNil "_release_action") && (isNil "_cancel_action")) then {
				//This means that they can't release or cancel the switch, here we put everything so it runs correctly
				
				//If the player has any explosives on them
				if("SatchelCharge_Remote_Mag" in (items _bomber + assignedItems _bomber + backpackitems _bomber + vestItems _bomber + uniformItems _bomber) || "ATMine_Range_Mag" in (items _bomber + assignedItems _bomber + backpackitems _bomber + vestItems _bomber + uniformItems _bomber) || "APERSMine_Range_Mag" in (items _bomber + assignedItems _bomber + backpackitems _bomber + vestItems _bomber + uniformItems _bomber) || "APERSBoundingMine_Range_Mag" in (items _bomber + assignedItems _bomber + backpackitems _bomber + vestItems _bomber + uniformItems _bomber) || "SLAMDirectionalMine_Wire_Mag" in (items _bomber + assignedItems _bomber + backpackitems _bomber + vestItems _bomber + uniformItems _bomber) || "APERSTripMine_Wire_Mag" in (items _bomber + assignedItems _bomber + backpackitems _bomber + vestItems _bomber + uniformItems _bomber) || "ClaymoreDirectionalMine_Remote_Mag" in (items _bomber + assignedItems _bomber + backpackitems _bomber + vestItems _bomber + uniformItems _bomber) || "DemoCharge_Remote_Mag" in (items _bomber + assignedItems _bomber + backpackitems _bomber + vestItems _bomber + uniformItems _bomber) || "IEDUrbanBig_Remote_Mag" in (items _bomber + assignedItems _bomber + backpackitems _bomber + vestItems _bomber + uniformItems _bomber) || "IEDLandBig_Remote_Mag" in (items _bomber + assignedItems _bomber + backpackitems _bomber + vestItems _bomber + uniformItems _bomber) || "IEDUrbanSmall_Remote_Mag" in (items _bomber + assignedItems _bomber + backpackitems _bomber + vestItems _bomber + uniformItems _bomber) || "IEDLandSmall_Remote_Mag" in (items _bomber + assignedItems _bomber + backpackitems _bomber + vestItems _bomber + uniformItems _bomber) || "HandGrenade" in (items _bomber + assignedItems _bomber + backpackitems _bomber + vestItems _bomber + uniformItems _bomber) || "MiniGrenade" in (items _bomber + assignedItems _bomber + backpackitems _bomber + vestItems _bomber + uniformItems _bomber) || "HandGrenade_Stone" in (items _bomber + assignedItems _bomber + backpackitems _bomber + vestItems _bomber + uniformItems _bomber)) then {
					if((isNil "_allah") && (isNil "_dead")) then {
						//They have the actions, but no ID has been defined to AllahuAkbar and DeadMansSwitch, call for a check.
						call _perform_check;
					}
				}
				else {
					//They no longer have explossives, remove actions and reset variables.
					_bomber removeAction _perform_bombing_action;
					_bomber removeAction _perform_deadmansswitch_action;
				
					_bomber setVariable["DeadMansSwitch", nil];
					_bomber setVariable["AllahuAkbar", nil];
				
					call _perform_check;
				}
			}
		}
	}
	else {
		//The specified strings is not in the players variables, call for a check and try to add the variables.
		call _perform_check;
	}
};