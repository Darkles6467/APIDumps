#pragma once

#include "BaseDeclarations.h"
#include "FIndexBuffer.h"
#include "FRenderResource.h"

struct FRawIndexBuffer : FIndexBuffer
{
	char __padding[0x10L];
	TArray<unsigned short>& IndicesField() { return *GetNativePointerField<TArray<unsigned short>*>(this, "FRawIndexBuffer.Indices"); }
};

