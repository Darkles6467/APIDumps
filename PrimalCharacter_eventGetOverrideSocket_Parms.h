#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventGetOverrideSocket_Parms
{
	char __padding[0x10L];
	FName& fromField() { return *GetNativePointerField<FName*>(this, "PrimalCharacter_eventGetOverrideSocket_Parms.from"); }
	FName& ReturnValueField() { return *GetNativePointerField<FName*>(this, "PrimalCharacter_eventGetOverrideSocket_Parms.ReturnValue"); }
};

