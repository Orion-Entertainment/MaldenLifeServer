class Lega_xPhone_ContactAdd
{
        controls[] = {
                {"Lega_xPhone_ContactAdd_Background", 190001},
                {"Lega_xPhone_ContactAdd_FirstName", 190002},
                {"Lega_xPhone_ContactAdd_LastName", 190003},
                {"Lega_xPhone_ContactAdd_Company", 190004},
                {"Lega_xPhone_ContactAdd_Number", 190005},
                {"Lega_xPhone_ContactAdd_Email", 190006},
                {"Lega_xPhone_ContactAdd_BtnCancel", 190007},
                {"Lega_xPhone_ContactAdd_BtnDone", 190008},
                {"Lega_xPhone_ContactAdd_BtnHome", 190009}
        };
};

class Lega_xPhone_ContactAdd_Background: Lega_XPhoneRscPicture
{
        idc = 190001;
        text = "Lega\Lega_xPhone\Images\dialogImages\new_contact.paa";
        x = 0.318499 * safezoneW + safezoneX;
        y = 0.159 * safezoneH + safezoneY;
        w = 0.360937 * safezoneW;
        h = 0.638 * safezoneH;
};
class Lega_xPhone_ContactAdd_FirstName: XPhoneRscEdit
{
        idc = 190002;
        text = "First Name"; //--- ToDo: Localize;
        x = 0.45875 * safezoneW + safezoneX;
        y = 0.2616 * safezoneH + safezoneY;
        w = 0.115496 * safezoneW;
        h = 0.0176 * safezoneH;
        onSetFocus = "['contactaddfirst'] call Lega_fnc_xPhoneClearPlaceholder";
};
class Lega_xPhone_ContactAdd_LastName: XPhoneRscEdit
{
        idc = 190003;
        text = "Last Name"; //--- ToDo: Localize;
        x = 0.45875 * safezoneW + safezoneX;
        y = 0.291 * safezoneH + safezoneY;
        w = 0.115496 * safezoneW;
        h = 0.0176 * safezoneH;
        onSetFocus = "['contactaddlast'] call Lega_fnc_xPhoneClearPlaceholder";
};
class Lega_xPhone_ContactAdd_Company: XPhoneRscEdit
{
        idc = 190004;
        text = "Company"; //--- ToDo: Localize;
        x = 0.45875 * safezoneW + safezoneX;
        y = 0.3193 * safezoneH + safezoneY;
        w = 0.115496 * safezoneW;
        h = 0.0176 * safezoneH;
        onSetFocus = "['contactaddcompany'] call Lega_fnc_xPhoneClearPlaceholder";
};
class Lega_xPhone_ContactAdd_Number: XPhoneRscEdit
{
        idc = 190005;
        text = "Number"; //--- ToDo: Localize;
        x = 0.45875 * safezoneW + safezoneX;
        y = 0.3834 * safezoneH + safezoneY;
        w = 0.115496 * safezoneW;
        h = 0.0176 * safezoneH;
        onSetFocus = "['contactaddnumber'] call Lega_fnc_xPhoneClearPlaceholder";
};
class Lega_xPhone_ContactAdd_Email : XPhoneRscEdit
{
        idc = 190006;
        text = "Email"; //--- ToDo: Localize;
        x = 0.45875 * safezoneW + safezoneX;
        y = 0.4714 * safezoneH + safezoneY;
        w = 0.115496 * safezoneW;
        h = 0.0176 * safezoneH;
        onSetFocus = "['contactaddemail'] call Lega_fnc_xPhoneClearPlaceholder";
};
class Lega_xPhone_ContactAdd_BtnCancel: XPhoneIconControlButton
{
        idc = 190007;
        x = 0.428178 * safezoneW + safezoneX;
        y = 0.225459 * safezoneH + safezoneY;
        w = 0.0247505 * safezoneW;
        h = 0.0198 * safezoneH;
        onButtonClick = "['last'] spawn Lega_fnc_changeMenu";
};
class Lega_xPhone_ContactAdd_BtnDone: XPhoneIconControlButton
{
        idc = 190008;
        x = 0.547437 * safezoneW + safezoneX;
        y = 0.225 * safezoneH + safezoneY;
        w = 0.0247505 * safezoneW;
        h = 0.0198 * safezoneH;
        onButtonClick = "[] call Lega_fnc_xPhoneContactChange";
};
class Lega_xPhone_ContactAdd_BtnHome: XPhoneIconControlButton
{
        idc = 190009;
        x = 0.469062 * safezoneW + safezoneX;
        y = 0.7618 * safezoneH + safezoneY;
        w = 0.0587812 * safezoneW;
        h = 0.011 * safezoneH;
        onButtonClick = "['Lega_xPhone_Buttons'] spawn Lega_fnc_changeMenu;";
};
