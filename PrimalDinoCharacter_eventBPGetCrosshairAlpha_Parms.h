#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPGetCrosshairAlpha_Parms
{
	char __padding[0x4L];
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventBPGetCrosshairAlpha_Parms.ReturnValue"); }
};

