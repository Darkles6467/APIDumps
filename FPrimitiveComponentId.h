#pragma once

#include "BaseDeclarations.h"
struct FPrimitiveComponentId
{
	char __padding[0x4L];
	unsigned int& PrimIDValueField() { return *GetNativePointerField<unsigned int*>(this, "FPrimitiveComponentId.PrimIDValue"); }
};

