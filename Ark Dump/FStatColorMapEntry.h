#pragma once

#include "BaseDeclarations.h"
struct FStatColorMapEntry
{
	char __padding[0x8L];
	float& InField() { return *GetNativePointerField<float*>(this, "FStatColorMapEntry.In"); }
	FColor& OutField() { return *GetNativePointerField<FColor*>(this, "FStatColorMapEntry.Out"); }

	// Functions

};

