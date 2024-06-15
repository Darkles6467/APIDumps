#pragma once

#include "BaseDeclarations.h"
struct FDepthOfFieldStats
{
	char __padding[0x2L];
	bool& bNearField() { return *GetNativePointerField<bool*>(this, "FDepthOfFieldStats.bNear"); }
	bool& bFarField() { return *GetNativePointerField<bool*>(this, "FDepthOfFieldStats.bFar"); }
};

