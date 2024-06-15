#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"

struct FLandscapeMaskBuffer : FRenderResource
{
	char __padding[0x28L];
	FRWBuffer& MaskBufferField() { return *GetNativePointerField<FRWBuffer*>(this, "FLandscapeMaskBuffer.MaskBuffer"); }
	int& CurrentSizeField() { return *GetNativePointerField<int*>(this, "FLandscapeMaskBuffer.CurrentSize"); }

	// Functions

	void InitRHI() { NativeCall<void>(this, "FLandscapeMaskBuffer.InitRHI"); }
	void ReleaseRHI() { NativeCall<void>(this, "FLandscapeMaskBuffer.ReleaseRHI"); }
};

