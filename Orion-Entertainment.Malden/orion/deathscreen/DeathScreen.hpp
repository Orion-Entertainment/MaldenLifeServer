/**
 * Copyright © 2018 Shadow King (76561198094478387), Further Edited IEthanHD (76561198082881619) 
 */
 
class DeathScreen {
    idd = 7300;
    name = "Life_Death_Screen";
    movingEnable = false;
    enableSimulation = true;
    onLoad = "uiNamespace setVariable ['Life_Death_Screen', _this select 0]";
    onUnload = "uiNamespace setVariable ['Life_Death_Screen', objNull]";
    onDestroy = "uiNamespace setVariable ['Life_Death_Screen', objNull]";
	
	class ControlsBackground {

		class RscDisplayMainBackground: Life_RscText {
			type = 2;
			idc = -1;
			x = safeZoneX + safeZoneW * -0.00625;
			y = safeZoneY + safeZoneH * 0.825;
			w = safeZoneW * 1.0625;
			h = safeZoneH * 0.1;
			style = 0;
			text = "";
			autocomplete = "";
			colorBackground[] = {0.2,0.2,0.2,0.7};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorSelection[] = {1,0,0,1};
			colorText[] = {0.6275,0.051,0.2471,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		
	};
	class Controls {

		class RscDisplayProgressBar: Life_RscProgress {
			idc = 99532;
			x = safeZoneX + safeZoneW * 0.39375;
			y = safeZoneY + safeZoneH * 0.858;
			w = safeZoneW * 0.2375;
			h = safeZoneH * 0.032;
			style = 0;
			colorBar[] = {1,0,0,1};
			colorFrame[] = {0.2275,0.4157,0.5608,1};
			texture = "#(argb,8,8,3)color(1,1,1,1)";
			
		};

		class RscDisplayMedicStatus: Life_RscText {
			idc = 7305;
			x = safeZoneX + safeZoneW * 0.9203125;
			y = safeZoneY + safeZoneH * 0.86481482;
			w = safeZoneW * 0.07395834;
			h = safeZoneH * 0.02222223;
			style = 0;
			text = "MEDIC: 24000M";
			colorBackground[] = {0,0,0,0};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};

		class RscDisplayProgressBarBack: Life_RscText {
			idc = -1;
			x = safeZoneX + safeZoneW * 0.39375;
			y = safeZoneY + safeZoneH * 0.858;
			w = safeZoneW * 0.2375;
			h = safeZoneH * 0.032;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {0.3961,0.8353,0.5765,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};

		class RscDisplayBleedingText: Life_RscText {
			idc = -1;
			x = safeZoneX + safeZoneW * 0.47;
			y = safeZoneY + safeZoneH * 0.834;
			w = safeZoneW * 0.2359375;
			h = safeZoneH * 0.02222223;
			style = 0;
			text = "BLEEDING OUT";
			autocomplete = "";
			font = "PuristaLight";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};

		class RscDisplayBleedingStatus: Life_RscText {
			idc = 99533;
			x = safeZoneX + safeZoneW * 0.45104167;
			y = safeZoneY + safeZoneH * 0.89814815;
			w = safeZoneW * 0.24739584;
			h = safeZoneH * 0.02222223;
			style = 0;
			text = "PRESS SPACE TO RESPAWN";
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		
	};
	
};
