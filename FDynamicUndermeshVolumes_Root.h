#pragma once

#include "BaseDeclarations.h"
struct FDynamicUndermeshVolumes_Root
{
	char __padding[0x10L];
	TArray<FDynamicUndermeshVolumes_MapSet>& rootField() { return *GetNativePointerField<TArray<FDynamicUndermeshVolumes_MapSet>*>(this, "FDynamicUndermeshVolumes_Root.root"); }

	// Functions

};

