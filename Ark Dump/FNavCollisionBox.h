#pragma once

#include "BaseDeclarations.h"
struct FNavCollisionBox
{
	char __padding[0x18L];
	FVector& OffsetField() { return *GetNativePointerField<FVector*>(this, "FNavCollisionBox.Offset"); }
	FVector& ExtentField() { return *GetNativePointerField<FVector*>(this, "FNavCollisionBox.Extent"); }

	// Functions

};

