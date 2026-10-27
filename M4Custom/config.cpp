class CfgPatches
{
	class M4Custom
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Gear_Medical",
			"DZ_Sounds_Effects",
			"DZ_Structures_Furniture",
			"DZ_Data",
			"DZ_Characters",
			"DZ_Scripts",
			"DZ_gear_food",
			"DZ_Gear_Consumables",
			"DZ_Characters_Vests",
			"DZ_Gear_Containers",
			"DZ_Weapons_Melee",
			"DZ_Weapons_Magazines",
			"DZ_Weapons_Supports",
			"DZ_Weapons_Firearms_M4",
			"DZ_Weapons_Firearms_aug",
			"DZ_Weapons_Firearms_M16A2"
		};
	};
};

class CfgMods
{
	class M4Custom
	{
		dir = "M4Custom";
		hideName = 1;
		hidePicture = 1;
		name = "M4Custom";
		credits = "Danielele";
		author = "Danielele";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"M4Custom/Scripts/4_World"};
			};
		};
	};
};

class cfgWeapons
{
	class Rifle_Base;
	class Aug_Base : Rifle_Base {};

    class M4A1_Base: Rifle_Base
	{
		magazines[] += 
		{
			"OS_Mag_Stanag_60Rnd_Round"
		};
	};
	class Aug: Aug_Base
	{
		magazines[] += 
		{
			"OS_Mag_Stanag_60Rnd_Round"
		};
	};
	class M16A2_Base: Rifle_Base
	{
		magazines[] += 
		{ 
			"OS_Mag_Stanag_60Rnd_Round"
		};
	};
};