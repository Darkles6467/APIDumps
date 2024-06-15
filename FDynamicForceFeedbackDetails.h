#pragma once

#include "BaseDeclarations.h"
struct FDynamicForceFeedbackDetails
{
	char __padding[0x8L];
	float& IntensityField() { return *GetNativePointerField<float*>(this, "FDynamicForceFeedbackDetails.Intensity"); }

	// Functions

	void Update(FForceFeedbackValues * Values) { NativeCall<void, FForceFeedbackValues *>(this, "FDynamicForceFeedbackDetails.Update", Values); }
};

