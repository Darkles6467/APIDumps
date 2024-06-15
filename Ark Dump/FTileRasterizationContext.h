#pragma once

#include "BaseDeclarations.h"
struct FTileRasterizationContext
{
	char __padding[0x28L];
	rcHeightfield * SolidHFField() { return GetNativePointerField<rcHeightfield *>(this, "FTileRasterizationContext.SolidHF"); }
	rcHeightfieldLayerSet * LayerSetField() { return GetNativePointerField<rcHeightfieldLayerSet *>(this, "FTileRasterizationContext.LayerSet"); }
	rcCompactHeightfield * CompactHFField() { return GetNativePointerField<rcCompactHeightfield *>(this, "FTileRasterizationContext.CompactHF"); }
	TArray<FNavMeshTileData>& LayersField() { return *GetNativePointerField<TArray<FNavMeshTileData>*>(this, "FTileRasterizationContext.Layers"); }
};

