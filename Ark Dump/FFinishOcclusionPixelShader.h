#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"
#include "FPooledRenderTarget.h"

struct FFinishOcclusionPixelShader : FGlobalShader
{
	char __padding[0x50L];
	FLightShaftPixelShaderParameters& LightShaftParametersField() { return *GetNativePointerField<FLightShaftPixelShaderParameters*>(this, "FFinishOcclusionPixelShader.LightShaftParameters"); }

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FFinishOcclusionPixelShader.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, const FLightSceneInfo * LightSceneInfo, const FViewInfo * View, TRefCountPtr<IPooledRenderTarget> * PassSource) { NativeCall<void, FRHICommandList *, const FLightSceneInfo *, const FViewInfo *, TRefCountPtr<IPooledRenderTarget> *>(this, "FFinishOcclusionPixelShader.SetParameters", RHICmdList, LightSceneInfo, View, PassSource); }
};

