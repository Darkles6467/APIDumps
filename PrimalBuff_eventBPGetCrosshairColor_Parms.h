#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBPGetCrosshairColor_Parms
{
	char __padding[0x4L];
	FColor& ReturnValueField() { return *GetNativePointerField<FColor*>(this, "PrimalBuff_eventBPGetCrosshairColor_Parms.ReturnValue"); }
};

