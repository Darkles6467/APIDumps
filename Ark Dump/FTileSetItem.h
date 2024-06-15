#pragma once

#include "BaseDeclarations.h"
struct FTileSetItem
{
	char __padding[0x18L];
	__int16& XField() { return *GetNativePointerField<__int16*>(this, "FTileSetItem.X"); }
	__int16& YField() { return *GetNativePointerField<__int16*>(this, "FTileSetItem.Y"); }
	FVector2D& TileCenterField() { return *GetNativePointerField<FVector2D*>(this, "FTileSetItem.TileCenter"); }
	float& Dist2DSqField() { return *GetNativePointerField<float*>(this, "FTileSetItem.Dist2DSq"); }
	int& SortOrderField() { return *GetNativePointerField<int*>(this, "FTileSetItem.SortOrder"); }
};

