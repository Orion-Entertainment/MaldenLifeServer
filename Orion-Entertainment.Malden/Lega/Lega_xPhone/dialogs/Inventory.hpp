class Lega_xPhone_Inv : Life_RscControlsGroupNoScrollbars
{
      controls[] = {
            {"Lega_xPhone_Inv_Background", 130001},
            {"Lega_xPhone_Inv_ItemList", 130002},
            {"Lega_xPhone_Inv_amount", 130003},
            {"Lega_xPhone_Inv_Plist", 130004},
            {"Lega_xPhone_Inv_BtnRemove", 130005},
            {"Lega_xPhone_Inv_Use", 130006},
            {"Lega_xPhone_Inv_Give", 130007},
            {"Lega_xPhone_Inv_Give", 130007},
            {"Lega_xPhone_Inv_Give", 130007},
            {"Lega_xPhone_Inv_BackButton", 130008},
            {"Lega_xPhone_Inv_BtnHome", 130009}
      };
};


class Lega_xPhone_Inv_Background: Lega_XPhoneRscPicture
{
      idc = 130001;
      text = "Lega\Lega_xPhone\Images\dialogImages\Inventory.paa";
      x = 0.3185 * safezoneW + safezoneX;
      y = 0.159 * safezoneH + safezoneY;
      w = 0.360937 * safezoneW;
      h = 0.638 * safezoneH;
};
class Lega_xPhone_Inv_ItemList: XPhoneRscListbox
{
      idc = 130002;
      x = 0.429366 * safezoneW + safezoneX;
      y = 0.286252 * safezoneH + safezoneY;
      w = 0.141271 * safezoneW;
      h = 0.3564 * safezoneH;
      wholeHeight = 10 * (0.017 * safezoneH);
};
class Lega_xPhone_Inv_amount: XPhoneRscEdit
{
      idc = 130003;
      x = 0.428846 * safezoneW + safezoneX;
      y = 0.6496 * safezoneH + safezoneY;
      w = 0.143333 * safezoneW;
      h = 0.0176 * safezoneH;
      text = "amount";
      onSetFocus = "['invamount'] call Lega_fnc_xPhoneClearPlaceholder";
};
class Lega_xPhone_Inv_Plist: XPhoneRscCombo
{
      idc = 130004;
      x = 0.427812 * safezoneW + safezoneX;
      y = 0.672 * safezoneH + safezoneY;
      w = 0.1435 * safezoneW;
      h = 0.017 * safezoneH;
      wholeHeight = 10 * (0.009 * safezoneH);
};
class Lega_xPhone_Inv_BtnRemove: XPhoneIconControlButton
{
      idc = 130005;
      x = 0.427293 * safezoneW + safezoneX;
      y = 0.6958 * safezoneH + safezoneY;
      w = 0.0484791 * safezoneW;
      h = 0.0320741 * safezoneH;
      onButtonClick = "[] spawn Lega_fnc_xPhoneRemoveItem";
};
class Lega_xPhone_Inv_Use: XPhoneIconControlButton
{
      idc = 130006;
      x = 0.476292 * safezoneW + safezoneX;
      y = 0.6958 * safezoneH + safezoneY;
      w = 0.0464166 * safezoneW;
      h = 0.0320741 * safezoneH;
      onButtonClick = "[] call Lega_fnc_xPhoneUseItem";
};
class Lega_xPhone_Inv_Give: XPhoneIconControlButton
{
      idc = 130007;
      x = 0.522688 * safezoneW + safezoneX;
      y = 0.6958 * safezoneH + safezoneY;
      w = 0.0484791 * safezoneW;
      h = 0.0320741 * safezoneH;
      onButtonClick = "[] call Lega_fnc_XPhoneGiveItem";
};
class Lega_xPhone_Inv_BackButton: XPhoneIconControlButton
{
      idc = 130008;
      x = 0.424719 * safezoneW + safezoneX;
      y = 0.214 * safezoneH + safezoneY;
      w = 0.020625 * safezoneW;
      h = 0.0154 * safezoneH;
      onButtonClick = "['last'] spawn Lega_fnc_changeMenu";
};
class Lega_xPhone_Inv_BtnHome: XPhoneIconControlButton
{
      idc = 130009;
      x = 0.470094 * safezoneW + safezoneX;
      y = 0.7588 * safezoneH + safezoneY;
      w = 0.0567187 * safezoneW;
      h = 0.011 * safezoneH;
      onButtonClick = "['Lega_xPhone_Buttons'] spawn Lega_fnc_changeMenu;";
};
