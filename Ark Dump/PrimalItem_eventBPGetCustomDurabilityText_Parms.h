#pragma once

#include "BaseDeclarations.h"
struct PrimalItem_eventBPGetCustomDurabilityText_Parms
{
	char __padding[0x10L];
	FString& ReturnValueField() { return *GetNativePointerField<FString*>(this, "PrimalItem_eventBPGetCustomDurabilityText_Parms.ReturnValue"); }
};

