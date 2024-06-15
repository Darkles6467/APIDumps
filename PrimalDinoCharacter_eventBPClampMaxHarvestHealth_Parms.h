#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPClampMaxHarvestHealth_Parms
{
	char __padding[0x4L];
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventBPClampMaxHarvestHealth_Parms.ReturnValue"); }
};

