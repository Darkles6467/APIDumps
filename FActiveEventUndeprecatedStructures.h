#pragma once

#include "BaseDeclarations.h"
struct FActiveEventUndeprecatedStructures
{
	char __padding[0x18L];
	FName& ActiveEventField() { return *GetNativePointerField<FName*>(this, "FActiveEventUndeprecatedStructures.ActiveEvent"); }

	// Functions

};

