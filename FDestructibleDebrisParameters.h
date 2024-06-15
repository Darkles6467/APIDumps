#pragma once

#include "BaseDeclarations.h"
struct FDestructibleDebrisParameters
{
	char __padding[0x2cL];
	float& DebrisLifetimeMinField() { return *GetNativePointerField<float*>(this, "FDestructibleDebrisParameters.DebrisLifetimeMin"); }
	float& DebrisLifetimeMaxField() { return *GetNativePointerField<float*>(this, "FDestructibleDebrisParameters.DebrisLifetimeMax"); }
	float& DebrisMaxSeparationMinField() { return *GetNativePointerField<float*>(this, "FDestructibleDebrisParameters.DebrisMaxSeparationMin"); }
	float& DebrisMaxSeparationMaxField() { return *GetNativePointerField<float*>(this, "FDestructibleDebrisParameters.DebrisMaxSeparationMax"); }
	FBox& ValidBoundsField() { return *GetNativePointerField<FBox*>(this, "FDestructibleDebrisParameters.ValidBounds"); }

	// Functions

};

