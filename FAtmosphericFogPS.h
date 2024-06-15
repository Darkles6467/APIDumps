#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"
#include "FPooledRenderTarget.h"

struct FAtmosphericFogPS : FGlobalShader
{
	char __padding[0x50L];
	FSceneTextureShaderParameters& SceneTextureParametersField() { return *GetNativePointerField<FSceneTextureShaderParameters*>(this, "FAtmosphericFogPS.SceneTextureParameters"); }
	FAtmosphereShaderTextureParameters& AtmosphereTextureParametersField() { return *GetNativePointerField<FAtmosphereShaderTextureParameters*>(this, "FAtmosphericFogPS.AtmosphereTextureParameters"); }

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FAtmosphericFogPS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, FSceneView * View, TRefCountPtr<IPooledRenderTarget> * LightShaftOcclusion) { NativeCall<void, FRHICommandList *, FSceneView *, TRefCountPtr<IPooledRenderTarget> *>(this, "FAtmosphericFogPS.SetParameters", RHICmdList, View, LightShaftOcclusion); }
};

