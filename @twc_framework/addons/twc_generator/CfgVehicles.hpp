class CfgVehicles {
	class Land_Portable_generator_F;
	class TWC_Generator_Power_Portable: Land_Portable_generator_F {
		displayName = "Portable Generator (Power Source)";
		editorCategory = "EdCat_Supplies";
		editorSubcategory = "EdSubcat_Utilities";
		
		class ACE_Actions {
			class ACE_MainActions {
				class TWC_Generator_PowerOn {
					displayName = "Turn On";
					condition = "";
					statement = "";
					showDisabled = 0;
					priority = 1;
					distance = 4.5;
					icon = "";
				};
				
				class TWC_Generator_PowerOff {
					displayName = "Turn Off";
					condition = "";
					statement = "";
					showDisabled = 0;
					priority = 1;
					distance = 4.5;
					icon = "";
				};
				
				class TWC_Generator_ConnectCable {
					displayName = "Connect Cable";
					condition = "";
					showDisabled = 0;
					priority = 1;
					distance = 4.5;
					icon = "";
					insertChildren = "_this call TWC_Generator_fnc_getCableChildren";
				};
				
				class TWC_Generator_DisonnectCable {
					displayName = "Disconnect Cable";
					condition = "";
					statement = "";
					showDisabled = 0;
					priority = 1;
					distance = 4.5;
					icon = "";
				};
				
				class TWC_Generator_ConnectFuel {
					displayName = "Connect Fuel";
					condition = "_this getVariable [""TWC_Generator_FuelConnected"", false]";
					statement = "";
					showDisabled = 0;
					priority = 1;
					distance = 4.5;
					icon = "";
					insertChildren = "_this call TWC_Generator_fnc_getFuelChildren";
				};
				
				class TWC_Generator_DisonnectFuel {
					displayName = "Disconnect Fuel";
					condition = "!(_this getVariable [""TWC_Generator_FuelConnected"", false])";
					statement = "";
					showDisabled = 0;
					priority = 1;
					distance = 4.5;
					icon = "";
				};
			};
		};
	};
	
	class CargoNet_01_barrels_F;
	class TWC_Generator_Fuel_Portable: CargoNet_01_barrels_F {
		displayName = "Portable Fuel (Power Source)";
		editorCategory = "EdCat_Supplies";
		editorSubcategory = "EdSubcat_Utilities";
		
		ace_refuel_fuelCargo = 1500;
		// TODO: At some point fill this array with the tops of the barrel models
		ace_refuel_hooks[] = {{0, 0, 0}};
		ace_refuel_canReceive = 0;
		TWC_Generator_fuelSource = 1;
	};
};