#pragma once

#include "BaseDeclarations.h"
#include "FIndexBuffer.h"
#include "FRenderResource.h"

struct FUnitCubeIndexBuffer : FIndexBuffer
{
	char __padding[0x8L];
	int& NumIndicesField() { return *GetNativePointerField<int*>(this, "FUnitCubeIndexBuffer.NumIndices"); }

	// Functions

	void InitRHI() { NativeCall<void>(this, "FUnitCubeIndexBuffer.InitRHI"); }
};

