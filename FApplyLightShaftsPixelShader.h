#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"
#include "FPooledRenderTarget.h"

struct FApplyLightShaftsPixelShader : FGlobalShader
{
	char __padding[0x10L];

	// Functions

	void SetParameters(FRHICommandList * RHICmdList, const FViewInfo * View, TRefCountPtr<IPooledRenderTarget> * LightShaftOcclusion) { NativeCall<void, FRHICommandList *, const FViewInfo *, TRefCountPtr<IPooledRenderTarget> *>(this, "FApplyLightShaftsPixelShader.SetParameters", RHICmdList, View, LightShaftOcclusion); }
};

