#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientUpdateInventoryCraftQueue_Parms
{
	char __padding[0x18L];
	TArray<FItemCraftQueueEntry>& CraftQueueEntriesField() { return *GetNativePointerField<TArray<FItemCraftQueueEntry>*>(this, "ShooterPlayerController_eventClientUpdateInventoryCraftQueue_Parms.CraftQueueEntries"); }
};

