phoneUiPage = 0;

/*
Config Signature
[
	["Name", "Action", "Tooltip", "Imagepath", "Condition"]
]
*/
Orion_Life_Phone_Config = [
	["1","createDialog 'TTM_GUI_RscDisplayTalentOverview'; _d = findDisplay -1; _d closeDisplay 1","Skills","images\textures\Phone\subIcons\p_Skills.paa",""],
	["2","createDialog 'Life_my_smartphone'; _d = findDisplay -1; _d closeDisplay 1","Chat","images\textures\Phone\subIcons\p_Chat.paa",""],
	["3","createDialog 'RscDisplayServerInfoMenu'; _d = findDisplay -1; _d closeDisplay 1","Info","images\textures\Phone\subIcons\p_Info.paa",""],
	["4","createDialog 'Life_inventory_menu'; _d = findDisplay -1; _d closeDisplay 1","Inventory","images\textures\Phone\subIcons\p_Inventory.paa",""],
	["5","createDialog 'Life_key_management'; _d = findDisplay -1; _d closeDisplay 1","Key","images\textures\Phone\subIcons\p_Key.paa",""],
	["6","","Market is Disabled","images\textures\Phone\subIcons\p_Market.paa",""],
	["7","createDialog 'Life_money_menu'; _d = findDisplay -1; _d closeDisplay 1","Money","images\textures\Phone\subIcons\p_Money.paa",""],
	["8","[] call life_fnc_settingsMenu; _d = findDisplay -1; _d closeDisplay 1","Settings","images\textures\Phone\subIcons\p_Settings.paa",""],
	["9","createDialog 'holy_bug'; _d = findDisplay -1; _d closeDisplay 1","Bug Report","images\textures\Phone\subIcons\p_Bug.paa",""],
	["22","if (isNil 'life_action_gangInUse') then {if (isNil {(group player) getVariable 'gang_owner'}) then {createDialog 'Life_Create_Gang_Diag';} else {[] spawn life_fnc_gangMenu;};}; _d = findDisplay -1; _d closeDisplay 1","Gang","images\textures\Phone\subIcons\p_Gang.paa","side player == civilian"],
	["33","[] call life_fnc_groupMenu; _d = findDisplay -1; _d closeDisplay 1","Group","images\textures\Phone\subIcons\p_Group.paa","side player == civilian"],
	["44","[] call life_fnc_wantedMenu; _d = findDisplay -1; _d closeDisplay 1","Wanted","images\textures\Phone\subIcons\p_Wanted.paa","side player == west"],
	["55","[] spawn life_fnc_placeablesMenu; _d = findDisplay -1; _d closeDisplay 1","Barrier","images\textures\Phone\subIcons\p_Barrier.paa","side player == independent || side player == west"]
];

Orion_Life_Phone_StartPos = [0.34,0.13];    //defines the corner that the images will be placed relative to
Orion_Life_Phone_SizeOfImage = 32;          //Size of the image elements square
Orion_Life_Phone_Padding = 0.03;            //Padding between Images
Orion_Life_Phone_Grid_Height = 5;
Orion_Life_Phone_Grid_Width = 3;