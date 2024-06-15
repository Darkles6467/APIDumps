#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UForceFeedbackEffect : UObject
{
	char __padding[0x18L];
	TArray<FForceFeedbackChannelDetails>& ChannelDetailsField() { return *GetNativePointerField<TArray<FForceFeedbackChannelDetails>*>(this, "UForceFeedbackEffect.ChannelDetails"); }
	float& DurationField() { return *GetNativePointerField<float*>(this, "UForceFeedbackEffect.Duration"); }

	// Functions

	float GetDuration() { return NativeCall<float>(this, "UForceFeedbackEffect.GetDuration"); }
	void GetValues(const float EvalTime, FForceFeedbackValues * Values) { NativeCall<void, const float, FForceFeedbackValues *>(this, "UForceFeedbackEffect.GetValues", EvalTime, Values); }
};

