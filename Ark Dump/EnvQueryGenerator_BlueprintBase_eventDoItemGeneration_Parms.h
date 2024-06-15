#pragma once

#include "BaseDeclarations.h"
struct EnvQueryGenerator_BlueprintBase_eventDoItemGeneration_Parms
{
	char __padding[0x10L];
	TArray<FVector>& ContextLocationsField() { return *GetNativePointerField<TArray<FVector>*>(this, "EnvQueryGenerator_BlueprintBase_eventDoItemGeneration_Parms.ContextLocations"); }
};

