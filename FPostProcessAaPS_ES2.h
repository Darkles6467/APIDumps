#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FPostProcessAaPS_ES2 : FGlobalShader
{
	char __padding[0xc8L];
	FPostProcessPassParameters& PostprocessParameterField() { return *GetNativePointerField<FPostProcessPassParameters*>(this, "FPostProcessAaPS_ES2.PostprocessParameter"); }

	// Functions

	void SetPS(const FRenderingCompositePassContext * Context) { NativeCall<void, const FRenderingCompositePassContext *>(this, "FPostProcessAaPS_ES2.SetPS", Context); }
};

