#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FWriteToSliceVS : FGlobalShader
{
	char __padding[0x8L];

	// Functions

	void SetParameters(FRHICommandList * RHICmdList, const FVolumeBounds * VolumeBounds, unsigned int VolumeResolution) { NativeCall<void, FRHICommandList *, const FVolumeBounds *, unsigned int>(this, "FWriteToSliceVS.SetParameters", RHICmdList, VolumeBounds, VolumeResolution); }
};

