class Lega_xPhone_gangMain
{
      controls[] = {
            {"Lega_xPhone_gangMain_Background", 150001},
            {"Lega_xPhone_gangMain_PList", 150002},
            {"Lega_xPhone_gangMain_catList", 150003},
            {"Lega_xPhone_gangMainBtnLeave", 150004},
            {"Lega_xPhone_gangMainBtnSetLeader", 150005},
            {"Lega_xPhone_gangMainBtnUpgradeSlots", 150006},
            {"Lega_xPhone_gangMainBtnDisbandGang", 150007},
            {"Lega_xPhone_gangMainBtnKick", 150008},
            {"Lega_xPhone_gangMainBtnInvitePlayer", 150009},
            {"Lega_xPhone_gangMain_BackButton", 150010},
            {"Lega_xPhone_gangMain_BtnHome", 150011},
            {"Lega_xPhone_gangMain_Structure", 150012}
      };
};

class Lega_xPhone_gangMain_Background: Lega_XPhoneRscPicture
{
      text = "Lega\Lega_xPhone\Images\dialogImages\gangMain.paa";
      x = 0.3185 * safezoneW + safezoneX;
      y = 0.159 * safezoneH + safezoneY;
      w = 0.360937 * safezoneW;
      h = 0.638 * safezoneH;
};
class Lega_xPhone_gangMain_PList: XPhoneRscListbox
{
      x = 0.427812 * safezoneW + safezoneX;
      y = 0.302 * safezoneH + safezoneY;
      w = 0.144375 * safezoneW;
      h = 0.3828 * safezoneH;
      sizeEx = "(((pixelh * 5) * ((getResolution select 1) / 1080)) * 4)";
};
class Lega_xPhone_gangMain_catList: XPhoneRscCombo
{
      x = 0.427812 * safezoneW + safezoneX;
      y = 0.2822 * safezoneH + safezoneY;
      w = 0.144375 * safezoneW;
      h = 0.0154 * safezoneH;
      wholeHeight = 10 * (0.017 * safezoneH);
      sizeEx = "(((pixelh * 5) * ((getResolution select 1) / 1080)) * 4)";
      onLbSelChanged = "[] call Lega_fnc_xPhoneGangComboChanged";
};
class Lega_xPhone_gangMainBtnLeave: XPhoneIconControlButton
{
      x = 0.427812 * safezoneW + safezoneX;
      y = 0.6914 * safezoneH + safezoneY;
      w = 0.0711562 * safezoneW;
      h = 0.0176 * safezoneH;
      onButtonClick = "[] call life_fnc_gangLeave";
};
class Lega_xPhone_gangMainBtnSetLeader: XPhoneIconControlButton
{
      x = 0.5 * safezoneW + safezoneX;
      y = 0.6914 * safezoneH + safezoneY;
      w = 0.0711562 * safezoneW;
      h = 0.0176 * safezoneH;
      onButtonClick = "[] spawn lega_fnc_xPhoneGangSetLeader";
};
class Lega_xPhone_gangMainBtnUpgradeSlots: XPhoneIconControlButton
{
      x = 0.427812 * safezoneW + safezoneX;
      y = 0.7112 * safezoneH + safezoneY;
      w = 0.0711562 * safezoneW;
      h = 0.0176 * safezoneH;
      onButtonClick = "[] spawn lega_fnc_xPhoneGangUpgrade";
};
class Lega_xPhone_gangMainBtnDisbandGang: XPhoneIconControlButton
{
      x = 0.5 * safezoneW + safezoneX;
      y = 0.7112 * safezoneH + safezoneY;
      w = 0.0711562 * safezoneW;
      h = 0.0176 * safezoneH;
      onButtonClick = "[] spawn Lega_fnc_xPhoneGangDisband";
};
class Lega_xPhone_gangMainBtnKick: XPhoneIconControlButton
{
      x = 0.427812 * safezoneW + safezoneX;
      y = 0.731 * safezoneH + safezoneY;
      w = 0.0711562 * safezoneW;
      h = 0.0176 * safezoneH;
      onButtonClick = "[] spawn lega_fnc_xPhoneGangKick";
};
class Lega_xPhone_gangMainBtnInvitePlayer: XPhoneIconControlButton
{
      x = 0.5 * safezoneW + safezoneX;
      y = 0.731 * safezoneH + safezoneY;
      w = 0.0711562 * safezoneW;
      h = 0.0176 * safezoneH;
      onButtonClick = "[] spawn lega_fnc_xPhoneGangInvitePlayer";
};
class Lega_xPhone_gangMain_BackButton: XPhoneIconControlButton
{
      x = 0.424719 * safezoneW + safezoneX;
      y = 0.214 * safezoneH + safezoneY;
      w = 0.020625 * safezoneW;
      h = 0.0154 * safezoneH;
      onButtonClick = "['last'] spawn Lega_fnc_changeMenu";
};
class Lega_xPhone_gangMain_BtnHome: XPhoneIconControlButton
{
      x = 0.470094 * safezoneW + safezoneX;
      y = 0.7588 * safezoneH + safezoneY;
      w = 0.0567187 * safezoneW;
      h = 0.011 * safezoneH;
      onButtonClick = "['Lega_xPhone_Buttons'] spawn Lega_fnc_changeMenu;";
};
class Lega_xPhone_gangMain_Structure: xPhoneStructuredText
{
  x = 0.459476 * safezoneW + safezoneX;
  y = 0.214122 * safezoneH + safezoneY;
  w = 0.112814 * safezoneW;
  h = 0.0300924 * safezoneH;
};
