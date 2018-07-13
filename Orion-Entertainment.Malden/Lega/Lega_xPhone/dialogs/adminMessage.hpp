class Lega_xPhone_AdminMessage_Main
{
    controls[] = {
        {"Lega_xPhone_AdminMessage_Background", 5263},
        {"Lega_xPhone_AdminMessage_Listbox", 5264},
        {"Lega_xPhone_AdminMessage_TextBox", 5265},
        {"Lega_xPhone_AdminMessage_BtnSendMessage", 5266},
        {"Lega_xPhone_AdminMessage_BtnHome", 5267},
        {"Lega_xPhone_AdminMessage_BtnBack", 5268}
    };
};




class Lega_xPhone_AdminMessage_Background: Lega_XPhoneRscPicture
{
    text = "Lega\Lega_xPhone\Images\dialogImages\adminmessages.paa";
    x = 0.3185 * safezoneW + safezoneX;
    y = 0.159 * safezoneH + safezoneY;
    w = 0.360937 * safezoneW;
    h = 0.638 * safezoneH;
};
class Lega_xPhone_AdminMessage_Listbox: XPhoneRscCombo
{
  x = 0.423317 * safezoneW + safezoneX;
  y = 0.278067 * safezoneH + safezoneY;
  w = 0.151578 * safezoneW;
  h = 0.0206884 * safezoneH;
};
class Lega_xPhone_AdminMessage_TextBox: XPhoneRscEdit
{
    text = "";
    x = 0.42575 * safezoneW + safezoneX;
    y = (0.72 - 0.066) * safezoneH + safezoneY;
    w = 0.137156 * safezoneW;
    h = 0.0704 * safezoneH;
    style = 16 + 512;
};
class Lega_xPhone_AdminMessage_BtnSendMessage: XPhoneIconControlButton
{
        x = 0.561875 * safezoneW + safezoneX;
        y = (0.7706 - 0.066) * safezoneH + safezoneY;
        w = 0.0134062 * safezoneW;
        h = 0.0242 * safezoneH;
        onButtonClick = "[] call Lega_fnc_adminMessageSend";
};
class Lega_xPhone_AdminMessage_BtnHome: XPhoneIconControlButton
{
    x = 0.470094 * safezoneW + safezoneX;
    y = 0.7588 * safezoneH + safezoneY;
    w = 0.0567187 * safezoneW;
    h = 0.011 * safezoneH;
    onButtonClick = "['Lega_xPhone_Buttons'] spawn Lega_fnc_changeMenu;";
};
class Lega_xPhone_AdminMessage_BtnBack: XPhoneIconControlButton
{
    x = 0.424719 * safezoneW + safezoneX;
    y = 0.214 * safezoneH + safezoneY;
    w = 0.020625 * safezoneW;
    h = 0.0154 * safezoneH;
    onButtonClick = "['last'] spawn Lega_fnc_changeMenu";
};
