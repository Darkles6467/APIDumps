#pragma once

#include "BaseDeclarations.h"
struct FScale
{
	char __padding[0xcL];
	FVector& ScaleField() { return *GetNativePointerField<FVector*>(this, "FScale.Scale"); }
};

