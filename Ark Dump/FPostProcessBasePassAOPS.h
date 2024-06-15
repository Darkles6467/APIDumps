#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FPostProcessBasePassAOPS : FGlobalShader
{
	char __padding[0x148L];
	FPostProcessPassParameters& PostprocessParameterField() { return *GetNativePointerField<FPostProcessPassParameters*>(this, "FPostProcessBasePassAOPS.PostprocessParameter"); }
	FDeferredPixelShaderParameters& DeferredParametersField() { return *GetNativePointerField<FDeferredPixelShaderParameters*>(this, "FPostProcessBasePassAOPS.DeferredParameters"); }
	FScreenSpaceAOandSSRShaderParameters& ScreenSpaceAOandSSRShaderParamsField() { return *GetNativePointerField<FScreenSpaceAOandSSRShaderParameters*>(this, "FPostProcessBasePassAOPS.ScreenSpaceAOandSSRShaderParams"); }

	// Functions

	void SetParameters(const FRenderingCompositePassContext * Context, FIntPoint InputTextureSize) { NativeCall<void, const FRenderingCompositePassContext *, FIntPoint>(this, "FPostProcessBasePassAOPS.SetParameters", Context, InputTextureSize); }
};

