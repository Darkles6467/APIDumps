#pragma once

#include "BaseDeclarations.h"
struct PrimalInventoryComponent_eventBPOverrideItemMinimumUseInterval_Parms
{
	char __padding[0x10L];
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "PrimalInventoryComponent_eventBPOverrideItemMinimumUseInterval_Parms.ReturnValue"); }
};

