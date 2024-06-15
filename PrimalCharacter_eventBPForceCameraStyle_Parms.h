#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBPForceCameraStyle_Parms
{
	char __padding[0x10L];
	TEnumAsByte<enum ECameraStyle::Type>& ReturnValueField() { return *GetNativePointerField<TEnumAsByte<enum ECameraStyle::Type>*>(this, "PrimalCharacter_eventBPForceCameraStyle_Parms.ReturnValue"); }
};

