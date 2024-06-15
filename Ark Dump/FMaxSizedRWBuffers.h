#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"

struct FMaxSizedRWBuffers : FRenderResource
{
	char __padding[0x8L];
	int& MaxSizeField() { return *GetNativePointerField<int*>(this, "FMaxSizedRWBuffers.MaxSize"); }
};

