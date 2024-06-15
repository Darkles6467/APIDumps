#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FPostProcessVS : FGlobalShader
{

	// Functions

	void SetParameters(const FRenderingCompositePassContext * Context) { NativeCall<void, const FRenderingCompositePassContext *>(this, "FPostProcessVS.SetParameters", Context); }
};

