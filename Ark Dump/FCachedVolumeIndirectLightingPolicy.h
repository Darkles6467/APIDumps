#pragma once

#include "BaseDeclarations.h"
#include "FNoLightMapPolicy.h"

struct FCachedVolumeIndirectLightingPolicy : FNoLightMapPolicy
{

	// Functions

	void PixelParametersType(const FShaderParameterMap * ParameterMap) { NativeCall<void, const FShaderParameterMap *>(this, "FCachedVolumeIndirectLightingPolicy.PixelParametersType", ParameterMap); }
	void PixelParametersType(FArchive * Ar) { NativeCall<void, FArchive *>(this, "FCachedVolumeIndirectLightingPolicy.PixelParametersType", Ar); }
	void Set(FRHICommandList * RHICmdList, const FNullLightMapShaderComponent * VertexShaderParameters, const FCachedVolumeIndirectLightingPolicy::PixelParametersType * PixelShaderParameters, FShader * VertexShader, FShader * PixelShader, const FVertexFactory * VertexFactory, const FMaterialRenderProxy * MaterialRenderProxy, FSceneView * View) { NativeCall<void, FRHICommandList *, const FNullLightMapShaderComponent *, const FCachedVolumeIndirectLightingPolicy::PixelParametersType *, FShader *, FShader *, const FVertexFactory *, const FMaterialRenderProxy *, FSceneView *>(this, "FCachedVolumeIndirectLightingPolicy.Set", RHICmdList, VertexShaderParameters, PixelShaderParameters, VertexShader, PixelShader, VertexFactory, MaterialRenderProxy, View); }
	void SetMesh(FRHICommandList * RHICmdList, FSceneView * View, FPrimitiveSceneProxy * PrimitiveSceneProxy, const FNullLightMapShaderComponent * VertexShaderParameters, const FCachedVolumeIndirectLightingPolicy::PixelParametersType * PixelShaderParameters, FShader * VertexShader, FShader * PixelShader, const FVertexFactory * VertexFactory, const FMaterialRenderProxy * MaterialRenderProxy, const FCachedVolumeIndirectLightingPolicy::ElementDataType * ElementData) { NativeCall<void, FRHICommandList *, FSceneView *, FPrimitiveSceneProxy *, const FNullLightMapShaderComponent *, const FCachedVolumeIndirectLightingPolicy::PixelParametersType *, FShader *, FShader *, const FVertexFactory *, const FMaterialRenderProxy *, const FCachedVolumeIndirectLightingPolicy::ElementDataType *>(this, "FCachedVolumeIndirectLightingPolicy.SetMesh", RHICmdList, View, PrimitiveSceneProxy, VertexShaderParameters, PixelShaderParameters, VertexShader, PixelShader, VertexFactory, MaterialRenderProxy, ElementData); }
	static bool ShouldCache(EShaderPlatform Platform, FMaterial * Material, const FVertexFactoryType * VertexFactoryType) { return NativeCall<bool, EShaderPlatform, FMaterial *, const FVertexFactoryType *>(nullptr, "FCachedVolumeIndirectLightingPolicy.ShouldCache", Platform, Material, VertexFactoryType); }
};

