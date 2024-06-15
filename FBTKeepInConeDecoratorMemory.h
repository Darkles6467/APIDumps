#pragma once

#include "BaseDeclarations.h"
struct FBTKeepInConeDecoratorMemory
{
	char __padding[0xcL];
	FVector& InitialDirectionField() { return *GetNativePointerField<FVector*>(this, "FBTKeepInConeDecoratorMemory.InitialDirection"); }
};

