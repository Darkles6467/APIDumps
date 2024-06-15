#pragma once

#include "BaseDeclarations.h"
struct FRecastVoxelCache
{
	char __padding[0x10L];
	int& NumTilesField() { return *GetNativePointerField<int*>(this, "FRecastVoxelCache.NumTiles"); }
	FRecastVoxelCache::FTileInfo * TilesField() { return GetNativePointerField<FRecastVoxelCache::FTileInfo *>(this, "FRecastVoxelCache.Tiles"); }
};

