#pragma once

#include "BaseDeclarations.h"
struct TimelineComponent_eventOnTimelineFloat_Parms
{
	char __padding[0x4L];
	float& OutputField() { return *GetNativePointerField<float*>(this, "TimelineComponent_eventOnTimelineFloat_Parms.Output"); }
};

