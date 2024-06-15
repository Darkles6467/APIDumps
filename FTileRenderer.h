#pragma once

#include "BaseDeclarations.h"
struct FTileRenderer
{

	// Functions

	static void DrawTile(FRHICommandListImmediate * RHICmdList, FSceneView * View, const FMaterialRenderProxy * MaterialRenderProxy, bool bNeedsToSwitchVerticalAxis, float X, float Y, float SizeX, float SizeY, float U, float V, float SizeU, float SizeV, bool bIsHitTesting, const FHitProxyId HitProxyId) { NativeCall<void, FRHICommandListImmediate *, FSceneView *, const FMaterialRenderProxy *, bool, float, float, float, float, float, float, float, float, bool, const FHitProxyId>(nullptr, "FTileRenderer.DrawTile", RHICmdList, View, MaterialRenderProxy, bNeedsToSwitchVerticalAxis, X, Y, SizeX, SizeY, U, V, SizeU, SizeV, bIsHitTesting, HitProxyId); }
};

