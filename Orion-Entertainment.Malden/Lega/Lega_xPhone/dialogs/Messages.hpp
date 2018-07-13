class Lega_xPhone_MessagesView : Life_RscControlsGroupNoScrollbars
{
        controls[] = {
                {"Lega_xPhone_MessagesView_Background", 230001},
                {"Lega_xPhone_MessagesView_ContactsGroup", 230002},
                {"Lega_xPhone_MessagesView_BtnHome", 230003},
                {"Lega_xPhone_MessagesView_BtnBack", 230004},
                {"Lega_xPhone_MessagesView_TextBox", 230005},
                {"Lega_xPhone_MessagesView_ContactInfo", 230006},
                {"Lega_xPhone_MessagesView_InfoButton", 230007},
                {"Lega_xPhone_MessagesView_BtnSendMessage", 230008}
        };
};

class Lega_xPhone_MessagesView_Background: Lega_XPhoneRscPicture
{
        idc = 230001;
        text = "Lega\Lega_xPhone\Images\dialogImages\MessageViewBackground.paa";
        x = 0.3185 * safezoneW + safezoneX;
        y = 0.159 * safezoneH + safezoneY;
        w = 0.360937 * safezoneW;
        h = 0.638 * safezoneH;
};
class Lega_xPhone_MessagesView_ContactsGroup: Life_RscControlsGroupNoScrollbars
{
        idc = 230002;
        x = 0.422656 * safezoneW + safezoneX;
        y = (0.3416 - 0.066) * safezoneH + safezoneY;
        w = 0.153656 * safezoneW;
        h = 0.3716 * safezoneH;
        class controls {};
};
class Lega_xPhone_MessagesView_BtnHome: XPhoneIconControlButton
{
        idc = 230003;
        x = 0.470094 * safezoneW + safezoneX;
        y = (0.8248 - 0.066) * safezoneH + safezoneY;
        w = 0.0567187 * safezoneW;
        h = 0.011 * safezoneH;
        onButtonClick = "['Lega_xPhone_Buttons'] spawn Lega_fnc_changeMenu;";
};
class Lega_xPhone_MessagesView_BtnBack: XPhoneIconControlButton
{
        idc = 230004;
        x = 0.424718 * safezoneW + safezoneX;
        y = (0.28 - 0.066) * safezoneH + safezoneY;
        w = 0.0422815 * safezoneW;
        h = 0.0154 * safezoneH;
        onButtonClick = "['last'] spawn Lega_fnc_changeMenu";
};
class Lega_xPhone_MessagesView_TextBox: XPhoneRscEdit
{
        idc = 230005;
        text = "";
        x = 0.42575 * safezoneW + safezoneX;
        y = (0.72 - 0.066) * safezoneH + safezoneY;
        w = 0.137156 * safezoneW;
        h = 0.0704 * safezoneH;
        style = 16 + 512;
        onSetFocus = "['messagebox'] call Lega_fnc_xPhoneClearPlaceholder";
};
class Lega_xPhone_MessagesView_ContactInfo: Life_RscStructuredText
{
        idc = 230006;
        text = "test";
        x = 0.424719 * safezoneW + safezoneX;
        y = (0.3196 - 0.066) * safezoneH + safezoneY;
        w = 0.149531 * safezoneW;
        h = 0.0198 * safezoneH;
};
class Lega_xPhone_MessagesView_InfoButton: XPhoneIconControlButton
{
        idc = 230007;
        x = 0.562906 * safezoneW + safezoneX;
        y = (0.28 - 0.066) * safezoneH + safezoneY;
        w = 0.0103125 * safezoneW;
        h = 0.0154 * safezoneH;
};
class Lega_xPhone_MessagesView_BtnSendMessage: XPhoneIconControlButton
{
        idc = 230008;
        x = 0.561875 * safezoneW + safezoneX;
        y = (0.7706 - 0.066) * safezoneH + safezoneY;
        w = 0.0134062 * safezoneW;
        h = 0.0242 * safezoneH;
};



class Lega_xPhone_MessagesEmergency : Life_RscControlsGroupNoScrollbars
{
        controls[] = {
                {"Lega_xPhone_MessagesEmergency_Background", 900001},
                {"Lega_xPhone_MessagesEmergency_MessagesGroup", 900002},
                {"Lega_xPhone_MessagesEmergency_BtnHome", 900003},
                {"Lega_xPhone_MessagesEmergency_BtnBack", 900004},
        };
};
class Lega_xPhone_MessagesEmergency_Background: Life_RscPictureKeepAspect
{
    idc = 900001;
    text = "Lega\Lega_xPhone\Images\dialogImages\Dispatch.paa";
    x = 0.318499 * safezoneW + safezoneX;
    y = 0.159 * safezoneH + safezoneY;
    w = 0.360937 * safezoneW;
    h = 0.638 * safezoneH;
};
class Lega_xPhone_MessagesEmergency_MessagesGroup: Life_RscControlsGroupNoScrollbars
{
    idc = 900002;
    x = 0.422656 * safezoneW + safezoneX;
    y = 0.2756 * safezoneH + safezoneY;
    w = 0.153656 * safezoneW;
    h = 0.453 * safezoneH;
    class controls {};
};
class  Lega_xPhone_MessagesEmergency_BtnHome: XPhoneIconControlButton
{
    x = 0.470094 * safezoneW + safezoneX;
    y = 0.7588 * safezoneH + safezoneY;
    w = 0.0567187 * safezoneW;
    h = 0.011 * safezoneH;
    onButtonClick = "['Lega_xPhone_Buttons'] spawn Lega_fnc_changeMenu;";
};
class  Lega_xPhone_MessagesEmergency_BtnBack: XPhoneIconControlButton
{
    x = 0.424719 * safezoneW + safezoneX;
    y = 0.214 * safezoneH + safezoneY;
    w = 0.020625 * safezoneW;
    h = 0.0154 * safezoneH;
    onButtonClick = "['last'] spawn Lega_fnc_changeMenu";
};
