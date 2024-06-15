#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventBPOnMissionPlayerRemovedInventoryItem_Parms
{
	char __padding[0x20L];
	AShooterCharacter * PlayerField() { return GetNativePointerField<AShooterCharacter *>(this, "MissionType_eventBPOnMissionPlayerRemovedInventoryItem_Parms.Player"); }
	int& AmountRemovedField() { return *GetNativePointerField<int*>(this, "MissionType_eventBPOnMissionPlayerRemovedInventoryItem_Parms.AmountRemoved"); }
};

