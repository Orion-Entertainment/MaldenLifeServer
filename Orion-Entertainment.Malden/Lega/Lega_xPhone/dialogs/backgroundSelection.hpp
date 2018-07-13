
class Lega_xPhone_ChangeBackground
{
    controls[] = {
      {"Lega_xPhone_ChangeBackground_Background",100003},
      {"Lega_xPhone_ChangeBackground_BackButton",100004},
      {"Lega_xPhone_ChangeBackground_ControlGroup",100005},
      {"Lega_xPhone_ChangeBackground_BtnHome",100006}
    };
};

class Lega_xPhone_ChangeBackground_Background : Lega_XPhoneRscPicture
{
  idc = 100003;
  text = "Lega\Lega_xPhone\Images\dialogImages\WallpapersBackground.paa";
  x = 0.3185 * safezoneW + safezoneX;
  y = 0.159 * safezoneH + safezoneY;
  w = 0.360937 * safezoneW;
  h = 0.638 * safezoneH;
};
class Lega_xPhone_ChangeBackground_BackButton: XPhoneIconControlButton
{
  idc = 100004;
  x = 0.424719 * safezoneW + safezoneX;
  y = 0.2118 * safezoneH + safezoneY;
  w = 0.0237188 * safezoneW;
  h = 0.0176 * safezoneH;
  onButtonClick = "['last'] spawn Lega_fnc_changeMenu";
};
class Lega_xPhone_ChangeBackground_ControlGroup: Life_RscControlsGroup
{
  idc = 100005;
  x = 0.3682 * safezoneW + safezoneX;
  y = 0.273 * safezoneH + safezoneY;
  w = 0.26193 * safezoneW;
  h = 0.4532 * safezoneH;
  class controls {};
  onMouseButtonDown = "Lega_BackgroundControlMouseup = false;_this spawn Lega_fnc_xPhoneBackgroundSlider";
  onMouseButtonUp = "Lega_BackgroundControlMouseup = true";
  class VScrollBar : Life_RscScrollBar
  {
      width = 0;
      autoScrollEnabled = 1;
  };
  class HScrollBar : Life_RscScrollBar
  {
      height = 0;
  };
};
class Lega_xPhone_ChangeBackground_BtnHome: XPhoneIconControlButton
{
  idc = 100006;
  x = 0.470094 * safezoneW + safezoneX;
  y = 0.7588 * safezoneH + safezoneY;
  w = 0.0567187 * safezoneW;
  h = 0.011 * safezoneH;
  onButtonClick = "['Lega_xPhone_Buttons'] spawn Lega_fnc_changeMenu;";
};
