#pragma once

#include "BaseDeclarations.h"
struct FKeyHandle
{
	char __padding[0x4L];
	unsigned int& IndexField() { return *GetNativePointerField<unsigned int*>(this, "FKeyHandle.Index"); }

	// Functions

};

