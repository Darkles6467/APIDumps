#pragma once

#include "BaseDeclarations.h"
struct FCullDistanceSizePair
{
	char __padding[0x8L];
	float& SizeField() { return *GetNativePointerField<float*>(this, "FCullDistanceSizePair.Size"); }
	float& CullDistanceField() { return *GetNativePointerField<float*>(this, "FCullDistanceSizePair.CullDistance"); }

	// Functions

};

