phoneUiPage = 0;

/*
Config Signature
[
	["Name", "Action", "Tooltip", "Imagepath", "Condition"]
]
*/
Orion_Life_Phone_Config = [
	["1","createDialog 'Life_My_Gang_Diag'; _d = findDisplay -1; _d closeDisplay 1","Gang","Resources\Gang1.paa",""],
	["2","createDialog 'holy_bug'; _d = findDisplay -1; _d closeDisplay 1","Bug Report","Resources\Bug1.paa",""],
	["3","createDialog 'Life_Cop_Placeables'; _d = findDisplay -1; _d closeDisplay 1","Barrier","Resources\Barrier1.paa",""],
	["4","createDialog 'Life_my_smartphone'; _d = findDisplay -1; _d closeDisplay 1","Chat","Resources\Chat1.paa",""],
	["5","createDialog 'life_my_group_Diag'; _d = findDisplay -1; _d closeDisplay 1","Group","Resources\Group1.paa",""],
	["7","createDialog 'RscDisplayServerInfoMenu'; _d = findDisplay -1; _d closeDisplay 1","Info","Resources\Info1.paa",""],
	["8","createDialog 'Life_inventory_menu'; _d = findDisplay -1; _d closeDisplay 1","Inventory","Resources\Inventory1.paa",""],
	["9","createDialog 'Life_key_management'; _d = findDisplay -1; _d closeDisplay 1","Key","Resources\Key1.paa",""],
	["0","","Market is Disabled","Resources\Market1.paa",""],
	["22","createDialog 'Life_money_menu'; _d = findDisplay -1; _d closeDisplay 1","Money","Resources\Money1.paa",""],
	["55","createDialog 'SettingsMenu'; _d = findDisplay -1; _d closeDisplay 1","Settings","Resources\Settings1.paa",""],
	["66","createDialog 'TTM_GUI_RscDisplayTalentOverview'; _d = findDisplay -1; _d closeDisplay 1","Skills","Resources\Skills1.paa",""],
	["77","createDialog 'life_wanted_menu'; _d = findDisplay -1; _d closeDisplay 1","Wanted","Resources\Wanted1.paa",""]
];

Orion_Life_Phone_StartPos = [0.34,0.13];    //defines the corner that the images will be placed relative to
Orion_Life_Phone_SizeOfImage = 32;          //Size of the image elements square
Orion_Life_Phone_Padding = 0.03;            //Padding between Images
Orion_Life_Phone_Grid_Height = 5;
Orion_Life_Phone_Grid_Width = 3;