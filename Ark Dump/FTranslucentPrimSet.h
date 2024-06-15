#pragma once

#include "BaseDeclarations.h"
struct FTranslucentPrimSet
{
	char __padding[0x20L];

	// Functions

	void DrawPrimitivesForForwardShading(FRHICommandListImmediate * RHICmdList, const FViewInfo * View, FSceneRenderer * Renderer) { NativeCall<void, FRHICommandListImmediate *, const FViewInfo *, FSceneRenderer *>(this, "FTranslucentPrimSet.DrawPrimitivesForForwardShading", RHICmdList, View, Renderer); }
	void AddScenePrimitive(FPrimitiveSceneInfo * PrimitiveSceneInfo, const FViewInfo * ViewInfo, bool bUseNormalTranslucency, bool bUseSeparateTranslucency) { NativeCall<void, FPrimitiveSceneInfo *, const FViewInfo *, bool, bool>(this, "FTranslucentPrimSet.AddScenePrimitive", PrimitiveSceneInfo, ViewInfo, bUseNormalTranslucency, bUseSeparateTranslucency); }
	void AppendScenePrimitives(FTranslucentPrimSet::FSortedPrim * Normal, int NumNormal, FTranslucentPrimSet::FSortedPrim * Separate, int NumSeparate) { NativeCall<void, FTranslucentPrimSet::FSortedPrim *, int, FTranslucentPrimSet::FSortedPrim *, int>(this, "FTranslucentPrimSet.AppendScenePrimitives", Normal, NumNormal, Separate, NumSeparate); }
	void DrawPrimitives(FRHICommandListImmediate * RHICmdList, const FViewInfo * View, FDeferredShadingSceneRenderer * Renderer, bool bSeparateTranslucencyPass) { NativeCall<void, FRHICommandListImmediate *, const FViewInfo *, FDeferredShadingSceneRenderer *, bool>(this, "FTranslucentPrimSet.DrawPrimitives", RHICmdList, View, Renderer, bSeparateTranslucencyPass); }
	void DrawPrimitivesParallel(FRHICommandList * RHICmdList, const FViewInfo * View, FDeferredShadingSceneRenderer * Renderer, bool bSeparateTranslucencyPass, int FirstIndex, int LastIndex) { NativeCall<void, FRHICommandList *, const FViewInfo *, FDeferredShadingSceneRenderer *, bool, int, int>(this, "FTranslucentPrimSet.DrawPrimitivesParallel", RHICmdList, View, Renderer, bSeparateTranslucencyPass, FirstIndex, LastIndex); }
	static void PlaceScenePrimitive(FPrimitiveSceneInfo * PrimitiveSceneInfo, const FViewInfo * ViewInfo, bool bUseNormalTranslucency, bool bUseSeparateTranslucency, void * NormalPlace, int * NormalNum, void * SeparatePlace, int * SeparateNum) { NativeCall<void, FPrimitiveSceneInfo *, const FViewInfo *, bool, bool, void *, int *, void *, int *>(nullptr, "FTranslucentPrimSet.PlaceScenePrimitive", PrimitiveSceneInfo, ViewInfo, bUseNormalTranslucency, bUseSeparateTranslucency, NormalPlace, NormalNum, SeparatePlace, SeparateNum); }
	void RenderPrimitive(FRHICommandList * RHICmdList, const FViewInfo * View, FPrimitiveSceneInfo * PrimitiveSceneInfo, const FPrimitiveViewRelevance * ViewRelevance, const FProjectedShadowInfo * TranslucentSelfShadow, bool bSeparateTranslucencyPass) { NativeCall<void, FRHICommandList *, const FViewInfo *, FPrimitiveSceneInfo *, const FPrimitiveViewRelevance *, const FProjectedShadowInfo *, bool>(this, "FTranslucentPrimSet.RenderPrimitive", RHICmdList, View, PrimitiveSceneInfo, ViewRelevance, TranslucentSelfShadow, bSeparateTranslucencyPass); }
	void SortPrimitives() { NativeCall<void>(this, "FTranslucentPrimSet.SortPrimitives"); }
};

