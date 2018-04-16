/*

	Main configuration for non-persistent market system
	Will need triggers to hook into vanilla pricing methods

*/

	//Schema: SHORTNAME, Default, Min, Max, changes in action, [Sales multiplied by 1, Purchase multiplied by -1]
	//["gold", 1500, 450, 2300, 8, 5],

////////////MAIN CONFIG

life_market_resources = [
	
	// Default İsler
	/*
	
	["rubyC", 3500, 2500, 4421, 5, 2, 
		[ 
			["diamond_cut",1], 
			["iron_refined",1],
			["copper_refined",1],
			["gold_refined",1],
			["cement",1],
			["glass",1],
			["salt_refined",1],
			["oil_processed",1],
			["oilSupplies",1]
		] 
	],
	
	["oilSupplies", 25000, 10000, 50000, 3, 1, 
		[ 
			["diamond_cut",1], 
			["iron_refined",1],
			["copper_refined",1],
			["gold_refined",1],
			["cement",1],
			["glass",1],
			["rubyC",1],
			["oil_processed",1]
		] 
	],
	
	["oil_processed", 4100, 2540, 5504, 3, 1, 
		[ 
			["diamond_cut",1], 
			["iron_refined",1],
			["copper_refined",1],
			["gold_refined",1],
			["cement",1],
			["glass",1],
			["rubyC",1],
			["oilSupplies",1]
		] 
	],
	
	["diamond_cut", 5000, 3281, 5932, 5, 2, 
		[ 
			["oil_processed",1],
			["iron_refined",1],
			["copper_refined",1],
			["gold_refined",1],
			["salt_refined",1],
			["cement",1],
			["glass",1],
			["rubyC",1],
			["oilSupplies",1]
		] 
	],
	
	["copper_refined", 2800, 1029, 3500, 2, 1, 
		[ 
			["diamond_cut",1], 
			["oil_processed",1],
			["iron_refined",1],
			["gold_refined",1],
			["cement",1],
			["glass",1],
			["rubyC",1],
			["oilSupplies",1]
		] 
	],
	
	["iron_refined", 3200, 1203, 4250, 3, 1,  
		[ 
			["diamond_cut",1], 
			["oil_processed",1],
			["copper_refined",1],
			["gold_refined",1],
			["salt_refined",1],
			["cement",1],
			["glass",1],
			["rubyC",1],
			["oilSupplies",1]
		] 
	],
	
	["salt_refined", 1958, 500, 2400, 2, 1, 
		[ 

			["copper_refined",1],
			["gold_refined",1],
			["glass",1],
			["rubyC",1]
		] 
	],
	
	["glass", 2550, 11500, 3821, 2, 1, 
		[ 
			["diamond_cut",1], 
			["oil_processed",1],
			["iron_refined",1],
			["copper_refined",1],
			["rubyC",1],
			["oilSupplies",1]
		] 
	],
	
	["cement", 3024, 214, 3612, 2, 1, 
		[ 

			["oil_processed",1],
			["iron_refined",1],
			["copper_refined",1],
			["glass",1],
			["rubyC",1],
			["oilSupplies",1]
		] 
	],
	
	["salt_refined", 1958, 500, 2400, 2, 1, 
		[ 

			["copper_refined",1],
			["gold_refined",1],
			["glass",1],
			["rubyC",1]
		] 
	],
	
	["goldenbarz3", 250000, 100000, 300000, 2, 1, 
		[ 
			["diamond_cut",1], 
			["oil_processed",1],
			["iron_refined",1],
			["copper_refined",1],
			["glass",1],
			["oilSupplies",1]
		] 
	],
	
	//Drugs
	
	["LSD", 7000, 3000, 8000, 15, 10,   
		[ 
			["cocaine_processed",1],
			["heroin_processed",1],
			["marijuana",1]
		] 
	],
	
	["marijuana", 3800, 2703, 4200, 10, 7,   
		[ 
			["cocaine_processed",1],
			["heroin_processed",1],
			["LSD",1]
		] 
	],
	

	["cocaine_processed", 6000, 2803, 7312, 15, 10,   
		[ 
			["marijuana",1], 
			["heroin_processed",1],
			["LSD",1]
		] 
	],
		
	["heroin_processed", 5560, 2400, 6721, 15, 10,   
		[ 
			["marijuana",1], 
			["cocaine_processed",1],
			["LSD",1]
		] 
	]*/
];
publicVariable "life_market_resources";

////////////GENERATED CONFIG
//life_market_changes = []; //[SHORTNAME,SELL,BUY]
life_market_shortnames = []; //shortnames if in market
//life_market_clampprices = []; //[SHORTNAME,MIN,MAX]

{
	life_market_shortnames set [count life_market_shortnames, _x select 0];
	//life_market_clampprices set [count life_market_clampprices, [_x select 0, _x select 2, _x select 3] ];
	//life_market_changes set [count life_market_changes, [_x select 0, _x select 4, _x select 5] ];
}
foreach life_market_resources;

publicVariable "life_market_shortnames";
//publicVariable "life_market_clampprices";

////////////SYNC PRICES WITH SERVER IF EMPTY
//if(isNil("life_market_prices")) then
//{
	life_market_prices = []; //[SHORTNAME,CURRENTPRICE,DIRECTIONGLOBAL,DIRECTIONLOCAL]
	{
	
		life_market_prices set [count life_market_prices, [_x select 0, _x select 1, 0, 0] ];
	}
	foreach life_market_resources;
	
	publicVariable "life_market_prices";
	
	systemChat "Market Prices Generated!";
//};