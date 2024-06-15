#pragma once

#include "BaseDeclarations.h"
struct EnvQueryContext_BlueprintBase_eventProvideLocationsSet_Parms
{
	char __padding[0x18L];
	TArray<FVector>& ResultingLocationSetField() { return *GetNativePointerField<TArray<FVector>*>(this, "EnvQueryContext_BlueprintBase_eventProvideLocationsSet_Parms.ResultingLocationSet"); }
};

