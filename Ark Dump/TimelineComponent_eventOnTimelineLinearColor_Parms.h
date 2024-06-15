#pragma once

#include "BaseDeclarations.h"
struct TimelineComponent_eventOnTimelineLinearColor_Parms
{
	char __padding[0x10L];
	FLinearColor& OutputField() { return *GetNativePointerField<FLinearColor*>(this, "TimelineComponent_eventOnTimelineLinearColor_Parms.Output"); }
};

