#pragma once

#include "BaseDeclarations.h"
struct PrimalStructure_eventBPOverrideTargetLocation_Parms
{
	char __padding[0x18L];
	FVector& attackPosField() { return *GetNativePointerField<FVector*>(this, "PrimalStructure_eventBPOverrideTargetLocation_Parms.attackPos"); }
	FVector& ReturnValueField() { return *GetNativePointerField<FVector*>(this, "PrimalStructure_eventBPOverrideTargetLocation_Parms.ReturnValue"); }
};

