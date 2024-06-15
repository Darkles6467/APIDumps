#pragma once

#include "BaseDeclarations.h"
struct FActiveForceFeedbackEffect
{
	char __padding[0x18L];
	UForceFeedbackEffect * ForceFeedbackEffectField() { return GetNativePointerField<UForceFeedbackEffect *>(this, "FActiveForceFeedbackEffect.ForceFeedbackEffect"); }
	FName& TagField() { return *GetNativePointerField<FName*>(this, "FActiveForceFeedbackEffect.Tag"); }
	float& PlayTimeField() { return *GetNativePointerField<float*>(this, "FActiveForceFeedbackEffect.PlayTime"); }

	// Functions

	bool Update(const float DeltaTime, FForceFeedbackValues * Values) { return NativeCall<bool, const float, FForceFeedbackValues *>(this, "FActiveForceFeedbackEffect.Update", DeltaTime, Values); }
};

