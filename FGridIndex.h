#pragma once

#include "BaseDeclarations.h"
struct FGridIndex
{
	char __padding[0x8L];
	int& XField() { return *GetNativePointerField<int*>(this, "FGridIndex.X"); }
	int& YField() { return *GetNativePointerField<int*>(this, "FGridIndex.Y"); }

	// Functions

};

