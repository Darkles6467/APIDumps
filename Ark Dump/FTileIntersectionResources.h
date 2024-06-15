#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"

struct FTileIntersectionResources : FRenderResource
{
	char __padding[0xc8L];
	FIntPoint& TileDimensionsField() { return *GetNativePointerField<FIntPoint*>(this, "FTileIntersectionResources.TileDimensions"); }
	FRWBuffer& TileConeAxisAndCosField() { return *GetNativePointerField<FRWBuffer*>(this, "FTileIntersectionResources.TileConeAxisAndCos"); }
	FRWBuffer& TileConeDepthRangesField() { return *GetNativePointerField<FRWBuffer*>(this, "FTileIntersectionResources.TileConeDepthRanges"); }
	FRWBuffer& TileHeadDataUnpackedField() { return *GetNativePointerField<FRWBuffer*>(this, "FTileIntersectionResources.TileHeadDataUnpacked"); }
	FRWBuffer& TileHeadDataField() { return *GetNativePointerField<FRWBuffer*>(this, "FTileIntersectionResources.TileHeadData"); }
	FRWBuffer& TileArrayDataField() { return *GetNativePointerField<FRWBuffer*>(this, "FTileIntersectionResources.TileArrayData"); }
	FRWBuffer& TileArrayNextAllocationField() { return *GetNativePointerField<FRWBuffer*>(this, "FTileIntersectionResources.TileArrayNextAllocation"); }

	// Functions

	void InitDynamicRHI() { NativeCall<void>(this, "FTileIntersectionResources.InitDynamicRHI"); }
	void ReleaseDynamicRHI() { NativeCall<void>(this, "FTileIntersectionResources.ReleaseDynamicRHI"); }
};

