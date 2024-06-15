#pragma once

#include "BaseDeclarations.h"
struct PrimalItem_eventBPGetCustomDurabilityTextColor_Parms
{
	char __padding[0x4L];
	FColor& ReturnValueField() { return *GetNativePointerField<FColor*>(this, "PrimalItem_eventBPGetCustomDurabilityTextColor_Parms.ReturnValue"); }
};

