#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FPopulateCacheCS : FGlobalShader
{
	char __padding[0xf0L];
	FDeferredPixelShaderParameters& DeferredParametersField() { return *GetNativePointerField<FDeferredPixelShaderParameters*>(this, "FPopulateCacheCS.DeferredParameters"); }
	FAOParameters& AOParametersField() { return *GetNativePointerField<FAOParameters*>(this, "FPopulateCacheCS.AOParameters"); }
	FAOLevelParameters& AOLevelParametersField() { return *GetNativePointerField<FAOLevelParameters*>(this, "FPopulateCacheCS.AOLevelParameters"); }
	FRWShaderParameter& IrradianceCachePositionRadiusField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FPopulateCacheCS.IrradianceCachePositionRadius"); }
	FRWShaderParameter& IrradianceCacheNormalField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FPopulateCacheCS.IrradianceCacheNormal"); }
	FRWShaderParameter& IrradianceCacheTileCoordinateField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FPopulateCacheCS.IrradianceCacheTileCoordinate"); }
	FRWShaderParameter& ScatterDrawParametersField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FPopulateCacheCS.ScatterDrawParameters"); }

	// Functions

	unsigned int GetTypeSize() { return NativeCall<unsigned int>(this, "FPopulateCacheCS.GetTypeSize"); }
	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FPopulateCacheCS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, FSceneView * View, FSceneRenderTargetItem * DistanceFieldAOIrradianceCacheSplat, FSceneRenderTargetItem * DistanceFieldNormal, int DownsampleFactorValue, int DepthLevel, FIntPoint TileListGroupSizeValue, const FDistanceFieldAOParameters * Parameters) { NativeCall<void, FRHICommandList *, FSceneView *, FSceneRenderTargetItem *, FSceneRenderTargetItem *, int, int, FIntPoint, const FDistanceFieldAOParameters *>(this, "FPopulateCacheCS.SetParameters", RHICmdList, View, DistanceFieldAOIrradianceCacheSplat, DistanceFieldNormal, DownsampleFactorValue, DepthLevel, TileListGroupSizeValue, Parameters); }
};

