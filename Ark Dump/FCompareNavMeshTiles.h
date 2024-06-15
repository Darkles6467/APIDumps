#pragma once

#include "BaseDeclarations.h"
struct FCompareNavMeshTiles
{
	char __padding[0x8L];
	const FTileSetItem * TileSetField() { return GetNativePointerField<const FTileSetItem *>(this, "FCompareNavMeshTiles.TileSet"); }
};

