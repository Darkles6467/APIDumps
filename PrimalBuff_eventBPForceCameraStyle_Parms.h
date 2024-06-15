#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBPForceCameraStyle_Parms
{
	char __padding[0x10L];
	TEnumAsByte<enum ECameraStyle::Type>& ReturnValueField() { return *GetNativePointerField<TEnumAsByte<enum ECameraStyle::Type>*>(this, "PrimalBuff_eventBPForceCameraStyle_Parms.ReturnValue"); }
};

