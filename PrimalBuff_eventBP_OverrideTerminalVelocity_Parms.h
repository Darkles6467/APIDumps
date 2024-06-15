#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBP_OverrideTerminalVelocity_Parms
{
	char __padding[0x4L];
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "PrimalBuff_eventBP_OverrideTerminalVelocity_Parms.ReturnValue"); }
};

