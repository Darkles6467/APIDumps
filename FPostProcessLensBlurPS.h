#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FPostProcessLensBlurPS : FGlobalShader
{
	char __padding[0xd0L];
	FPostProcessPassParameters& PostprocessParameterField() { return *GetNativePointerField<FPostProcessPassParameters*>(this, "FPostProcessLensBlurPS.PostprocessParameter"); }

	// Functions

	void SetParameters(const FRenderingCompositePassContext * Context, float PixelKernelSize) { NativeCall<void, const FRenderingCompositePassContext *, float>(this, "FPostProcessLensBlurPS.SetParameters", Context, PixelKernelSize); }
};

