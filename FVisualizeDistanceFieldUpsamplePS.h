#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"
#include "FPooledRenderTarget.h"

struct FVisualizeDistanceFieldUpsamplePS : FGlobalShader
{
	char __padding[0x80L];
	FDeferredPixelShaderParameters& DeferredParametersField() { return *GetNativePointerField<FDeferredPixelShaderParameters*>(this, "FVisualizeDistanceFieldUpsamplePS.DeferredParameters"); }

	// Functions

	void SetParameters(FRHICommandList * RHICmdList, FSceneView * View, TRefCountPtr<IPooledRenderTarget> * VisualizeDistanceField) { NativeCall<void, FRHICommandList *, FSceneView *, TRefCountPtr<IPooledRenderTarget> *>(this, "FVisualizeDistanceFieldUpsamplePS.SetParameters", RHICmdList, View, VisualizeDistanceField); }
};

