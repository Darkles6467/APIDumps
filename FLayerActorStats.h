#pragma once

#include "BaseDeclarations.h"
struct FLayerActorStats
{
	char __padding[0x10L];
	int& TotalField() { return *GetNativePointerField<int*>(this, "FLayerActorStats.Total"); }

	// Functions

};

