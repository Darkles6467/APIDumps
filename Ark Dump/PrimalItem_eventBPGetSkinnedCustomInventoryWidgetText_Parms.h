#pragma once

#include "BaseDeclarations.h"
struct PrimalItem_eventBPGetSkinnedCustomInventoryWidgetText_Parms
{
	char __padding[0x10L];
	FString& ReturnValueField() { return *GetNativePointerField<FString*>(this, "PrimalItem_eventBPGetSkinnedCustomInventoryWidgetText_Parms.ReturnValue"); }
};

