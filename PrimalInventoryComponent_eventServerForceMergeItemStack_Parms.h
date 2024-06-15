#pragma once

#include "BaseDeclarations.h"
struct PrimalInventoryComponent_eventServerForceMergeItemStack_Parms
{
	char __padding[0x10L];
	FItemNetID& Item1IDField() { return *GetNativePointerField<FItemNetID*>(this, "PrimalInventoryComponent_eventServerForceMergeItemStack_Parms.Item1ID"); }
	FItemNetID& Item2IDField() { return *GetNativePointerField<FItemNetID*>(this, "PrimalInventoryComponent_eventServerForceMergeItemStack_Parms.Item2ID"); }
};

