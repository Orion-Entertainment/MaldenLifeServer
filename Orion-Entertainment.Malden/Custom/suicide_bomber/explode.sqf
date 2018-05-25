//if (!hasInterface || isServer) exitWith {};

//the suicide _bomber
_bomber = _this select 0; //player;

if ((!isDedicated) && (_bomber != player)) then
{
  waitUntil {_bomber == player};
};

_explodeFunc = {
	//suicide action
	"Bo_GBU12_LGB_MI10" createVehicle getPos _bomber;

	_bomber setdammage 1;
};

_explode = {
	_bomber say3D "allahu"; //_bomber say "allahu1";
	sleep 1.7;
	call _explodeFunc;
};

_immediate_explode = {
	call _explodeFunc;
};

if((_bomber getVariable "is_dead_man") == "true") then {
	call _immediate_explode;
	//Remove EventHandler from player
	//_bomber removeAllEventHandlers "Killed";
	_bomber setVariable["is_dead_man", "false"];
}
else {
	call _explode;
}

