#pragma once

#include "BaseDeclarations.h"
struct FDistanceVisibleLevel
{
	char __padding[0x18L];
	int& TileIdxField() { return *GetNativePointerField<int*>(this, "FDistanceVisibleLevel.TileIdx"); }
	int& LODIndexField() { return *GetNativePointerField<int*>(this, "FDistanceVisibleLevel.LODIndex"); }
	bool& bBlockField() { return *GetNativePointerField<bool*>(this, "FDistanceVisibleLevel.bBlock"); }
	bool& bOnlyVisibleField() { return *GetNativePointerField<bool*>(this, "FDistanceVisibleLevel.bOnlyVisible"); }
};

