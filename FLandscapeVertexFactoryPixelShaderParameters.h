#pragma once

#include "BaseDeclarations.h"
#include "FVertexFactoryShaderParameters.h"

struct FLandscapeVertexFactoryPixelShaderParameters : FVertexFactoryShaderParameters
{
	char __padding[0x10L];

	// Functions

	void Bind(const FShaderParameterMap * ParameterMap) { NativeCall<void, const FShaderParameterMap *>(this, "FLandscapeVertexFactoryPixelShaderParameters.Bind", ParameterMap); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "FLandscapeVertexFactoryPixelShaderParameters.Serialize", Ar); }
	void SetMesh(FRHICommandList * RHICmdList, FShader * PixelShader, const FVertexFactory * VertexFactory, FSceneView * View, FPrimitiveSceneProxy * Proxy, const FMeshBatchElement * BatchElement, unsigned int DataFlags) { NativeCall<void, FRHICommandList *, FShader *, const FVertexFactory *, FSceneView *, FPrimitiveSceneProxy *, const FMeshBatchElement *, unsigned int>(this, "FLandscapeVertexFactoryPixelShaderParameters.SetMesh", RHICmdList, PixelShader, VertexFactory, View, Proxy, BatchElement, DataFlags); }
};

