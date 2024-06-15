#pragma once

#include "BaseDeclarations.h"
struct FUniformMeshConverter
{

	// Functions

	static int Convert(FRHICommandListImmediate * RHICmdList, FSceneRenderer * Renderer, FViewInfo * View, const FPrimitiveSceneInfo * PrimitiveSceneInfo, FUniformMeshBuffers ** OutUniformMeshBuffers, const FMaterialRenderProxy ** OutMaterialRenderProxy, FRHIUniformBuffer ** OutPrimitiveUniformBuffer) { return NativeCall<int, FRHICommandListImmediate *, FSceneRenderer *, FViewInfo *, const FPrimitiveSceneInfo *, FUniformMeshBuffers **, const FMaterialRenderProxy **, FRHIUniformBuffer **>(nullptr, "FUniformMeshConverter.Convert", RHICmdList, Renderer, View, PrimitiveSceneInfo, OutUniformMeshBuffers, OutMaterialRenderProxy, OutPrimitiveUniformBuffer); }
	static void GenerateSurfels(FRHICommandListImmediate * RHICmdList, FViewInfo * View, const FPrimitiveSceneInfo * PrimitiveSceneInfo, const FMaterialRenderProxy * MaterialProxy, FRHIUniformBuffer * PrimitiveUniformBuffer, const FMatrix * Instance0Transform, int SurfelOffset, int NumSurfels) { NativeCall<void, FRHICommandListImmediate *, FViewInfo *, const FPrimitiveSceneInfo *, const FMaterialRenderProxy *, FRHIUniformBuffer *, const FMatrix *, int, int>(nullptr, "FUniformMeshConverter.GenerateSurfels", RHICmdList, View, PrimitiveSceneInfo, MaterialProxy, PrimitiveUniformBuffer, Instance0Transform, SurfelOffset, NumSurfels); }
};

