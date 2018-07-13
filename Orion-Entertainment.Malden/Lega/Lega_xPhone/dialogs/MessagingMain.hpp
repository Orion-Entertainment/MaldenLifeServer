class Lega_xPhone_MessagesMain : Life_RscControlsGroupNoScrollbars
{
    controls[] =  {
        {"Lega_xPhone_MessagesMain_Background", 250001},
        {"Lega_xPhone_MessagesMain_ContactsGroup", 250002},
        {"Lega_xPhone_MessagesMain_BtnHome", 250003},
        {"Lega_xPhone_MessagesMain_BtnBack", 250004}
    };
};

class Lega_xPhone_MessagesMain_Background: Lega_XPhoneRscPicture
{
    idc = 250001;
    text = "Lega\Lega_xPhone\Images\dialogImages\MessageMainBackground.paa";
    x = 0.3185 * safezoneW + safezoneX;
    y = 0.159 * safezoneH + safezoneY;
    w = 0.360937 * safezoneW;
    h = 0.638 * safezoneH;
};
class Lega_xPhone_MessagesMain_ContactsGroup: Life_RscControlsGroupNoScrollbars
{
    idc = 250002;
    x = 0.422656 * safezoneW + safezoneX;
    y = 0.2756 * safezoneH + safezoneY;
    w = 0.153656 * safezoneW;
    h = 0.453 * safezoneH;
    class controls {};
};
class Lega_xPhone_MessagesMain_BtnHome: XPhoneIconControlButton
{
    idc = 250003;
    x = 0.470094 * safezoneW + safezoneX;
    y = 0.7588 * safezoneH + safezoneY;
    w = 0.0567187 * safezoneW;
    h = 0.011 * safezoneH;
    onButtonClick = "['Lega_xPhone_Buttons'] spawn Lega_fnc_changeMenu;";
};
class Lega_xPhone_MessagesMain_BtnBack: XPhoneIconControlButton
{
    idc = 250004;
    x = 0.424719 * safezoneW + safezoneX;
    y = 0.214 * safezoneH + safezoneY;
    w = 0.020625 * safezoneW;
    h = 0.0154 * safezoneH;
    onButtonClick = "['last'] spawn Lega_fnc_changeMenu";
};


class Lega_xPhone_EmergencyMessage : Life_RscControlsGroupNoScrollbars
{
    controls[] = {
        {"Lega_xPhone_EmergencyMessage_Background",800001},
        {"Lega_xPhone_EmergencyMessage_ContactsGroup", 800002},
        {"Lega_xPhone_EmergencyMessage_BtnHome", 800003},
        {"Lega_xPhone_EmergencyMessage_BtnBack", 800004},
        {"Lega_xPhone_EmergencyMessage_TextBox", 800005},
        {"Lega_xPhone_EmergencyMessage_BtnSendCops", 800006},
        {"Lega_xPhone_EmergencyMessage_BtnSendEMS", 800007}
    };
};

class Lega_xPhone_EmergencyMessage_Background: Life_RscPictureKeepAspect
{
    idc = 800001;
    text = "Lega\Lega_xPhone\Images\dialogImages\ES_Background.paa";
    x = 0.318499 * safezoneW + safezoneX;
    y = 0.159 * safezoneH + safezoneY;
    w = 0.360937 * safezoneW;
    h = 0.638 * safezoneH;
};
class Lega_xPhone_EmergencyMessage_ContactsGroup: Life_RscControlsGroupNoScrollbars
{
    idc = 800002;
    x = 0.422656 * safezoneW + safezoneX;
    y = (0.3416 - 0.066) * safezoneH + safezoneY;
    w = 0.153656 * safezoneW;
    h = 0.3716 * safezoneH;
    class controls {};
};
class Lega_xPhone_EmergencyMessage_BtnHome: XPhoneIconControlButton
{
    idc = 800003;
    x = 0.470094 * safezoneW + safezoneX;
    y = 0.7588 * safezoneH + safezoneY;
    w = 0.0567187 * safezoneW;
    h = 0.011 * safezoneH;
    onButtonClick = "['Lega_xPhone_Buttons'] spawn Lega_fnc_changeMenu;";
};
class Lega_xPhone_EmergencyMessage_BtnBack: XPhoneIconControlButton
{
    idc = 800004;
    x = 0.424719 * safezoneW + safezoneX;
    y = 0.214 * safezoneH + safezoneY;
    w = 0.020625 * safezoneW;
    h = 0.0154 * safezoneH;
    onButtonClick = "['last'] spawn Lega_fnc_changeMenu";
};
class Lega_xPhone_EmergencyMessage_TextBox: XPhoneRscEdit
{
    idc = 800005;
    text = "Type Message Here";
    x = 0.42575 * safezoneW + safezoneX;
    y = (0.72 - 0.066) * safezoneH + safezoneY;
    w = 0.137156 * safezoneW;
    h = 0.0704 * safezoneH;
    style = 16 + 512;
    onSetFocus = "['messagebox'] call Lega_fnc_xPhoneClearPlaceholder";
};
class Lega_xPhone_EmergencyMessage_BtnSendCops: XPhoneIconControlButton
{
    idc = 800006;
    x = 0.561875 * safezoneW + safezoneX;
    y = (0.7706 - 0.066) * safezoneH + safezoneY;
    w = 0.0134062 * safezoneW;
    h = 0.0242 * safezoneH;
    onButtonClick = "['cop'] call Lega_fnc_xPhoneSendEMessage";
};
class Lega_xPhone_EmergencyMessage_BtnSendEMS: XPhoneIconControlButton
{
    idc = 800007;
    x = 0.562907 * safezoneW + safezoneX;
    y = (0.753 - 0.066) * safezoneH + safezoneY;
    w = 0.0113438 * safezoneW;
    h = 0.0176 * safezoneH;
    onButtonClick = "['ems'] call Lega_fnc_xPhoneSendEMessage";
};
