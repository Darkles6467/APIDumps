#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FFilterTranslucentVolumePS : FGlobalShader
{
	char __padding[0x18L];

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FFilterTranslucentVolumePS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, const FViewInfo * View, int VolumeCascadeIndex) { NativeCall<void, FRHICommandList *, const FViewInfo *, int>(this, "FFilterTranslucentVolumePS.SetParameters", RHICmdList, View, VolumeCascadeIndex); }
};

