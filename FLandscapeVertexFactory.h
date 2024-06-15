#pragma once

#include "BaseDeclarations.h"
#include "FVertexFactory.h"

struct FLandscapeVertexFactory : FVertexFactory
{
	char __padding[0x10L];

	// Functions

	unsigned __int64 GetStaticBatchElementVisibility(FSceneView * View, const FMeshBatch * Batch) { return NativeCall<unsigned __int64, FSceneView *, const FMeshBatch *>(this, "FLandscapeVertexFactory.GetStaticBatchElementVisibility", View, Batch); }
	void InitRHI() { NativeCall<void>(this, "FLandscapeVertexFactory.InitRHI"); }
	static bool ShouldCache(EShaderPlatform Platform, FMaterial * Material, FShaderType * ShaderType) { return NativeCall<bool, EShaderPlatform, FMaterial *, FShaderType *>(nullptr, "FLandscapeVertexFactory.ShouldCache", Platform, Material, ShaderType); }
};

