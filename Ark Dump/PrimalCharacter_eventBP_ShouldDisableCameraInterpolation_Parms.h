#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBP_ShouldDisableCameraInterpolation_Parms
{
	char __padding[0x1L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventBP_ShouldDisableCameraInterpolation_Parms.ReturnValue"); }
};

