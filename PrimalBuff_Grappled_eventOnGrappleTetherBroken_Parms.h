#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Grappled_eventOnGrappleTetherBroken_Parms
{
	char __padding[0x4L];
	int& BrokenIndexField() { return *GetNativePointerField<int*>(this, "PrimalBuff_Grappled_eventOnGrappleTetherBroken_Parms.BrokenIndex"); }
};

