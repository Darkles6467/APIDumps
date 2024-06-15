#pragma once

#include "BaseDeclarations.h"
struct FCameraUpdateContext
{
	char __padding[0x18L];
	float& TrueCurrentWeightField() { return *GetNativePointerField<float*>(this, "FCameraUpdateContext.TrueCurrentWeight"); }
	float& NonDebugCurrentWeightField() { return *GetNativePointerField<float*>(this, "FCameraUpdateContext.NonDebugCurrentWeight"); }
	float& DeltaTimeField() { return *GetNativePointerField<float*>(this, "FCameraUpdateContext.DeltaTime"); }
};

