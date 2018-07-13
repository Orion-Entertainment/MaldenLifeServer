class Lega_xPhone_Money : Life_RscControlsGroupNoScrollbars
{
      controls[] = {
            {"Lega_xPhone_Money_Background", 120001},
            {"Lega_xPhone_Money_Plist", 120002},
            {"Lega_xPhone_Money_AmountEdit", 120003},
            {"Lega_xPhone_Money_CashBox", 120004},
            {"Lega_xPhone_Money_BankBox", 120005},
            {"Lega_xPhone_Money_BtnGive", 120006},
            {"Lega_xPhone_Money_BackButton", 120007},
            {"Lega_xPhone_Money_BtnHome", 120008}
      };
};

class Lega_xPhone_Money_Background: Lega_XPhoneRscPicture
{
      idc = 120001;
      text = "Lega\Lega_xPhone\Images\dialogImages\MoneyStats.paa";
      x = 0.3185 * safezoneW + safezoneX;
      y = 0.159 * safezoneH + safezoneY;
      w = 0.360937 * safezoneW;
      h = 0.638 * safezoneH;
};
class Lega_xPhone_Money_Plist: XPhoneRscCombo
{
      idc = 120002;
      x = 0.427816 * safezoneW + safezoneX;
      y = 0.526 * safezoneH + safezoneY;
      w = 0.144364 * safezoneW;
      h = 0.017 * safezoneH;
      wholeHeight = 10 * (0.017 * safezoneH);
};
class Lega_xPhone_Money_AmountEdit: XPhoneRscEdit
{
      idc = 120003;
      x = 0.427814 * safezoneW + safezoneX;
      y = 0.566 * safezoneH + safezoneY;
      w = 0.144364 * safezoneW;
      h = 0.0176 * safezoneH;
      text = "amount";
      onSetFocus = "['moneyamount'] call Lega_fnc_xPhoneClearPlaceholder";
};
class Lega_xPhone_Money_CashBox: Life_RscText
{
      idc = 120004;
      x = 0.458744 * safezoneW + safezoneX;
      y = 0.423 * safezoneH + safezoneY;
      w = 0.107248 * safezoneW;
      h = 0.0242 * safezoneH;
      text = "CASH MONEY";
      colorText[] = {0.3,0.3,0.3,1};
      font = "RobotoCondensed";
      shadow = 0;
      sizeEx = (((pixelh * 5) * ((getResolution select 1) / 1080)) * 4);
};
class Lega_xPhone_Money_BankBox: Life_RscText
{
      idc = 120005;
      x = 0.458744 * safezoneW + safezoneX;
      y = 0.3548 * safezoneH + safezoneY;
      w = 0.107248 * safezoneW;
      h = 0.0242 * safezoneH;
      text = "BANK MONEY";
      colorText[] = {0.3,0.3,0.3,1};
      font = "RobotoCondensed";
      shadow = 0;
      sizeEx = (((pixelh * 5) * ((getResolution select 1) / 1080)) * 4);
};
class Lega_xPhone_Money_BtnGive: XPhoneIconControlButton
{
      idc = 120006;
      x = 0.427812 * safezoneW + safezoneX;
      y = 0.6958 * safezoneH + safezoneY;
      w = 0.143344 * safezoneW;
      h = 0.033 * safezoneH;
      onButtonClick = "[] call Lega_fnc_xPhoneGiveMoney";
};
class Lega_xPhone_Money_BackButton: XPhoneIconControlButton
{
      idc = 120007;
      x = 0.424719 * safezoneW + safezoneX;
      y = 0.214 * safezoneH + safezoneY;
      w = 0.020625 * safezoneW;
      h = 0.0154 * safezoneH;
      onButtonClick = "['last'] spawn Lega_fnc_changeMenu";
};
class Lega_xPhone_Money_BtnHome: XPhoneIconControlButton
{
      idc = 120008;
      x = 0.470094 * safezoneW + safezoneX;
      y = 0.7588 * safezoneH + safezoneY;
      w = 0.0567187 * safezoneW;
      h = 0.011 * safezoneH;
      onButtonClick = "['Lega_xPhone_Buttons'] spawn Lega_fnc_changeMenu;";
};
