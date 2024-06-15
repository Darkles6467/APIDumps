#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FOcclusionQueryVS : FGlobalShader
{
	char __padding[0x18L];
	FStencilingGeometryShaderParameters& StencilingGeometryParametersField() { return *GetNativePointerField<FStencilingGeometryShaderParameters*>(this, "FOcclusionQueryVS.StencilingGeometryParameters"); }

	// Functions

	void SetParametersWithBoundingSphere(FRHICommandList * RHICmdList, const FViewInfo * View, const FSphere * LightBounds) { NativeCall<void, FRHICommandList *, const FViewInfo *, const FSphere *>(this, "FOcclusionQueryVS.SetParametersWithBoundingSphere", RHICmdList, View, LightBounds); }
	void SetParameters(FRHICommandList * RHICmdList, FSceneView * View) { NativeCall<void, FRHICommandList *, FSceneView *>(this, "FOcclusionQueryVS.SetParameters", RHICmdList, View); }
};

