#pragma once

#include "BaseDeclarations.h"
#include "FMaterialShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FPostProcessMaterialPS : FMaterialShader
{
	char __padding[0xc8L];
	FPostProcessPassParameters& PostprocessParameterField() { return *GetNativePointerField<FPostProcessPassParameters*>(this, "FPostProcessMaterialPS.PostprocessParameter"); }

	// Functions

	unsigned int GetTypeSize() { return NativeCall<unsigned int>(this, "FPostProcessMaterialPS.GetTypeSize"); }
	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FMaterial * Material, FShaderCompilerEnvironment * OutEnvironment) { NativeCall<void, EShaderPlatform, FMaterial *, FShaderCompilerEnvironment *>(nullptr, "FPostProcessMaterialPS.ModifyCompilationEnvironment", Platform, Material, OutEnvironment); }
	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FPostProcessMaterialPS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, const FRenderingCompositePassContext * Context, const FMaterialRenderProxy * Material) { NativeCall<void, FRHICommandList *, const FRenderingCompositePassContext *, const FMaterialRenderProxy *>(this, "FPostProcessMaterialPS.SetParameters", RHICmdList, Context, Material); }
	static bool ShouldCache(EShaderPlatform Platform, FMaterial * Material) { return NativeCall<bool, EShaderPlatform, FMaterial *>(nullptr, "FPostProcessMaterialPS.ShouldCache", Platform, Material); }
};

