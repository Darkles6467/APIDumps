#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FTranslucentObjectShadowingPS : FGlobalShader
{
	char __padding[0x28L];
	FTranslucencyShadowProjectionShaderParameters& TranslucencyProjectionParametersField() { return *GetNativePointerField<FTranslucencyShadowProjectionShaderParameters*>(this, "FTranslucentObjectShadowingPS.TranslucencyProjectionParameters"); }
	FTranslucentInjectParameters& TranslucentInjectParametersField() { return *GetNativePointerField<FTranslucentInjectParameters*>(this, "FTranslucentObjectShadowingPS.TranslucentInjectParameters"); }

	// Functions

	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FShaderCompilerEnvironment * OutEnvironment) { NativeCall<void, EShaderPlatform, FShaderCompilerEnvironment *>(nullptr, "FTranslucentObjectShadowingPS.ModifyCompilationEnvironment", Platform, OutEnvironment); }
	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FTranslucentObjectShadowingPS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, const FViewInfo * View, const FLightSceneInfo * LightSceneInfo, const FProjectedShadowInfo * ShadowMap, int VolumeCascadeIndexValue) { NativeCall<void, FRHICommandList *, const FViewInfo *, const FLightSceneInfo *, const FProjectedShadowInfo *, int>(this, "FTranslucentObjectShadowingPS.SetParameters", RHICmdList, View, LightSceneInfo, ShadowMap, VolumeCascadeIndexValue); }
};

