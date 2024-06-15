#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FCullObjectsForVolumeCS : FGlobalShader
{
	char __padding[0x68L];
	FDistanceFieldObjectBufferParameters& ObjectBufferParametersField() { return *GetNativePointerField<FDistanceFieldObjectBufferParameters*>(this, "FCullObjectsForVolumeCS.ObjectBufferParameters"); }
	FDistanceFieldCulledObjectBufferParameters& CulledObjectParametersField() { return *GetNativePointerField<FDistanceFieldCulledObjectBufferParameters*>(this, "FCullObjectsForVolumeCS.CulledObjectParameters"); }

	// Functions

	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FShaderCompilerEnvironment * OutEnvironment) { NativeCall<void, EShaderPlatform, FShaderCompilerEnvironment *>(nullptr, "FCullObjectsForVolumeCS.ModifyCompilationEnvironment", Platform, OutEnvironment); }
	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FCullObjectsForVolumeCS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, const FScene * Scene, FSceneView * View, float MaxOcclusionDistance, const FVector4 * VolumeBoundsValue, FGlobalDFCacheType CacheType) { NativeCall<void, FRHICommandList *, const FScene *, FSceneView *, float, const FVector4 *, FGlobalDFCacheType>(this, "FCullObjectsForVolumeCS.SetParameters", RHICmdList, Scene, View, MaxOcclusionDistance, VolumeBoundsValue, CacheType); }
	void UnsetParameters(FRHICommandList * RHICmdList, const FScene * Scene) { NativeCall<void, FRHICommandList *, const FScene *>(this, "FCullObjectsForVolumeCS.UnsetParameters", RHICmdList, Scene); }
};

