#pragma once

#include "BaseDeclarations.h"
struct FSavedFadeState
{
	char __padding[0x18L];
	bool& bEnableFadingField() { return *GetNativePointerField<bool*>(this, "FSavedFadeState.bEnableFading"); }
	float& FadeAmountField() { return *GetNativePointerField<float*>(this, "FSavedFadeState.FadeAmount"); }
	float& FadeTimeRemainingField() { return *GetNativePointerField<float*>(this, "FSavedFadeState.FadeTimeRemaining"); }
};

