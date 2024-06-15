#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct PostProcessBokehDOFSetupPS : FGlobalShader
{
	char __padding[0x148L];
	FPostProcessPassParameters& PostprocessParameterField() { return *GetNativePointerField<FPostProcessPassParameters*>(this, "PostProcessBokehDOFSetupPS.PostprocessParameter"); }
	FDeferredPixelShaderParameters& DeferredParametersField() { return *GetNativePointerField<FDeferredPixelShaderParameters*>(this, "PostProcessBokehDOFSetupPS.DeferredParameters"); }

	// Functions

	void SetParameters(const FRenderingCompositePassContext * Context) { NativeCall<void, const FRenderingCompositePassContext *>(this, "PostProcessBokehDOFSetupPS.SetParameters", Context); }
};

