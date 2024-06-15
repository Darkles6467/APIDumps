#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"
#include "FPooledRenderTarget.h"

struct FBlurLightShaftsPixelShader : FGlobalShader
{
	char __padding[0x50L];
	FLightShaftPixelShaderParameters& LightShaftParametersField() { return *GetNativePointerField<FLightShaftPixelShaderParameters*>(this, "FBlurLightShaftsPixelShader.LightShaftParameters"); }

	// Functions

	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FShaderCompilerEnvironment * OutEnvironment) { NativeCall<void, EShaderPlatform, FShaderCompilerEnvironment *>(nullptr, "FBlurLightShaftsPixelShader.ModifyCompilationEnvironment", Platform, OutEnvironment); }
	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FBlurLightShaftsPixelShader.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, const FLightSceneInfo * LightSceneInfo, const FViewInfo * View, int PassIndex, TRefCountPtr<IPooledRenderTarget> * PassSource) { NativeCall<void, FRHICommandList *, const FLightSceneInfo *, const FViewInfo *, int, TRefCountPtr<IPooledRenderTarget> *>(this, "FBlurLightShaftsPixelShader.SetParameters", RHICmdList, LightSceneInfo, View, PassIndex, PassSource); }
};

