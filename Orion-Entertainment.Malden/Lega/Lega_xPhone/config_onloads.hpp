//Please dont edit this file if you dont know what you are doing, this is so the changeMenu script knows what function to load when changing rscControlGroups
class Lega_xPhoneOnloads
{
  class Lega_xPhone_Buttons
  {
    onload = "[] spawn lega_fnc_loadMainButtons";
  };
  class Lega_xPhone_ChangeBackground
  {
    onload = "[] spawn lega_fnc_loadBackgroundSelection";
  };
  class Lega_xPhone_Money
  {
    onload = "[] call Lega_fnc_xPhoneLoadMoneyMenu";
  };

  class Lega_xPhone_Inv
  {
    onload = "[] call Lega_fnc_xPhoneLoadInventory";
  };

  class Lega_xPhone_Licenses
  {
    onload = "[] call Lega_fnc_xPhoneLoadLicenses";
  };

  class Lega_xPhone_Settings
  {
    onload = "[] call Lega_fnc_xPhoneloadSettings";
  };

  class Lega_xPhone_KeyChain
  {
    onload = "[] call Lega_fnc_xPhoneLoadKeyChain";
  };

  class Lega_xPhone_ContactsMain
  {
    onload = "[] call Lega_fnc_xPhoneLoadContacts";
  };

  class Lega_xPhone_MessagesMain
  {
    onload = "[] spawn Lega_fnc_xPhoneLoadMessageList";
  };

  class Lega_xPhone_MessagesEmergency
  {
    onLoad = "[] spawn Lega_fnc_xPhoneOpenEmergencyMessage";
  };
  class Lega_xPhone_AdminMessage_Main
  {
    onLoad = "[] call Lega_fnc_adminMessagesLoad";
  };
};
