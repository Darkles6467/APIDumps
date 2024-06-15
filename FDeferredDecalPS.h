#pragma once

#include "BaseDeclarations.h"
#include "FMaterialShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FDeferredDecalPS : FMaterialShader
{
	char __padding[0x18L];

	// Functions

	unsigned int GetTypeSize() { return NativeCall<unsigned int>(this, "FDeferredDecalPS.GetTypeSize"); }
	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FMaterial * Material, FShaderCompilerEnvironment * OutEnvironment) { NativeCall<void, EShaderPlatform, FMaterial *, FShaderCompilerEnvironment *>(nullptr, "FDeferredDecalPS.ModifyCompilationEnvironment", Platform, Material, OutEnvironment); }
	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FDeferredDecalPS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, FSceneView * View, const FMaterialRenderProxy * MaterialProxy, const FDeferredDecalProxy * DecalProxy) { NativeCall<void, FRHICommandList *, FSceneView *, const FMaterialRenderProxy *, const FDeferredDecalProxy *>(this, "FDeferredDecalPS.SetParameters", RHICmdList, View, MaterialProxy, DecalProxy); }
	static bool ShouldCache(EShaderPlatform Platform, FMaterial * Material) { return NativeCall<bool, EShaderPlatform, FMaterial *>(nullptr, "FDeferredDecalPS.ShouldCache", Platform, Material); }
};

