//Made by Jeriah objeriah@gmail.com

_gasMask = ["H_CrewHelmetHeli_B"];

setNoGasStatus={
	disableUserInput false;
   "dynamicBlur" ppEffectEnable true;
   "dynamicBlur" ppEffectAdjust [0];
   "dynamicBlur" ppEffectCommit 10;
   resetCamShake;
   20 fadeSound 1;
};

setGasStatus = { 
	disableUserInput true;
   "dynamicBlur" ppEffectEnable true;
   "dynamicBlur" ppEffectAdjust [15];
	"dynamicBlur" ppEffectCommit 5;
	enableCamShake true;
	addCamShake [10, 45, 10];
	//	player setFatigue 0;
	5 fadeSound 0.1;
	sleep 2;
	};

gasDamage = {
   player setDamage (damage player + 0.00);
   sleep 2.5;
};

While{true} do{
	call setNoGasStatus;
	waituntil{
	((nearestObject [getPosATL player, "SmokeShellGreen"]) distance player < 10)
	&&
	(getPosATL (nearestObject [getPosATL player, "SmokeShellGreen"]) select 2 < 0.5)
};

if !(headgear player in _gasMask) then 
	 {
		call setGasStatus;
		call gasDamage;
	 }
	 else
	 {};
};