#pragma once

#include "BaseDeclarations.h"
struct PrimalInventoryComponent_eventSetNextItemSpoilingID_Parms
{
	char __padding[0x8L];
	FItemNetID& NextItemIDField() { return *GetNativePointerField<FItemNetID*>(this, "PrimalInventoryComponent_eventSetNextItemSpoilingID_Parms.NextItemID"); }
};

