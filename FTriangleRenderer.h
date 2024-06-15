#pragma once

#include "BaseDeclarations.h"
struct FTriangleRenderer
{

	// Functions

	static void DrawTriangle(FRHICommandListImmediate * RHICmdList, FSceneView * View, const FMaterialRenderProxy * MaterialRenderProxy, bool bNeedsToSwitchVerticalAxis, const FCanvasUVTri * Tri, bool bIsHitTesting, const FHitProxyId HitProxyId, const FColor InVertexColor) { NativeCall<void, FRHICommandListImmediate *, FSceneView *, const FMaterialRenderProxy *, bool, const FCanvasUVTri *, bool, const FHitProxyId, const FColor>(nullptr, "FTriangleRenderer.DrawTriangle", RHICmdList, View, MaterialRenderProxy, bNeedsToSwitchVerticalAxis, Tri, bIsHitTesting, HitProxyId, InVertexColor); }
};

