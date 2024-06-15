#pragma once

#include "BaseDeclarations.h"
struct FOptionalSize
{
	char __padding[0x4L];
	float& SizeField() { return *GetNativePointerField<float*>(this, "FOptionalSize.Size"); }

	// Functions

};

