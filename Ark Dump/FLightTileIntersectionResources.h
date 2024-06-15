#pragma once

#include "BaseDeclarations.h"
struct FLightTileIntersectionResources
{
	char __padding[0x50L];
	FIntPoint& TileDimensionsField() { return *GetNativePointerField<FIntPoint*>(this, "FLightTileIntersectionResources.TileDimensions"); }
	FRWBuffer& TileHeadDataUnpackedField() { return *GetNativePointerField<FRWBuffer*>(this, "FLightTileIntersectionResources.TileHeadDataUnpacked"); }
	FRWBuffer& TileArrayDataField() { return *GetNativePointerField<FRWBuffer*>(this, "FLightTileIntersectionResources.TileArrayData"); }
	bool& b16BitIndicesField() { return *GetNativePointerField<bool*>(this, "FLightTileIntersectionResources.b16BitIndices"); }

	// Functions

	void Initialize() { NativeCall<void>(this, "FLightTileIntersectionResources.Initialize"); }
};

