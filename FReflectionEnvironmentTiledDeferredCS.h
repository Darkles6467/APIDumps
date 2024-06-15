#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"
#include "FPooledRenderTarget.h"

struct FReflectionEnvironmentTiledDeferredCS : FGlobalShader
{
	char __padding[0x100L];
	FDeferredPixelShaderParameters& DeferredParametersField() { return *GetNativePointerField<FDeferredPixelShaderParameters*>(this, "FReflectionEnvironmentTiledDeferredCS.DeferredParameters"); }
	FRWShaderParameter& OutSceneColorField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FReflectionEnvironmentTiledDeferredCS.OutSceneColor"); }
	FSkyLightReflectionParameters& SkyLightParametersField() { return *GetNativePointerField<FSkyLightReflectionParameters*>(this, "FReflectionEnvironmentTiledDeferredCS.SkyLightParameters"); }
	FDistanceFieldAOSpecularOcclusionParameters& SpecularOcclusionParametersField() { return *GetNativePointerField<FDistanceFieldAOSpecularOcclusionParameters*>(this, "FReflectionEnvironmentTiledDeferredCS.SpecularOcclusionParameters"); }

	// Functions

	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FShaderCompilerEnvironment * OutEnvironment) { NativeCall<void, EShaderPlatform, FShaderCompilerEnvironment *>(nullptr, "FReflectionEnvironmentTiledDeferredCS.ModifyCompilationEnvironment", Platform, OutEnvironment); }
	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FReflectionEnvironmentTiledDeferredCS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, FSceneView * View, FRHITexture * SSRTexture, FRHIUnorderedAccessView * OutSceneColorUAV, const TRefCountPtr<IPooledRenderTarget> * DynamicBentNormalAO) { NativeCall<void, FRHICommandList *, FSceneView *, FRHITexture *, FRHIUnorderedAccessView *, const TRefCountPtr<IPooledRenderTarget> *>(this, "FReflectionEnvironmentTiledDeferredCS.SetParameters", RHICmdList, View, SSRTexture, OutSceneColorUAV, DynamicBentNormalAO); }
};

