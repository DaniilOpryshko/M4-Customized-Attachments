class CfgPatches
{
	class OS_WP_Supressor_Thor
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Muzzles", "DZ_Scripts"};
	};
};

class cfgVehicles {
	class ImprovisedSuppressor;

    class OS_WP_Suppressor_Thor_Base : ImprovisedSuppressor
    {
        scope = 0;
        displayName="$STR_OS_WP_Suppressor_Thor";
		descriptionShort="$STR_OS_WP_Suppressor_Thor_D";
		model="M4Custom\Data\thor silencer\thor.p3d";
        rotationFlags=17;
		reversed=0;
		weight=73;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		itemSize[]={2,1};
		itemModelLength=0.148;
		barrelArmor=15000;
		inventorySlot[]=
		{
			"Suppressor_556"
		};
		simulation="ItemSuppressor";
		dispersionModifier=-0.00050000002;
		dispersionCondition="true";
		noiseShootModifier=-0.939999998;
		recoilModifier[]={0.8, 0.8, 0.8};
		swayModifier[]={0.9, 0.9, 0.9};
		soundIndex=1;
		muzzlePos="usti hlavne";
		class Particles
		{
			class OnFire
			{
				class MuzzleFlashAssault
				{
					overrideParticle="weapon_shot_akm_02";
					onlyWithinHealthLabel[]={0,3};
				};
				class Ruined
				{
					onlyWithinHealthLabel[]={4,4};
					illuminateWorld=1;
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating=2;
				maxOverheatingValue=20;
				overheatingDecayInterval=1;
				class SmokingBarrel
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0,0.1,0};
					onlyWithinRainLimits[]={0.2,1};
				};
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10000000;
					healthLevels[] = {
						{1.01,{""}},
						{0.7,{""}},
						{0.5,{""}},
						{0.3,{""}},
						{0.01,{""}}
					};
				};
			};
		};
    };
    class OS_WP_Suppressor_Thor : OS_WP_Suppressor_Thor_Base
	{
        scope = 2;
    };
};

class CfgSlots {
	class Slot_Suppressor_556
	{
		name = "Suppressor_556";
		displayName = "$STR_OS_SUPPRESSOR556_SLOT";
		ghostIcon = "set:dayz_inventory image:supressor";
	};
};

class CfgNonAIVehicles {
	class ProxyAttachment;
	class ProxyThor : ProxyAttachment {
		scope = 2;
		inventorySlot = "Suppressor_556";
		model="M4Custom\Data\thor silencer\thor.p3d";
	};
};

