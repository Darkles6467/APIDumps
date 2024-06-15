#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FPostProcessBloomDownVS_ES2 : FGlobalShader
{
	char __padding[0xc8L];
	FPostProcessPassParameters& PostprocessParameterField() { return *GetNativePointerField<FPostProcessPassParameters*>(this, "FPostProcessBloomDownVS_ES2.PostprocessParameter"); }

	// Functions

	void SetVS(const FRenderingCompositePassContext * Context, float InScale) { NativeCall<void, const FRenderingCompositePassContext *, float>(this, "FPostProcessBloomDownVS_ES2.SetVS", Context, InScale); }
};

