#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct PostProcessVisualizeDOFPS : FGlobalShader
{
	char __padding[0x148L];
	FPostProcessPassParameters& PostprocessParameterField() { return *GetNativePointerField<FPostProcessPassParameters*>(this, "PostProcessVisualizeDOFPS.PostprocessParameter"); }
	FDeferredPixelShaderParameters& DeferredParametersField() { return *GetNativePointerField<FDeferredPixelShaderParameters*>(this, "PostProcessVisualizeDOFPS.DeferredParameters"); }

	// Functions

	void SetParameters(const FRenderingCompositePassContext * Context, const FDepthOfFieldStats * DepthOfFieldStats) { NativeCall<void, const FRenderingCompositePassContext *, const FDepthOfFieldStats *>(this, "PostProcessVisualizeDOFPS.SetParameters", Context, DepthOfFieldStats); }
};

