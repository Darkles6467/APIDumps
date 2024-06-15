#pragma once

#include "BaseDeclarations.h"
#include "FVertexFactoryShaderParameters.h"

struct FLandscapeVertexFactoryMobileVertexShaderParameters : FVertexFactoryShaderParameters
{
	char __padding[0x20L];
	TShaderUniformBufferParameter<FLandscapeUniformShaderParameters>& LandscapeShaderParametersField() { return *GetNativePointerField<TShaderUniformBufferParameter<FLandscapeUniformShaderParameters>*>(this, "FLandscapeVertexFactoryMobileVertexShaderParameters.LandscapeShaderParameters"); }

	// Functions

	void Bind(const FShaderParameterMap * ParameterMap) { NativeCall<void, const FShaderParameterMap *>(this, "FLandscapeVertexFactoryMobileVertexShaderParameters.Bind", ParameterMap); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "FLandscapeVertexFactoryMobileVertexShaderParameters.Serialize", Ar); }
	void SetMesh(FRHICommandList * RHICmdList, FShader * VertexShader, const FVertexFactory * VertexFactory, FSceneView * View, FPrimitiveSceneProxy * Proxy, const FMeshBatchElement * BatchElement, unsigned int DataFlags) { NativeCall<void, FRHICommandList *, FShader *, const FVertexFactory *, FSceneView *, FPrimitiveSceneProxy *, const FMeshBatchElement *, unsigned int>(this, "FLandscapeVertexFactoryMobileVertexShaderParameters.SetMesh", RHICmdList, VertexShader, VertexFactory, View, Proxy, BatchElement, DataFlags); }
};

