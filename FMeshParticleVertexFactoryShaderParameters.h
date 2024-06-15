#pragma once

#include "BaseDeclarations.h"
#include "FVertexFactoryShaderParameters.h"

struct FMeshParticleVertexFactoryShaderParameters : FVertexFactoryShaderParameters
{
	char __padding[0x38L];

	// Functions

	void Bind(const FShaderParameterMap * ParameterMap) { NativeCall<void, const FShaderParameterMap *>(this, "FMeshParticleVertexFactoryShaderParameters.Bind", ParameterMap); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "FMeshParticleVertexFactoryShaderParameters.Serialize", Ar); }
	void SetMesh(FRHICommandList * RHICmdList, FShader * Shader, const FVertexFactory * VertexFactory, FSceneView * View, FPrimitiveSceneProxy * Proxy, const FMeshBatchElement * BatchElement, unsigned int DataFlags) { NativeCall<void, FRHICommandList *, FShader *, const FVertexFactory *, FSceneView *, FPrimitiveSceneProxy *, const FMeshBatchElement *, unsigned int>(this, "FMeshParticleVertexFactoryShaderParameters.SetMesh", RHICmdList, Shader, VertexFactory, View, Proxy, BatchElement, DataFlags); }
};

