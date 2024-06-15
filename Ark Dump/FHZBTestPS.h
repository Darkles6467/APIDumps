#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FHZBTestPS : FGlobalShader
{
	char __padding[0x20L];

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FHZBTestPS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, const FViewInfo * View, FRHITexture * BoundsCenter, FRHITexture * BoundsExtent) { NativeCall<void, FRHICommandList *, const FViewInfo *, FRHITexture *, FRHITexture *>(this, "FHZBTestPS.SetParameters", RHICmdList, View, BoundsCenter, BoundsExtent); }
};

