#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventGetOverrideWaterJumpVelocity_Parms
{
	char __padding[0x8L];
	float& OutOfWaterZField() { return *GetNativePointerField<float*>(this, "PrimalBuff_eventGetOverrideWaterJumpVelocity_Parms.OutOfWaterZ"); }
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "PrimalBuff_eventGetOverrideWaterJumpVelocity_Parms.ReturnValue"); }
};

