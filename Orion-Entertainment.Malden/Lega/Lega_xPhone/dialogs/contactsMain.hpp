class Lega_xPhone_ContactsMain : Life_RscControlsGroupNoScrollbars
{
          controls[] = {
                    {"Lega_xPhone_ContactsMain_Background", 170001},
                    {"Lega_xPhone_ContactsMain_ContactsGroup", 170002},
                    {"Lega_xPhone_ContactsMain_BtnHome", 170003},
                    {"Lega_xPhone_ContactsMain_BtnNew", 170004}
          };
};


class Lega_xPhone_ContactsMain_Background: Lega_XPhoneRscPicture
{
          idc = 170001;
          text = "Lega\Lega_xPhone\Images\dialogImages\ContactsBackground.paa";
          x = 0.3185 * safezoneW + safezoneX;
          y = 0.159 * safezoneH + safezoneY;
          w = 0.360937 * safezoneW;
          h = 0.638 * safezoneH;
};
class Lega_xPhone_ContactsMain_ContactsGroup: Life_RscControlsGroupNoScrollbars
{
          idc = 170002;
          x = 0.422656 * safezoneW + safezoneX;
          y = 0.2756 * safezoneH + safezoneY;
          w = 0.153656 * safezoneW;
          h = 0.453 * safezoneH;
          class controls {};
};
class Lega_xPhone_ContactsMain_BtnHome: XPhoneIconControlButton
{
          idc = 170003;
          x = 0.469062 * safezoneW + safezoneX;
          y = 0.7618 * safezoneH + safezoneY;
          w = 0.0587812 * safezoneW;
          h = 0.011 * safezoneH;
          onButtonClick = "['Lega_xPhone_Buttons'] spawn Lega_fnc_changeMenu;";
};
class Lega_xPhone_ContactsMain_BtnNew: XPhoneIconControlButton
{
          idc = 170004;
          x = 0.561875 * safezoneW + safezoneX;
          y = 0.214 * safezoneH + safezoneY;
          w = 0.00928125 * safezoneW;
          h = 0.0176 * safezoneH;
          onbuttonClick = "['Lega_xPhone_ContactAdd'] spawn Lega_fnc_changeMenu";
};
