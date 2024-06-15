#pragma once

#include "BaseDeclarations.h"
struct FNavMeshGenerationResult
{
	char __padding[0x30L];
	unsigned __int64& OldTileRefField() { return *GetNativePointerField<unsigned __int64*>(this, "FNavMeshGenerationResult.OldTileRef"); }
	char * OldRawNavDataField() { return GetNativePointerField<char *>(this, "FNavMeshGenerationResult.OldRawNavData"); }
	unsigned int& TileIndexField() { return *GetNativePointerField<unsigned int*>(this, "FNavMeshGenerationResult.TileIndex"); }
	FNavMeshTileData& NewNavDataField() { return *GetNativePointerField<FNavMeshTileData*>(this, "FNavMeshGenerationResult.NewNavData"); }
};

