#pragma once

#include "BaseDeclarations.h"
struct FSlotEvaluationPose
{
	char __padding[0x18L];
	TEnumAsByte<enum EAdditiveAnimationType>& AdditiveTypeField() { return *GetNativePointerField<TEnumAsByte<enum EAdditiveAnimationType>*>(this, "FSlotEvaluationPose.AdditiveType"); }
	float& WeightField() { return *GetNativePointerField<float*>(this, "FSlotEvaluationPose.Weight"); }

	// Functions

};

