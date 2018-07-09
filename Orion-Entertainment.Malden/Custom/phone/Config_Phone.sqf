phoneUiPage = 0;

/*
Config Signature
[
	["Name", "Action", "Tooltip", "Imagepath", "Condition"]
]
*/
Orion_Life_Phone_Config = [
	["1","createDialog 'Life_My_Gang_Diag'; _d = findDisplay -1; _d closeDisplay 1","Gang","images\textures\Phone\subIcons\p_Gang.paa","side player == civilian"],
	["2","createDialog 'holy_bug'; _d = findDisplay -1; _d closeDisplay 1","Bug Report","images\textures\Phone\subIcons\p_Bug.paa",""],
	["3","createDialog 'Life_Cop_Placeables'; _d = findDisplay -1; _d closeDisplay 1","Barrier","images\textures\Phone\subIcons\p_Barrier.paa","side player == independent || side player == west"],
	["4","createDialog 'Life_my_smartphone'; _d = findDisplay -1; _d closeDisplay 1","Chat","images\textures\Phone\subIcons\p_Chat.paa",""],
	["5","createDialog 'life_my_group_Diag'; _d = findDisplay -1; _d closeDisplay 1","Group","images\textures\Phone\subIcons\p_Group.paa","side player ==  civilian"],
	["7","createDialog 'RscDisplayServerInfoMenu'; _d = findDisplay -1; _d closeDisplay 1","Info","images\textures\Phone\subIcons\p_Info.paa",""],
	["8","createDialog 'Life_inventory_menu'; _d = findDisplay -1; _d closeDisplay 1","Inventory","images\textures\Phone\subIcons\p_Inventory.paa",""],
	["9","createDialog 'Life_key_management'; _d = findDisplay -1; _d closeDisplay 1","Key","images\textures\Phone\subIcons\p_Key.paa",""],
	["0","","Market is Disabled","images\textures\Phone\subIcons\p_Market.paa",""],
	["22","createDialog 'Life_money_menu'; _d = findDisplay -1; _d closeDisplay 1","Money","images\textures\Phone\subIcons\p_Money.paa",""],
	["55","createDialog 'SettingsMenu'; _d = findDisplay -1; _d closeDisplay 1","Settings","images\textures\Phone\subIcons\p_Settings.paa",""],
	["66","createDialog 'TTM_GUI_RscDisplayTalentOverview'; _d = findDisplay -1; _d closeDisplay 1","Skills","images\textures\Phone\subIcons\p_Skills.paa",""],
	["77","createDialog 'life_wanted_menu'; _d = findDisplay -1; _d closeDisplay 1","Wanted","images\textures\Phone\subIcons\p_Wanted.paa","side player == independent || side player == west"]
];

Orion_Life_Phone_StartPos = [0.34,0.13];    //defines the corner that the images will be placed relative to
Orion_Life_Phone_SizeOfImage = 32;          //Size of the image elements square
Orion_Life_Phone_Padding = 0.03;            //Padding between Images
Orion_Life_Phone_Grid_Height = 5;
Orion_Life_Phone_Grid_Width = 3;