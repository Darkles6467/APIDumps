#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FVPLPlacementCS : FGlobalShader
{
	char __padding[0x70L];
	FRWShaderParameter& VPLParameterBufferField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FVPLPlacementCS.VPLParameterBuffer"); }
	FRWShaderParameter& VPLDataField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FVPLPlacementCS.VPLData"); }
	FDistanceFieldCulledObjectBufferParameters& ObjectParametersField() { return *GetNativePointerField<FDistanceFieldCulledObjectBufferParameters*>(this, "FVPLPlacementCS.ObjectParameters"); }

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FVPLPlacementCS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, FSceneView * View, FLightSceneProxy * LightSceneProxy, FVector2D InvPlacementGridSizeValue, const FMatrix * WorldToShadowValue, const FMatrix * ShadowToWorldValue, FLightTileIntersectionResources * TileIntersectionResources) { NativeCall<void, FRHICommandList *, FSceneView *, FLightSceneProxy *, FVector2D, const FMatrix *, const FMatrix *, FLightTileIntersectionResources *>(this, "FVPLPlacementCS.SetParameters", RHICmdList, View, LightSceneProxy, InvPlacementGridSizeValue, WorldToShadowValue, ShadowToWorldValue, TileIntersectionResources); }
	void UnsetParameters(FRHICommandList * RHICmdList) { NativeCall<void, FRHICommandList *>(this, "FVPLPlacementCS.UnsetParameters", RHICmdList); }
};

