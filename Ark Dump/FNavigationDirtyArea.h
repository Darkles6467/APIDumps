#pragma once

#include "BaseDeclarations.h"
struct FNavigationDirtyArea
{
	char __padding[0x20L];
	FBox& BoundsField() { return *GetNativePointerField<FBox*>(this, "FNavigationDirtyArea.Bounds"); }
	int& FlagsField() { return *GetNativePointerField<int*>(this, "FNavigationDirtyArea.Flags"); }
};

