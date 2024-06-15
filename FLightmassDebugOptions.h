#pragma once

#include "BaseDeclarations.h"
struct FLightmassDebugOptions
{
	char __padding[0x10L];
	float& CoplanarToleranceField() { return *GetNativePointerField<float*>(this, "FLightmassDebugOptions.CoplanarTolerance"); }
	float& ExecutionTimeDivisorField() { return *GetNativePointerField<float*>(this, "FLightmassDebugOptions.ExecutionTimeDivisor"); }

	// Functions

};

