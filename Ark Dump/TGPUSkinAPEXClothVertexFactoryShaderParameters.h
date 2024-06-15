#pragma once

#include "BaseDeclarations.h"
#include "FGPUSkinVertexFactoryShaderParameters.h"
#include "FVertexFactoryShaderParameters.h"

struct TGPUSkinAPEXClothVertexFactoryShaderParameters : FGPUSkinVertexFactoryShaderParameters
{
	char __padding[0x10L];

	// Functions

	void Bind(const FShaderParameterMap * ParameterMap) { NativeCall<void, const FShaderParameterMap *>(this, "TGPUSkinAPEXClothVertexFactoryShaderParameters.Bind", ParameterMap); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "TGPUSkinAPEXClothVertexFactoryShaderParameters.Serialize", Ar); }
	void SetMesh(FRHICommandList * RHICmdList, FShader * Shader, const FVertexFactory * VertexFactory, FSceneView * View, FPrimitiveSceneProxy * Proxy, const FMeshBatchElement * BatchElement, unsigned int DataFlags) { NativeCall<void, FRHICommandList *, FShader *, const FVertexFactory *, FSceneView *, FPrimitiveSceneProxy *, const FMeshBatchElement *, unsigned int>(this, "TGPUSkinAPEXClothVertexFactoryShaderParameters.SetMesh", RHICmdList, Shader, VertexFactory, View, Proxy, BatchElement, DataFlags); }
};

