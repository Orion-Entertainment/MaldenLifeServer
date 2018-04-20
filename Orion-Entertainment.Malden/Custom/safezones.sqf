private ["_eh1","_inArea","_zone1","_zone2","_zone3","_zone4","_zone5","_zone6","_zone7","_zone8","_zone9","_zone10","_zone11","_zone12","_zone1dis","_zone2dis","_zone3dis","_zone4dis","_zone5dis","_zone6dis","_zone7dis","_zone8dis","_zone9dis","_zone10dis","_zone11dis","_zone12dis","_dis"];

// MARKERS FOR SAFEZONE
_zone1 = getMarkerPos "safezone_port";
_zone2 = getMarkerPos "safezone_Trinite";
_zone3 = getMarkerPos "safezone_Pessagne";
_zone4 = getMarkerPos "safezone_ter1";
_zone5 = getMarkerPos "safezone_reb1";
_zone6 = getMarkerPos "safezone_air1";
_zone7 = getMarkerPos "safezone_gun1";
_zone8 = getMarkerPos "safezone_gun2";
_zone9 = getMarkerPos "safezone_Don";
_zone10 = getMarkerPos "Medic_HQ1";
_zone11 = getMarkerPos "Medic_HQ2";
_zone12 = getMarkerPos "Medic_HQ3";

_zone1dis = 200;
_zone2dis = 125;
_zone3dis = 125;
_zone4dis = 250;
_zone5dis = 250;
_zone6dis = 150;
_zone7dis = 75;
_zone8dis = 75;
_zone9dis = 100;
_zone10dis = 75;
_zone11dis = 75;
_zone12dis = 75;

_dis = 350;
_inArea = false;

switch (playerSide) do
{
	case west:
	{
		while {true} do
		{
			if (alive player) then
			{
				if (((_zone1 distance player < _zone1dis) || (_zone2 distance player < _zone2dis) || (_zone3 distance player < _zone3dis) || (_zone4 distance player < _zone4dis) || (_zone5 distance player < _zone5dis) || (_zone6 distance player < _zone6dis) || (_zone7 distance player < _zone7dis) || (_zone8 distance player < _zone8dis) || (_zone9 distance player < _zone9dis) || (_zone10 distance player < _zone10dis) || (_zone11 distance player < _zone11dis) || (_zone12 distance player < _zone12dis)) && (!_inArea)) then
				{
					_inArea = true;
					[localize "STR_SafezoneEnter",false,"slow"] call life_fnc_notificationSystem;
					player allowDamage false;
					safezone = true;
				};
				if (((_zone1 distance player > _zone1dis) && (_zone2 distance player > _zone2dis) && (_zone3 distance player > _zone3dis) && (_zone4 distance player > _zone4dis) && (_zone5 distance player > _zone5dis) && (_zone6 distance player > _zone6dis) && (_zone7 distance player > _zone7dis) && (_zone8 distance player > _zone8dis) && (_zone9 distance player > _zone9dis) && (_zone10 distance player > _zone10dis) && (_zone11 distance player > _zone11dis) && (_zone12 distance player > _zone12dis)) && (_inArea)) then
				{
					_inArea = false;
					[localize "STR_SafezoneLeave",false,"slow"] call life_fnc_notificationSystem;
					player allowDamage true;
					safezone = false;
				};

			};
		};
	};

	case civilian:
	{
		while {true} do
		{
			if (alive player) then
			{
				if (((_zone1 distance player < _zone1dis) || (_zone2 distance player < _zone2dis) || (_zone3 distance player < _zone3dis) || (_zone4 distance player < _zone4dis) || (_zone5 distance player < _zone5dis) || (_zone6 distance player < _zone6dis) || (_zone7 distance player < _zone7dis) || (_zone8 distance player < _zone8dis) || (_zone9 distance player < _zone9dis) || (_zone10 distance player < _zone10dis) || (_zone11 distance player < _zone11dis) || (_zone12 distance player < _zone12dis)) && (!_inArea)) then
				{
					_eh1 = player addEventHandler ["fired", {deleteVehicle (_this select 6);}];
					_inArea = true;
					[localize "STR_SafezoneEnter",false,"slow"] call life_fnc_notificationSystem;
					player allowDamage false;
					safezone = true;
				};
				if (((_zone1 distance player > _zone1dis) && (_zone2 distance player > _zone2dis) && (_zone3 distance player > _zone3dis) && (_zone4 distance player > _zone4dis) &&(_zone5 distance player > _zone5dis) && (_zone6 distance player > _zone6dis) && (_zone7 distance player > _zone7dis) && (_zone8 distance player > _zone8dis) && (_zone9 distance player > _zone9dis) && (_zone10 distance player > _zone10dis) && (_zone11 distance player > _zone11dis) && (_zone12 distance player > _zone12dis)) && (_inArea)) then
				{
					player removeEventHandler ["fired", _eh1];
					_inArea = false;
					[localize "STR_SafezoneLeave",false,"slow"] call life_fnc_notificationSystem;
					player allowDamage true;
					safezone = false;
				};

			};
		};
	};

	case independent:
	{
		while {true} do
		{
			if (alive player) then
			{
				if (((_zone1 distance player < _zone1dis) || (_zone2 distance player < _zone2dis) || (_zone3 distance player < _zone3dis) || (_zone4 distance player < _zone4dis) || (_zone5 distance player < _zone5dis) || (_zone6 distance player < _zone6dis) || (_zone7 distance player < _zone7dis) || (_zone8 distance player < _zone8dis) || (_zone9 distance player < _zone9dis) || (_zone10 distance player < _zone10dis) || (_zone11 distance player < _zone11dis) || (_zone12 distance player < _zone12dis)) && (!_inArea)) then
				{
					_inArea = true;
					[localize "STR_SafezoneEnter",false,"slow"] call life_fnc_notificationSystem;
					player allowDamage false;
					safezone = true;
					imAuto = false;
				};
				if (((_zone1 distance player > _zone1dis) && (_zone2 distance player > _zone2dis) && (_zone3 distance player > _zone3dis) && (_zone4 distance player > _zone4dis) &&(_zone5 distance player > _zone5dis) && (_zone6 distance player > _zone6dis) && (_zone7 distance player > _zone7dis) && (_zone8 distance player > _zone8dis) && (_zone9 distance player > _zone9dis) && (_zone10 distance player > _zone10dis) && (_zone11 distance player > _zone11dis) && (_zone12 distance player > _zone12dis)) && (_inArea)) then
				{
					_inArea = false;
					[localize "STR_SafezoneLeave",false,"slow"] call life_fnc_notificationSystem;
					player allowDamage true;
					safezone = false;
					imAuto = true;
				};

			};
		};
	};
	sleep 3;
};
