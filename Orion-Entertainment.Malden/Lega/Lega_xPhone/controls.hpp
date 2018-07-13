class Lega_XPhoneRscPicture : Life_RscPicture
{
  text = "";
};


class XPhoneIconControlImage : Lega_XPhoneRscPicture
{
  text = "";
  w = 0.02475 * safezoneW;
  h = 0.044 * safezoneH;
};

class XPhoneIconControlButton : Life_RscButtonMenu
{
  text = "";
  w = 0.02475 * safezoneW;
  h = 0.044 * safezoneH;
  animTextureNormal = "#(argb,8,8,3)color(0,0,0,0)";
  animTextureDisabled = "#(argb,8,8,3)color(0,0,0,0)";
  animTextureOver = "#(argb,8,8,3)color(0,0,0,0)";
  animTextureFocused = "#(argb,8,8,3)color(0,0,0,0)";
  animTexturePressed = "#(argb,8,8,3)color(0,0,0,0)";
  animTextureDefault = "#(argb,8,8,3)color(0,0,0,0)";
  colorBackground[] = {0,0,0,0};
  colorBackgroundFocused[] = {0,0,0,0};
  colorBackground2[] = {0,0,0,0};
  color[] = {0,0,0,0};
  colorFocused[] = {0,0,0,0};
  color2[] = {0,0,0,0};
  colorText[] = {0,0,0,0};
  colorDisabled[] = {0,0,0,0};
};

class XPhoneRscEdit : Life_RscEdit
{
  style = 0x00 + 0x40 + 512;
  colorBackground[] = {0,0,0,0};
  colorText[] = {0.3,0.3,0.3,1};
  colorSelection[] = {0,0.48,1,.6};
  font = "RobotoCondensedLight";
  shadow = 1;
  sizeEx = "(((pixelh * 5) * ((getResolution select 1) / 1080)) * 4)";
};

class xPhoneStructuredText : Life_RscStructuredText
{
  text = "";
  sizeEx = "(((pixelh * 5) * ((getResolution select 1) / 1080)) * 120)";
};

class XPhoneRscCombo : Life_RscCombo {
    type = 4;
    x = 0;
    y = 0;
    w = 0.12;
    h = 0.035;
    shadow = 0;
    colorSelect[] = {0.3,0.3,0.3,1};//When Hovering over selection
    colorText[] = {0.3,0.3,0.3,1};//Color of text
    colorBackground[] = {0.7,0.7,0.7,0.8};//When Fuckused
    colorScrollbar[] = {0.3,0.3,0.3,1};
    colorDisabled[] = {1,0,0,1};
    colorTextRight[] = {0,0,0,1};
    colorSelectRight[] = {0,0,0,1};
    colorSelect2Right[] = {0,0,0,1};
    soundSelect[] = {"\A3\ui_f\data\sound\RscCombo\soundSelect",0.1,1};
    soundExpand[] = {"\A3\ui_f\data\sound\RscCombo\soundExpand",0.1,1};
    soundCollapse[] = {"\A3\ui_f\data\sound\RscCombo\soundCollapse",0.1,1};
    sizeEx = "(((pixelh * 5) * ((getResolution select 1) / 1080)) * 4)";
    colorSelectBackground[] = {0,0.48,1,.6};
    colorActive[] = {0,0.48,1,.6};
    style = "0x10 + 0x200";
    font = "RobotoCondensed";
    class ComboScrollBar : Life_RscScrollBar {};
};


class XPhoneRscListbox : Life_RscListbox
{
  font = "RobotoCondensed";
  colorSelect[] = {0,0,0,1};//When Hovering over selection
  colorText[] = {0.3,0.3,0.3,1};//Color of text
  colorBackground[] = {0,0,0,0};
  colorSelectBackground[] = {0,0.48,1,.6};
  colorSelectBackground2[] = {0,0.48,1,.6};
  colorSelect2[] = {0.2,0.2,0.2,1};//When Hovering over selection
  colorActive[] = {0.2,0.2,0.2,1};//When Hovering over selection
  color[] = {0.2,0.2,0.2,1};//When Hovering over selection
  maxHistoryDelay = 0;
  blinkingPeriod = 0;
  period = 3;
  sizeEx = "(((pixelh * 5) * ((getResolution select 1) / 1080)) * 4)";
  class ListScrollBar: Life_RscScrollBar
  {
      color[] = {0.2,0.2,0.2,1};//When Hovering over selection
      autoScrollEnabled = 1;
  };
};

class xPhoneSetupPlain_Background : Lega_XPhoneRscPicture
{
  text = "Lega\Lega_xPhone\Images\dialogImages\setupPlain.paa";
  x = 0.3185 * safezoneW + safezoneX;
  y = 0.159 * safezoneH + safezoneY;
  w = 0.360937 * safezoneW;
  h = 0.638 * safezoneH;
};

class xPhoneSetup1
{
  controls[] = {
    {"xPhoneSetup1_Background", 180018}
  };
};
class xPhoneSetup1_Background : Lega_XPhoneRscPicture
{
  text = "Lega\Lega_xPhone\Images\dialogImages\setup1.paa";
  x = 0.3185 * safezoneW + safezoneX;
  y = 0.159 * safezoneH + safezoneY;
  w = 0.360937 * safezoneW;
  h = 0.638 * safezoneH;
};

class xPhoneSetup2
{
    controls[] = {
      {"xPhoneSetup2_Image", 180019},
      {"xPhoneSetup2_First", 180020},
      {"xPhoneSetup2_Last", 180021},
      {"xPhoneSetup2_Btn", 180022}
    };
};

class xPhoneSetup2_Image : Lega_XPhoneRscPicture
{
  idc = 180019;
  text = "Lega\Lega_xPhone\Images\dialogImages\setup2.paa";
  x = 0.3185 * safezoneW + safezoneX;
  y = 0.159 * safezoneH + safezoneY;
  w = 0.360937 * safezoneW;
  h = 0.638 * safezoneH;
};
class xPhoneSetup2_First: XPhoneRscEdit
{
  idc = 180020;
  x = 0.447406 * safezoneW + safezoneX;
  y = 0.4318 * safezoneH + safezoneY;
  w = 0.105187 * safezoneW;
  h = 0.022 * safezoneH;
  text = "First Name";
  sizeEx = "(((pixelh * 5) * ((getResolution select 1) / 1080)) * 4)";
};
class xPhoneSetup2_Last: XPhoneRscEdit
{
  idc = 180021;
  x = 0.447406 * safezoneW + safezoneX;
  y = 0.467 * safezoneH + safezoneY;
  w = 0.105187 * safezoneW;
  h = 0.022 * safezoneH;
  text = "Last Name";
  sizeEx = "(((pixelh * 5) * ((getResolution select 1) / 1080)) * 4)";
};
class xPhoneSetup2_Btn: XPhoneIconControlButton
{
  idc = 180022;
  x = 0.480407 * safezoneW + safezoneX;
  y = 0.5066 * safezoneH + safezoneY;
  w = 0.0381563 * safezoneW;
  h = 0.0198 * safezoneH;
  onButtonClick = "[] spawn LegA_fnc_xPhoneSetupSetName";
};




class xPhoneSetup3 : Life_RscControlsGroupNoScrollbars
{
  controls[] = {
    {"xPhoneSetup3_Image", -1},
    {"xPhoneSetup3_NumberBox", 180010},
    {"xPhoneSetup3_Btn", 180011}
  };
};
class xPhoneSetup3_Image : Lega_XPhoneRscPicture
{
  idc = -1;
  text = "Lega\Lega_xPhone\Images\dialogImages\setup3.paa";
  x = 0.3185 * safezoneW + safezoneX;
  y = 0.159 * safezoneH + safezoneY;
  w = 0.360937 * safezoneW;
  h = 0.638 * safezoneH;
};
class xPhoneSetup3_NumberBox: XPhoneRscCombo
{
  idc = 180010;
  x = 0.447406 * safezoneW + safezoneX;
  y = 0.4252 * safezoneH + safezoneY;
  w = 0.105187 * safezoneW;
  h = 0.022 * safezoneH;
  sizeEx = "(((pixelh * 5) * ((getResolution select 1) / 1080)) * 4)";
};
class xPhoneSetup3_Btn: XPhoneIconControlButton
{
  idc = 180011;
  x = 0.479374 * safezoneW + safezoneX;
  y = 0.467 * safezoneH + safezoneY;
  w = 0.0391884 * safezoneW;
  h = 0.0198 * safezoneH;
  onButtonClick = "[] spawn Lega_fnc_xPhoneSetupSetNumber";
};

class EmerMessageGroup: Life_RscControlsGroupNoScrollbars
{
  x = 0.422656 * safezoneW + safezoneX;
  y = (0.2756 + 0.066) * safezoneH + safezoneY;
  w = 0.153656 * safezoneW;
  h = 0.453 * safezoneH;
  class controls
  {
    class RscPicture_1200: Life_RscPicture
    {
      idc = 1;
      text = "Lega\Lega_xPhone\Images\dialogImages\emerMessageBackground.paa";
      x = 0.278769 * safezoneW + safezoneX;
      y = 0.225 * safezoneH + safezoneY;
      w = 0.18148 * safezoneW;
      h = 0.154 * safezoneH;
    };
    class RscFrame_1800: Life_RscStructuredText
    {
      idc = 2;
      x = 0.293751 * safezoneW + safezoneX;
      y = 0.2272 * safezoneH + safezoneY;
      w = 0.152612 * safezoneW;
      h = 0.0198 * safezoneH;
    };
    class RscFrame_1801: Life_RscStructuredText
    {
      idc = 3;
      x = 0.29375 * safezoneW + safezoneX;
      y = 0.247 * safezoneH + safezoneY;
      w = 0.0917811 * safezoneW;
      h = 0.1276 * safezoneH;
    };
    class RscFrame_1802: Life_RscStructuredText
    {
      idc = 4;
      x = 0.387593 * safezoneW + safezoneX;
      y = 0.247 * safezoneH + safezoneY;
      w = 0.0587812 * safezoneW;
      h = 0.066 * safezoneH;
    };
    class RscButtonMenu_2400: XPhoneIconControlButton
    {
      idc = 5;
      x = 0.387595 * safezoneW + safezoneX;
      y = 0.2822 * safezoneH + safezoneY;
      w = 0.0556873 * safezoneW;
      h = 0.0242 * safezoneH;
    };
    class RscButtonMenu_2401: XPhoneIconControlButton
    {
      idc = 6;
      x = 0.387593 * safezoneW + safezoneX;
      y = 0.3152 * safezoneH + safezoneY;
      w = 0.0556873 * safezoneW;
      h = 0.0242 * safezoneH;
    };
    class RscButtonMenu_2402: XPhoneIconControlButton
    {
      idc = 7;
      x = 0.387593 * safezoneW + safezoneX;
      y = 0.346 * safezoneH + safezoneY;
      w = 0.0556873 * safezoneW;
      h = 0.0242 * safezoneH;
    };
  };
};
