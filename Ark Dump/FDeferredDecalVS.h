#pragma once

#include "BaseDeclarations.h"
#include "FMaterialShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FDeferredDecalVS : FMaterialShader
{
	char __padding[0x8L];

	// Functions

	unsigned int GetTypeSize() { return NativeCall<unsigned int>(this, "FDeferredDecalVS.GetTypeSize"); }
	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FDeferredDecalVS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, FSceneView * View, const FMatrix * InFrustumComponentToClip) { NativeCall<void, FRHICommandList *, FSceneView *, const FMatrix *>(this, "FDeferredDecalVS.SetParameters", RHICmdList, View, InFrustumComponentToClip); }
	static bool ShouldCache(EShaderPlatform Platform, FMaterial * Material) { return NativeCall<bool, EShaderPlatform, FMaterial *>(nullptr, "FDeferredDecalVS.ShouldCache", Platform, Material); }
};

