class Lega_xPhone_KeyChain : Life_RscControlsGroupNoScrollbars
{
      controls[] = {
            {"Lega_xPhone_KeyChain_Background",140001},
            {"Lega_xPhone_KeyChain_KeyList",140002},
            {"Lega_xPhone_KeyChain_PList",140003},
            {"Lega_xPhone_KeyChain_BtnGive",140004},
            {"Lega_xPhone_KeyChain_BackButton",140005},
            {"Lega_xPhone_KeyChain_BtnHome",140006}
      };
};

class Lega_xPhone_KeyChain_Background: Lega_XPhoneRscPicture
{
      idc = 140001;
      text = "Lega\Lega_xPhone\Images\dialogImages\keyChain.paa";
      x = 0.3185 * safezoneW + safezoneX;
      y = 0.159 * safezoneH + safezoneY;
      w = 0.360937 * safezoneW;
      h = 0.638 * safezoneH;
};
class Lega_xPhone_KeyChain_KeyList: XPhoneRscListbox
{
      idc = 140002;
      x = 0.427812 * safezoneW + safezoneX;
      y = 0.2844 * safezoneH + safezoneY;
      w = 0.144375 * safezoneW;
      h = 0.3828 * safezoneH;
};
class Lega_xPhone_KeyChain_PList: XPhoneRscCombo
{
      idc = 140003;
      x = 0.427812 * safezoneW + safezoneX;
      y = 0.6716 * safezoneH + safezoneY;
      w = 0.144375 * safezoneW;
      h = 0.0176 * safezoneH;
      wholeHeight = 10 * (0.009 * safezoneH);
};
class Lega_xPhone_KeyChain_BtnGive: XPhoneIconControlButton
{
      idc = 140004;
      x = 0.427812 * safezoneW + safezoneX;
      y = 0.6958 * safezoneH + safezoneY;
      w = 0.143344 * safezoneW;
      h = 0.033 * safezoneH;
      onButtonClick = "[] call Lega_fnc_xPhoneGiveKey";
};
class Lega_xPhone_KeyChain_BackButton: XPhoneIconControlButton
{
      idc = 140005;
      x = 0.424719 * safezoneW + safezoneX;
      y = 0.214 * safezoneH + safezoneY;
      w = 0.020625 * safezoneW;
      h = 0.0154 * safezoneH;
      onButtonClick = "['last'] spawn Lega_fnc_changeMenu";
};
class Lega_xPhone_KeyChain_BtnHome: XPhoneIconControlButton
{
      idc = 140006;
      x = 0.470094 * safezoneW + safezoneX;
      y = 0.7588 * safezoneH + safezoneY;
      w = 0.0567187 * safezoneW;
      h = 0.011 * safezoneH;
      onButtonClick = "['Lega_xPhone_Buttons'] spawn Lega_fnc_changeMenu;";
};
