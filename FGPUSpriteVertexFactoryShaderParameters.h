#pragma once

#include "BaseDeclarations.h"
#include "FVertexFactoryShaderParameters.h"

struct FGPUSpriteVertexFactoryShaderParameters : FVertexFactoryShaderParameters
{
	char __padding[0x30L];

	// Functions

	void Bind(const FShaderParameterMap * ParameterMap) { NativeCall<void, const FShaderParameterMap *>(this, "FGPUSpriteVertexFactoryShaderParameters.Bind", ParameterMap); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "FGPUSpriteVertexFactoryShaderParameters.Serialize", Ar); }
	void SetMesh(FRHICommandList * RHICmdList, FShader * Shader, const FVertexFactory * VertexFactory, FSceneView * View, FPrimitiveSceneProxy * Proxy, const FMeshBatchElement * BatchElement, unsigned int DataFlags) { NativeCall<void, FRHICommandList *, FShader *, const FVertexFactory *, FSceneView *, FPrimitiveSceneProxy *, const FMeshBatchElement *, unsigned int>(this, "FGPUSpriteVertexFactoryShaderParameters.SetMesh", RHICmdList, Shader, VertexFactory, View, Proxy, BatchElement, DataFlags); }
};

