#pragma once

#include "BaseDeclarations.h"
struct PrimalItem_eventBPOnItemConsumed_Parms
{
	char __padding[0x10L];
	int& remainingQuantityField() { return *GetNativePointerField<int*>(this, "PrimalItem_eventBPOnItemConsumed_Parms.remainingQuantity"); }
};

