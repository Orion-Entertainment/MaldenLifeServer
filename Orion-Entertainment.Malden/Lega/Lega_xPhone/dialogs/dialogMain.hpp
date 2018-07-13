#include "warning.hpp"
#include "settings.hpp"
#include "buttons.hpp"
#include "backgroundSelection.hpp"
#include "licenses.hpp"
#include "money.hpp"
#include "Inventory.hpp"
#include "keychain.hpp"
#include "gangMain.hpp"
#include "gangCreate.hpp"
#include "ContactsMain.hpp"
#include "setup.hpp"
#include "contactEdit.hpp"
#include "contactAdd.hpp"
#include "contactView.hpp"
#include "Messages.hpp"
#include "MessagingMain.hpp"


class Lega_xPhone
{
  idd = 19931;
  name = "Lega_xPhone";
  movingEnable = 0;
  enableSimulation = 1;
  onLoad = "uiNamespace setVariable ['Lega_xPhone', _this select 0];";
  onUnload = "uiNamespace setVariable ['Lega_xPhone', displayNull]";
  onDestroy = "uiNamespace setVariable ['Lega_xPhone', displayNull]";
  class controlsBackground
  {
    class Lega_xPhone_Background: Lega_XPhoneRscPicture
    {
      idc = -1;
      //text = "";
      text = "Lega\Lega_xPhone\Images\background.paa";
      x = 0.318499 * safezoneW + safezoneX;
      y = 0.159 * safezoneH + safezoneY;
      w = 0.360937 * safezoneW;
      h = 0.638 * safezoneH;
    };
  };
  class controls
  {
    class Lega_xPhone_Background_Changable: Lega_XPhoneRscPicture
    {
      idc = 987;
      text = "Lega\Lega_xPhone\Images\backgrounds\Background_2.paa";
      x = 0.318499 * safezoneW + safezoneX;
      y = (0.225 - 0.066) * safezoneH + safezoneY;
      w = 0.360937 * safezoneW;
      h = 0.638 * safezoneH;
    };
    class Lega_xPhone_Background_Changable2: Lega_XPhoneRscPicture
    {
      idc = 988;
      text = "Lega\Lega_xPhone\Images\backgrounds\Background_2.paa";
      x = 0.318499 * safezoneW + safezoneX;
      y = (0.225 - 0.066) * safezoneH + safezoneY;
      w = 0.360937 * safezoneW;
      h = 0.638 * safezoneH;
    };
  };
};
