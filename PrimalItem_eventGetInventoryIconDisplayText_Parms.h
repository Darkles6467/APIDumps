#pragma once

#include "BaseDeclarations.h"
struct PrimalItem_eventGetInventoryIconDisplayText_Parms
{
	char __padding[0x10L];
	FString& ReturnValueField() { return *GetNativePointerField<FString*>(this, "PrimalItem_eventGetInventoryIconDisplayText_Parms.ReturnValue"); }
};

