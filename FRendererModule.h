#pragma once

#include "BaseDeclarations.h"
#include "IModuleInterface.h"
#include "FFilterVertexDeclaration.h"
#include "FPooledRenderTarget.h"

struct IRendererModule : IModuleInterface
{
};

struct FRendererModule : IRendererModule
{
	char __padding[0x60L];

	// Functions

	void BeginRenderingViewFamily(FCanvas * Canvas, FSceneViewFamily * ViewFamily) { NativeCall<void, FCanvas *, FSceneViewFamily *>(this, "FRendererModule.BeginRenderingViewFamily", Canvas, ViewFamily); }
	void DebugLogOnCrash() { NativeCall<void>(this, "FRendererModule.DebugLogOnCrash"); }
	void DrawRectangle(FRHICommandList * RHICmdList, float X, float Y, float SizeX, float SizeY, float U, float V, float SizeU, float SizeV, FIntPoint TargetSize, FIntPoint TextureSize, FShader * VertexShader, EDrawRectangleFlags Flags) { NativeCall<void, FRHICommandList *, float, float, float, float, float, float, float, float, FIntPoint, FIntPoint, FShader *, EDrawRectangleFlags>(this, "FRendererModule.DrawRectangle", RHICmdList, X, Y, SizeX, SizeY, U, V, SizeU, SizeV, TargetSize, TextureSize, VertexShader, Flags); }
	void DrawTileMesh(FRHICommandListImmediate * RHICmdList, FSceneView * SceneView, const FMeshBatch * Mesh, bool bIsHitTesting, const FHitProxyId * HitProxyId) { NativeCall<void, FRHICommandListImmediate *, FSceneView *, const FMeshBatch *, bool, const FHitProxyId *>(this, "FRendererModule.DrawTileMesh", RHICmdList, SceneView, Mesh, bIsHitTesting, HitProxyId); }
	void GPUBenchmark(FSynthBenchmarkResults * InOut, float WorkScale) { NativeCall<void, FSynthBenchmarkResults *, float>(this, "FRendererModule.GPUBenchmark", InOut, WorkScale); }
	TGlobalResource<FFilterVertexDeclaration> * GetFilterVertexDeclaration() { return NativeCall<TGlobalResource<FFilterVertexDeclaration> *>(this, "FRendererModule.GetFilterVertexDeclaration"); }
	unsigned int GetNumDynamicLightsAffectingPrimitive(const FPrimitiveSceneInfo * PrimitiveSceneInfo, const FLightCacheInterface * LCI) { return NativeCall<unsigned int, const FPrimitiveSceneInfo *, const FLightCacheInterface *>(this, "FRendererModule.GetNumDynamicLightsAffectingPrimitive", PrimitiveSceneInfo, LCI); }
	void GetSceneRenderTargetsBufferSize(unsigned int * SizeX, unsigned int * SizeY) { NativeCall<void, unsigned int *, unsigned int *>(this, "FRendererModule.GetSceneRenderTargetsBufferSize", SizeX, SizeY); }
	void QueryVisualizeTexture(FQueryVisualizeTexureInfo * Out) { NativeCall<void, FQueryVisualizeTexureInfo *>(this, "FRendererModule.QueryVisualizeTexture", Out); }
	void ReallocateSceneRenderTargets() { NativeCall<void>(this, "FRendererModule.ReallocateSceneRenderTargets"); }
	void RemoveScene(FSceneInterface * Scene) { NativeCall<void, FSceneInterface *>(this, "FRendererModule.RemoveScene", Scene); }
	bool RenderOverlayExtensions(FSceneView * View, FRHICommandListImmediate * RHICmdList) { return NativeCall<bool, FSceneView *, FRHICommandListImmediate *>(this, "FRendererModule.RenderOverlayExtensions", View, RHICmdList); }
	bool RenderPostOpaqueExtensions(FSceneView * View, FRHICommandListImmediate * RHICmdList) { return NativeCall<bool, FSceneView *, FRHICommandListImmediate *>(this, "FRendererModule.RenderPostOpaqueExtensions", View, RHICmdList); }
	void RenderTargetPoolFindFreeElement(const FPooledRenderTargetDesc * Desc, TRefCountPtr<IPooledRenderTarget> * Out, const wchar_t * InDebugName) { NativeCall<void, const FPooledRenderTargetDesc *, TRefCountPtr<IPooledRenderTarget> *, const wchar_t *>(this, "FRendererModule.RenderTargetPoolFindFreeElement", Desc, Out, InDebugName); }
	void SceneRenderTargetsSetBufferSize(unsigned int SizeX, unsigned int SizeY) { NativeCall<void, unsigned int, unsigned int>(this, "FRendererModule.SceneRenderTargetsSetBufferSize", SizeX, SizeY); }
	void TickRenderTargetPool() { NativeCall<void>(this, "FRendererModule.TickRenderTargetPool"); }
	void UpdateMapNeedsLightingFullyRebuiltState(UWorld * World) { NativeCall<void, UWorld *>(this, "FRendererModule.UpdateMapNeedsLightingFullyRebuiltState", World); }
	void UpdateStaticDrawListsForMaterials(const TArray<FMaterial const *> * Materials) { NativeCall<void, const TArray<FMaterial const *> *>(this, "FRendererModule.UpdateStaticDrawListsForMaterials", Materials); }
};

