#pragma once

#include "BaseDeclarations.h"
struct FForceFeedbackValues
{
	char __padding[0x10L];
	float& LeftLargeField() { return *GetNativePointerField<float*>(this, "FForceFeedbackValues.LeftLarge"); }
	float& LeftSmallField() { return *GetNativePointerField<float*>(this, "FForceFeedbackValues.LeftSmall"); }
	float& RightLargeField() { return *GetNativePointerField<float*>(this, "FForceFeedbackValues.RightLarge"); }
	float& RightSmallField() { return *GetNativePointerField<float*>(this, "FForceFeedbackValues.RightSmall"); }
};

