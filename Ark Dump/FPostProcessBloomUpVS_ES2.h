#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FPostProcessBloomUpVS_ES2 : FGlobalShader
{
	char __padding[0xc8L];
	FPostProcessPassParameters& PostprocessParameterField() { return *GetNativePointerField<FPostProcessPassParameters*>(this, "FPostProcessBloomUpVS_ES2.PostprocessParameter"); }

	// Functions

	void SetVS(const FRenderingCompositePassContext * Context, FVector2D InScale) { NativeCall<void, const FRenderingCompositePassContext *, FVector2D>(this, "FPostProcessBloomUpVS_ES2.SetVS", Context, InScale); }
};

