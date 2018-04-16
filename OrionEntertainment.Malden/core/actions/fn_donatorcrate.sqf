
private["_donatoritems","_ressource"];

_donatoritems = [

	"goldenbarz3",
	"volleyball",
	"marijuana",
	"relic1",
	"relic2",
	"campfire",
	"relic3",
	"relic4",
	"relicTransport",
	"relicFed",
	"diamond_cut",
	"speedbomb",
	"LSD",
	"flashlight",
	"prize",
	"airhorn"
];

_ressource = _donatoritems select floor random count _donatoritems;
[true,_ressource,1] call life_fnc_handleInv;

[player,"donatorcrate"] remoteexeccall ["say3D",0];
["You have been given a Crate, check your inventory!",false,"slow"] call life_fnc_notificationSystem;