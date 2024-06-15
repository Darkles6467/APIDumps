#pragma once

#include "BaseDeclarations.h"
struct AnimInstance_eventBlueprintPlayAnimationEvent_Parms
{
	char __padding[0x10L];
	UAnimMontage * AnimationMontageField() { return GetNativePointerField<UAnimMontage *>(this, "AnimInstance_eventBlueprintPlayAnimationEvent_Parms.AnimationMontage"); }
	float& PlayRateField() { return *GetNativePointerField<float*>(this, "AnimInstance_eventBlueprintPlayAnimationEvent_Parms.PlayRate"); }
	float& playedAnimLengthField() { return *GetNativePointerField<float*>(this, "AnimInstance_eventBlueprintPlayAnimationEvent_Parms.playedAnimLength"); }
};

