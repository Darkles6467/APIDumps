#pragma once

#include "BaseDeclarations.h"
struct PrimalInventoryComponent_eventUpdateTribeGroupInventoryRank_Parms
{
	char __padding[0x1L];
	char& NewRankField() { return *GetNativePointerField<char*>(this, "PrimalInventoryComponent_eventUpdateTribeGroupInventoryRank_Parms.NewRank"); }
};

