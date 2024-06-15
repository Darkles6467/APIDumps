#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBPGetDebugInfoString_Parms
{
	char __padding[0x10L];
	FString& ReturnValueField() { return *GetNativePointerField<FString*>(this, "PrimalCharacter_eventBPGetDebugInfoString_Parms.ReturnValue"); }
};

