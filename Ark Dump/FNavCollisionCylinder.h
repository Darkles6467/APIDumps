#pragma once

#include "BaseDeclarations.h"
struct FNavCollisionCylinder
{
	char __padding[0x14L];
	FVector& OffsetField() { return *GetNativePointerField<FVector*>(this, "FNavCollisionCylinder.Offset"); }
	float& RadiusField() { return *GetNativePointerField<float*>(this, "FNavCollisionCylinder.Radius"); }
	float& HeightField() { return *GetNativePointerField<float*>(this, "FNavCollisionCylinder.Height"); }

	// Functions

};

