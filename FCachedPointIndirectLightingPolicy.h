#pragma once

#include "BaseDeclarations.h"
#include "FNoLightMapPolicy.h"

struct FCachedPointIndirectLightingPolicy : FNoLightMapPolicy
{

	// Functions

	void SetMesh(FRHICommandList * RHICmdList, FSceneView * View, FPrimitiveSceneProxy * PrimitiveSceneProxy, const FNullLightMapShaderComponent * VertexShaderParameters, const FCachedPointIndirectLightingPolicy::PixelParametersType * PixelShaderParameters, FShader * VertexShader, FShader * PixelShader, const FVertexFactory * VertexFactory, const FMaterialRenderProxy * MaterialRenderProxy, const FCachedPointIndirectLightingPolicy::ElementDataType * ElementData) { NativeCall<void, FRHICommandList *, FSceneView *, FPrimitiveSceneProxy *, const FNullLightMapShaderComponent *, const FCachedPointIndirectLightingPolicy::PixelParametersType *, FShader *, FShader *, const FVertexFactory *, const FMaterialRenderProxy *, const FCachedPointIndirectLightingPolicy::ElementDataType *>(this, "FCachedPointIndirectLightingPolicy.SetMesh", RHICmdList, View, PrimitiveSceneProxy, VertexShaderParameters, PixelShaderParameters, VertexShader, PixelShader, VertexFactory, MaterialRenderProxy, ElementData); }
	static bool ShouldCache(EShaderPlatform Platform, FMaterial * Material, const FVertexFactoryType * VertexFactoryType) { return NativeCall<bool, EShaderPlatform, FMaterial *, const FVertexFactoryType *>(nullptr, "FCachedPointIndirectLightingPolicy.ShouldCache", Platform, Material, VertexFactoryType); }
};

