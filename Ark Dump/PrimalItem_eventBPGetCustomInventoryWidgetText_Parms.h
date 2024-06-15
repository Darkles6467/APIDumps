#pragma once

#include "BaseDeclarations.h"
struct PrimalItem_eventBPGetCustomInventoryWidgetText_Parms
{
	char __padding[0x10L];
	FString& ReturnValueField() { return *GetNativePointerField<FString*>(this, "PrimalItem_eventBPGetCustomInventoryWidgetText_Parms.ReturnValue"); }
};

