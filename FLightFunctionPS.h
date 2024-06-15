#pragma once

#include "BaseDeclarations.h"
#include "FMaterialShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FLightFunctionPS : FMaterialShader
{
	char __padding[0x90L];
	FLightFunctionSharedParameters& LightFunctionParametersField() { return *GetNativePointerField<FLightFunctionSharedParameters*>(this, "FLightFunctionPS.LightFunctionParameters"); }
	FDeferredPixelShaderParameters& DeferredParametersField() { return *GetNativePointerField<FDeferredPixelShaderParameters*>(this, "FLightFunctionPS.DeferredParameters"); }

	// Functions

	unsigned int GetTypeSize() { return NativeCall<unsigned int>(this, "FLightFunctionPS.GetTypeSize"); }
	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FLightFunctionPS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, FSceneView * View, const FLightSceneInfo * LightSceneInfo, const FMaterialRenderProxy * MaterialProxy, bool bRenderingPreviewShadowIndicator, float ShadowFadeFraction) { NativeCall<void, FRHICommandList *, FSceneView *, const FLightSceneInfo *, const FMaterialRenderProxy *, bool, float>(this, "FLightFunctionPS.SetParameters", RHICmdList, View, LightSceneInfo, MaterialProxy, bRenderingPreviewShadowIndicator, ShadowFadeFraction); }
	static bool ShouldCache(EShaderPlatform Platform, FMaterial * Material) { return NativeCall<bool, EShaderPlatform, FMaterial *>(nullptr, "FLightFunctionPS.ShouldCache", Platform, Material); }
};

