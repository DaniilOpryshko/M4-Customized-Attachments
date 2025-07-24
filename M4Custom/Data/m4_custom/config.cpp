class CfgPatches
{
	class OS_W_M4_Custom
	{
		units[] = {"OS_W_M4_Custom"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class Rifle_Base;
	class Launcher_Base;
	class OS_W_M4_Custom_Base: Rifle_Base
	{
		scope = 0;
		weight = 2276;
		absorbency = 0;
		repairableWithKits[] = {1};
		repairCosts[] = {25};
		PPDOFProperties[] = {0,0.1,20,200,10,10};
		ironsightsExcludingOptics[] = {"M4_CarryHandleOptic","BUISOptic","M68Optic","M4_T3NRDSOptic","ReflexOptic","ACOGOptic"};
		WeaponLength = 0.9;
		ObstructionDistance = 0.526;
		ShoulderDistance = 0.05;
		barrelArmor = 2.5;
		initSpeedMultiplier = 1.2;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_556x45","Ammo_556x45Tracer"};
		magazines[] = {"Mag_STANAG_30Rnd","Mag_STANAGCoupled_30Rnd","Mag_STANAG_60Rnd","Mag_CMAG_10Rnd","Mag_CMAG_20Rnd","Mag_CMAG_30Rnd","Mag_CMAG_40Rnd","Mag_CMAG_10Rnd_Green","Mag_CMAG_20Rnd_Green","Mag_CMAG_30Rnd_Green","Mag_CMAG_40Rnd_Green","Mag_CMAG_10Rnd_Black","Mag_CMAG_20Rnd_Black","Mag_CMAG_30Rnd_Black","Mag_CMAG_40Rnd_Black","OS_Mag_Stanag_60Rnd_Round"};
		attachments[] = {"weaponOptics","weaponWrap","Suppressor_556","weaponFlashlight", "foregrip1"};
		magazineSwitchTime = 0.45;
		ejectType = 1;
		recoilModifier[] = {0.75,0.75,0.75};
		swayModifier[] = {0.75,0.75,0.75};
		hiddenSelections[] = {"front_camo", "mid_camo", "stock_camo", "sights"};
		simpleHiddenSelections[] = {"sight_down","sight_up","rail"};
		class NoiseShoot
		{
			strength = 100;
			type = "shot";
		};
		modes[] = {"SemiAuto","FullAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"M4_Shot_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"M4_Shot_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.058;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {100,200,300,400,500};
			discreteDistanceInitIndex = 0;
			distanceZoomMin = 100;
			distanceZoomMax = 500;
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[] = {-0.1,0,0.03};
				orientation[] = {0,0,0};
			};
			class Melee
			{
				position[] = {-0.1,0,-0.04};
				orientation[] = {0,0,0};
			};
		};
	};
	class OS_W_M4_Custom: OS_W_M4_Custom_Base
	{
		scope = 2;
		displayName = "$STR_OS_W_M4_Custom";
		descriptionShort = "$STR_OS_W_M4_Custom_D";
		model = "M4Custom\Data\m4_custom\m4.p3d";
		itemSize[] = {8,3};
		spawnDamageRange[] = {0,1.0};
		hiddenSelectionsTextures[] = {"M4Custom\Data\m4_custom\tex\front_co.paa",
									  "M4Custom\Data\m4_custom\tex\mid_co.paa",
									  "M4Custom\Data\m4_custom\tex\stock_co.paa",
									  "M4Custom\Data\m4_custom\tex\sights_co.paa"
									 };
		hiddenSelectionsMaterials[] = {"M4Custom\Data\m4_custom\tex\front.rvmat",
									   "M4Custom\Data\m4_custom\tex\mid.rvmat",
									   "M4Custom\Data\m4_custom\tex\stock.rvmat",
									   "M4Custom\Data\m4_custom\tex\sights.rvmat"
									  };
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
					healthLevels[] = {
						{1.0,{"M4Custom\Data\m4_custom\tex\front.rvmat","M4Custom\Data\m4_custom\tex\mid.rvmat","M4Custom\Data\m4_custom\tex\stock.rvmat","M4Custom\Data\m4_custom\tex\sights.rvmat"}},
						{0.7,{"M4Custom\Data\m4_custom\tex\front.rvmat","M4Custom\Data\m4_custom\tex\mid.rvmat","M4Custom\Data\m4_custom\tex\stock.rvmat","M4Custom\Data\m4_custom\tex\sights.rvmat"}},
						{0.5,{"M4Custom\Data\m4_custom\tex\front_damaged.rvmat","M4Custom\Data\m4_custom\tex\mid_damaged.rvmat","M4Custom\Data\m4_custom\tex\stock_damaged.rvmat","M4Custom\Data\m4_custom\tex\sights_damaged.rvmat"}},
						{0.3,{"M4Custom\Data\m4_custom\tex\front_damaged.rvmat","M4Custom\Data\m4_custom\tex\mid_damaged.rvmat","M4Custom\Data\m4_custom\tex\stock_damaged.rvmat","M4Custom\Data\m4_custom\tex\sights_damaged.rvmat"}},
						{0.0,{"M4Custom\Data\m4_custom\tex\front_destructed.rvmat","M4Custom\Data\m4_custom\tex\mid_destructed.rvmat","M4Custom\Data\m4_custom\tex\stock_destructed.rvmat","M4Custom\Data\m4_custom\tex\sights_destructed.rvmat"}}
					};
				};
			};
		};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke";
				};
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_ump45_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					positionOffset[] = {0,0,0};
				};
				class MuzzleFlashStar
				{
					overrideParticle = "weapon_shot_Flame_3D_4star";
					ignoreIfSuppressed = 1;
					overrideDirectionVector[] = {0,45,0};
					positionOffset[] = {0.01,0,0};
				};
				class ChamberSmoke
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
					overrideDirectionPoint = "Nabojniceend";
				};
			};
			class OnOverheating
			{
				maxOverheatingValue = 12;
				shotsToStartOverheating = 4;
				overheatingDecayInterval = 0.7;
				class SmokingBarrel1
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0,0.5};
					positionOffset[] = {0.2,0,0};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrel2
				{
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.5,0.7};
					positionOffset[] = {0.2,0,0};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrel3
				{
					overrideParticle = "smoking_barrel_heavy";
					onlyWithinOverheatLimits[] = {0.7,1};
					positionOffset[] = {0.2,0,0};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.35,0,0};
					onlyWithinRainLimits[] = {0.2,0.5};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.35,0,0};
					onlyWithinRainLimits[] = {0.5,1};
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen = 1;
					overrideParticle = "smoking_barrel_small";
					overridePoint = "Nabojnicestart";
				};
			};
			class OnBulletCasingEject
			{
				class ChamberSmokeRaise
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
				};
			};
		};
	};
};

class CfgMagazines
{
	class DefaultMagazine;
	class Magazine_Base: DefaultMagazine{};
	class OS_Mag_Stanag_60Rnd_Round_Base: Magazine_Base
	{
		scope = 0;
		ammo = "Bullet_556x45";
		ammoItems[] = {"Ammo_556x45","Ammo_556x45Tracer"};
		hiddenSelections[] = {"camo"};
		tracersEvery = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000;
					healthLevels[] = {
						{1.0,{"M4Custom\Data\m4_custom\tex\mag\mag60r.rvmat"}},
						{0.7,{"M4Custom\Data\m4_custom\tex\mag\mag60r.rvmat"}},
						{0.5,{"M4Custom\Data\m4_custom\tex\mag\mag60r_damaged.rvmat"}},
						{0.3,{"M4Custom\Data\m4_custom\tex\mag\mag60r_damaged.rvmat"}},
						{0.0,{"M4Custom\Data\m4_custom\tex\mag\mag60r_destructed.rvmat"}}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet = "MagRifle_fill_in_SoundSet";
					id = 1;
				};
				class MagRifle_fill_loop
				{
					soundSet = "MagRifle_fill_loop_SoundSet";
					id = 2;
				};
				class MagRifle_fill_out
				{
					soundSet = "MagRifle_fill_out_SoundSet";
					id = 3;
				};
				class MagRifle_empty_in
				{
					soundSet = "MagRifle_empty_in_SoundSet";
					id = 4;
				};
				class MagRifle_empty_loop
				{
					soundSet = "MagRifle_empty_loop_SoundSet";
					id = 5;
				};
				class MagRifle_empty_out
				{
					soundSet = "MagRifle_empty_out_SoundSet";
					id = 6;
				};
				class MagPistol_fill_in
				{
					soundSet = "MagPistol_fill_in_SoundSet";
					id = 7;
				};
				class MagPistol_fill_loop
				{
					soundSet = "MagPistol_fill_loop_SoundSet";
					id = 8;
				};
				class MagPistol_fill_out
				{
					soundSet = "MagPistol_fill_out_SoundSet";
					id = 9;
				};
				class MagPistol_empty_in
				{
					soundSet = "MagPistol_empty_in_SoundSet";
					id = 10;
				};
				class MagPistol_empty_loop
				{
					soundSet = "MagPistol_empty_loop_SoundSet";
					id = 11;
				};
				class MagPistol_empty_out
				{
					soundSet = "MagPistol_empty_out_SoundSet";
					id = 12;
				};
			};
		};
	};
	class OS_Mag_Stanag_60Rnd_Round: OS_Mag_Stanag_60Rnd_Round_Base
	{
		scope = 2;
		displayName = "$STR_OS_Mag_Stanag_60Rnd_Round";
		descriptionShort = "$STR_OS_Mag_Stanag_60Rnd_Round_D";
		model = "M4Custom\Data\m4_custom\mag60r.p3d";
		weight = 120;
		weightPerQuantityUnit = 10;
		itemSize[] = {2,2};
		count = 60;
		hiddenSelectionsTextures[] = {"M4Custom\Data\m4_custom\tex\mag\mag60r_co.paa"};
		hiddenSelectionsMaterials[] = {"M4Custom\Data\m4_custom\tex\mag\mag60r.rvmat"};
	};
};
