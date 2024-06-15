#pragma once

#include "BaseDeclarations.h"
struct FLevelExperienceRamp
{
	char __padding[0x10L];
	TArray<float>& ExperiencePointsForLevelField() { return *GetNativePointerField<TArray<float>*>(this, "FLevelExperienceRamp.ExperiencePointsForLevel"); }

	// Functions

	FLevelExperienceRamp * operator=(const FLevelExperienceRamp * __that) { return NativeCall<FLevelExperienceRamp *, const FLevelExperienceRamp *>(this, "FLevelExperienceRamp.operator=", __that); }
};

