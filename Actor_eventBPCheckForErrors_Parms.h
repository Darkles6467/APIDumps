#pragma once

#include "BaseDeclarations.h"
struct Actor_eventBPCheckForErrors_Parms
{
	char __padding[0x10L];
	TArray<FBPMapCheckEntry>& ReturnValueField() { return *GetNativePointerField<TArray<FBPMapCheckEntry>*>(this, "Actor_eventBPCheckForErrors_Parms.ReturnValue"); }
};

