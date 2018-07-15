class Lega_xPhone_usablesMain
{
    overuseFood = true;//if you want a player to become stuffed when they eat too much food, and lose stamina 
    staminaLossStuffed = 0;
};
class Lega_xPhone_UsableItems
{
    class boltcutter
    {
        call = "[] call life_fnc_hudUpdate;[cursorObject] spawn life_fnc_boltcutter;";
    };
    class blastingcharge
    {
        call = "[] call life_fnc_hudUpdate;player reveal fed_bank;(group player) reveal fed_bank;[cursorObject] spawn life_fnc_blastingCharge;";
    };
    class defusekit
    {
        call = "[] call life_fnc_hudUpdate;[cursorObject] spawn life_fnc_defuseKit;";
    };
    class storagesmall
    {
        call = "[] call life_fnc_hudUpdate;[false] call life_fnc_storageBox;";
    };
    class storagebig
    {
        call = "[] call life_fnc_hudUpdate;[true] call life_fnc_storageBox;";
    };
    class spikeStrip
    {
        call = "[] call life_fnc_hudUpdate;[] spawn life_fnc_spikeStrip;";
    };
    class fuelFull
    {
        call = "[] call life_fnc_hudUpdate;[] spawn life_fnc_jerryRefuel;";
    };
    class fuelEmpty
    {
        call = "[] call life_fnc_hudUpdate;[] spawn life_fnc_jerryCanRefuel;";
    };
    class lockpick
    {
        call = "[] call life_fnc_hudUpdate;[] spawn life_fnc_lockpick;";
    };
    class speedbomb
    {
        call = "[] call life_fnc_hudUpdate;[] spawn life_fnc_speedBomb;";
    };
    class flashlight
    {
        call = "[] call life_fnc_hudUpdate;[] spawn life_fnc_flashLight;";
    };
    class head
    {
        call = "[] call life_fnc_hudUpdate;[] spawn life_fnc_head;";
    };
    class gpstracker
    {
        call = "[] call life_fnc_hudUpdate;[] spawn life_fnc_gpsTracker;";
    };
    class gokart
    {
        call = "[] call life_fnc_hudUpdate;[] spawn life_fnc_gokart;";
    };
    class protest
    {
        call = "[] call life_fnc_hudUpdate;[] spawn life_fnc_protest;";
    };
    class volleyball
    {
        call = "[] call life_fnc_hudUpdate;[] spawn life_fnc_volleyball;";
    };
    class prize
    {
        call = "[] call life_fnc_hudUpdate;[] spawn life_fnc_prize;";
    };
    class cprKit
    {
        call = "[] call life_fnc_hudUpdate;[] spawn life_fnc_cprKit;";
    };
    class morphine
    {
        call = "[] call life_fnc_hudUpdate;[] spawn life_fnc_morphine;";
    };
    class bandages
    {
        call = "[] call life_fnc_hudUpdate;[] spawn life_fnc_bandages;";
    };
    class airhorn
    {
        call = "[] call life_fnc_hudUpdate;[] spawn life_fnc_airhorn;";
    };
};

class Lega_xPhone_UsableFoods
{
    class apple
    {
        hunger = 10;
        call = "[] call life_fnc_hudUpdate;";
    };
    class rabbit
    {
        hunger = 20;
        call = "[] call life_fnc_hudUpdate;";
    };
    class salema
    {
        hunger = 30;
        call = "[] call life_fnc_hudUpdate;";
    };
    class ornate
    {
        hunger = 25;
        call = "[] call life_fnc_hudUpdate;";
    };
    class mackerel
    {
        hunger = 30;
        call = "[] call life_fnc_hudUpdate;";
    };
    class tuna
    {
        hunger = 100;
        call = "[] call life_fnc_hudUpdate;";
    };
    class mullet
    {
        hunger = 80;
        call = "[] call life_fnc_hudUpdate;";
    };
    class catshark
    {
        hunger = 100;
        call = "[] call life_fnc_hudUpdate;";
    };
    class turtle_soup
    {
        hunger = 100;
        call = "[] call life_fnc_hudUpdate;";
    };
    class hen
    {
        hunger = 65;
        call = "[] call life_fnc_hudUpdate;";
    };
    class rooster
    {
        hunger = 45;
        call = "[] call life_fnc_hudUpdate;";
    };
    class sheep
    {
        hunger = 100;
        call = "[] call life_fnc_hudUpdate;";
    };
    class goat
    {
        hunger = 100;
        call = "[] call life_fnc_hudUpdate;";
    };
    class donuts
    {
        hunger = 30;
        call = "[] call life_fnc_hudUpdate;";
    };
    class tbacon
    {
        hunger = 40;
        call = "[] call life_fnc_hudUpdate;";
    };
    class peach
    {
        hunger = 10;
        call = "[] call life_fnc_hudUpdate;";
    };
    class doritos
    {
        hunger = 20;
        call = "[] call life_fnc_hudUpdate;";
    };
    class shittynoodles
    {
        hunger = 20;
        call = "[] call life_fnc_hudUpdate;";
    };
    class kfc
    {
        hunger = 40;
        call = "[] call life_fnc_hudUpdate;";
    };
    class easterEggs
    {
        hunger = 30;
        call = "[] call life_fnc_hudUpdate;";
    };
};

class Lega_xPhone_UsableDrinks
{
    class waterBottle
    {
        thirst = 50;
        fatigue = 10;
        call = "[] call life_fnc_hudUpdate;";
    };
    class coffee
    {
        thirst = 20;
        fatigue = 30;
        call = "[] call life_fnc_hudUpdate;[] call Lega_fnc_use_Coffee";
    };
    class redGull
    {
        thirst = 20;
        fatigue = 100;
        call = "[] call life_fnc_hudUpdate;[] call Lega_fnc_use_redGull";
    };
    class pepsi
    {
        thirst = 30;
        fatigue = 100;
        call = "[] call life_fnc_hudUpdate;[] call Lega_fnc_use_redGull";
    };
    class cocacola
    {
        thirst = 20;
        fatigue = 100;
        call = "[] call life_fnc_hudUpdate;[] call Lega_fnc_use_redGull";
    };
  class monsterEnergy
    {
        thirst = 40;
        fatigue = 100;
        call = "[] call life_fnc_hudUpdate;[] call Lega_fnc_use_redGull";
    };
   class beer
    {
        thirst = 20;
        fatigue = 100;
        call = "[] call life_fnc_hudUpdate;[] call Lega_fnc_use_redGull";
    };
   class whiskey
    {
        thirst = 20;
        fatigue = 100;
        call = "[] call life_fnc_hudUpdate;[] call Lega_fnc_use_redGull";
    };
 class moonshine
    {
        thirst = 20;
        fatigue = 100;
        call = "[] call life_fnc_hudUpdate;[] call Lega_fnc_use_redGull";
    };
};
