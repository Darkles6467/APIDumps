#pragma once

#include "BaseDeclarations.h"
struct PrimalStructureUnderwaterBase_eventMultiSetPortholeStates_Parms
{
	char __padding[0x10L];
	TArray<bool>& portholesField() { return *GetNativePointerField<TArray<bool>*>(this, "PrimalStructureUnderwaterBase_eventMultiSetPortholeStates_Parms.portholes"); }
};

