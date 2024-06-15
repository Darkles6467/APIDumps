#pragma once

#include "BaseDeclarations.h"
struct FTimingSeries
{
	char __padding[0x10L];
	TArray<float>& TimingValuesField() { return *GetNativePointerField<TArray<float>*>(this, "FTimingSeries.TimingValues"); }
};

