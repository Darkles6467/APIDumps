#pragma once

#include "BaseDeclarations.h"
struct FScopePreloadCDO
{
	char __padding[0x10L];
	int& CurrentDepthField() { return *GetNativePointerField<int*>(this, "FScopePreloadCDO.CurrentDepth"); }

	// Functions

	bool IsComplete() { return NativeCall<bool>(this, "FScopePreloadCDO.IsComplete"); }
};

