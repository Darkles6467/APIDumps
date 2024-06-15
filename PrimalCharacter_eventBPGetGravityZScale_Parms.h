#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBPGetGravityZScale_Parms
{
	char __padding[0x4L];
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "PrimalCharacter_eventBPGetGravityZScale_Parms.ReturnValue"); }
};

