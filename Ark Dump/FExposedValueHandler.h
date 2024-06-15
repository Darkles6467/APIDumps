#pragma once

#include "BaseDeclarations.h"
struct FExposedValueHandler
{
	char __padding[0x8L];
	FName& BoundFunctionField() { return *GetNativePointerField<FName*>(this, "FExposedValueHandler.BoundFunction"); }

	// Functions

};

