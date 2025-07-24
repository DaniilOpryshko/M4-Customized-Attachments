class CfgPatches {
	class OS_A_Grip_SHIFT
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines", "DZ_Weapons_Supports", "DZ_Scripts"};
	};
};

class CfgVehicles {
	class Inventory_Base;
	
	class OS_A_Grip_SHIFT : Inventory_Base 
	{
		scope = 2;
		displayName = "$STR_OS_A_Grip_SHIFT";
		descriptionShort = "$STR_OS_A_Grip_SHIFT_D";
		inventorySlot = "foregrip1";
		attachments[] = {};
		model = "M4Custom\Data\grip\shift.p3d";
		itemSize[] = {1, 2};
		weight = 200;
		NeedRis = 1;
		recoilModifier[]={0.85, 0.85, 1};
		swayModifier[]={0.7, 0.7, 0.7};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"M4Custom\Data\grip\tex\shift_co.paa"};
		hiddenSelectionsMaterials[] = {"M4Custom\Data\grip\tex\shift.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 500;
					healthLevels[] = {
						{1.0,{"M4Custom\Data\grip\tex\shift.rvmat"}},
						{0.7,{"M4Custom\Data\grip\tex\shift.rvmat"}},
						{0.5,{"M4Custom\Data\grip\tex\shift_damaged.rvmat"}},
						{0.3,{"M4Custom\Data\grip\tex\shift_damaged.rvmat"}},
						{0.0,{"M4Custom\Data\grip\tex\shift_destructed.rvmat"}}
					};
				};
			};
		};
	};
};

class CfgSlots {
	class Slot_Foregrip1
	{
		name = "foregrip1";
		displayName = "$STR_OS_FOREGRIP_SLOT";
	};
};

class CfgNonAIVehicles {
	class ProxyAttachment;
	
	class ProxyShift : ProxyAttachment {
		scope = 2;
		inventorySlot = "foregrip1";
		model="M4Custom\Data\grip\shift.p3d";
	};
};
