class CfgPatches {
	class OS_A_Grip_B25U
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines", "DZ_Weapons_Supports", "DZ_Scripts"};
	};
};

class CfgVehicles {
	class Inventory_Base;
	
	class OS_A_Grip_B25U : Inventory_Base 
	{
		scope = 2;
		displayName = "$STR_OS_A_Grip_B25U";
		descriptionShort = "$STR_OS_A_Grip_B25U_D";
		inventorySlot = "foregrip1";
		attachments[] = {};
		model = "M4Custom\Data\b25_grip\b25.p3d";
		itemSize[] = {1, 2};
		weight = 200;
		NeedRis = 1;
		recoilModifier[]={0.75, 0.75, 0.75};
		swayModifier[]={0.9, 0.9, 1};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"M4Custom\Data\b25_grip\tex\b25_co.paa"};
		hiddenSelectionsMaterials[] = {"M4Custom\Data\b25_grip\tex\b25.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 500;
					healthLevels[] = {
						{1.0,{"M4Custom\Data\b25_grip\tex\b25.rvmat"}},
						{0.7,{"M4Custom\Data\b25_grip\tex\b25.rvmat"}},
						{0.5,{"M4Custom\Data\b25_grip\tex\b25_damaged.rvmat"}},
						{0.3,{"M4Custom\Data\b25_grip\tex\b25_damaged.rvmat"}},
						{0.0,{"M4Custom\Data\b25_grip\tex\b25_destructed.rvmat"}}
					};
				};
			};
		};
	};
};
