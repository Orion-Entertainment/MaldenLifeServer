class Lega_xPhone_gangCreate : Life_RscControlsGroupNoScrollbars
{
      controls[] = {
            {"Lega_xPhone_gangCreate_background", 160001},
            {"Lega_xPhone_gangCreate_BtnCreateGang", 160002},
            {"Lega_xPhone_gangCreate_GangNameEdit", 160003},
            {"Lega_xPhone_gangCreate_StructuredText", 160004},
            {"Lega_xPhone_Background_BackButton", 160005},
            {"Lega_xPhone_gangCreate_BtnHome", 160006}
      };
};

class Lega_xPhone_gangCreate_background: Lega_XPhoneRscPicture
{
      idc = 160001;
      text = "Lega\Lega_xPhone\Images\dialogImages\createGang.paa";
      x = 0.3185 * safezoneW + safezoneX;
      y = 0.159 * safezoneH + safezoneY;
      w = 0.360937 * safezoneW;
      h = 0.638 * safezoneH;
};
class Lega_xPhone_gangCreate_BtnCreateGang: XPhoneIconControlButton
{
      idc = 160002;
      x = 0.448439 * safezoneW + safezoneX;
      y = 0.4758 * safezoneH + safezoneY;
      w = 0.102093 * safezoneW;
      h = 0.0264 * safezoneH;
      onButtonClick = "[] spawn Lega_fnc_xPhoneGangCreateGang";
};
class Lega_xPhone_gangCreate_GangNameEdit: XPhoneRscEdit
{
      idc = 160003;
      x = 0.44225 * safezoneW + safezoneX;
      y = 0.4516 * safezoneH + safezoneY;
      w = 0.114465 * safezoneW;
      h = 0.022 * safezoneH;
      text = "Enter Gang Name";
      onSetFocus = "['gangcreate'] call Lega_fnc_xPhoneClearPlaceholder";
};
class Lega_xPhone_gangCreate_StructuredText: xPhoneStructuredText
{
      idc = 160004;
      x = 0.444312 * safezoneW + safezoneX;
      y = 0.3064 * safezoneH + safezoneY;
      w = 0.110341 * safezoneW;
      h = 0.1386 * safezoneH;
};
class Lega_xPhone_Background_BackButton: XPhoneIconControlButton
{
      idc = 160005;
      x = 0.424719 * safezoneW + safezoneX;
      y = 0.214 * safezoneH + safezoneY;
      w = 0.020625 * safezoneW;
      h = 0.0154 * safezoneH;
      onButtonClick = "['last'] spawn Lega_fnc_changeMenu";
};
class Lega_xPhone_gangCreate_BtnHome: XPhoneIconControlButton
{
      idc = 160006;
      x = 0.470094 * safezoneW + safezoneX;
      y = 0.7588 * safezoneH + safezoneY;
      w = 0.0567187 * safezoneW;
      h = 0.011 * safezoneH;
      onButtonClick = "['Lega_xPhone_Buttons'] spawn Lega_fnc_changeMenu;";
};
