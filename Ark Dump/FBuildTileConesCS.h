#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FBuildTileConesCS : FGlobalShader
{
	char __padding[0xc0L];
	FDeferredPixelShaderParameters& DeferredParametersField() { return *GetNativePointerField<FDeferredPixelShaderParameters*>(this, "FBuildTileConesCS.DeferredParameters"); }
	FAOParameters& AOParametersField() { return *GetNativePointerField<FAOParameters*>(this, "FBuildTileConesCS.AOParameters"); }
	FRWShaderParameter& TileConeAxisAndCosField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FBuildTileConesCS.TileConeAxisAndCos"); }
	FRWShaderParameter& TileConeDepthRangesField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FBuildTileConesCS.TileConeDepthRanges"); }
	FRWShaderParameter& TileHeadDataUnpackedField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FBuildTileConesCS.TileHeadDataUnpacked"); }

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FBuildTileConesCS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, FSceneView * View, FSceneRenderTargetItem * DistanceFieldNormal, FScene * Scene, FVector2D NumGroupsValue, const FDistanceFieldAOParameters * Parameters) { NativeCall<void, FRHICommandList *, FSceneView *, FSceneRenderTargetItem *, FScene *, FVector2D, const FDistanceFieldAOParameters *>(this, "FBuildTileConesCS.SetParameters", RHICmdList, View, DistanceFieldNormal, Scene, NumGroupsValue, Parameters); }
};

