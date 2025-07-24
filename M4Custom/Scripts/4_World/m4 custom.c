class OS_W_M4_Custom_Base extends RifleBoltLock_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new M4a1Recoil(this);
	}

	void OS_W_M4_Custom_Base()
	{		
		HideSights(false);
		HideHandguard(false);
	}

	override void EEItemAttached(EntityAI item, string slot_name)
	{	
		super.EEItemAttached(item,slot_name);

		if (ItemOptics.Cast(item))
		{
			HideSights(true);
		}
		
		if (slot_name == "foregrip1")
		{
			HideHandguard(false);
		}
	}

	override void EEItemDetached(EntityAI item, string slot_name)
	{	
		super.EEItemDetached(item,slot_name);

		if (ItemOptics.Cast(item))
		{ 
			HideSights(false);
		}
		
		if (slot_name == "foregrip1")
		{
			HideHandguard(true);
		}
	}

	private void HideSights(bool hide)
	{
		if ( ConfigIsExisting("simpleHiddenSelections") )
		{
			int sightUp = -1;
			int sightDown = -1;

			TStringArray selectionNames = new TStringArray;
			ConfigGetTextArray("simpleHiddenSelections",selectionNames);
			sightUp = selectionNames.Find("sight_up");
			sightDown = selectionNames.Find("sight_down");
			
			if ( sightUp != -1 )
			{ 
				SetSimpleHiddenSelectionState(sightUp, !hide);
			}
			if ( sightDown != -1 )
			{ 
				SetSimpleHiddenSelectionState(sightDown, hide);
			}
		}
	}
	
	private void HideHandguard(bool hide)
	{
		if ( ConfigIsExisting("simpleHiddenSelections") )
		{
			int handguard = -1;

			TStringArray selectionNames = new TStringArray;
			ConfigGetTextArray("simpleHiddenSelections",selectionNames);
			handguard = selectionNames.Find("rail");
			
			if ( handguard != -1 )
			{ 
				SetSimpleHiddenSelectionState(handguard, !hide);
			}
		}
	}
};

class OS_W_M4_Custom extends OS_W_M4_Custom_Base {};