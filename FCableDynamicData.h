#pragma once

#include "BaseDeclarations.h"
struct FCableDynamicData
{
	char __padding[0x10L];
	TArray<FVector>& CablePointsField() { return *GetNativePointerField<TArray<FVector>*>(this, "FCableDynamicData.CablePoints"); }
};

