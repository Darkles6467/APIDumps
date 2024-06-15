#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FPostProcessSmartBlurSSAO : FGlobalShader
{
	char __padding[0x148L];
	FPostProcessPassParameters& PostprocessParameterField() { return *GetNativePointerField<FPostProcessPassParameters*>(this, "FPostProcessSmartBlurSSAO.PostprocessParameter"); }
	FDeferredPixelShaderParameters& DeferredParametersField() { return *GetNativePointerField<FDeferredPixelShaderParameters*>(this, "FPostProcessSmartBlurSSAO.DeferredParameters"); }
	FScreenSpaceAOandSSRShaderParameters& ScreenSpaceAOandSSRShaderParamsField() { return *GetNativePointerField<FScreenSpaceAOandSSRShaderParameters*>(this, "FPostProcessSmartBlurSSAO.ScreenSpaceAOandSSRShaderParams"); }

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FPostProcessSmartBlurSSAO.Serialize", Ar); }
};

