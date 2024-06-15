#pragma once

#include "BaseDeclarations.h"
struct FImplementedInterface
{
	char __padding[0x10L];
	int& PointerOffsetField() { return *GetNativePointerField<int*>(this, "FImplementedInterface.PointerOffset"); }
	bool& bImplementedByK2Field() { return *GetNativePointerField<bool*>(this, "FImplementedInterface.bImplementedByK2"); }

	// Functions

};

