
private["_damage","_health"];

closeDialog 0;
life_action_inUse = true;
player playMove "AinvPknlMstpSnonWnonDnon_medic_1";
uiSleep 1.5;
waitUntil {animationState player != "ainvpknlmstpsnonwnondnon_medic_1"};
life_action_inUse = false;
//if (vehicle player != player) exitWith { ["You cannot apply bandages in a vehicle.",false,"slow"] call life_fnc_notificationSystem;};
["You applied the bandage, you are starting to feel better.",false,"slow"] call life_fnc_notificationSystem;
sleep 3;

enableCamShake true;

for "_health" from 0 to 29 do
{
	while {damage player > 0.1} do  {
		_damage = damage player;          
		_damage = _damage - 0.05;        
		player setDamage (_damage);       
		[] call life_fnc_hudUpdate;      
		sleep 12;           
	};  
};

resetCamShake;