#pragma once

#include "BaseDeclarations.h"
struct Actor_eventBPOverrideUILocation_Parms
{
	char __padding[0x18L];
	FVector& ReturnValueField() { return *GetNativePointerField<FVector*>(this, "Actor_eventBPOverrideUILocation_Parms.ReturnValue"); }
};

