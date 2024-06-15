#pragma once

#include "BaseDeclarations.h"
struct PrimalItem_eventBPInitItemColors_Parms
{
	char __padding[0x10L];
	TArray<int>& ColorIDsField() { return *GetNativePointerField<TArray<int>*>(this, "PrimalItem_eventBPInitItemColors_Parms.ColorIDs"); }
};

