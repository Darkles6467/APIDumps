#pragma once

#include "BaseDeclarations.h"
#include "FLocalVertexFactory.h"
#include "FVertexFactory.h"
#include "FRenderResource.h"

struct FInstancedStaticMeshVertexFactory : FLocalVertexFactory
{
	char __padding[0x108L];
	FInstancedStaticMeshVertexFactory::DataType& DataField() { return *GetNativePointerField<FInstancedStaticMeshVertexFactory::DataType*>(this, "FInstancedStaticMeshVertexFactory.Data"); }

	// Functions

	unsigned __int64 GetStaticBatchElementVisibility(FSceneView * View, const FMeshBatch * Batch) { return NativeCall<unsigned __int64, FSceneView *, const FMeshBatch *>(this, "FInstancedStaticMeshVertexFactory.GetStaticBatchElementVisibility", View, Batch); }
	FInstancedStaticMeshVertexFactory::DataType * DataType(const FInstancedStaticMeshVertexFactory::DataType * __that) { return NativeCall<FInstancedStaticMeshVertexFactory::DataType *, const FInstancedStaticMeshVertexFactory::DataType *>(this, "FInstancedStaticMeshVertexFactory.DataType", __that); }
	void InitRHI() { NativeCall<void>(this, "FInstancedStaticMeshVertexFactory.InitRHI"); }
	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FMaterial * Material, FShaderCompilerEnvironment * OutEnvironment) { NativeCall<void, EShaderPlatform, FMaterial *, FShaderCompilerEnvironment *>(nullptr, "FInstancedStaticMeshVertexFactory.ModifyCompilationEnvironment", Platform, Material, OutEnvironment); }
	static bool ShouldCache(EShaderPlatform Platform, FMaterial * Material, FShaderType * ShaderType) { return NativeCall<bool, EShaderPlatform, FMaterial *, FShaderType *>(nullptr, "FInstancedStaticMeshVertexFactory.ShouldCache", Platform, Material, ShaderType); }
};

