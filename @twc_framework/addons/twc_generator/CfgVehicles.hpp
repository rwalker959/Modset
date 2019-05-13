class CfgVehicles {
	class Items_base_F;
	
	class TWC_Generator_Modern_Portable: Land_PortableGenerator_01_F {
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
				
				class TWC_Generator_Connect {
					displayName = "Connect";
					condition = "";
					showDisabled = 0;
					priority = 1;
					distance = 4.5;
					icon = "";
					insertChildren = "_this call TWC_Generator_fnc_getConnectChildren";
				};
				
				class TWC_Generator_Disonnect {
					displayName = "Disconnect";
					condition = "";
					statement = "";
					showDisabled = 0;
					priority = 1;
					distance = 4.5;
					icon = "";
				};
			};
		};
	};
};