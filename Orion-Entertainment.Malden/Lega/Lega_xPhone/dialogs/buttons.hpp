class Lega_xPhone_Buttons : Life_RscControlsGroupNoScrollbars
{
  controls[] = {
    {"Lega_xPhone_Buttons_ControlsGroup",1800},
    {"Lega_xPhone_Buttons_BottomControlGroup",1801}
  };
};



class Lega_xPhone_Buttons_ControlsGroup: Life_RscControlsGroup
{
  idc = 1800;
  x = 0.427812 * safezoneW + safezoneX;
  y = 0.2382 * safezoneH + safezoneY;
  w = 0.145 * safezoneW;
  h = 0.43 * safezoneH;
  class controls {};
  onMouseButtonDown = "Lega_BackgroundControlMouseup = false;_this spawn Lega_testFunction";
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

class Lega_xPhone_Buttons_BottomControlGroup: Life_RscControlsGroup
{
  idc = 1801;
  x = 0.427812 * safezoneW + safezoneX;
  y = 0.6914 * safezoneH + safezoneY;
  w = 0.145 * safezoneW;
  h = 0.0682 * safezoneH;
};
