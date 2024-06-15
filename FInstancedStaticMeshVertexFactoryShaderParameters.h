#pragma once

#include "BaseDeclarations.h"
#include "FVertexFactoryShaderParameters.h"

struct FLocalVertexFactoryShaderParameters : FVertexFactoryShaderParameters
{
	char __padding[0x8L];

	// Functions

	void Bind(const FShaderParameterMap * ParameterMap) { NativeCall<void, const FShaderParameterMap *>(this, "FLocalVertexFactoryShaderParameters.Bind", ParameterMap); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "FLocalVertexFactoryShaderParameters.Serialize", Ar); }
	void SetMesh(FRHICommandList * RHICmdList, FShader * Shader, const FVertexFactory * VertexFactory, FSceneView * View, FPrimitiveSceneProxy * Proxy, const FMeshBatchElement * BatchElement, unsigned int DataFlags) { NativeCall<void, FRHICommandList *, FShader *, const FVertexFactory *, FSceneView *, FPrimitiveSceneProxy *, const FMeshBatchElement *, unsigned int>(this, "FLocalVertexFactoryShaderParameters.SetMesh", RHICmdList, Shader, VertexFactory, View, Proxy, BatchElement, DataFlags); }
};

struct FInstancedStaticMeshVertexFactoryShaderParameters : FLocalVertexFactoryShaderParameters
{
	char __padding[0x38L];

	// Functions

	void Bind(const FShaderParameterMap * ParameterMap) { NativeCall<void, const FShaderParameterMap *>(this, "FInstancedStaticMeshVertexFactoryShaderParameters.Bind", ParameterMap); }
	unsigned int GetSize() { return NativeCall<unsigned int>(this, "FInstancedStaticMeshVertexFactoryShaderParameters.GetSize"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "FInstancedStaticMeshVertexFactoryShaderParameters.Serialize", Ar); }
	void SetMesh(FRHICommandList * RHICmdList, FShader * VertexShader, const FVertexFactory * VertexFactory, FSceneView * View, FPrimitiveSceneProxy * Proxy, const FMeshBatchElement * BatchElement, unsigned int DataFlags) { NativeCall<void, FRHICommandList *, FShader *, const FVertexFactory *, FSceneView *, FPrimitiveSceneProxy *, const FMeshBatchElement *, unsigned int>(this, "FInstancedStaticMeshVertexFactoryShaderParameters.SetMesh", RHICmdList, VertexShader, VertexFactory, View, Proxy, BatchElement, DataFlags); }
};

