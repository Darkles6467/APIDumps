#pragma once

#include "BaseDeclarations.h"
struct PrimalItem_eventBPPreInitializeItem_Parms
{
	char __padding[0x8L];
	UWorld * OptionalInitWorldField() { return GetNativePointerField<UWorld *>(this, "PrimalItem_eventBPPreInitializeItem_Parms.OptionalInitWorld"); }
};

