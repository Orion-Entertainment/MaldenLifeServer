class Lega_xPhone_Licenses : Life_RscControlsGroupNoScrollbars
{
  controls[] = {
      {"Lega_xPhone_Licenses_Background",110001},
      {"Lega_xPhone_Licenses_Listbox",110002},
      {"Lega_xPhone_Licenses_btnBack",110003},
      {"Lega_xPhone_Licenses_BtnHome",110004}
  };
};


class Lega_xPhone_Licenses_Background: Lega_XPhoneRscPicture
{
    text = "Lega\Lega_xPhone\Images\dialogImages\Licenses.paa";
    x = 0.3185 * safezoneW + safezoneX;
    y = 0.159 * safezoneH + safezoneY;
    w = 0.360937 * safezoneW;
    h = 0.638 * safezoneH;
};
class Lega_xPhone_Licenses_Listbox: XPhoneRscListbox
{
    x = 0.427812 * safezoneW + safezoneX;
    y = 0.282 * safezoneH + safezoneY;
    w = 0.143344 * safezoneW;
    h = 0.3894 * safezoneH;
};
class Lega_xPhone_Licenses_btnBack: XPhoneIconControlButton
{
    x = 0.424719 * safezoneW + safezoneX;
    y = 0.214 * safezoneH + safezoneY;
    w = 0.020625 * safezoneW;
    h = 0.0154 * safezoneH;
    onButtonClick = "['last'] spawn Lega_fnc_changeMenu;";
};
class Lega_xPhone_Licenses_BtnHome: XPhoneIconControlButton
{
    x = 0.470094 * safezoneW + safezoneX;
    y = 0.7588 * safezoneH + safezoneY;
    w = 0.0567187 * safezoneW;
    h = 0.011 * safezoneH;
    onButtonClick = "['Lega_xPhone_Buttons'] spawn Lega_fnc_changeMenu;";
};
