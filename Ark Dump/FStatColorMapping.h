#pragma once

#include "BaseDeclarations.h"
struct FStatColorMapping
{
	char __padding[0x28L];
	FString& StatNameField() { return *GetNativePointerField<FString*>(this, "FStatColorMapping.StatName"); }
	TArray<FStatColorMapEntry>& ColorMapField() { return *GetNativePointerField<TArray<FStatColorMapEntry>*>(this, "FStatColorMapping.ColorMap"); }

	// Functions

};

