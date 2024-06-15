#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBPGetDebugInfoString_Parms
{
	char __padding[0x10L];
	FString& ReturnValueField() { return *GetNativePointerField<FString*>(this, "PrimalBuff_eventBPGetDebugInfoString_Parms.ReturnValue"); }
};

