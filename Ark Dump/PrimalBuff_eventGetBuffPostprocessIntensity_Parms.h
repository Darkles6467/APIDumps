#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventGetBuffPostprocessIntensity_Parms
{
	char __padding[0x4L];
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "PrimalBuff_eventGetBuffPostprocessIntensity_Parms.ReturnValue"); }
};

