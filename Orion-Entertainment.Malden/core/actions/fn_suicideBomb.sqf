#include "..\..\script_macros.hpp"
/*
    ALAH SNACKBAR!
    Tim is bae, hopefully this code works, I haven't done arma 3 sqfs in years
*/
private["_boom"];

// Pre-checks
if(vest player != "V_HarnessOGL_gry" || player getVariable "restrained" || player getVariable "zipted") exitWith {};

if(isNil {player getVariable "is_dead_man"} || player getVariable "is_dead_man" isEqualTo false) then { // If no switch set, set to true and listen for death to explode
  player setVariable["is_dead_man", true];
	player addEventHandler ["killed", {
    // The below line of code is caught by fn_onPlayerKilled, where a check is done to see if the player var exsists, if so, create an explosion and set to false.
    player setVariable["needs_suicide_action", true]; // Im a fucking genius.
    player setVariable["is_dead_man", false];
	}];
  hint "Dead Man's Switch has been enabled! I will blow up when killed or on your next command!";
} else {
  if((player getVariable "is_dead_man") isEqualTo true) then { // If switch already set, insta-explode
    player removeEventHandler ["killed", 0]; // Remove event handler, may cause conflicts!
    player setVariable["is_dead_man", false];
    // ------------------- Begin explosion code -----------------------------
    [player,"akbar"] remoteExec ["life_fnc_say3D",RANY];
    sleep 1;
    removeVest player;
    removeAllWeapons player:
    removeAllAssignedItems player;
    _boom = "Bo_Mk82" createVehicle [0,0,9999];
    _boom setPos (getPos player);
    _boom setVelocity [100,0,0];
    if(alive player) then {player setDamage 1;};
    player setVariable["zipted", false, true];
    player setVariable["restrained", false, true];
    [] call SOCK_fnc_updateRequest;
    [0,format["BREAKING NEWS: A suicide vest was detonated by %1!",profileName]] remoteExec ["life_fnc_broadcast",0];
    // ------------------- End explosion code -----------------------------
  };
};

