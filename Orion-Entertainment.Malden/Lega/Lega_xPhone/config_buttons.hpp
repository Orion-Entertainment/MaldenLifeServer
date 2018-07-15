//Please keep this class to 4 items, otherwise it will make it look funcky
class Lega_XPhone_BottomIcons
{
  class Keys
  {
    displayName = "KEYS";
    onCall = "['Lega_xPhone_KeyChain'] spawn Lega_fnc_changeMenu";
    image = "Keys.paa";
  };
  class Money
  {
    displayName = "MONEY";
    onCall = "['Lega_xPhone_Money'] spawn Lega_fnc_changeMenu";
    image = "money.paa";
  };
  class Sync
  {
    displayName = "SYNC DATA";
    onCall = "[] call SOCK_fnc_syncData";
    image = "sync.paa";
    conditions = "call life_adminlevel >= 1";
  };
  class Inventory
  {
    displayName = "INVENTORY";
    onCall = "['Lega_xPhone_Inv'] spawn Lega_fnc_changeMenu";
    image = "Inventory.paa";
  };
};

//This is where you edit most of the buttons.
class Lega_XphoneOptions
{
  class Licenses
  {
    displayName = "LICENSES";
    onCall = "['Lega_xPhone_Licenses'] spawn Lega_fnc_changeMenu";
    image = "licenses.paa";
    conditions = "";
  };
  class Settings
  {
    displayName = "SETTINGS";
    onCall = "['Lega_xPhone_Settings'] spawn Lega_fnc_changeMenu";
    image = "settings.paa";
    conditions = "";
  };
  class GangMenu
  {
    displayName = "GANG MENU";
    onCall = "[] spawn Lega_fnc_xPhoneLoadGangMenu";
    image = "gang.paa";
    conditions = "playerSide isEqualTo Civilian";
  };
  class Contacts
  {
    displayName = "CONTACTS";
    onCall = "['Lega_xPhone_ContactsMain'] spawn Lega_fnc_changeMenu";
    image = "Contacts.paa";
    conditions = "";
  };
  class Messages
  {
    displayName = "MESSAGES";
    onCall = "['Lega_xPhone_MessagesMain'] spawn Lega_fnc_changeMenu";
    image = "Messages.paa";
    conditions = "";
  };
  class EmergencyMessage
  {
    displayName = "Dispatch";
    onCall = "['Lega_xPhone_MessagesEmergency'] spawn Lega_fnc_changeMenu";
    image = "999_messaging.paa";
    conditions = "!(playerSide isEqualTo Civilian)";
  };
  class EmergencyMessageTo
  {
    displayName = "999";
    onCall = "['Lega_xPhone_EmergencyMessage'] spawn Lega_fnc_changeMenu";
    image = "999_dispatch.paa";
    conditions = "";
  };
  class wantedList
  {
    displayName = "WANTED";
    onCall = "[] call life_fnc_wantedMenu";
    image = "wanted.paa";
    conditions = "playerSide isEqualTo WEST";
  };
  class AdminMessaging
  {
    displayName = "MSG ADMINS";
    onCall = "['Lega_xPhone_AdminMessage_Main'] spawn Lega_fnc_changeMenu";
    image = "admin-menu.paa";
    conditions = "call life_adminlevel >= 1";
  };
};
