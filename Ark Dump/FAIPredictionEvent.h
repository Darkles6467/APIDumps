#pragma once

#include "BaseDeclarations.h"
struct FAIPredictionEvent
{
	char __padding[0x18L];
	float& TimeToPredictField() { return *GetNativePointerField<float*>(this, "FAIPredictionEvent.TimeToPredict"); }

	// Functions

};

