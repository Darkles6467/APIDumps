#pragma once

#include "BaseDeclarations.h"
#include "FIndexBuffer.h"
#include "FRenderResource.h"

struct FCableIndexBuffer : FIndexBuffer
{
	char __padding[0x8L];
	int& NumIndicesField() { return *GetNativePointerField<int*>(this, "FCableIndexBuffer.NumIndices"); }

	// Functions

	void InitRHI() { NativeCall<void>(this, "FCableIndexBuffer.InitRHI"); }
};

