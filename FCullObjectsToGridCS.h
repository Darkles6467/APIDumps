#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FCullObjectsToGridCS : FGlobalShader
{
	char __padding[0x98L];
	FDistanceFieldCulledObjectBufferParameters& CulledObjectBufferParametersField() { return *GetNativePointerField<FDistanceFieldCulledObjectBufferParameters*>(this, "FCullObjectsToGridCS.CulledObjectBufferParameters"); }
	FGlobalDistanceFieldParameters& GlobalDistanceFieldParametersField() { return *GetNativePointerField<FGlobalDistanceFieldParameters*>(this, "FCullObjectsToGridCS.GlobalDistanceFieldParameters"); }
	FRWShaderParameter& CulledObjectGridField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FCullObjectsToGridCS.CulledObjectGrid"); }

	// Functions

	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FShaderCompilerEnvironment * OutEnvironment) { NativeCall<void, EShaderPlatform, FShaderCompilerEnvironment *>(nullptr, "FCullObjectsToGridCS.ModifyCompilationEnvironment", Platform, OutEnvironment); }
	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FCullObjectsToGridCS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, const FScene * Scene, FSceneView * View, float MaxOcclusionDistance, const FGlobalDistanceFieldInfo * GlobalDistanceFieldInfo, int ClipmapIndexValue, const FVolumeUpdateRegion * UpdateRegion) { NativeCall<void, FRHICommandList *, const FScene *, FSceneView *, float, const FGlobalDistanceFieldInfo *, int, const FVolumeUpdateRegion *>(this, "FCullObjectsToGridCS.SetParameters", RHICmdList, Scene, View, MaxOcclusionDistance, GlobalDistanceFieldInfo, ClipmapIndexValue, UpdateRegion); }
	void UnsetParameters(FRHICommandList * RHICmdList) { NativeCall<void, FRHICommandList *>(this, "FCullObjectsToGridCS.UnsetParameters", RHICmdList); }
};

