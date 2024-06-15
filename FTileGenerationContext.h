#pragma once

#include "BaseDeclarations.h"
struct FTileGenerationContext
{
	char __padding[0x48L];
	dtTileCacheAlloc * AllocatorField() { return GetNativePointerField<dtTileCacheAlloc *>(this, "FTileGenerationContext.Allocator"); }
	dtTileCacheLayer * LayerField() { return GetNativePointerField<dtTileCacheLayer *>(this, "FTileGenerationContext.Layer"); }
	dtTileCacheDistanceField * DistanceFieldField() { return GetNativePointerField<dtTileCacheDistanceField *>(this, "FTileGenerationContext.DistanceField"); }
	dtTileCacheContourSet * ContourSetField() { return GetNativePointerField<dtTileCacheContourSet *>(this, "FTileGenerationContext.ContourSet"); }
	dtTileCacheClusterSet * ClusterSetField() { return GetNativePointerField<dtTileCacheClusterSet *>(this, "FTileGenerationContext.ClusterSet"); }
	dtTileCachePolyMesh * PolyMeshField() { return GetNativePointerField<dtTileCachePolyMesh *>(this, "FTileGenerationContext.PolyMesh"); }
	dtTileCachePolyMeshDetail * DetailMeshField() { return GetNativePointerField<dtTileCachePolyMeshDetail *>(this, "FTileGenerationContext.DetailMesh"); }
	TArray<FNavMeshTileData>& NavigationDataField() { return *GetNativePointerField<TArray<FNavMeshTileData>*>(this, "FTileGenerationContext.NavigationData"); }

	// Functions

	void ResetIntermediateData() { NativeCall<void>(this, "FTileGenerationContext.ResetIntermediateData"); }
};

