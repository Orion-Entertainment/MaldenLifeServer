phoneUiPage = 0;

/*
Config Signature
[
	["Name", "Action", "Tooltip", "Imagepath", "Condition"]
]
*/
Orion_Life_Phone_Config = [
// General
	["1","createDialog 'RscDisplayServerInfoMenu'","Info","images\textures\Phone\subIcons\p_Info.paa",""],
	["2","createDialog 'life_license_menu'","ID","images\textures\Phone\subIcons\p_ID.paa",""],
	["3","createDialog 'life_inventory_menu'","Inventory","images\textures\Phone\subIcons\p_Inventory.paa",""],
	["4","hint 'Key'","Key","images\textures\Phone\subIcons\p_Key.paa",""],
	["6","hint 'Money'","Money","images\textures\Phone\subIcons\p_Money.paa",""],
	["5","hint 'Settings'","Settings","images\textures\Phone\subIcons\p_Settings.paa",""],
	["7","createDialog 'TTM_GUI_RscDisplayTalentOverview'","Skills","images\textures\Phone\subIcons\p_Skills.paa",""],
	["8","hint 'Chat'","Chat","images\textures\Phone\subIcons\p_Chat.paa",""],
	["9","hint 'Market'","Market","images\textures\Phone\subIcons\p_Market.paa",""],
	["0","createDialog 'holy_bug'","Bug Report","images\textures\Phone\subIcons\p_Bug.paa",""],

	
// Civ
	["11","hint 'Gang'","Gang","images\textures\Phone\subIcons\p_Gang.paa","side player ==  Civilian"],
	["22","hint 'Group'","Group","images\textures\Phone\subIcons\p_Group.paa","side player ==  Civilian"],
	
// Cop+Medic
	["33","hint 'Barrier'","Barrier","images\textures\Phone\subIcons\p_Barrier.paa","side player ==  independent || side player == west"],
	["44","createDialog 'life_wanted_menu'","Wanted","images\textures\Phone\subIcons\p_Wanted.paa","side player == west"],
	

	["55","hint 'RArrow'","RArrow","images\textures\Phone\subIcons\p_Rarrow.paa",""],
	["66","hint 'LArrow'","LArrow","images\textures\Phone\subIcons\p_Larrow.paa",""],
	["77","hint 'Blank'","Blank","images\textures\Phone\subIcons\p_Wanted.paa",""],
	["88","hint 'Blank'","Blank","images\textures\Phone\subIcons\p_Wanted.paa",""]
];

Orion_Life_Phone_StartPos = [0.34,0.13];    //defines the corner that the images will be placed relative to
Orion_Life_Phone_SizeOfImage = 32;          //Size of the image elements square
Orion_Life_Phone_Padding = 0.03;            //Padding between Images
Orion_Life_Phone_Grid_Height = 5;
Orion_Life_Phone_Grid_Width = 3;