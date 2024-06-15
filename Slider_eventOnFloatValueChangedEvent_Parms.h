#pragma once

#include "BaseDeclarations.h"
struct Slider_eventOnFloatValueChangedEvent_Parms
{
	char __padding[0x4L];
	float& ValueField() { return *GetNativePointerField<float*>(this, "Slider_eventOnFloatValueChangedEvent_Parms.Value"); }
};

