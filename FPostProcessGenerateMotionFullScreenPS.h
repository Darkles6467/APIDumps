#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FPostProcessGenerateMotionFullScreenPS : FGlobalShader
{
	char __padding[0x150L];
	FPostProcessPassParameters& PostprocessParameterField() { return *GetNativePointerField<FPostProcessPassParameters*>(this, "FPostProcessGenerateMotionFullScreenPS.PostprocessParameter"); }
	FDeferredPixelShaderParameters& DeferredParametersField() { return *GetNativePointerField<FDeferredPixelShaderParameters*>(this, "FPostProcessGenerateMotionFullScreenPS.DeferredParameters"); }

	// Functions

};

