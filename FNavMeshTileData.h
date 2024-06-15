#pragma once

#include "BaseDeclarations.h"
struct FNavMeshTileData
{
	char __padding[0x18L];
	int& LayerIndexField() { return *GetNativePointerField<int*>(this, "FNavMeshTileData.LayerIndex"); }
	int& DataSizeField() { return *GetNativePointerField<int*>(this, "FNavMeshTileData.DataSize"); }
	TSharedPtr<FNavMeshTileData::FNavData,1>& NavDataField() { return *GetNativePointerField<TSharedPtr<FNavMeshTileData::FNavData,1>*>(this, "FNavMeshTileData.NavData"); }

	// Functions

	FNavMeshTileData * operator=(const FNavMeshTileData * __that) { return NativeCall<FNavMeshTileData *, const FNavMeshTileData *>(this, "FNavMeshTileData.operator=", __that); }
};

