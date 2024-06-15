#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPGetRiderSocket_Parms
{
	char __padding[0x8L];
	FName& ReturnValueField() { return *GetNativePointerField<FName*>(this, "PrimalDinoCharacter_eventBPGetRiderSocket_Parms.ReturnValue"); }
};

