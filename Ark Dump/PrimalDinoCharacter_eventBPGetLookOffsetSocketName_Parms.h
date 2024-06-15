#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPGetLookOffsetSocketName_Parms
{
	char __padding[0x10L];
	FName& ReturnValueField() { return *GetNativePointerField<FName*>(this, "PrimalDinoCharacter_eventBPGetLookOffsetSocketName_Parms.ReturnValue"); }
};

