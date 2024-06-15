#pragma once

#include "BaseDeclarations.h"
struct PrimalItem_eventBPUsedOntoItem_Parms
{
	char __padding[0x10L];
	int& AdditionalDataField() { return *GetNativePointerField<int*>(this, "PrimalItem_eventBPUsedOntoItem_Parms.AdditionalData"); }
};

