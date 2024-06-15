#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventBPOnMissionPlayerAddedInventoryItem_Parms
{
	char __padding[0x20L];
	AShooterCharacter * PlayerField() { return GetNativePointerField<AShooterCharacter *>(this, "MissionType_eventBPOnMissionPlayerAddedInventoryItem_Parms.Player"); }
	int& AmountAddedField() { return *GetNativePointerField<int*>(this, "MissionType_eventBPOnMissionPlayerAddedInventoryItem_Parms.AmountAdded"); }
	bool& bEquippedItemField() { return *GetNativePointerField<bool*>(this, "MissionType_eventBPOnMissionPlayerAddedInventoryItem_Parms.bEquippedItem"); }
};

