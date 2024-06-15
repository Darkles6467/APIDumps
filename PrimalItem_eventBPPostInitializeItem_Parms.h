#pragma once

#include "BaseDeclarations.h"
struct PrimalItem_eventBPPostInitializeItem_Parms
{
	char __padding[0x8L];
	UWorld * OptionalInitWorldField() { return GetNativePointerField<UWorld *>(this, "PrimalItem_eventBPPostInitializeItem_Parms.OptionalInitWorld"); }
};

