#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"

struct FDistanceFieldRemoveIndicesResource : FRenderResource
{
	char __padding[0x20L];
	FCPUUpdatedBuffer& RemoveIndicesField() { return *GetNativePointerField<FCPUUpdatedBuffer*>(this, "FDistanceFieldRemoveIndicesResource.RemoveIndices"); }

	// Functions

	void InitDynamicRHI() { NativeCall<void>(this, "FDistanceFieldRemoveIndicesResource.InitDynamicRHI"); }
};

