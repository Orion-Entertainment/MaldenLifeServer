/*
    File: fn_setupActions.sqf
    Author:

    Description:
    Master addAction file handler for all client-based actions.
*/
switch (playerSide) do {
    case civilian: {
        //Drop fishing net
        life_actions = [player addAction[localize "STR_pAct_DropFishingNet",life_fnc_dropFishingNet,"",0,false,false,"",'
        (surfaceisWater (getPos vehicle player)) && (vehicle player isKindOf "Ship") && life_carryWeight < life_maxWeight && speed (vehicle player) < 2 && speed (vehicle player) > -1 && !life_net_dropped ']];
        //Rob person
        life_actions = life_actions + [player addAction[localize "STR_pAct_RobPerson",life_fnc_robAction,"",0,false,false,"",'
        !isNull cursorObject && player distance cursorObject < 3.5 && isPlayer cursorObject && animationState cursorObject == "Incapacitated" && !(cursorObject getVariable ["robbed",false]) ']];
        //Gang
        life_actions = life_actions + [player addAction["<t color='#FF0000'>Capture Gang Location</t>",life_fnc_areaCapture,"",0,false,false,"",' ((typeOf cursorTarget) == "Flag_Red_F") ']];
        //job
        life_actions = life_actions + [player addAction ["Repair Near Objects",ADTC_fnc_Repair,"",0,false,false,"",'(player getVariable ["Job",""] == "Repair") &&(isnull objectParent player) ']];
        //ziptie
        life_actions = life_actions + [player addAction["Tie up player",life_fnc_tieingAction,"",0,false,false,"",'
        !isNull cursorObject && player distance cursorObject < 3.5 && isPlayer cursorObject && (cursorObject getVariable ["playerSurrender",false]) || animationState cursorObject == "Incapacitated"']];
        // take organs
    		//life_actions = life_actions + [player addAction [ "Harvest Organs", life_fnc_takeOrgans, "", 0, false, false, "", "! isNull cursor target && cursor target IsKindOf" Man "&& (isPlayer cursor target) && alive cursor target && cursor target distance player < 3.5 &&! (cursor target getVariable [ "missing organ", FALSE]) &&! (player getVariable "Escorting") &&! (player getVariable "hasOrgan") && (player getVariable "TRANSPORTING") && animation state cursor target == "Incapacitated" '! ]];
    };
    case west: {
  		life_actions pushBack (player addAction["<t color = '#ffff1a'>Police Speaker System</t>",life_fnc_policeSpeaker,"",7,false,false,"",' vehicle player != player ']);
  		life_actions = life_actions + [player addAction ["Remove Police Barrier",life_fnc_removePlaceable,"",0,false,false,"",'!isNull cursorTarget && (playerSide == west) && (cursorTarget getVariable ["placeable",false]) && !(animationState cursorTarget == "Incapacitated") && !(player getVariable["restrained",false])']];
  		life_actions pushBack (player addAction["Seize Items In Area",{[] call life_fnc_seizeWeapon},cursorTarget,0,false,false,"",'(count(nearestObjects [player,["weaponholder"],3])>0)']);
    };
    case independent: {

    };
};

//Seatbelts
life_actions pushBack (player addAction["<t color = '#D660D6'>Put on Seatbelt</t>",life_fnc_seatbelt,"",6,false,false,"",' !life_seatbelt && vehicle player != player ']);
life_actions pushBack (player addAction["<t color = '#D660D6'>Remove Seatbelt</t>",life_fnc_seatbelt,"",6,false,false,"",' life_seatbelt && vehicle player != player ']);

//Dragging
//life_actions pushBack (player addAction["<t color = '#3366ff'>Hide Body</t>",life_fnc_hideBody,"",6,false,false,"",'cursorTarget isKindOf "Man" && !(cursorTarget isKindOf "Animal") && {!alive cursorTarget}']);