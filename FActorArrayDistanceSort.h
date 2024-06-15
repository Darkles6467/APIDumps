#pragma once

#include "BaseDeclarations.h"
struct FActorArrayDistanceSort
{
	char __padding[0xcL];
	FVector& FromLocField() { return *GetNativePointerField<FVector*>(this, "FActorArrayDistanceSort.FromLoc"); }
};

