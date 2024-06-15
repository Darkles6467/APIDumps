#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FPostProcessLensBlurVS : FGlobalShader
{
	char __padding[0xd8L];
	FPostProcessPassParameters& PostprocessParameterField() { return *GetNativePointerField<FPostProcessPassParameters*>(this, "FPostProcessLensBlurVS.PostprocessParameter"); }

	// Functions

	void SetParameters(const FRenderingCompositePassContext * Context, FIntPoint TileCountValue, unsigned int TileSize, float PixelKernelSize, float Threshold) { NativeCall<void, const FRenderingCompositePassContext *, FIntPoint, unsigned int, float, float>(this, "FPostProcessLensBlurVS.SetParameters", Context, TileCountValue, TileSize, PixelKernelSize, Threshold); }
};

