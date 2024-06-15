#pragma once

#include "BaseDeclarations.h"
struct FSimpleLightPerViewEntry
{
	char __padding[0xcL];
	FVector& PositionField() { return *GetNativePointerField<FVector*>(this, "FSimpleLightPerViewEntry.Position"); }
};

