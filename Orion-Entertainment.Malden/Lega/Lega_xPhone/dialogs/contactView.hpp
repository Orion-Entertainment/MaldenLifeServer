class Lega_xPhone_ContactView
{
      controls[] = {
            {"Lega_xPhone_ContactView_Background", 210001},
            {"Lega_xPhone_ContactView_BtnMessage", 210002},
            {"Lega_xPhone_ContactView_BtnPay", 210003},
            {"Lega_xPhone_ContactView_NameRscText", 210004},
            {"Lega_xPhone_ContactView_PhoneRscText", 210005},
            {"Lega_xPhone_ContactView_EmailRscText", 210006},
            {"Lega_xPhone_ContactView_BtnSendMessage", 210007},
            {"Lega_xPhone_ContactView_BtnContacts", 210008},
            {"Lega_xPhone_ContactView_BtnEdit", 210009},
            {"Lega_xPhone_ContactView_BtnHome", 210010},
            {"Lega_xPhone_ContactView_BtnDelete", 210011}
      };
};

class Lega_xPhone_ContactView_Background : Lega_XPhoneRscPicture
{
      idc = 210001;
      text = "Lega\Lega_xPhone\Images\dialogImages\view_contact.paa";
      x = 0.3185 * safezoneW + safezoneX;
      y = 0.159 * safezoneH + safezoneY;
      w = 0.360937 * safezoneW;
      h = 0.638 * safezoneH;
};
class Lega_xPhone_ContactView_BtnMessage: XPhoneIconControlButton
{
      idc = 210002;
      x = 0.460812 * safezoneW + safezoneX;
      y = 0.335 * safezoneH + safezoneY;
      w = 0.0206254 * safezoneW;
      h = 0.044 * safezoneH;
};
class Lega_xPhone_ContactView_BtnPay: XPhoneIconControlButton
{
      idc = 210003;
      x = 0.515469 * safezoneW + safezoneX;
      y = 0.335 * safezoneH + safezoneY;
      w = 0.0206254 * safezoneW;
      h = 0.044 * safezoneH;
};
class Lega_xPhone_ContactView_NameRscText: Life_RscStructuredText
{
      idc = 210004;
      x = 0.426788 * safezoneW + safezoneX;
      y = 0.302 * safezoneH + safezoneY;
      w = 0.146426 * safezoneW;
      h = 0.0286 * safezoneH;
      shadow = 0;
      class Attributes {
            font = "RobotoCondensed";
            color = "#000000";
            align = "center";
            shadow = 0;
            valign= "middle";
      };
};
class Lega_xPhone_ContactView_PhoneRscText: Life_RscText
{
      idc = 210005;
      x = 0.430905 * safezoneW + safezoneX;
      y = 0.4054 * safezoneH + safezoneY;
      w = 0.14024 * safezoneW;
      h = 0.0198 * safezoneH;
      shadow = 0;
      sizeEx = "(((pixelh * 5) * ((getResolution select 1) / 1080)) * 4)";
};
class Lega_xPhone_ContactView_EmailRscText: Life_RscText
{
      idc = 210006;
      x = 0.430905 * safezoneW + safezoneX;
      y = 0.4868 * safezoneH + safezoneY;
      w = 0.14024 * safezoneW;
      h = 0.0198 * safezoneH;
      shadow = 0;
      sizeEx = "(((pixelh * 5) * ((getResolution select 1) / 1080)) * 4)";
};
class Lega_xPhone_ContactView_BtnSendMessage: XPhoneIconControlButton
{
      idc = 210007;
      x = 0.428845 * safezoneW + safezoneX;
      y = 0.5418 * safezoneH + safezoneY;
      w = 0.142302 * safezoneW;
      h = 0.0308 * safezoneH;
};
class Lega_xPhone_ContactView_BtnContacts: XPhoneIconControlButton
{
      idc = 210008;
      x = 0.42575 * safezoneW + safezoneX;
      y = 0.225 * safezoneH + safezoneY;
      w = 0.0360938 * safezoneW;
      h = 0.0176 * safezoneH;
      onButtonClick = "['last'] spawn Lega_fnc_changeMenu";
};
class Lega_xPhone_ContactView_BtnEdit: XPhoneIconControlButton
{
      idc = 210009;
      x = 0.556719 * safezoneW + safezoneX;
      y = 0.225 * safezoneH + safezoneY;
      w = 0.0144377 * safezoneW;
      h = 0.0176 * safezoneH;
};
class Lega_xPhone_ContactView_BtnHome: XPhoneIconControlButton
{
      idc = 210010;
      x = 0.469062 * safezoneW + safezoneX;
      y = 0.7618 * safezoneH + safezoneY;
      w = 0.0587812 * safezoneW;
      h = 0.011 * safezoneH;
      onButtonClick = "['Lega_xPhone_Buttons'] spawn Lega_fnc_changeMenu;";
};
class Lega_xPhone_ContactView_BtnDelete: XPhoneIconControlButton
{
      idc = 210011;
      x = 0.428843 * safezoneW + safezoneX;
      y = 0.5726 * safezoneH + safezoneY;
      w = 0.142302 * safezoneW;
      h = 0.0308 * safezoneH;
};
