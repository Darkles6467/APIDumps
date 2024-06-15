#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"

struct FDistanceFieldUploadIndicesResource : FRenderResource
{
	char __padding[0x20L];
	FCPUUpdatedBuffer& UploadIndicesField() { return *GetNativePointerField<FCPUUpdatedBuffer*>(this, "FDistanceFieldUploadIndicesResource.UploadIndices"); }

	// Functions

	void ReleaseDynamicRHI() { NativeCall<void>(this, "FDistanceFieldUploadIndicesResource.ReleaseDynamicRHI"); }
};

