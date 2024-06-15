#pragma once

#include "BaseDeclarations.h"
struct PrimalStructureItemContainer_eventUpdateTribeGroupInventoryRank_Parms
{
	char __padding[0x1L];
	char& NewRankField() { return *GetNativePointerField<char*>(this, "PrimalStructureItemContainer_eventUpdateTribeGroupInventoryRank_Parms.NewRank"); }
};

