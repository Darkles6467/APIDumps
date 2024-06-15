#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FStencilDecalMaskPS : FGlobalShader
{
	char __padding[0x78L];
	FDeferredPixelShaderParameters& DeferredParametersField() { return *GetNativePointerField<FDeferredPixelShaderParameters*>(this, "FStencilDecalMaskPS.DeferredParameters"); }

	// Functions

	void SetParameters(FRHICommandList * RHICmdList, FSceneView * View) { NativeCall<void, FRHICommandList *, FSceneView *>(this, "FStencilDecalMaskPS.SetParameters", RHICmdList, View); }
};

