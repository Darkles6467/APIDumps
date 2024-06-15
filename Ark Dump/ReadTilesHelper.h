#pragma once

#include "BaseDeclarations.h"
struct ReadTilesHelper
{
	char __padding[0x110L];
	FieldArray<dtMeshTile *, 32> TilesField() { return {this, "ReadTilesHelper.Tiles"}; }
	int& NumAllocatedField() { return *GetNativePointerField<int*>(this, "ReadTilesHelper.NumAllocated"); }
	dtMeshTile ** AllocatedTilesField() { return GetNativePointerField<dtMeshTile **>(this, "ReadTilesHelper.AllocatedTiles"); }
};

