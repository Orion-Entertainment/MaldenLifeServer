/**
 * Copyright © 2018 Shadow King (76561198094478387), Further Edited IEthanHD (76561198082881619) 
 */


params ["_unit"];
diag_LOG "ENTERED";
SOMEVAR = false;
IEthanHD_MedicRequested = false;
IEthanHD_DeathscreenObject = _unit;
life_respawned = false;
diag_log "Lauching Deathscreen Function";

(findDisplay 7300) displaySetEventHandler ["KeyDown","if ((_this select 1) isEqualTo 1) then {true}"]; //Block the ESC menu
(findDisplay 7300) displaySetEventHandler ["KeyDown","if ((_this select 1) isEqualTo 207) then {false}"]; //--- Block The End Key

    disableSerialization;
    _display = uiNamespace getVariable ["Life_Death_Screen",displayNull];

    if(isNull _display)then{createDialog "Deathscreen"};

    _Progress = _display displayCtrl 99532;
    _ProgressText = _display displayCtrl 99533;
    _Progress progressSetPosition 1;
	_ProgressText ctrlSetText "WAITING FOR RESPAWN";
    _NearestMedicControl = _display displayCtrl 955325;
    _ForceRespawnTimer = 0;
    _RespawnTimer = 0;
    _RequestTimer = 0;
    life_is_alive = false;
	_ForceRespawnCounter = getNumber(missionConfigFile >> "DeathscreenSettings" >> "ForceRespawn");
    _text = [(_ForceRespawnCounter - _ForceRespawnTimer),"MM:SS"] call BIS_fnc_secondsToString;
    _textFormat = format ["<t align='center'>Force Respawn Available In</t>",_text];
    _ProgressText ctrlSetStructuredText parseText format["%1",_textFormat];

    while{true}do{

        if(life_is_alive || life_respawned || SOMEVAR)exitWith{
            systemChat "Welcome Back To Life";
            IEthanHD_DeathscreenObject = objNull;
        };
        
        _ForceRespawnCounter = getNumber(missionConfigFile >> "DeathscreenSettings" >> "ForceRespawn");
        _ProgressPerPercent = (1/_ForceRespawnCounter);
        _currentPercent = 1-(_ForceRespawnTimer * _ProgressPerPercent);
        _RespawnTimerCounter = getNumber(missionConfigFile >> "DeathscreenSettings" >> "RespawnTimer");
        _timeBetweenRequestCounter = getNumber(missionConfigFile >> "DeathscreenSettings" >> "timeBetweenRequest");
		
        if(_ForceRespawnTimer >= _ForceRespawnCounter) exitWith {
            diag_log format ["%1",buttonAction _BtnRespawn];
            _BtnRespawn ctrlEnable true;
			
            if(life_is_alive || life_respawned || SOMEVAR)exitWith{
                systemChat "Welcome Back To Life";
                IEthanHD_DeathscreenObject = objNull;
            }; 
			
            closeDialog 0;
            diag_log "Exiting Deathscreen Function";
            closeDialog 0;
            life_respawned = true;
            sleep 1;
            [] call life_fnc_spawnMenu;
            IEthanHD_DeathscreenObject = objNull;
        };
		
        if(_RespawnTimer >= _RespawnTimerCounter) then {
		  if !(life_is_alive) then {
             _BtnRespawn ctrlEnable true;
		     _ProgressText ctrlSetText localize "STR_Medic_Respawn_2";
		     IRT_CanRespawn = true;
			 (findDisplay 7300) displaySetEventHandler ["KeyDown","if ((_this select 1) isEqualTo 207) then {false}"]; //--- Unblock The End Key
            };
		};			
		
		
        _ForceRespawnTimer = _ForceRespawnTimer + 1;
        _RespawnTimer = _RespawnTimer + 1;
        _RequestTimer = _RequestTimer + 1;
        //Medics Online Section.
        _medics = [];
        {
            _medicsOnline = {_x != player && {side _x isEqualTo independent} && {alive _x}} count playableUnits > 0;
            if(_medicsOnline)then{
                {
                    if(_x != player && side _x isEqualTo independent && alive _x)then{
                        _medics pushBack _x;
                    };
                }forEach playableUnits;
            }else{
                {
                    if(_x != player && side _x isEqualTo west && alive _x)then{
                        _medics pushBack _x;
                    };
                }forEach playableUnits;
            };
        }forEach playableUnits;
        _NearestMedic = objNull;
        _NearestMedicDistance = 9999999999;
        {
            _distance = IEthanHD_DeathscreenObject distance _x;
            if(isNull _NearestMedic)then{
                _NearestMedic = _x;
                _NearestMedicDistance = _distance;
            }else{
                if(_distance < _NearestMedicDistance)then{
                    _NearestMedic = _x;
                    _NearestMedicDistance = _distance;
                };
            };
        }forEach _medics;
        _Progress progressSetPosition _currentPercent;
        _NearMedictext = "No Medics Nearby";
        if(isNull _NearestMedic)then{
            _NearMedictext = "<t align='center' size='1.5px'>No Medics online</t>";
        }else{
            _MedicName = name _NearestMedic;
            _MedicDistance = IEthanHD_DeathscreenObject distance _NearestMedic;
            _MedicSpeed = speed _NearestMedic;
            _NearMedictext = format ["<t align='center'>Nearest Medic</t><br/><t align='Left'>Name</t><t align='Right'>%1</t><br/><t align='Left'>Distance</t><t align='Right'>%2</t><br/><t align='Left'>Speed</t><t align='Right'>%3</t><br/>",_MedicName,_MedicDistance,_MedicSpeed];
        };
        _NearestMedicControl ctrlSetStructuredText parseText format["%1",_NearMedictext];
        sleep 1;
        if(life_is_alive || life_respawned || SOMEVAR)exitWith{
            systemChat "Welcome Back To Life";
            IEthanHD_DeathscreenObject = objNull;
    };
};





