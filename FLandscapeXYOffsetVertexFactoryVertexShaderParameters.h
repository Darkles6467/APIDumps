#pragma once

#include "BaseDeclarations.h"
#include "FVertexFactoryShaderParameters.h"

struct FLandscapeVertexFactoryVertexShaderParameters : FVertexFactoryShaderParameters
{
	char __padding[0x30L];
	TShaderUniformBufferParameter<FLandscapeUniformShaderParameters>& LandscapeShaderParametersField() { return *GetNativePointerField<TShaderUniformBufferParameter<FLandscapeUniformShaderParameters>*>(this, "FLandscapeVertexFactoryVertexShaderParameters.LandscapeShaderParameters"); }

	// Functions

	unsigned int GetSize() { return NativeCall<unsigned int>(this, "FLandscapeVertexFactoryVertexShaderParameters.GetSize"); }
	void Bind(const FShaderParameterMap * ParameterMap) { NativeCall<void, const FShaderParameterMap *>(this, "FLandscapeVertexFactoryVertexShaderParameters.Bind", ParameterMap); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "FLandscapeVertexFactoryVertexShaderParameters.Serialize", Ar); }
	void SetMesh(FRHICommandList * RHICmdList, FShader * VertexShader, const FVertexFactory * VertexFactory, FSceneView * View, FPrimitiveSceneProxy * Proxy, const FMeshBatchElement * BatchElement, unsigned int DataFlags) { NativeCall<void, FRHICommandList *, FShader *, const FVertexFactory *, FSceneView *, FPrimitiveSceneProxy *, const FMeshBatchElement *, unsigned int>(this, "FLandscapeVertexFactoryVertexShaderParameters.SetMesh", RHICmdList, VertexShader, VertexFactory, View, Proxy, BatchElement, DataFlags); }
};

struct FLandscapeXYOffsetVertexFactoryVertexShaderParameters : FLandscapeVertexFactoryVertexShaderParameters
{

	// Functions

	void SetMesh(FRHICommandList * RHICmdList, FShader * VertexShader, const FVertexFactory * VertexFactory, FSceneView * View, FPrimitiveSceneProxy * Proxy, const FMeshBatchElement * BatchElement, unsigned int DataFlags) { NativeCall<void, FRHICommandList *, FShader *, const FVertexFactory *, FSceneView *, FPrimitiveSceneProxy *, const FMeshBatchElement *, unsigned int>(this, "FLandscapeXYOffsetVertexFactoryVertexShaderParameters.SetMesh", RHICmdList, VertexShader, VertexFactory, View, Proxy, BatchElement, DataFlags); }
};

