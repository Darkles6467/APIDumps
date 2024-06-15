#pragma once

#include "BaseDeclarations.h"
struct FPositionVertex
{
	char __padding[0xcL];
	FVector& PositionField() { return *GetNativePointerField<FVector*>(this, "FPositionVertex.Position"); }
};

