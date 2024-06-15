#pragma once

#include "BaseDeclarations.h"
struct FActorArrayDistanceSort2D
{
	char __padding[0xcL];
	FVector& FromLocField() { return *GetNativePointerField<FVector*>(this, "FActorArrayDistanceSort2D.FromLoc"); }

	// Functions

};

