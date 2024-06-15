#pragma once

#include "BaseDeclarations.h"
struct FVolumeUpdateRegion
{
	char __padding[0x2cL];
	FBox& BoundsField() { return *GetNativePointerField<FBox*>(this, "FVolumeUpdateRegion.Bounds"); }
	FIntVector& CellsSizeField() { return *GetNativePointerField<FIntVector*>(this, "FVolumeUpdateRegion.CellsSize"); }
	EVolumeUpdateType& UpdateTypeField() { return *GetNativePointerField<EVolumeUpdateType*>(this, "FVolumeUpdateRegion.UpdateType"); }
};

