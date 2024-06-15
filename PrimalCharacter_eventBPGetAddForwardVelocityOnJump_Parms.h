#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBPGetAddForwardVelocityOnJump_Parms
{
	char __padding[0x4L];
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "PrimalCharacter_eventBPGetAddForwardVelocityOnJump_Parms.ReturnValue"); }
};

