#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"

struct FDistanceFieldObjectBufferResource : FRenderResource
{
	char __padding[0xa8L];
	FDistanceFieldCulledObjectBuffers& BuffersField() { return *GetNativePointerField<FDistanceFieldCulledObjectBuffers*>(this, "FDistanceFieldObjectBufferResource.Buffers"); }

	// Functions

	void InitDynamicRHI() { NativeCall<void>(this, "FDistanceFieldObjectBufferResource.InitDynamicRHI"); }
	void ReleaseDynamicRHI() { NativeCall<void>(this, "FDistanceFieldObjectBufferResource.ReleaseDynamicRHI"); }
};

