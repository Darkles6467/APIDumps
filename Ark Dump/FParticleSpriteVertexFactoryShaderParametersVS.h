#pragma once

#include "BaseDeclarations.h"
#include "FParticleSpriteVertexFactoryShaderParameters.h"
#include "FVertexFactoryShaderParameters.h"

struct FParticleSpriteVertexFactoryShaderParametersVS : FParticleSpriteVertexFactoryShaderParameters
{

	// Functions

	void SetMesh(FRHICommandList * RHICmdList, FShader * Shader, const FVertexFactory * VertexFactory, FSceneView * View, FPrimitiveSceneProxy * Proxy, const FMeshBatchElement * BatchElement, unsigned int DataFlags) { NativeCall<void, FRHICommandList *, FShader *, const FVertexFactory *, FSceneView *, FPrimitiveSceneProxy *, const FMeshBatchElement *, unsigned int>(this, "FParticleSpriteVertexFactoryShaderParametersVS.SetMesh", RHICmdList, Shader, VertexFactory, View, Proxy, BatchElement, DataFlags); }
};

