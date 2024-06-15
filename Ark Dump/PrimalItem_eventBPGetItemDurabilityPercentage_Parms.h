#pragma once

#include "BaseDeclarations.h"
struct PrimalItem_eventBPGetItemDurabilityPercentage_Parms
{
	char __padding[0x4L];
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "PrimalItem_eventBPGetItemDurabilityPercentage_Parms.ReturnValue"); }
};

