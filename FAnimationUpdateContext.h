#pragma once

#include "BaseDeclarations.h"
#include "FAnimationBaseContext.h"

struct FAnimationUpdateContext : FAnimationBaseContext
{
	char __padding[0x8L];
	float& CurrentWeightField() { return *GetNativePointerField<float*>(this, "FAnimationUpdateContext.CurrentWeight"); }
	float& DeltaTimeField() { return *GetNativePointerField<float*>(this, "FAnimationUpdateContext.DeltaTime"); }
};

