#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPOverrideHealthBarOffset_Parms
{
	char __padding[0x10L];
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventBPOverrideHealthBarOffset_Parms.ReturnValue"); }
};

