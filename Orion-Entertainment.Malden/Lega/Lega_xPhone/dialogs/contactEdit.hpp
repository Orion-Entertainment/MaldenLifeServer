class Lega_xPhone_ContactEdit
{
        controls[] = {
                {"Lega_xPhone_ContactEdit_Background", 200001},
                {"Lega_xPhone_ContactEdit_FirstName", 200002},
                {"Lega_xPhone_ContactEdit_LastName", 200003},
                {"Lega_xPhone_ContactEdit_Company", 200004},
                {"Lega_xPhone_ContactEdit_Number", 200005},
                {"Lega_xPhone_ContactEdit_Email", 200006},
                {"Lega_xPhone_ContactEdit_BtnHome", 200007},
                {"Lega_xPhone_ContactEdit_BtnCancel", 200008},
                {"Lega_xPhone_ContactEdit_BtnDone", 200009}
        };
};

class Lega_xPhone_ContactEdit_Background: Lega_XPhoneRscPicture
{
        idc = 200001;
        text = "Lega\Lega_xPhone\Images\dialogImages\edit_contact.paa";
        x = 0.318499 * safezoneW + safezoneX;
        y = 0.159 * safezoneH + safezoneY;
        w = 0.360937 * safezoneW;
        h = 0.638 * safezoneH;
};
class Lega_xPhone_ContactEdit_FirstName: XPhoneRscEdit
{
        idc = 200002;
        text = "First Name"; //--- ToDo: Localize;
        x = 0.45875 * safezoneW + safezoneX;
        y = 0.2616 * safezoneH + safezoneY;
        w = 0.115496 * safezoneW;
        h = 0.0176 * safezoneH;
        onSetFocus = "['contacteditfirst'] call Lega_fnc_xPhoneClearPlaceholder";
};
class Lega_xPhone_ContactEdit_LastName: XPhoneRscEdit
{
        idc = 200003;
        text = "Last Name"; //--- ToDo: Localize;
        x = 0.45875 * safezoneW + safezoneX;
        y = 0.291 * safezoneH + safezoneY;
        w = 0.115496 * safezoneW;
        h = 0.0176 * safezoneH;
        onSetFocus = "['contacteditlast'] call Lega_fnc_xPhoneClearPlaceholder";
};
class Lega_xPhone_ContactEdit_Company: XPhoneRscEdit
{
        idc = 200004;
        text = "Company"; //--- ToDo: Localize;
        x = 0.45875 * safezoneW + safezoneX;
        y = 0.3193 * safezoneH + safezoneY;
        w = 0.115496 * safezoneW;
        h = 0.0176 * safezoneH;
        onSetFocus = "['contacteditcompany'] call Lega_fnc_xPhoneClearPlaceholder";
};
class Lega_xPhone_ContactEdit_Number: XPhoneRscEdit
{
        idc = 200005;
        text = "Number"; //--- ToDo: Localize;
        x = 0.45875 * safezoneW + safezoneX;
        y = 0.3834 * safezoneH + safezoneY;
        w = 0.115496 * safezoneW;
        h = 0.0176 * safezoneH;
        onSetFocus = "['contacteditnumber'] call Lega_fnc_xPhoneClearPlaceholder";
};
class Lega_xPhone_ContactEdit_Email: XPhoneRscEdit
{
        idc = 200006;
        text = "Email"; //--- ToDo: Localize;
        x = 0.45875 * safezoneW + safezoneX;
        y = 0.4714 * safezoneH + safezoneY;
        w = 0.115496 * safezoneW;
        h = 0.0176 * safezoneH;
        onSetFocus = "['contacteditemail'] call Lega_fnc_xPhoneClearPlaceholder";
};
class Lega_xPhone_ContactEdit_BtnHome: XPhoneIconControlButton
{
        idc = 200007;
        x = 0.469062 * safezoneW + safezoneX;
        y = 0.7618 * safezoneH + safezoneY;
        w = 0.0587812 * safezoneW;
        h = 0.011 * safezoneH;
        onButtonClick = "['Lega_xPhone_Buttons'] spawn Lega_fnc_changeMenu;";
};
class Lega_xPhone_ContactEdit_BtnCancel: XPhoneIconControlButton
{
        idc = 200008;
        x = 0.428178 * safezoneW + safezoneX;
        y = 0.225459 * safezoneH + safezoneY;
        w = 0.0247505 * safezoneW;
        h = 0.0198 * safezoneH;
};
class Lega_xPhone_ContactEdit_BtnDone: XPhoneIconControlButton
{
        idc = 200009;
        x = 0.547437 * safezoneW + safezoneX;
        y = 0.225 * safezoneH + safezoneY;
        w = 0.0247505 * safezoneW;
        h = 0.0198 * safezoneH;
};
