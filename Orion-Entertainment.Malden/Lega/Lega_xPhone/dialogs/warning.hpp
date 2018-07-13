
class Lega_xPhoneWarning : Life_RscControlsGroupNoScrollbars
{
  controls[] = {
    {"Lega_xPhoneWarning_Background", 50001},
    {"Lega_xPhoneWarning_TextGroup", 50002},
    {"Lega_xPhoneWarning_BtnCancel", 50003},
    {"Lega_xPhoneWarning_BtnOk", 50004}
  };
};

class Lega_xPhoneWarning_Background: Lega_XPhoneRscPicture
{
  text = "Lega\Lega_xPhone\Images\dialogImages\warning.paa";
  x = 0.3185 * safezoneW + safezoneX;
  y = 0.159 * safezoneH + safezoneY;
  w = 0.360937 * safezoneW;
  h = 0.638 * safezoneH;
};
class Lega_xPhoneWarning_TextGroup : Life_RscControlsGroupNoScrollbars
{
  x = 0.437095 * safezoneW + safezoneX;
  y = 0.4054  * safezoneH + safezoneY;
  w = 0.124775 * safezoneW;
  h = 0.121 * safezoneH;
  class controls
  {
    class Text: xPhoneStructuredText
    {
      idc = 1;
      text = "";
      w = 0.124775 * safezoneW;
      h = 0.121 * safezoneH;
    };
  };
};
class Lega_xPhoneWarning_BtnCancel: XPhoneIconControlButton
{
  x = 0.432969 * safezoneW + safezoneX;
  y = 0.533  * safezoneH + safezoneY;
  w = 0.0659999 * safezoneW;
  h = 0.0242 * safezoneH;
};
class Lega_xPhoneWarning_BtnOk: XPhoneIconControlButton
{
  x = 0.49897 * safezoneW + safezoneX;
  y = 0.533  * safezoneH + safezoneY;
  w = 0.0659999 * safezoneW;
  h = 0.0242 * safezoneH;
};
