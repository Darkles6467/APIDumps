#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBP_GetCustomModifier_RotationRate_Parms
{
	char __padding[0x4L];
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventBP_GetCustomModifier_RotationRate_Parms.ReturnValue"); }
};

