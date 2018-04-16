/*
    File: Cleanup.sqf
    Author: Flabby "http://steamcommunity.com/id/FlabbyButt/"

    Description:
    Deletes luggage after it has been dropped for 10 minutes
	
	ToDo:
	Delete other items that get dropped when you die
*/
while {true} do
{
	sleep 60;
	{
		if (player in _x) then {
			_x setVariable["CurrentTime",serverTime];
			diag_log format["Added Var to - %1",_x];
		};
		//Delete things older than 1 minute
		if (serverTime - (_x getVariable "CurrentTime") > 60) then {
			deleteVehicle _x; 
			diag_log format["Deleted - %1",_x];
		};
	} forEach allMissionObjects "";
	diag_log format["Cleanup ran - serverTime = %1",serverTime];
};

//_obj setVariable["CurrentTime",serverTime];