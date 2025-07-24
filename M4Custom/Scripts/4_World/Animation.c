modded class ModItemRegisterCallbacks
{
	override void RegisterFireArms( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
    {
        super.RegisterFireArms( pType, pBehavior );
    
		pType.AddItemInHandsProfileIK("OS_W_M4_Custom_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_m4a1.asi", pBehavior, "dz/anims/anm/player/ik/weapons/m4a1_ik.anm", "dz/anims/anm/player/reloads/M4A1/w_M4A1_states.anm");
	}

	override void RegisterOneHanded( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
    {
		super.RegisterOneHanded( pType, pBehavior );	
		
		pType.AddItemInHandsProfileIK("OS_Mag_Stanag_60Rnd_Round_Base", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior,"dz/anims/anm/player/ik/attachments/magazines/magazine_stanag30.anm");
		pType.AddItemInHandsProfileIK("OS_A_EXPS3_Base", "dz/anims/workspaces/player/player_main/props/player_main_1h_scope.asi", pBehavior, "dz/anims/anm/player/ik/attachments/optic/optic_reflex.anm");
		pType.AddItemInHandsProfileIK("OS_A_Grip_SHIFT", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, 		"dz/anims/anm/player/ik/attachments/support/handguard_ak_wood.anm");
		pType.AddItemInHandsProfileIK("OS_A_Grip_B25U", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, 		"dz/anims/anm/player/ik/attachments/support/handguard_ak_wood.anm");
		pType.AddItemInHandsProfileIK("OS_A_Grip_SE5", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, 		"dz/anims/anm/player/ik/attachments/support/handguard_ak_wood.anm");
		pType.AddItemInHandsProfileIK("OS_WP_Suppressor_Thor_Base", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/attachments/muzzle/suppressor_556.anm");
	}
};