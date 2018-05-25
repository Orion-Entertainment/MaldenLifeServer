/*#include "..\..\script_macros.hpp"
/*
    ALAH SNACKBAR! 
*/
private["_boom", "_list"];
_player = player;
if(vest player != "V_HarnessOGL_gry") exitWith {};
if(life_isSuicide) exitWith {};
life_isSuiciding = true;

[player,"akbar"] remoteExec ["life_fnc_say3D",RANY];
sleep 1;


if(vest player != "V_HarnessOGL_gry") exitWith {life_isSuiciding = false;};
if((player getVariable "restrained")) exitWith {life_isSuiciding = false;}; //He's restrained.
if((player getVariable "zipted")) exitWith {life_isSuiciding = false;}; //He's restrained.

//BOOM    
removeVest player;
removeAllWeapons player:
removeAllAssignedItems player;
_boom = "Bo_Mk82" createVehicle [0,0,9999];
_boom setPos (getPos player);
_boom setVelocity [100,0,0];

if(alive player) then {player setDamage 1;};

life_isSuicide = false;

player setVariable["zipted", false, true];
player setVariable["restrained", false, true];
[] call SOCK_fnc_updateRequest;

[0,format["BREAKING NEWS: A suicide vest was detonated by %1!",profileName]] remoteExec ["life_fnc_broadcast",0];
*/
#include "..\..\script_macros.hpp"
/*
    ALAH SNACKBAR!
    Tim is bae, hopefully this code works, I haven't done arma 3 sqfs in years
*/
private["_boom", "_list"];
_player = player;

// Pre checks
if(vest player != "V_HarnessOGL_gry" || player getVariable "restrained" || player getVariable "zipted") exitWith {}; // If restrained, don't allow blow up.

// If switch not set, assign switch and listen for player death
if(player getVariable "is_dead_man" == "false") then {
  player setVariable["is_dead_man", "true"]; // Enable dead man

  // add an event listener for when the player dies, explode when occurs.
	player addEventHandler ["Killed", {
    // Explosion Begin - Advise you put this in its own script file and call it here, like so
    // execVM "location/to/the_below_code.sqf";
    // ------------------- Begin explosion code -----------------------------
    [player,"akbar"] remoteExec ["life_fnc_say3D",RANY]; // Play pre-suicide audio
    sleep 1; // Wait for audio to complete
    removeVest player;
    removeAllWeapons player:
    removeAllAssignedItems player;
    _boom = "Bo_Mk82" createVehicle [0,0,9999]; // Create bomb high up in the air
    _boom setPos (getPos player); // Repos bomb to player loc
    _boom setVelocity [100,0,0]; // Set bomb damage
    if(alive player) then {player setDamage 1;}; // Kill Player
    player setVariable["zipted", false, true];
    player setVariable["restrained", false, true];
    [] call SOCK_fnc_updateRequest;
    [0,format["BREAKING NEWS: A suicide vest was detonated by %1!",profileName]] remoteExec ["life_fnc_broadcast",0];
    // ------------------- End explosion code -----------------------------
	}];
  hint "Dead Man's Switch has been enabled! I will blow up when killed or on your next command!";
};

// If switch already enabled, blow up and remove previous event listener
if(player getVariable "is_dead_man" == "true") then {
  // remove the event handler previously set by the switch, might interfere with any other death events you have!
  // It may be possible for it to work wihtout the below line, depending on if the framework sorts any killed events out for you
  player removeEventHandler ["Killed", 0];

  // Explosion Begin - Advise you put this in its own script file and call it here, like so
  // execVM "location/to/the_below_code.sqf";
  // ------------------- Begin explosion code -----------------------------
  [player,"akbar"] remoteExec ["life_fnc_say3D",RANY]; // Play pre-suicide audio
  sleep 1; // Wait for audio to complete
  removeVest player;
  removeAllWeapons player:
  removeAllAssignedItems player;
  _boom = "Bo_Mk82" createVehicle [0,0,9999]; // Create bomb high up in the air
  _boom setPos (getPos player); // Repos bomb to player loc
  _boom setVelocity [100,0,0]; // Set bomb damage
  if(alive player) then {player setDamage 1;}; // Kill Player
  player setVariable["zipted", false, true];
  player setVariable["restrained", false, true];
  [] call SOCK_fnc_updateRequest;
  [0,format["BREAKING NEWS: A suicide vest was detonated by %1!",profileName]] remoteExec ["life_fnc_broadcast",0];
  // ------------------- End explosion code -----------------------------
};