#pragma once

#include "BaseDeclarations.h"
struct Actor_eventBPGetBonesToHideOnAllocation_Parms
{
	char __padding[0x10L];
	TArray<FName>& ReturnValueField() { return *GetNativePointerField<TArray<FName>*>(this, "Actor_eventBPGetBonesToHideOnAllocation_Parms.ReturnValue"); }
};

