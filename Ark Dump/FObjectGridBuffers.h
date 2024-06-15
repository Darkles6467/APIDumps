#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"

struct FObjectGridBuffers : FRenderResource
{
	char __padding[0x28L];
	int& GridDimensionField() { return *GetNativePointerField<int*>(this, "FObjectGridBuffers.GridDimension"); }
	FRWBuffer& CulledObjectGridField() { return *GetNativePointerField<FRWBuffer*>(this, "FObjectGridBuffers.CulledObjectGrid"); }

	// Functions

	void InitDynamicRHI() { NativeCall<void>(this, "FObjectGridBuffers.InitDynamicRHI"); }
	void ReleaseDynamicRHI() { NativeCall<void>(this, "FObjectGridBuffers.ReleaseDynamicRHI"); }
};

