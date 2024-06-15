#pragma once

#include "BaseDeclarations.h"
struct Actor_eventBP_OverrideTargetingLocation_Parms
{
	char __padding[0x18L];
	FVector& ReturnValueField() { return *GetNativePointerField<FVector*>(this, "Actor_eventBP_OverrideTargetingLocation_Parms.ReturnValue"); }
};

