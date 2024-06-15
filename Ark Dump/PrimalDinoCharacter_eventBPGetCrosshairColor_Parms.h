#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPGetCrosshairColor_Parms
{
	char __padding[0x10L];
	FLinearColor& ReturnValueField() { return *GetNativePointerField<FLinearColor*>(this, "PrimalDinoCharacter_eventBPGetCrosshairColor_Parms.ReturnValue"); }
};

