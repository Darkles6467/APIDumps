#pragma once

#include "BaseDeclarations.h"
struct EnvQueryContext_BlueprintBase_eventProvideSingleLocation_Parms
{
	char __padding[0x18L];
	FVector& ResultingLocationField() { return *GetNativePointerField<FVector*>(this, "EnvQueryContext_BlueprintBase_eventProvideSingleLocation_Parms.ResultingLocation"); }
};

