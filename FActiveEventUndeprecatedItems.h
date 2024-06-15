#pragma once

#include "BaseDeclarations.h"
struct FActiveEventUndeprecatedItems
{
	char __padding[0x18L];
	FName& ActiveEventField() { return *GetNativePointerField<FName*>(this, "FActiveEventUndeprecatedItems.ActiveEvent"); }

	// Functions

};

