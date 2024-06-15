#pragma once

#include "BaseDeclarations.h"
struct AnimInstance_eventBlueprintTriggerAnimationEvent_Parms
{
	char __padding[0xcL];
	FName& AnimationEventNameField() { return *GetNativePointerField<FName*>(this, "AnimInstance_eventBlueprintTriggerAnimationEvent_Parms.AnimationEventName"); }
	float& playedAnimLengthField() { return *GetNativePointerField<float*>(this, "AnimInstance_eventBlueprintTriggerAnimationEvent_Parms.playedAnimLength"); }
};

