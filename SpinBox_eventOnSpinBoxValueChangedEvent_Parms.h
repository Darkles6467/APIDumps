#pragma once

#include "BaseDeclarations.h"
struct SpinBox_eventOnSpinBoxValueChangedEvent_Parms
{
	char __padding[0x4L];
	float& InValueField() { return *GetNativePointerField<float*>(this, "SpinBox_eventOnSpinBoxValueChangedEvent_Parms.InValue"); }
};

