#pragma once

#include "BaseDeclarations.h"
struct PrimalAIState_eventBPGetDebugInfoString_Parms
{
	char __padding[0x10L];
	FString& ReturnValueField() { return *GetNativePointerField<FString*>(this, "PrimalAIState_eventBPGetDebugInfoString_Parms.ReturnValue"); }
};

