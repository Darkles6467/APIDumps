#pragma once

#include "BaseDeclarations.h"
struct PrimalItem_eventCrafted_Parms
{
	char __padding[0x1L];
	bool& bWasCraftedFromEngramField() { return *GetNativePointerField<bool*>(this, "PrimalItem_eventCrafted_Parms.bWasCraftedFromEngram"); }
};

