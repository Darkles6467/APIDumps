#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Companion_eventGetCompanionWorldLocation_Parms
{
	char __padding[0xcL];
	FVector& ReturnValueField() { return *GetNativePointerField<FVector*>(this, "PrimalBuff_Companion_eventGetCompanionWorldLocation_Parms.ReturnValue"); }
};

