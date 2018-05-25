/*
	File: fn_DeadmanSwitch.sqf
	Author: Cobra
	www.rlgroleplay.com
	
	Description:
	Activates/deactivates a suicide vest dead man switch.
*/
private["_explosion"];
if(!(vest player in ["V_HarnessOGL_gry"])) exitWith {};

if (life_suicidedeadman == 1) exitWith {
life_suicidedeadman = 0; 
["Deadman switch disengaged.","#d32df0"] spawn RLG_fnc_RLGNotificationSystem;
};

life_suicidedeadman = 1; 
["Deadman switch engaged.","#d32df0"] spawn RLG_fnc_RLGNotificationSystem;

waitUntil {
!(vest player in ["V_HarnessOGL_gry"]) or !(alive player)
};
    if (life_suicidedeadman == 1) exitWith {
	life_suicidedeadman = 0;  
    [[1,format["Malden NEWS: A SUICIDE BOMB WAS JUST DETONATED!",_storename]],"life_fnc_broadcast",civilian,false] spawn life_fnc_MP;
    [[1,format["Malden NEWS: A SUICIDE BOMB WAS JUST DETONATED!",_storename]],"life_fnc_broadcast",civilian,false] spawn life_fnc_MP;
    [[1,format["Malden NEWS: A SUICIDE BOMB WAS JUST DETONATED!",_storename]],"life_fnc_broadcast",independent,false] spawn life_fnc_MP;
    [[1,format["Malden NEWS: A SUICIDE BOMB WAS JUST DETONATED!",_storename]],"life_fnc_broadcast",west,false] spawn life_fnc_MP;
	_explosion = "Bo_Mk82" createVehicle [0,0,9999];
    _explosion setPos (getPos player);
    _explosion setVelocity [100,0,0];
    removeVest player;
    removeHeadgear player:
    removeGoggles player;
    removeVest player;
    removeBackpack player;
    removeUniform player;
    removeAllWeapons player:
    removeAllAssignedItems player;
    if(alive player) then {
	player setDamage 1;
	};
};
    [] call SOCK_fnc_updateRequest;